/*
 * Copyright (C) 2012 Sistemas Operativos - UTN FRBA. All rights reserved.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef LIST_H_
#define LIST_H_

	#include <stdbool.h>

  typedef struct link_element{
		void *data;
		struct link_element *next;
	} t_link_element;

	typedef struct {
		t_link_element *head;
		int elements_count;
	} list_t;

	typedef struct {
		list_t *self;
		t_link_element *prev;
		t_link_element *element;
		int index;
	} list_iterator_t;

	/**
	* @NAME: list_create
	* @DESC: Crea una lista
	*/
	list_t * list_create();

	/**
	* @NAME: list_destroy
	* @DESC: Destruye una lista sin liberar
	* los elementos contenidos en los nodos
	*/
	void list_destroy(list_t *);

	/**
	* @NAME: list_destroy_and_destroy_elements
	* @DESC: Destruye una lista y sus elementos
	*/
	void list_destroy_and_destroy_elements(list_t*, void(*element_destroyer)(void*));

	/**
	* @NAME: list_add
	* @DESC: Agrega un elemento al final de la lista
	*/
	int list_add(list_t *, void *element);

	/**
	* @NAME: list_add_in_index
	* @DESC: Agrega un elemento en una posicion determinada de la lista
	*/
	void list_add_in_index(list_t *, int index, void *element);

	/**
	* @NAME: list_add_sorted
	* @DESC: Agrega un elemento a una lista ordenada, manteniendo el
	* orden definido por el comparador
	* El comparador devuelve si el primer parametro debe aparecer antes que el
	* segundo en la lista
	*/
	int list_add_sorted(list_t *self, void* data, bool (*comparator)(void*,void*));

	/**
	* @NAME: list_add_all
	* @DESC: Agrega todos los elementos de
	* la segunda lista en la primera
	*/
	void list_add_all(list_t*, list_t* other);

	/**
	* @NAME: list_get
	* @DESC: Retorna el contenido de una posicion determianda de la lista
	*/
	void *list_get(list_t *, int index);

	/**
	* @NAME: list_get_minimum
	* @DESC: Retorna el minimo de la lista según el comparador
	* El comparador devuelve cuál es el mínimo de dos valores
	*/
	void *list_get_minimum(list_t* self, void* (*minimum)(void*, void*));

	/**
	* @NAME: list_get_maximum
	* @DESC: Retorna el maximo de la lista según el comparador
	* El comparador devuelve cuál es el máximo de dos valores
	*/
	void *list_get_maximum(list_t* self, void* (*maximum)(void*, void*));

	/**
	* @NAME: list_take
	* @DESC: Retorna una nueva lista con
	* los primeros n elementos
	*/
	list_t* list_take(list_t*, int count);

	/**
	* @NAME: list_take_and_remove
	* @DESC: Retorna una nueva lista con
	* los primeros n elementos, eliminando
	* del origen estos elementos
	*/
	list_t* list_take_and_remove(list_t*, int count);

	/**
	* @NAME: list_filter
	* @DESC: Retorna una nueva lista con los
	* elementos que cumplen la condicion
	*/
	list_t* list_filter(list_t*, bool(*condition)(void*));

	/**
	* @NAME: list_map
	* @DESC: Retorna una nueva lista con los
	* con los elementos transformados
	*/
	list_t* list_map(list_t*, void*(*transformer)(void*));

	/**
	* @NAME: list_replace
	* @DESC: Coloca un elemento en una de la posiciones
	* de la lista retornando el valor anterior
	*/
	void *list_replace(list_t*, int index, void* element);

	/**
	* @NAME: list_replace_and_destroy_element
	* @DESC: Coloca un valor en una de la posiciones
	* de la lista liberando el valor anterior
	*/
	void list_replace_and_destroy_element(list_t*, int index, void* element, void(*element_destroyer)(void*));

	/**
	* @NAME: list_remove
	* @DESC: Remueve un elemento de la lista de
	* una determinada posicion y lo retorna.
	*/
	void *list_remove(list_t *, int index);

	/**
	* @NAME: list_remove_and_destroy_element
	* @DESC: Remueve un elemento de la lista de una
	* determinada posicion y libera la memoria.
	*/
	void list_remove_and_destroy_element(list_t *, int index, void(*element_destroyer)(void*));

	/**
	* @NAME: list_remove_by_condition
	* @DESC: Remueve el primer elemento de la lista
	* que haga que condition devuelva != 0.
	*/
	void *list_remove_by_condition(list_t *, bool(*condition)(void*));

	/**
	* @NAME: list_remove_and_destroy_by_condition
	* @DESC: Remueve y destruye el primer elemento de
	* la lista que hagan que condition devuelva != 0.
	*/
	void list_remove_and_destroy_by_condition(list_t *, bool(*condition)(void*), void(*element_destroyer)(void*));

	/**
	* @NAME: list_clean
	* @DESC: Quita todos los elementos de la lista.
	*/
	void list_clean(list_t *);

	/**
	* @NAME: list_clean
	* @DESC: Quita y destruye todos los elementos de la lista
	*/
	void list_clean_and_destroy_elements(list_t *self, void(*element_destroyer)(void*));

	/**
	* @NAME: list_iterate
	* @DESC: Itera la lista llamando al closure por cada elemento
	*/
	void list_iterate(list_t *, void(*closure)(void*));

	/**
	* @NAME: list_find
	* @DESC: Retorna el primer valor encontrado, el cual haga que condition devuelva != 0
	*/
	void *list_find(list_t *, bool(*closure)(void*));

	/**
	* @NAME: list_size
	* @DESC: Retorna el tamaño de la lista
	*/
	int list_size(list_t *);

	/**
	* @NAME: list_is_empty
	* @DESC: Verifica si la lista esta vacia
	*/
	int list_is_empty(list_t *);

	/**
	* @NAME: list_sort
	* @DESC: Ordena la lista segun el comparador
	* El comparador devuelve si el primer parametro debe aparecer antes que el
	* segundo en la lista
	*/
	void list_sort(list_t *, bool (*comparator)(void *, void *));

	/**
	* @NAME: list_sorted
	* @DESC: Retorna una lista nueva ordenada segun el comparador
	* El comparador devuelve si el primer parametro debe aparecer antes que el
	* segundo en la lista
	*/
	list_t* list_sorted(list_t *, bool (*comparator)(void *, void *));

	/**
	* @NAME: list_count_satisfying
	* @DESC: Cuenta la cantidad de elementos de
	* la lista que cumplen una condición
	*/
	int list_count_satisfying(list_t* self, bool(*condition)(void*));

	/**
	* @NAME: list_any_satisfy
	* @DESC: Determina si algún elemento
	* de la lista cumple una condición
	*/
	bool list_any_satisfy(list_t* self, bool(*condition)(void*));

	/**
	* @NAME: list_any_satisfy
	* @DESC: Determina si todos los elementos
	* de la lista cumplen una condición
	*/
	bool list_all_satisfy(list_t* self, bool(*condition)(void*));

	/**
	* @NAME: list_duplicate
	* @DESC: Crea una lista nueva con los mismos elementos que la original.
	**/
	list_t* list_duplicate(list_t* self);

	/**
	 * @NAME: list_fold1
	 * @DESC: Devuelve un valor que resulta de aplicar la operacion entre todos los elementos
	 * de la lista, tomando al primero como semilla y partiendo desde el segundo (si existe).
	 *
	 * La funcion 'operation' debe recibir dos valores del tipo de los elementos de la lista.
	 */
	void* list_fold1(list_t* self, void* (*operation)(void*, void*));

	/**
	 * @NAME: list_fold
	 * @DESC: Devuelve un valor que resulta de aplicar la operacion entre todos los elementos 
	 * de la lista, partiendo desde el primero.
	 *
	 * La funcion 'operation' debe recibir dos valores: uno del tipo del valor initial (seed)
	 * y otro del tipo de los elementos de la lista.
	 */
	void* list_fold(list_t* self, void* seed, void*(*operation)(void*, void*));

	/**
	 * @NAME: list_iterator_create
	 * @DESC: Inicializa una iteración externa de la lista
	 */
	list_iterator_t* list_iterator_create(list_t* list);

	/**
	 * @NAME: list_iterator_has_next
	 * @DESC: Devuelve true si quedan elementos de la lista por recorrer
	 */
	bool list_iterator_has_next(list_iterator_t* iterator);

	/**
	 * @NAME: list_iterator_next
	 * @DESC: Avanza hacia el siguiente elemento a iterar de la lista y
	 * lo devuelve
	 */
	void* list_iterator_next(list_iterator_t* iterator);

	/**
	 * @NAME: list_iterator_remove
	 * @DESC: Remueve de la lista al elemento actual de la iteración
	 */
	void list_iterator_remove(list_iterator_t* iterator);

	/**
	 * @NAME: list_iterator_destroy
	 * @DESC: Finaliza la instancia de iteración externa liberando sus
	 * recursos
	 */
	void list_iterator_destroy(list_iterator_t* iterator);

#endif /*LIST_H_*/
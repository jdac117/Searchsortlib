#pragma once
#ifndef DELANGEL_ALGS_H
#define DELANGEL_ALGS_H

#include <vector>

template <typename T>
bool linear_search(const std::vector<T>& items, const T& target){
	for (std::size_t i = 0; i < items.size(); i++){
		if (items[i] == target){
			return true;
		}
	}
	return false;
}

// binary search custom - vector must already be sorted before use
template <typename T>
bool binary_search_custom(const std::vector <T> items, const T& target){
	std::size_t left = 0;
	std::size_t right = items.size();

	while (left < right){
		std::size_t mid = left + (right - left) / 2;

		if (items[mid] == target){
			return true;
		}
		else if (items[mid] < target){
			left = mid + 1;
		} else {
			right = mid;
		}
	}
	return false;
}

template <typename T>
void selection_sort(std::vector<T>& items){
	for (std::size_t i = 0; i < items.size(); i++){
		std::size_t min_index = i;

		// find the smallest elemnt remaining as we loop through the items
		for (std::size_t j = i+ 1; j < items.size(); j++){
			if (items[j] < items[min_index]){
				min_index = j;
			}
		}

		// swap the smallest elemnt into position
		 if (min_index != i){
                	T temp = items[i];
                 	items[i] = items[min_index];
                 	items[min_index] = temp;
                 }

	}
}

#endif

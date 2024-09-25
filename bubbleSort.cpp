#include <iostream> 
#include <vector>

using namespace std;

void bubbleSearch(vector <int>& calificaciones){
    int n = calificaciones.size();
    for(int i = 0; i < n; i++) {
        for(int j= 0; j < n -1 -i; j++) {
            if(calificaciones[j] > calificaciones[j+1]) {
                int temp = calificaciones[j];
                calificaciones[j] = calificaciones[j+1];
                calificaciones[j + 1] = temp;
            }
        }
    }
}
int main(){

    int numCalificaciones = 7;
    vector <int> calificaciones(numCalificaciones);

    for (int i = 0; i < numCalificaciones; i++) {
        cout << "Ingrese la calificación " << i + 1 << endl;
        cin >> calificaciones[i];
    }

    bubbleSearch(calificaciones);

    cout << "Calificaciones ordenadas: ";
    for (int calificacion : calificaciones) {
        cout << calificacion << " ";
    }

    return 0;
}

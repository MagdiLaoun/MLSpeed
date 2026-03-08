# MLSpeed
This library allows you to calculate speed from position, given at regular intervals by a sensor.
La vitesse est par définition la dérivée de la position par rapport au temps.
Soit pn et tn la position et le temps mesurés à l'instant tn.
Normallement, la vitesse à l'instant tn se calcule ainsi: vn = (pn - pn_1)/(tn - tn_1).
Si les intervalles de temps sont très courts, le calcul de la vitesse est imprécis.
La méthode de cette librairie est de calculer la moyenne de la vitesse sur les x dernières mesures de position et de temps.
La méthode update(float newValue_) introduit une nouvelle valeur de position newValue, calcule et renvoie la vitesse sur
la moyenne des "count" dernières mesures contenues dans le tableau "position".
La première valeur du tableau est retirée et remplacée par la nouvelle valeur.

This library allows you to calculate speed from position, given at regular intervals by a sensor.
Speed is by definition the derivative of position with respect to time.
Let pn and tn be the position and time measured at time tn.
Normally, the speed at time tn is calculated as follows: vn = (pn - pn_1)/(tn - tn_1).
If the time intervals are very short, the speed calculation is inaccurate.
This library's method is to calculate the average speed over the last x position and time measurements.
The update(float newValue_) method introduces a new position value newValue, calculates and returns the speed based on
the average of the last ‘count’ measurements contained in the ‘position’ array.
The first value in the array is removed and replaced with the new value.

/*************************************************
	Funciones de utilidad No primordiales
**************************************************/



template <class T>
string strcvr(T toConvert){
	stringstream ss;
	string Bunked;
	ss << toConvert;
	ss >> Bunked;
	return Bunked;
}

template <class T>
string Concatenate(T s1,T s2,T s3,T s4,T s5){
	return strcvr(s1)+strcvr(s2)+strcvr(s3)+strcvr(s4)+strcvr(s5);
}
template <class T>
string Concatenate(T s1,T s2,T s3,T s4){
	
}
template <class T>
string Concatenate(T s1,T s2,T s3){
	
}
template <class T>
string Concatenate(T s1,T s2){
	
}

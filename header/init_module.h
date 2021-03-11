

typedef void (*fptr)(int);


int no_of_events;


void event_execute(int );
void register_event(int id, int bitmap,fptr fp);

void freeup();

void module_event();

void module1(int event);
void module2(int event);
void module3(int event);
void module4(int event);
void module5(int event);

#include <pthread.h>
#include <stdio>
#include <unistd.h>

using namespace std;

void hello_count();

/*int pthread_create(	pthread_t *thread, 
						const pthread_attr_t *attr, 
						void*(*start)(void *), //Function to call (start) with arg eg start(arg)
						void *arg); */


void main() {						

	cout << 'main: Creating threads\n';
	
	pthread_t thread1;
	pthread_t thread2;
	
	arg1 = 0;
	arg2 = 1;
	
	pthread_create(	&thread1,
				NULL,
				hello_count,
				arg1);
				
	pthread_create(	&thread2,
				NULL,
				hello_count,
				arg2);
						
	cout << 'main: Waiting for threads to finish\n';					
						
	ret1 = pthread_join(thread1, retval1);
	ret2 = pthread_join(thread2, retval2);						
	
	cout << 'Main: Exiting with exit status: ' << ret1 << ' and ' << ret2 << endl;
	
	return;
}

void hello_count(int ID)
{
	int i = 0;
	for(i = 0; i<10;i++)
	{
		cout << 'Hello #' << i << ' from thread' << ID << endl;
		usleep(1000000); //1 second
	}
	
	cout << 'Thread ' << ID << 'terminates\n';
	
	return;
}
#include<stdio.h>

int main(){
	
	int a;
	
	printf("Welcome to MY TELECOM\n\n");
	printf("Please choose anyone from below\n");
	printf("1.Recharge\n");
	printf("2.Servive Issue\n");
	printf("3.Special Plan only for You\n");
	printf("4.To Register Callback Request\n\n");
	
	printf("Enter selection : ");
	scanf("%d",&a);
	
	switch(a){
		default:
			printf("Sorry, Invalid Entry!");
			break;
			
		case 1:
			printf("1.Rs 199 Recharge Plan\n");
			printf("2.Rs 299 Recharge Plan\n");
			printf("3.Rs 399 Recharge Plan\n");
			printf("4.Rs 499 Recharge Plan\n\n\n\n");			
			
	        printf("Enter selection : ");
	        scanf("%d",&a);
	        
	        switch(a){
	        	
	        	case 1:
	        			printf("Rs 199: Get validity of period of 28 days with unlimited calling local & STD, a total of 50 SMS/Day, 1GB/Day.\n");
	            		break;
				case 2:
	            		printf("Rs 299: Get validity of period of 28 days with unlimited calling local & STD, a total of 100 SMS/Day, 1.5GB/Day.\n");
	            		break;
	            case 3:
	            		printf("Rs 399: Get validity of period of 56 days with unlimited calling local & STD, a total of 150 SMS/Day, 1.5GB/Day.\n");
	            		break;
	            case 4:
	            		printf("Rs 499: Get validity of period of 56 days with unlimited calling local & STD, a total of 250 SMS/Day, 2.5GB/Day with Complementary acess to our OTT App till validity period.\n");
	            		break;
			
			}
		    break;	
			
			
		
		case 2:
			printf("1.No Network\n");
			printf("2.No Internet\n");
			printf("3.Call Drop Issue\n");
			printf("4.Low Internet Speed\n\n");
			
			printf("Enter selection : ");
	        scanf("%d",&a);	
			
			switch(a) {
				case 1:
	        			printf("We have Register your request and in 48 hours our network team will resolve your request.\nThank You for your co-operation & Support");
	            		break;
	            case 2:
	        			printf("We have Register your request and in 36 hours our support team will resolve your request.\nThank You for your co-operation & Support");
	            		break;
	            case 3:
	        			printf("We have Register your request and in 72 hours our network team will resolve your request.\nThank You for your co-operation & Support");
	            		break;
	            case 4:
	        			printf("We regret to know that you are facing internet speed issue, our network team will reachout to you to resolve this.\nThank You for your co-operation & Support");
	            		break;
				
			}
			break;
			
		case 3:
			printf("Sorry Currently we don't have any special plan/offer for you.\nSee you soon with updated offer.");
			break;
			
		case 4:
			printf("You have successfully registered for callback request, Our team will contact you in 12 hours.\nThank You for your co-operation & Support");
			break;
	}
	return 0;
}

public class BreakAndContinue {
    public static void main(String[] args) {
        for(int i=1;i<10;i++){
            System.out.println(i +":"+"yes java");
            if(i==6){
                System.out.println("break");
                break;
            }
        }
        System.out.println("end the loops");
    }
}

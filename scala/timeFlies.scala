object Timer {

def oncePerSecond(callback: () => Unit) {

while(true) {

callback(); Thread sleep 1000

} // end while(true)

} // end def oncePerSecond



def timeFlies() {
  println("time flies like an arrow...")

} // end timeFiles

def main(args: Array[String]) {
    oncePerSecond(timeFlies)
    
} //end main




}
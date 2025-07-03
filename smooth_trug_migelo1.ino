// تعريف الأرجل
const int button1Pin = 2;
const int button2Pin = 3;
const int button3Pin = 4;

const int led1Pin = 5;
const int led2Pin = 6;
const int led3Pin = 7;

void setup() {
  // ضبط مداخل الأزرار مع تفعيل المقاومة الداخلية
  pinMode(button1Pin, INPUT_PULLUP);
  pinMode(button2Pin, INPUT_PULLUP);
  pinMode(button3Pin, INPUT_PULLUP);

  // ضبط مخارج الليدات
  pinMode(led1Pin, OUTPUT);
  pinMode(led2Pin, OUTPUT);
  pinMode(led3Pin, OUTPUT);
}

void loop() {
  // قراءة حالة الأزرار (LOW = مضغوط لأننا نستخدم مقاومة pull-up)
  bool button1State = digitalRead(button1Pin) == LOW;
  bool button2State = digitalRead(button2Pin) == LOW;
  bool button3State = digitalRead(button3Pin) == LOW;

  // تشغيل أو إطفاء الليدات بناءً على حالة الأزرار
  digitalWrite(led1Pin, button1State ? LOW : HIGH);
digitalWrite(led2Pin, button2State ? LOW : HIGH);
digitalWrite(led3Pin, button3State ? LOW : HIGH);
  
}
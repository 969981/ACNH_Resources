
void FUN_00240b90(long param_1)

{
  undefined1 auStack_90 [128];
  
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined2 *)(param_1 + 0x1c) = 0;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  memset((void *)(param_1 + 0x20),0,0x18);
  memset((void *)(param_1 + 0x3c),0,0x20);
  memset((void *)(param_1 + 0x5c),0,0x180);
  *(undefined4 *)(param_1 + 0x1dc) = 0;
  *(undefined4 *)(param_1 + 0x38) = 8;
  FUN_002b3fa8(auStack_90);
  FUN_002b415c(param_1 + 0x1e0,auStack_90);
  (*(code *)**(undefined8 **)(param_1 + 0x260))(param_1 + 0x260);
  (*(code *)**(undefined8 **)(param_1 + 0x2c8))(param_1 + 0x2c8);
  (*(code *)**(undefined8 **)(param_1 + 0x330))(param_1 + 0x330);
  (*(code *)**(undefined8 **)(param_1 + 0x398))(param_1 + 0x398);
  (*(code *)**(undefined8 **)(param_1 + 0x400))(param_1 + 0x400);
  (*(code *)**(undefined8 **)(param_1 + 0x468))(param_1 + 0x468);
  (*(code *)**(undefined8 **)(param_1 + 0x4d0))(param_1 + 0x4d0);
  (*(code *)**(undefined8 **)(param_1 + 0x538))(param_1 + 0x538);
  (*(code *)**(undefined8 **)(param_1 + 0x5a0))(param_1 + 0x5a0);
  (*(code *)**(undefined8 **)(param_1 + 0x608))(param_1 + 0x608);
  (*(code *)**(undefined8 **)(param_1 + 0x670))(param_1 + 0x670);
  (*(code *)**(undefined8 **)(param_1 + 0x6d8))(param_1 + 0x6d8);
  (*(code *)**(undefined8 **)(param_1 + 0x740))(param_1 + 0x740);
  (*(code *)**(undefined8 **)(param_1 + 0x7a8))(param_1 + 0x7a8);
  (*(code *)**(undefined8 **)(param_1 + 0x810))(param_1 + 0x810);
  (*(code *)**(undefined8 **)(param_1 + 0x878))(param_1 + 0x878);
  *(undefined4 *)(param_1 + 0x8e0) = 0;
  FUN_002b4104(auStack_90);
  return;
}


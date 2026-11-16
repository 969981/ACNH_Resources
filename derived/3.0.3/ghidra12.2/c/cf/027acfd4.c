
void FUN_027acfd4(void *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 undefined8 param_5)

{
  memset(param_1,0,0x3c8);
  *(undefined1 *)((long)param_1 + 0xc3) = 0;
  *(undefined2 *)((long)param_1 + 0xc0) = 0xfffe;
  FUN_0277d4ac();
  *(undefined1 *)((long)param_1 + 200) = 0;
  *(undefined1 *)((long)param_1 + 0xcc) = 0;
  memset((void *)((long)param_1 + 0xce),0,0x2a2);
  *(undefined2 *)((long)param_1 + 0x370) = 0xfffe;
  *(undefined8 *)((long)param_1 + 0x374) = 0;
  *(undefined8 *)((long)param_1 + 0x37c) = 0;
  *(undefined8 *)((long)param_1 + 900) = 0;
  *(undefined8 *)((long)param_1 + 0x38c) = 0;
  *(undefined8 *)((long)param_1 + 0x394) = 0;
  *(undefined8 *)((long)param_1 + 0x39c) = 0;
  *(undefined8 *)((long)param_1 + 0x3a4) = 0;
  *(undefined8 *)((long)param_1 + 0x3ac) = 0;
  FUN_027afb80(param_1,param_2,param_3,param_4,param_5);
  return;
}


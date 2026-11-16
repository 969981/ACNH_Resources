
void FUN_027f85cc(void *param_1)

{
  undefined2 uVar1;
  
  memset(param_1,0,0x6400);
  FUN_012ca754(param_1);
  memset((void *)((long)param_1 + 0xc80),0,0xc80);
  FUN_012ca754((void *)((long)param_1 + 0xc80));
  memset((void *)((long)param_1 + 0x1900),0,0xc80);
  FUN_012ca754((void *)((long)param_1 + 0x1900));
  memset((void *)((long)param_1 + 0x2580),0,0xc80);
  FUN_012ca754((void *)((long)param_1 + 0x2580));
  memset((void *)((long)param_1 + 0x3200),0,0xc80);
  FUN_012ca754((void *)((long)param_1 + 0x3200));
  memset((void *)((long)param_1 + 16000),0,0xc80);
  FUN_012ca754((void *)((long)param_1 + 16000));
  memset((void *)((long)param_1 + 0x4b00),0,0xc80);
  FUN_012ca754((void *)((long)param_1 + 0x4b00));
  memset((void *)((long)param_1 + 0x5780),0,0xc80);
  FUN_012ca754((void *)((long)param_1 + 0x5780));
  memset((void *)((long)param_1 + 0x6400),0,0x1a2);
  *(undefined2 *)((long)param_1 + 0x65a6) = 0;
  *(undefined4 *)((long)param_1 + 0x65a2) = 0x134b00ff;
  *(undefined4 *)((long)param_1 + 0x65a8) = 0;
  FUN_0277d4ac((long)param_1 + 0x65a4);
  *(undefined8 *)((long)param_1 + 0x65ac) = 0x134b;
  FUN_0277d4ac();
  *(undefined8 *)((long)param_1 + 0x65b4) = 0x139b;
  FUN_0277d4ac((undefined8 *)((long)param_1 + 0x65b4));
  uVar1 = *(undefined2 *)PTR_DAT_04bb3170;
  *(undefined2 *)((long)param_1 + 0x65c2) = 0x4000;
  *(undefined1 *)((long)param_1 + 0x65c4) = 0x10;
  *(undefined2 *)((long)param_1 + 0x65bc) = uVar1;
  *(undefined2 *)((long)param_1 + 0x65be) = uVar1;
  *(undefined2 *)((long)param_1 + 0x65c0) = uVar1;
  memset((void *)((long)param_1 + 0x65c8),0,0x642);
  *(undefined1 *)((long)param_1 + 0x6c0c) = 0;
  *(undefined1 *)((long)param_1 + 0x6c0a) = 0xff;
  *(undefined4 *)((long)param_1 + 0x6c10) = 0x101;
  *(undefined8 *)((long)param_1 + 0x6c14) = 0x3f80000000000001;
  *(undefined8 *)((long)param_1 + 0x6c1c) = 0;
  return;
}


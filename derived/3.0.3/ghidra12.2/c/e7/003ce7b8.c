
undefined8 FUN_003ce7b8(long *param_1,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined8 *)((long)param_1 + 0x104) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined2 *)(param_1 + 0x20) = 0;
  *(undefined1 *)((long)param_1 + 0x102) = 0;
  *(undefined4 *)((long)param_1 + 0xf4) = 0;
  *(undefined2 *)(param_1 + 0x1e) = 0;
  *(undefined4 *)((long)param_1 + 0xec) = 0;
  *(undefined1 **)((long)param_1 + 0xbc) = &DAT_3f8000003f800000;
  *(undefined8 *)((long)param_1 + 0xc4) = 0;
  *(undefined1 **)((long)param_1 + 0xcc) = &DAT_3f8000003f800000;
  *(undefined8 *)((long)param_1 + 0xd4) = 0;
  *(undefined1 **)((long)param_1 + 0xdc) = &DAT_3f8000003f800000;
  *(undefined8 *)((long)param_1 + 0xe4) = 0;
  param_1[0x24] = (long)&DAT_3f8000003f800000;
  *(undefined4 *)(param_1 + 0x25) = 0;
  *(int *)((long)param_1 + 0x114) = DAT_04c64920;
  DAT_04c64920 = DAT_04c64920 + 1;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  *(undefined8 *)((long)param_1 + 0x10c) = 0xffffffff00000000;
  *(undefined1 *)((long)param_1 + 0xf9) = 0xff;
  *(undefined8 *)((long)param_1 + 300) = 0x100000000;
  *(undefined8 *)((long)param_1 + 0x16c) = 0x3f800000;
  *(undefined8 *)((long)param_1 + 0x1a4) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0x28] = (long)&DAT_3f8000003f800000;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  *(undefined8 *)((long)param_1 + 0x1ac) = 0;
  *(undefined8 *)((long)param_1 + 0x1b4) = 0;
  if (param_1[0x38] != 0) {
    FUN_003c02d0();
  }
  *(undefined4 *)(param_1 + 0x11) = 0x3f800000;
  param_1[0xd] = (long)&DAT_3f8000003f800000;
  param_1[0xe] = 0;
  *(undefined8 *)((long)param_1 + 0x8c) = 0;
  *(undefined8 *)((long)param_1 + 0x94) = 0;
  *(undefined4 *)((long)param_1 + 0x9c) = 0;
  *(undefined4 *)(param_1 + 0x15) = 0x3f800000;
  param_1[0x14] = (long)&DAT_3f8000003f800000;
  *(undefined8 *)((long)param_1 + 0xac) = 0;
  *(undefined8 *)((long)param_1 + 0xb4) = 0xffffffff;
  param_1[0xf] = 0xffffffff;
  param_1[0x10] = 0xffffffff;
  if (param_1[0x3a] != 0) {
    memset((void *)param_1[0x39],0,param_1[0x3a]);
  }
  lVar1 = (**(code **)(*param_1 + 0x40))(param_1);
  uVar2 = FUN_003c5b84();
  lVar3 = FUN_003cbb70(uVar2,0x30,1);
  *(long **)(lVar3 + 0x28) = param_1 + 0x1e;
  *(undefined4 *)(lVar3 + 8) = 3;
  *(long *)(lVar3 + 0x18) = lVar1;
  *(long **)(lVar3 + 0x20) = param_2;
  FUN_003cc15c(uVar2,lVar3);
  nn::os::ClearEvent((EventType *)(lVar1 + 8));
  (**(code **)(*param_2 + 0x18))(param_2,1);
  param_1[0x27] = (long)param_2;
  *(undefined4 *)((long)param_1 + 0xfc) = 1;
  return 1;
}


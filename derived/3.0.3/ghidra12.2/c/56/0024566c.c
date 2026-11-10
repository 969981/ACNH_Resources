
void FUN_0024566c(long *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  
  FUN_00252d8c();
  puVar1 = PTR_DAT_04bcd548;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined1 *)((long)param_1 + 0xc4) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  memset((void *)((long)param_1 + 0x84),0,0x40);
  puVar1 = PTR_DAT_04bcd550 + 0x10;
  param_1[0x19] = (long)puVar1;
  memset(param_1 + 0x1a,0,0x480);
  param_1[0xac] = (long)puVar1;
  memset(param_1 + 0xad,0,0x480);
  param_1[0x13d] = (long)puVar1;
  memset(param_1 + 0x13e,0,0x480);
  param_1[0x1ce] = (long)puVar1;
  memset(param_1 + 0x1cf,0,0x480);
  param_1[0x25f] = (long)puVar1;
  memset(param_1 + 0x260,0,0x480);
  param_1[0x2f0] = (long)puVar1;
  memset(param_1 + 0x2f1,0,0x480);
  param_1[0x381] = (long)puVar1;
  memset(param_1 + 0x382,0,0x480);
  param_1[0x412] = (long)puVar1;
  memset(param_1 + 0x413,0,0x480);
  param_1[0x4a3] = (long)puVar1;
  memset(param_1 + 0x4a4,0,0x480);
  param_1[0x534] = (long)puVar1;
  memset(param_1 + 0x535,0,0x480);
  param_1[0x5c5] = (long)puVar1;
  memset(param_1 + 0x5c6,0,0x480);
  param_1[0x656] = (long)puVar1;
  memset(param_1 + 0x657,0,0x480);
  param_1[0x6e7] = (long)puVar1;
  memset(param_1 + 0x6e8,0,0x480);
  param_1[0x778] = (long)puVar1;
  memset(param_1 + 0x779,0,0x480);
  param_1[0x809] = (long)puVar1;
  memset(param_1 + 0x80a,0,0x480);
  param_1[0x89a] = (long)puVar1;
  memset(param_1 + 0x89b,0,0x480);
  param_1[0x92b] = (long)puVar1;
  memset(param_1 + 0x92c,0,0x480);
  param_1[0x9bc] = (long)puVar1;
  memset(param_1 + 0x9bd,0,0x480);
  param_1[0xa4d] = (long)puVar1;
  memset(param_1 + 0xa4e,0,0x480);
  param_1[0xade] = (long)puVar1;
  memset(param_1 + 0xadf,0,0x480);
  param_1[0xb6f] = (long)puVar1;
  memset(param_1 + 0xb70,0,0x480);
  param_1[0xc00] = (long)puVar1;
  memset(param_1 + 0xc01,0,0x480);
  param_1[0xc91] = (long)puVar1;
  memset(param_1 + 0xc92,0,0x480);
  param_1[0xd22] = (long)puVar1;
  memset(param_1 + 0xd23,0,0x480);
  param_1[0xdb3] = (long)puVar1;
  memset(param_1 + 0xdb4,0,0x480);
  uVar2 = FUN_0021f454();
  plVar3 = (long *)FUN_00285d10(0x1e0,uVar2);
  if (plVar3 != (long *)0x0) {
    *(undefined4 *)(plVar3 + 2) = 0;
    puVar1 = PTR_DAT_04bcd4c8;
    *(undefined1 *)((long)plVar3 + 0x54) = 0;
    *(undefined4 *)(plVar3 + 0x3b) = 0;
    *(undefined2 *)((long)plVar3 + 0x1dc) = 0;
    *plVar3 = (long)(puVar1 + 0x10);
    plVar3[1] = 0;
    memset((void *)((long)plVar3 + 0x14),0,0x40);
    memset((void *)((long)plVar3 + 0x55),0,0x180);
  }
  param_1[4] = (long)plVar3;
  uVar2 = FUN_0021f454();
  lVar4 = FUN_00285d10(0x38,uVar2);
  if (lVar4 != 0) {
    FUN_0024dda0(lVar4);
  }
  param_1[5] = lVar4;
  param_1[0xaa] = *(long *)(DAT_04c60f48 + 0x178);
  uVar2 = FUN_0021f454();
  lVar4 = FUN_00285d10(0xbe8,uVar2);
  if (lVar4 != 0) {
    FUN_0024cf50(lVar4);
  }
  param_1[0xab] = lVar4;
  return;
}


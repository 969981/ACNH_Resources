
void FUN_0023b01c(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  FUN_002aa86c();
  puVar2 = PTR_DAT_04bcd498;
  *(undefined1 *)((long)param_1 + 0x4d) = 0;
  *param_1 = (long)(puVar2 + 0x10);
  FUN_0021f4e0(param_1 + 10);
  FUN_0021f4e0(param_1 + 0xe);
  *(undefined4 *)((long)param_1 + 0x94) = 0;
  *(undefined2 *)(param_1 + 0x13) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  param_1[0x19] = 0;
  *(undefined2 *)(param_1 + 0x1a) = 1;
  *(undefined1 *)(param_1 + 0xd6) = 0;
  *(undefined4 *)(param_1 + 0x192) = 800;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  FUN_00227258(param_1 + 0x24f);
  memset((void *)((long)param_1 + 0xc94),0,0x5dc);
  param_1[0x24e] = 0;
  FUN_00227284(param_1 + 0x24f);
  *(undefined2 *)(param_1 + 0x254) = 0;
  FUN_00220ebc(param_1 + 0x255);
  *(undefined4 *)(param_1 + 0x25b) = 0;
  FUN_00220ebc(param_1 + 0x25c);
  *(undefined4 *)(param_1 + 0x262) = 0;
  FUN_00220ebc(param_1 + 0x263);
  param_1[0x269] = 0;
  *(undefined1 *)(param_1 + 0x26a) = 1;
  FUN_00220ebc(param_1 + 0x26b);
  param_1[0x271] = 0;
  *(undefined1 *)(param_1 + 0x272) = 1;
  param_1[0x273] = 0;
  FUN_0021f210((long)param_1 + 0x13a4);
  FUN_0022be80(param_1 + 0x278);
  uVar3 = FUN_0022d1f4();
  FUN_0022d2ac(uVar3,param_1);
  lVar4 = FUN_002ba7a0(DAT_04c61168);
  lVar1 = 0;
  if (*(long *)(lVar4 + 8) != 0) {
    lVar1 = *(long *)(lVar4 + 8) + -0x18;
  }
  FUN_0022e7e8(lVar1,param_1);
  lVar4 = FUN_002ba7a0(DAT_04c61168);
  lVar1 = 0;
  if (*(long *)(lVar4 + 0x10) != 0) {
    lVar1 = *(long *)(lVar4 + 0x10) + -0x18;
  }
  FUN_00237ba4(lVar1,param_1);
  return;
}


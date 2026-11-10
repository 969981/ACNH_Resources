
void FUN_003076d4(long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  
  FUN_002788f0();
  *param_1 = (long)(PTR_DAT_04bcea78 + 0x10);
  FUN_00220ebc(param_1 + 0x24);
  param_1[0x2a] = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x2d) = 60000;
  *(undefined1 *)(param_1 + 0x3f) = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  uVar1 = FUN_0021f454();
  lVar2 = FUN_00285d10(0xc0,uVar1);
  if (lVar2 != 0) {
    FUN_001fb850(lVar2,0);
  }
  param_1[0x23] = lVar2;
  uVar1 = FUN_0021f454();
  lVar2 = FUN_00285d10(0x18,uVar1);
  if (lVar2 != 0) {
    *(long *)lVar2 = lVar2;
    *(long *)(lVar2 + 8) = lVar2;
    *(undefined8 *)(lVar2 + 0x10) = 0;
  }
  param_1[0x2e] = lVar2;
  memset(param_1 + 0x2f,0,0x80);
  *(undefined4 *)(param_1 + 0xc) = 15000;
  uVar1 = FUN_0021f454();
  puVar3 = (undefined8 *)FUN_00285d10(0x10,uVar1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &DAT_0484a3c0;
    puVar3[1] = param_1;
  }
  param_1[0x40] = (long)puVar3;
  *(undefined1 *)((long)param_1 + 0x1f9) = 0;
  return;
}


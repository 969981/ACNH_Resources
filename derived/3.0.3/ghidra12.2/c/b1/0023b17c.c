
void FUN_0023b17c(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  
  *param_1 = (long)(PTR_DAT_04bcd498 + 0x10);
  puVar1 = PTR_DAT_04bc1510;
  lVar2 = FUN_002ba7a0(*(undefined8 *)PTR_DAT_04bc1510);
  if (lVar2 != 0) {
    lVar2 = FUN_002ba7a0(*(undefined8 *)puVar1);
    if (*(long *)(lVar2 + 0x10) != 0) {
      FUN_00237bac(*(long *)(lVar2 + 0x10) + -0x18);
    }
    lVar2 = FUN_002ba7a0(*(undefined8 *)puVar1);
    if (*(long *)(lVar2 + 8) != 0) {
      FUN_0022e7f0(*(long *)(lVar2 + 8) + -0x18);
    }
  }
  FUN_0022d1f4();
  FUN_0022d28c();
  FUN_0022d1f4();
  FUN_0022d2e8();
  FUN_0022becc(param_1 + 0x278);
  FUN_00220f6c(param_1 + 0x26b);
  FUN_00220f6c(param_1 + 0x263);
  FUN_00220f6c(param_1 + 0x25c);
  FUN_00220f6c(param_1 + 0x255);
  param_1[0x24f] = (long)(PTR_DAT_04bcba18 + 0x10);
  FUN_0021f584(param_1 + 0x250);
  FUN_0021f584(param_1 + 0xe);
  FUN_0021f584(param_1 + 10);
  FUN_002aa8b4(param_1);
  return;
}


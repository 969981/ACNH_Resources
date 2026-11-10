
void FUN_001f5e10(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 2) = 0xff;
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 != 0) {
    while (iVar1 = FUN_001f6570(lVar2), iVar1 == 0) {
      puVar3 = (undefined8 *)FUN_001f6550(*(undefined8 *)(param_1 + 8));
      if (puVar3 != (undefined8 *)0x0) {
        FUN_001f4e60(*puVar3);
        FUN_001f4e60(puVar3);
      }
      FUN_001f6520(*(undefined8 *)(param_1 + 8));
      lVar2 = *(long *)(param_1 + 8);
    }
  }
  return;
}


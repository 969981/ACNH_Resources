
void FUN_001dd570(long param_1)

{
  bool bVar1;
  ulong uVar2;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar2 = 0;
    do {
      bVar1 = uVar2 < *(ulong *)PTR_DAT_04bcc1b8;
      uVar2 = (ulong)((int)uVar2 + 1);
    } while (bVar1);
    FUN_00187e4c();
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  return;
}


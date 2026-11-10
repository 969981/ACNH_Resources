
void FUN_002e9694(long param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x2c8);
  if (lVar2 != 0) {
    *(undefined1 *)(lVar2 + 8) = 0;
    iVar1 = FUN_0029b330(DAT_04c60f48);
    if (((iVar1 != 5) && (iVar1 = FUN_0029b330(DAT_04c60f48), iVar1 != 6)) &&
       (iVar1 = FUN_0029b330(DAT_04c60f48), iVar1 != 7)) {
      FUN_0029b330(DAT_04c60f48);
    }
    FUN_002ea3f0(lVar2);
    *(undefined8 *)(lVar2 + 0x1930) = 0;
  }
  return;
}


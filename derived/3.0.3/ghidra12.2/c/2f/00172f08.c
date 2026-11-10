
void FUN_00172f08(long param_1)

{
  int iVar1;
  long lVar2;
  
  if (*(char *)(param_1 + 0xe6) != '\0') {
    while (lVar2 = *(long *)(param_1 + 0x70), lVar2 != 0) {
      FUN_00173424(lVar2 + 0x18,param_1 + 0x10);
      *(undefined1 *)(param_1 + 0xe6) = 0;
      *(undefined4 *)(param_1 + 0xd4) = 0;
      *(undefined8 *)(param_1 + 0xb0) = 0;
      *(undefined8 *)(param_1 + 0x50) = 0;
      *(undefined8 *)(param_1 + 0x58) = 0;
      if ((*(long *)(lVar2 + 0xa8) != 0) && ((*(byte *)(lVar2 + 0xe4) & 0xc) == 0)) {
        return;
      }
      iVar1 = FUN_001734d8(lVar2 + 0x18);
      param_1 = lVar2;
      if (iVar1 == 0) {
        return;
      }
    }
  }
  return;
}


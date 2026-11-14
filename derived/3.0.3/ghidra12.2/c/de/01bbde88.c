
void FUN_01bbde88(long *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  
  if ((param_1[0x98] == 0) || (*(long *)(param_1[0x98] + 0x68) == 0)) {
    bVar1 = false;
  }
  else {
    iVar3 = FUN_021d7d60();
    bVar1 = iVar3 != -1;
  }
  cVar2 = (**(code **)(*param_1 + 0x48))(param_1);
  (**(code **)(*param_1 + 0x58))(param_1);
  if (cVar2 == '\x01') {
    uVar5 = 0x48;
  }
  else {
    if (cVar2 != '\x02') {
      lVar4 = 0;
      goto LAB_01bbdf48;
    }
    uVar5 = 0x49;
  }
  if (!bVar1) {
    uVar5 = 0x4a;
  }
  lVar4 = *(long *)PTR_DAT_04bb28f8 + 0x29f8 + (ulong)uVar5 * 0x128;
  if (0x50 < uVar5) {
    lVar4 = *(long *)PTR_DAT_04bb28f8 + 0x29f8;
  }
LAB_01bbdf48:
  FUN_01bbda80(param_1,lVar4);
  return;
}


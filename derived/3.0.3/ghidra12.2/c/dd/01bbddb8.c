
/* WARNING: Removing unreachable block (ram,0x01bbde70) */

void FUN_01bbddb8(long *param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  
  if ((param_1[0x98] == 0) || (*(long *)(param_1[0x98] + 0x68) == 0)) {
    bVar1 = false;
  }
  else {
    iVar2 = FUN_021d7d60();
    bVar1 = iVar2 != -1;
  }
  uVar3 = (**(code **)(*param_1 + 0x48))(param_1);
  iVar2 = (**(code **)(*param_1 + 0x58))(param_1);
  if (iVar2 == 0) {
    if (bVar1) {
      lVar4 = FUN_01bb33cc(param_1 + 0x47,uVar3,0);
    }
    else {
      lVar4 = *(long *)PTR_DAT_04bb28f8 + 0x7c10;
    }
  }
  else {
    lVar4 = 0;
  }
  FUN_01bbda80(param_1,lVar4);
  return;
}


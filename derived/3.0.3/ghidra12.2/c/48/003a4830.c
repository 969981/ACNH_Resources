
bool FUN_003a4830(long param_1,int *param_2,long param_3,ulong param_4)

{
  bool bVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  bVar1 = *(long *)(param_2 + 6) != 0 && *(ulong *)(param_2 + 4) <= param_4;
  if (bVar1) {
    iVar3 = *param_2;
    iVar4 = param_2[1];
    iVar5 = param_2[2];
    *(long *)(param_1 + 0x50) = param_3;
    *(undefined8 *)(param_1 + 0x68) = 0;
    if (iVar3 <= iVar4) {
      iVar3 = iVar4;
    }
    bVar6 = param_3 != 0;
    lVar2 = 0;
    if (*(long *)(param_2 + 0x10) != 0 && bVar6) {
      lVar2 = param_3 + *(long *)(param_2 + 0x16);
    }
    FUN_003a9600(param_1 + 0x58,lVar2,iVar3);
    lVar2 = 0;
    if (*(long *)(param_2 + 0x18) != 0 && bVar6) {
      lVar2 = param_3 + *(long *)(param_2 + 0x1e);
    }
    FUN_003a9754(param_1 + 0x30,lVar2,iVar5);
    lVar2 = 0;
    if (*(long *)(param_2 + 8) != 0 && bVar6) {
      lVar2 = param_3 + *(long *)(param_2 + 0xe);
    }
    *(long *)(param_1 + 0x48) = lVar2;
    *(int *)(param_1 + 0x78) = param_2[1];
    lVar2 = 0;
    if (*(long *)(param_2 + 0x20) != 0 && bVar6) {
      lVar2 = param_3 + *(long *)(param_2 + 0x26);
    }
    *(long *)(param_1 + 0x80) = lVar2;
  }
  return bVar1;
}


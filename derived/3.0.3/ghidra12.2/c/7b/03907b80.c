
void FUN_03907b80(long param_1,uint param_2)

{
  int iVar1;
  long lVar2;
  int iVar3;
  
  if ((param_2 & 1) != 0) {
    FUN_039071d0(param_1);
    return;
  }
  if (((param_2 >> 1 & 1) != 0) && (iVar1 = *(int *)(param_1 + 0x30), iVar1 != 0)) {
    lVar2 = *(long *)(param_1 + 0x38);
    iVar3 = 0;
    do {
      FUN_03903380(lVar2 + (long)iVar3 * 0x18,param_1);
      iVar3 = iVar3 + 1;
    } while (iVar1 != iVar3);
  }
  if (((param_2 >> 2 & 1) != 0) && (iVar1 = *(int *)(param_1 + 0x40), iVar1 != 0)) {
    lVar2 = *(long *)(param_1 + 0x48);
    iVar3 = 0;
    do {
      FUN_039042b0(lVar2 + (long)iVar3 * 0x18,param_1);
      iVar3 = iVar3 + 1;
    } while (iVar1 != iVar3);
  }
  if (((param_2 >> 6 & 1) != 0) && (iVar1 = *(int *)(param_1 + 0x20), iVar1 != 0)) {
    lVar2 = *(long *)(param_1 + 0x28);
    iVar3 = 0;
    do {
      FUN_03904cd0(lVar2 + (long)iVar3 * 0x18,param_1);
      iVar3 = iVar3 + 1;
    } while (iVar1 != iVar3);
  }
  if (((param_2 >> 4 & 1) != 0) && (iVar1 = *(int *)(param_1 + 0x70), iVar1 != 0)) {
    lVar2 = *(long *)(param_1 + 0x78);
    iVar3 = 0;
    do {
      FUN_03903da0(lVar2 + (long)iVar3 * 0x18,param_1);
      iVar3 = iVar3 + 1;
    } while (iVar1 != iVar3);
  }
  if (((param_2 >> 5 & 1) != 0) && (iVar1 = *(int *)(param_1 + 0x50), iVar1 != 0)) {
    lVar2 = *(long *)(param_1 + 0x58);
    iVar3 = 0;
    do {
      FUN_039047c0(lVar2 + (long)iVar3 * 0x18,param_1);
      iVar3 = iVar3 + 1;
    } while (iVar1 != iVar3);
  }
  if (((param_2 >> 3 & 1) != 0) && (iVar1 = *(int *)(param_1 + 0x60), iVar1 != 0)) {
    lVar2 = *(long *)(param_1 + 0x68);
    iVar3 = 0;
    do {
      FUN_03903890(lVar2 + (long)iVar3 * 0x18,param_1);
      iVar3 = iVar3 + 1;
    } while (iVar1 != iVar3);
  }
  return;
}


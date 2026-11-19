
void FUN_039e4420(long param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  ushort uVar4;
  long lVar5;
  long lVar6;
  
  uVar4 = *(ushort *)(*(long *)(param_1 + 0x168) + 0x2a70);
  if (*(long *)(param_1 + 0x170) == 0 || (uVar4 & 4) != 0) {
    iVar3 = 1;
    if ((uVar4 >> 2 & 1) == 0) {
      uVar4 = uVar4 >> 1 & 1;
      if (0 < *(int *)(param_1 + 0x6a8)) {
        uVar4 = 1;
      }
      iVar3 = 1;
      if (uVar4 != 0) {
        iVar3 = *(int *)(param_1 + 0x6a8) + 1;
      }
    }
    else {
      uVar4 = 0;
    }
    lVar6 = param_1;
    do {
      lVar5 = lVar6;
      lVar6 = *(long *)(lVar5 + 0x170);
    } while (lVar6 != 0);
    iVar1 = *(int *)(lVar5 + 0x848);
    if (iVar1 == 2) {
      if (uVar4 != 0) {
        FUN_0390c1b8(param_1 + 0x268,0x1a,param_3,param_3,iVar3,5,0);
        return;
      }
      uVar2 = 8;
      iVar3 = 6;
    }
    else {
      param_3 = param_2;
      if (iVar1 == 1) {
        iVar3 = iVar3 << 1;
        uVar2 = 4;
      }
      else {
        if (iVar1 != 0) {
          return;
        }
        if (uVar4 == 0) {
          uVar2 = 1;
          iVar3 = 1;
        }
        else {
          uVar2 = 4;
        }
      }
    }
    FUN_0390a734(param_1 + 0x268,uVar2,0x1a,param_3,param_3,iVar3,5,0,0,1);
  }
  return;
}


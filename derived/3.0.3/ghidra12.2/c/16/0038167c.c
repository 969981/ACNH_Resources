
long FUN_0038167c(undefined8 param_1,long param_2,long param_3)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  
  if (param_2 == 0) {
    lVar3 = 0;
  }
  else {
    lVar2 = FUN_0038cb40(param_1,0x10,0x230);
    if ((param_3 == 0) && ((*(byte *)(param_2 + 4) >> 1 & 1) == 0)) {
      return lVar2;
    }
    lVar3 = FUN_0038cb40(param_1,0x10,0x230);
    lVar3 = lVar3 + lVar2;
  }
  if (param_3 == 0) {
    return lVar3;
  }
  bVar1 = *(byte *)(param_3 + 8);
  uVar6 = (uint)bVar1;
  if ((bVar1 & 1) == 0) {
    if ((bVar1 >> 1 & 1) != 0) goto LAB_00381798;
LAB_003816fc:
    if ((uVar6 >> 2 & 1) == 0) goto LAB_00381734;
  }
  else {
    lVar2 = 2;
    if ((bVar1 & 0x20) != 0) {
      lVar2 = 3;
    }
    lVar4 = FUN_0038cb40(param_1,0x10,0x230);
    lVar5 = FUN_0038cb40(param_1,0x10,0xe0);
    uVar6 = (uint)*(byte *)(param_3 + 8);
    lVar3 = lVar3 + lVar4 * lVar2 + lVar5;
    if ((*(byte *)(param_3 + 8) >> 1 & 1) == 0) goto LAB_003816fc;
LAB_00381798:
    lVar2 = 2;
    if ((uVar6 & 0x20) != 0) {
      lVar2 = 3;
    }
    lVar4 = FUN_0038cb40(param_1,0x10,0x230);
    lVar5 = FUN_0038cb40(param_1,0x10,0xe0);
    uVar6 = (uint)*(byte *)(param_3 + 8);
    lVar3 = lVar3 + lVar4 * lVar2 + lVar5;
    if ((*(byte *)(param_3 + 8) >> 2 & 1) == 0) goto LAB_00381734;
  }
  lVar2 = 2;
  if ((uVar6 & 0x20) != 0) {
    lVar2 = 3;
  }
  lVar4 = FUN_0038cb40(param_1,0x10,0x230);
  lVar5 = FUN_0038cb40(param_1,0x10,0xe0);
  lVar3 = lVar3 + lVar4 * lVar2 + lVar5;
LAB_00381734:
  lVar2 = FUN_0038cb40(param_1,0x10,0x230);
  return lVar2 + lVar3;
}


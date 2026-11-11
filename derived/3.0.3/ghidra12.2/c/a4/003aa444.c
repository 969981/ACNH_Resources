
undefined8 FUN_003aa444(long param_1,uint *param_2,long param_3,ulong param_4)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  undefined8 uVar7;
  
  if (*(long *)(param_2 + 6) == 0) {
    return 0;
  }
  uVar3 = *param_2;
  uVar7 = 0;
  if ((((-1 < (int)uVar3) && (uVar4 = param_2[1], -1 < (int)uVar4)) &&
      (uVar5 = param_2[2], -1 < (int)uVar5)) && (*(ulong *)(param_2 + 4) <= param_4)) {
    *(undefined8 *)(param_1 + 0x68) = 0;
    if (uVar3 <= uVar4) {
      uVar3 = uVar4;
    }
    *(long *)(param_1 + 0x50) = param_3;
    uVar1 = 0;
    if (uVar4 != 0) {
      uVar1 = uVar3;
    }
    bVar6 = param_3 != 0;
    lVar2 = 0;
    if (*(long *)(param_2 + 0x10) != 0 && bVar6) {
      lVar2 = param_3 + *(long *)(param_2 + 0x16);
    }
    FUN_003a9600(param_1 + 0x58,lVar2,uVar1);
    lVar2 = 0;
    if (*(long *)(param_2 + 0x18) != 0 && bVar6) {
      lVar2 = param_3 + *(long *)(param_2 + 0x1e);
    }
    FUN_003a9754(param_1 + 0x30,lVar2,uVar5);
    uVar7 = 1;
    lVar2 = 0;
    if (*(long *)(param_2 + 8) != 0 && bVar6) {
      lVar2 = param_3 + *(long *)(param_2 + 0xe);
    }
    *(long *)(param_1 + 0x48) = lVar2;
    *(short *)(param_1 + 0x70) = (short)param_2[1];
  }
  return uVar7;
}


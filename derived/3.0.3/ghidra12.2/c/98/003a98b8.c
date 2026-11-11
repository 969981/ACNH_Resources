
undefined8 FUN_003a98b8(long param_1,uint *param_2,long param_3,ulong param_4)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  undefined8 uVar6;
  
  if (*(long *)(param_2 + 8) == 0) {
    return 0;
  }
  uVar2 = *param_2;
  uVar6 = 0;
  if ((((-1 < (int)uVar2) && (uVar3 = param_2[1], -1 < (int)uVar3)) &&
      (uVar4 = param_2[3], -1 < (int)uVar4)) && (*(ulong *)(param_2 + 6) <= param_4)) {
    *(undefined8 *)(param_1 + 0x68) = 0;
    *(long *)(param_1 + 0x50) = param_3;
    if (uVar2 <= uVar3) {
      uVar2 = uVar3;
    }
    bVar5 = param_3 != 0;
    lVar1 = 0;
    if (*(long *)(param_2 + 0x12) != 0 && bVar5) {
      lVar1 = param_3 + *(long *)(param_2 + 0x18);
    }
    FUN_003a9600(param_1 + 0x58,lVar1,uVar2);
    lVar1 = 0;
    if (*(long *)(param_2 + 0x22) != 0 && bVar5) {
      lVar1 = param_3 + *(long *)(param_2 + 0x28);
    }
    FUN_003a9754(param_1 + 0x30,lVar1,uVar4);
    uVar6 = 1;
    lVar1 = 0;
    if (*(long *)(param_2 + 10) != 0 && bVar5) {
      lVar1 = param_3 + *(long *)(param_2 + 0x10);
    }
    *(long *)(param_1 + 0x48) = lVar1;
    *(uint *)(param_1 + 0x78) = param_2[1];
    *(uint *)(param_1 + 0x7c) = param_2[2];
    lVar1 = 0;
    if (*(long *)(param_2 + 0x1a) != 0 && bVar5) {
      lVar1 = param_3 + *(long *)(param_2 + 0x20);
    }
    *(long *)(param_1 + 0x80) = lVar1;
  }
  return uVar6;
}


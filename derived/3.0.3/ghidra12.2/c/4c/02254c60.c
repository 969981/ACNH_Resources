
uint FUN_02254c60(int *param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  (**(code **)(*param_2 + 0x18))(param_2);
  uVar2 = FUN_006bd550(param_2[1],0);
  iVar4 = *param_1;
  if (iVar4 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    if (iVar4 < 2) {
      uVar3 = 0;
    }
    else {
      uVar3 = 0;
      iVar4 = iVar4 + -1;
      do {
        uVar1 = iVar4 + uVar3;
        if ((int)uVar1 < 0 != SCARRY4(iVar4,uVar3)) {
          uVar1 = uVar1 + 1;
        }
        uVar5 = (int)uVar1 >> 1;
        uVar1 = *(uint *)(*(long *)(param_1 + 2) + ((long)((ulong)uVar1 << 0x20) >> 0x21) * 0x20 +
                         0x18);
        if (uVar1 == uVar2) goto LAB_02254d0c;
        if (uVar1 < uVar2) {
          uVar3 = uVar5 + 1;
        }
        else {
          iVar4 = uVar5 - 1;
        }
      } while ((int)uVar3 < iVar4);
    }
    if (*(uint *)(*(long *)(param_1 + 2) + (long)(int)uVar3 * 0x20 + 0x18) != uVar2) {
      uVar3 = 0xffffffff;
    }
    uVar5 = uVar3;
  }
LAB_02254d0c:
  return ~uVar5 >> 0x1f;
}


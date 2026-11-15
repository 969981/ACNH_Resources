
long FUN_02162da0(uint *param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  int iVar7;
  
  (**(code **)(*param_2 + 0x18))(param_2);
  uVar4 = FUN_006bd550(param_2[1],0);
  uVar3 = *param_1;
  if (uVar3 != 0) {
    lVar5 = *(long *)(param_1 + 2);
    if ((int)uVar3 < 2) {
      uVar6 = 0;
    }
    else {
      uVar6 = 0;
      iVar7 = uVar3 - 1;
      do {
        uVar1 = iVar7 + uVar6;
        if ((int)uVar1 < 0 != SCARRY4(iVar7,uVar6)) {
          uVar1 = uVar1 + 1;
        }
        uVar2 = (int)uVar1 >> 1;
        uVar1 = *(uint *)(lVar5 + ((long)((ulong)uVar1 << 0x20) >> 0x21) * 0x20 + 0x18);
        if (uVar1 == uVar4) goto joined_r0x02162e5c;
        if (uVar1 < uVar4) {
          uVar6 = uVar2 + 1;
        }
        else {
          iVar7 = uVar2 - 1;
        }
      } while ((int)uVar6 < iVar7);
    }
    uVar2 = uVar6;
    if (*(uint *)(lVar5 + (long)(int)uVar6 * 0x20 + 0x18) == uVar4) {
joined_r0x02162e5c:
      if (-1 < (int)uVar2) {
        if (uVar3 <= uVar2) {
          uVar2 = 0;
        }
        return lVar5 + (ulong)uVar2 * 0x20;
      }
    }
  }
  return 0;
}


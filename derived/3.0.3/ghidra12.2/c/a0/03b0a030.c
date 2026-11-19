
bool FUN_03b0a030(long param_1,long param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  uint *puVar6;
  ulong uVar7;
  long lVar8;
  
  lVar4 = *(long *)(param_1 + 0x18);
  uVar1 = *(uint *)(lVar4 + 0x1b0);
  uVar3 = (ulong)uVar1;
  if (0 < (int)param_3) {
    if ((int)uVar1 < 1) {
      return false;
    }
    uVar5 = 0;
    do {
      lVar8 = (long)*(int *)(param_2 + uVar5 * 4);
      if ((*(uint *)(*(long *)(lVar4 + 0x1b8) + lVar8 * 4) & param_4) != 0) {
        return true;
      }
      uVar7 = 0;
      puVar6 = (uint *)(*(long *)(lVar4 + 0x1b8) + 0x300 + lVar8 * 4);
      do {
        if (uVar3 - 1 == uVar7) goto LAB_03b0a060;
        uVar2 = *puVar6;
        puVar6 = puVar6 + 0xc0;
        uVar7 = uVar7 + 1;
      } while ((uVar2 & param_4) == 0);
      if (uVar7 < uVar3) {
        return true;
      }
LAB_03b0a060:
      uVar5 = uVar5 + 1;
    } while (uVar5 != param_3);
  }
  if ((int)uVar1 < 1) {
    return false;
  }
  if ((*(uint *)(*(long *)(lVar4 + 0x1b8) + 0xfc) & param_4) != 0) {
    return true;
  }
  uVar5 = 0;
  puVar6 = (uint *)(*(long *)(lVar4 + 0x1b8) + 0x3fc);
  do {
    if (uVar3 - 1 == uVar5) {
      uVar5 = uVar3;
      break;
    }
    uVar1 = *puVar6;
    puVar6 = puVar6 + 0xc0;
    uVar5 = uVar5 + 1;
  } while ((uVar1 & param_4) == 0);
  return uVar5 < uVar3;
}


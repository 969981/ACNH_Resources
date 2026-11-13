
void FUN_011ed7e0(long param_1,long param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar1 = *(int *)(param_2 + 0x24) + 1;
  uVar2 = *(uint *)(param_2 + 0x10);
  uVar5 = *(uint *)(param_2 + 0x14);
  if ((param_3 & 1) == 0) {
    if (uVar1 != uVar5) {
      uVar7 = uVar2;
      uVar6 = uVar2;
      do {
        if ((((uVar6 < 0x120) && (uVar5 < 0x100)) &&
            (uVar3 = uVar6 + uVar5 * 0x120, uVar3 != 0xffffffff)) && (uVar3 < 0x12000)) {
          lVar4 = (ulong)(uVar3 >> 5) * 4;
          *(uint *)(param_1 + lVar4) =
               *(uint *)(param_1 + lVar4) & (1 << (ulong)(uVar6 & 0x1f) ^ 0xffffffffU);
          uVar7 = *(uint *)(param_2 + 0x10);
        }
        if ((int)uVar6 < *(int *)(param_2 + 0x20)) {
          uVar6 = uVar6 + 1;
        }
        else {
          uVar5 = uVar5 + 1;
          uVar6 = uVar7;
        }
      } while (uVar2 != uVar6 || uVar1 != uVar5);
    }
  }
  else if (uVar1 != uVar5) {
    uVar7 = uVar2;
    uVar6 = uVar2;
    do {
      if (((uVar6 < 0x120) && (uVar5 < 0x100)) &&
         ((uVar3 = uVar6 + uVar5 * 0x120, uVar3 != 0xffffffff && (uVar3 < 0x12000)))) {
        lVar4 = (ulong)(uVar3 >> 5) * 4;
        *(uint *)(param_1 + lVar4) = *(uint *)(param_1 + lVar4) | 1 << (ulong)(uVar6 & 0x1f);
        uVar7 = *(uint *)(param_2 + 0x10);
      }
      if ((int)uVar6 < *(int *)(param_2 + 0x20)) {
        uVar6 = uVar6 + 1;
      }
      else {
        uVar5 = uVar5 + 1;
        uVar6 = uVar7;
      }
    } while (uVar2 != uVar6 || uVar1 != uVar5);
  }
  return;
}


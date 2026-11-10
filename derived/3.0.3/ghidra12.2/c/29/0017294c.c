
void FUN_0017294c(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  
  uVar2 = *(uint *)(param_1 + 0xd0);
  uVar6 = (ulong)uVar2;
  if (param_2 != uVar2) {
    lVar7 = *(long *)(param_1 + 0x70);
    *(uint *)(param_1 + 0xd0) = param_2;
    if (lVar7 != 0) {
      *(uint *)(lVar7 + 0xd8) = (param_2 - uVar2) + *(int *)(lVar7 + 0xd8);
      if (*(char *)(param_1 + 0xe6) != '\0') {
        FUN_00173424(lVar7 + 0x18,param_1 + 0x10);
        lVar5 = *(long *)(param_1 + 0xb0);
        uVar3 = 0;
        if (uVar6 != 0) {
          uVar3 = (ulong)(lVar5 << 8) / uVar6;
        }
        uVar1 = *(uint *)(param_1 + 0xd0);
        uVar3 = (ulong)(*(int *)(param_1 + 0xd4) + uVar2) + uVar3 * uVar6 + lVar5 * -0x100;
        uVar4 = 0;
        if (uVar6 != 0) {
          uVar4 = uVar3 / uVar6;
        }
        uVar3 = (uVar3 - uVar4 * uVar6) + lVar5 * 0x100;
        uVar4 = 0;
        if (uVar6 != 0) {
          uVar4 = uVar3 / uVar6;
        }
        uVar6 = 0;
        if ((ulong)uVar1 != 0) {
          uVar6 = uVar3 / uVar1;
        }
        lVar5 = uVar6 + (*(long *)(param_1 + 0x58) - uVar4);
        *(long *)(param_1 + 0x58) = lVar5;
        *(uint *)(param_1 + 0xd4) = (int)uVar3 - (int)uVar6 * uVar1;
        if ((ulong)(*(long *)(lVar7 + 0x50) - lVar5) >> 0x20 == 0) {
          *(long *)(param_1 + 0x58) = *(long *)(lVar7 + 0x50);
        }
        FUN_0017321c(lVar7 + 0x18,param_1 + 0x10);
        return;
      }
    }
  }
  return;
}


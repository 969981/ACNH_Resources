
void FUN_003af040(long *param_1,undefined8 param_2)

{
  byte bVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  
  bVar1 = *(byte *)((long)param_1 + 0xe);
  if (bVar1 != 0) {
    uVar2 = (uint)*(byte *)((long)param_1 + 0xf);
    lVar6 = 0;
    uVar8 = 0;
    do {
      if (uVar2 != 0) {
        lVar10 = 0;
        do {
          lVar4 = param_1[4] + (lVar10 + lVar6 * (ulong)uVar2) * 0x48;
          FUN_00347c8c(lVar4,param_2);
          FUN_00347b98(lVar4);
          uVar2 = (uint)*(byte *)((long)param_1 + 0xf);
          lVar10 = lVar10 + 1;
        } while ((uint)lVar10 < uVar2);
      }
      uVar8 = uVar8 + 1;
      lVar6 = lVar6 + 1;
    } while (uVar8 != bVar1);
  }
  uVar2 = *(uint *)(param_1 + 1);
  uVar8 = uVar2 & 0xfffffffe;
  *(uint *)(param_1 + 1) = uVar8;
  if ((uVar2 >> 2 & 1) != 0) {
    uVar5 = (ulong)*(byte *)(*(long *)(*param_1 + 0x10) + 0x4d);
    if (uVar5 != 0) {
      uVar3 = (ulong)*(byte *)((long)param_1 + 0xf);
      uVar7 = 0;
      do {
        if (*(long *)(param_1[9] + uVar7 * 8) != 0 && (int)uVar3 != 0) {
          lVar6 = 0;
          uVar9 = 0;
          do {
            lVar10 = *(long *)(param_1[9] + uVar7 * 8) + lVar6;
            FUN_00347c8c(lVar10,param_2);
            FUN_00347b98(lVar10);
            uVar3 = (ulong)*(byte *)((long)param_1 + 0xf);
            uVar9 = uVar9 + 1;
            lVar6 = lVar6 + 0x48;
          } while (uVar9 < uVar3);
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 != uVar5);
      uVar8 = *(uint *)(param_1 + 1);
    }
    *(uint *)(param_1 + 1) = uVar8 & 0xfffffffb;
  }
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}


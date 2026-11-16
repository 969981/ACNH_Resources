
void FUN_027fc240(long param_1,ulong *param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  short *psVar5;
  ulong uVar6;
  short *psVar7;
  uint uVar8;
  long lVar9;
  
  puVar3 = PTR_DAT_04bb43c0;
  puVar2 = PTR_DAT_04bb37e0;
  uVar6 = *param_2;
  uVar4 = (uint)(uVar6 >> 0x20);
  uVar8 = (int)uVar6 - ((uint)(uVar6 >> 1) & 0x55555555);
  uVar4 = uVar4 - (uVar4 >> 1 & 0x55555555);
  uVar8 = (uVar8 >> 2 & 0x33333333) + (uVar8 & 0x33333333);
  uVar4 = (uVar4 >> 2 & 0x33333333) + (uVar4 & 0x33333333);
  uVar8 = uVar8 + (uVar8 >> 4) & 0xf0f0f0f;
  uVar8 = uVar8 + (uVar8 >> 8);
  uVar4 = uVar4 + (uVar4 >> 4) & 0xf0f0f0f;
  uVar4 = uVar4 + (uVar4 >> 8);
  if ((uVar4 + (uVar4 >> 0x10) & 0x3f) + (uVar8 + (uVar8 >> 0x10) & 0x3f) != 0) {
    uVar6 = 0;
    do {
      if ((*param_2 >> (uVar6 & 0x3f) & 1) != 0) {
        uVar8 = (uint)uVar6;
        if (0x27 < uVar6) {
          uVar8 = 0xffffffff;
        }
        if (uVar8 < 0x28) {
          uVar4 = *(uint *)(param_1 + 0x158);
          if (0x13 < uVar4) {
            uVar4 = 0x14;
          }
          uVar1 = uVar8 - uVar4;
          if (uVar8 < uVar4) {
            psVar7 = (short *)(param_1 + 0xb8 + (ulong)uVar8 * 8);
LAB_027fc36c:
            psVar5 = psVar7;
            if (*psVar7 != -2) {
              lVar9 = *(long *)puVar3;
              uVar4 = FUN_0277d6c4(psVar7);
              if (*(long *)puVar3 == 0) goto LAB_027fc3c4;
              lVar9 = *(long *)(lVar9 + 0x57e58);
              uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
              psVar5 = (short *)puVar2;
              if (uVar4 < *(uint *)(lVar9 + 0x1d8)) {
                if (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar4 * 8) != 0) {
                  psVar5 = psVar7;
                }
              }
            }
          }
          else if ((int)uVar1 < 0) {
LAB_027fc3c4:
            psVar5 = (short *)puVar2;
          }
          else {
            uVar4 = *(uint *)(param_1 + 0xa0);
            if (0x13 < uVar4) {
              uVar4 = 0x14;
            }
            psVar5 = (short *)puVar2;
            if (uVar1 < uVar4) {
              psVar7 = (short *)(param_1 + (ulong)uVar1 * 8);
              goto LAB_027fc36c;
            }
          }
          lVar9 = *(long *)puVar3;
          uVar4 = FUN_0277d6c4(psVar5);
          if (*(long *)puVar3 != 0) {
            lVar9 = *(long *)(lVar9 + 0x57e58);
            uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
            if ((uVar4 < *(uint *)(lVar9 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
              FUN_027fa2dc(param_1,(ulong)uVar8,puVar2,0);
            }
          }
        }
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 != 0x40);
  }
  return;
}


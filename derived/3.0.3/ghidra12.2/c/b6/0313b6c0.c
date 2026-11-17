
void FUN_0313b6c0(long param_1,short param_2,uint param_3)

{
  uint uVar1;
  short *psVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 local_68;
  long *plStack_60;
  undefined4 local_58;
  
  if ((param_2 != -1) && (uVar1 = *(uint *)(param_1 + 0xe2b0), 0 < (int)uVar1)) {
    lVar5 = 0;
    lVar6 = -0x300;
    do {
      psVar2 = (short *)(**(code **)(**(long **)(*(long *)(param_1 + 0xe2b8) + lVar5 * 8) + 0xf0))()
      ;
      if (*psVar2 == param_2) {
        if (0x30 < (int)(uint)lVar5) {
          return;
        }
        lVar4 = *(long *)(param_1 + 0x210);
        plStack_60 = (long *)(lVar4 - lVar6);
        if (0x30 < (uint)lVar5) {
          plStack_60 = (long *)(lVar4 + 0x300);
        }
        plStack_60 = (long *)*plStack_60;
        if (plStack_60 == (long *)0x0) {
          return;
        }
        goto LAB_0313b758;
      }
      lVar6 = lVar6 + -8;
      lVar5 = lVar5 + 1;
    } while ((ulong)uVar1 * 8 + lVar6 != -0x300);
  }
  lVar4 = *(long *)(param_1 + 0x210);
  plStack_60 = *(long **)(lVar4 + 0x300);
  if (plStack_60 != (long *)0x0) {
LAB_0313b758:
    uVar3 = 0;
    while (*(long **)(lVar4 + 0x300 + (-(uVar3 >> 0x1f) & 0xfffffff800000000 | uVar3 << 3)) !=
           plStack_60) {
      uVar1 = (int)uVar3 + 1;
      if (uVar1 == 0x31) {
        return;
      }
      if (*(long **)(lVar4 + 0x300 +
                    (-(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3)) ==
          plStack_60) break;
      uVar3 = (ulong)((int)uVar3 + 2);
    }
    local_68 = *(undefined8 *)(param_1 + 0x218);
    local_58 = 0;
    if ((param_3 & 1) != 0) {
      uVar3 = (**(code **)(*plStack_60 + 0xf0))();
      if ((uVar3 & 1) != 0) {
        return;
      }
      if (DAT_05739190 != 0) {
        *(byte *)(DAT_05739190 + 0x429) = *(byte *)(DAT_05739190 + 0x429) | 2;
      }
    }
    FUN_032017e0(&local_68);
  }
  return;
}


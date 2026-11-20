
/* WARNING: Removing unreachable block (ram,0x03eb19d8) */

void FUN_03eb1930(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  
  puVar2 = PTR_DAT_04bb2648;
  uVar4 = 0;
  do {
    uVar1 = uVar4;
    if (*(uint *)(param_1 + 8) <= uVar4) {
      uVar1 = 0;
    }
    *(int *)(*(long *)(param_1 + 0x10) + (ulong)uVar1 * 4) =
         *(int *)(*(long *)(param_1 + 0x10) + (ulong)uVar1 * 4) + 1;
    uVar1 = uVar4;
    if (*(uint *)(*(long *)puVar2 + 0x330) <= uVar4) {
      uVar1 = 0;
    }
    lVar5 = *(long *)(*(long *)(*(long *)puVar2 + 0x338) + (ulong)uVar1 * 8);
    uVar3 = (**(code **)(**(long **)(lVar5 + 0xc20) + 0x30))();
    if ((uVar3 & 1) != 0) {
      if (((*(int *)(lVar5 + 8) == 0) &&
          (SQRT(*(float *)(lVar5 + 0x9c) * *(float *)(lVar5 + 0x9c) +
                *(float *)(lVar5 + 0x98) * *(float *)(lVar5 + 0x98)) <= 0.5)) &&
         (SQRT(*(float *)(lVar5 + 0xa4) * *(float *)(lVar5 + 0xa4) +
               *(float *)(lVar5 + 0xa0) * *(float *)(lVar5 + 0xa0)) <= 0.5)) {
        fVar6 = SQRT(*(float *)(lVar5 + 0x158) * *(float *)(lVar5 + 0x158) +
                     *(float *)(lVar5 + 0x154) * *(float *)(lVar5 + 0x154) +
                     *(float *)(lVar5 + 0x15c) * *(float *)(lVar5 + 0x15c)) + -1.0;
        fVar7 = -fVar6;
        if (0.0 <= fVar6) {
          fVar7 = fVar6;
        }
        if (fVar7 <= 0.1) {
          fVar6 = SQRT(*(float *)(lVar5 + 0x164) * *(float *)(lVar5 + 0x164) +
                       *(float *)(lVar5 + 0x160) * *(float *)(lVar5 + 0x160) +
                       *(float *)(lVar5 + 0x168) * *(float *)(lVar5 + 0x168)) + -1.0;
          fVar7 = -fVar6;
          if (0.0 <= fVar6) {
            fVar7 = fVar6;
          }
          if (((fVar7 <= 0.1) &&
              (SQRT(*(float *)(lVar5 + 0x1d0) * *(float *)(lVar5 + 0x1d0) +
                    *(float *)(lVar5 + 0x1cc) * *(float *)(lVar5 + 0x1cc) +
                    *(float *)(lVar5 + 0x1d4) * *(float *)(lVar5 + 0x1d4)) <= 0.02)) &&
             (SQRT(*(float *)(lVar5 + 0x1dc) * *(float *)(lVar5 + 0x1dc) +
                   *(float *)(lVar5 + 0x1d8) * *(float *)(lVar5 + 0x1d8) +
                   *(float *)(lVar5 + 0x1e0) * *(float *)(lVar5 + 0x1e0)) <= 0.02))
          goto LAB_03eb1994;
        }
      }
      uVar1 = uVar4;
      if (*(uint *)(param_1 + 8) <= uVar4) {
        uVar1 = 0;
      }
      *(undefined4 *)(*(long *)(param_1 + 0x10) + (ulong)uVar1 * 4) = 0;
    }
LAB_03eb1994:
    uVar4 = uVar4 + 1;
    if (uVar4 == 9) {
      return;
    }
  } while( true );
}


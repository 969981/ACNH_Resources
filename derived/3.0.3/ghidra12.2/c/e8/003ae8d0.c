
void FUN_003ae8d0(long *param_1,int param_2)

{
  long lVar1;
  undefined4 uVar2;
  byte bVar3;
  byte bVar4;
  undefined2 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  bool bVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  float fVar19;
  ulong local_90 [4];
  
  if ((*(byte *)(param_1 + 1) >> 1 & 1) != 0) {
    lVar15 = 0;
    local_90[2] = 0;
    local_90[3] = 0;
    local_90[0] = 0;
    local_90[1] = 0;
    lVar9 = *(long *)(*param_1 + 0x28);
    lVar16 = *(long *)(*param_1 + 0x10);
    do {
      bVar3 = *(byte *)(lVar9 + lVar15);
      if (bVar3 != 0) {
        lVar18 = *(long *)(*(long *)(*param_1 + 0x10) + 8) + (ulong)(bVar3 - 1) * 0x10;
        bVar3 = *(byte *)(lVar18 + 0xe);
        uVar12 = (ulong)bVar3;
        lVar8 = *(long *)(param_1[9] + uVar12 * 8);
        if (lVar8 != 0) {
          lVar8 = lVar8 + (long)param_2 * 0x48;
          uVar6 = FUN_00347cc4(lVar8);
          bVar3 = bVar3 >> 6;
          uVar13 = local_90[bVar3];
          uVar17 = 1L << (uVar12 & 0x3f);
          if ((uVar13 & uVar17) == 0) {
            FUN_00347cfc(lVar8,0,*(undefined4 *)(*(long *)(lVar16 + 0x30) + uVar12 * 0x10));
            local_90[bVar3] = uVar13 | uVar17;
            bVar3 = *(byte *)(*param_1 + 0x5c);
          }
          else {
            bVar3 = *(byte *)(*param_1 + 0x5c);
          }
          if ((ulong)bVar3 != 0) {
            uVar2 = *(undefined4 *)(lVar18 + 8);
            lVar8 = 0;
            bVar11 = false;
            lVar10 = (long)*(int *)(*(long *)(lVar16 + 0x38) + uVar12 * 0x10);
            uVar5 = *(undefined2 *)(lVar18 + 0xc);
            lVar18 = lVar15;
            do {
              fVar19 = *(float *)(param_1[5] + lVar8);
              if (0.001 <= ABS(fVar19)) {
                bVar4 = *(byte *)(*(long *)(*param_1 + 0x28) + lVar18);
                if (bVar4 != 0) {
                  lVar1 = *(long *)(*(long *)(*param_1 + 0x10) + 8) + (ulong)(bVar4 - 1) * 0x10;
                  uVar12 = (ulong)*(byte *)(lVar1 + 0xe);
                  uVar14 = *(undefined8 *)(*(long *)(lVar16 + 0x28) + uVar12 * 8);
                  uVar7 = FUN_00347cc4(uVar14);
                  if (bVar11) {
                    FUN_003aed6c(fVar19,uVar6,uVar5,lVar10,uVar7,*(undefined2 *)(lVar1 + 0xc),
                                 (long)*(int *)(*(long *)(lVar16 + 0x38) + uVar12 * 0x10),uVar2,
                                 *(undefined4 *)(lVar16 + 0x50));
                  }
                  else {
                    FUN_003aeb64(fVar19,uVar6,uVar5,lVar10);
                  }
                  FUN_00347cd8(uVar14);
                  bVar11 = true;
                }
              }
              lVar8 = lVar8 + 4;
              lVar18 = lVar18 + 0x14;
            } while ((ulong)bVar3 * 4 != lVar8);
          }
        }
      }
      lVar15 = lVar15 + 1;
    } while (lVar15 != 0x12);
    uVar12 = (ulong)*(byte *)(*(long *)(*param_1 + 0x10) + 0x4d);
    if (uVar12 != 0) {
      uVar13 = 0;
      do {
        if ((local_90[uVar13 >> 6 & 0x3ffffff] >> (uVar13 & 0x3f) & 1) != 0) {
          lVar15 = *(long *)(param_1[9] + uVar13 * 8) + (long)param_2 * 0x48;
          FUN_00347cdc(lVar15,0,*(undefined4 *)(*(long *)(lVar16 + 0x30) + uVar13 * 0x10));
          FUN_00347cd8(lVar15);
        }
        uVar13 = uVar13 + 1;
      } while (uVar13 != uVar12);
    }
  }
  return;
}


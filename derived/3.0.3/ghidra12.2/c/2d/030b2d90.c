
void FUN_030b2d90(long param_1,long param_2,uint param_3)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  float fVar7;
  undefined *puVar8;
  bool bVar9;
  byte bVar10;
  long *plVar11;
  long lVar12;
  int *piVar13;
  long lVar14;
  long *plVar15;
  ulong uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float local_b0;
  float fStack_ac;
  float local_a8;
  float fStack_a4;
  
  if (param_1 != 0) {
    plVar15 = (long *)(param_1 + 0xafca0);
    while (0 < *(int *)(param_1 + 0xafcc8)) {
      plVar11 = *(long **)(param_1 + 0xafcc0);
      if (*plVar11 != 0) {
        *(long *)(*plVar11 + 8) = plVar11[1];
      }
      if ((long *)plVar11[1] != (long *)0x0) {
        *(long *)plVar11[1] = *plVar11;
      }
      *plVar11 = 0;
      plVar11[1] = 0;
      *(int *)(param_1 + 0xafcc8) = *(int *)(param_1 + 0xafcc8) + -1;
      if ((plVar11 == (long *)0x0) ||
         (lVar12 = (long)plVar11 - (long)*(int *)(param_1 + 0xafccc), lVar12 == 0)) break;
      *(undefined1 *)(lVar12 + 0x14) = 0;
      plVar11 = (long *)(lVar12 + *(int *)(param_1 + 0xafcb4));
      lVar12 = *plVar15;
      *plVar15 = (long)plVar11;
      *plVar11 = lVar12;
      plVar11[1] = (long)plVar15;
      if (lVar12 != 0) {
        *(long **)(lVar12 + 8) = plVar11;
      }
      *(int *)(param_1 + 0xafcb0) = *(int *)(param_1 + 0xafcb0) + 1;
    }
    *(undefined8 *)(param_1 + 0xafcd0) = 0;
    *(undefined8 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0xafcd8) = 0;
    puVar8 = PTR_DAT_04bbdbc0;
    if (param_3 != 0) {
      fVar20 = 0.0;
      fVar21 = 0.0;
      uVar16 = 0;
      bVar9 = false;
      do {
        uVar6 = (int)uVar16 * 3;
        if (uVar6 < 0x752e) {
          pbVar1 = (byte *)(param_2 + (ulong)uVar6);
          bVar5 = pbVar1[2];
          fVar7 = (float)(bVar5 >> 1 & 3);
          bVar10 = bVar5 >> 3 & 3;
          uVar6 = (uint)*pbVar1 << 0xb | (uint)pbVar1[1] << 3;
          fVar18 = (float)NEON_ucvtf(*(undefined4 *)PTR_DAT_04bc81a8);
          fVar19 = (float)(*(uint *)puVar8 - 1);
          local_b0 = ((float)*(uint *)puVar8 / fVar18) * (float)((ulong)uVar6 / 0x208);
          if (fVar19 <= local_b0) {
            local_b0 = fVar19;
          }
          fVar18 = (float)NEON_ucvtf(*(undefined4 *)PTR_DAT_04bc81b0);
          fStack_ac = ((float)*(uint *)PTR_DAT_04bbdbc8 / fVar18) *
                      (float)((uVar6 | bVar5 >> 5) % 0x208);
          fVar18 = (float)(*(uint *)PTR_DAT_04bbdbc8 - 1);
          if (fVar18 <= fStack_ac) {
            fStack_ac = fVar18;
          }
          fVar18 = fVar7;
          if (2 < (uint)fVar7) {
            fVar18 = 0.0;
          }
          fVar18 = (float)(&DAT_04183cbc)[(int)fVar18];
          if (bVar9) {
            fVar22 = local_b0 - fVar20;
            fVar23 = fStack_ac - fVar21;
            fVar19 = 0.0;
            do {
              fVar17 = 2.0 / SQRT(fVar23 * fVar23 + fVar22 * fVar22) + fVar19;
              fVar19 = 1.0;
              if (fVar17 <= 1.0) {
                fVar19 = fVar17;
              }
              local_a8 = fVar20 + fVar22 * fVar19;
              fStack_a4 = fVar21 + fVar23 * fVar19;
              if (*(uint *)(param_1 + 0xafcd0) >> 4 < 0x271 && *(uint *)(param_1 + 0xafcd4) < 90000)
              {
                FUN_030b4238((float)(int)fVar18,param_1,&local_a8,bVar10,fVar7,1.0 <= fVar19);
              }
            } while (fVar19 < 1.0);
          }
          else {
            local_a8 = fVar7;
            if ((*(uint *)(param_1 + 0xafcd0) >> 4 < 0x271) &&
               (*(uint *)(param_1 + 0xafcd4) < 90000)) {
              FUN_030b4238((float)(int)fVar18,param_1,&local_b0,bVar10,fVar7,1);
            }
          }
          bVar9 = (bVar5 & 1) == 0;
          if ((bVar5 & 1) == 0) {
            fVar20 = local_b0;
            fVar21 = fStack_ac;
          }
          else if (*(long *)(param_1 + 0xafcb8) != param_1 + 0xafcb8) {
            lVar14 = (long)*(int *)(param_1 + 0xafccc);
            lVar12 = *(long *)(param_1 + 0xafcb8) - lVar14;
            do {
              if (*(char *)(lVar12 + 0x15) != '\0') {
                *(undefined1 *)(lVar12 + 0x16) = 1;
                plVar15 = *(long **)(param_1 + 0xafce0);
                if (plVar15 != (long *)0x0) {
                  if (*(char *)(lVar12 + 0x18) == '\0') {
                    *(undefined4 *)(lVar12 + 0x1c) = 3;
                    iVar2 = (int)plVar15[2];
                    iVar4 = (int)plVar15[1];
                    if (iVar2 < iVar4) {
                      *(int *)(plVar15 + 2) = iVar2 + 1;
                      iVar2 = *(int *)((long)plVar15 + 0xc) + iVar2;
                      iVar3 = 0;
                      if (iVar4 <= iVar2) {
                        iVar3 = iVar4;
                      }
                      *(long *)(*plVar15 + (long)(iVar2 - iVar3) * 8) = lVar12;
                    }
                    *(undefined1 *)(lVar12 + 0x18) = 1;
                  }
                  piVar13 = (int *)plVar15[0x15f93];
                  if (piVar13 != (int *)0x0) {
                    iVar2 = *piVar13;
                    if (iVar2 == 0 || iVar2 == 4) {
                      *piVar13 = 2;
                    }
                    else if (iVar2 == 3) {
                      *piVar13 = 5;
                    }
                  }
                }
                break;
              }
              lVar12 = *(long *)(lVar12 + lVar14) - lVar14;
            } while (lVar12 != (param_1 + 0xafcb8) - lVar14);
          }
        }
        uVar16 = uVar16 + 1;
      } while (uVar16 != param_3);
    }
    FUN_030b43d0(param_1);
  }
  return;
}


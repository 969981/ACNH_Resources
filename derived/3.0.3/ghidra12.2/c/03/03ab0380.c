
void FUN_03ab0380(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  undefined8 *puVar4;
  float *pfVar5;
  long lVar6;
  undefined4 *puVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  long *plVar11;
  int iVar12;
  ulong uVar13;
  long lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  
  if ((*(ushort *)(param_1 + 0x43c) >> 10 & 1) == 0) {
    if (*(char *)(param_1 + 0x7c0) == '\0' && *(char *)(param_1 + 0x1098) == '\0') {
      return;
    }
    lVar6 = *(long *)(param_1 + 0x1390);
  }
  else {
    *(undefined1 *)(param_1 + 0x7c0) = 1;
    lVar6 = *(long *)(param_1 + 0x1390);
  }
  if (lVar6 != 0) {
    uVar9 = (uint)*(byte *)(param_2 + 8);
    if (*(uint *)(lVar6 + 0x200) <= (uint)*(byte *)(param_2 + 8)) {
      uVar9 = 0;
    }
    puVar7 = (undefined4 *)(*(long *)(lVar6 + 0x208) + (ulong)uVar9 * 0xc);
    *(undefined4 *)(param_1 + 0x107c) = *puVar7;
    *(undefined4 *)(param_1 + 0x1080) = puVar7[1];
    *(undefined4 *)(param_1 + 0x1084) = puVar7[2];
  }
  if ((*(ushort *)(param_1 + 0x43c) >> 2 & 1) != 0) {
    lVar6 = *(long *)(param_2 + 1000);
    *(undefined8 *)(param_1 + 0x12f8) = 0x7f7fffff7f7fffff;
    *(undefined8 *)(param_1 + 0x1300) = 0xff7fffff7f7fffff;
    *(undefined8 *)(param_1 + 0x1308) = 0xff7fffffff7fffff;
    lVar14 = *(long *)(lVar6 + 0xa8);
    uVar9 = *(uint *)(lVar6 + 0xbc);
    if (0 < (int)uVar9) {
      uVar13 = 0;
      do {
        puVar4 = *(undefined8 **)(lVar14 + uVar13 * 8);
        if ((*(byte *)(puVar4 + 1) >> 4 & 1) != 0) {
          plVar11 = (long *)*puVar4;
          lVar6 = plVar11[1];
          lVar8 = *(long *)(lVar6 + 0x10);
          if (lVar8 == 0) {
            iVar2 = (**(code **)(*plVar11 + 0x38))(plVar11,0);
            if (iVar2 < 2) {
              local_78 = 0;
              local_70 = 0;
              pfVar5 = *(float **)(plVar11[1] + 0x38);
              if (pfVar5 == (float *)(plVar11[1] + 0x28)) {
                (**(code **)(*plVar11 + 0x48))(plVar11,&local_78);
                fVar15 = (float)local_70;
                fVar16 = local_70._4_4_;
                fVar17 = local_78._4_4_;
                fVar18 = (float)local_78;
              }
              else {
                local_78 = *(undefined8 *)pfVar5;
                local_70 = *(undefined8 *)(pfVar5 + 2);
                fVar15 = pfVar5[2];
                fVar16 = pfVar5[3];
                fVar17 = pfVar5[1];
                fVar18 = *pfVar5;
              }
              if (fVar18 - fVar16 < *(float *)(param_1 + 0x12f8)) {
                *(float *)(param_1 + 0x12f8) = fVar18 - fVar16;
              }
              if (fVar17 - fVar16 < *(float *)(param_1 + 0x12fc)) {
                *(float *)(param_1 + 0x12fc) = fVar17 - fVar16;
              }
              if (fVar15 - fVar16 < *(float *)(param_1 + 0x1300)) {
                *(float *)(param_1 + 0x1300) = fVar15 - fVar16;
              }
              if (*(float *)(param_1 + 0x1304) < fVar16 + fVar18) {
                *(float *)(param_1 + 0x1304) = fVar16 + fVar18;
              }
              if (*(float *)(param_1 + 0x1308) < fVar16 + fVar17) {
                *(float *)(param_1 + 0x1308) = fVar16 + fVar17;
              }
              if (*(float *)(param_1 + 0x130c) < fVar16 + fVar15) {
                *(float *)(param_1 + 0x130c) = fVar16 + fVar15;
              }
            }
            else {
              local_68 = 0xff7fffffff7fffff;
              iVar12 = 0;
              local_78 = 0x7f7fffff7f7fffff;
              local_70 = 0xff7fffff7f7fffff;
              do {
                uVar3 = (**(code **)(*plVar11 + 0x40))(plVar11,0,iVar12,&local_78);
                if ((uVar3 & 1) != 0) {
                  if ((float)local_78 < *(float *)(param_1 + 0x12f8)) {
                    *(float *)(param_1 + 0x12f8) = (float)local_78;
                  }
                  if (local_78._4_4_ < *(float *)(param_1 + 0x12fc)) {
                    *(float *)(param_1 + 0x12fc) = local_78._4_4_;
                  }
                  if ((float)local_70 < *(float *)(param_1 + 0x1300)) {
                    *(float *)(param_1 + 0x1300) = (float)local_70;
                  }
                  if (*(float *)(param_1 + 0x1304) < local_70._4_4_) {
                    *(float *)(param_1 + 0x1304) = local_70._4_4_;
                  }
                  if (*(float *)(param_1 + 0x1308) < (float)local_68) {
                    *(float *)(param_1 + 0x1308) = (float)local_68;
                  }
                  if (*(float *)(param_1 + 0x130c) < local_68._4_4_) {
                    *(float *)(param_1 + 0x130c) = local_68._4_4_;
                  }
                }
                iVar12 = iVar12 + 1;
              } while (iVar2 != iVar12);
            }
          }
          else {
            uVar1 = *(uint *)(lVar8 + 0x1c);
            if (0 < (int)uVar1) {
              fVar15 = *(float *)(param_1 + 0x12f8);
              lVar8 = 0;
              do {
                lVar10 = *(long *)(*(long *)(*(long *)(lVar6 + 0x10) + 0x10) + lVar8);
                fVar18 = *(float *)(lVar10 + 0x9c);
                fVar17 = *(float *)(lVar10 + 0xa0);
                fVar16 = *(float *)(lVar10 + 0xa4);
                fVar19 = *(float *)(lVar10 + 0x98) - fVar16;
                if (fVar19 < fVar15) {
                  *(float *)(param_1 + 0x12f8) = fVar19;
                  fVar15 = fVar19;
                }
                fVar18 = fVar18 - fVar16;
                if (fVar18 < *(float *)(param_1 + 0x12fc)) {
                  *(float *)(param_1 + 0x12fc) = fVar18;
                }
                fVar17 = fVar17 - fVar16;
                if (fVar17 < *(float *)(param_1 + 0x1300)) {
                  *(float *)(param_1 + 0x1300) = fVar17;
                }
                fVar18 = *(float *)(lVar10 + 0x9c);
                fVar19 = fVar16 + *(float *)(lVar10 + 0x98);
                fVar17 = *(float *)(lVar10 + 0xa0);
                if (*(float *)(param_1 + 0x1304) < fVar19) {
                  *(float *)(param_1 + 0x1304) = fVar19;
                }
                fVar18 = fVar16 + fVar18;
                if (*(float *)(param_1 + 0x1308) < fVar18) {
                  *(float *)(param_1 + 0x1308) = fVar18;
                }
                fVar16 = fVar16 + fVar17;
                if (*(float *)(param_1 + 0x130c) < fVar16) {
                  *(float *)(param_1 + 0x130c) = fVar16;
                }
                lVar8 = lVar8 + 8;
              } while ((ulong)uVar1 * 8 != lVar8);
            }
          }
        }
        uVar13 = uVar13 + 1;
      } while (uVar13 != uVar9);
    }
  }
  if (((*(float *)(param_1 + 0x12f8) <= *(float *)(param_1 + 0x1304)) &&
      (*(float *)(param_1 + 0x12fc) <= *(float *)(param_1 + 0x1308))) &&
     (*(float *)(param_1 + 0x1300) <= *(float *)(param_1 + 0x130c))) {
    *(undefined8 *)(param_1 + 0x1070) = *(undefined8 *)(param_1 + 0x1304);
    *(undefined4 *)(param_1 + 0x1078) = *(undefined4 *)(param_1 + 0x130c);
    *(undefined8 *)(param_1 + 0x1064) = *(undefined8 *)(param_1 + 0x12f8);
    *(undefined4 *)(param_1 + 0x106c) = *(undefined4 *)(param_1 + 0x1300);
    FUN_03ab50f0(param_1 + 0x7b8);
    FUN_039eea20(param_2,9,param_1 + 0xf10,param_1 + 0xf68,param_1 + 0xf10);
  }
  return;
}


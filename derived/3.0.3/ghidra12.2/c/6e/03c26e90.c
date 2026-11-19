
void FUN_03c26e90(long *param_1)

{
  uint uVar1;
  bool bVar2;
  int *piVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  float *pfVar9;
  int iVar10;
  short *psVar11;
  long lVar12;
  long lVar13;
  undefined4 *puVar14;
  long lVar15;
  uint uVar16;
  float fVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  
  lVar12 = *(long *)(*param_1 + 0x50);
  if (0 < *(int *)((long)param_1 + 0x24)) {
    uVar16 = *(uint *)(param_1 + 3);
    if (*(char *)((long)param_1 + 0x34) == '\0') {
      uVar16 = 1;
    }
    if (0 < (int)uVar16) {
      uVar6 = 0;
      do {
        psVar11 = (short *)(param_1[2] + uVar6 * 0x14);
        if (*psVar11 != -1 && psVar11[1] != -1) {
          lVar8 = param_1[2] + uVar6 * 0x14;
          iVar10 = (int)psVar11[1];
          if (*(uint *)(lVar12 + 0x80) <= (uint)(int)psVar11[1]) {
            iVar10 = 0;
          }
          pfVar9 = (float *)(lVar8 + 4);
          fVar19 = *(float *)(lVar8 + 8) + *pfVar9;
          lVar8 = **(long **)(*(long *)(lVar12 + 0x88) + (long)iVar10 * 0x28);
          *pfVar9 = fVar19;
          iVar10 = *(int *)(lVar8 + 0x40);
          fVar17 = (float)iVar10;
          if (iVar10 < 1 || (*(uint *)(lVar8 + 4) & 4) == 0) {
            fVar20 = fVar17;
            if ((fVar17 < fVar19) || (fVar20 = 0.0, fVar19 < 0.0)) {
LAB_03c26f00:
              *pfVar9 = fVar20;
            }
          }
          else {
            if (fVar17 <= fVar19) {
              do {
                fVar19 = fVar19 - fVar17;
              } while (fVar17 <= fVar19);
              *pfVar9 = fVar19;
            }
            fVar20 = fVar19;
            if (fVar19 < 0.0) {
              do {
                fVar20 = fVar20 + fVar17;
              } while (fVar20 < 0.0);
              goto LAB_03c26f00;
            }
          }
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 != uVar16);
    }
  }
  lVar15 = 0;
  lVar8 = 0;
  fVar17 = 1.0;
  do {
    lVar13 = param_1[2];
    psVar11 = (short *)(lVar13 + lVar15);
    fVar19 = 1.0;
    if (*(float *)(psVar11 + 8) + *(float *)(psVar11 + 6) <= 1.0) {
      fVar19 = *(float *)(psVar11 + 8) + *(float *)(psVar11 + 6);
    }
    *(float *)(psVar11 + 6) = fVar19;
    fVar19 = (float)FUN_03eb4c60(fVar19,0x3f800000);
    fVar19 = fVar17 * fVar19;
    uVar16 = (int)lVar8 + (int)param_1[6];
    if ((fVar19 <= 0.001) || (*psVar11 == -1 || psVar11[1] == -1)) {
      if (*(uint *)(lVar12 + 0x38) <= uVar16) {
        uVar16 = 0;
      }
      piVar3 = (int *)(*(long *)(lVar12 + 0x40) + (long)(int)uVar16 * 0xb8);
      if (*piVar3 != -1 || *(long *)(piVar3 + 2) != 0) {
        FUN_039aec10(lVar12,piVar3,0xffffffff,0);
      }
    }
    else {
      uVar5 = *(uint *)(lVar12 + 0x38);
      lVar4 = param_1[1];
      lVar7 = *(long *)(lVar12 + 0x40);
      uVar1 = uVar16;
      if (uVar5 <= uVar16) {
        uVar1 = 0;
      }
      if (lVar4 == 0) {
        bVar2 = true;
      }
      else {
        bVar2 = *(int *)(lVar4 + 0x18) == *(int *)(lVar7 + (long)(int)uVar1 * 0xb8 + 0xac);
      }
      piVar3 = (int *)(lVar7 + (long)(int)uVar1 * 0xb8);
      if ((*piVar3 != *(int *)(lVar13 + lVar15) || *(long *)(piVar3 + 2) != lVar4) || (!bVar2)) {
        FUN_039aec10(lVar12);
        uVar5 = *(uint *)(lVar12 + 0x38);
        lVar7 = *(long *)(lVar12 + 0x40);
      }
      uVar1 = uVar16;
      if (uVar5 <= uVar16) {
        uVar1 = 0;
      }
      puVar14 = *(undefined4 **)(lVar7 + (long)(int)uVar1 * 0xb8 + 0x20);
      uVar18 = (**(code **)(puVar14 + 4))
                         (*(undefined4 *)(psVar11 + 2),puVar14[1],puVar14[2],
                          *(undefined8 *)(puVar14 + 6));
      *puVar14 = uVar18;
      if (*(uint *)(lVar12 + 0x38) <= uVar16) {
        uVar16 = 0;
      }
      pfVar9 = (float *)(*(long *)(lVar12 + 0x40) + (long)(int)uVar16 * 0xb8 + 0x10);
      if (fVar17 <= fVar19 + 0.001) {
        *pfVar9 = fVar17;
        uVar6 = lVar8 + 1;
        iVar10 = (int)param_1[3];
        if ((int)uVar6 < iVar10) {
          do {
            uVar16 = (int)uVar6 + (int)param_1[6];
            if (*(uint *)(lVar12 + 0x38) <= uVar16) {
              uVar16 = 0;
            }
            piVar3 = (int *)(*(long *)(lVar12 + 0x40) + (long)(int)uVar16 * 0xb8);
            if (*piVar3 != -1 || *(long *)(piVar3 + 2) != 0) {
              FUN_039aec10(lVar12,piVar3,0xffffffff,0);
              iVar10 = (int)param_1[3];
            }
            uVar16 = (int)uVar6 + 1;
            uVar6 = (ulong)uVar16;
          } while ((int)uVar16 < iVar10);
        }
        goto LAB_03c271c4;
      }
      *pfVar9 = fVar19;
      fVar17 = fVar17 - fVar19;
    }
    lVar8 = lVar8 + 1;
    lVar15 = lVar15 + 0x14;
    if ((int)param_1[3] <= lVar8) {
LAB_03c271c4:
      *(int *)((long)param_1 + 0x24) = *(int *)((long)param_1 + 0x24) + 1;
      return;
    }
  } while( true );
}


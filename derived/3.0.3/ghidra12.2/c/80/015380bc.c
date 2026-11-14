
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015380bc(long param_1,int *param_2)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auStack_50 [12];
  int local_44;
  undefined1 auStack_40 [8];
  int local_38;
  int iStack_34;
  
  if (*(long *)(param_1 + 0x290) != 0) {
    if (*(int *)(*(long *)(param_1 + 0x290) + 700) == 1) {
      *(undefined8 *)(param_1 + 0x278) = 0;
      fVar8 = 0.0;
      fVar7 = 0.0;
      *(undefined4 *)(param_1 + 0x280) = 0;
    }
    else {
      FUN_01473944(auStack_40);
      iVar2 = local_38;
      FUN_01473944(auStack_50,*(undefined8 *)(param_1 + 0x290));
      if (iVar2 == local_44) {
        *(undefined8 *)(param_1 + 0x278) = 0;
        fVar8 = 0.0;
        fVar7 = 0.0;
        *(undefined4 *)(param_1 + 0x280) = 0;
      }
      else {
        FUN_01473944(auStack_40,*(undefined8 *)(param_1 + 0x290));
        fVar7 = 0.0;
        fVar8 = 0.0;
        if (local_38 != iStack_34) {
          if (local_38 < iStack_34) {
            iVar2 = iStack_34;
            iVar4 = local_38;
          }
          else {
            iVar2 = local_38;
            iVar4 = iStack_34;
          }
          iVar3 = *param_2;
          fVar8 = 1.0;
          if (iVar3 != 2) {
            fVar8 = 0.0;
          }
          fVar7 = -1.0;
          if (iVar3 != 0) {
            fVar7 = fVar8;
          }
          fVar7 = (float)(iVar2 + 1) * 0.5 * (1.0 - (float)(iVar4 + 1) / (float)(iVar2 + 1)) * 5.0 *
                  fVar7;
          fVar8 = 0.0;
          if (iVar3 == 3) {
            fVar8 = 0.0;
            if ((iStack_34 + local_38 & 0x80000001U) == 1) {
              fVar8 = (float)iStack_34 * 5.0 * -0.5;
            }
          }
        }
        *(float *)(param_1 + 0x278) = fVar7;
        *(undefined4 *)(param_1 + 0x27c) = 0;
        *(float *)(param_1 + 0x280) = fVar8;
      }
    }
    fVar7 = fVar7 + 0.0;
    fVar8 = fVar8 + 0.0;
    lVar5 = *(long *)(*(long *)(param_1 + 0x290) + 0x68);
    uVar6 = (ulong)((float)(*(int *)(lVar5 + 0x2b4) + 0x20000000U >> 0x1e) * 90.0 * 11930465.0);
    uVar1 = uVar6 >> 0x18 & 0xff;
    fVar9 = (float)((uint)uVar6 & 0xffffff) * 5.9604645e-08;
    fVar13 = (float)(&DAT_04199798)[uVar1 * 4] + fVar9 * (float)(&DAT_0419979c)[uVar1 * 4];
    fVar14 = (float)(&DAT_041997a0)[uVar1 * 4] + fVar9 * (float)(&DAT_041997a4)[uVar1 * 4];
    fVar9 = -((float)(&DAT_0419979c)[uVar1 * 4] * fVar9) - (float)(&DAT_04199798)[uVar1 * 4];
    fVar15 = fVar13 * 0.0;
    fVar13 = fVar13 + 0.0;
    fVar16 = fVar14 * 0.0;
    fVar10 = fVar15 * 0.0 + 1.0;
    fVar17 = (float)_DAT_04102880;
    fVar18 = (float)((ulong)_DAT_04102880 >> 0x20);
    fVar19 = (float)_UNK_04102888;
    fVar20 = (float)((ulong)_UNK_04102888 >> 0x20);
    fVar11 = *(float *)(lVar5 + 0x27c);
    fVar12 = *(float *)(lVar5 + 0x280);
    *(float *)(param_1 + 0x284) =
         *(float *)(lVar5 + 0x278) + fVar7 * fVar14 + fVar20 * fVar15 + fVar8 * fVar13 + 0.0 +
         (fVar14 * 0.0 + fVar18 * fVar15 + fVar13 * 0.0 + 0.0) * 0.0 +
         (fVar14 * 1.0 + fVar17 * fVar15 + fVar13 * 0.0 + 0.0) * 0.0 +
         (fVar14 * 0.0 + fVar19 * fVar15 + fVar13 * 1.0 + 0.0) * 0.0;
    *(float *)(param_1 + 0x288) =
         fVar11 + fVar7 * fVar16 + fVar20 * fVar10 + fVar8 * fVar15 + 0.0 +
         (fVar16 * 0.0 + fVar18 * fVar10 + fVar15 * 0.0 + 0.0) * 0.0 +
         (fVar16 * 1.0 + fVar17 * fVar10 + fVar15 * 0.0 + 0.0) * 0.0 +
         (fVar16 * 0.0 + fVar19 * fVar10 + fVar15 * 1.0 + 0.0) * 0.0;
    *(float *)(param_1 + 0x28c) =
         fVar12 + fVar7 * fVar9 + fVar20 * fVar16 + fVar8 * fVar14 + 0.0 +
         (fVar9 * 0.0 + fVar18 * fVar16 + fVar14 * 0.0 + 0.0) * 0.0 +
         (fVar9 * 1.0 + fVar17 * fVar16 + fVar14 * 0.0 + 0.0) * 0.0 +
         (fVar9 * 0.0 + fVar19 * fVar16 + fVar14 * 1.0 + 0.0) * 0.0;
  }
  return;
}


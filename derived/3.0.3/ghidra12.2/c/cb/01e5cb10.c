
/* WARNING: Removing unreachable block (ram,0x01e5ce50) */

void FUN_01e5cb10(long param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  bool bVar10;
  char *pcVar11;
  undefined4 *puVar12;
  char *pcVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 local_50;
  char *pcStack_48;
  
  fVar14 = *(float *)(param_1 + 0x4d0);
  *(undefined4 *)(param_1 + 0x324) = *(undefined4 *)(param_1 + 0x4e8);
  fVar15 = *(float *)(param_1 + 0x4d8);
  *(float *)(param_1 + 0x308) = fVar14;
  *(undefined4 *)(param_1 + 0x30c) = *(undefined4 *)(param_1 + 0x4d4);
  *(float *)(param_1 + 0x310) = fVar15;
  puVar12 = *(undefined4 **)(param_1 + 0x350);
  *(undefined8 *)(param_1 + 0x314) = *(undefined8 *)(param_1 + 0x4c0);
  *(undefined4 *)(param_1 + 0x31c) = *(undefined4 *)(param_1 + 0x4c8);
  fVar16 = *(float *)(*(long *)(param_1 + 0x338) + 0x278);
  fVar17 = *(float *)(*(long *)(param_1 + 0x338) + 0x280);
  if ((puVar12 != (undefined4 *)0x0) && (fVar15 - fVar17 != 0.0 || fVar14 - fVar16 != 0.0)) {
    uVar3 = FUN_006f0400();
    *puVar12 = uVar3;
    fVar14 = *(float *)(param_1 + 0x308);
    fVar15 = *(float *)(param_1 + 0x310);
    fVar16 = *(float *)(*(long *)(param_1 + 0x338) + 0x278);
    fVar17 = *(float *)(*(long *)(param_1 + 0x338) + 0x280);
  }
  fVar18 = *(float *)(param_1 + 0x330) + 2.0;
  if (*(float *)(param_1 + 0x330) <= 0.0) {
    fVar18 = 2.0;
  }
  if (SQRT((fVar17 - fVar15) * (fVar17 - fVar15) + (fVar16 - fVar14) * (fVar16 - fVar14)) < fVar18)
  {
    *(undefined4 *)(param_1 + 0x4b8) = 1;
    *(undefined4 *)(param_1 + 0x598) = 2;
  }
  else {
    if ((fVar14 - fVar16 == 0.0) && (fVar15 - fVar17 == 0.0)) {
      iVar4 = 0;
      bVar10 = true;
    }
    else {
      iVar4 = FUN_006f0400();
      iVar4 = iVar4 + (uint)(*(char *)(param_1 + 0x32b) != '\0') * -0x80000000;
      uVar2 = iVar4 - **(int **)(param_1 + 0x348);
      uVar1 = uVar2 >> 0x18;
      bVar10 = 0.0 < *(float *)(PTR_DAT_04bb2d00 + (ulong)uVar1 * 0x10 + 8) +
                     *(float *)(PTR_DAT_04bb2d00 + (ulong)uVar1 * 0x10 + 0xc) *
                     (float)(uVar2 & 0xffffff) * 5.9604645e-08;
    }
    *(int *)(param_1 + 0x4e4) = iVar4;
    if (*(int *)(param_1 + 0x378) < 0x23) {
      *(int *)(param_1 + 0x3a4) = iVar4;
    }
    *(int *)(param_1 + 800) = iVar4;
    if (bVar10) {
      lVar5 = *(long *)(param_1 + 0x340);
      local_50 = PTR_DAT_04bb2020 + 0x10;
      pcStack_48 = "NpcMoveAccelRate";
      if (((*(long *)(lVar5 + 0x1138) != 0) &&
          (lVar7 = *(long *)(*(long *)(lVar5 + 0x1138) + 0x78), lVar7 != 0)) &&
         (plVar8 = *(long **)(lVar7 + 0x48), plVar8 != (long *)0x0)) {
        (**(code **)(*plVar8 + 0x30))(*(undefined4 *)(param_1 + 0x318),plVar8,&local_50);
        lVar5 = *(long *)(param_1 + 0x340);
      }
      FUN_017081d0(lVar5,&DAT_05390430 + (long)*(int *)(param_1 + 0x568) * 2,6,1,0);
    }
    else {
      *(int *)(param_1 + 0x444) = iVar4;
      FUN_01e5c070(param_1,0);
      *(undefined4 *)(param_1 + 0x598) = 0;
      iVar4 = *(int *)(param_1 + 0x570);
      local_50 = (undefined *)((ulong)local_50._4_4_ << 0x20);
      lVar5 = *(long *)(*(long *)(param_1 + 0x340) + 0x1138);
      if (lVar5 != 0) {
        lVar5 = *(long *)(lVar5 + 0x88);
        plVar8 = (long *)(lVar5 + 0x60);
        (**(code **)(*plVar8 + 0x18))(plVar8);
        (**(code **)(*plVar8 + 0x18))(plVar8);
        pcVar13 = *(char **)(lVar5 + 0x68);
        (**(code **)((&DAT_05390480)[(long)iVar4 * 2] + 0x18))(&DAT_05390480 + (long)iVar4 * 2);
        pcVar11 = (char *)(&DAT_05390488)[(long)iVar4 * 2];
        if (pcVar13 != pcVar11) {
          pcVar13 = *(char **)(lVar5 + 0x68);
          if (*pcVar13 != *pcVar11) {
            return;
          }
          if (*pcVar13 != '\0') {
            uVar6 = 0;
            do {
              uVar9 = uVar6;
              if (uVar9 == 0x80000) {
                return;
              }
              if (pcVar13[uVar9 + 1] != pcVar11[uVar9 + 1]) {
                return;
              }
              if (pcVar13[uVar9 + 1] == '\0') goto LAB_01e5ce04;
              if (pcVar13[uVar9 + 2] != pcVar11[uVar9 + 2]) {
                return;
              }
              uVar6 = uVar9 + 2;
            } while (pcVar13[uVar9 + 2] != '\0');
            uVar9 = uVar9 + 1;
LAB_01e5ce04:
            if (uVar9 >> 0x13 != 0) {
              return;
            }
          }
        }
        lVar5 = *(long *)(param_1 + 0x340);
        if (*(long *)(lVar5 + 0x1138) != 0) {
          uVar2 = *(uint *)(lVar5 + 0x1698) >> 1;
          uVar1 = uVar2 & 1;
          local_50 = (undefined *)(CONCAT44(local_50._4_4_,uVar2) & 0xffffffff00000001);
          uVar6 = FUN_03850368(*(long *)(lVar5 + 0x1138),uVar1);
          if (((((uVar6 & 1) == 0) && (*(long *)(lVar5 + 0x1138) != 0)) &&
              (uVar6 = FUN_03850368(*(long *)(lVar5 + 0x1138),uVar1), (uVar6 & 1) == 0)) &&
             (uVar6 = FUN_0384fca4(*(undefined8 *)(lVar5 + 0x1138),uVar1), (uVar6 & 1) == 0)) {
            return;
          }
        }
        *(undefined1 *)(param_1 + 0x32a) = 0;
        *(undefined8 *)(param_1 + 0x308) = *(undefined8 *)(param_1 + 0x430);
        *(undefined4 *)(param_1 + 0x310) = *(undefined4 *)(param_1 + 0x438);
        *(undefined4 *)(param_1 + 0x324) = *(undefined4 *)(param_1 + 0x448);
        *(undefined8 *)(param_1 + 0x314) = *(undefined8 *)(param_1 + 0x420);
        *(undefined4 *)(param_1 + 0x31c) = *(undefined4 *)(param_1 + 0x428);
        lVar5 = *(long *)(param_1 + 0x340);
        local_50 = PTR_DAT_04bb2020 + 0x10;
        pcStack_48 = "NpcMoveAccelRate";
        if (((*(long *)(lVar5 + 0x1138) != 0) &&
            (lVar7 = *(long *)(*(long *)(lVar5 + 0x1138) + 0x78), lVar7 != 0)) &&
           (plVar8 = *(long **)(lVar7 + 0x48), plVar8 != (long *)0x0)) {
          (**(code **)(*plVar8 + 0x30))(*(undefined4 *)(param_1 + 0x318),plVar8,&local_50);
          lVar5 = *(long *)(param_1 + 0x340);
        }
        FUN_017081d0(lVar5,&DAT_05390430 + (long)*(int *)(param_1 + 0x568) * 2,6,1,0);
        *(undefined4 *)(param_1 + 0x4b8) = 0;
        *(undefined4 *)(param_1 + 0x598) = 1;
      }
    }
  }
  return;
}



uint FUN_018ce120(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined8 *puVar10;
  short *psVar11;
  ulong uVar12;
  int iVar13;
  long lVar14;
  int iVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined *local_a8;
  int local_a0;
  int iStack_9c;
  undefined *local_98;
  int local_90;
  int iStack_8c;
  undefined *local_88;
  int local_80;
  int local_7c;
  byte local_78;
  undefined *local_70;
  int local_68;
  int iStack_64;
  
  puVar3 = PTR_DAT_04bb2720;
  if (*(long *)(PTR_DAT_04bbec30 + 8) == 0) {
    return 0;
  }
  local_80 = *(int *)(param_1 + 8);
  iVar13 = *(int *)(param_1 + 0xc);
  fVar19 = (float)local_80 * 10.0 + 5.0;
  fVar17 = (float)iVar13 * 10.0 + 5.0;
  iVar15 = (int)((float)(int)fVar19 / 10.0) - (uint)(fVar19 < 0.0);
  iVar4 = (int)((float)(int)fVar17 / 10.0) - (uint)(fVar17 < 0.0);
  uVar9 = iVar15 - *(int *)(PTR_DAT_04bbec38 + 0x10);
  if (((*(int *)(PTR_DAT_04bbec38 + 0x10) <= iVar15 && iVar15 <= *(int *)(PTR_DAT_04bbec38 + 0x20))
      && *(int *)(PTR_DAT_04bbec38 + 0x14) <= iVar4) && iVar4 <= *(int *)(PTR_DAT_04bbec38 + 0x24))
  {
    uVar5 = iVar4 - *(int *)(PTR_DAT_04bbec38 + 0x14);
    lVar14 = (long)(int)(uVar9 + *(uint *)PTR_DAT_04bbec30 * uVar5);
    if (*(uint *)(PTR_DAT_04bbec30 + 4) <= uVar5 || *(uint *)PTR_DAT_04bbec30 <= uVar9) {
      lVar14 = 0;
    }
    if ((*(char *)(*(long *)(PTR_DAT_04bbec30 + 8) + lVar14 * 8 + 4) == '\0') &&
       ((((lVar14 = *(long *)PTR_DAT_04bb5c90, fVar19 < (float)*(int *)(lVar14 + 0x28) * 5.0 ||
          ((float)*(int *)(lVar14 + 0x38) * 5.0 + 5.0 <= fVar19)) ||
         (fVar17 < (float)*(int *)(lVar14 + 0x2c) * 5.0)) ||
        ((float)*(int *)(lVar14 + 0x3c) * 5.0 + 5.0 <= fVar17)))) {
      fVar17 = (float)local_80 * 10.0;
      fVar16 = (float)iVar13 * 10.0;
      fVar20 = fVar17 + 2.5;
      fVar18 = fVar16 + 2.5;
      fVar19 = fVar17 + 10.0 + -2.5;
      fVar17 = fVar16 + 10.0 + -2.5;
      iVar6 = (int)((float)(int)fVar20 / 5.0) - (uint)(fVar20 < 0.0);
      iVar15 = (int)((float)(int)fVar18 / 5.0) - (uint)(fVar18 < 0.0);
      iVar7 = (int)((float)(int)fVar19 / 5.0) - (uint)(fVar19 < 0.0);
      iVar4 = iVar6;
      if (iVar7 <= iVar6) {
        iVar4 = iVar7;
      }
      if (iVar6 <= iVar7) {
        iVar6 = iVar7;
      }
      iVar8 = (int)((float)(int)fVar17 / 5.0) - (uint)(fVar17 < 0.0);
      iVar7 = iVar15;
      if (iVar15 <= iVar8) {
        iVar7 = iVar8;
      }
      if (iVar8 <= iVar15) {
        iVar15 = iVar8;
      }
      if (iVar7 + 1 != iVar15) {
        puVar1 = PTR_DAT_04bb2010 + 0x10;
        puVar2 = PTR_DAT_04bbfe68 + 0x10;
        iVar13 = iVar4;
        do {
          lVar14 = *(long *)puVar3;
          local_80 = 0;
          local_88 = puVar2;
          local_70 = puVar1;
          local_68 = iVar13;
          iStack_64 = iVar15;
          if ((lVar14 == 0) || (*(long *)(lVar14 + 0x330) == 0)) {
            puVar10 = &DAT_055c04a0;
          }
          else {
            puVar10 = (undefined8 *)
                      (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar14 + 0x338));
            iVar8 = FUN_006bd550(*puVar10,0);
            puVar10 = (undefined8 *)PTR_DAT_04bc3a80;
            if (iVar8 != 0x758f7eaf) {
              puVar10 = &DAT_055c04a0;
            }
          }
          local_7c = *(int *)(puVar10 + 7);
          local_78 = FUN_017baf44();
          local_78 = local_78 & 1;
          psVar11 = (short *)FUN_01a5190c(&local_88,0,&local_70,0);
          if (*psVar11 != -2) goto LAB_018ce1f4;
          if (iVar13 < iVar6) {
            iVar13 = iVar13 + 1;
          }
          else {
            iVar15 = iVar15 + 1;
            iVar13 = iVar4;
          }
        } while ((iVar4 != iVar13) || (iVar7 + 1 != iVar15));
        local_80 = *(int *)(param_1 + 8);
        iVar13 = *(int *)(param_1 + 0xc);
      }
      local_7c = iVar13 + 1;
      puVar3 = PTR_DAT_04bb2018 + 0x10;
      local_88 = puVar3;
      uVar12 = FUN_018ce4b0(&local_88);
      if ((uVar12 & 1) == 0) {
        local_68 = *(int *)(param_1 + 8);
        iStack_9c = *(int *)(param_1 + 0xc);
        iStack_64 = iStack_9c + -1;
        local_90 = local_68 + 1;
        local_a0 = local_68 + -1;
        local_a8 = puVar3;
        local_98 = puVar3;
        iStack_8c = iStack_9c;
        local_70 = puVar3;
        uVar12 = FUN_018ce4b0(&local_70);
        if (((uVar12 & 1) == 0) && (uVar12 = FUN_018ce4b0(&local_98), (uVar12 & 1) == 0)) {
          uVar9 = FUN_018ce4b0(&local_a8);
        }
        else {
          uVar9 = 1;
        }
        goto LAB_018ce1f8;
      }
    }
  }
LAB_018ce1f4:
  uVar9 = 0;
LAB_018ce1f8:
  return uVar9 & 1;
}


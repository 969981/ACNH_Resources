
undefined4 FUN_00989664(long param_1,float *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  ulong uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 local_48 [8];
  undefined8 *local_40;
  int local_38;
  int iStack_34;
  undefined8 local_28;
  
  iVar5 = *(int *)(param_1 + 0xd0);
  iVar6 = *(int *)(param_1 + 0xe0);
  fVar16 = (float)iVar6 * 5.0 + 5.0;
  fVar15 = *param_2;
  bVar13 = false;
  if (((float)iVar5 * 5.0 <= fVar15) && (bVar13 = false, !NAN(fVar15) && !NAN(fVar16))) {
    bVar13 = fVar15 < fVar16;
  }
  if (bVar13) {
    iVar7 = *(int *)(param_1 + 0xe4);
    iVar8 = *(int *)(param_1 + 0xd4);
    fVar17 = (float)iVar7 * 5.0 + 5.0;
    fVar16 = param_2[2];
    bVar13 = false;
    if (((float)iVar8 * 5.0 <= fVar16) && (bVar13 = false, !NAN(fVar16) && !NAN(fVar17))) {
      bVar13 = fVar16 < fVar17;
    }
    if (bVar13) {
      iVar9 = (int)((float)(int)fVar15 / 5.0) - (uint)(fVar15 < 0.0);
      iVar10 = (int)((float)(int)fVar16 / 5.0) - (uint)(fVar16 < 0.0);
      local_40 = &DAT_048f9750;
      if ((((iVar9 < iVar5 || iVar6 < iVar9) || iVar10 < iVar8) || iVar7 - iVar10 < 0) ==
          (((iVar5 <= iVar9 && iVar6 >= iVar9) && iVar8 <= iVar10) && SBORROW4(iVar7,iVar10))) {
        iVar8 = *(int *)(param_1 + 0xa0);
        local_28 = 0;
        local_48 = (undefined1  [8])0x0;
        iVar5 = iVar10;
        iVar11 = iVar9;
        if (iVar8 == 0x40000000) {
          iVar5 = iVar9;
          iVar11 = iVar7 - iVar10;
        }
        iVar1 = iVar6 - iVar9;
        iVar12 = iVar10;
        if (iVar8 != -0x40000000) {
          iVar1 = iVar5;
          iVar12 = iVar11;
        }
        iStack_34 = iVar7 - iVar10;
        local_38 = iVar6 - iVar9;
        if (iVar8 != -0x80000000) {
          iStack_34 = iVar1;
          local_38 = iVar12;
        }
        if (*(char *)(param_1 + 0xe8) == '\0') {
          uVar14 = FUN_00979eb0(param_1 + 8,&local_40,(long)&local_28 + 4,&local_28,local_48 + 4,
                                local_48);
        }
        else {
          uVar14 = FUN_0097a150(param_1 + 8,&local_40,(long)&local_28 + 4,&local_28,local_48 + 4,
                                local_48,*(undefined4 *)(param_1 + 0xec));
        }
        if ((uVar14 & 1) != 0) {
          fVar15 = *param_2;
          if (fVar15 < (float)*(int *)(param_1 + 0xd0) * 5.0) {
            return 7;
          }
          if ((float)*(int *)(param_1 + 0xe0) * 5.0 + 5.0 <= fVar15) {
            return 7;
          }
          fVar16 = param_2[2];
          if (fVar16 < (float)*(int *)(param_1 + 0xd4) * 5.0) {
            return 7;
          }
          if ((float)*(int *)(param_1 + 0xe4) * 5.0 + 5.0 <= fVar16) {
            return 7;
          }
          uVar4 = (*(uint *)(param_1 + 0xa0) >> 0x1e | *(uint *)(param_1 + 0xa0) << 2) ^ 2;
          if (uVar4 < 4) {
            fVar17 = (float)((*(int *)(param_1 + 0xe0) - *(int *)(param_1 + 0xd0)) + 1) * 5.0;
            fVar18 = (float)((*(int *)(param_1 + 0xe4) - *(int *)(param_1 + 0xd4)) + 1) * 5.0;
            switch(uVar4) {
            case 0:
              fVar17 = fVar17 - fVar15;
              fVar15 = fVar18 - fVar16;
              break;
            case 1:
              fVar15 = fVar17 - fVar15;
              fVar17 = fVar16;
              break;
            case 2:
              fVar17 = fVar15;
              fVar15 = fVar16;
              break;
            case 3:
              fVar17 = fVar18 - fVar16;
            }
          }
          else {
            fVar17 = 0.0;
            fVar15 = 0.0;
          }
          fVar17 = fVar17 + (float)local_38 * -5.0;
          fVar15 = fVar15 + (float)iStack_34 * -5.0;
          puVar2 = &local_28;
          puVar3 = (undefined8 *)((long)&local_28 + 4);
          if (0.0 <= fVar17 + fVar15 + -5.0) {
            puVar2 = (undefined8 *)(local_48 + 4);
            puVar3 = (undefined8 *)local_48;
          }
          if (0.0 <= fVar15 - fVar17) {
            puVar3 = puVar2;
          }
          return *(undefined4 *)puVar3;
        }
      }
    }
  }
  return 7;
}


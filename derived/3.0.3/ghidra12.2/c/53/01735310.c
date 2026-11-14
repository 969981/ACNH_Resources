
undefined8 FUN_01735310(float *param_1,undefined4 param_2,int param_3,ulong param_4)

{
  undefined *puVar1;
  int *piVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  int iVar6;
  float *pfVar7;
  long *plVar8;
  ulong uVar9;
  float *pfVar10;
  undefined8 *puVar11;
  long lVar12;
  int *piVar13;
  ulong uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  int local_e4;
  undefined **local_e0;
  undefined8 local_d8;
  uint *local_d0;
  undefined4 *puStack_c8;
  int local_c0 [20];
  uint local_68;
  undefined4 local_64;
  
  local_c0[0x10] = 0;
  local_c0[0x11] = 0;
  local_c0[0x12] = 0;
  local_c0[0x13] = 0;
  local_d8 = local_c0;
  local_c0[0xc] = 0;
  local_c0[0xd] = 0;
  local_c0[0xe] = 0;
  local_c0[0xf] = 0;
  local_c0[8] = 0;
  local_c0[9] = 0;
  local_c0[10] = 0;
  local_c0[0xb] = 0;
  local_c0[4] = 0;
  local_c0[5] = 0;
  local_c0[6] = 0;
  local_c0[7] = 0;
  local_c0[0] = 0;
  local_c0[1] = 0;
  local_c0[2] = 0;
  local_c0[3] = 0;
  local_68 = 0;
  local_e0 = &PTR_FUN_049bfd48;
  local_d0 = &local_68;
  puStack_c8 = &local_64;
  iVar6 = *(int *)(*(long *)PTR_DAT_04bb3968 + 0xb88);
  local_64 = param_2;
  if (iVar6 != 0) {
    lVar12 = (long)iVar6 << 3;
    puVar11 = *(undefined8 **)(*(long *)PTR_DAT_04bb3968 + 0xb90);
    do {
      (*(code *)*local_e0)(&local_e0,*puVar11);
      lVar12 = lVar12 + -8;
      puVar11 = puVar11 + 1;
    } while (lVar12 != 0);
  }
  lVar12 = FUN_0251e98c(1);
  pfVar7 = (float *)(**(code **)(*(long *)(lVar12 + 0x2a0) + 0xf0))(lVar12 + 0x2a0);
  puVar4 = PTR_DAT_04bb37d8;
  puVar3 = PTR_DAT_04bb37d0;
  uVar9 = (ulong)local_68;
  if (local_68 != 0) {
    fVar15 = *pfVar7;
    uVar14 = 0;
    piVar13 = local_c0;
    puVar1 = PTR_DAT_04bb3750 + 0x10;
    do {
      piVar2 = piVar13;
      if (0x13 < uVar14) {
        piVar2 = local_c0;
      }
      local_e4 = *piVar2;
      if (local_e4 != 0 && local_e4 != param_3) {
        FUN_0071cb58(&local_e0,&local_e4,&local_64,0);
        ppuVar5 = local_e0;
        if (local_e0 != (undefined **)0x0) {
          if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar4), iVar6 != 0)) {
            *(undefined **)puVar3 = puVar1;
            __cxa_guard_release(puVar4);
          }
          uVar9 = (**(code **)(*ppuVar5 + 0x20))(ppuVar5,puVar3);
          if ((uVar9 & 1) == 0) {
            local_d8._0_3_ = (uint3)(ushort)local_d8;
          }
        }
        ppuVar5 = local_e0;
        if ((((local_e0 != (undefined **)0x0) && ((char)local_d8 != '\0')) &&
            (local_d8._2_1_ != '\0')) &&
           (((param_4 & 1) == 0 ||
            (uVar9 = (**(code **)(*local_e0 + 400))(local_e0), (uVar9 & 1) == 0)))) {
          plVar8 = (long *)ppuVar5[0xc];
          if ((plVar8 == (long *)0x0) && (plVar8 = &DAT_05240280, (DAT_052461c0 & 1) == 0)) {
            iVar6 = __cxa_guard_acquire(&DAT_052461c0);
            if (iVar6 == 0) {
              plVar8 = &DAT_05240280;
            }
            else {
              FUN_016fcf10(&DAT_05240280);
              FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
              __cxa_guard_release(&DAT_052461c0);
              plVar8 = &DAT_05240280;
            }
          }
          uVar9 = (**(code **)(*plVar8 + 0x100))();
          ppuVar5 = local_e0;
          if ((uVar9 & 1) != 0) {
            lVar12 = *(long *)PTR_DAT_04bb4e28;
            iVar6 = FUN_03722560(lVar12,local_e0 + 0x7c);
            if ((iVar6 == -1) ||
               (lVar12 = *(long *)(*(long *)(lVar12 + 0xe8) + (long)iVar6 * 8),
               (*(ushort *)(lVar12 + 0x114) >> 9 & 1) == 0)) {
              pfVar7 = (float *)(ppuVar5[0xd] + 0x278);
              pfVar10 = (float *)(ppuVar5[0xd] + 0x280);
            }
            else {
              pfVar7 = (float *)(lVar12 + 0x104);
              pfVar10 = (float *)(lVar12 + 0x10c);
            }
            fVar16 = *param_1;
            fVar18 = param_1[2];
            if (fVar16 <= fVar18) {
              fVar17 = param_1[1];
              fVar19 = param_1[3];
              if (fVar17 <= fVar19) {
                fVar20 = *pfVar7;
                fVar21 = *pfVar10;
                if ((((fVar16 <= fVar20) && (fVar20 <= fVar18)) && (fVar17 <= fVar21)) &&
                   (fVar21 <= fVar19)) {
                  return 1;
                }
                if (fVar20 <= fVar18) {
                  fVar18 = fVar20;
                }
                if (fVar16 <= fVar20) {
                  fVar16 = fVar18;
                }
                if (fVar21 <= fVar19) {
                  fVar19 = fVar21;
                }
                if (fVar17 <= fVar21) {
                  fVar17 = fVar19;
                }
                if ((fVar21 - fVar17) * (fVar21 - fVar17) + (fVar20 - fVar16) * (fVar20 - fVar16) <=
                    fVar15 * 0.98 * fVar15 * 0.98) {
                  return 1;
                }
              }
            }
          }
        }
        uVar9 = (ulong)local_68;
      }
      uVar14 = uVar14 + 1;
      piVar13 = piVar13 + 1;
    } while (uVar14 < uVar9);
  }
  return 0;
}


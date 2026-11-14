
undefined8
FUN_01735670(float param_1,float param_2,float *param_3,undefined4 param_4,int param_5,uint param_6,
            uint param_7,int *param_8,undefined1 param_9,uint param_10,byte param_11,
            undefined1 param_12)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  int iVar6;
  float *pfVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  undefined *puVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  short local_120 [2];
  undefined1 local_11c;
  undefined **local_118;
  undefined8 local_110;
  int local_f8 [22];
  undefined1 local_a0;
  undefined1 local_9f;
  int local_88;
  undefined4 local_84;
  
  local_f8[0x10] = 0;
  local_f8[0x11] = 0;
  local_f8[0x12] = 0;
  local_f8[0x13] = 0;
  local_f8[0xc] = 0;
  local_f8[0xd] = 0;
  local_f8[0xe] = 0;
  local_f8[0xf] = 0;
  local_110 = local_f8;
  local_f8[0x14] = 0;
  local_9f = param_12;
  local_f8[8] = 0;
  local_f8[9] = 0;
  local_f8[10] = 0;
  local_f8[0xb] = 0;
  local_f8[4] = 0;
  local_f8[5] = 0;
  local_f8[6] = 0;
  local_f8[7] = 0;
  local_f8[0] = 0;
  local_f8[1] = 0;
  local_f8[2] = 0;
  local_f8[3] = 0;
  iVar6 = *(int *)(*(long *)PTR_DAT_04bb3968 + 0xb88);
  local_118 = &PTR_FUN_049bfd70;
  local_f8[0x15] = param_4;
  local_a0 = param_9;
  local_84 = param_4;
  if (iVar6 != 0) {
    lVar12 = (long)iVar6 << 3;
    puVar9 = *(undefined8 **)(*(long *)PTR_DAT_04bb3968 + 0xb90);
    do {
      (*(code *)*local_118)(&local_118,*puVar9);
      lVar12 = lVar12 + -8;
      puVar9 = puVar9 + 1;
    } while (lVar12 != 0);
  }
  lVar12 = FUN_0251e98c(1);
  pfVar7 = (float *)(**(code **)(*(long *)(lVar12 + 0x2a0) + 0xf0))(lVar12 + 0x2a0);
  puVar4 = PTR_DAT_04bb37d0;
  if (local_f8[0x14] != 0) {
    fVar16 = *pfVar7;
    uVar13 = 0;
    puVar1 = PTR_DAT_04bb5b60 + 0x10;
    puVar2 = PTR_DAT_04bb3750 + 0x10;
    do {
      uVar8 = uVar13;
      if (0x13 < uVar13) {
        uVar8 = 0;
      }
      local_88 = local_f8[uVar8];
      if (local_88 != 0 && local_88 != param_5) {
        FUN_0071cb58(&local_118,&local_88,&local_84,0);
        ppuVar5 = local_118;
        if (local_118 != (undefined **)0x0) {
          if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar6 != 0)) {
            *(undefined **)puVar4 = puVar2;
            __cxa_guard_release(PTR_DAT_04bb37d8);
          }
          uVar8 = (**(code **)(*ppuVar5 + 0x20))(ppuVar5,puVar4);
          if ((uVar8 & 1) == 0) {
            local_110._0_3_ = (uint3)(ushort)local_110;
          }
        }
        if (((local_118 != (undefined **)0x0) && ((char)local_110 != '\0')) &&
           (local_110._2_1_ != '\0')) {
          plVar11 = (long *)local_118[0x12];
          if (plVar11 != (long *)0x0) {
            if (((*PTR_DAT_04bb5b58 & 1) == 0) &&
               (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb5b58), iVar6 != 0)) {
              *(undefined **)PTR_DAT_04bb5b50 = PTR_DAT_04bb5b60 + 0x10;
              __cxa_guard_release(PTR_DAT_04bb5b58);
            }
            uVar8 = (**(code **)(*plVar11 + 0x10))(plVar11,PTR_DAT_04bb5b50);
            if ((uVar8 & 1) != 0) {
              uVar3 = param_6;
              if (*(int *)(plVar11[0x4f] + 0x40) == 0x201) {
                uVar3 = param_7;
              }
              if ((uVar3 & 1) == 0) goto LAB_017357a0;
            }
          }
          ppuVar5 = local_118;
          if (((param_10 & 1) == 0) ||
             (uVar8 = (**(code **)(*local_118 + 400))(local_118), (uVar8 & 1) == 0)) {
            if ((param_11 & 1) != 0) {
              puVar14 = ppuVar5[0xd];
              fVar17 = *(float *)(puVar14 + 0x27c);
              lVar12 = *(long *)PTR_DAT_04bb2720;
              if ((lVar12 == 0) || (*(long *)(lVar12 + 0x330) == 0)) {
                puVar9 = &DAT_055c04a0;
              }
              else {
                puVar9 = (undefined8 *)
                         (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                   (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar12 + 0x338));
                iVar6 = FUN_006bd550(*puVar9,0);
                puVar9 = (undefined8 *)PTR_DAT_04bc3a80;
                if (iVar6 != 0x758f7eaf) {
                  puVar9 = &DAT_055c04a0;
                }
              }
              if (DAT_055c1b60 != &DAT_055c1b58) {
                local_120[0] = 0;
                puVar10 = DAT_055c1b60;
                do {
                  if (*(int *)(puVar10 + -1) == *(int *)(puVar9 + 7)) {
                    if (local_120[0] != -1) goto LAB_01735964;
                    break;
                  }
                  puVar10 = (undefined8 *)puVar10[1];
                  local_120[0] = local_120[0] + 1;
                } while (puVar10 != &DAT_055c1b58);
              }
              local_120[0] = 0;
LAB_01735964:
              local_120[1] = 0;
              local_11c = 1;
              fVar15 = (float)FUN_016e80f0(puVar14 + 0x278,0,local_120);
              fVar17 = fVar17 - fVar15;
              fVar15 = -fVar17;
              if (0.0 <= fVar17) {
                fVar15 = fVar17;
              }
              if (fVar15 < 0.1) goto LAB_017357a0;
            }
            puVar14 = ppuVar5[0xd];
            plVar11 = (long *)ppuVar5[0x12];
            if (((*PTR_DAT_04bb5b58 & 1) == 0) &&
               (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb5b58), iVar6 != 0)) {
              *(undefined **)PTR_DAT_04bb5b50 = puVar1;
              __cxa_guard_release(PTR_DAT_04bb5b58);
            }
            fVar17 = 5.0;
            if (plVar11 != (long *)0x0) {
              uVar8 = (**(code **)(*plVar11 + 0x10))(plVar11,PTR_DAT_04bb5b50);
              fVar17 = 5.0;
              if ((uVar8 & 1) != 0) {
                fVar17 = *(float *)((long)plVar11 + 0x39c);
              }
            }
            if (fVar17 <= fVar16) {
              fVar17 = fVar16;
            }
            if (SQRT((param_3[2] - *(float *)(puVar14 + 0x280)) *
                     (param_3[2] - *(float *)(puVar14 + 0x280)) +
                     (*param_3 - *(float *)(puVar14 + 0x278)) *
                     (*param_3 - *(float *)(puVar14 + 0x278))) < fVar17 * 0.98 + param_1) {
              if (param_2 <= 0.0) {
LAB_01735b20:
                if (param_8 != (int *)0x0) {
                  *param_8 = local_88;
                }
                return 1;
              }
              fVar15 = param_3[1] - *(float *)(puVar14 + 0x27c);
              fVar17 = -fVar15;
              if (0.0 <= fVar15) {
                fVar17 = fVar15;
              }
              if (fVar17 < param_2) goto LAB_01735b20;
            }
          }
        }
      }
LAB_017357a0:
      uVar13 = uVar13 + 1;
    } while (uVar13 < (uint)local_f8[0x14]);
  }
  return 0;
}


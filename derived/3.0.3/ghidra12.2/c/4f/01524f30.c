
void FUN_01524f30(undefined8 param_1,float *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  ushort uVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  ulong uVar12;
  uint *puVar13;
  long *plVar14;
  long lVar15;
  uint *puVar16;
  uint *puVar17;
  undefined8 *puVar18;
  long *plVar19;
  undefined4 local_e0;
  undefined4 uStack_dc;
  uint *local_d8;
  undefined **local_d0;
  undefined **local_c8;
  undefined *local_c0;
  int local_b8;
  int local_b4;
  undefined8 local_b0;
  undefined *local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  byte local_98;
  undefined *local_90;
  undefined *puStack_88;
  int local_80;
  int iStack_7c;
  undefined *local_78;
  int local_70;
  int local_6c;
  uint local_68;
  undefined4 local_64;
  
  local_a0 = 0;
  local_90 = PTR_DAT_04bbc1a0 + 0x10;
  puVar1 = PTR_DAT_04bb2010 + 0x10;
  local_80 = (int)((float)(int)(*param_2 + -2.5) / 5.0) - (uint)(*param_2 + -2.5 < 0.0);
  iStack_7c = (int)((float)(int)(param_2[2] + -2.5) / 5.0) - (uint)(param_2[2] + -2.5 < 0.0);
  local_70 = local_80 + 1;
  local_6c = iStack_7c + 1;
  lVar15 = *(long *)PTR_DAT_04bb2720;
  puStack_88 = puVar1;
  local_78 = puVar1;
  if (lVar15 == 0) {
    puVar18 = &DAT_055c04a0;
  }
  else {
    puVar18 = &DAT_055c04a0;
    if (*(long *)(lVar15 + 0x330) != 0) {
      puVar18 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar15 + 0x338));
      iVar8 = FUN_006bd550(*puVar18,0);
      puVar18 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar8 != 0x758f7eaf) {
        puVar18 = &DAT_055c04a0;
      }
    }
  }
  local_9c = *(undefined4 *)(puVar18 + 7);
  local_98 = FUN_017baf44();
  local_98 = local_98 & 1;
  local_a8 = PTR_DAT_04bb3140 + 0x10;
  local_b0 = 0xfffe;
  FUN_0277d4ac(&local_b0);
  iVar7 = local_80;
  puVar6 = PTR_DAT_04bb43c0;
  puVar5 = PTR_DAT_04bb27c0;
  iVar8 = local_6c + 1;
  local_b8 = local_80;
  local_b4 = iStack_7c;
  if (iVar8 != iStack_7c) {
    puVar2 = PTR_DAT_04bb3290 + 0x10;
    puVar13 = (uint *)PTR_DAT_04bc0048;
    local_d0 = &puStack_88;
    local_c8 = &local_78;
    local_c0 = puVar1;
    do {
      puVar18 = (undefined8 *)FUN_01a5190c(&local_a8,0,&local_c0,0);
      local_b0 = *puVar18;
      uVar12 = FUN_0277e294(&local_b0);
      if ((uVar12 & 1) != 0) {
        local_d8 = (uint *)0x0;
        lVar15 = *(long *)puVar6;
        local_e0 = (undefined4)local_b0;
        uStack_dc = local_b0._4_4_;
        uVar9 = FUN_0277d6c4(&local_e0);
        if (*(long *)puVar6 == 0) {
LAB_01525274:
          local_68 = 0;
        }
        else {
          lVar15 = *(long *)(lVar15 + 0x57e58);
          uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
          if ((*(uint *)(lVar15 + 0x1d8) <= uVar9) ||
             (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar9 * 8) == 0)) goto LAB_01525274;
          lVar15 = *(long *)PTR_DAT_04bc0428;
          uVar9 = FUN_0277d6c4(&local_b0);
          uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
          if ((*(uint *)(lVar15 + 0x1d8) <= uVar9) ||
             (puVar16 = *(uint **)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar9 * 8),
             puVar16 == (uint *)0x0)) goto LAB_01525274;
          local_68 = 0;
          uVar9 = *puVar16;
          local_d8 = puVar16;
          if ((uVar9 != 0) && (puVar16 != (uint *)(ulong)uVar9)) {
            puVar17 = (uint *)((long)puVar16 - (long)(ulong)uVar9);
            local_68 = 0;
            if (*puVar17 != 0) {
              uVar9 = puVar17[1];
              if ((uVar9 != 0) && ((ulong)(ushort)puVar17[2] != 0)) {
                lVar15 = 0xc;
                if (*(char *)((long)puVar17 + 10) != '\0') {
                  lVar15 = 0x1c;
                }
                lVar15 = (long)puVar17 + lVar15 + (ulong)(ushort)puVar17[2] * 8;
                if (lVar15 != 0) {
                  uVar3 = 0;
                  if ((ulong)uVar9 != 0) {
                    uVar3 = (uint)((ulong)((long)puVar16 - lVar15) / (ulong)uVar9);
                  }
                  if (*puVar17 <= uVar3) {
                    uVar3 = 0xffffffff;
                  }
                  if ((uVar3 < *puVar13) &&
                     (uVar4 = *(ushort *)(*(long *)(puVar13 + 2) + (long)(int)uVar3 * 2),
                     local_68 = (uint)uVar4, uVar4 < 0x52)) goto LAB_01525278;
                }
              }
              local_68 = 0;
            }
          }
        }
LAB_01525278:
        local_64 = 9;
        if (local_68 == 9) {
          puVar13 = (uint *)FUN_014fbd50(&local_a8,0,&local_c0);
          uVar9 = *puVar13;
          if ((uVar9 != 0) && (lVar15 = *(long *)puVar5, lVar15 != 0)) {
            plVar19 = *(long **)(*(long *)(*(long *)(lVar15 + 0x1c0) + 8) +
                                ((ulong)(uVar9 >> 0x11) & 0x7ff8));
            if ((plVar19 == (long *)0x0) ||
               (((*(uint *)(plVar19 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar19 + 0x46) != uVar9)))
               ) {
              plVar19 = (long *)0x0;
            }
            if ((*(int *)(lVar15 + 0x288) == 1) || (*(int *)(lVar15 + 0x288) == -1)) {
              plVar14 = (long *)nn::os::GetTlsValue(*(undefined4 *)
                                                     (*(long *)PTR_DAT_04bb3350 + 0x68));
              lVar15 = *(long *)puVar5;
              iVar10 = (**(code **)(*plVar14 + 0x60))();
              if (iVar10 < 0x11) {
                uVar9 = 1;
              }
              else {
                uVar9 = *(uint *)(lVar15 + 0x5e8);
                if (4 < uVar9) goto LAB_0152533c;
                uVar9 = 0x1aU >> (ulong)(uVar9 & 0x1f) & 1;
              }
            }
            else {
LAB_0152533c:
              uVar9 = 0;
            }
            if (plVar19 != (long *)0x0) {
              lVar15 = plVar19[0x2a];
              uVar3 = *(uint *)(plVar19 + 0x49);
              if (((*PTR_DAT_04bb5928 & 1) == 0) &&
                 (iVar10 = __cxa_guard_acquire(PTR_DAT_04bb5928), iVar10 != 0)) {
                *(undefined **)PTR_DAT_04bb5920 = puVar2;
                __cxa_guard_release(PTR_DAT_04bb5928);
              }
              uVar11 = (**(code **)(*plVar19 + 0x20))(plVar19,PTR_DAT_04bb5920);
              if ((((((int)lVar15 == 1) && ((uVar11 & uVar9) != 0)) && ((uVar3 >> 4 & 1) != 0)) &&
                  ((plVar19 = (long *)plVar19[0x151], plVar19 != (long *)0x0 &&
                   (uVar9 = (**(code **)(*plVar19 + 0x198))(plVar19), 2 < uVar9)))) &&
                 ((uVar12 = (**(code **)(*plVar19 + 0x1b0))(plVar19), (uVar12 & 1) == 0 ||
                  ((int)plVar19[0x50] != 2)))) {
                FUN_03ebb160(plVar19 + 0x4f,2);
                (**(code **)(*plVar19 + 0x218))(plVar19,2,0);
              }
            }
          }
        }
        puVar13 = (uint *)PTR_DAT_04bc0048;
      }
      if (local_b8 < *(int *)(local_c8 + 1)) {
        local_b8 = local_b8 + 1;
      }
      else {
        local_b4 = local_b4 + 1;
        local_b8 = *(int *)(local_d0 + 1);
      }
    } while ((iVar7 != local_b8) || (iVar8 != local_b4));
  }
  return;
}


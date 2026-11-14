
undefined8 FUN_0150657c(undefined4 *param_1,float *param_2)

{
  float *pfVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined *puVar6;
  byte bVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  ulong uVar13;
  long *plVar14;
  undefined8 uVar15;
  long lVar16;
  uint *puVar17;
  undefined8 *puVar18;
  long *plVar19;
  long lVar20;
  long lVar21;
  float fVar22;
  float fVar23;
  uint local_cc;
  undefined4 local_c8;
  uint local_c4;
  undefined *local_c0;
  int local_b8;
  int iStack_b4;
  undefined8 local_b0;
  undefined2 local_a8;
  undefined1 local_a6;
  undefined1 local_a5;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined *local_98;
  int local_90;
  int iStack_8c;
  undefined *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  byte local_78;
  uint local_68;
  uint local_64;
  
  local_80 = 0;
  local_88 = PTR_DAT_04bbfe68 + 0x10;
  lVar16 = *(long *)PTR_DAT_04bb2720;
  if (lVar16 == 0) {
    puVar18 = &DAT_055c04a0;
  }
  else {
    puVar18 = &DAT_055c04a0;
    if (*(long *)(lVar16 + 0x330) != 0) {
      puVar18 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar16 + 0x338));
      iVar8 = FUN_006bd550(*puVar18,0);
      puVar18 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar8 != 0x758f7eaf) {
        puVar18 = &DAT_055c04a0;
      }
    }
  }
  local_7c = *(undefined4 *)(puVar18 + 7);
  local_78 = FUN_017baf44();
  local_78 = local_78 & 1;
  local_88 = PTR_DAT_04bb3140 + 0x10;
  puVar2 = PTR_DAT_04bb2010 + 0x10;
  local_90 = (int)((float)(int)*param_2 / 5.0) - (uint)(*param_2 < 0.0);
  iStack_8c = (int)((float)(int)param_2[2] / 5.0) - (uint)(param_2[2] < 0.0);
  local_98 = puVar2;
  puVar12 = (uint *)FUN_014fbd50(&local_88,7,&local_98);
  uVar11 = *puVar12;
  local_68 = uVar11;
  uVar13 = FUN_015039ac(&local_68);
  puVar6 = PTR_DAT_04bb27c0;
  if (((uVar13 & 1) == 0) || (lVar16 = *(long *)PTR_DAT_04bb27c0, lVar16 == 0)) {
LAB_015069a4:
    uVar13 = (ulong)((float)((int)param_2[3] + 0x20000000U >> 0x1e) * 90.0 * 11930465.0);
    pfVar1 = (float *)(PTR_DAT_04bb2d00 + (uVar13 >> 0x18 & 0xff) * 0x10);
    fVar22 = (float)((uint)uVar13 & 0xffffff) * 5.9604645e-08;
    fVar23 = *param_2 + (*pfVar1 + fVar22 * pfVar1[1]) * 5.0;
    fVar22 = param_2[2] + (pfVar1[2] + fVar22 * pfVar1[3]) * 5.0;
    local_b8 = (int)((float)(int)fVar23 / 5.0) - (uint)(fVar23 < 0.0);
    iStack_b4 = (int)((float)(int)fVar22 / 5.0) - (uint)(fVar22 < 0.0);
    local_c0 = puVar2;
    puVar12 = (uint *)FUN_014fbd50(&local_88,7,&local_c0);
    uVar11 = *puVar12;
    local_c4 = uVar11;
    uVar13 = FUN_015039ac(&local_c4);
    puVar2 = PTR_DAT_04bb27c0;
    if (((uVar13 & 1) != 0) && (lVar16 = *(long *)PTR_DAT_04bb27c0, lVar16 != 0)) {
      if ((((uVar11 == 0) ||
           (plVar19 = *(long **)(*(long *)(*(long *)(lVar16 + 0x1c0) + 8) +
                                ((ulong)(uVar11 >> 0x11) & 0x7ff8)), plVar19 == (long *)0x0)) ||
          ((*(uint *)(plVar19 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar19 + 0x46) != uVar11)) {
        plVar19 = (long *)0x0;
      }
      if ((*(int *)(lVar16 + 0x288) == 1) || (*(int *)(lVar16 + 0x288) == -1)) {
        plVar14 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        lVar16 = *(long *)puVar2;
        iVar8 = (**(code **)(*plVar14 + 0x60))();
        if (iVar8 < 0x11) {
          uVar11 = 1;
        }
        else {
          if (4 < *(uint *)(lVar16 + 0x5e8)) goto LAB_01506b2c;
          uVar11 = 0x1aU >> (ulong)(*(uint *)(lVar16 + 0x5e8) & 0x1f) & 1;
        }
      }
      else {
LAB_01506b2c:
        uVar11 = 0;
      }
      if (plVar19 != (long *)0x0) {
        lVar16 = plVar19[0x2a];
        uVar10 = *(uint *)(plVar19 + 0x49);
        if (((*PTR_DAT_04bb5928 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_04bb5928), iVar8 != 0)) {
          *(undefined **)PTR_DAT_04bb5920 = PTR_DAT_04bb3290 + 0x10;
          __cxa_guard_release(PTR_DAT_04bb5928);
        }
        uVar9 = (**(code **)(*plVar19 + 0x20))(plVar19,PTR_DAT_04bb5920);
        puVar2 = PTR_DAT_04bb43c0;
        if ((int)lVar16 != 1) {
          return 0;
        }
        if ((uVar9 & uVar11) == 0) {
          return 0;
        }
        if ((uVar10 >> 4 & 1) == 0) {
          return 0;
        }
        if (plVar19[0xe] == 0) {
          iVar8 = -1;
        }
        else {
          iVar8 = *(int *)(plVar19[0xe] + 0x280);
        }
        local_b0 = (undefined *)CONCAT44(local_b0._4_4_,iVar8);
        if (iVar8 == 0) {
          uVar11 = *(uint *)(plVar19 + 0x51);
          uVar4 = *(undefined1 *)((long)plVar19 + 0x28a);
          uVar5 = *(undefined1 *)((long)plVar19 + 0x28b);
          local_cc = *(uint *)(plVar19 + 0x51);
          uVar3 = *(undefined4 *)((long)plVar19 + 0x28c);
          lVar16 = *(long *)PTR_DAT_04bb43c0;
          local_c8 = uVar3;
          uVar10 = FUN_0277d6c4(&local_cc);
          lVar20 = *(long *)puVar2;
          if (lVar20 != 0) {
            lVar16 = *(long *)(lVar16 + 0x57e58);
            uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
            if ((uVar10 < *(uint *)(lVar16 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
              local_b0 = PTR_DAT_04bc0510 + 0x10;
              local_a0 = 0;
              local_a8 = (short)uVar11;
              local_a6 = uVar4;
              local_a5 = uVar5;
              local_a4 = uVar3;
              uVar11 = FUN_0277d6c4(&local_a8);
              if (*(long *)puVar2 == 0) {
LAB_01506d4c:
                local_64 = 0;
              }
              else {
                lVar16 = *(long *)(lVar20 + 0x57e58);
                uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
                if ((*(uint *)(lVar16 + 0x1d8) <= uVar11) ||
                   (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar11 * 8) == 0))
                goto LAB_01506d4c;
                lVar16 = *(long *)PTR_DAT_04bc0428;
                uVar11 = FUN_0277d6c4(&local_cc);
                uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
                if ((*(uint *)(lVar16 + 0x1d8) <= uVar11) ||
                   (puVar12 = *(uint **)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar11 * 8),
                   puVar12 == (uint *)0x0)) goto LAB_01506d4c;
                uVar11 = *puVar12;
                local_64 = 0;
                if ((uVar11 != 0) && (puVar12 != (uint *)(ulong)uVar11)) {
                  puVar17 = (uint *)((long)puVar12 - (long)(ulong)uVar11);
                  local_64 = 0;
                  if (*puVar17 != 0) {
                    uVar11 = puVar17[1];
                    if ((uVar11 != 0) && ((ulong)(ushort)puVar17[2] != 0)) {
                      lVar16 = 0xc;
                      if (*(char *)((long)puVar17 + 10) != '\0') {
                        lVar16 = 0x1c;
                      }
                      lVar16 = (long)puVar17 + lVar16 + (ulong)(ushort)puVar17[2] * 8;
                      if (lVar16 != 0) {
                        uVar10 = 0;
                        if ((ulong)uVar11 != 0) {
                          uVar10 = (uint)((ulong)((long)puVar12 - lVar16) / (ulong)uVar11);
                        }
                        if (*puVar17 <= uVar10) {
                          uVar10 = 0xffffffff;
                        }
                        if ((uVar10 < *(uint *)PTR_DAT_04bc0048) &&
                           (local_64 = (uint)*(ushort *)
                                              (*(long *)(PTR_DAT_04bc0048 + 8) +
                                              (long)(int)uVar10 * 2), local_64 < 0x52))
                        goto LAB_01506d50;
                      }
                    }
                    goto LAB_01506d4c;
                  }
                }
              }
LAB_01506d50:
              if ((local_64 != 0) && (local_64 != 0x30)) {
                if ((param_1 != (undefined4 *)0x0) && (lVar16 = plVar19[0x151], lVar16 != 0)) {
                  FUN_01476a50(&local_b0,plVar19);
                  *param_1 = (undefined4)local_b0;
                  param_1[1] = local_b0._4_4_;
                  param_1[4] = (int)plVar19[0x59];
                  param_1[5] = *(undefined4 *)((long)plVar19 + 0x2cc);
                  param_1[6] = (int)plVar19[0x5a];
                  lVar20 = plVar19[0xd];
                  param_1[7] = *(undefined4 *)(lVar20 + 0x278);
                  param_1[8] = *(undefined4 *)(lVar20 + 0x27c);
                  param_1[9] = *(undefined4 *)(lVar20 + 0x280);
                  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(lVar16 + 0x30a);
                  *(undefined1 *)((long)param_1 + 0x29) = *(undefined1 *)(lVar16 + 0x308);
                  bVar7 = (**(code **)(*(long *)plVar19[0x151] + 0x1c0))
                                    ((long *)plVar19[0x151],param_2 + 4);
                  *(byte *)((long)param_1 + 0x2a) = bVar7 & 1;
                  param_1[0xb] = (int)plVar19[0x46];
                }
                goto LAB_01506eac;
              }
            }
          }
        }
      }
    }
    uVar15 = 0;
  }
  else {
    if ((uVar11 == 0) ||
       (((plVar19 = *(long **)(*(long *)(*(long *)(lVar16 + 0x1c0) + 8) +
                              ((ulong)(uVar11 >> 0x11) & 0x7ff8)), plVar19 == (long *)0x0 ||
         ((*(uint *)(plVar19 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar19 + 0x46) != uVar11)))) {
      plVar19 = (long *)0x0;
    }
    if ((*(int *)(lVar16 + 0x288) == 1) || (*(int *)(lVar16 + 0x288) == -1)) {
      plVar14 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar16 = *(long *)puVar6;
      iVar8 = (**(code **)(*plVar14 + 0x60))();
      if (iVar8 < 0x11) {
        uVar11 = 1;
      }
      else {
        if (4 < *(uint *)(lVar16 + 0x5e8)) goto LAB_0150676c;
        uVar11 = 0x1aU >> (ulong)(*(uint *)(lVar16 + 0x5e8) & 0x1f) & 1;
      }
      if (plVar19 != (long *)0x0) goto LAB_01506780;
      goto LAB_015069a4;
    }
LAB_0150676c:
    uVar11 = 0;
    if (plVar19 == (long *)0x0) goto LAB_015069a4;
LAB_01506780:
    lVar16 = plVar19[0x2a];
    uVar10 = *(uint *)(plVar19 + 0x49);
    if (((*PTR_DAT_04bb5928 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_04bb5928), iVar8 != 0)) {
      *(undefined **)PTR_DAT_04bb5920 = PTR_DAT_04bb3290 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb5928);
    }
    uVar9 = (**(code **)(*plVar19 + 0x20))(plVar19,PTR_DAT_04bb5920);
    puVar6 = PTR_DAT_04bb43c0;
    if ((((int)lVar16 != 1) || ((uVar9 & uVar11) == 0)) || ((uVar10 >> 4 & 1) == 0))
    goto LAB_015069a4;
    if (plVar19[0xe] == 0) {
      iVar8 = -1;
    }
    else {
      iVar8 = *(int *)(plVar19[0xe] + 0x280);
    }
    local_b0 = (undefined *)CONCAT44(local_b0._4_4_,iVar8);
    if (iVar8 != 0) goto LAB_015069a4;
    lVar16 = plVar19[0x51];
    uVar4 = *(undefined1 *)((long)plVar19 + 0x28a);
    uVar5 = *(undefined1 *)((long)plVar19 + 0x28b);
    uVar3 = *(undefined4 *)((long)plVar19 + 0x28c);
    local_c0 = (undefined *)plVar19[0x51];
    lVar20 = *(long *)PTR_DAT_04bb43c0;
    uVar11 = FUN_0277d6c4(&local_c0);
    lVar21 = *(long *)puVar6;
    if (lVar21 == 0) goto LAB_015069a4;
    lVar20 = *(long *)(lVar20 + 0x57e58);
    uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar20 + 0x1f8);
    if ((*(uint *)(lVar20 + 0x1d8) <= uVar11) ||
       (*(long *)(*(long *)(lVar20 + 0x1e0) + (long)(int)uVar11 * 8) == 0)) goto LAB_015069a4;
    local_b0 = PTR_DAT_04bc0510 + 0x10;
    local_a0 = 0;
    local_a8 = (short)lVar16;
    local_a6 = uVar4;
    local_a5 = uVar5;
    local_a4 = uVar3;
    uVar11 = FUN_0277d6c4(&local_a8);
    if (*(long *)puVar6 == 0) {
LAB_01506988:
      local_cc = 0;
    }
    else {
      lVar16 = *(long *)(lVar21 + 0x57e58);
      uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
      if ((*(uint *)(lVar16 + 0x1d8) <= uVar11) ||
         (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar11 * 8) == 0)) goto LAB_01506988;
      lVar16 = *(long *)PTR_DAT_04bc0428;
      uVar11 = FUN_0277d6c4(&local_c0);
      uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
      if ((*(uint *)(lVar16 + 0x1d8) <= uVar11) ||
         (puVar12 = *(uint **)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar11 * 8),
         puVar12 == (uint *)0x0)) goto LAB_01506988;
      uVar11 = *puVar12;
      local_cc = 0;
      if ((uVar11 != 0) && (puVar12 != (uint *)(ulong)uVar11)) {
        puVar17 = (uint *)((long)puVar12 - (long)(ulong)uVar11);
        local_cc = 0;
        if (*puVar17 != 0) {
          uVar11 = puVar17[1];
          if ((uVar11 != 0) && ((ulong)(ushort)puVar17[2] != 0)) {
            lVar16 = 0xc;
            if (*(char *)((long)puVar17 + 10) != '\0') {
              lVar16 = 0x1c;
            }
            lVar16 = (long)puVar17 + lVar16 + (ulong)(ushort)puVar17[2] * 8;
            if (lVar16 != 0) {
              uVar10 = 0;
              if ((ulong)uVar11 != 0) {
                uVar10 = (uint)((ulong)((long)puVar12 - lVar16) / (ulong)uVar11);
              }
              if (*puVar17 <= uVar10) {
                uVar10 = 0xffffffff;
              }
              if ((uVar10 < *(uint *)PTR_DAT_04bc0048) &&
                 (local_cc = (uint)*(ushort *)
                                    (*(long *)(PTR_DAT_04bc0048 + 8) + (long)(int)uVar10 * 2),
                 local_cc < 0x52)) goto LAB_0150698c;
            }
          }
          goto LAB_01506988;
        }
      }
    }
LAB_0150698c:
    if ((local_cc == 0) || (local_cc == 0x30)) goto LAB_015069a4;
    if ((param_1 != (undefined4 *)0x0) && (lVar16 = plVar19[0x151], lVar16 != 0)) {
      FUN_01476a50(&local_b0,plVar19);
      *param_1 = (undefined4)local_b0;
      param_1[1] = local_b0._4_4_;
      param_1[4] = (int)plVar19[0x59];
      param_1[5] = *(undefined4 *)((long)plVar19 + 0x2cc);
      param_1[6] = (int)plVar19[0x5a];
      lVar20 = plVar19[0xd];
      param_1[7] = *(undefined4 *)(lVar20 + 0x278);
      param_1[8] = *(undefined4 *)(lVar20 + 0x27c);
      param_1[9] = *(undefined4 *)(lVar20 + 0x280);
      *(undefined1 *)(param_1 + 10) = *(undefined1 *)(lVar16 + 0x30a);
      *(undefined1 *)((long)param_1 + 0x29) = *(undefined1 *)(lVar16 + 0x308);
      bVar7 = (**(code **)(*(long *)plVar19[0x151] + 0x1c0))((long *)plVar19[0x151],param_2 + 4);
      *(byte *)((long)param_1 + 0x2a) = bVar7 & 1;
      param_1[0xb] = (int)plVar19[0x46];
    }
LAB_01506eac:
    uVar15 = 1;
  }
  return uVar15;
}


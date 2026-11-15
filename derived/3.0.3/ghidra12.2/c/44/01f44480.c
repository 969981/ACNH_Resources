
/* WARNING: Removing unreachable block (ram,0x01f44638) */
/* WARNING: Removing unreachable block (ram,0x01f4464c) */

void FUN_01f44480(long *param_1,long param_2)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  ulong uVar11;
  void *__s;
  undefined **ppuVar12;
  undefined1 uVar13;
  undefined4 uVar14;
  uint uVar15;
  long lVar16;
  undefined1 uVar17;
  uint *puVar18;
  uint *puVar19;
  undefined4 *puVar20;
  long *plVar21;
  long lVar22;
  long lVar23;
  undefined4 local_9a8;
  undefined *local_9a0;
  uint local_998;
  undefined4 uStack_994;
  long local_990;
  undefined1 local_938;
  undefined1 local_937;
  undefined4 local_8c4;
  undefined4 uStack_8c0;
  undefined4 local_8b0;
  char *local_888;
  int local_880;
  uint local_244;
  uint local_240;
  uint local_23c;
  int local_238;
  undefined8 local_230;
  float local_208;
  float local_200;
  undefined1 local_1d8;
  undefined4 local_154;
  undefined4 local_150;
  undefined8 local_88;
  undefined8 local_80;
  
  plVar1 = param_1 + 0x15ea;
  lVar16 = param_1[1];
  uVar8 = *(uint *)(lVar16 + 0x288);
  *(undefined4 *)(lVar16 + 0x288) = *(undefined4 *)(lVar16 + 0x28c);
  uVar8 = uVar8 ^ uVar8 << 0xb;
  *(undefined4 *)(lVar16 + 0x28c) = *(undefined4 *)(lVar16 + 0x290);
  uVar7 = *(uint *)(lVar16 + 0x294);
  *(uint *)(lVar16 + 0x290) = uVar7;
  uVar8 = uVar8 >> 8 ^ uVar7 >> 0x13 ^ uVar8 ^ uVar7;
  *(uint *)(lVar16 + 0x294) = uVar8;
  lVar16 = (**(code **)(*param_1 + 0x3a0))();
  puVar5 = PTR_DAT_04bb43c0;
  lVar23 = *(long *)PTR_DAT_04bb43c0;
  uVar7 = FUN_0277d6c4(param_2 + 0x58);
  uVar8 = (uint)((ulong)uVar8 * 100 >> 0x20);
  if (*(long *)puVar5 == 0) {
LAB_01f4456c:
    bVar6 = false;
    if ((*(byte *)((long)param_1 + 0xad54) >> 2 & 1) != 0) goto LAB_01f4474c;
LAB_01f44578:
    if (bVar6) {
      uVar7 = *(uint *)(param_1 + 0x1cf3);
      if (((int)param_1[0x1cf3] == 0) && (uVar11 = FUN_01f466a0(param_1), (uVar11 & 1) != 0)) {
        uVar7 = 1 << (ulong)(uVar7 & 0x1f) & 0xff;
      }
      else {
        uVar7 = 0;
      }
LAB_01f44668:
      lVar23 = param_1[1];
      uVar2 = *(uint *)(lVar23 + 0x288);
      *(undefined4 *)(lVar23 + 0x288) = *(undefined4 *)(lVar23 + 0x28c);
      uVar2 = uVar2 ^ uVar2 << 0xb;
      *(undefined4 *)(lVar23 + 0x28c) = *(undefined4 *)(lVar23 + 0x290);
      uVar3 = *(uint *)(lVar23 + 0x294);
      *(uint *)(lVar23 + 0x290) = uVar3;
      uVar2 = uVar2 >> 8 ^ uVar3 >> 0x13 ^ uVar2 ^ uVar3;
      *(uint *)(lVar23 + 0x294) = uVar2;
      if (uVar7 != 0) {
        uVar3 = uVar7 - (uVar7 >> 1 & 0x55555555);
        uVar3 = (uVar3 >> 2 & 0x33333333) + (uVar3 & 0x33333333);
        uVar3 = uVar3 + (uVar3 >> 4) & 0xf0f0f0f;
        uVar3 = uVar3 + (uVar3 >> 8);
        iVar9 = (int)((ulong)(uVar3 + (uVar3 >> 0x10) & 0x3f) * (ulong)uVar2 >> 0x20) + 2;
LAB_01f446f0:
        iVar9 = iVar9 + -1;
        if (1 < iVar9) goto code_r0x01f446fc;
        uVar7 = uVar7 - 1 & (uVar7 ^ 0xffffffff);
        uVar7 = uVar7 - (uVar7 >> 1 & 0x55555555);
        uVar7 = (uVar7 >> 2 & 0x33333333) + (uVar7 & 0x33333333);
        uVar7 = uVar7 + (uVar7 >> 4) & 0xf0f0f0f;
        uVar7 = uVar7 + (uVar7 >> 8);
        *(undefined4 *)(param_1 + 0x1cf3) = 1;
        if ((uVar7 + (uVar7 >> 0x10) & 0x3f) == 0) {
          *(undefined4 *)(lVar16 + 0x168) = 1;
          lVar16 = param_1[3];
          uVar11 = FUN_02085a50(lVar16,1,0);
          if ((uVar11 & 1) != 0) {
            *(undefined1 *)(lVar16 + 0x801) = 1;
            lVar23 = lVar16 + 0x10 + (ulong)*(uint *)(lVar16 + 0x294) * 0x80;
            if (4 < *(uint *)(lVar16 + 0x294)) {
              lVar23 = lVar16 + 0x10;
            }
            *(undefined8 *)(lVar23 + 0xc) = 0;
            *(undefined4 *)(lVar23 + 0x14) = 0;
          }
          FUN_01e63f1c(&local_230);
          local_230._0_4_ = 0x3e;
          if (bVar6) {
            local_998 = *(uint *)(param_2 + 0x58);
            uStack_994 = *(undefined4 *)(param_2 + 0x5c);
            lVar16 = *(long *)puVar5;
            local_990 = 0;
            local_9a0 = PTR_DAT_04bc0510 + 0x10;
            uVar8 = FUN_0277d6c4(&local_998);
            if (*(long *)puVar5 != 0) {
              lVar16 = *(long *)(lVar16 + 0x57e58);
              uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
              if ((uVar8 < *(uint *)(lVar16 + 0x1d8)) &&
                 (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
                lVar16 = *(long *)PTR_DAT_04bc0428;
                uVar8 = FUN_0277d6c4(param_2 + 0x58);
                uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
                if (uVar8 < *(uint *)(lVar16 + 0x1d8)) {
                  lVar16 = *(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar8 * 8);
                  if (lVar16 != 0) {
                    local_990 = lVar16;
                  }
                }
              }
            }
            uVar11 = FUN_01b032d0(&local_9a0);
            if ((((uVar11 & 1) == 0) || (uVar11 = FUN_01b032d0(&local_9a0), (uVar11 & 1) == 0)) ||
               ((local_998 & 0x3000000) == 0)) {
              local_154 = *(undefined4 *)(param_2 + 0x58);
              local_150 = *(undefined4 *)(param_2 + 0x5c);
            }
            else {
              FUN_01b079ec(&local_88,&local_9a0);
              local_154 = (uint)local_88;
              local_150 = local_88._4_4_;
            }
          }
          else {
            local_9a0 = PTR_DAT_04bbfe60 + 0x10;
            memset(&local_998,0,0x754);
            uVar8 = nn::os::GetSystemTick();
            local_244 = (uVar8 ^ uVar8 >> 0x1e) * 0x6c078965 + 1;
            local_240 = (local_244 ^ local_244 >> 0x1e) * 0x6c078965 + 2;
            local_23c = (local_240 ^ local_240 >> 0x1e) * 0x6c078965 + 3;
            local_238 = (local_23c ^ local_23c >> 0x1e) * 0x6c078965 + 4;
            __s = (void *)FUN_01a451fc(&local_9a0);
            memset(__s,0,0x754);
            local_80 = &local_9a8;
            local_9a8 = 0x32;
            local_88 = &PTR_FUN_049ff448;
            FUN_008a1ba0(&local_9a0,&local_88);
            puVar18 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
            uVar8 = *puVar18 ^ *puVar18 << 0xb;
            uVar2 = puVar18[3];
            *puVar18 = puVar18[1];
            puVar18[1] = puVar18[2];
            uVar7 = uVar8 ^ uVar2;
            uVar8 = uVar8 >> 8 ^ uVar2 >> 0x13 ^ uVar7;
            puVar18[2] = uVar2;
            puVar18[3] = uVar8;
            uVar8 = (uVar8 ^ uVar7 >> 0x1e) * 0x6c078965 + 1;
            uVar7 = (uVar8 ^ uVar8 >> 0x1e) * 0x6c078965 + 2;
            uVar2 = (uVar7 ^ uVar7 >> 0x1e) * 0x6c078965 + 3;
            uVar3 = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 4;
            lVar23 = (**(code **)(local_9a0 + 0x20))(&local_9a0);
            lVar16 = 0;
            iVar9 = 0;
            do {
              puVar18 = (uint *)(lVar23 + lVar16);
              lVar16 = lVar16 + 4;
              uVar15 = *puVar18 - (*puVar18 >> 1 & 0x55555555);
              uVar15 = (uVar15 >> 2 & 0x33333333) + (uVar15 & 0x33333333);
              uVar15 = uVar15 + (uVar15 >> 4) & 0xf0f0f0f;
              uVar15 = uVar15 + (uVar15 >> 8);
              iVar9 = (uVar15 + (uVar15 >> 0x10) & 0x3f) + iVar9;
            } while (lVar16 != 0x754);
            if (iVar9 == 0) {
              uVar13 = PTR_DAT_04bb37e0[2];
              uVar17 = PTR_DAT_04bb37e0[3];
              puVar20 = (undefined4 *)PTR_DAT_04bb37e0;
            }
            else {
              lVar23 = (**(code **)(local_9a0 + 0x20))(&local_9a0);
              lVar16 = 0;
              uVar15 = 0;
              do {
                puVar18 = (uint *)(lVar23 + lVar16);
                lVar16 = lVar16 + 4;
                uVar4 = *puVar18 - (*puVar18 >> 1 & 0x55555555);
                uVar4 = (uVar4 >> 2 & 0x33333333) + (uVar4 & 0x33333333);
                uVar4 = uVar4 + (uVar4 >> 4) & 0xf0f0f0f;
                uVar4 = uVar4 + (uVar4 >> 8);
                uVar15 = (uVar4 + (uVar4 >> 0x10) & 0x3f) + uVar15;
              } while (lVar16 != 0x754);
              uVar8 = uVar8 ^ uVar8 * 0x800;
              local_88 = (undefined **)CONCAT44(uVar2,uVar7);
              uVar8 = uVar8 >> 8 ^ uVar3 >> 0x13 ^ uVar8 ^ uVar3;
              local_80 = (undefined4 *)CONCAT44(uVar8,uVar3);
              FUN_00889f80(&local_9a8,&local_9a0,(int)((ulong)uVar8 * (ulong)uVar15 >> 0x20) + 1);
              FUN_01a4c66c(&local_88,&local_9a8);
              puVar20 = &local_9a8;
              uVar13 = local_9a8._2_1_;
              uVar17 = local_9a8._3_1_;
            }
            local_154 = CONCAT13(uVar17,CONCAT12(uVar13,(undefined2)local_154));
            local_150 = puVar20[1];
            local_154 = CONCAT22(local_154._2_2_,*(undefined2 *)puVar20);
          }
          local_1d8 = 1;
          local_208 = (float)(int)param_1[0x1cf6] * 5.0;
          local_200 = (float)*(int *)((long)param_1 + 0xe7b4) * 5.0;
          if (*(int *)((long)param_1 + 0xaf54) <= (int)*plVar1) {
            return;
          }
          ppuVar12 = (undefined **)&local_230;
          goto LAB_01f44c28;
        }
      }
      goto LAB_01f4474c;
    }
    piVar10 = (int *)(**(code **)(*(long *)(*(long *)PTR_DAT_04bb3968 + 0x2718) + 0xf0))
                               (*(long *)PTR_DAT_04bb3968 + 0x2718);
    if ((int)uVar8 < *piVar10) {
      local_9a0 = (undefined *)((ulong)local_9a0 & 0xffffffff00000000);
      uVar11 = FUN_01f466a0(param_1);
      uVar7 = (uint)((uVar11 & 1) != 0);
      local_9a0 = (undefined *)CONCAT44(local_9a0._4_4_,1);
      goto LAB_01f44668;
    }
  }
  else {
    lVar23 = *(long *)(lVar23 + 0x57e58);
    uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar23 + 0x1f8);
    if (*(uint *)(lVar23 + 0x1d8) <= uVar7) goto LAB_01f4456c;
    bVar6 = *(long *)(*(long *)(lVar23 + 0x1e0) + (long)(int)uVar7 * 8) != 0;
    if ((*(byte *)((long)param_1 + 0xad54) >> 2 & 1) == 0) goto LAB_01f44578;
LAB_01f4474c:
    if (bVar6) {
      return;
    }
  }
  if (*(int *)(param_1[1] + 0x750) == 0) {
    plVar21 = *(long **)(param_1[1] + 0x60);
    if (plVar21 == (long *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar9 = __cxa_guard_acquire(&DAT_052461c0);
        plVar21 = &DAT_05240280;
        if (iVar9 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        plVar21 = &DAT_05240280;
      }
    }
    (**(code **)(*plVar21 + 0x370))(&local_88,plVar21);
    lVar22 = *(long *)puVar5;
    uVar7 = FUN_0277d6c4(&local_88);
    lVar23 = *(long *)puVar5;
    bVar6 = false;
    if (lVar23 != 0) {
      lVar22 = *(long *)(lVar22 + 0x57e58);
      uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar22 + 0x1f8);
      if ((uVar7 < *(uint *)(lVar22 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar22 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
        local_990 = 0;
        local_9a0 = PTR_DAT_04bc0510 + 0x10;
        local_998 = (uint)local_88;
        uStack_994 = local_88._4_4_;
        uVar7 = FUN_0277d6c4(&local_998);
        if (*(long *)puVar5 == 0) {
LAB_01f44b68:
          local_9a8 = 0xbc;
        }
        else {
          lVar23 = *(long *)(lVar23 + 0x57e58);
          uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar23 + 0x1f8);
          if ((*(uint *)(lVar23 + 0x1d8) <= uVar7) ||
             (*(long *)(*(long *)(lVar23 + 0x1e0) + (long)(int)uVar7 * 8) == 0)) goto LAB_01f44b68;
          lVar23 = *(long *)PTR_DAT_04bc0428;
          uVar7 = FUN_0277d6c4(&local_88);
          uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar23 + 0x1f8);
          if ((*(uint *)(lVar23 + 0x1d8) <= uVar7) ||
             (puVar18 = *(uint **)(*(long *)(lVar23 + 0x1e0) + (long)(int)uVar7 * 8),
             puVar18 == (uint *)0x0)) goto LAB_01f44b68;
          local_9a8 = 0;
          uVar7 = *puVar18;
          if ((uVar7 != 0) && (puVar18 != (uint *)(ulong)uVar7)) {
            puVar19 = (uint *)((long)puVar18 - (long)(ulong)uVar7);
            local_9a8 = 0;
            if (*puVar19 != 0) {
              uVar7 = puVar19[1];
              if ((uVar7 != 0) && ((ulong)(ushort)puVar19[2] != 0)) {
                lVar23 = 0xc;
                if (*(char *)((long)puVar19 + 10) != '\0') {
                  lVar23 = 0x1c;
                }
                lVar23 = (long)puVar19 + lVar23 + (ulong)(ushort)puVar19[2] * 8;
                if (lVar23 != 0) {
                  uVar2 = 0;
                  if ((ulong)uVar7 != 0) {
                    uVar2 = (uint)((ulong)((long)puVar18 - lVar23) / (ulong)uVar7);
                  }
                  if (*puVar19 <= uVar2) {
                    uVar2 = 0xffffffff;
                  }
                  if ((uVar2 < *(uint *)PTR_DAT_04bc00c8) &&
                     (local_9a8 = (uint)*(ushort *)
                                         (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar2 * 2),
                     local_9a8 < 0xbd)) goto LAB_01f44b74;
                }
              }
              local_9a8 = 0;
            }
          }
        }
LAB_01f44b74:
        local_230._0_4_ = 0x14;
        bVar6 = local_9a8 == 0x14;
      }
      else {
        bVar6 = false;
      }
    }
    lVar23 = (**(code **)(*param_1 + 0x3a0))(param_1);
    if ((0x4f < uVar8) && (!bVar6)) {
LAB_01f44ba4:
      *(undefined4 *)(lVar23 + 0x168) = 1;
      FUN_01e63f1c(&local_9a0);
      local_9a0 = (undefined *)CONCAT44(local_9a0._4_4_,1);
      FUN_01e3b790(&local_230,param_1[1]);
      local_8c4 = (undefined4)local_230;
      uStack_8c0 = local_230._4_4_;
      if (local_888 != "NpcSmartPhoneCheck") {
        iVar9 = 0x12;
        if (local_880 < 0x13) {
          iVar9 = local_880 + -1;
        }
        memcpy(local_888,"NpcSmartPhoneCheck",(long)iVar9);
        local_888[iVar9] = '\0';
      }
      local_938 = 1;
      goto LAB_01f44c18;
    }
LAB_01f44780:
    *(undefined4 *)(lVar23 + 0x170) = 1;
    *(undefined4 *)(lVar16 + 0x168) = 0;
    lVar16 = param_1[3];
    uVar11 = FUN_02085a50(lVar16,1,0);
    if ((uVar11 & 1) != 0) {
      *(undefined1 *)(lVar16 + 0x801) = 1;
      lVar23 = lVar16 + 0x10 + (ulong)*(uint *)(lVar16 + 0x294) * 0x80;
      if (4 < *(uint *)(lVar16 + 0x294)) {
        lVar23 = lVar16 + 0x10;
      }
      *(undefined8 *)(lVar23 + 0xc) = 0;
      *(undefined4 *)(lVar23 + 0x14) = 0;
    }
    FUN_01e63f1c(&local_9a0);
    uVar14 = 10;
    local_937 = 1;
  }
  else {
    if ((uVar8 < 0x32) || (0x2c < *(int *)((long)param_1 + 0xe62c))) {
      lVar23 = (**(code **)(*param_1 + 0x3a0))(param_1);
      goto LAB_01f44780;
    }
    lVar23 = (**(code **)(*param_1 + 0x3a0))(param_1);
    if (0x4f < uVar8) goto LAB_01f44ba4;
    *(undefined4 *)(lVar23 + 0x170) = 1;
    lVar16 = (**(code **)(*param_1 + 0x3a0))(param_1);
    *(undefined4 *)(lVar16 + 0x168) = 0;
    lVar16 = param_1[3];
    uVar11 = FUN_02085a50(lVar16,1,0);
    if ((uVar11 & 1) != 0) {
      *(undefined1 *)(lVar16 + 0x801) = 1;
      lVar23 = lVar16 + 0x10 + (ulong)*(uint *)(lVar16 + 0x294) * 0x80;
      if (4 < *(uint *)(lVar16 + 0x294)) {
        lVar23 = lVar16 + 0x10;
      }
      *(undefined8 *)(lVar23 + 0xc) = 0;
      *(undefined4 *)(lVar23 + 0x14) = 0;
    }
    FUN_01e63f1c(&local_9a0);
    local_938 = 1;
    local_8c4 = *(undefined4 *)PTR_DAT_04bb37e0;
    uStack_8c0 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
    if (*(int *)(param_1[1] + 0x750) == 1) {
      uVar14 = 0x14;
    }
    else if (*(int *)(param_1[1] + 0x750) == 2) {
      uVar14 = 0x16;
    }
    else {
      uVar14 = 1;
    }
    local_230._0_4_ = uVar14;
  }
  local_8b0 = 1;
  local_9a0 = (undefined *)CONCAT44(local_9a0._4_4_,uVar14);
LAB_01f44c18:
  if ((int)*plVar1 < *(int *)((long)param_1 + 0xaf54)) {
    ppuVar12 = &local_9a0;
LAB_01f44c28:
    FUN_021920b0(plVar1,ppuVar12);
  }
  return;
code_r0x01f446fc:
  uVar7 = uVar7 - 1 & uVar7;
  if (uVar7 == 0) goto LAB_01f4474c;
  goto LAB_01f446f0;
}


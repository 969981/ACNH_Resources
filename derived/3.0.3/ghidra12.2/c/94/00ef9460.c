
undefined8 FUN_00ef9460(undefined2 *param_1,byte *param_2,undefined4 param_3)

{
  undefined *puVar1;
  byte *pbVar2;
  undefined2 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  short sVar6;
  uint uVar7;
  uint uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  bool bVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  long *plVar16;
  ulong uVar17;
  undefined8 *puVar18;
  void *__s;
  ulong uVar19;
  long lVar20;
  long lVar21;
  undefined2 *puVar22;
  undefined2 uVar23;
  uint uVar24;
  long lVar25;
  uint *puVar26;
  ulong uVar27;
  byte bVar28;
  char cVar29;
  ushort uVar30;
  uint *puVar31;
  int *piVar32;
  long lVar33;
  undefined4 *puVar34;
  long *plVar35;
  undefined8 uVar36;
  bool bVar37;
  long lVar38;
  uint local_828;
  undefined4 local_824;
  uint local_820;
  uint local_81c;
  uint local_818;
  uint uStack_814;
  undefined *local_810;
  char *local_808;
  undefined8 local_800;
  undefined1 local_7f5;
  byte local_7f0 [4];
  uint local_7ec;
  undefined *local_7e8;
  undefined1 auStack_7e0 [1876];
  uint local_8c;
  uint local_88;
  uint local_84;
  int local_80;
  uint local_74;
  undefined4 local_70;
  int aiStack_6c [3];
  
  puVar9 = PTR_DAT_04bb27c0;
  lVar25 = *(long *)PTR_DAT_04bb27c0;
  if (lVar25 == 0) {
    return 0;
  }
  uVar14 = *(uint *)(*(long *)PTR_DAT_04bb3968 + 0xa20);
  if ((((uVar14 == 0) ||
       (plVar35 = *(long **)(*(long *)(*(long *)(lVar25 + 0x1c0) + 8) +
                            ((ulong)(uVar14 >> 0x11) & 0x7ff8)), plVar35 == (long *)0x0)) ||
      ((*(uint *)(plVar35 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar35 + 0x46) != uVar14)) {
    plVar35 = (long *)0x0;
  }
  if (*(int *)(lVar25 + 0x288) == 1 || *(int *)(lVar25 + 0x288) == -1) {
    plVar16 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar25 = *(long *)puVar9;
    iVar13 = (**(code **)(*plVar16 + 0x60))();
    if (iVar13 < 0x11) {
      uVar14 = 1;
    }
    else {
      if (4 < *(uint *)(lVar25 + 0x5e8)) goto LAB_00ef953c;
      uVar14 = 0x1aU >> (ulong)(*(uint *)(lVar25 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_00ef953c:
    uVar14 = 0;
  }
  if (plVar35 == (long *)0x0) {
    return 0;
  }
  lVar25 = plVar35[0x2a];
  if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
     (iVar13 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar13 != 0)) {
    *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb37d8);
  }
  uVar17 = (**(code **)(*plVar35 + 0x20))(plVar35,PTR_DAT_04bb37d0);
  uVar15 = 0;
  if ((int)lVar25 == 1) {
    uVar15 = uVar14;
  }
  if ((uVar17 & 1) == 0) {
    return 0;
  }
  if (uVar15 == 0) {
    return 0;
  }
  uVar14 = *(uint *)(*(long *)(plVar35[0x13] + 0x288) + 0x1e0);
  puVar22 = (undefined2 *)(*(long *)(plVar35[0x13] + 0x288) + 0x1ac);
  puVar3 = puVar22 + (ulong)uVar14 * 4;
  if (3 < uVar14) {
    puVar3 = puVar22;
  }
  *param_1 = *puVar3;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(puVar3 + 1);
  *(undefined1 *)((long)param_1 + 3) = *(undefined1 *)((long)puVar3 + 3);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(puVar3 + 2);
  puVar9 = PTR_DAT_04bb43c0;
  lVar25 = *(long *)PTR_DAT_04bb43c0;
  uVar14 = FUN_0277d6c4(param_1);
  if (*(long *)puVar9 != 0) {
    lVar25 = *(long *)(lVar25 + 0x57e58);
    uVar14 = (uVar14 & 0xffff) - (uint)*(ushort *)(lVar25 + 0x1f8);
    if ((uVar14 < *(uint *)(lVar25 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar25 + 0x1e0) + (long)(int)uVar14 * 8) != 0)) {
      return 1;
    }
  }
  lVar25 = FUN_0265c2a0(param_3);
  if (lVar25 == 0) {
    local_74 = 0;
  }
  else {
    if ((*(long **)(lVar25 + 0x28) == (long *)0x0) ||
       (puVar18 = (undefined8 *)**(long **)(lVar25 + 0x28), puVar18 == (undefined8 *)0x0)) {
      uVar14 = 1;
    }
    else {
      uVar14 = (**(code **)*puVar18)();
      uVar14 = uVar14 ^ 1;
    }
    local_74 = FUN_020fd7d8(*(long *)(lVar25 + 0x10) + *(long *)(lVar25 + 8));
    if ((((uVar14 & 1) == 0) && (*(long *)(lVar25 + 0x28) != 0)) &&
       (puVar18 = *(undefined8 **)(*(long *)(lVar25 + 0x28) + 8), puVar18 != (undefined8 *)0x0)) {
      (**(code **)*puVar18)();
    }
  }
  local_74 = local_74 & 0xff;
  uVar14 = FUN_00a8c014(*(undefined8 *)PTR_DAT_04bb30a0);
  aiStack_6c[0] = 0;
  if (uVar14 < 4) {
    aiStack_6c[0] = uVar14 + 1;
  }
  local_70 = 1;
  if (3 < local_74) {
    local_70 = 2;
  }
  local_7e8 = PTR_DAT_04bbfe60 + 0x10;
  memset(auStack_7e0,0,0x754);
  uVar14 = nn::os::GetSystemTick();
  local_8c = (uVar14 ^ uVar14 >> 0x1e) * 0x6c078965 + 1;
  local_88 = (local_8c ^ local_8c >> 0x1e) * 0x6c078965 + 2;
  local_84 = (local_88 ^ local_88 >> 0x1e) * 0x6c078965 + 3;
  local_80 = (local_84 ^ local_84 >> 0x1e) * 0x6c078965 + 4;
  __s = (void *)FUN_01a451fc(&local_7e8);
  memset(__s,0,0x754);
  iVar13 = FUN_0265b400(param_3,1);
  if (iVar13 == 0) {
    local_810 = (undefined *)((ulong)local_810 & 0xffffffff00000000);
    lVar25 = *(long *)PTR_DAT_04bb46b0;
    if (lVar25 != 0) {
      puVar18 = *(undefined8 **)(lVar25 + 0x10);
      if ((*(byte *)(lVar25 + 0x453) & 1) == 0) {
        lVar25 = (**(code **)(*(long *)*puVar18 + 0x38))();
        if (lVar25 != 0) {
          lVar25 = lVar25 + 0x70;
          goto LAB_00ef9f08;
        }
      }
      else if (((puVar18 != (undefined8 *)0x0) && ((long *)puVar18[0x26] != (long *)0x0)) &&
              (lVar25 = (**(code **)(*(long *)puVar18[0x26] + 0x38))(), lVar25 != 0)) {
LAB_00ef9f08:
        switch((ulong)local_810 & 0xffffffff) {
        case 0:
          lVar25 = lVar25 + 0xe6c48;
          break;
        case 1:
          lVar25 = lVar25 + 0xe6cf0;
          break;
        case 2:
          lVar25 = lVar25 + 0xe6d60;
          break;
        case 3:
          lVar25 = lVar25 + 0xe6dd0;
          break;
        case 4:
          lVar25 = lVar25 + 0xe6e40;
          break;
        case 5:
          lVar25 = lVar25 + 0xe6eb0;
          break;
        case 6:
          lVar25 = lVar25 + 0xe6f20;
          break;
        default:
          goto switchD_00ef9f28_default;
        }
        if ((*(long **)(lVar25 + 0x28) == (long *)0x0) ||
           (puVar18 = (undefined8 *)**(long **)(lVar25 + 0x28), puVar18 == (undefined8 *)0x0)) {
          local_810 = (undefined *)
                      CONCAT44(local_810._4_4_,
                               (int)*(char *)(*(long *)(lVar25 + 0x10) + *(long *)(lVar25 + 8) +
                                             0x2e));
        }
        else {
          uVar17 = (**(code **)*puVar18)();
          local_810 = (undefined *)
                      CONCAT44(local_810._4_4_,
                               (int)*(char *)(*(long *)(lVar25 + 0x10) + *(long *)(lVar25 + 8) +
                                             0x2e));
          if ((((uVar17 & 1) != 0) && (*(long *)(lVar25 + 0x28) != 0)) &&
             (puVar18 = *(undefined8 **)(*(long *)(lVar25 + 0x28) + 8), puVar18 != (undefined8 *)0x0
             )) {
            (**(code **)*puVar18)();
          }
        }
        if ((uint)local_810 < 0xb) {
          uVar14 = *(uint *)(&DAT_0416a1ac + (long)(int)(uint)local_810 * 4);
          goto LAB_00ef9774;
        }
      }
    }
  }
switchD_00ef9f28_default:
  uVar14 = 0xbd;
LAB_00ef9774:
  bVar28 = *param_2;
  if (7 < bVar28) {
    bVar28 = 0xff;
  }
  local_820 = CONCAT31(local_820._1_3_,bVar28);
  lVar25 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,&local_820,1);
  if (lVar25 == 0) {
    uVar15 = 0;
  }
  else {
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    local_808 = "UpgradePocket40";
    local_810 = puVar1;
    iVar13 = FUN_0274b8d0(lVar25,&local_810);
    if (iVar13 == 0) {
      local_808 = "UpgradePocket30";
      local_810 = puVar1;
      iVar13 = FUN_0274b8d0(lVar25,&local_810);
      uVar15 = (uint)(iVar13 != 0);
    }
    else {
      uVar15 = 2;
    }
  }
  local_810 = (undefined *)CONCAT44(local_810._4_4_,uVar15);
  lVar25 = 0;
  puVar1 = PTR_DAT_04bc0510 + 0x10;
  lVar33 = 0x1e;
  if (uVar15 != 1) {
    lVar33 = 0x14;
  }
  lVar20 = 0x28;
  if (uVar15 != 2) {
    lVar20 = lVar33;
  }
  do {
    plVar16 = (long *)FUN_02677ea0(param_2,lVar25);
    lVar33 = *(long *)puVar9;
    uVar15 = FUN_0277d6c4();
    lVar38 = *(long *)puVar9;
    if (lVar38 != 0) {
      lVar33 = *(long *)(lVar33 + 0x57e58);
      uVar15 = (uVar15 & 0xffff) - (uint)*(ushort *)(lVar33 + 0x1f8);
      if ((uVar15 < *(uint *)(lVar33 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar33 + 0x1e0) + (long)(int)uVar15 * 8) != 0)) {
        local_808 = (char *)*plVar16;
        local_800 = (uint *)0x0;
        local_810 = puVar1;
        uVar15 = FUN_0277d6c4(&local_808);
        if (*(long *)puVar9 == 0) {
LAB_00ef9988:
          if (local_800 != (uint *)0x0) goto LAB_00ef9990;
          local_7ec = 0xbc;
        }
        else {
          lVar33 = *(long *)(lVar38 + 0x57e58);
          uVar15 = (uVar15 & 0xffff) - (uint)*(ushort *)(lVar33 + 0x1f8);
          if ((*(uint *)(lVar33 + 0x1d8) <= uVar15) ||
             (*(long *)(*(long *)(lVar33 + 0x1e0) + (long)(int)uVar15 * 8) == 0)) goto LAB_00ef9988;
          lVar33 = *(long *)PTR_DAT_04bc0428;
          uVar15 = FUN_0277d6c4(plVar16);
          uVar15 = (uVar15 & 0xffff) - (uint)*(ushort *)(lVar33 + 0x1f8);
          if ((*(uint *)(lVar33 + 0x1d8) <= uVar15) ||
             (puVar26 = *(uint **)(*(long *)(lVar33 + 0x1e0) + (long)(int)uVar15 * 8),
             puVar26 == (uint *)0x0)) goto LAB_00ef9988;
          local_800 = puVar26;
LAB_00ef9990:
          uVar15 = *local_800;
          local_7ec = 0;
          if ((uVar15 != 0) && (local_800 != (uint *)(ulong)uVar15)) {
            puVar26 = (uint *)((long)local_800 - (long)(ulong)uVar15);
            local_7ec = 0;
            if (*puVar26 != 0) {
              uVar15 = puVar26[1];
              if ((uVar15 != 0) && ((ulong)(ushort)puVar26[2] != 0)) {
                lVar33 = 0xc;
                if (*(char *)((long)puVar26 + 10) != '\0') {
                  lVar33 = 0x1c;
                }
                lVar33 = (long)puVar26 + lVar33 + (ulong)(ushort)puVar26[2] * 8;
                if (lVar33 != 0) {
                  uVar4 = 0;
                  if ((ulong)uVar15 != 0) {
                    uVar4 = (uint)((ulong)((long)local_800 - lVar33) / (ulong)uVar15);
                  }
                  if (*puVar26 <= uVar4) {
                    uVar4 = 0xffffffff;
                  }
                  if ((uVar4 < *(uint *)PTR_DAT_04bc00c8) &&
                     (local_7ec = (uint)*(ushort *)
                                         (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar4 * 2),
                     local_7ec < 0xbd)) goto LAB_00ef9a24;
                }
              }
              local_7ec = 0;
            }
          }
        }
LAB_00ef9a24:
        if (((local_7ec != uVar14) && (uVar17 = FUN_01af0020(&local_810), (uVar17 & 1) == 0)) &&
           (uVar17 = FUN_01af8438(&local_810), (uVar17 & 1) == 0)) {
          local_820 = 0x70;
          if (local_800 == (uint *)0x0) {
            local_828 = 0xbc;
          }
          else {
            uVar15 = *local_800;
            local_828 = 0;
            if ((uVar15 != 0) && (local_800 != (uint *)(ulong)uVar15)) {
              puVar26 = (uint *)((long)local_800 - (long)(ulong)uVar15);
              local_828 = 0;
              if (*puVar26 != 0) {
                uVar15 = puVar26[1];
                if ((uVar15 != 0) && ((ulong)(ushort)puVar26[2] != 0)) {
                  lVar33 = 0xc;
                  if (*(char *)((long)puVar26 + 10) != '\0') {
                    lVar33 = 0x1c;
                  }
                  lVar33 = (long)puVar26 + lVar33 + (ulong)(ushort)puVar26[2] * 8;
                  if (lVar33 != 0) {
                    uVar4 = 0;
                    if ((ulong)uVar15 != 0) {
                      uVar4 = (uint)((ulong)((long)local_800 - lVar33) / (ulong)uVar15);
                    }
                    if (*puVar26 <= uVar4) {
                      uVar4 = 0xffffffff;
                    }
                    if ((uVar4 < *(uint *)PTR_DAT_04bc00c8) &&
                       (local_828 = (uint)*(ushort *)
                                           (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar4 * 2),
                       local_828 < 0xbd)) goto LAB_00ef9aec;
                  }
                }
                local_828 = 0;
              }
            }
LAB_00ef9aec:
            if (local_828 == 0x70) goto LAB_00ef9894;
            local_828 = 0;
            uVar15 = *local_800;
            if ((uVar15 != 0) && (local_800 != (uint *)(ulong)uVar15)) {
              puVar26 = (uint *)((long)local_800 - (long)(ulong)uVar15);
              local_828 = 0;
              if (*puVar26 != 0) {
                uVar15 = puVar26[1];
                if ((uVar15 != 0) && ((ulong)(ushort)puVar26[2] != 0)) {
                  lVar33 = 0xc;
                  if (*(char *)((long)puVar26 + 10) != '\0') {
                    lVar33 = 0x1c;
                  }
                  lVar33 = (long)puVar26 + lVar33 + (ulong)(ushort)puVar26[2] * 8;
                  if (lVar33 != 0) {
                    uVar4 = 0;
                    if ((ulong)uVar15 != 0) {
                      uVar4 = (uint)((ulong)((long)local_800 - lVar33) / (ulong)uVar15);
                    }
                    if (*puVar26 <= uVar4) {
                      uVar4 = 0xffffffff;
                    }
                    if ((uVar4 < *(uint *)PTR_DAT_04bc00c8) &&
                       (local_828 = (uint)*(ushort *)
                                           (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar4 * 2),
                       local_828 < 0xbd)) goto LAB_00ef9bbc;
                  }
                }
                local_828 = 0;
              }
            }
          }
LAB_00ef9bbc:
          local_820 = 0x60;
          if ((local_828 != 0x60) &&
             (uVar17 = FUN_00efa550(&local_810,aiStack_6c,&local_70), (uVar17 & 1) != 0)) {
            FUN_0277dedc(plVar16);
            lVar33 = (**(code **)(local_7e8 + 0x18))(&local_7e8);
            uVar15 = FUN_0277d6c4(plVar16);
            if ((uVar15 >> 3 & 0x1fff) < 0x753) {
              lVar38 = (ulong)((uVar15 & 0xffff) >> 5) * 4;
              *(uint *)(lVar33 + lVar38) = *(uint *)(lVar33 + lVar38) | 1 << (ulong)(uVar15 & 0x1f);
            }
          }
        }
      }
    }
LAB_00ef9894:
    lVar25 = lVar25 + 1;
  } while (lVar20 != lVar25);
  lVar25 = FUN_0265c2a0(param_3);
  puVar1 = PTR_DAT_04bb4f78;
  local_7f0[0] = *param_2;
  if (7 < local_7f0[0]) {
    local_7f0[0] = 0xff;
  }
  lVar33 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_7f0,1);
  if ((lVar25 != 0) && (lVar33 != 0)) {
    plVar16 = (long *)(lVar33 + 0x17f48);
    if ((*(long **)(lVar25 + 0x28) == (long *)0x0) ||
       (puVar18 = (undefined8 *)**(long **)(lVar25 + 0x28), puVar18 == (undefined8 *)0x0)) {
      uVar17 = 0;
    }
    else {
      uVar17 = (**(code **)*puVar18)();
      uVar17 = uVar17 & 0xffffffff;
    }
    FUN_026b52f0(*(long *)(lVar25 + 0x10) + *(long *)(lVar25 + 8),&local_7e8,0);
    if ((*(long **)(lVar33 + 0x17f68) == (long *)0x0) ||
       (puVar18 = (undefined8 *)**(long **)(lVar33 + 0x17f68), puVar18 == (undefined8 *)0x0)) {
      uVar19 = 0;
    }
    else {
      uVar19 = (**(code **)*puVar18)();
      uVar19 = uVar19 & 0xffffffff;
    }
    FUN_026b6010(*(long *)(lVar25 + 0x10) + *(long *)(lVar25 + 8),&local_7e8,
                 *(long *)(lVar33 + 0x17f50) + *plVar16,0);
    FUN_026b64b0(*(long *)(lVar25 + 0x10) + *(long *)(lVar25 + 8),&local_7e8,
                 *(long *)(lVar33 + 0x17f50) + *plVar16,0);
    FUN_026b69b0(*(long *)(lVar25 + 0x10) + *(long *)(lVar25 + 8),&local_7e8,
                 *(long *)(lVar33 + 0x17f50) + *plVar16);
    FUN_026b6b40(*(long *)(lVar25 + 0x10) + *(long *)(lVar25 + 8),&local_7e8,
                 *(long *)(lVar33 + 0x17f50) + *plVar16);
    local_7f5 = 0;
    local_808 = (char *)((long)&local_800 + 4);
    local_800 = (uint *)CONCAT35(local_800._5_3_,8);
    local_810 = PTR_DAT_04bb3768 + 0x10;
    pbVar2 = (byte *)(*(long *)(lVar25 + 0x10) + *(long *)(lVar25 + 8));
    FUN_038d1270(&local_810,"-----");
    uVar27 = (ulong)*pbVar2;
    if (uVar27 < 0x23) {
      FUN_038d1270(&local_810,"%s%02d",*(undefined8 *)(PTR_DAT_04bb9e38 + uVar27 * 8 + 0xb0),
                   pbVar2[1]);
    }
    uVar36 = *(undefined8 *)PTR_DAT_04bb4138;
    (**(code **)(local_810 + 0x18))(&local_810);
    local_820 = FUN_006bd550(local_808,0);
    puVar26 = (uint *)FUN_0079e770(uVar36,&local_820);
    puVar11 = PTR_DAT_04bb40b8;
    puVar10 = PTR_DAT_04bb40b0;
    if (puVar26 != (uint *)0x0) {
      if (*puVar26 != 0) {
        cVar29 = *PTR_DAT_04bb40b0;
        do {
          if (cVar29 == '\0') {
            cVar29 = '\x01';
            *(undefined8 *)puVar11 = 0xffffffffffffffff;
            *(undefined8 *)(puVar11 + 8) = 0xffffffffffffffff;
            *puVar10 = 1;
            *(undefined4 *)(puVar11 + 0xa0) = 0xffffffff;
            *(undefined8 *)(puVar11 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar11 + 0x18) = 0xffffffffffffffff;
            *(undefined8 *)(puVar11 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar11 + 0x28) = 0xffffffffffffffff;
            *(undefined8 *)(puVar11 + 0x30) = 0xffffffffffffffff;
            *(undefined8 *)(puVar11 + 0x38) = 0xffffffffffffffff;
            *(undefined8 *)(puVar11 + 0x40) = 0xffffffffffffffff;
            *(undefined8 *)(puVar11 + 0x48) = 0xffffffffffffffff;
            *(undefined8 *)(puVar11 + 0x50) = 0xffffffffffffffff;
            *(undefined8 *)(puVar11 + 0x58) = 0xffffffffffffffff;
            *(undefined8 *)(puVar11 + 0x60) = 0xffffffffffffffff;
            *(undefined8 *)(puVar11 + 0x68) = 0xffffffffffffffff;
            *(undefined8 *)(puVar11 + 0x70) = 0xffffffffffffffff;
            *(undefined8 *)(puVar11 + 0x78) = 0xffffffffffffffff;
            *(undefined8 *)(puVar11 + 0x80) = 0xffffffffffffffff;
            *(undefined8 *)(puVar11 + 0x88) = 0xffffffffffffffff;
            *(undefined8 *)(puVar11 + 0x90) = 0xffffffffffffffff;
            *(undefined8 *)(puVar11 + 0x98) = 0xffffffffffffffff;
          }
          else {
            uVar14 = *(uint *)(puVar11 + 0x50);
            if (-1 < (int)uVar14) {
              if ((ushort *)((ulong)uVar14 + (long)puVar26) != (ushort *)0x0) {
                uVar30 = *(ushort *)((ulong)uVar14 + (long)puVar26);
                goto LAB_00efa00c;
              }
              break;
            }
            if (uVar14 != 0xffffffff) break;
          }
          puVar31 = (uint *)(ulong)*puVar26;
          uVar30 = 0xfffe;
          if ((*puVar26 == 0) || (puVar26 == puVar31)) goto LAB_00efa00c;
          lVar20 = 0xc;
          if (*(char *)((long)puVar26 + (10 - (long)puVar31)) != '\0') {
            lVar20 = 0x1c;
          }
          lVar20 = (long)puVar26 + (lVar20 - (long)puVar31);
          if (lVar20 == 0) break;
          uVar27 = (ulong)*(ushort *)((long)puVar26 + (8 - (long)puVar31));
          *(undefined4 *)(puVar11 + 0x50) = 0xfffffffe;
          if (uVar27 == 0) break;
          piVar32 = (int *)(lVar20 + 4);
          while (piVar32[-1] != -0x78f0e1d7) {
            piVar32 = piVar32 + 2;
            uVar27 = uVar27 - 1;
            if (uVar27 == 0) goto LAB_00efa008;
          }
          iVar13 = 0;
          if (*piVar32 != -1) {
            iVar13 = *piVar32;
          }
          *(int *)(puVar11 + 0x50) = iVar13;
          if (*puVar26 == 0) break;
        } while( true );
      }
LAB_00efa008:
      uVar30 = 0xfffe;
LAB_00efa00c:
      local_820 = (uint)uVar30;
      local_81c = 0;
      FUN_0277d4ac(&local_820);
      lVar20 = (**(code **)(local_7e8 + 0x18))(&local_7e8);
      uVar14 = FUN_0277d6c4(&local_820);
      if ((uVar14 >> 3 & 0x1fff) < 0x753) {
        lVar38 = (ulong)((uVar14 & 0xffff) >> 5) * 4;
        *(uint *)(lVar20 + lVar38) =
             *(uint *)(lVar20 + lVar38) & (1 << (ulong)(uVar14 & 0x1f) ^ 0xffffffffU);
      }
    }
    lVar20 = *(long *)(lVar25 + 8);
    lVar38 = *(long *)(lVar25 + 0x10);
    lVar21 = (**(code **)(local_7e8 + 0x18))(&local_7e8);
    uVar14 = FUN_0277d6c4(lVar38 + lVar20 + 0x13214);
    if ((uVar14 >> 3 & 0x1fff) < 0x753) {
      lVar20 = (ulong)((uVar14 & 0xffff) >> 5) * 4;
      *(uint *)(lVar21 + lVar20) =
           *(uint *)(lVar21 + lVar20) & (1 << (ulong)(uVar14 & 0x1f) ^ 0xffffffffU);
    }
    if ((((uVar19 & 1) != 0) && (*(long *)(lVar33 + 0x17f68) != 0)) &&
       (puVar18 = *(undefined8 **)(*(long *)(lVar33 + 0x17f68) + 8), puVar18 != (undefined8 *)0x0))
    {
      (**(code **)*puVar18)();
    }
    if ((((uVar17 & 1) != 0) && (*(long *)(lVar25 + 0x28) != 0)) &&
       (puVar18 = *(undefined8 **)(*(long *)(lVar25 + 0x28) + 8), puVar18 != (undefined8 *)0x0)) {
      (**(code **)*puVar18)();
    }
  }
  lVar33 = (**(code **)(local_7e8 + 0x20))(&local_7e8);
  lVar25 = 0;
  iVar13 = 0;
  do {
    puVar26 = (uint *)(lVar33 + lVar25);
    lVar25 = lVar25 + 4;
    uVar14 = *puVar26 - (*puVar26 >> 1 & 0x55555555);
    uVar14 = (uVar14 >> 2 & 0x33333333) + (uVar14 & 0x33333333);
    uVar14 = uVar14 + (uVar14 >> 4) & 0xf0f0f0f;
    uVar14 = uVar14 + (uVar14 >> 8);
    iVar13 = (uVar14 + (uVar14 >> 0x10) & 0x3f) + iVar13;
  } while (lVar25 != 0x754);
  if (iVar13 != 0) {
    puVar26 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
    uVar14 = *puVar26 ^ *puVar26 << 0xb;
    uVar4 = puVar26[3];
    *puVar26 = puVar26[1];
    puVar26[1] = puVar26[2];
    uVar15 = uVar14 ^ uVar4;
    uVar14 = uVar14 >> 8 ^ uVar4 >> 0x13 ^ uVar15;
    puVar26[2] = uVar4;
    puVar26[3] = uVar14;
    uVar14 = (uVar14 ^ uVar15 >> 0x1e) * 0x6c078965 + 1;
    uVar15 = (uVar14 ^ uVar14 >> 0x1e) * 0x6c078965 + 2;
    uVar4 = (uVar15 ^ uVar15 >> 0x1e) * 0x6c078965 + 3;
    uVar7 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 4;
    local_820 = uVar14;
    local_81c = uVar15;
    local_818 = uVar4;
    uStack_814 = uVar7;
    lVar33 = (**(code **)(local_7e8 + 0x20))(&local_7e8);
    lVar25 = 0;
    iVar13 = 0;
    do {
      puVar26 = (uint *)(lVar33 + lVar25);
      lVar25 = lVar25 + 4;
      uVar24 = *puVar26 - (*puVar26 >> 1 & 0x55555555);
      uVar24 = (uVar24 >> 2 & 0x33333333) + (uVar24 & 0x33333333);
      uVar24 = uVar24 + (uVar24 >> 4) & 0xf0f0f0f;
      uVar24 = uVar24 + (uVar24 >> 8);
      iVar13 = (uVar24 + (uVar24 >> 0x10) & 0x3f) + iVar13;
    } while (lVar25 != 0x754);
    if (iVar13 == 0) {
      sVar6 = *(short *)PTR_DAT_04bb37e0;
      local_828 = *(uint *)PTR_DAT_04bb37e0;
      local_824 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
    }
    else {
      lVar33 = (**(code **)(local_7e8 + 0x20))(&local_7e8);
      lVar25 = 0;
      uVar24 = 0;
      do {
        puVar26 = (uint *)(lVar33 + lVar25);
        lVar25 = lVar25 + 4;
        uVar8 = *puVar26 - (*puVar26 >> 1 & 0x55555555);
        uVar8 = (uVar8 >> 2 & 0x33333333) + (uVar8 & 0x33333333);
        uVar8 = uVar8 + (uVar8 >> 4) & 0xf0f0f0f;
        uVar8 = uVar8 + (uVar8 >> 8);
        uVar24 = (uVar8 + (uVar8 >> 0x10) & 0x3f) + uVar24;
      } while (lVar25 != 0x754);
      uVar14 = uVar14 ^ uVar14 * 0x800;
      uStack_814 = uVar14 >> 8 ^ uVar7 >> 0x13 ^ uVar14 ^ uVar7;
      local_820 = uVar15;
      local_81c = uVar4;
      local_818 = uVar7;
      FUN_00889f80(&local_828,&local_7e8,(int)((ulong)uStack_814 * (ulong)uVar24 >> 0x20) + 1);
      FUN_01a4c66c(&local_820,&local_828);
      sVar6 = (short)local_828;
    }
    if (sVar6 != -2) {
      bVar28 = *param_2;
      if (7 < bVar28) {
        bVar28 = 0xff;
      }
      local_7ec = CONCAT31(local_7ec._1_3_,bVar28);
      lVar25 = FUN_025830c0(*(undefined8 *)puVar1,&local_7ec,1);
      if (lVar25 == 0) {
        uVar14 = 0;
        puVar34 = (undefined4 *)PTR_DAT_04bb39d8;
      }
      else {
        puVar1 = PTR_DAT_04bb2020 + 0x10;
        local_808 = "UpgradePocket40";
        local_810 = puVar1;
        iVar13 = FUN_0274b8d0(lVar25,&local_810);
        puVar34 = (undefined4 *)PTR_DAT_04bb39d8;
        if (iVar13 == 0) {
          local_808 = "UpgradePocket30";
          local_810 = puVar1;
          iVar13 = FUN_0274b8d0(lVar25,&local_810);
          uVar14 = (uint)(iVar13 != 0);
        }
        else {
          uVar14 = 2;
        }
      }
      local_810 = (undefined *)CONCAT44(local_810._4_4_,uVar14);
      lVar25 = 0;
      uVar15 = 0;
      bVar37 = false;
      lVar33 = 0x1e;
      if (uVar14 != 1) {
        lVar33 = 0x14;
      }
      lVar20 = 0x28;
      if (uVar14 != 2) {
        lVar20 = lVar33;
      }
      do {
        while( true ) {
          puVar22 = (undefined2 *)FUN_02677ea0(param_2,lVar25);
          lVar33 = *(long *)puVar9;
          uVar14 = FUN_0277d6c4();
          if (*(long *)puVar9 != 0) break;
LAB_00efa3d4:
          lVar25 = lVar25 + 1;
          if (lVar20 == lVar25) {
            if (!bVar37) {
              return 0;
            }
            uVar23 = *param_1;
            goto LAB_00efa4c0;
          }
        }
        lVar33 = *(long *)(lVar33 + 0x57e58);
        uVar14 = (uVar14 & 0xffff) - (uint)*(ushort *)(lVar33 + 0x1f8);
        if (((*(uint *)(lVar33 + 0x1d8) <= uVar14) ||
            (*(long *)(*(long *)(lVar33 + 0x1e0) + (long)(int)uVar14 * 8) == 0)) ||
           (uVar17 = FUN_0277d7b4(puVar22,&local_828), (uVar17 & 1) == 0)) goto LAB_00efa3d4;
        uVar15 = uVar15 + 1;
        puVar26 = (uint *)nn::os::GetTlsValue(*puVar34);
        uVar14 = *puVar26 ^ *puVar26 << 0xb;
        uVar4 = puVar26[3];
        *puVar26 = puVar26[1];
        puVar26[1] = puVar26[2];
        uVar14 = uVar14 >> 8 ^ uVar4 >> 0x13 ^ uVar14 ^ uVar4;
        puVar26[2] = uVar4;
        puVar26[3] = uVar14;
        if (((ulong)uVar14 * (ulong)uVar15 & 0xffffffff00000000) != 0) goto LAB_00efa3d4;
        uVar23 = *puVar22;
        bVar37 = true;
        *param_1 = uVar23;
        bVar12 = lVar20 + -1 != lVar25;
        lVar25 = lVar25 + 1;
        *(undefined1 *)(param_1 + 1) = *(undefined1 *)(puVar22 + 1);
        *(undefined1 *)((long)param_1 + 3) = *(undefined1 *)((long)puVar22 + 3);
        *(undefined4 *)(param_1 + 2) = *(undefined4 *)(puVar22 + 2);
      } while (bVar12);
LAB_00efa4c0:
      lVar25 = *(long *)(plVar35[0x13] + 0x288);
      *(undefined2 *)(lVar25 + 0x1ac) = uVar23;
      *(undefined1 *)(lVar25 + 0x1ae) = *(undefined1 *)(param_1 + 1);
      *(undefined1 *)(lVar25 + 0x1af) = *(undefined1 *)((long)param_1 + 3);
      uVar5 = *(undefined4 *)(param_1 + 2);
      *(undefined4 *)(lVar25 + 0x1e0) = 0;
      *(undefined4 *)(lVar25 + 0x1b0) = uVar5;
      return 1;
    }
  }
  return 0;
}


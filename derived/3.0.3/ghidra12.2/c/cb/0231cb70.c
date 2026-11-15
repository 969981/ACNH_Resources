
/* WARNING: Removing unreachable block (ram,0x0231cc3c) */

void FUN_0231cb70(long param_1,byte param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  uint *puVar3;
  bool bVar4;
  short sVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  bool bVar9;
  bool bVar10;
  byte bVar11;
  byte bVar12;
  int iVar13;
  ulong uVar14;
  uint uVar15;
  long lVar16;
  long *plVar17;
  long lVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  uint *puVar21;
  undefined4 local_64;
  undefined *local_60;
  undefined8 local_58;
  
  puVar6 = PTR_DAT_04bb4718;
  if (*(int *)(param_1 + 0x178) == 1) {
    return;
  }
  if ((*(long *)PTR_DAT_04bb2808 == 0) ||
     (lVar16 = *(long *)(*(long *)PTR_DAT_04bb2808 + 8), lVar16 == 0)) {
    bVar9 = true;
  }
  else {
    bVar9 = *(uint *)(lVar16 + 0x1b0) < 2;
  }
  if (*(long *)PTR_DAT_04bb4718 == 0) {
    if ((DAT_054f08c8 & 1) == 0) {
      iVar13 = __cxa_guard_acquire(&DAT_054f08c8);
      puVar21 = &DAT_054f08c0;
      if (iVar13 != 0) {
        DAT_054f08c0 = 0;
        __cxa_guard_release(&DAT_054f08c8);
      }
    }
    else {
      puVar21 = &DAT_054f08c0;
    }
  }
  else {
    puVar21 = (uint *)(*(long *)PTR_DAT_04bb4718 + 0x1fc);
  }
  puVar7 = PTR_DAT_04bb39b0;
  local_60 = (undefined *)CONCAT44(local_60._4_4_,0xf);
  if ((bool)((*puVar21 & 0x8000) == 0 & (bVar9 ^ 1U))) {
    return;
  }
  pbVar1 = (byte *)(param_1 + 0x1ee8);
  lVar16 = *(long *)PTR_DAT_04bb39b0;
  if ((lVar16 != 0) && (*(int *)(lVar16 + 0x15c) != 0)) {
    pbVar2 = PTR_DAT_04bb32e0;
    if (*(int *)(lVar16 + 0x15c) != 0) {
      pbVar2 = (byte *)(lVar16 + 0x158);
    }
    bVar12 = *pbVar1;
    bVar11 = *pbVar2;
    if (7 < bVar11) {
      bVar11 = 0xff;
    }
    if (7 < bVar12) {
      bVar12 = 0xff;
    }
    if (bVar11 != bVar12) {
      bVar11 = FUN_02324acc(param_1);
      param_2 = bVar11 & param_2;
    }
  }
  puVar8 = PTR_DAT_04bb27d0;
  lVar16 = *(long *)PTR_DAT_04bb27d0;
  if ((((lVar16 == 0) || (*(long *)(lVar16 + 0x28) == 0)) || (*(int *)(lVar16 + 0x80) != 1)) ||
     (sVar5 = *(short *)PTR_DAT_04bb6298, sVar5 == -1)) {
LAB_0231cd48:
    bVar9 = true;
  }
  else {
    local_60 = (undefined *)CONCAT44(local_60._4_4_,3);
    puVar21 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar5 * 8);
    if (0xff < (uint)(int)sVar5) {
      puVar21 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar21 >> 3 & 1) == 0) goto LAB_0231cd48;
    local_60 = PTR_DAT_04bb2020 + 0x10;
    local_58 = "TapDreamFirstTalkDone";
    iVar13 = FUN_02743000(&local_60);
    bVar9 = iVar13 != 0;
  }
  if ((*(uint *)(param_1 + 0x17cc) >> 0x1c & 1) != 0) {
    if ((*(uint *)(param_1 + 0x17cc) >> 0x1d & 1) != 0) {
      return;
    }
    bVar11 = FUN_0231fc94(param_1);
    if ((bVar9 & bVar11) != 1) {
      return;
    }
    bVar11 = *pbVar1;
    if (7 < bVar11) {
      bVar11 = 0xff;
    }
    local_64._0_2_ = CONCAT11(1,bVar11);
    FUN_00a77ec0(&local_64);
    if (*(long *)puVar6 == 0) {
      if ((DAT_054f08c8 & 1) == 0) {
        iVar13 = __cxa_guard_acquire(&DAT_054f08c8);
        puVar21 = &DAT_054f08c0;
        if (iVar13 != 0) {
          DAT_054f08c0 = 0;
          __cxa_guard_release(&DAT_054f08c8);
        }
      }
      else {
        puVar21 = &DAT_054f08c0;
      }
    }
    else {
      puVar21 = (uint *)(*(long *)puVar6 + 0x1fc);
    }
    *puVar21 = *puVar21 & 0xffff7fff;
    if (local_64._1_1_ != '\0') {
      lVar16 = *(long *)PTR_DAT_04bb26a8;
      *(undefined1 *)(lVar16 + 0xa7669) = 1;
      *(undefined **)(lVar16 + 0xa7678) = &DAT_040bbb5b;
    }
    uVar15 = *(uint *)(param_1 + 0x17cc) | 0x20000000;
    goto LAB_0231d1ec;
  }
  local_60 = (undefined *)CONCAT44(local_60._4_4_,0x11e);
  lVar16 = *(long *)(param_1 + 0x70);
  if (lVar16 == 0) {
    local_64 = 0;
LAB_0231ceb0:
    local_60 = (undefined *)CONCAT44(local_60._4_4_,0x120);
    bVar10 = local_64 == 0x120;
  }
  else {
    local_64 = 0;
    if (*(uint *)(lVar16 + 0x280) < 0x149) {
      local_64 = *(uint *)(lVar16 + 0x280);
    }
    if ((local_64 != 0x11e) &&
       (local_60 = (undefined *)CONCAT44(local_60._4_4_,0x11f), local_64 != 0x11f))
    goto LAB_0231ceb0;
    bVar10 = true;
  }
  if ((param_2 & 1) == 0) {
    lVar18 = *(long *)puVar7;
    if ((lVar18 != 0) && (*(int *)(lVar18 + 0x15c) != 0)) {
      pbVar2 = PTR_DAT_04bb32e0;
      if (*(int *)(lVar18 + 0x15c) != 0) {
        pbVar2 = (byte *)(lVar18 + 0x158);
      }
      bVar12 = *pbVar1;
      bVar11 = *pbVar2;
      if (7 < bVar11) {
        bVar11 = 0xff;
      }
      if (7 < bVar12) {
        bVar12 = 0xff;
      }
      if (bVar11 != bVar12) {
        if (lVar16 == 0) {
          local_64 = 0;
        }
        else {
          uVar15 = *(uint *)(lVar16 + 0x280);
          if (uVar15 == 9) goto LAB_0231cff4;
          local_64 = 0;
          if (uVar15 < 0x149) {
            local_64 = uVar15;
          }
        }
        local_60 = (undefined *)((ulong)local_60 & 0xffffffff00000000);
        if (local_64 == 0) {
          uVar14 = FUN_02324acc(param_1);
          if ((uVar14 & 1) != 0) goto LAB_0231cff4;
          lVar16 = *(long *)(param_1 + 0x70);
        }
      }
    }
    uVar15 = 0;
    if (lVar16 != 0) {
      uVar15 = 0;
      if (*(uint *)(lVar16 + 0x280) < 0x149) {
        uVar15 = *(uint *)(lVar16 + 0x280);
      }
    }
    bVar4 = bVar10;
    if (uVar15 == 10) {
      bVar4 = true;
    }
    if (bVar4 == false) {
      FUN_02374304(param_1);
      uVar14 = FUN_02425918();
      if ((uVar14 & 1) == 0) {
        local_60 = (undefined *)CONCAT44(local_60._4_4_,0x43);
        local_64 = 0;
        if (*(long *)(param_1 + 0x70) != 0) {
          uVar15 = *(uint *)(*(long *)(param_1 + 0x70) + 0x280);
          local_64 = 0;
          if (uVar15 < 0x149) {
            local_64 = uVar15;
          }
        }
        if ((local_64 != 0x43) && (uVar14 = FUN_023201b8(param_1), (uVar14 & 1) == 0)) {
          local_60 = PTR_DAT_04bb2020 + 0x10;
          local_58 = "WHEREAREN_LessonEventStart";
          iVar13 = FUN_02753180(pbVar1,&local_60);
          if (iVar13 == 0) {
            return;
          }
        }
      }
    }
  }
LAB_0231cff4:
  uVar14 = FUN_0231fc94(param_1);
  if (((uVar14 & 1) == 0) &&
     ((plVar17 = *(long **)puVar8, plVar17 == (long *)0x0 || (*(byte *)(*plVar17 + 0x476) < 2)))) {
    uVar14 = FUN_02324acc(param_1);
    if ((uVar14 & 1) == 0) {
      return;
    }
    FUN_02374304(param_1);
    bVar11 = FUN_02425918();
    if (((param_2 | bVar10 | bVar11) & 1) == 0) {
      return;
    }
    uVar15 = *(uint *)(param_1 + 0x17cc) | 0x10000000;
LAB_0231d1ec:
    *(uint *)(param_1 + 0x17cc) = uVar15;
    return;
  }
  FUN_023240f4(param_1,bVar9);
  lVar16 = FUN_00a77090(pbVar1);
  puVar7 = PTR_DAT_04bb27c0;
  if ((lVar16 != 0) && (-1 < (int)*(uint *)PTR_DAT_04bb6260)) {
    uVar14 = 0;
    puVar21 = (uint *)PTR_DAT_04bb6258;
    do {
      puVar3 = puVar21;
      if (999 < uVar14) {
        puVar3 = (uint *)PTR_DAT_04bb6258;
      }
      if ((*puVar3 != 0) && (*(long *)(puVar3 + 2) == *(long *)(lVar16 + 0x10))) {
        if ((uint)uVar14 != 0xffffffff) {
          if (999 < (uint)uVar14) {
            puVar21 = (uint *)PTR_DAT_04bb6258;
          }
          local_64 = *puVar21;
          if ((local_64 != 0) && (lVar16 = *(long *)PTR_DAT_04bb27c0, lVar16 != 0)) {
            lVar18 = *(long *)(*(long *)(*(long *)(lVar16 + 0x1c0) + 8) +
                              ((ulong)(local_64 >> 0x11) & 0x7ff8));
            if ((lVar18 == 0) ||
               (((*(uint *)(lVar18 + 0x248) >> 1 & 1) != 0 ||
                (*(uint *)(lVar18 + 0x230) != local_64)))) {
              lVar18 = 0;
            }
            if ((*(int *)(lVar16 + 0x288) == 1) || (*(int *)(lVar16 + 0x288) == -1)) {
              plVar17 = (long *)nn::os::GetTlsValue(*(undefined4 *)
                                                     (*(long *)PTR_DAT_04bb3350 + 0x68));
              lVar16 = *(long *)puVar7;
              iVar13 = (**(code **)(*plVar17 + 0x60))();
              if ((iVar13 < 0x11) ||
                 ((*(uint *)(lVar16 + 0x5e8) < 5 &&
                  ((1 << (ulong)(*(uint *)(lVar16 + 0x5e8) & 0x1f) & 0x1aU) != 0)))) {
                if ((lVar18 != 0) && (*(int *)(lVar18 + 0x15c) == 0x3b)) {
                  FUN_02324cb4(&local_60,&local_64);
                  bVar9 = false;
                  if ((local_58._1_1_ != '\0') && (local_60 != (undefined *)0x0)) {
                    bVar9 = *(int *)(local_60 + 0x2a0) == 0x16;
                  }
                  goto LAB_0231d190;
                }
                break;
              }
            }
            bVar9 = false;
            goto LAB_0231d190;
          }
        }
        break;
      }
      uVar14 = uVar14 + 1;
      puVar21 = puVar21 + 4;
    } while ((ulong)*(uint *)PTR_DAT_04bb6260 + 1 != uVar14);
  }
  bVar9 = false;
LAB_0231d190:
  FUN_02324290(param_1);
  uVar14 = FUN_02324528(param_1);
  if (((uVar14 & 1) == 0) && (uVar14 = FUN_023247cc(param_1), (uVar14 & 1) == 0)) {
    if (*(long *)puVar6 == 0) {
      if ((DAT_054f08c8 & 1) == 0) {
        iVar13 = __cxa_guard_acquire(&DAT_054f08c8);
        puVar21 = &DAT_054f08c0;
        if (iVar13 != 0) {
          DAT_054f08c0 = 0;
          __cxa_guard_release(&DAT_054f08c8);
        }
      }
      else {
        puVar21 = &DAT_054f08c0;
      }
    }
    else {
      puVar21 = (uint *)(*(long *)puVar6 + 0x1fc);
    }
    local_60 = (undefined *)CONCAT44(local_60._4_4_,2);
    if (((*puVar21 >> 2 & 1) == 0) || (uVar14 = FUN_0253da50(pbVar1), (uVar14 & 1) == 0)) {
      bVar11 = FUN_0253e9ec();
      if ((bVar11 & 1) != 0) {
        FUN_0253ea50(pbVar1);
      }
      uVar14 = FUN_0252caac();
      if (((uVar14 & 1) == 0) ||
         (bVar12 = FUN_0253dfb0(pbVar1), ((bVar11 | bVar9 | bVar12 ^ 0xff) & 1) != 0)) {
        if ((1 < *(byte *)(**(long **)puVar8 + 0x476)) &&
           ((*(int *)(PTR_DAT_04bc3a78 + 0x38) == -0x2f1ac06c ||
            (*(int *)(PTR_DAT_04bc3a78 + 0x38) == -0x3f5c743d)))) {
          local_60 = PTR_DAT_04bb2020 + 0x10;
          local_58 = "TipsChatFlag";
          iVar13 = FUN_0274bce0(pbVar1,&local_60);
          if (iVar13 == 0) {
            FUN_0253e554(pbVar1);
            goto LAB_0231d364;
          }
        }
        uVar14 = FUN_0253ead0(pbVar1);
        if ((uVar14 & 1) == 0) {
          uVar14 = FUN_02372a04(param_1);
          if ((((uVar14 & 1) == 0) && (uVar14 = FUN_00a77290(pbVar1), (uVar14 & 1) == 0)) &&
             ((iVar13 = FUN_0255a1a8(*(undefined4 *)(param_1 + 0x180)), iVar13 == 5 || (iVar13 == 2)
              ))) {
            local_58 = (char *)((ulong)local_58 & 0xffffff0000000000);
            local_60 = (undefined *)0x1000000000006;
            FUN_02374564(param_1,&local_60);
          }
        }
        else {
          FUN_0253ebf4(pbVar1);
        }
      }
      else {
        FUN_0253dcc0(pbVar1);
      }
    }
    else {
      FUN_0253d7cc(pbVar1);
    }
  }
LAB_0231d364:
  puVar7 = PTR_DAT_04bc3a80;
  lVar16 = *(long *)PTR_DAT_04bb2720;
  if (lVar16 == 0) {
    puVar20 = &DAT_055c04a0;
  }
  else {
    puVar20 = &DAT_055c04a0;
    if (*(long *)(lVar16 + 0x330) != 0) {
      puVar20 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar16 + 0x338));
      iVar13 = FUN_006bd550(*puVar20,0);
      puVar20 = (undefined8 *)puVar7;
      if (iVar13 != 0x758f7eaf) {
        puVar20 = &DAT_055c04a0;
      }
    }
  }
  if (DAT_055c1b60 != &DAT_055c1b58) {
    uVar15 = 0;
    puVar19 = DAT_055c1b60;
    do {
      if (*(int *)(puVar19 + -1) == *(int *)(puVar20 + 7)) {
        if (((uVar15 ^ 0xffffffff) & 0xffff) != 0) goto LAB_0231d424;
        break;
      }
      puVar19 = (undefined8 *)puVar19[1];
      uVar15 = uVar15 + 1;
    } while (puVar19 != &DAT_055c1b58);
  }
  uVar15 = 0;
LAB_0231d424:
  uVar14 = FUN_016e6c20(uVar15);
  if ((uVar14 & 1) == 0) {
    local_60 = PTR_DAT_04bb2020 + 0x10;
    local_58 = "CanSetPlayerBirthdayCallNpc";
    iVar13 = FUN_02743000(&local_60);
    if (((iVar13 == 0) || (DAT_0540762c < 0)) &&
       ((*(byte *)(*(long *)PTR_DAT_04bb3968 + 0xd60) >> 1 & 1) == 0)) {
      if (*(long *)puVar6 == 0) {
        if ((DAT_054f08c8 & 1) == 0) {
          iVar13 = __cxa_guard_acquire(&DAT_054f08c8);
          puVar21 = &DAT_054f08c0;
          if (iVar13 != 0) {
            DAT_054f08c0 = 0;
            __cxa_guard_release(&DAT_054f08c8);
          }
        }
        else {
          puVar21 = &DAT_054f08c0;
        }
      }
      else {
        puVar21 = (uint *)(*(long *)puVar6 + 0x1fc);
      }
      *puVar21 = *puVar21 & 0xfffffffb;
    }
  }
  puVar6 = PTR_DAT_04bb2020;
  local_60 = PTR_DAT_04bb2020 + 0x10;
  local_58 = "StandByPhoneCallPrintService";
  iVar13 = FUN_0274bce0(pbVar1,&local_60);
  if (iVar13 == 0) {
    return;
  }
  if (*(int *)(puVar7 + 0x38) == 0x6622bd46) {
    local_60 = puVar6 + 0x10;
    local_58 = "PhoneCallPrintServiceDelayFlag";
    FUN_0274bfe8(pbVar1,&local_60,1);
    return;
  }
  return;
}


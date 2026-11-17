
void FUN_02c40604(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  char *pcVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 local_60;
  undefined8 local_58;
  undefined *local_50;
  undefined *local_48;
  undefined8 *puStack_40;
  undefined4 local_38;
  
  plVar6 = param_2 + 4;
  (**(code **)(*plVar6 + 0x18))(plVar6);
  (**(code **)(*plVar6 + 0x18))(plVar6);
  pcVar5 = (char *)param_2[5];
  if (pcVar5 == "") {
LAB_02c40664:
    if (((DAT_0565b220 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0565b220), iVar1 != 0)) {
      DAT_0565b180 = PTR_DAT_04bb2020 + 0x10;
      DAT_0565b188 = "MatchingModeIn";
      DAT_0565b198 = &DAT_0407ebb1;
      DAT_0565b1b8 = &DAT_0407ebb1;
      DAT_0565b1d8 = &DAT_0407ebb1;
      DAT_0565b1a8 = "MatchingModOut";
      DAT_0565b1c8 = "CastType";
      DAT_0565b1e8 = "ColorType";
      DAT_0565b1f8 = &DAT_0407ebb1;
      DAT_0565b208 = "PlayerType";
      DAT_0565b218 = &DAT_0407ebb1;
      DAT_0565b190 = DAT_0565b180;
      DAT_0565b1a0 = DAT_0565b180;
      DAT_0565b1b0 = DAT_0565b180;
      DAT_0565b1c0 = DAT_0565b180;
      DAT_0565b1d0 = DAT_0565b180;
      DAT_0565b1e0 = DAT_0565b180;
      DAT_0565b1f0 = DAT_0565b180;
      DAT_0565b200 = DAT_0565b180;
      DAT_0565b210 = DAT_0565b180;
      __cxa_guard_release(&DAT_0565b220);
    }
    if (((DAT_0565b238 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0565b238), iVar1 != 0)) {
      DAT_0565b228 = 0x500000002;
      DAT_0565b230 = &DAT_0565b180;
      __cxa_guard_release(&DAT_0565b238);
    }
    if (((DAT_0565b250 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0565b250), iVar1 != 0)) {
      DAT_0565b240 = PTR_DAT_04bb2020 + 0x10;
      DAT_0565b248 = "@T_Position_00";
      __cxa_guard_release(&DAT_0565b250);
    }
    if (((DAT_0565b278 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0565b278), iVar1 != 0)) {
      DAT_0565b258 = PTR_DAT_04bb2020 + 0x10;
      DAT_0565b260 = "N_BalloonPos_00";
      DAT_0565b270 = "N_Cast_00";
      DAT_0565b268 = DAT_0565b258;
      __cxa_guard_release(&DAT_0565b278);
    }
    if (param_2[1] == 0) {
      return;
    }
    local_58 = *param_2;
    local_48 = &DAT_04ab0788;
    puStack_40 = &DAT_0565b228;
    local_50 = &DAT_04ab0798;
    local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
    lVar4 = *(long *)(param_2[1] + 0x10);
    lVar2 = lVar4 + 0x200;
  }
  else {
    if (*pcVar5 == '/') {
      if (((pcVar5[1] == 'L') && (pcVar5[2] == '_')) &&
         ((((pcVar5[3] == 'C' &&
            ((((pcVar5[4] == 'a' && (pcVar5[5] == 's')) && (pcVar5[6] == 't')) &&
             ((pcVar5[7] == 'A' && (pcVar5[8] == '_')))))) &&
           ((pcVar5[9] == '0' &&
            (((((pcVar5[10] == '0' && (pcVar5[0xb] == '/')) &&
               ((pcVar5[0xc] == 'L' &&
                (((pcVar5[0xd] == '_' && (pcVar5[0xe] == 'C')) && (pcVar5[0xf] == 'a')))))) &&
              ((pcVar5[0x10] == 's' && (pcVar5[0x11] == 't')))) && (pcVar5[0x12] == '_')))))) ||
          (((((((pcVar5[3] == 'C' && (pcVar5[4] == 'a')) &&
               ((pcVar5[5] == 's' &&
                (((pcVar5[6] == 't' && (pcVar5[7] == 'B')) && (pcVar5[8] == '_')))))) &&
              (((pcVar5[9] == '0' && (pcVar5[10] == '0')) && (pcVar5[0xb] == '/')))) &&
             (((pcVar5[0xc] == 'L' && (pcVar5[0xd] == '_')) &&
              ((pcVar5[0xe] == 'C' &&
               ((((pcVar5[0xf] == 'a' && (pcVar5[0x10] == 's')) && (pcVar5[0x11] == 't')) &&
                (pcVar5[0x12] == '_')))))))) ||
            ((((pcVar5[3] == 'C' && (pcVar5[4] == 'a')) &&
              (((pcVar5[5] == 's' &&
                ((((pcVar5[6] == 't' && (pcVar5[7] == 'C')) &&
                  ((pcVar5[8] == '_' &&
                   (((pcVar5[9] == '0' && (pcVar5[10] == '0')) && (pcVar5[0xb] == '/')))))) &&
                 ((pcVar5[0xc] == 'L' && (pcVar5[0xd] == '_')))))) && (pcVar5[0xe] == 'C')))) &&
             (((pcVar5[0xf] == 'a' && (pcVar5[0x10] == 's')) &&
              ((pcVar5[0x11] == 't' && (pcVar5[0x12] == '_')))))))) ||
           ((((pcVar5[3] == 'C' && (pcVar5[4] == 'a')) && (pcVar5[5] == 's')) &&
            ((pcVar5[6] == 't' && (pcVar5[7] == '_')))))))))) {
        puVar7 = (undefined8 *)param_2[1];
        if (((*PTR_DAT_04bc4e40 & 1) == 0) &&
           (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4e40), iVar1 != 0)) {
          *(undefined **)PTR_DAT_04bc4e38 = PTR_DAT_04bc4e48 + 0x10;
          __cxa_guard_release(PTR_DAT_04bc4e40);
        }
        if ((puVar7 != (undefined8 *)0x0) &&
           (uVar3 = (**(code **)*puVar7)(puVar7,PTR_DAT_04bc4e38), (uVar3 & 1) != 0)) {
          if (((DAT_0565b300 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0565b300), iVar1 != 0))
          {
            DAT_0565b280 = PTR_DAT_04bb2020 + 0x10;
            DAT_0565b288 = "MatchingModeIn";
            DAT_0565b298 = &DAT_0407ebb1;
            DAT_0565b2b8 = &DAT_0407ebb1;
            DAT_0565b2d8 = &DAT_0407ebb1;
            DAT_0565b2a8 = "MatchingModeDecide";
            DAT_0565b2c8 = "MatchingModeOut";
            DAT_0565b2e8 = "CheckType";
            DAT_0565b2f8 = &DAT_0407ebb1;
            DAT_0565b290 = DAT_0565b280;
            DAT_0565b2a0 = DAT_0565b280;
            DAT_0565b2b0 = DAT_0565b280;
            DAT_0565b2c0 = DAT_0565b280;
            DAT_0565b2d0 = DAT_0565b280;
            DAT_0565b2e0 = DAT_0565b280;
            DAT_0565b2f0 = DAT_0565b280;
            __cxa_guard_release(&DAT_0565b300);
          }
          if (((DAT_0565b318 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0565b318), iVar1 != 0))
          {
            DAT_0565b308 = 0x400000002;
            DAT_0565b310 = &DAT_0565b280;
            __cxa_guard_release(&DAT_0565b318);
          }
          if (((DAT_0565b340 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0565b340), iVar1 != 0))
          {
            DAT_0565b320 = PTR_DAT_04bb2020 + 0x10;
            DAT_0565b328 = "N_Model_00";
            DAT_0565b338 = "N_CmnSubWin_00";
            DAT_0565b330 = DAT_0565b320;
            __cxa_guard_release(&DAT_0565b340);
          }
          local_58 = *param_2;
          local_48 = (undefined *)0x0;
          puStack_40 = &DAT_0565b308;
          local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
          local_50 = &DAT_04ab07a8;
          lVar4 = puVar7[2];
          lVar2 = lVar4 + 0x2c8;
          goto LAB_02c406ec;
        }
      }
    }
    else if (*pcVar5 == '\0') goto LAB_02c40664;
    pcVar5 = (char *)param_2[5];
    if (*pcVar5 != '/') {
      return;
    }
    if (pcVar5[1] != 'L') {
      return;
    }
    if (pcVar5[2] != '_') {
      return;
    }
    if ((((((pcVar5[3] != 'C') || (pcVar5[4] != 'a')) || (pcVar5[5] != 's')) ||
         ((pcVar5[6] != 't' || (pcVar5[7] != 'A')))) || (pcVar5[8] != '_')) &&
       (((pcVar5[3] != 'C' || (pcVar5[4] != 'a')) ||
        ((pcVar5[5] != 's' || (((pcVar5[6] != 't' || (pcVar5[7] != 'B')) || (pcVar5[8] != '_')))))))
       ) {
      if (pcVar5[3] != 'C') {
        return;
      }
      if (pcVar5[4] != 'a') {
        return;
      }
      if (pcVar5[5] != 's') {
        return;
      }
      if (pcVar5[6] != 't') {
        return;
      }
      if (pcVar5[7] != 'C') {
        return;
      }
      if (pcVar5[8] != '_') {
        return;
      }
    }
    puVar7 = (undefined8 *)param_2[1];
    if (((*PTR_DAT_04bc4ff0 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4ff0), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bc4fe8 = PTR_DAT_04bc4e48 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4ff0);
    }
    if (puVar7 == (undefined8 *)0x0) {
      return;
    }
    uVar3 = (**(code **)*puVar7)(puVar7,PTR_DAT_04bc4fe8);
    if ((uVar3 & 1) == 0) {
      return;
    }
    if (((DAT_0565b3c8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0565b3c8), iVar1 != 0)) {
      DAT_0565b348 = PTR_DAT_04bb2020 + 0x10;
      DAT_0565b350 = "NumberType";
      DAT_0565b360 = &DAT_0407ebb1;
      DAT_0565b380 = &DAT_0407ebb1;
      DAT_0565b3a0 = &DAT_0407ebb1;
      DAT_0565b370 = "BeltType";
      DAT_0565b390 = "JobType";
      DAT_0565b3b0 = "ColorType";
      DAT_0565b3c0 = &DAT_0407ebb1;
      DAT_0565b358 = DAT_0565b348;
      DAT_0565b368 = DAT_0565b348;
      DAT_0565b378 = DAT_0565b348;
      DAT_0565b388 = DAT_0565b348;
      DAT_0565b398 = DAT_0565b348;
      DAT_0565b3a8 = DAT_0565b348;
      DAT_0565b3b8 = DAT_0565b348;
      __cxa_guard_release(&DAT_0565b3c8);
    }
    if (((DAT_0565b3e0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0565b3e0), iVar1 != 0)) {
      DAT_0565b3d0 = 0x400000002;
      DAT_0565b3d8 = &DAT_0565b348;
      __cxa_guard_release(&DAT_0565b3e0);
    }
    if (((DAT_0565b3f8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0565b3f8), iVar1 != 0)) {
      DAT_0565b3e8 = PTR_DAT_04bb2020 + 0x10;
      DAT_0565b3f0 = "@T_Position_00";
      __cxa_guard_release(&DAT_0565b3f8);
    }
    local_50 = (undefined *)0x0;
    local_48 = &DAT_04ab07b8;
    puStack_40 = &DAT_0565b3d0;
    lVar4 = puVar7[2];
    local_58 = *param_2;
    local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
    lVar2 = lVar4 + 0x208;
  }
LAB_02c406ec:
  local_38 = 0;
  FUN_0386e230(lVar2,lVar4,&local_60);
  return;
}


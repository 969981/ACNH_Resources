
void FUN_02e11b5c(undefined8 param_1,undefined8 *param_2)

{
  char cVar1;
  undefined *puVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  char *pcVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined *local_70;
  char *local_68;
  undefined *local_60;
  undefined *local_58;
  undefined8 *puStack_50;
  undefined4 local_48;
  
  plVar10 = param_2 + 4;
  (**(code **)(*plVar10 + 0x18))(plVar10);
  (**(code **)(*plVar10 + 0x18))(plVar10);
  puVar2 = PTR_DAT_04bb2020;
  pcVar8 = (char *)param_2[5];
  if (pcVar8 == "") {
LAB_02e11bc0:
    if (((DAT_056923e0 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_056923e0), iVar4 != 0)) {
      DAT_05692380 = PTR_DAT_04bb2020 + 0x10;
      DAT_05692388 = "NumType";
      DAT_05692398 = &DAT_0407ebb1;
      DAT_056923b8 = &DAT_0407ebb1;
      DAT_056923d8 = &DAT_0407ebb1;
      DAT_056923a8 = "StopLandom";
      DAT_056923c8 = "Empty";
      DAT_05692390 = DAT_05692380;
      DAT_056923a0 = DAT_05692380;
      DAT_056923b0 = DAT_05692380;
      DAT_056923c0 = DAT_05692380;
      DAT_056923d0 = DAT_05692380;
      __cxa_guard_release(&DAT_056923e0);
    }
    if (((DAT_056923f8 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_056923f8), iVar4 != 0)) {
      DAT_056923e8 = 0x300000002;
      DAT_056923f0 = &DAT_05692380;
      __cxa_guard_release(&DAT_056923f8);
    }
    if (((DAT_05692440 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_05692440), iVar4 != 0)) {
      DAT_05692400 = PTR_DAT_04bb2020 + 0x10;
      DAT_05692408 = "@T_Empty_00";
      DAT_05692438 = "@T_Text_00";
      DAT_05692418 = "@T_Num_00";
      DAT_05692428 = "@T_NeedNum_00";
      DAT_05692410 = DAT_05692400;
      DAT_05692420 = DAT_05692400;
      DAT_05692430 = DAT_05692400;
      __cxa_guard_release(&DAT_05692440);
    }
    if (param_2[1] == 0) {
      return;
    }
    local_48 = 0;
    local_58 = &DAT_04acfeb0;
    puStack_50 = &DAT_056923e8;
    local_60 = (undefined *)0x0;
    local_68 = (char *)*param_2;
    lVar6 = *(long *)(param_2[1] + 0x10);
    local_70 = *(undefined **)PTR_PTR_04bc4e50;
    lVar7 = lVar6 + 0x200;
    goto LAB_02e11c30;
  }
  if (*pcVar8 == '/') {
    if ((((((pcVar8[1] == 'L') && (pcVar8[2] == '_')) && (pcVar8[3] == 'B')) &&
         ((pcVar8[4] == 't' && (pcVar8[5] == 'n')))) &&
        ((((pcVar8[6] == 'L' && ((pcVar8[7] == 'i' && (pcVar8[8] == 's')))) && (pcVar8[9] == 't'))
         && ((((pcVar8[10] == '_' && (pcVar8[0xb] == '0')) && (pcVar8[0xc] == '0')) &&
             (((pcVar8[0xd] == '/' && (pcVar8[0xe] == 'L')) &&
              ((pcVar8[0xf] == '_' && ((pcVar8[0x10] == 'B' && (pcVar8[0x11] == 't')))))))))))) &&
       ((pcVar8[0x12] == 'n' && (pcVar8[0x13] == '_')))) {
      local_70 = PTR_DAT_04bb2020 + 0x10;
      local_68 = "/L_NpcIcon_";
      (**(code **)(param_2[4] + 0x18))(plVar10);
      lVar7 = 0;
      do {
        if (*(char *)(param_2[5] + lVar7) == '\0') {
LAB_02e11e9c:
          if (10 < (int)lVar7) {
            uVar5 = 0;
            goto LAB_02e11eb4;
          }
          break;
        }
        lVar6 = param_2[5] + lVar7;
        if (*(char *)(lVar6 + 1) == '\0') {
          lVar7 = lVar7 + 1;
          goto LAB_02e11e9c;
        }
        if (*(char *)(lVar6 + 2) == '\0') {
          lVar7 = lVar7 + 2;
          goto LAB_02e11e9c;
        }
        lVar7 = lVar7 + 3;
      } while (lVar7 != 0x80001);
    }
  }
  else if (*pcVar8 == '\0') goto LAB_02e11bc0;
  goto LAB_02e11fa0;
  while( true ) {
    lVar9 = 0;
    while (cVar1 = ((char *)(lVar6 + uVar5))[lVar9], cVar1 == local_68[lVar9]) {
      if ((cVar1 == '\0') || (bVar3 = lVar9 == 10, lVar9 = lVar9 + 1, bVar3)) goto LAB_02e11f10;
    }
    uVar5 = uVar5 + 1;
    if (uVar5 == (int)lVar7 - 10) break;
LAB_02e11eb4:
    lVar6 = param_2[5];
    (**(code **)(local_70 + 0x18))(&local_70);
    if ((char *)(lVar6 + uVar5) == local_68) {
LAB_02e11f10:
      if ((int)uVar5 != -1) {
        puVar11 = (undefined8 *)param_2[1];
        if (((*PTR_DAT_04bc4ff0 & 1) == 0) &&
           (iVar4 = __cxa_guard_acquire(PTR_DAT_04bc4ff0), iVar4 != 0)) {
          *(undefined **)PTR_DAT_04bc4fe8 = PTR_DAT_04bc4e48 + 0x10;
          __cxa_guard_release(PTR_DAT_04bc4ff0);
        }
        if ((puVar11 != (undefined8 *)0x0) &&
           (uVar5 = (**(code **)*puVar11)(puVar11,PTR_DAT_04bc4fe8), (uVar5 & 1) != 0)) {
          if (((DAT_05692458 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_05692458), iVar4 != 0))
          {
            DAT_05692448 = puVar2 + 0x10;
            DAT_05692450 = "P_Icon_00";
            __cxa_guard_release(&DAT_05692458);
          }
          local_68 = (char *)*param_2;
          local_58 = (undefined *)0x0;
          puStack_50 = (undefined8 *)0x0;
          local_48 = 1;
          local_60 = &DAT_04acfec0;
          local_70 = *(undefined **)PTR_PTR_04bc4e50;
          lVar6 = puVar11[2];
          lVar7 = lVar6 + 0x208;
          goto LAB_02e11c30;
        }
      }
      break;
    }
  }
LAB_02e11fa0:
  pcVar8 = (char *)param_2[5];
  if (*pcVar8 != '/') {
    return;
  }
  if (pcVar8[1] != 'L') {
    return;
  }
  if (pcVar8[2] != '_') {
    return;
  }
  if (pcVar8[3] != 'B') {
    return;
  }
  if (pcVar8[4] != 't') {
    return;
  }
  if (pcVar8[5] != 'n') {
    return;
  }
  if (pcVar8[6] != 'L') {
    return;
  }
  if (pcVar8[7] != 'i') {
    return;
  }
  if (pcVar8[8] != 's') {
    return;
  }
  if (pcVar8[9] != 't') {
    return;
  }
  if (pcVar8[10] != '_') {
    return;
  }
  if (pcVar8[0xb] != '0') {
    return;
  }
  if (pcVar8[0xc] != '0') {
    return;
  }
  if (pcVar8[0xd] != '/') {
    return;
  }
  if (pcVar8[0xe] != 'L') {
    return;
  }
  if (pcVar8[0xf] != '_') {
    return;
  }
  if (pcVar8[0x10] != 'B') {
    return;
  }
  if (pcVar8[0x11] != 't') {
    return;
  }
  if (pcVar8[0x12] != 'n') {
    return;
  }
  if (pcVar8[0x13] != '_') {
    return;
  }
  puVar11 = (undefined8 *)param_2[1];
  if (((*PTR_DAT_04bc4e40 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04bc4e40), iVar4 != 0))
  {
    *(undefined **)PTR_DAT_04bc4e38 = PTR_DAT_04bc4e48 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4e40);
  }
  if (puVar11 == (undefined8 *)0x0) {
    return;
  }
  uVar5 = (**(code **)*puVar11)(puVar11,PTR_DAT_04bc4e38);
  if ((uVar5 & 1) == 0) {
    return;
  }
  if (((DAT_056924a0 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_056924a0), iVar4 != 0)) {
    DAT_05692460 = PTR_DAT_04bb2020 + 0x10;
    DAT_05692468 = "NPCIconsStep";
    DAT_05692478 = &DAT_0407ebb1;
    DAT_05692498 = &DAT_0407ebb1;
    DAT_05692488 = "OtherPlayer";
    DAT_05692470 = DAT_05692460;
    DAT_05692480 = DAT_05692460;
    DAT_05692490 = DAT_05692460;
    __cxa_guard_release(&DAT_056924a0);
  }
  if (((DAT_056924b8 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_056924b8), iVar4 != 0)) {
    DAT_056924a8 = 0x200000002;
    DAT_056924b0 = &DAT_05692460;
    __cxa_guard_release(&DAT_056924b8);
  }
  if (((DAT_05692520 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_05692520), iVar4 != 0)) {
    DAT_056924c0 = PTR_DAT_04bb2020 + 0x10;
    DAT_056924c8 = "@T_Name_00";
    DAT_056924e8 = "@T_Hemisphere_00";
    DAT_056924d8 = "@T_Date_00";
    DAT_056924f8 = "@T_OtherPlayer_00";
    DAT_05692508 = "@T_IslandName_00";
    DAT_05692518 = "@T_DreamID_00";
    DAT_056924d0 = DAT_056924c0;
    DAT_056924e0 = DAT_056924c0;
    DAT_056924f0 = DAT_056924c0;
    DAT_05692500 = DAT_056924c0;
    DAT_05692510 = DAT_056924c0;
    __cxa_guard_release(&DAT_05692520);
  }
  local_48 = 0;
  local_60 = (undefined *)0x0;
  local_58 = &DAT_04acfed0;
  puStack_50 = &DAT_056924a8;
  lVar6 = puVar11[2];
  local_68 = (char *)*param_2;
  local_70 = *(undefined **)PTR_PTR_04bc4e50;
  lVar7 = lVar6 + 0x2c8;
LAB_02e11c30:
  FUN_0386e230(lVar7,lVar6,&local_70);
  return;
}


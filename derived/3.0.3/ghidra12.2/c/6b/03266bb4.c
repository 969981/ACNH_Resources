
void FUN_03266bb4(undefined8 param_1,undefined8 *param_2)

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
  undefined *puStack_50;
  undefined *local_48;
  undefined8 *puStack_40;
  undefined4 local_38;
  
  plVar6 = param_2 + 4;
  (**(code **)(*plVar6 + 0x18))(plVar6);
  (**(code **)(*plVar6 + 0x18))(plVar6);
  pcVar5 = (char *)param_2[5];
  if (pcVar5 == "") {
LAB_03266c14:
    if (((DAT_057271e0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_057271e0), iVar1 != 0)) {
      DAT_05727120 = PTR_DAT_04bb2020 + 0x10;
      DAT_05727128 = "NumType";
      DAT_05727138 = &DAT_0407ebb1;
      DAT_05727158 = &DAT_0407ebb1;
      DAT_05727178 = &DAT_0407ebb1;
      DAT_05727148 = "Share";
      DAT_05727168 = "CategoryNum";
      DAT_05727188 = "CategorySOnOff";
      DAT_057271a8 = "CategoryNumS";
      DAT_05727198 = &DAT_0407ebb1;
      DAT_057271b8 = &DAT_0407ebb1;
      DAT_057271c8 = "ChangeScrollType";
      DAT_057271d8 = &DAT_0407ebb1;
      DAT_05727130 = DAT_05727120;
      DAT_05727140 = DAT_05727120;
      DAT_05727150 = DAT_05727120;
      DAT_05727160 = DAT_05727120;
      DAT_05727170 = DAT_05727120;
      DAT_05727180 = DAT_05727120;
      DAT_05727190 = DAT_05727120;
      DAT_057271a0 = DAT_05727120;
      DAT_057271b0 = DAT_05727120;
      DAT_057271c0 = DAT_05727120;
      DAT_057271d0 = DAT_05727120;
      __cxa_guard_release(&DAT_057271e0);
    }
    if (((DAT_057271f8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_057271f8), iVar1 != 0)) {
      DAT_057271e8 = 0x600000002;
      DAT_057271f0 = &DAT_05727120;
      __cxa_guard_release(&DAT_057271f8);
    }
    if (((DAT_05727260 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05727260), iVar1 != 0)) {
      DAT_05727200 = PTR_DAT_04bb2020 + 0x10;
      DAT_05727208 = "@T_L_00";
      DAT_05727228 = "@T_Num_00";
      DAT_05727218 = "@T_R_00";
      DAT_05727238 = "@T_Slash_00";
      DAT_05727248 = "@T_TotalNum_00";
      DAT_05727258 = "@T_Icon_00";
      DAT_05727210 = DAT_05727200;
      DAT_05727220 = DAT_05727200;
      DAT_05727230 = DAT_05727200;
      DAT_05727240 = DAT_05727200;
      DAT_05727250 = DAT_05727200;
      __cxa_guard_release(&DAT_05727260);
    }
    if (((DAT_05727288 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05727288), iVar1 != 0)) {
      DAT_05727268 = PTR_DAT_04bb2020 + 0x10;
      DAT_05727270 = "N_Pos_00";
      DAT_05727280 = "P_Icon_00";
      DAT_05727278 = DAT_05727268;
      __cxa_guard_release(&DAT_05727288);
    }
    if (param_2[1] == 0) {
      return;
    }
    local_58 = *param_2;
    local_48 = &DAT_04b15fb8;
    puStack_40 = &DAT_057271e8;
    puStack_50 = &DAT_04b15fc8;
    local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
    lVar4 = *(long *)(param_2[1] + 0x10);
    lVar2 = lVar4 + 0x200;
  }
  else {
    if (*pcVar5 == '/') {
      if (((((((pcVar5[1] == 'L') && (pcVar5[2] == '_')) && (pcVar5[3] == 'B')) &&
            ((pcVar5[4] == 't' && (pcVar5[5] == 'n')))) &&
           (((pcVar5[6] == 'L' && ((pcVar5[7] == 'i' && (pcVar5[8] == 's')))) && (pcVar5[9] == 't'))
           )) && ((((pcVar5[10] == '_' && (pcVar5[0xb] == '0')) && (pcVar5[0xc] == '0')) &&
                  (((pcVar5[0xd] == '/' && (pcVar5[0xe] == 'L')) &&
                   ((pcVar5[0xf] == '_' && ((pcVar5[0x10] == 'B' && (pcVar5[0x11] == 't'))))))))))
         && ((pcVar5[0x12] == 'n' && (pcVar5[0x13] == '_')))) {
        puVar7 = (undefined8 *)param_2[1];
        if (((*PTR_DAT_04bc4e40 & 1) == 0) &&
           (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4e40), iVar1 != 0)) {
          *(undefined **)PTR_DAT_04bc4e38 = PTR_DAT_04bc4e48 + 0x10;
          __cxa_guard_release(PTR_DAT_04bc4e40);
        }
        if ((puVar7 != (undefined8 *)0x0) &&
           (uVar3 = (**(code **)*puVar7)(puVar7,PTR_DAT_04bc4e38), (uVar3 & 1) != 0)) {
          if (((DAT_05727370 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05727370), iVar1 != 0))
          {
            DAT_05727290 = PTR_DAT_04bb2020 + 0x10;
            DAT_05727298 = "BtnListRandom";
            DAT_057272a8 = &DAT_0407ebb1;
            DAT_057272c8 = &DAT_0407ebb1;
            DAT_057272e8 = &DAT_0407ebb1;
            DAT_057272b8 = &DAT_040a0741;
            DAT_057272d8 = "IconOff";
            DAT_057272f8 = &DAT_040fe5ab;
            DAT_05727318 = "EditType";
            DAT_05727338 = "WallType";
            DAT_05727308 = &DAT_0407ebb1;
            DAT_05727328 = &DAT_0407ebb1;
            DAT_05727348 = &DAT_0407ebb1;
            DAT_05727358 = "BtnType";
            DAT_05727368 = &DAT_0407ebb1;
            DAT_057272a0 = DAT_05727290;
            DAT_057272b0 = DAT_05727290;
            DAT_057272c0 = DAT_05727290;
            DAT_057272d0 = DAT_05727290;
            DAT_057272e0 = DAT_05727290;
            DAT_057272f0 = DAT_05727290;
            DAT_05727300 = DAT_05727290;
            DAT_05727310 = DAT_05727290;
            DAT_05727320 = DAT_05727290;
            DAT_05727330 = DAT_05727290;
            DAT_05727340 = DAT_05727290;
            DAT_05727350 = DAT_05727290;
            DAT_05727360 = DAT_05727290;
            __cxa_guard_release(&DAT_05727370);
          }
          if (((DAT_05727388 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05727388), iVar1 != 0))
          {
            DAT_05727378 = 0x700000002;
            DAT_05727380 = &DAT_05727290;
            __cxa_guard_release(&DAT_05727388);
          }
          if (((DAT_057273a0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_057273a0), iVar1 != 0))
          {
            DAT_05727390 = PTR_DAT_04bb2020 + 0x10;
            DAT_05727398 = "@T_Num_00";
            __cxa_guard_release(&DAT_057273a0);
          }
          if (((DAT_057273b8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_057273b8), iVar1 != 0))
          {
            DAT_057273a8 = PTR_DAT_04bb2020 + 0x10;
            DAT_057273b0 = "P_Icon_00";
            __cxa_guard_release(&DAT_057273b8);
          }
          local_58 = *param_2;
          local_48 = &DAT_04b15fd8;
          puStack_40 = &DAT_05727378;
          local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
          puStack_50 = &DAT_04b15fe8;
          lVar4 = puVar7[2];
          lVar2 = lVar4 + 0x2c8;
          goto LAB_03266ca0;
        }
      }
    }
    else if (*pcVar5 == '\0') goto LAB_03266c14;
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
    if (pcVar5[3] != 'G') {
      return;
    }
    if (pcVar5[4] != 'e') {
      return;
    }
    if (pcVar5[5] != 'n') {
      return;
    }
    if (pcVar5[6] != 'r') {
      return;
    }
    if (pcVar5[7] != 'e') {
      return;
    }
    if (pcVar5[8] != '_') {
      return;
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
    if (((DAT_057273e0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_057273e0), iVar1 != 0)) {
      DAT_057273c0 = PTR_DAT_04bb2020 + 0x10;
      DAT_057273c8 = "Select";
      DAT_057273d8 = &DAT_0407ebb1;
      DAT_057273d0 = DAT_057273c0;
      __cxa_guard_release(&DAT_057273e0);
    }
    if (((DAT_057273f8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_057273f8), iVar1 != 0)) {
      DAT_057273e8 = 0x100000002;
      DAT_057273f0 = &DAT_057273c0;
      __cxa_guard_release(&DAT_057273f8);
    }
    if (((DAT_05727410 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05727410), iVar1 != 0)) {
      DAT_05727400 = PTR_DAT_04bb2020 + 0x10;
      DAT_05727408 = "@T_Key_00";
      __cxa_guard_release(&DAT_05727410);
    }
    if (((DAT_05727428 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05727428), iVar1 != 0)) {
      DAT_05727418 = PTR_DAT_04bb2020 + 0x10;
      DAT_05727420 = "P_Icon_00";
      __cxa_guard_release(&DAT_05727428);
    }
    local_58 = *param_2;
    local_48 = &DAT_04b15ff8;
    puStack_40 = &DAT_057273e8;
    local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
    puStack_50 = &DAT_04b16008;
    lVar4 = puVar7[2];
    lVar2 = lVar4 + 0x208;
  }
LAB_03266ca0:
  local_38 = 1;
  FUN_0386e230(lVar2,lVar4,&local_60);
  return;
}


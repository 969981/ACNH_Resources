
void FUN_0357d47c(undefined8 param_1,undefined8 *param_2)

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
LAB_0357d4dc:
    if (((DAT_05771040 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05771040), iVar1 != 0)) {
      DAT_05770fc0 = PTR_DAT_04bb2020 + 0x10;
      DAT_05770fc8 = "CategoryNum";
      DAT_05770fd8 = &DAT_0407ebb1;
      DAT_05770ff8 = &DAT_0407ebb1;
      DAT_05771018 = &DAT_0407ebb1;
      DAT_05770fe8 = "Share";
      DAT_05771008 = &DAT_040fe5ab;
      DAT_05771028 = "MyDesignType";
      DAT_05771038 = &DAT_0407ebb1;
      DAT_05770fd0 = DAT_05770fc0;
      DAT_05770fe0 = DAT_05770fc0;
      DAT_05770ff0 = DAT_05770fc0;
      DAT_05771000 = DAT_05770fc0;
      DAT_05771010 = DAT_05770fc0;
      DAT_05771020 = DAT_05770fc0;
      DAT_05771030 = DAT_05770fc0;
      __cxa_guard_release(&DAT_05771040);
    }
    if (((DAT_05771058 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05771058), iVar1 != 0)) {
      DAT_05771048 = 0x400000002;
      DAT_05771050 = &DAT_05770fc0;
      __cxa_guard_release(&DAT_05771058);
    }
    if (((DAT_05771080 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05771080), iVar1 != 0)) {
      DAT_05771060 = PTR_DAT_04bb2020 + 0x10;
      DAT_05771068 = "@T_L_00";
      DAT_05771078 = "@T_R_00";
      DAT_05771070 = DAT_05771060;
      __cxa_guard_release(&DAT_05771080);
    }
    if (((DAT_05771098 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05771098), iVar1 != 0)) {
      DAT_05771088 = PTR_DAT_04bb2020 + 0x10;
      DAT_05771090 = "N_SubWin_00";
      __cxa_guard_release(&DAT_05771098);
    }
    if (param_2[1] == 0) {
      return;
    }
    local_58 = *param_2;
    local_48 = &DAT_04b3ca60;
    puStack_40 = &DAT_05771048;
    local_38 = 0;
    local_50 = &DAT_04b3ca70;
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
          if (((DAT_057710e0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_057710e0), iVar1 != 0))
          {
            DAT_057710a0 = PTR_DAT_04bb2020 + 0x10;
            DAT_057710a8 = "Check";
            DAT_057710b8 = &DAT_0407ebb1;
            DAT_057710d8 = &DAT_0407ebb1;
            DAT_057710c8 = "CheckIconType";
            DAT_057710b0 = DAT_057710a0;
            DAT_057710c0 = DAT_057710a0;
            DAT_057710d0 = DAT_057710a0;
            __cxa_guard_release(&DAT_057710e0);
          }
          if (((DAT_057710f8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_057710f8), iVar1 != 0))
          {
            DAT_057710e8 = 0x200000002;
            DAT_057710f0 = &DAT_057710a0;
            __cxa_guard_release(&DAT_057710f8);
          }
          if (((DAT_05771110 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05771110), iVar1 != 0))
          {
            DAT_05771100 = PTR_DAT_04bb2020 + 0x10;
            DAT_05771108 = "P_Tex_00";
            __cxa_guard_release(&DAT_05771110);
          }
          local_58 = *param_2;
          local_48 = (undefined *)0x0;
          puStack_40 = &DAT_057710e8;
          local_38 = 1;
          local_50 = &DAT_04b3ca80;
          local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
          lVar4 = puVar7[2];
          lVar2 = lVar4 + 0x2c8;
          goto LAB_0357d564;
        }
      }
    }
    else if (*pcVar5 == '\0') goto LAB_0357d4dc;
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
    if (pcVar5[3] != 'M') {
      return;
    }
    if (pcVar5[4] != 'y') {
      return;
    }
    if (pcVar5[5] != 'D') {
      return;
    }
    if (pcVar5[6] != 'e') {
      return;
    }
    if (pcVar5[7] != 's') {
      return;
    }
    if (pcVar5[8] != 'i') {
      return;
    }
    if (pcVar5[9] != 'g') {
      return;
    }
    if (pcVar5[10] != 'n') {
      return;
    }
    if (pcVar5[0xb] != 'S') {
      return;
    }
    if (pcVar5[0xc] != 'w') {
      return;
    }
    if (pcVar5[0xd] != 'i') {
      return;
    }
    if (pcVar5[0xe] != 't') {
      return;
    }
    if (pcVar5[0xf] != 'c') {
      return;
    }
    if (pcVar5[0x10] != 'h') {
      return;
    }
    if (pcVar5[0x11] != '_') {
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
    if (((DAT_05771158 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05771158), iVar1 != 0)) {
      DAT_05771118 = PTR_DAT_04bb2020 + 0x10;
      DAT_05771120 = "Decide";
      DAT_05771130 = &DAT_0407ebb1;
      DAT_05771150 = &DAT_0407ebb1;
      DAT_05771140 = "Share";
      DAT_05771128 = DAT_05771118;
      DAT_05771138 = DAT_05771118;
      DAT_05771148 = DAT_05771118;
      __cxa_guard_release(&DAT_05771158);
    }
    if (((DAT_05771170 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05771170), iVar1 != 0)) {
      DAT_05771160 = 0x200000002;
      DAT_05771168 = &DAT_05771118;
      __cxa_guard_release(&DAT_05771170);
    }
    if (((DAT_05771188 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05771188), iVar1 != 0)) {
      DAT_05771178 = PTR_DAT_04bb2020 + 0x10;
      DAT_05771180 = "@T_Icon_00";
      __cxa_guard_release(&DAT_05771188);
    }
    local_38 = 0;
    local_50 = (undefined *)0x0;
    local_48 = &DAT_04b3ca90;
    puStack_40 = &DAT_05771160;
    lVar4 = puVar7[2];
    local_58 = *param_2;
    local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
    lVar2 = lVar4 + 0x208;
  }
LAB_0357d564:
  FUN_0386e230(lVar2,lVar4,&local_60);
  return;
}


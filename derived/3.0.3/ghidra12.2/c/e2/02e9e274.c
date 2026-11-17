
void FUN_02e9e274(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  char *pcVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined *local_50;
  undefined *local_48;
  undefined8 *local_40;
  undefined4 local_38;
  
  plVar6 = param_2 + 4;
  (**(code **)(*plVar6 + 0x18))(plVar6);
  (**(code **)(*plVar6 + 0x18))(plVar6);
  pcVar5 = (char *)param_2[5];
  if (pcVar5 == "") {
LAB_02e9e2d4:
    if (((DAT_056a3310 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056a3310), iVar1 != 0)) {
      DAT_056a32f0 = PTR_DAT_04bb2020 + 0x10;
      DAT_056a32f8 = "Small";
      DAT_056a3308 = &DAT_0407ebb1;
      DAT_056a3300 = DAT_056a32f0;
      __cxa_guard_release(&DAT_056a3310);
    }
    if (((DAT_056a3328 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056a3328), iVar1 != 0)) {
      DAT_056a3318 = 0x100000002;
      DAT_056a3320 = &DAT_056a32f0;
      __cxa_guard_release(&DAT_056a3328);
    }
    if (((DAT_056a3340 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056a3340), iVar1 != 0)) {
      DAT_056a3330 = PTR_DAT_04bb2020 + 0x10;
      DAT_056a3338 = "@T_Text_00";
      __cxa_guard_release(&DAT_056a3340);
    }
    if (param_2[1] == 0) {
      return;
    }
    local_38 = 0;
    local_48 = &DAT_04adb0e0;
    local_40 = &DAT_056a3318;
    local_50 = (undefined *)0x0;
    uStack_58 = *param_2;
    lVar4 = *(long *)(param_2[1] + 0x10);
    local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
    lVar2 = lVar4 + 0x200;
    goto LAB_02e9e344;
  }
  if (*pcVar5 == '/') {
    if (((((((pcVar5[1] != 'L') || (pcVar5[2] != '_')) || (pcVar5[3] != 'B')) ||
          ((pcVar5[4] != 't' || (pcVar5[5] != 'n')))) ||
         (((pcVar5[6] != 'L' || ((pcVar5[7] != 'i' || (pcVar5[8] != 's')))) || (pcVar5[9] != 't'))))
        || ((((pcVar5[10] != '_' || (pcVar5[0xb] != '0')) || (pcVar5[0xc] != '0')) ||
            (((pcVar5[0xd] != '/' || (pcVar5[0xe] != 'L')) ||
             ((pcVar5[0xf] != '_' || ((pcVar5[0x10] != 'B' || (pcVar5[0x11] != 't')))))))))) ||
       ((pcVar5[0x12] != 'n' || (pcVar5[0x13] != '_')))) goto LAB_02e9e4bc;
    puVar7 = (undefined8 *)param_2[1];
    if (((*PTR_DAT_04bc4e40 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4e40), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bc4e38 = PTR_DAT_04bc4e48 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4e40);
    }
    if ((puVar7 == (undefined8 *)0x0) ||
       (uVar3 = (**(code **)*puVar7)(puVar7,PTR_DAT_04bc4e38), (uVar3 & 1) == 0)) goto LAB_02e9e4bc;
    if (((DAT_056a3358 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056a3358), iVar1 != 0)) {
      DAT_056a3348 = PTR_DAT_04bb2020 + 0x10;
      DAT_056a3350 = "@T_Theme_00";
      __cxa_guard_release(&DAT_056a3358);
    }
    if (((DAT_056a3370 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056a3370), iVar1 != 0)) {
      DAT_056a3360 = PTR_DAT_04bb2020 + 0x10;
      DAT_056a3368 = "P_Icon_00";
      __cxa_guard_release(&DAT_056a3370);
    }
    local_48 = &DAT_04adb0f0;
    uStack_58 = *param_2;
    local_50 = &DAT_04adb100;
    local_40 = (undefined8 *)0x0;
  }
  else {
    if (*pcVar5 == '\0') goto LAB_02e9e2d4;
LAB_02e9e4bc:
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
    if (pcVar5[3] != 'B') {
      return;
    }
    if (pcVar5[4] != 't') {
      return;
    }
    if (pcVar5[5] != 'n') {
      return;
    }
    if (pcVar5[6] != 'L') {
      return;
    }
    if (pcVar5[7] != 'i') {
      return;
    }
    if (pcVar5[8] != 's') {
      return;
    }
    if (pcVar5[9] != 't') {
      return;
    }
    if (pcVar5[10] != 'S') {
      return;
    }
    if (pcVar5[0xb] != '_') {
      return;
    }
    if (pcVar5[0xc] != '0') {
      return;
    }
    if (pcVar5[0xd] != '0') {
      return;
    }
    if (pcVar5[0xe] != '/') {
      return;
    }
    if (pcVar5[0xf] != 'L') {
      return;
    }
    if (pcVar5[0x10] != '_') {
      return;
    }
    if (pcVar5[0x11] != 'B') {
      return;
    }
    if (pcVar5[0x12] != 't') {
      return;
    }
    if (pcVar5[0x13] != 'n') {
      return;
    }
    if (pcVar5[0x14] != '_') {
      return;
    }
    puVar7 = (undefined8 *)param_2[1];
    if (((*PTR_DAT_04bc4e40 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4e40), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bc4e38 = PTR_DAT_04bc4e48 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4e40);
    }
    if (puVar7 == (undefined8 *)0x0) {
      return;
    }
    uVar3 = (**(code **)*puVar7)(puVar7,PTR_DAT_04bc4e38);
    if ((uVar3 & 1) == 0) {
      return;
    }
    if (((DAT_056a3398 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056a3398), iVar1 != 0)) {
      DAT_056a3378 = PTR_DAT_04bb2020 + 0x10;
      DAT_056a3380 = &DAT_040fe5ab;
      DAT_056a3390 = &DAT_0407ebb1;
      DAT_056a3388 = DAT_056a3378;
      __cxa_guard_release(&DAT_056a3398);
    }
    if (((DAT_056a33b0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056a33b0), iVar1 != 0)) {
      DAT_056a33a0 = 0x100000002;
      DAT_056a33a8 = &DAT_056a3378;
      __cxa_guard_release(&DAT_056a33b0);
    }
    if (((DAT_056a33d8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056a33d8), iVar1 != 0)) {
      DAT_056a33b8 = PTR_DAT_04bb2020 + 0x10;
      DAT_056a33c0 = "@T_Theme_00";
      DAT_056a33d0 = "@T_VIP_00";
      DAT_056a33c8 = DAT_056a33b8;
      __cxa_guard_release(&DAT_056a33d8);
    }
    if (((DAT_056a33f0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056a33f0), iVar1 != 0)) {
      DAT_056a33e0 = PTR_DAT_04bb2020 + 0x10;
      DAT_056a33e8 = "P_Icon_00";
      __cxa_guard_release(&DAT_056a33f0);
    }
    local_48 = &DAT_04adb110;
    uStack_58 = *param_2;
    local_50 = &DAT_04adb120;
    local_40 = &DAT_056a33a0;
  }
  local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
  local_38 = 1;
  lVar4 = puVar7[2];
  lVar2 = lVar4 + 0x2c8;
LAB_02e9e344:
  FUN_0386e230(lVar2,lVar4,&local_60);
  return;
}


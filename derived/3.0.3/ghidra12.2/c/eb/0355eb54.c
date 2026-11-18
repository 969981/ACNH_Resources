
void FUN_0355eb54(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined1 *puVar4;
  long lVar5;
  char *pcVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 local_60;
  undefined8 local_58;
  undefined *local_50;
  undefined *local_48;
  undefined8 *local_40;
  undefined4 local_38;
  
  plVar7 = param_2 + 4;
  (**(code **)(*plVar7 + 0x18))(plVar7);
  (**(code **)(*plVar7 + 0x18))(plVar7);
  pcVar6 = (char *)param_2[5];
  if (pcVar6 == "") {
LAB_0355ebb4:
    if (((DAT_0576e648 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0576e648), iVar1 != 0)) {
      DAT_0576e628 = PTR_DAT_04bb2020 + 0x10;
      DAT_0576e630 = "WeatherSwitch";
      DAT_0576e640 = &DAT_0407ebb1;
      DAT_0576e638 = DAT_0576e628;
      __cxa_guard_release(&DAT_0576e648);
    }
    if (((DAT_0576e660 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0576e660), iVar1 != 0)) {
      DAT_0576e650 = 0x100000002;
      DAT_0576e658 = &DAT_0576e628;
      __cxa_guard_release(&DAT_0576e660);
    }
    if (((DAT_0576e678 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0576e678), iVar1 != 0)) {
      DAT_0576e668 = PTR_DAT_04bb2020 + 0x10;
      DAT_0576e670 = "@T_Category_00";
      __cxa_guard_release(&DAT_0576e678);
    }
    if (param_2[1] == 0) {
      return;
    }
    local_48 = &DAT_04b39810;
    local_40 = &DAT_0576e650;
    local_50 = (undefined *)0x0;
    local_58 = *param_2;
    lVar5 = *(long *)(param_2[1] + 0x10);
    local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
    lVar2 = lVar5 + 0x200;
    goto LAB_0355ec24;
  }
  if (*pcVar6 == '/') {
    if (((((pcVar6[1] != 'L') || (pcVar6[2] != '_')) || (pcVar6[3] != 'B')) ||
        ((pcVar6[4] != 'a' || (pcVar6[5] != 'r')))) || (pcVar6[6] != '_')) goto LAB_0355ed00;
    puVar8 = (undefined8 *)param_2[1];
    if (((*PTR_DAT_04bc52c8 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc52c8), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bc52c0 = PTR_DAT_04bc4e48 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc52c8);
    }
    if ((puVar8 == (undefined8 *)0x0) ||
       (uVar3 = (**(code **)*puVar8)(puVar8,PTR_DAT_04bc52c0), (uVar3 & 1) == 0)) goto LAB_0355ed00;
    if (((DAT_0576e6a0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0576e6a0), iVar1 != 0)) {
      DAT_0576e680 = PTR_DAT_04bb2020 + 0x10;
      DAT_0576e688 = "Invalid";
      DAT_0576e698 = &DAT_0407ebb1;
      DAT_0576e690 = DAT_0576e680;
      __cxa_guard_release(&DAT_0576e6a0);
    }
    puVar9 = &DAT_0576e6a8;
    if (((DAT_0576e6b8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0576e6b8), iVar1 != 0)) {
      DAT_0576e6a8 = 0x100000002;
      DAT_0576e6b0 = &DAT_0576e680;
      puVar4 = &DAT_0576e6b8;
      goto LAB_0355f124;
    }
  }
  else {
    if (*pcVar6 == '\0') goto LAB_0355ebb4;
LAB_0355ed00:
    pcVar6 = (char *)param_2[5];
    if ((((*pcVar6 == '/') && (((pcVar6[1] == 'L' && (pcVar6[2] == '_')) && (pcVar6[3] == 'W')))) &&
        (((pcVar6[4] == 'i' && (pcVar6[5] == 'p')) && (pcVar6[6] == 'e')))) && (pcVar6[7] == '_')) {
      puVar8 = (undefined8 *)param_2[1];
      if (((*PTR_DAT_04bc4ff0 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4ff0), iVar1 != 0)) {
        *(undefined **)PTR_DAT_04bc4fe8 = PTR_DAT_04bc4e48 + 0x10;
        __cxa_guard_release(PTR_DAT_04bc4ff0);
      }
      if ((puVar8 != (undefined8 *)0x0) &&
         (uVar3 = (**(code **)*puVar8)(puVar8,PTR_DAT_04bc4fe8), (uVar3 & 1) != 0)) {
        if (((DAT_0576e6d0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0576e6d0), iVar1 != 0)) {
          DAT_0576e6c0 = PTR_DAT_04bb2020 + 0x10;
          DAT_0576e6c8 = "N_Capture_00";
          __cxa_guard_release(&DAT_0576e6d0);
        }
        local_58 = *param_2;
        local_48 = (undefined *)0x0;
        local_40 = (undefined8 *)0x0;
        local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
        local_50 = &DAT_04b39820;
        lVar5 = puVar8[2];
        lVar2 = lVar5 + 0x208;
        goto LAB_0355ec24;
      }
    }
    pcVar6 = (char *)param_2[5];
    if (*pcVar6 != '/') {
      return;
    }
    if (pcVar6[1] != 'L') {
      return;
    }
    if (pcVar6[2] != '_') {
      return;
    }
    if (((((pcVar6[3] != 'C') || (pcVar6[4] != 'l')) || (pcVar6[5] != 'o')) ||
        (((pcVar6[6] != 'u' || (pcVar6[7] != 'd')) ||
         ((pcVar6[8] != 'y' || ((pcVar6[9] != 'B' || (pcVar6[10] != 't')))))))) ||
       ((pcVar6[0xb] != 'n' || (pcVar6[0xc] != '_')))) {
      if (pcVar6[3] != 'S') {
        return;
      }
      if (pcVar6[4] != 'u') {
        return;
      }
      if (pcVar6[5] != 'n') {
        return;
      }
      if (pcVar6[6] != 'n') {
        return;
      }
      if (pcVar6[7] != 'y') {
        return;
      }
      if (pcVar6[8] != 'B') {
        return;
      }
      if (pcVar6[9] != 't') {
        return;
      }
      if (pcVar6[10] != 'n') {
        return;
      }
      if (pcVar6[0xb] != '_') {
        return;
      }
    }
    puVar8 = (undefined8 *)param_2[1];
    if (((*PTR_DAT_04bc4e40 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4e40), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bc4e38 = PTR_DAT_04bc4e48 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4e40);
    }
    if (puVar8 == (undefined8 *)0x0) {
      return;
    }
    uVar3 = (**(code **)*puVar8)(puVar8,PTR_DAT_04bc4e38);
    if ((uVar3 & 1) == 0) {
      return;
    }
    if (((DAT_0576e718 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0576e718), iVar1 != 0)) {
      DAT_0576e6d8 = PTR_DAT_04bb2020 + 0x10;
      DAT_0576e6e0 = "Invalid";
      DAT_0576e6f0 = &DAT_0407ebb1;
      DAT_0576e710 = &DAT_0407ebb1;
      DAT_0576e700 = "Wheather";
      DAT_0576e6e8 = DAT_0576e6d8;
      DAT_0576e6f8 = DAT_0576e6d8;
      DAT_0576e708 = DAT_0576e6d8;
      __cxa_guard_release(&DAT_0576e718);
    }
    puVar9 = &DAT_0576e720;
    if (((DAT_0576e730 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0576e730), iVar1 != 0)) {
      puVar4 = &DAT_0576e730;
      DAT_0576e720 = 0x200000002;
      DAT_0576e728 = &DAT_0576e6d8;
LAB_0355f124:
      __cxa_guard_release(puVar4);
    }
  }
  local_50 = (undefined *)0x0;
  local_48 = (undefined *)0x0;
  local_58 = *param_2;
  local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
  lVar5 = puVar8[2];
  lVar2 = lVar5 + 0x2c8;
  local_40 = puVar9;
LAB_0355ec24:
  local_38 = 0;
  FUN_0386e230(lVar2,lVar5,&local_60);
  return;
}


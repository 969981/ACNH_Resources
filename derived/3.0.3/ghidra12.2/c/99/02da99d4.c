
void FUN_02da99d4(undefined8 param_1,undefined8 *param_2)

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
LAB_02da9a34:
    if (((DAT_05688eb8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05688eb8), iVar1 != 0)) {
      DAT_05688ea8 = PTR_DAT_04bb2020 + 0x10;
      DAT_05688eb0 = "@T_Category_00";
      __cxa_guard_release(&DAT_05688eb8);
    }
    if (param_2[1] == 0) {
      return;
    }
    local_48 = &DAT_04ac4250;
    local_40 = (undefined8 *)0x0;
    local_58 = *param_2;
    local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
    local_50 = (undefined *)0x0;
    lVar5 = *(long *)(param_2[1] + 0x10);
    lVar2 = lVar5 + 0x200;
    goto LAB_02da9a7c;
  }
  if (*pcVar6 == '/') {
    if (((((pcVar6[1] != 'L') || (pcVar6[2] != '_')) || (pcVar6[3] != 'B')) ||
        ((pcVar6[4] != 'a' || (pcVar6[5] != 'r')))) || (pcVar6[6] != '_')) goto LAB_02da9b58;
    puVar8 = (undefined8 *)param_2[1];
    if (((*PTR_DAT_04bc52c8 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc52c8), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bc52c0 = PTR_DAT_04bc4e48 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc52c8);
    }
    if ((puVar8 == (undefined8 *)0x0) ||
       (uVar3 = (**(code **)*puVar8)(puVar8,PTR_DAT_04bc52c0), (uVar3 & 1) == 0)) goto LAB_02da9b58;
    if (((DAT_05688ee0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05688ee0), iVar1 != 0)) {
      DAT_05688ec0 = PTR_DAT_04bb2020 + 0x10;
      DAT_05688ec8 = "Invalid";
      DAT_05688ed8 = &DAT_0407ebb1;
      DAT_05688ed0 = DAT_05688ec0;
      __cxa_guard_release(&DAT_05688ee0);
    }
    puVar9 = &DAT_05688ee8;
    if (((DAT_05688ef8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05688ef8), iVar1 != 0)) {
      DAT_05688ee8 = 0x100000002;
      DAT_05688ef0 = &DAT_05688ec0;
      puVar4 = &DAT_05688ef8;
      goto LAB_02da9efc;
    }
  }
  else {
    if (*pcVar6 == '\0') goto LAB_02da9a34;
LAB_02da9b58:
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
        if (((DAT_05688f10 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05688f10), iVar1 != 0)) {
          DAT_05688f00 = PTR_DAT_04bb2020 + 0x10;
          DAT_05688f08 = "N_Capture_00";
          __cxa_guard_release(&DAT_05688f10);
        }
        local_58 = *param_2;
        local_48 = (undefined *)0x0;
        local_40 = (undefined8 *)0x0;
        local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
        local_50 = &DAT_04ac4260;
        lVar5 = puVar8[2];
        lVar2 = lVar5 + 0x208;
        goto LAB_02da9a7c;
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
    if (((DAT_05688f58 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05688f58), iVar1 != 0)) {
      DAT_05688f18 = PTR_DAT_04bb2020 + 0x10;
      DAT_05688f20 = "Invalid";
      DAT_05688f30 = &DAT_0407ebb1;
      DAT_05688f50 = &DAT_0407ebb1;
      DAT_05688f40 = "Wheather";
      DAT_05688f28 = DAT_05688f18;
      DAT_05688f38 = DAT_05688f18;
      DAT_05688f48 = DAT_05688f18;
      __cxa_guard_release(&DAT_05688f58);
    }
    puVar9 = &DAT_05688f60;
    if (((DAT_05688f70 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05688f70), iVar1 != 0)) {
      puVar4 = &DAT_05688f70;
      DAT_05688f60 = 0x200000002;
      DAT_05688f68 = &DAT_05688f18;
LAB_02da9efc:
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
LAB_02da9a7c:
  local_38 = 0;
  FUN_0386e230(lVar2,lVar5,&local_60);
  return;
}


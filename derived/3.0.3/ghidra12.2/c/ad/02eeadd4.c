
void FUN_02eeadd4(undefined8 param_1,undefined8 *param_2)

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
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 *local_40;
  undefined4 local_38;
  
  plVar7 = param_2 + 4;
  (**(code **)(*plVar7 + 0x18))(plVar7);
  (**(code **)(*plVar7 + 0x18))(plVar7);
  pcVar6 = (char *)param_2[5];
  if (pcVar6 == "") {
LAB_02eeae34:
    if (((DAT_056b3e90 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056b3e90), iVar1 != 0)) {
      DAT_056b3e30 = PTR_DAT_04bb2020 + 0x10;
      DAT_056b3e38 = &DAT_04080afb;
      DAT_056b3e48 = &DAT_0407ebb1;
      DAT_056b3e68 = &DAT_0407ebb1;
      DAT_056b3e88 = &DAT_0407ebb1;
      DAT_056b3e58 = &DAT_040e09dd;
      DAT_056b3e78 = "IconOff";
      DAT_056b3e40 = DAT_056b3e30;
      DAT_056b3e50 = DAT_056b3e30;
      DAT_056b3e60 = DAT_056b3e30;
      DAT_056b3e70 = DAT_056b3e30;
      DAT_056b3e80 = DAT_056b3e30;
      __cxa_guard_release(&DAT_056b3e90);
    }
    if (((DAT_056b3ea8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056b3ea8), iVar1 != 0)) {
      DAT_056b3e98 = 0x300000002;
      DAT_056b3ea0 = &DAT_056b3e30;
      __cxa_guard_release(&DAT_056b3ea8);
    }
    if (param_2[1] == 0) {
      return;
    }
    uStack_58 = *param_2;
    local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
    local_40 = &DAT_056b3e98;
    lVar5 = *(long *)(param_2[1] + 0x10);
    lVar2 = lVar5 + 0x200;
    goto LAB_02eeae8c;
  }
  if (*pcVar6 == '/') {
    if ((((((pcVar6[1] != 'L') || (pcVar6[2] != '_')) || (pcVar6[3] != 'A')) ||
         ((pcVar6[4] != 'i' || (pcVar6[5] != 'r')))) ||
        ((pcVar6[6] != 'p' || ((pcVar6[7] != 'l' || (pcVar6[8] != 'a')))))) ||
       ((pcVar6[9] != 'n' || ((pcVar6[10] != 'e' || (pcVar6[0xb] != '_')))))) goto LAB_02eeafa8;
    puVar8 = (undefined8 *)param_2[1];
    if (((*PTR_DAT_04bc4ff0 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4ff0), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bc4fe8 = PTR_DAT_04bc4e48 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4ff0);
    }
    if ((puVar8 == (undefined8 *)0x0) ||
       (uVar3 = (**(code **)*puVar8)(puVar8,PTR_DAT_04bc4fe8), (uVar3 & 1) == 0)) goto LAB_02eeafa8;
    if (((DAT_056b3ed0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056b3ed0), iVar1 != 0)) {
      DAT_056b3eb0 = PTR_DAT_04bb2020 + 0x10;
      DAT_056b3eb8 = "Color";
      DAT_056b3ec8 = &DAT_0407ebb1;
      DAT_056b3ec0 = DAT_056b3eb0;
      __cxa_guard_release(&DAT_056b3ed0);
    }
    puVar9 = &DAT_056b3ed8;
    if (((DAT_056b3ee8 & 1) != 0) || (iVar1 = __cxa_guard_acquire(&DAT_056b3ee8), iVar1 == 0))
    goto LAB_02eeb160;
    DAT_056b3ed8 = 0x100000002;
    DAT_056b3ee0 = &DAT_056b3eb0;
    puVar4 = &DAT_056b3ee8;
LAB_02eeb318:
    __cxa_guard_release(puVar4);
  }
  else {
    if (*pcVar6 == '\0') goto LAB_02eeae34;
LAB_02eeafa8:
    pcVar6 = (char *)param_2[5];
    if (((((*pcVar6 == '/') && (((pcVar6[1] == 'L' && (pcVar6[2] == '_')) && (pcVar6[3] == 'I'))))
         && (((pcVar6[4] == 's' && (pcVar6[5] == 'l')) && (pcVar6[6] == 'a')))) &&
        ((pcVar6[7] == 'n' && (pcVar6[8] == 'd')))) && (pcVar6[9] == '_')) {
      puVar8 = (undefined8 *)param_2[1];
      if (((*PTR_DAT_04bc4ff0 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4ff0), iVar1 != 0)) {
        *(undefined **)PTR_DAT_04bc4fe8 = PTR_DAT_04bc4e48 + 0x10;
        __cxa_guard_release(PTR_DAT_04bc4ff0);
      }
      if ((puVar8 == (undefined8 *)0x0) ||
         (uVar3 = (**(code **)*puVar8)(puVar8,PTR_DAT_04bc4fe8), (uVar3 & 1) == 0))
      goto LAB_02eeb0ac;
      if (((DAT_056b3f30 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056b3f30), iVar1 != 0)) {
        DAT_056b3ef0 = PTR_DAT_04bb2020 + 0x10;
        DAT_056b3ef8 = "IconStopRandom";
        DAT_056b3f08 = &DAT_0407ebb1;
        DAT_056b3f28 = &DAT_0407ebb1;
        DAT_056b3f18 = "Season";
        DAT_056b3f00 = DAT_056b3ef0;
        DAT_056b3f10 = DAT_056b3ef0;
        DAT_056b3f20 = DAT_056b3ef0;
        __cxa_guard_release(&DAT_056b3f30);
      }
      puVar9 = &DAT_056b3f38;
      if (((DAT_056b3f48 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056b3f48), iVar1 != 0)) {
        DAT_056b3f38 = 0x200000002;
        DAT_056b3f40 = &DAT_056b3ef0;
        puVar4 = &DAT_056b3f48;
        goto LAB_02eeb318;
      }
    }
    else {
LAB_02eeb0ac:
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
      if (pcVar6[3] != 'M') {
        return;
      }
      if (pcVar6[4] != 'o') {
        return;
      }
      if (pcVar6[5] != 'l') {
        return;
      }
      if (pcVar6[6] != '_') {
        return;
      }
      puVar8 = (undefined8 *)param_2[1];
      if (((*PTR_DAT_04bc4ff0 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4ff0), iVar1 != 0)) {
        *(undefined **)PTR_DAT_04bc4fe8 = PTR_DAT_04bc4e48 + 0x10;
        __cxa_guard_release(PTR_DAT_04bc4ff0);
      }
      if (puVar8 == (undefined8 *)0x0) {
        return;
      }
      uVar3 = (**(code **)*puVar8)(puVar8,PTR_DAT_04bc4fe8);
      if ((uVar3 & 1) == 0) {
        return;
      }
      if (((DAT_056b3fd0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056b3fd0), iVar1 != 0)) {
        DAT_056b3f50 = PTR_DAT_04bb2020 + 0x10;
        DAT_056b3f58 = "SlowLoop";
        DAT_056b3f68 = &DAT_0407ebb1;
        DAT_056b3f88 = &DAT_0407ebb1;
        DAT_056b3fa8 = &DAT_0407ebb1;
        DAT_056b3f78 = "SlowRandom";
        DAT_056b3f98 = "FastLoop";
        DAT_056b3fb8 = "FastRandom";
        DAT_056b3fc8 = &DAT_0407ebb1;
        DAT_056b3f60 = DAT_056b3f50;
        DAT_056b3f70 = DAT_056b3f50;
        DAT_056b3f80 = DAT_056b3f50;
        DAT_056b3f90 = DAT_056b3f50;
        DAT_056b3fa0 = DAT_056b3f50;
        DAT_056b3fb0 = DAT_056b3f50;
        DAT_056b3fc0 = DAT_056b3f50;
        __cxa_guard_release(&DAT_056b3fd0);
      }
      puVar9 = &DAT_056b3fd8;
      if (((DAT_056b3fe8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056b3fe8), iVar1 != 0)) {
        DAT_056b3fd8 = 0x400000002;
        DAT_056b3fe0 = &DAT_056b3f50;
        puVar4 = &DAT_056b3fe8;
        goto LAB_02eeb318;
      }
    }
  }
LAB_02eeb160:
  uStack_58 = *param_2;
  local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
  lVar5 = puVar8[2];
  lVar2 = lVar5 + 0x208;
  local_40 = puVar9;
LAB_02eeae8c:
  local_38 = 0;
  uStack_48 = 0;
  local_50 = 0;
  FUN_0386e230(lVar2,lVar5,&local_60);
  return;
}


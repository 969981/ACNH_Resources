
void FUN_03838950(byte *param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  undefined2 *puVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  long *plVar7;
  long lVar8;
  undefined2 local_1d8 [4];
  undefined8 local_1d0;
  undefined1 *puStack_1c8;
  undefined1 *local_1c0;
  int local_1b8;
  undefined1 local_1b4 [127];
  undefined1 local_135;
  undefined1 *local_130;
  undefined1 *local_128;
  int local_120;
  undefined1 local_11c [127];
  undefined1 local_9d;
  undefined **local_98;
  undefined1 *puStack_90;
  int local_88;
  undefined1 local_84 [31];
  undefined1 local_65;
  long local_60;
  byte *pbStack_58;
  
  if ((*param_1 & 1) == 0) {
    return;
  }
  if (*(long *)(param_1 + 8) == 0) {
    return;
  }
  pbStack_58 = param_1 + 0x10;
  local_1d8[0] = 0;
  local_1c0 = local_1b4;
  local_1b8 = 0x80;
  lVar8 = *param_2;
  local_60 = param_2[1];
  local_135 = 0;
  local_1b4[0] = 0;
  local_120 = 0x80;
  local_128 = local_11c;
  local_9d = 0;
  local_84[0] = 0;
  local_11c[0] = 0;
  local_65 = 0;
  local_1d0 = 0;
  puStack_1c8 = &DAT_048fc708;
  local_130 = &DAT_048fc708;
  local_88 = 0x20;
  local_98 = &PTR_LAB_048f9700;
  puStack_90 = local_84;
  if (lVar8 == 0) {
    puVar3 = (undefined2 *)0x0;
    goto LAB_03838d20;
  }
  plVar7 = (long *)(lVar8 + 0x40);
  local_1d0 = *(undefined8 *)(lVar8 + 8);
  (**(code **)(*plVar7 + 0x18))(plVar7);
  puVar5 = *(undefined1 **)(lVar8 + 0x48);
  if (local_84 != puVar5) {
    (**(code **)(*(long *)(lVar8 + 0x40) + 0x18))(plVar7);
    lVar4 = 0;
    do {
      if (*(char *)(*(long *)(lVar8 + 0x48) + lVar4) == '\0') goto LAB_03838a88;
      lVar1 = *(long *)(lVar8 + 0x48) + lVar4;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar4 = lVar4 + 1;
        goto LAB_03838a88;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar4 = lVar4 + 2;
        goto LAB_03838a88;
      }
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
    lVar4 = 0;
LAB_03838a88:
    iVar2 = (int)lVar4;
    if (local_88 <= (int)lVar4) {
      iVar2 = local_88 + -1;
    }
    memcpy(local_84,puVar5,(long)iVar2);
    local_84[iVar2] = 0;
  }
  puVar5 = local_1c0;
  lVar8 = *param_2;
  if (**(char **)(lVar8 + 0x18) == '\0') {
    plVar7 = (long *)(lVar8 + 0x20);
    (**(code **)(*plVar7 + 0x18))(plVar7);
    puVar6 = *(undefined1 **)(lVar8 + 0x28);
    if (puVar5 != puVar6) {
      (**(code **)(*(long *)(lVar8 + 0x20) + 0x18))(plVar7);
      lVar4 = 0;
      do {
        if (*(char *)(*(long *)(lVar8 + 0x28) + lVar4) == '\0') goto LAB_03838c4c;
        lVar1 = *(long *)(lVar8 + 0x28) + lVar4;
        if (*(char *)(lVar1 + 1) == '\0') {
          lVar4 = lVar4 + 1;
          goto LAB_03838c4c;
        }
        if (*(char *)(lVar1 + 2) == '\0') {
          lVar4 = lVar4 + 2;
          goto LAB_03838c4c;
        }
        lVar4 = lVar4 + 3;
      } while (lVar4 != 0x80001);
      lVar4 = 0;
LAB_03838c4c:
      iVar2 = (int)lVar4;
      if (local_1b8 <= (int)lVar4) {
        iVar2 = local_1b8 + -1;
      }
      memcpy(puVar5,puVar6,(long)iVar2);
      puVar5[iVar2] = 0;
    }
    puVar5 = local_128;
    lVar8 = *param_2;
    plVar7 = (long *)(lVar8 + 0x30);
    (**(code **)(*plVar7 + 0x18))(plVar7);
    puVar6 = *(undefined1 **)(lVar8 + 0x38);
    if (puVar5 != puVar6) {
      (**(code **)(*(long *)(lVar8 + 0x30) + 0x18))(plVar7);
      lVar4 = 0;
      do {
        if (*(char *)(*(long *)(lVar8 + 0x38) + lVar4) == '\0') goto LAB_03838cf0;
        lVar1 = *(long *)(lVar8 + 0x38) + lVar4;
        if (*(char *)(lVar1 + 1) == '\0') goto LAB_03838ce4;
        if (*(char *)(lVar1 + 2) == '\0') goto LAB_03838cec;
        lVar4 = lVar4 + 3;
      } while (lVar4 != 0x80001);
      goto LAB_03838cdc;
    }
  }
  else {
    (**(code **)(*(long *)(lVar8 + 0x10) + 0x18))(lVar8 + 0x10);
    puVar6 = *(undefined1 **)(lVar8 + 0x18);
    if (puVar5 != puVar6) {
      (**(code **)(*(long *)(lVar8 + 0x10) + 0x18))(lVar8 + 0x10);
      lVar4 = 0;
      do {
        if (*(char *)(*(long *)(lVar8 + 0x18) + lVar4) == '\0') goto LAB_03838bac;
        lVar1 = *(long *)(lVar8 + 0x18) + lVar4;
        if (*(char *)(lVar1 + 1) == '\0') {
          lVar4 = lVar4 + 1;
          goto LAB_03838bac;
        }
        if (*(char *)(lVar1 + 2) == '\0') {
          lVar4 = lVar4 + 2;
          goto LAB_03838bac;
        }
        lVar4 = lVar4 + 3;
      } while (lVar4 != 0x80001);
      lVar4 = 0;
LAB_03838bac:
      iVar2 = (int)lVar4;
      if (local_1b8 <= (int)lVar4) {
        iVar2 = local_1b8 + -1;
      }
      memcpy(puVar5,puVar6,(long)iVar2);
      puVar5[iVar2] = 0;
    }
    puVar5 = local_128;
    lVar8 = *param_2;
    plVar7 = (long *)(lVar8 + 0x10);
    (**(code **)(*plVar7 + 0x18))(plVar7);
    puVar6 = *(undefined1 **)(lVar8 + 0x18);
    if (puVar5 != puVar6) {
      (**(code **)(*(long *)(lVar8 + 0x10) + 0x18))(plVar7);
      lVar4 = 0;
      do {
        if (*(char *)(*(long *)(lVar8 + 0x18) + lVar4) == '\0') goto LAB_03838cf0;
        lVar1 = *(long *)(lVar8 + 0x18) + lVar4;
        if (*(char *)(lVar1 + 1) == '\0') goto LAB_03838ce4;
        if (*(char *)(lVar1 + 2) == '\0') goto LAB_03838cec;
        lVar4 = lVar4 + 3;
      } while (lVar4 != 0x80001);
LAB_03838cdc:
      lVar4 = 0;
      goto LAB_03838cf0;
    }
  }
  goto LAB_03838d1c;
LAB_03838ce4:
  lVar4 = lVar4 + 1;
  goto LAB_03838cf0;
LAB_03838cec:
  lVar4 = lVar4 + 2;
LAB_03838cf0:
  iVar2 = (int)lVar4;
  if (local_120 <= (int)lVar4) {
    iVar2 = local_120 + -1;
  }
  memcpy(puVar5,puVar6,(long)iVar2);
  puVar5[iVar2] = 0;
LAB_03838d1c:
  puVar3 = local_1d8;
LAB_03838d20:
  FUN_0383bc50(*(undefined8 *)(param_1 + 8),&local_60,puVar3);
  return;
}


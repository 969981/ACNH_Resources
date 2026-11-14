
bool FUN_01d7aed0(long *param_1,long *param_2,ulong param_3)

{
  uint uVar1;
  long lVar2;
  undefined1 *puVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  undefined *local_578;
  undefined1 *local_570;
  undefined4 local_568;
  undefined1 local_564 [1023];
  undefined1 local_165;
  undefined *local_160;
  undefined8 *local_158;
  undefined4 local_150;
  undefined1 local_14c;
  undefined8 local_148;
  undefined8 local_140;
  undefined4 local_138;
  undefined *local_130;
  undefined1 *local_128;
  undefined4 local_120;
  undefined1 local_11c [63];
  undefined1 local_dd;
  undefined *local_d8;
  undefined1 *local_d0;
  undefined4 local_c8;
  undefined1 local_c4 [63];
  undefined1 local_85;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  (**(code **)(*param_2 + 0x18))(param_2);
  local_14c = 0;
  local_150 = 0x20;
  local_148 = 0xffffffff;
  lVar7 = param_2[1];
  local_138 = 0xffffffff;
  local_158 = &local_80;
  local_140 = 0xffffffff00000000;
  local_128 = local_11c;
  local_120 = 0x40;
  local_dd = 0;
  local_11c[0] = 0;
  local_130 = PTR_DAT_04bb2bc0 + 0x10;
  local_d0 = local_c4;
  local_c8 = 0x40;
  local_85 = 0;
  local_c4[0] = 0;
  local_160 = PTR_DAT_04bb4e10 + 0x10;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  puVar3 = local_c4 + 0x84;
  if (local_c4 + 0x84 <= (undefined1 *)((long)&local_80 + 2)) {
    puVar3 = (undefined1 *)((long)&local_80 + 2);
  }
  local_d8 = local_130;
  memset(local_158,0,(size_t)(puVar3 + (-0xe0 - (long)&local_160)));
  FUN_01c0e6b4(&local_160,lVar7,PTR_DAT_04bb2df0);
  local_165 = 0;
  local_568 = 0x400;
  local_570 = local_564;
  local_564[0] = 0;
  local_578 = PTR_DAT_04bb2f40 + 0x10;
  uVar4 = FUN_01c0e9a4(&local_160,&local_578);
  if ((uVar4 & 1) == 0) {
    return false;
  }
  if ((param_3 & 1) != 0) {
    (**(code **)(*param_1 + 0x18))(param_1);
    lVar5 = param_1[1];
    lVar7 = 0;
    do {
      if (*(char *)(lVar5 + lVar7) == '\0') goto LAB_01d7b080;
      if (*(char *)(lVar5 + lVar7 + 1) == '\0') {
        lVar7 = lVar7 + 1;
        goto LAB_01d7b080;
      }
      if (*(char *)(lVar5 + lVar7 + 2) == '\0') {
        lVar7 = lVar7 + 2;
        goto LAB_01d7b080;
      }
      lVar7 = lVar7 + 3;
    } while (lVar7 != 0x80001);
    lVar7 = 0;
LAB_01d7b080:
    if ((int)param_1[2] + -1 <= (int)lVar7) {
      return false;
    }
    *(undefined2 *)(lVar5 + (int)lVar7) = 0x20;
  }
  lVar5 = param_1[1];
  (**(code **)(*param_1 + 0x18))(param_1);
  lVar7 = 0;
  do {
    if (*(char *)(param_1[1] + lVar7) == '\0') goto LAB_01d7b0ec;
    lVar2 = param_1[1] + lVar7;
    if (*(char *)(lVar2 + 1) == '\0') {
      lVar7 = lVar7 + 1;
      goto LAB_01d7b0ec;
    }
    if (*(char *)(lVar2 + 2) == '\0') {
      lVar7 = lVar7 + 2;
      goto LAB_01d7b0ec;
    }
    lVar7 = lVar7 + 3;
  } while (lVar7 != 0x80001);
  lVar7 = 0;
LAB_01d7b0ec:
  uVar6 = (uint)lVar7 & ((int)(uint)lVar7 >> 0x1f ^ 0xffffffffU);
  uVar1 = (int)param_1[2] + ~uVar6;
  if (1 < (int)((int)param_1[2] - uVar6)) {
    uVar1 = 1;
  }
  if ((int)uVar1 < 1) {
    return false;
  }
  memcpy((void *)(lVar5 + (ulong)uVar6),&DAT_04084559,(ulong)uVar1);
  *(undefined1 *)(lVar5 + (ulong)uVar1 + (ulong)uVar6) = 0;
  if (uVar1 != 1) {
    return false;
  }
  lVar5 = param_1[1];
  (**(code **)(*param_1 + 0x18))(param_1);
  lVar7 = 0;
  do {
    if (*(char *)(param_1[1] + lVar7) == '\0') goto LAB_01d7b194;
    lVar2 = param_1[1] + lVar7;
    if (*(char *)(lVar2 + 1) == '\0') {
      lVar7 = lVar7 + 1;
      goto LAB_01d7b194;
    }
    if (*(char *)(lVar2 + 2) == '\0') {
      lVar7 = lVar7 + 2;
      goto LAB_01d7b194;
    }
    lVar7 = lVar7 + 3;
  } while (lVar7 != 0x80001);
  lVar7 = 0;
LAB_01d7b194:
  uVar1 = (uint)lVar7 & ((int)(uint)lVar7 >> 0x1f ^ 0xffffffffU);
  (**(code **)(local_578 + 0x18))(&local_578);
  lVar7 = 0;
  do {
    if (local_570[lVar7] == '\0') goto LAB_01d7b1ec;
    if (local_570[lVar7 + 1] == '\0') {
      lVar7 = lVar7 + 1;
      goto LAB_01d7b1ec;
    }
    if (local_570[lVar7 + 2] == '\0') {
      lVar7 = lVar7 + 2;
      goto LAB_01d7b1ec;
    }
    lVar7 = lVar7 + 3;
  } while (lVar7 != 0x80001);
  lVar7 = 0;
LAB_01d7b1ec:
  uVar6 = (uint)lVar7;
  if ((int)((int)param_1[2] - uVar1) <= (int)(uint)lVar7) {
    uVar6 = (int)param_1[2] + ~uVar1;
  }
  if ((int)uVar6 < 1) {
    uVar6 = 0;
  }
  else {
    (**(code **)(local_578 + 0x18))(&local_578);
    memcpy((void *)(lVar5 + (ulong)uVar1),local_570,(ulong)uVar6);
    *(undefined1 *)(lVar5 + (int)(uVar6 + uVar1)) = 0;
  }
  (**(code **)(local_578 + 0x18))(&local_578);
  lVar7 = 0;
  do {
    if (local_570[lVar7] == '\0') goto LAB_01d7b29c;
    if (local_570[lVar7 + 1] == '\0') {
      lVar7 = lVar7 + 1;
      goto LAB_01d7b29c;
    }
    if (local_570[lVar7 + 2] == '\0') {
      lVar7 = lVar7 + 2;
      goto LAB_01d7b29c;
    }
    lVar7 = lVar7 + 3;
  } while (lVar7 != 0x80001);
  lVar7 = 0;
LAB_01d7b29c:
  return uVar6 == (uint)lVar7;
}


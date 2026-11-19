
void FUN_03c2de50(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  void *__dest;
  undefined1 *__src;
  long lVar4;
  long lVar5;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined *local_278;
  undefined1 *local_270;
  undefined4 local_268;
  undefined1 local_264 [511];
  undefined1 local_65;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined8 *local_50;
  undefined8 uStack_48;
  
  local_270 = local_264;
  local_50 = &local_2c0;
  local_268 = 0x200;
  local_65 = 0;
  local_264[0] = 0;
  local_278 = PTR_DAT_04bb2d90 + 0x10;
  puStack_58 = local_264 + -0x34;
  uStack_48 = 0xffffff80ffffffd8;
  local_2c0 = param_4;
  uStack_2b8 = param_5;
  local_2b0 = param_6;
  uStack_2a8 = param_7;
  local_2a0 = param_8;
  local_60 = (undefined1 *)register0x00000008;
  uVar3 = nn::util::VSNPrintf(local_270,0x200,param_3,&local_60);
  if (((int)uVar3 < 0) || (0x1ff < uVar3)) {
    local_65 = 0;
  }
  lVar2 = param_2[2];
  (**(code **)(*param_2 + 0x18))(param_2);
  lVar5 = 0;
  do {
    if (*(char *)(param_2[1] + lVar5) == '\0') goto LAB_03c2df70;
    lVar4 = param_2[1] + lVar5;
    if (*(char *)(lVar4 + 1) == '\0') {
      lVar5 = lVar5 + 1;
      goto LAB_03c2df70;
    }
    if (*(char *)(lVar4 + 2) == '\0') {
      lVar5 = lVar5 + 2;
      goto LAB_03c2df70;
    }
    lVar5 = lVar5 + 3;
  } while (lVar5 != 0x80001);
  lVar5 = 0;
LAB_03c2df70:
  (**(code **)(local_278 + 0x18))(&local_278);
  lVar4 = 0;
  do {
    if (local_270[lVar4] == '\0') goto LAB_03c2dfcc;
    if (local_270[lVar4 + 1] == '\0') {
      lVar4 = lVar4 + 1;
      goto LAB_03c2dfcc;
    }
    if (local_270[lVar4 + 2] == '\0') {
      lVar4 = lVar4 + 2;
      goto LAB_03c2dfcc;
    }
    lVar4 = lVar4 + 3;
  } while (lVar4 != 0x80001);
  lVar4 = 0;
LAB_03c2dfcc:
  if (DAT_05aed568 < (int)lVar2 - ((int)lVar5 + (int)lVar4)) {
    lVar4 = param_2[1];
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar5 = 0;
    do {
      if (*(char *)(param_2[1] + lVar5) == '\0') goto LAB_03c2e088;
      lVar2 = param_2[1] + lVar5;
      if (*(char *)(lVar2 + 1) == '\0') {
        lVar5 = lVar5 + 1;
        goto LAB_03c2e088;
      }
      if (*(char *)(lVar2 + 2) == '\0') {
        lVar5 = lVar5 + 2;
        goto LAB_03c2e088;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_03c2e088:
    uVar3 = (uint)lVar5 & ((int)(uint)lVar5 >> 0x1f ^ 0xffffffffU);
    (**(code **)(local_278 + 0x18))(&local_278);
    lVar5 = 0;
    do {
      if (local_270[lVar5] == '\0') goto LAB_03c2e144;
      if (local_270[lVar5 + 1] == '\0') {
        lVar5 = lVar5 + 1;
        goto LAB_03c2e144;
      }
      if (local_270[lVar5 + 2] == '\0') {
        lVar5 = lVar5 + 2;
        goto LAB_03c2e144;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_03c2e144:
    uVar1 = (uint)lVar5;
    if ((int)((int)param_2[2] - uVar3) <= (int)(uint)lVar5) {
      uVar1 = (int)param_2[2] + ~uVar3;
    }
    if ((int)uVar1 < 1) {
      return;
    }
    __dest = (void *)(lVar4 + (ulong)uVar3);
    (**(code **)(local_278 + 0x18))(&local_278);
    __src = local_270;
  }
  else {
    lVar2 = param_2[2];
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar4 = param_2[1];
    lVar5 = 0;
    do {
      if (*(char *)(lVar4 + lVar5) == '\0') goto LAB_03c2e0e0;
      if (*(char *)(lVar4 + lVar5 + 1) == '\0') {
        lVar5 = lVar5 + 1;
        goto LAB_03c2e0e0;
      }
      if (*(char *)(lVar4 + lVar5 + 2) == '\0') {
        lVar5 = lVar5 + 2;
        goto LAB_03c2e0e0;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_03c2e0e0:
    if ((int)lVar2 - (int)lVar5 <= DAT_05aed568) {
      return;
    }
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar5 = 0;
    do {
      if (*(char *)(param_2[1] + lVar5) == '\0') goto LAB_03c2e190;
      lVar2 = param_2[1] + lVar5;
      if (*(char *)(lVar2 + 1) == '\0') {
        lVar5 = lVar5 + 1;
        goto LAB_03c2e190;
      }
      if (*(char *)(lVar2 + 2) == '\0') {
        lVar5 = lVar5 + 2;
        goto LAB_03c2e190;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_03c2e190:
    uVar3 = (uint)lVar5 & ((int)(uint)lVar5 >> 0x1f ^ 0xffffffffU);
    (**(code **)(DAT_05aed558 + 0x18))(&DAT_05aed558);
    lVar5 = 0;
    do {
      if (DAT_05aed560[lVar5] == '\0') goto LAB_03c2e1f0;
      if (DAT_05aed560[lVar5 + 1] == '\0') {
        lVar5 = lVar5 + 1;
        goto LAB_03c2e1f0;
      }
      if (DAT_05aed560[lVar5 + 2] == '\0') {
        lVar5 = lVar5 + 2;
        goto LAB_03c2e1f0;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_03c2e1f0:
    uVar1 = (uint)lVar5;
    if ((int)((int)param_2[2] - uVar3) <= (int)(uint)lVar5) {
      uVar1 = (int)param_2[2] + ~uVar3;
    }
    if ((int)uVar1 < 1) {
      return;
    }
    __dest = (void *)(lVar4 + (ulong)uVar3);
    (**(code **)(DAT_05aed558 + 0x18))(&DAT_05aed558);
    __src = DAT_05aed560;
  }
  memcpy(__dest,__src,(ulong)uVar1);
  *(undefined1 *)(lVar4 + (int)(uVar1 + uVar3)) = 0;
  return;
}


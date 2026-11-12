
undefined8 FUN_0076ae60(undefined8 param_1,long *param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  undefined *local_d8;
  undefined1 *local_d0;
  undefined4 local_c8;
  undefined1 local_c4 [127];
  undefined1 local_45;
  
  local_45 = 0;
  local_c8 = 0x80;
  local_d0 = local_c4;
  local_c4[0] = 0;
  local_d8 = PTR_DAT_04bb2d88 + 0x10;
  lVar4 = param_2[1];
  (**(code **)(*param_2 + 0x18))(param_2);
  lVar5 = 0;
  do {
    if (*(char *)(param_2[1] + lVar5) == '\0') goto LAB_0076af00;
    lVar1 = param_2[1] + lVar5;
    if (*(char *)(lVar1 + 1) == '\0') {
      lVar5 = lVar5 + 1;
      goto LAB_0076af00;
    }
    if (*(char *)(lVar1 + 2) == '\0') {
      lVar5 = lVar5 + 2;
      goto LAB_0076af00;
    }
    lVar5 = lVar5 + 3;
  } while (lVar5 != 0x80001);
  lVar5 = 0;
LAB_0076af00:
  uVar2 = (uint)lVar5 & ((int)(uint)lVar5 >> 0x1f ^ 0xffffffffU);
  (**(code **)(local_d8 + 0x18))(&local_d8);
  lVar5 = 0;
  do {
    if (local_d0[lVar5] == '\0') goto LAB_0076af5c;
    if (local_d0[lVar5 + 1] == '\0') {
      lVar5 = lVar5 + 1;
      goto LAB_0076af5c;
    }
    if (local_d0[lVar5 + 2] == '\0') {
      lVar5 = lVar5 + 2;
      goto LAB_0076af5c;
    }
    lVar5 = lVar5 + 3;
  } while (lVar5 != 0x80001);
  lVar5 = 0;
LAB_0076af5c:
  uVar3 = (uint)lVar5;
  if ((int)((int)param_2[2] - uVar2) <= (int)(uint)lVar5) {
    uVar3 = (int)param_2[2] + ~uVar2;
  }
  if (0 < (int)uVar3) {
    (**(code **)(local_d8 + 0x18))(&local_d8);
    memcpy((void *)(lVar4 + (ulong)uVar2),local_d0,(ulong)uVar3);
    *(undefined1 *)(lVar4 + (int)(uVar3 + uVar2)) = 0;
  }
  lVar4 = param_2[1];
  (**(code **)(*param_2 + 0x18))(param_2);
  lVar5 = 0;
  do {
    if (*(char *)(param_2[1] + lVar5) == '\0') goto LAB_0076affc;
    lVar1 = param_2[1] + lVar5;
    if (*(char *)(lVar1 + 1) == '\0') {
      lVar5 = lVar5 + 1;
      goto LAB_0076affc;
    }
    if (*(char *)(lVar1 + 2) == '\0') {
      lVar5 = lVar5 + 2;
      goto LAB_0076affc;
    }
    lVar5 = lVar5 + 3;
  } while (lVar5 != 0x80001);
  lVar5 = 0;
LAB_0076affc:
  uVar3 = (uint)lVar5 & ((int)(uint)lVar5 >> 0x1f ^ 0xffffffffU);
  uVar2 = (int)param_2[2] + ~uVar3;
  if (1 < (int)((int)param_2[2] - uVar3)) {
    uVar2 = 1;
  }
  if (0 < (int)uVar2) {
    memcpy((void *)(lVar4 + (ulong)uVar3),&DAT_040c2970,(ulong)uVar2);
    *(undefined1 *)(lVar4 + (ulong)uVar2 + (ulong)uVar3) = 0;
  }
  return 1;
}


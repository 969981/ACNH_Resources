
void FUN_03c4c750(undefined8 param_1,long *param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  long lVar5;
  undefined *local_e8;
  char *local_e0;
  int local_d8;
  char local_d4 [127];
  undefined1 local_55;
  
  local_d4[0] = '\0';
  local_d8 = 0x80;
  lVar5 = 0;
  local_55 = 0;
  local_e8 = PTR_DAT_04bb2d88 + 0x10;
  do {
    if (local_d4[lVar5] == '\0') goto LAB_03c4c7ec;
    if (local_d4[lVar5 + 1] == '\0') {
      lVar5 = lVar5 + 1;
      goto LAB_03c4c7ec;
    }
    if (local_d4[lVar5 + 2] == '\0') {
      lVar5 = lVar5 + 2;
      goto LAB_03c4c7ec;
    }
    lVar5 = lVar5 + 3;
  } while (lVar5 != 0x80001);
  lVar5 = 0;
LAB_03c4c7ec:
  uVar2 = (uint)lVar5 & ((int)(uint)lVar5 >> 0x1f ^ 0xffffffffU);
  local_e0 = local_d4;
  (**(code **)(*param_2 + 0x18))(param_2);
  lVar5 = 0;
  do {
    if (*(char *)(param_2[1] + lVar5) == '\0') goto LAB_03c4c84c;
    lVar1 = param_2[1] + lVar5;
    if (*(char *)(lVar1 + 1) == '\0') {
      lVar5 = lVar5 + 1;
      goto LAB_03c4c84c;
    }
    if (*(char *)(lVar1 + 2) == '\0') {
      lVar5 = lVar5 + 2;
      goto LAB_03c4c84c;
    }
    lVar5 = lVar5 + 3;
  } while (lVar5 != 0x80001);
  lVar5 = 0;
LAB_03c4c84c:
  uVar3 = (uint)lVar5;
  if ((int)(local_d8 - uVar2) <= (int)(uint)lVar5) {
    uVar3 = local_d8 + ~uVar2;
  }
  if (0 < (int)uVar3) {
    (**(code **)(*param_2 + 0x18))(param_2);
    memcpy(local_d4 + uVar2,(void *)param_2[1],(ulong)uVar3);
    local_d4[(int)(uVar3 + uVar2)] = '\0';
  }
  pcVar4 = local_e0;
  (**(code **)(local_e8 + 0x18))(&local_e8);
  lVar5 = 0;
  do {
    if (local_e0[lVar5] == '\0') goto LAB_03c4c8ec;
    if (local_e0[lVar5 + 1] == '\0') {
      lVar5 = lVar5 + 1;
      goto LAB_03c4c8ec;
    }
    if (local_e0[lVar5 + 2] == '\0') {
      lVar5 = lVar5 + 2;
      goto LAB_03c4c8ec;
    }
    lVar5 = lVar5 + 3;
  } while (lVar5 != 0x80001);
  lVar5 = 0;
LAB_03c4c8ec:
  uVar2 = (uint)lVar5 & ((int)(uint)lVar5 >> 0x1f ^ 0xffffffffU);
  uVar3 = 9;
  if ((int)(local_d8 - uVar2) < 10) {
    uVar3 = local_d8 + ~uVar2;
  }
  if (0 < (int)uVar3) {
    memcpy(pcVar4 + uVar2,".barslist",(ulong)uVar3);
    pcVar4[(ulong)uVar3 + (ulong)uVar2] = '\0';
  }
  FUN_03c4c960(param_1,&local_e8);
  return;
}


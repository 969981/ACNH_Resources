
void FUN_00948b10(undefined8 param_1,long *param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  long lVar5;
  undefined *local_d8;
  char *local_d0;
  int local_c8;
  char local_c4 [127];
  undefined1 local_45;
  
  local_c4[0] = '\0';
  local_c8 = 0x80;
  lVar5 = 0;
  local_45 = 0;
  local_d8 = PTR_DAT_04bb2d88 + 0x10;
  do {
    if (local_c4[lVar5] == '\0') goto LAB_00948b9c;
    if (local_c4[lVar5 + 1] == '\0') {
      lVar5 = lVar5 + 1;
      goto LAB_00948b9c;
    }
    if (local_c4[lVar5 + 2] == '\0') {
      lVar5 = lVar5 + 2;
      goto LAB_00948b9c;
    }
    lVar5 = lVar5 + 3;
  } while (lVar5 != 0x80001);
  lVar5 = 0;
LAB_00948b9c:
  uVar2 = (uint)lVar5 & ((int)(uint)lVar5 >> 0x1f ^ 0xffffffffU);
  local_d0 = local_c4;
  (**(code **)(*param_2 + 0x18))(param_2);
  lVar5 = 0;
  do {
    if (*(char *)(param_2[1] + lVar5) == '\0') goto LAB_00948bfc;
    lVar1 = param_2[1] + lVar5;
    if (*(char *)(lVar1 + 1) == '\0') {
      lVar5 = lVar5 + 1;
      goto LAB_00948bfc;
    }
    if (*(char *)(lVar1 + 2) == '\0') {
      lVar5 = lVar5 + 2;
      goto LAB_00948bfc;
    }
    lVar5 = lVar5 + 3;
  } while (lVar5 != 0x80001);
  lVar5 = 0;
LAB_00948bfc:
  uVar3 = (uint)lVar5;
  if ((int)(local_c8 - uVar2) <= (int)(uint)lVar5) {
    uVar3 = local_c8 + ~uVar2;
  }
  if (0 < (int)uVar3) {
    (**(code **)(*param_2 + 0x18))(param_2);
    memcpy(local_c4 + uVar2,(void *)param_2[1],(ulong)uVar3);
    local_c4[(int)(uVar3 + uVar2)] = '\0';
  }
  pcVar4 = local_d0;
  (**(code **)(local_d8 + 0x18))(&local_d8);
  lVar5 = 0;
  do {
    if (local_d0[lVar5] == '\0') goto LAB_00948c9c;
    if (local_d0[lVar5 + 1] == '\0') {
      lVar5 = lVar5 + 1;
      goto LAB_00948c9c;
    }
    if (local_d0[lVar5 + 2] == '\0') {
      lVar5 = lVar5 + 2;
      goto LAB_00948c9c;
    }
    lVar5 = lVar5 + 3;
  } while (lVar5 != 0x80001);
  lVar5 = 0;
LAB_00948c9c:
  uVar2 = (uint)lVar5 & ((int)(uint)lVar5 >> 0x1f ^ 0xffffffffU);
  uVar3 = 4;
  if ((int)(local_c8 - uVar2) < 5) {
    uVar3 = local_c8 + ~uVar2;
  }
  if (0 < (int)uVar3) {
    memcpy(pcVar4 + uVar2,&DAT_0405c04e,(ulong)uVar3);
    pcVar4[(ulong)uVar3 + (ulong)uVar2] = '\0';
  }
  FUN_00953f40(*(undefined8 *)PTR_DAT_04bb2228,&local_d8);
  return;
}


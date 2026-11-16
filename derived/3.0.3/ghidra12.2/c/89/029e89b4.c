
void FUN_029e89b4(byte *param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 local_58;
  undefined **ppuStack_50;
  undefined *local_48;
  undefined1 local_40;
  undefined *local_38;
  undefined1 local_30;
  undefined4 local_2c;
  undefined1 local_28;
  undefined1 local_27;
  undefined1 local_26;
  
  bVar1 = *param_2;
  if (((bVar1 != 0) && (param_1[0x3d] == 0)) &&
     (*(int *)(PTR_DAT_04bc3a80 + 0x38) == 0x11889761 &&
      *(int *)(PTR_DAT_04bc3a78 + 0x38) == -0x5f95286e)) {
    param_1[0x34] = 0;
    param_1[0x35] = 0;
    param_1[0x36] = 0;
    param_1[0x37] = 0;
    param_1[0x3c] = 1;
  }
  param_1[0x3d] = bVar1;
  if (((*param_1 & 1) == 0) || (lVar5 = *(long *)(param_1 + 8), lVar5 == 0)) {
    puVar6 = (undefined8 *)0x0;
  }
  else {
    puVar6 = *(undefined8 **)(lVar5 + 0x18);
    if ((*(byte *)(lVar5 + 8) & 10) != 2) {
      puVar6 = (undefined8 *)0x0;
    }
  }
  if (((*PTR_DAT_04bc4110 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_04bc4110), iVar2 != 0))
  {
    *(undefined **)PTR_DAT_04bc4108 = PTR_DAT_04bb3ba0 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4110);
  }
  if ((puVar6 == (undefined8 *)0x0) ||
     (uVar3 = (**(code **)*puVar6)(puVar6,PTR_DAT_04bc4108), (uVar3 & 1) == 0)) {
    param_1[0x30] = 0;
    param_1[0x31] = 0;
    param_1[0x32] = 0;
    param_1[0x33] = 0;
    goto LAB_029e8b4c;
  }
  local_40 = 0;
  local_30 = 1;
  local_48 = PTR_DAT_04bb3c28 + 0x10;
  local_2c = 0;
  local_28 = 0;
  local_27 = 0;
  local_26 = 0;
  switch(*(undefined4 *)(param_1 + 0x30)) {
  case 0:
    if (param_1[0x3c] != 0) {
      local_2c = *(undefined4 *)(param_1 + 0x34);
      goto LAB_029e8b1c;
    }
    goto switchD_029e8ac4_default;
  case 1:
    uVar4 = (uint)*(byte *)((long)puVar6 + 0x3f1);
    if (*(byte *)((long)puVar6 + 0x3f1) != 0) {
      if (*(char *)(puVar6 + 0x7e) == '\0') goto switchD_029e8ac4_default;
      local_27 = 1;
      uVar4 = 2;
    }
    break;
  case 2:
    if (param_1[0x3c] == 0) {
      if (*(char *)((long)puVar6 + 0x3f1) != '\0') goto switchD_029e8ac4_default;
      uVar4 = 0;
    }
    else {
      local_26 = 1;
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_1 + 0x34);
      uVar4 = 3;
    }
    break;
  case 3:
    local_2c = *(undefined4 *)(param_1 + 0x38);
LAB_029e8b1c:
    uVar4 = 1;
    local_28 = 1;
    break;
  default:
    goto switchD_029e8ac4_default;
  }
  *(uint *)(param_1 + 0x30) = uVar4;
switchD_029e8ac4_default:
  local_38 = &DAT_0417e2c0;
  ppuStack_50 = &local_48;
  local_58 = 0;
  FUN_03838950(param_1,&local_58);
LAB_029e8b4c:
  param_1[0x3c] = 0;
  return;
}


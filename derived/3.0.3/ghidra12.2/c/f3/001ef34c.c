
void FUN_001ef34c(long param_1)

{
  int iVar1;
  undefined1 auStack_40 [28];
  undefined4 local_24;
  
  iVar1 = FUN_00142a18(*(undefined8 *)(param_1 + 400));
  FUN_00142be4(*(undefined8 *)(param_1 + 400));
  *(undefined8 *)(param_1 + 400) = 0;
  (**(code **)(*(long *)(param_1 + 0x1b8) + 0x10))(param_1 + 0x1b8);
  if (iVar1 < 6) {
    if (iVar1 == 0) {
      local_24 = 0x10001;
      goto LAB_001ef3f4;
    }
    if (iVar1 == 5) {
      local_24 = 0x80050015;
      goto LAB_001ef3f4;
    }
  }
  else {
    if (iVar1 == 6) {
      local_24 = 0x80050014;
      goto LAB_001ef3f4;
    }
    if ((iVar1 == 0x37) || (iVar1 == 0x38)) {
      local_24 = 0x80050009;
      goto LAB_001ef3f4;
    }
  }
  local_24 = 0x80050001;
LAB_001ef3f4:
  FUN_0018aa70(auStack_40,&local_24);
  FUN_0018ab44(param_1 + 0x1a0,auStack_40);
  *(undefined1 *)(param_1 + 0x200) = 1;
  (**(code **)(*(long *)(param_1 + 0x1b8) + 0x20))(param_1 + 0x1b8);
  return;
}


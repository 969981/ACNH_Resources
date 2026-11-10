
int FUN_001f3970(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  undefined1 local_58 [8];
  undefined8 local_50;
  undefined8 uStack_48;
  
  *param_4 = 0;
  (**(code **)(*(long *)(param_1 + 0x76) + 0x10))(param_1 + 0x76);
  if (*param_1 == 0) {
    iVar1 = FUN_001f62f0(*(undefined8 *)(param_1 + 0x56));
    if (iVar1 == 0) {
      iVar1 = FUN_001f6340(*(undefined8 *)(param_1 + 0x56));
      iVar1 = (uint)(iVar1 == 0) << 2;
      goto LAB_001f39b8;
    }
    FUN_001f5e80();
    iVar1 = FUN_001f6360(*(undefined8 *)(param_1 + 0x56));
    if (iVar1 == 0) {
      iVar1 = 0;
      goto LAB_001f39b8;
    }
    *(undefined1 *)((long)param_1 + 0x1c9) = 1;
    *param_1 = 3;
  }
  iVar1 = 4;
LAB_001f39b8:
  (**(code **)(*(long *)(param_1 + 0x76) + 0x20))(param_1 + 0x76);
  local_58[0] = 2;
  local_50 = param_2;
  uStack_48 = param_3;
  FUN_001f4fa0(*(undefined8 *)(param_1 + 0x56),local_58);
  if (iVar1 == 0) {
    iVar1 = FUN_001f5e80(*(undefined8 *)(param_1 + 0x56));
    if (iVar1 < 0) {
      iVar1 = 1;
      *(undefined1 *)((long)param_1 + 0x1c9) = 1;
      *param_1 = 3;
    }
    else {
      iVar1 = 0;
      *param_4 = param_3;
    }
  }
  return iVar1;
}


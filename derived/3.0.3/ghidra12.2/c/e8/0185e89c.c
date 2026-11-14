
uint FUN_0185e89c(long param_1)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  undefined8 local_40;
  float local_38;
  undefined *local_30;
  int local_28;
  int iStack_24;
  byte local_8 [4];
  undefined4 local_4;
  
  local_38 = 0.0;
  local_40 = 0;
  local_30 = PTR_DAT_04bb2010 + 0x10;
  local_28 = (int)((float)(int)*(float *)(param_1 + 0x334) / 5.0) -
             (uint)(*(float *)(param_1 + 0x334) < 0.0);
  iStack_24 = (int)((float)(int)*(float *)(param_1 + 0x33c) / 5.0) -
              (uint)(*(float *)(param_1 + 0x33c) < 0.0);
  uVar3 = FUN_01a1d760(&local_30,&local_40);
  if ((uVar3 & 1) == 0) {
    local_4 = 0;
    local_8[0] = *(byte *)(param_1 + 0x494) ^ 1;
    uVar1 = (**(code **)(param_1 + 0x498))
                      (*(undefined4 *)(param_1 + 0x338),local_28,iStack_24,local_8);
    uVar1 = uVar1 ^ 1;
  }
  else {
    local_40 = CONCAT44(*(undefined4 *)(param_1 + 0x338),(float)local_40);
    if (((DAT_052a3f58 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_052a3f58), iVar2 != 0)) {
      DAT_052a3f54 = 12.25;
      __cxa_guard_release(&DAT_052a3f58);
    }
    local_40._0_4_ = *(float *)(param_1 + 0x334) - (float)local_40;
    local_38 = *(float *)(param_1 + 0x33c) - local_38;
    if (DAT_052a3f54 <= local_38 * local_38 + (float)local_40 * (float)local_40) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1 & 1;
}


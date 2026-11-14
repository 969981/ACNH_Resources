
void FUN_01bf1db8(undefined8 *param_1,undefined8 param_2)

{
  uint uVar1;
  
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  *param_1 = param_2;
  param_1[1] = &PTR_LAB_04a3e2c0;
  param_1[7] = &PTR_LAB_04a3d2e0;
  param_1[8] = param_1 + 10;
  FUN_01be63cc();
  uVar1 = nn::os::GetSystemTick();
  *(undefined4 *)(param_1 + 0x312) = 0;
  uVar1 = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 1;
  param_1[0x310] = &PTR_LAB_04a3d2e0;
  *(uint *)(param_1 + 0x30e) = uVar1;
  uVar1 = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 2;
  *(uint *)((long)param_1 + 0x1874) = uVar1;
  uVar1 = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 3;
  *(uint *)(param_1 + 0x30f) = uVar1;
  *(uint *)((long)param_1 + 0x187c) = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 4;
  param_1[0x311] = param_1 + 0x313;
  FUN_01be63cc();
  uVar1 = nn::os::GetSystemTick();
  param_1[0x310] = &PTR_LAB_04a3e1d0;
  param_1[0x619] = 0;
  uVar1 = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 1;
  *(uint *)(param_1 + 0x617) = uVar1;
  uVar1 = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 2;
  *(uint *)((long)param_1 + 0x30bc) = uVar1;
  uVar1 = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 3;
  *(uint *)(param_1 + 0x618) = uVar1;
  *(uint *)((long)param_1 + 0x30c4) = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 4;
  (**(code **)(*(long *)param_1[8] + 0x18))();
  *(undefined4 *)(param_1 + 9) = 8;
  (**(code **)(*(long *)param_1[0x311] + 0x18))();
  *(undefined4 *)(param_1 + 0x312) = 8;
  return;
}


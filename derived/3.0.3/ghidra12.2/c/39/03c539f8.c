
/* WARNING: Removing unreachable block (ram,0x03c53ab0) */
/* WARNING: Removing unreachable block (ram,0x03c53af8) */
/* WARNING: Removing unreachable block (ram,0x03c53b54) */
/* WARNING: Removing unreachable block (ram,0x03c53a7c) */
/* WARNING: Removing unreachable block (ram,0x03c53ac4) */

void FUN_03c539f8(undefined8 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  *param_1 = &PTR_FUN_04b810b0;
  FUN_038e18e4(param_1 + 1);
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined4 *)((long)param_1 + 0x4c) = 0;
  FUN_038e3114(param_1 + 10,0,0x7fff);
  *(undefined4 *)(param_1 + 0x13) = 0;
  FUN_038e3114(param_1 + 0x14,0,0x7fff);
  *(undefined4 *)(param_1 + 0x1d) = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  *(undefined4 *)((long)param_1 + 0x10c) = 0;
  param_1[0x20] = 0x1000100020003;
  uVar2 = 0x20003;
  *(undefined4 *)(param_1 + 0x20) = 0x20003;
  DAT_04c4b970 = 0x20003;
  nn::oe::SetPerformanceConfiguration(0,0x20003);
  iVar1 = *(int *)((long)param_1 + 0x104);
  if (iVar1 == 0x20004) {
    uVar2 = 0x20004;
  }
  else if (iVar1 != 0x20003) {
    if (iVar1 != 0x10001) goto LAB_03c53b64;
    uVar2 = 0x10001;
  }
  *(undefined4 *)((long)param_1 + 0x104) = uVar2;
  DAT_04c4b974 = uVar2;
  nn::oe::SetPerformanceConfiguration(1,uVar2);
LAB_03c53b64:
  iVar1 = nn::oe::GetOperationMode();
  *(bool *)(param_1 + 0x21) = iVar1 == 1;
  iVar1 = nn::oe::GetPerformanceMode();
  *(uint *)((long)param_1 + 0x10c) = (uint)(iVar1 != 0);
  return;
}


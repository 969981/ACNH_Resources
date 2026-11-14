
/* WARNING: Removing unreachable block (ram,0x01627e7c) */

void FUN_01627e30(long param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04bd0c68;
  *(undefined4 *)(*(long *)PTR_DAT_04bb2260 + 0x100) = 0x20004;
  *(undefined4 *)puVar1 = 0x20004;
  nn::oe::SetPerformanceConfiguration(0);
  *(undefined8 *)(param_1 + 0x4c) = 0;
  *(undefined8 *)(param_1 + 0x44) = 0;
  *(undefined8 *)(param_1 + 0x3c) = 0;
  return;
}


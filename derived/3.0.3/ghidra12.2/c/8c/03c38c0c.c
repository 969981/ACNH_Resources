
/* WARNING: Removing unreachable block (ram,0x03c38c50) */

void FUN_03c38c0c(long param_1,uint param_2,int param_3,long param_4)

{
  uint uVar1;
  VibrationDeviceHandle *pVVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  undefined8 *puVar6;
  
  puVar3 = PTR_DAT_04bb4f38;
  if (*(uint *)(*(long *)PTR_DAT_04bb2648 + 0x330) <= param_2) {
    param_2 = 0;
  }
  puVar6 = *(undefined8 **)
            (*(long *)(*(long *)(*(long *)PTR_DAT_04bb2648 + 0x338) + (long)(int)param_2 * 8) +
            0xc20);
  if (((*PTR_DAT_04bb4f38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb4f38), iVar4 != 0))
  {
    *(undefined **)PTR_DAT_04bb4f30 = PTR_DAT_04bb4f40 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb4f38);
  }
  if ((puVar6 != (undefined8 *)0x0) &&
     (uVar5 = (**(code **)*puVar6)(puVar6,PTR_DAT_04bb4f30), (uVar5 & 1) == 0)) {
    puVar6 = (undefined8 *)0x0;
  }
  if (((*puVar3 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb4f38), iVar4 != 0)) {
    *(undefined **)PTR_DAT_04bb4f30 = PTR_DAT_04bb4f40 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb4f38);
  }
  uVar5 = (**(code **)*puVar6)(puVar6,PTR_DAT_04bb4f30);
  if ((uVar5 & 1) == 0) {
    puVar6 = (undefined8 *)0x0;
  }
  uVar1 = param_3 + *(int *)(puVar6 + 0x2f) * 2;
  pVVar2 = (VibrationDeviceHandle *)(param_1 + 0x4ab8) + (ulong)uVar1 * 0x50;
  if (0x11 < uVar1) {
    pVVar2 = (VibrationDeviceHandle *)(param_1 + 0x4ab8);
  }
  if (param_4 == 0) {
    nn::hid::VibrationTarget::UnsetVibrationDeviceHandle();
    return;
  }
  nn::hid::VibrationTarget::SetVibrationDeviceHandle(pVVar2);
  return;
}


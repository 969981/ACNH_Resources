
void FUN_03121684(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  if ((*(int *)(param_1 + 0x278) == 0) && (uVar2 = FUN_01596728(param_1 + 0x280), (uVar2 & 1) != 0))
  {
    if (*(long *)(param_1 + 0x298) != 0) {
      FUN_03b137d0(param_1 + 0x2a8,*(long *)(param_1 + 0x298) + 0x10,0);
      *(undefined4 *)(param_1 + 0x2c0) = 0;
    }
    *(undefined4 *)(param_1 + 0x278) = 1;
  }
  puVar4 = *(undefined8 **)(param_1 + 0x30);
  if (((*PTR_DAT_04bc4d48 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4d48), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bc4d40 = PTR_DAT_04bc4d50 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4d48);
  }
  if ((((puVar4 != (undefined8 *)0x0) &&
       (uVar2 = (**(code **)*puVar4)(puVar4,PTR_DAT_04bc4d40), (uVar2 & 1) != 0)) &&
      ((long *)puVar4[0x36] != (long *)0x0)) &&
     (((uVar2 = (**(code **)(*(long *)puVar4[0x36] + 0x50))(), (uVar2 & 1) != 0 &&
       (*(int *)(param_1 + 0x278) != 2)) &&
      (lVar3 = *(long *)(*(long *)PTR_DAT_04bb2200 + 0x100), lVar3 != 0)))) {
    *(undefined8 *)(param_1 + 0x2b0) = *(undefined8 *)(param_1 + 0x2d0);
    *(undefined4 *)(param_1 + 0x2b8) = *(undefined4 *)(param_1 + 0x2d8);
    *(undefined4 *)(param_1 + 0x2c0) = *(undefined4 *)(param_1 + 0x2e0);
    FUN_015a30c0(lVar3,param_1 + 0x280);
    *(undefined4 *)(param_1 + 0x278) = 2;
  }
  return;
}


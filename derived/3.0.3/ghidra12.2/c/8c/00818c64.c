
undefined8 FUN_00818c64(long param_1,uint *param_2)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  undefined8 *puVar4;
  
  lVar1 = param_1 + 0x800 + (ulong)*param_2 * 0x50;
  if (5 < *param_2) {
    lVar1 = param_1 + 0x800;
  }
  if ((*(byte *)(lVar1 + 0x18) >> 1 & 1) != 0) {
    uVar3 = FUN_03f2d924(lVar1 + 0x10);
    if ((uVar3 & 1) != 0) {
      puVar4 = (undefined8 *)FUN_03f2d7f0(lVar1 + 0x10);
      if (((*PTR_DAT_04bb4440 & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(PTR_DAT_04bb4440), iVar2 != 0)) {
        *(undefined **)PTR_DAT_04bb4438 = PTR_DAT_04bb4448 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb4440);
      }
      if ((puVar4 != (undefined8 *)0x0) &&
         (uVar3 = (**(code **)*puVar4)(puVar4,PTR_DAT_04bb4438), (uVar3 & 1) != 0)) {
        return puVar4[5];
      }
    }
  }
  return 0;
}


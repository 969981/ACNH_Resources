
undefined8 FUN_02d0ca2c(long param_1)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined *local_30;
  undefined4 local_28;
  
  lVar4 = *(long *)(param_1 + 0x210);
  if (lVar4 == 0) {
    return 0;
  }
  plVar2 = *(long **)(**(long **)(lVar4 + 0x3f8) + 0x1b0);
  if (plVar2 != (long *)0x0) {
    uVar3 = (**(code **)(*plVar2 + 0x48))();
    if ((uVar3 & 1) == 0) {
      return 0;
    }
    lVar4 = *(long *)(param_1 + 0x210);
  }
  puVar5 = (undefined8 *)**(undefined8 **)(lVar4 + 0x3f8);
  if (((*PTR_DAT_04bc4e60 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4e60);
  }
  if ((puVar5 != (undefined8 *)0x0) &&
     (uVar3 = (**(code **)*puVar5)(puVar5,PTR_DAT_04bc4e58), (uVar3 & 1) != 0)) {
    puVar5 = (undefined8 *)puVar5[0x36];
    if (((*PTR_DAT_04bc5ec8 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc5ec8), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bc5ec0 = PTR_DAT_04bc5c58 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc5ec8);
    }
    if ((((puVar5 != (undefined8 *)0x0) &&
         (uVar3 = (**(code **)*puVar5)(puVar5,PTR_DAT_04bc5ec0), (uVar3 & 1) != 0)) &&
        (plVar2 = (long *)puVar5[5], plVar2 != (long *)0x0)) && (plVar2[1] != 0)) {
      local_30 = PTR_DAT_04bc4f00 + 0x10;
      local_28 = 0xc;
      (**(code **)(*plVar2 + 0x20))(plVar2,&local_30);
      uVar3 = (**(code **)(plVar2[3] + 0xe0))(plVar2[1]);
      if ((uVar3 & 1) != 0) {
        return 1;
      }
    }
  }
  return 0;
}


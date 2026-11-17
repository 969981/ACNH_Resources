
undefined8 FUN_02d10724(long *param_1)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined *local_30;
  undefined4 local_28;
  
  plVar2 = (long *)(**(code **)(*param_1 + 0x270))();
  if ((plVar2 != (long *)0x0) && ((*(uint *)(param_1 + 0x36) & 0xfffffffe) != 10)) {
    uVar3 = (**(code **)(*plVar2 + 0x138))(plVar2,0);
    if ((uVar3 & 1) == 0) {
      return 0;
    }
    puVar4 = (undefined8 *)**(undefined8 **)(param_1[0x3895] + 0x3f8);
    if (((*PTR_DAT_04bc4e60 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4e60);
    }
    if ((puVar4 != (undefined8 *)0x0) &&
       (uVar3 = (**(code **)*puVar4)(puVar4,PTR_DAT_04bc4e58), (uVar3 & 1) != 0)) {
      puVar4 = (undefined8 *)puVar4[0x36];
      if (((*PTR_DAT_04bc5ec8 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc5ec8), iVar1 != 0)) {
        *(undefined **)PTR_DAT_04bc5ec0 = PTR_DAT_04bc5c58 + 0x10;
        __cxa_guard_release(PTR_DAT_04bc5ec8);
      }
      if ((((puVar4 != (undefined8 *)0x0) &&
           (uVar3 = (**(code **)*puVar4)(puVar4,PTR_DAT_04bc5ec0), (uVar3 & 1) != 0)) &&
          (plVar2 = (long *)puVar4[5], plVar2 != (long *)0x0)) && (plVar2[1] != 0)) {
        local_30 = PTR_DAT_04bc4f00 + 0x10;
        local_28 = 0xc;
        (**(code **)(*plVar2 + 0x20))(plVar2,&local_30);
        uVar3 = (**(code **)(plVar2[3] + 0xe0))(plVar2[1]);
        if ((uVar3 & 1) != 0) {
          return 1;
        }
      }
    }
  }
  return 0;
}


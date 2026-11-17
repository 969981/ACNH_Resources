
uint FUN_0302a290(long param_1)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined *local_30;
  undefined4 local_28;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0x220) != 0) {
    puVar4 = (undefined8 *)**(undefined8 **)(*(long *)(param_1 + 0x210) + 0x3f8);
    if (((*PTR_DAT_04bc4e60 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar2 != 0)) {
      *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4e60);
    }
    if (((puVar4 == (undefined8 *)0x0) ||
        (uVar3 = (**(code **)*puVar4)(puVar4,PTR_DAT_04bc4e58), (uVar3 & 1) == 0)) ||
       (plVar5 = *(long **)puVar4[0x45], plVar5 == (long *)0x0)) {
      uVar1 = 1;
    }
    else {
      local_30 = PTR_DAT_04bc4f00 + 0x10;
      local_28 = 3;
      (**(code **)(*plVar5 + 0x20))(plVar5,&local_30);
      uVar1 = (**(code **)(plVar5[3] + 0x50))(plVar5[1]);
      uVar1 = uVar1 ^ 1;
    }
  }
  return uVar1 & 1;
}


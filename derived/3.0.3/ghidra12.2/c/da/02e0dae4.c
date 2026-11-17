
void FUN_02e0dae4(long param_1,ulong param_2)

{
  int iVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined *local_30;
  undefined4 local_28;
  
  if (*(long *)(param_1 + 0x220) != 0) {
    puVar3 = (undefined8 *)**(undefined8 **)(*(long *)(param_1 + 0x220) + 0x3f8);
    if (((*PTR_DAT_04bc4e60 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4e60);
    }
    if (((puVar3 != (undefined8 *)0x0) &&
        (uVar2 = (**(code **)*puVar3)(puVar3,PTR_DAT_04bc4e58), (uVar2 & 1) != 0)) &&
       (plVar4 = *(long **)(puVar3[0x45] + (ulong)(2 < *(uint *)(puVar3 + 0x44)) * 0x10),
       plVar4 != (long *)0x0)) {
      local_30 = PTR_DAT_04bc4f00 + 0x10;
      if ((param_2 & 1) == 0) {
        local_28 = 0x14;
        (**(code **)(*plVar4 + 0x18))(plVar4,&local_30);
        uVar5 = 0x3f800000;
      }
      else {
        local_28 = 0x14;
        (**(code **)(*plVar4 + 0x18))(plVar4,&local_30);
        uVar5 = 0;
      }
      (**(code **)(plVar4[3] + 0x158))(uVar5,plVar4[1]);
    }
  }
  return;
}


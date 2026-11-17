
void FUN_02fcebb0(long param_1)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  undefined **local_60;
  undefined **local_58;
  long local_50;
  
  local_60 = &PTR_LAB_04aee208;
  local_58 = &PTR_LAB_04aee0e8;
  local_50 = param_1;
  (**(code **)(**(long **)(param_1 + 0x238) + 0x10))(*(long **)(param_1 + 0x238),&local_60);
  puVar4 = (undefined8 *)**(undefined8 **)(*(long *)(param_1 + 0x210) + 0x3f8);
  if (((*PTR_DAT_04bc4e60 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar2 != 0))
  {
    *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4e60);
  }
  puVar1 = PTR_DAT_04bc4e68;
  if ((((puVar4 != (undefined8 *)0x0) &&
       (uVar3 = (**(code **)*puVar4)(puVar4,PTR_DAT_04bc4e58), (uVar3 & 1) != 0)) &&
      (plVar5 = *(long **)(puVar4[0x45] + (ulong)(4 < *(uint *)(puVar4 + 0x44)) * 0x20),
      plVar5 != (long *)0x0)) && (plVar5[1] != 0)) {
    local_60 = (undefined **)(puVar1 + 0x10);
    local_58 = (undefined **)CONCAT44(local_58._4_4_,1);
    (**(code **)(*plVar5 + 0x18))(plVar5,&local_60);
    (**(code **)(plVar5[3] + 400))(0x3f800000,plVar5[1]);
  }
  lVar6 = *(long *)(*(long *)(param_1 + 0x210) + 0x590);
  plVar5 = (long *)**(undefined8 **)(lVar6 + 0x2f0);
  local_60 = (undefined **)(puVar1 + 0x10);
  local_58 = (undefined **)CONCAT44(local_58._4_4_,1);
  (**(code **)(*plVar5 + 0x18))(plVar5,&local_60);
  (**(code **)(plVar5[3] + 400))(0x3f800000,plVar5[1]);
  *(undefined1 *)(**(long **)(lVar6 + 0x238) + 0xbc) = 0;
  return;
}


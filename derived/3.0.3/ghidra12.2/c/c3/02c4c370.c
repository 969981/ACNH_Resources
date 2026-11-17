
uint FUN_02c4c370(long param_1)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined *local_30;
  undefined4 local_28;
  
  puVar5 = (undefined8 *)**(undefined8 **)(*(long *)(param_1 + 0x210) + 0x3f8);
  if (((*PTR_DAT_04bc4e60 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar3 != 0))
  {
    *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4e60);
  }
  if ((puVar5 != (undefined8 *)0x0) &&
     (uVar4 = (**(code **)*puVar5)(puVar5,PTR_DAT_04bc4e58), (uVar4 & 1) != 0)) {
    lVar1 = 0x28;
    if (*(uint *)(puVar5 + 0x44) < 6) {
      lVar1 = 0;
    }
    plVar6 = *(long **)(puVar5[0x45] + lVar1);
    if (plVar6 != (long *)0x0) {
      local_30 = PTR_DAT_04bc4f00 + 0x10;
      local_28 = 3;
      (**(code **)(*plVar6 + 0x20))(plVar6,&local_30);
      uVar2 = (**(code **)(plVar6[3] + 0x50))(plVar6[1]);
      goto LAB_02c4c41c;
    }
  }
  uVar2 = 0;
LAB_02c4c41c:
  return uVar2 & 1;
}


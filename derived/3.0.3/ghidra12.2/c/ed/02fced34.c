
void FUN_02fced34(long param_1)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined *local_40;
  undefined4 local_38;
  
  puVar5 = (undefined8 *)**(undefined8 **)(*(long *)(param_1 + 0x210) + 0x3f8);
  if (((*PTR_DAT_04bc4e60 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar2 != 0))
  {
    *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4e60);
  }
  puVar1 = PTR_DAT_04bc4e68;
  if ((puVar5 != (undefined8 *)0x0) &&
     (uVar3 = (**(code **)*puVar5)(puVar5,PTR_DAT_04bc4e58), (uVar3 & 1) != 0)) {
    lVar4 = 0x28;
    if (*(uint *)(puVar5 + 0x44) < 6) {
      lVar4 = 0;
    }
    plVar6 = *(long **)(puVar5[0x45] + lVar4);
    if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
      local_40 = puVar1 + 0x10;
      local_38 = 1;
      (**(code **)(*plVar6 + 0x18))(plVar6,&local_40);
      (**(code **)(plVar6[3] + 400))(0x3f800000,plVar6[1]);
    }
  }
  lVar4 = *(long *)(*(long *)(param_1 + 0x210) + 0x590);
  plVar6 = *(long **)(*(long *)(lVar4 + 0x2f0) + (ulong)(1 < *(uint *)(lVar4 + 0x2e8)) * 8);
  local_40 = puVar1 + 0x10;
  local_38 = 1;
  (**(code **)(*plVar6 + 0x18))(plVar6,&local_40);
  (**(code **)(plVar6[3] + 400))(0x3f800000,plVar6[1]);
  if (*(int *)(param_1 + 0x1f0 + (ulong)*(byte *)(param_1 + 0x200) * 4) == -1) {
    *(undefined4 *)(param_1 + 0x1f0 + (ulong)*(byte *)(param_1 + 0x200) * 4) = 4;
  }
  return;
}


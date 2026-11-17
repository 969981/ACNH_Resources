
undefined8 FUN_0302a384(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined *local_30;
  undefined4 local_28;
  
  if (*(int *)(param_1 + 0x220) == 1) {
    return 0;
  }
  puVar4 = (undefined8 *)**(undefined8 **)(*(long *)(param_1 + 0x210) + 0x3f8);
  if (((*PTR_DAT_04bc4e60 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4e60);
  }
  if ((puVar4 == (undefined8 *)0x0) ||
     (uVar2 = (**(code **)*puVar4)(puVar4,PTR_DAT_04bc4e58), (uVar2 & 1) == 0)) {
LAB_0302a43c:
    uVar3 = 0;
  }
  else {
    plVar5 = *(long **)(puVar4[0x45] + (ulong)(1 < *(uint *)(puVar4 + 0x44)) * 8);
    if (plVar5 != (long *)0x0) {
      local_30 = PTR_DAT_04bc4f00 + 0x10;
      local_28 = 3;
      (**(code **)(*plVar5 + 0x20))(plVar5,&local_30);
      uVar2 = (**(code **)(plVar5[3] + 0x50))(plVar5[1]);
      if ((uVar2 & 1) != 0) goto LAB_0302a43c;
    }
    uVar3 = 1;
  }
  return uVar3;
}



ulong FUN_0346cbb0(long param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined *local_40;
  undefined4 local_38;
  
  puVar4 = (undefined8 *)**(undefined8 **)(param_1 + 0x3f8);
  if (((*PTR_DAT_04bc4e60 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar2 != 0))
  {
    *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4e60);
  }
  if (((puVar4 == (undefined8 *)0x0) ||
      (uVar3 = (**(code **)*puVar4)(puVar4,PTR_DAT_04bc4e58), (uVar3 & 1) == 0)) ||
     (plVar5 = *(long **)(puVar4[0x45] + (ulong)(2 < *(uint *)(puVar4 + 0x44)) * 0x10),
     plVar5 == (long *)0x0)) {
    if (*(uint *)(param_1 + 0x3f0) <= param_2) {
      param_2 = 0;
    }
    plVar5 = *(long **)(*(long *)(*(long *)(param_1 + 0x3f8) + (long)(int)param_2 * 8) + 0x1b0);
    uVar3 = 0;
    if (plVar5 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0346cca4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(*plVar5 + 0x50))();
      return uVar3;
    }
  }
  else {
    local_40 = PTR_DAT_04bc4f00 + 0x10;
    local_38 = 0xc;
    (**(code **)(*plVar5 + 0x20))(plVar5,&local_40);
    uVar1 = (**(code **)(plVar5[3] + 0xe0))(plVar5[1]);
    uVar3 = (ulong)(uVar1 & *(char *)(param_1 + 0x629) == '\0');
  }
  return uVar3;
}



void FUN_02e39a50(long param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  long *plVar3;
  int iVar4;
  undefined *local_40;
  undefined4 local_38;
  
  if (-1 < *(int *)(param_1 + 0xf10)) {
    puVar2 = (undefined8 *)**(undefined8 **)(*(long *)(param_1 + 0x210) + 0x3f8);
    if (((*PTR_DAT_04bc4e60 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar4 != 0)) {
      *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4e60);
    }
    if ((puVar2 != (undefined8 *)0x0) &&
       (uVar1 = (**(code **)*puVar2)(puVar2,PTR_DAT_04bc4e58), (uVar1 & 1) != 0)) {
      plVar3 = *(long **)(puVar2[0x45] + (ulong)(1 < *(uint *)(puVar2 + 0x44)) * 8);
      if (plVar3 != (long *)0x0) {
        iVar4 = *(int *)(param_1 + 0xf10);
        local_40 = PTR_DAT_04bc4f00 + 0x10;
        local_38 = 0x14;
        (**(code **)(*plVar3 + 0x18))(plVar3,&local_40);
        (**(code **)(plVar3[3] + 0x158))((float)iVar4,plVar3[1]);
      }
      *(undefined4 *)(param_1 + 0xf10) = 0xffffffff;
    }
  }
  return;
}


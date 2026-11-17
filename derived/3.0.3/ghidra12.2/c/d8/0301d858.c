
void FUN_0301d858(long param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined *local_30;
  undefined4 local_28;
  
  puVar4 = (undefined8 *)**(undefined8 **)(*(long *)(param_1 + 0x210) + 0x3f8);
  if (((*PTR_DAT_04bc4e60 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar2 != 0))
  {
    *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4e60);
  }
  if ((puVar4 != (undefined8 *)0x0) &&
     (uVar3 = (**(code **)*puVar4)(puVar4,PTR_DAT_04bc4e58), (uVar3 & 1) != 0)) {
    lVar1 = 0x30;
    if (*(uint *)(puVar4 + 0x44) < 7) {
      lVar1 = 0;
    }
    plVar5 = *(long **)(puVar4[0x45] + lVar1);
    if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
      local_30 = PTR_DAT_04bc4e68 + 0x10;
      local_28 = 1;
      (**(code **)(*plVar5 + 0x18))(plVar5,&local_30);
      (**(code **)(plVar5[3] + 400))(0x3f800000,plVar5[1]);
    }
  }
  return;
}


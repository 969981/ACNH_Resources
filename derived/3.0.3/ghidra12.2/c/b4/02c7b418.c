
void FUN_02c7b418(long param_1,int *param_2)

{
  int iVar1;
  ulong uVar2;
  uint uVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined *local_40;
  char *local_38;
  
  if (*param_2 == 4) {
    uVar3 = 3;
  }
  else {
    if (*param_2 == -1) {
      local_40 = PTR_DAT_04bb2020 + 0x10;
      local_38 = "MarketBuiltMyVillage";
      iVar1 = FUN_0274bce0(param_1 + 0x1f8,&local_40);
      uVar3 = 4;
      if (iVar1 == 0) {
        uVar3 = 1;
      }
      puVar4 = (undefined8 *)**(long **)(*(long *)(param_1 + 0x210) + 0x3f8);
      if (((*PTR_DAT_04bc4e60 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar1 != 0)) {
        *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
        __cxa_guard_release(PTR_DAT_04bc4e60);
      }
      uVar2 = (**(code **)*puVar4)(puVar4,PTR_DAT_04bc4e58);
      if ((uVar2 & 1) == 0) {
        puVar4 = (undefined8 *)0x0;
      }
      if (*(uint *)(puVar4 + 0x44) <= uVar3) {
        uVar3 = 0;
      }
      plVar5 = *(long **)(puVar4[0x45] + (ulong)uVar3 * 8);
      if (plVar5 == (long *)0x0) {
        return;
      }
      local_40 = PTR_DAT_04bc4e68 + 0x10;
      local_38 = (char *)CONCAT44(local_38._4_4_,6);
      (**(code **)(*plVar5 + 0x18))(plVar5,&local_40);
      (**(code **)(plVar5[3] + 0x1b8))(plVar5[1]);
      return;
    }
    uVar3 = 0;
  }
  puVar4 = (undefined8 *)**(long **)(*(long *)(param_1 + 0x210) + 0x3f8);
  if (((*PTR_DAT_04bc4e60 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4e60);
  }
  uVar2 = (**(code **)*puVar4)(puVar4,PTR_DAT_04bc4e58);
  if ((uVar2 & 1) == 0) {
    puVar4 = (undefined8 *)0x0;
  }
  if (*(uint *)(puVar4 + 0x44) <= uVar3) {
    uVar3 = 0;
  }
  plVar5 = *(long **)(puVar4[0x45] + (ulong)uVar3 * 8);
  if (plVar5 != (long *)0x0) {
    local_40 = PTR_DAT_04bc4e68 + 0x10;
    local_38 = (char *)CONCAT44(local_38._4_4_,7);
    (**(code **)(*plVar5 + 0x18))(plVar5,&local_40);
    (**(code **)(plVar5[3] + 0x1c0))(plVar5[1]);
    *(long **)(param_1 + 0x1c670) = plVar5;
  }
  return;
}



undefined8 * FUN_03ee9000(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined1 local_e8;
  undefined ***local_e0;
  undefined *puStack_d8;
  undefined *local_d0;
  undefined8 uStack_c8;
  undefined4 local_c0;
  undefined **local_b8;
  long local_b0 [5];
  undefined ***local_88;
  undefined8 uStack_80;
  undefined *local_78;
  undefined1 *puStack_70;
  undefined4 local_68;
  undefined1 local_64 [31];
  undefined1 local_45;
  
  local_b0[3] = 0;
  local_b0[4] = 0;
  uStack_80 = 0;
  local_b8 = (undefined **)(PTR_DAT_04bd0d40 + 0x10);
  local_b0[0] = 0;
  local_b0[1] = 0;
  local_b0[2] = 0;
  local_88 = &local_b8;
  if (*(long *)PTR_DAT_04bb2698 != 0) {
    lVar3 = FUN_038cb610(*(long *)PTR_DAT_04bb2698,&local_b8);
    local_b0[0] = lVar3;
    if (lVar3 != 0) {
      if ((*(uint *)(lVar3 + 0xd0) & 1) == 0) {
        lVar8 = 0;
      }
      else {
        lVar8 = lVar3 + 0x90;
        nn::os::LockMutex((MutexType *)(lVar3 + 0xb0));
      }
      plVar7 = (long *)(lVar3 + 0x70);
      lVar6 = *plVar7;
      iVar2 = *(int *)(lVar3 + 0x84);
      plVar1 = (long *)((long)local_b0 + (long)iVar2 + -8);
      *plVar7 = (long)plVar1;
      *plVar1 = lVar6;
      *(long **)((long)local_b0 + (long)iVar2) = plVar7;
      if (lVar6 != 0) {
        *(long **)(lVar6 + 8) = plVar1;
      }
      *(int *)(lVar3 + 0x80) = *(int *)(lVar3 + 0x80) + 1;
      if (lVar8 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar8 + 0x20));
      }
    }
  }
  local_45 = 0;
  puStack_70 = local_64;
  local_64[0] = 0;
  local_e8 = 0;
  local_b8 = &PTR_FUN_04ba7138;
  local_78 = PTR_DAT_04bb2028 + 0x10;
  local_68 = 0x20;
  local_c0 = 0x20;
  puStack_d8 = PTR_DAT_04bb2020 + 0x10;
  local_d0 = PTR_DAT_04bb2120;
  local_f8 = param_1;
  local_f0 = param_2;
  uStack_ec = param_2;
  local_e0 = &local_b8;
  uStack_c8 = param_3;
  puVar4 = (undefined8 *)FUN_038da2f0(*(undefined8 *)PTR_DAT_04bb28c8,&local_f8);
  if (((DAT_05b05358 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_05b05358), iVar2 != 0)) {
    DAT_05b05350 = PTR_DAT_04bb2870 + 0x10;
    __cxa_guard_release(&DAT_05b05358);
  }
  if ((puVar4 != (undefined8 *)0x0) &&
     (uVar5 = (**(code **)*puVar4)(puVar4,&DAT_05b05350), (uVar5 & 1) == 0)) {
    puVar4 = (undefined8 *)0x0;
  }
  FUN_038d92c4(&local_b8);
  return puVar4;
}


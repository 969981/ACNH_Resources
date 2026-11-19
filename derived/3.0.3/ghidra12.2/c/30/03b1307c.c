
void FUN_03b1307c(long *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined **local_118;
  long local_110 [5];
  undefined ***local_e8;
  undefined8 uStack_e0;
  undefined *local_d8;
  undefined1 *puStack_d0;
  undefined4 local_c8;
  undefined1 local_c4 [31];
  undefined1 local_a5;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined1 local_90;
  undefined ***local_88;
  undefined *local_80;
  undefined *puStack_78;
  undefined8 local_70;
  undefined4 local_68;
  
  local_90 = 0;
  local_110[3] = 0;
  local_110[4] = 0;
  local_68 = 0x20;
  local_80 = PTR_DAT_04bb2020 + 0x10;
  puStack_78 = PTR_DAT_04bb2120;
  uStack_e0 = 0;
  local_118 = (undefined **)(PTR_DAT_04bd0d40 + 0x10);
  local_110[0] = 0;
  local_110[1] = 0;
  local_110[2] = 0;
  local_e8 = &local_118;
  if (*(long *)PTR_DAT_04bb2698 != 0) {
    lVar3 = FUN_038cb610(*(long *)PTR_DAT_04bb2698,&local_118);
    local_110[0] = lVar3;
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
      plVar1 = (long *)((long)local_110 + (long)iVar2 + -8);
      *plVar7 = (long)plVar1;
      *plVar1 = lVar6;
      *(long **)((long)local_110 + (long)iVar2) = plVar7;
      if (lVar6 != 0) {
        *(long **)(lVar6 + 8) = plVar1;
      }
      *(int *)(lVar3 + 0x80) = *(int *)(lVar3 + 0x80) + 1;
      if (lVar8 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar8 + 0x20));
      }
    }
  }
  local_c8 = 0x20;
  puStack_d0 = local_c4;
  local_a5 = 0;
  local_c4[0] = 0;
  local_118 = &PTR_FUN_04b73868;
  local_d8 = PTR_DAT_04bb2028 + 0x10;
  local_a0 = param_3;
  local_98 = param_4;
  uStack_94 = param_4;
  local_88 = &local_118;
  local_70 = param_2;
  puVar4 = (undefined8 *)FUN_038da2f0(*(undefined8 *)PTR_DAT_04bb28c8,&local_a0);
  if (((DAT_05aeaa08 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_05aeaa08), iVar2 != 0)) {
    DAT_05aeaa00 = &PTR_LAB_04b73940;
    __cxa_guard_release(&DAT_05aeaa08);
  }
  if (puVar4 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    uVar5 = (**(code **)*puVar4)(puVar4,&DAT_05aeaa00);
    if ((uVar5 & 1) == 0) {
      puVar4 = (undefined8 *)0x0;
    }
  }
  *param_1 = (long)puVar4;
  FUN_038d92c4(&local_118);
  return;
}


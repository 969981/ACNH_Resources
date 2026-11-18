
void FUN_032e1d30(undefined **param_1,long *param_2,undefined **param_3,long param_4)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined *local_150;
  undefined8 *puStack_148;
  undefined *local_140;
  undefined **ppuStack_138;
  undefined **local_130;
  undefined **ppuStack_128;
  undefined4 local_120;
  undefined8 local_11c;
  undefined8 local_114;
  undefined4 local_10c;
  undefined8 uStack_108;
  undefined4 uStack_100;
  undefined8 local_fc;
  undefined1 local_f4;
  undefined8 local_f0;
  undefined **local_e8 [3];
  undefined8 local_d0;
  undefined *local_c8;
  long *local_c0;
  undefined ***local_b8;
  undefined8 uStack_b0;
  undefined *local_a8;
  undefined1 *local_a0;
  undefined4 local_98;
  undefined1 local_94 [31];
  undefined1 local_75;
  undefined *local_70;
  long *local_68;
  undefined1 auStack_60 [32];
  
  plVar3 = *(long **)(param_4 + 8);
  local_70 = PTR_DAT_04bc9448 + 0x10;
  local_68 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    local_68 = (long *)(**(code **)(*plVar3 + 0x18))(plVar3,auStack_60);
  }
  if (param_2 == (long *)0x0) {
    if (param_1 != (undefined **)0x0) {
      local_c8 = (undefined *)0x0;
      local_c0 = (long *)0x0;
      local_e8[0] = (undefined **)(PTR_DAT_04bd0d40 + 0x10);
      uStack_b0 = 0;
      local_e8[1] = (undefined **)0x0;
      local_e8[2] = (undefined **)0x0;
      local_d0 = 0;
      local_b8 = local_e8;
      if (*(long *)PTR_DAT_04bb2698 != 0) {
        ppuVar5 = (undefined **)FUN_038cb610(*(long *)PTR_DAT_04bb2698,local_e8);
        local_e8[1] = ppuVar5;
        if (ppuVar5 != (undefined **)0x0) {
          if (((ulong)ppuVar5[0x1a] & 1) == 0) {
            ppuVar8 = (undefined **)0x0;
          }
          else {
            ppuVar8 = ppuVar5 + 0x12;
            nn::os::LockMutex((MutexType *)(ppuVar5 + 0x16));
          }
          ppuVar7 = ppuVar5 + 0xe;
          puVar6 = *ppuVar7;
          iVar2 = *(int *)((long)ppuVar5 + 0x84);
          plVar3 = (long *)(local_94 + (long)iVar2 + -0x54);
          *ppuVar7 = (undefined *)plVar3;
          *plVar3 = (long)puVar6;
          *(undefined ***)(local_94 + (long)iVar2 + -0x4c) = ppuVar7;
          if (puVar6 != (undefined *)0x0) {
            *(long **)(puVar6 + 8) = plVar3;
          }
          *(int *)(ppuVar5 + 0x10) = *(int *)(ppuVar5 + 0x10) + 1;
          if (ppuVar8 != (undefined **)0x0) {
            nn::os::UnlockMutex((MutexType *)(ppuVar8 + 4));
          }
        }
      }
      puVar6 = PTR_DAT_04bb28c8;
      local_a0 = local_94;
      local_75 = 0;
      local_94[0] = 0;
      local_98 = 0x20;
      local_120 = 0x20;
      local_a8 = PTR_DAT_04bb2028 + 0x10;
      local_f0 = 0;
      local_e8[0] = &PTR_FUN_04b1c280;
      local_150 = PTR_DAT_04bb2020 + 0x10;
      local_10c = 0;
      uStack_100 = 0;
      local_11c = 0;
      local_114 = 0;
      local_fc = 0;
      local_f4 = 1;
      puStack_148 = &DAT_0407ebb1;
      local_140 = local_150;
      ppuStack_138 = param_1;
      local_130 = param_3;
      ppuStack_128 = param_3;
      uStack_108 = local_e8;
      plVar3 = (long *)FUN_038da030(*(undefined8 *)PTR_DAT_04bb28c8,&local_140,&local_150,0);
      if (((*PTR_DAT_04bc9670 & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(PTR_DAT_04bc9670), iVar2 != 0)) {
        *(undefined ***)PTR_DAT_04bc9668 = &PTR_LAB_04b1c2e8;
        __cxa_guard_release(PTR_DAT_04bc9670);
      }
      if ((plVar3 != (long *)0x0) &&
         (uVar4 = (**(code **)*plVar3)(plVar3,PTR_DAT_04bc9668), (uVar4 & 1) != 0)) {
        if (local_68 != (long *)0x0) {
          (**(code **)(*local_68 + 0x20))(local_68,plVar3[1],param_3);
        }
        if (*(long *)puVar6 != 0) {
          (**(code **)(*plVar3 + 0x18))(plVar3);
        }
      }
      FUN_038d92c4(local_e8);
    }
  }
  else {
    uVar4 = (**(code **)(*param_2 + 0x38))(param_2);
    if ((uVar4 & 1) == 0) {
      uVar1 = (uint)local_98 >> 0x10;
      local_e8[0] = (undefined **)(PTR_DAT_04bb2020 + 0x10);
      local_c8 = PTR_DAT_04bc8e60 + 0x10;
      local_d0 = 0x20;
      local_c0 = (long *)0x0;
      local_98 = CONCAT22((ushort)uVar1 & 0xff00,0x100);
      local_e8[1] = param_1;
      local_e8[2] = param_3;
      (**(code **)(*param_2 + 0x20))(param_2,local_e8);
      if (local_c0 != (long *)0x0) {
        (**(code **)(*local_c0 + 8))();
      }
    }
    plVar3 = (long *)(**(code **)(*param_2 + 0x28))(param_2);
    uVar1 = (**(code **)(*param_2 + 0x30))(param_2);
    local_d0 = CONCAT44(local_d0._4_4_,1);
    local_b8 = (undefined ***)(ulong)uVar1;
    local_e8[2] = &local_c8;
    local_e8[1] = &PTR_PTR_04c4b9a0;
    local_c8 = PTR_DAT_04bd0e28 + 0x10;
    local_e8[0] = (undefined **)(PTR_DAT_04bd0e38 + 0x10);
    local_c0 = plVar3;
    plVar3 = (long *)FUN_038f01ec(local_e8,param_3,0,0x4000);
    if (local_68 != (long *)0x0) {
      (**(code **)(*local_68 + 0x20))(local_68,plVar3,param_3);
    }
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))(plVar3);
    }
    (**(code **)(*param_2 + 0x40))(param_2);
  }
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 8))();
  }
  return;
}


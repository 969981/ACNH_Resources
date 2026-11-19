
void FUN_038fb0a0(undefined8 param_1,undefined4 *param_2,long param_3)

{
  int *piVar1;
  ushort uVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined *local_278;
  undefined1 local_270 [8];
  undefined8 local_268;
  undefined8 local_1c0;
  long local_190;
  undefined8 uStack_188;
  byte local_180;
  undefined2 local_17f;
  undefined8 local_178;
  undefined8 local_d0;
  undefined4 local_c8;
  uint uStack_c4;
  uint local_c0;
  undefined4 uStack_bc;
  undefined1 auStack_b8 [48];
  undefined1 auStack_88 [64];
  undefined8 local_48;
  
  puVar6 = PTR_DAT_04bbd7c0;
  (**(code **)PTR_DAT_04bbd7b8)(auStack_88,*(undefined8 *)(*(long *)PTR_DAT_04bbd7c0 + 0x30));
  (**(code **)PTR_DAT_04bbd7b0)(auStack_88);
  (**(code **)PTR_DAT_04bbd7c8)
            (auStack_88,*(undefined8 *)(param_2 + 2),*param_2,*(undefined4 *)(param_3 + 0x40));
  lVar9 = DAT_05ae78f0;
  (**(code **)PTR_DAT_04bbd7d0)(auStack_b8,auStack_88);
  piVar1 = (int *)(lVar9 + 0x658);
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = *piVar1 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  (**(code **)PTR_DAT_04bcf040)(auStack_b8,0,*(undefined4 *)(param_3 + 0x40));
  local_d0 = 0;
  uVar2 = *(ushort *)(param_3 + 0x32);
  uStack_c4 = (uint)*(ushort *)(param_3 + 0x30);
  if (*(ushort *)(param_3 + 0x30) < 2) {
    uStack_c4 = 1;
  }
  local_c8 = 0;
  local_c0 = (uint)uVar2;
  if (*(short *)(param_3 + 0x3a) != 3) {
    local_c0 = 1;
  }
  if (local_c0 == uVar2 || local_c0 < uVar2) {
    local_c0 = (uint)uVar2;
  }
  uStack_bc = 1;
  local_278 = PTR_DAT_04bd0d18 + 0x10;
  FUN_00347d68(local_270);
  local_268 = *(undefined8 *)(*(long *)puVar6 + 0x48);
  local_270[0] = 2;
  local_180 = 0;
  local_178 = 0;
  local_278 = PTR_DAT_04bd0f88 + 0x10;
  local_190 = 0;
  uStack_188 = 0;
  local_17f = 4;
  local_1c0 = *(undefined8 *)(*(long *)puVar6 + 0x40);
  nn::os::LockMutex((MutexType *)(DAT_05ae78f0 + 0x98));
  lVar9 = DAT_05ae78f0;
  if (local_190 != 0) {
    *(undefined8 *)(local_190 + 0x30) = 0;
  }
  local_190 = lVar9 + 0xb8;
  *(undefined ***)(lVar9 + 0xe8) = &local_278;
  FUN_038fe8f0();
  uVar7 = local_1c0;
  local_180 = local_180 | 1;
  uVar5 = *(int *)(param_3 + 0x50) - (uint)*(ushort *)(DAT_05ae78f0 + 0x3da);
  if (*(uint *)(DAT_05ae78f0 + 0x368) <= uVar5) {
    uVar5 = 0;
  }
  uVar10 = *(undefined8 *)(*(long *)(DAT_05ae78f0 + 0x370) + (long)(int)uVar5 * 0x20 + 0x18);
  uVar8 = (**(code **)PTR_DAT_04bbd560)(auStack_b8);
  (**(code **)PTR_DAT_04bc8e40)(uVar7,uVar10,0,&local_d0,uVar8,0);
  uVar7 = local_1c0;
  lVar9 = *(long *)puVar6;
  nn::os::LockMutex((MutexType *)(lVar9 + 0x118));
  local_48 = (**(code **)PTR_DAT_04bcf108)(uVar7);
  (**(code **)PTR_DAT_04bcf4f8)(*(undefined8 *)(*(long *)puVar6 + 0x38),1,&local_48);
  (**(code **)PTR_DAT_04bcf508)(*(undefined8 *)(*(long *)puVar6 + 0x38));
  (**(code **)PTR_DAT_04bcf100)(uVar7);
  nn::os::UnlockMutex((MutexType *)(lVar9 + 0x118));
  FUN_038f4580(&local_278);
  (**(code **)PTR_DAT_04bcf048)(auStack_b8,0,*(undefined4 *)(param_3 + 0x40));
  lVar9 = DAT_05ae78f0;
  (**(code **)PTR_DAT_04bc8e38)(auStack_b8);
  piVar1 = (int *)(lVar9 + 0x658);
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = *piVar1 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  FUN_038f43d0(&local_278);
  return;
}


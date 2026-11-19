
void FUN_038fb9b0(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *local_1e0;
  undefined1 local_1d8 [8];
  undefined8 local_1d0;
  undefined8 local_128;
  long local_f8;
  undefined8 uStack_f0;
  byte local_e8;
  undefined2 local_e7;
  undefined8 local_e0;
  undefined8 local_38;
  
  local_1e0 = PTR_DAT_04bd0d18 + 0x10;
  FUN_00347d68(local_1d8);
  puVar1 = PTR_DAT_04bbd7c0;
  local_1d8[0] = 2;
  local_1e0 = PTR_DAT_04bd0f88 + 0x10;
  local_1d0 = *(undefined8 *)(*(long *)PTR_DAT_04bbd7c0 + 0x48);
  local_e7 = 4;
  local_e8 = 0;
  local_e0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_128 = *(undefined8 *)(*(long *)PTR_DAT_04bbd7c0 + 0x40);
  nn::os::LockMutex((MutexType *)(DAT_05ae78f0 + 0x98));
  lVar3 = DAT_05ae78f0;
  if (local_f8 != 0) {
    *(undefined8 *)(local_f8 + 0x30) = 0;
  }
  local_f8 = lVar3 + 0xb8;
  *(undefined ***)(lVar3 + 0xe8) = &local_1e0;
  FUN_038fe8f0();
  uVar2 = local_128;
  local_e8 = local_e8 | 1;
  lVar3 = *(long *)puVar1;
  nn::os::LockMutex((MutexType *)(lVar3 + 0x118));
  local_38 = (**(code **)PTR_DAT_04bcf108)(uVar2);
  (**(code **)PTR_DAT_04bcf4f8)(*(undefined8 *)(*(long *)puVar1 + 0x38),1,&local_38);
  (**(code **)PTR_DAT_04bcf508)(*(undefined8 *)(*(long *)puVar1 + 0x38));
  (**(code **)PTR_DAT_04bcf100)(uVar2);
  nn::os::UnlockMutex((MutexType *)(lVar3 + 0x118));
  FUN_038f43d0(&local_1e0);
  return;
}


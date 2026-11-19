
void FUN_038b90f4(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 *puVar3;
  
  FUN_038bf100(*(undefined8 *)(param_1 + 0x38));
  puVar3 = *(undefined8 **)(param_1 + 0x40);
  if (((*PTR_DAT_04bd0c18 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bd0c18), iVar1 != 0))
  {
    *(undefined ***)PTR_DAT_04bd0c10 = &PTR_LAB_04b63850;
    __cxa_guard_release(PTR_DAT_04bd0c18);
  }
  uVar2 = (**(code **)*puVar3)(puVar3,PTR_DAT_04bd0c10);
  if ((uVar2 & 1) == 0) {
    puVar3 = (undefined8 *)0x0;
  }
  if (puVar3[0x18] != 0) {
    nn::os::LockMutex((MutexType *)(puVar3[0x18] + 0x20));
  }
  FUN_038bbef0(puVar3 + 9);
  if (puVar3[0x18] == 0) {
    return;
  }
  nn::os::UnlockMutex((MutexType *)(puVar3[0x18] + 0x20));
  return;
}



void FUN_02a56ce8(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  
  uVar1 = *param_1;
  lVar3 = *(long *)PTR_DAT_04bb26a8;
  if ((*PTR_DAT_04bbde00 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(PTR_DAT_04bbde00);
    if (iVar2 != 0) {
      FUN_016cb6ac(PTR_DAT_04bbddf8);
      __cxa_guard_release(PTR_DAT_04bbde00);
    }
  }
  *(undefined4 *)(lVar3 + 0x122a4c) = uVar1;
  *(undefined1 *)(lVar3 + 0x122a50) = 1;
  return;
}


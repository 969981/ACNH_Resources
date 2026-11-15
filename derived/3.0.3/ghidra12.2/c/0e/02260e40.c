
void FUN_02260e40(void)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  
  uVar1 = *(uint *)PTR_DAT_04bb32f8;
  if ((((uVar1 == 0) ||
       (plVar4 = *(long **)(*(long *)(*(long *)(*(long *)PTR_DAT_04bb27c0 + 0x1c0) + 8) +
                           ((ulong)(uVar1 >> 0x11) & 0x7ff8)), plVar4 == (long *)0x0)) ||
      ((*(uint *)(plVar4 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar4 + 0x46) != uVar1)) {
    plVar4 = (long *)0x0;
  }
  iVar2 = *(int *)(*(long *)PTR_DAT_04bb27c0 + 0x288);
  if (iVar2 == 1 || iVar2 == -1) {
    plVar3 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    (**(code **)(*plVar3 + 0x60))();
  }
  if (((*PTR_DAT_04bb3280 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_04bb3280), iVar2 != 0))
  {
    *(undefined **)PTR_DAT_04bb3278 = PTR_DAT_04bb2e50 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb3280);
  }
  (**(code **)(*plVar4 + 0x20))(plVar4,PTR_DAT_04bb3278);
  FUN_008fc6e4(plVar4,0,0xffffffff);
  return;
}


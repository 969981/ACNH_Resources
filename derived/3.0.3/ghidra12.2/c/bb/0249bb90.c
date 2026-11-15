
void FUN_0249bb90(long param_1)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  byte local_38 [4];
  undefined8 local_34;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 local_24;
  
  plVar3 = *(long **)(param_1 + 0x60);
  if (plVar3 != (long *)0x0) {
    if (((*PTR_DAT_04bb37b8 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb37b8), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bb37b0 = PTR_DAT_04bb3070 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37b8);
    }
    uVar2 = (**(code **)(*plVar3 + 0x10))(plVar3,PTR_DAT_04bb37b0);
    if ((uVar2 & 1) != 0) {
      (**(code **)(*plVar3 + 0x498))(plVar3,1);
    }
  }
  local_38[0] = *(byte *)(param_1 + 0x1ee8);
  local_28 = 0x3dcccccd;
  local_24 = 0;
  if (7 < local_38[0]) {
    local_38[0] = 0xff;
  }
  local_2c = *(undefined4 *)(*(long *)(param_1 + 0x68) + 0x280);
  local_34 = *(undefined8 *)(*(long *)(param_1 + 0x68) + 0x278);
  FUN_016fa230(*(undefined4 *)(param_1 + 0x388),local_38,*(undefined4 *)(param_1 + 0x230),1);
  return;
}


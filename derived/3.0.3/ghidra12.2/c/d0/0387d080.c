
undefined8 FUN_0387d080(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar1 = nn::os::GetSystemTick();
  lVar1 = lVar1 - *(long *)(param_1 + 0x18);
  if (lVar1 + 0x20c49ba5e353f7U < 0x4189374bc6a7ee) {
    lVar4 = 0;
    if (*(long *)PTR_DAT_04bb29d0 != 0) {
      lVar4 = (lVar1 * 1000) / *(long *)PTR_DAT_04bb29d0;
    }
  }
  else {
    lVar4 = 0;
    if (DAT_05ae7888 != 0) {
      lVar4 = lVar1 / DAT_05ae7888;
    }
    lVar4 = lVar4 * 1000;
  }
  if (99 < lVar4) {
    uVar2 = nn::nifm::IsNetworkAvailable();
    if ((uVar2 & 1) == 0) {
      lVar1 = *(long *)(DAT_05ae6a60 + 0x30);
      if (((*(int *)(lVar1 + 0x24) < 2) &&
          ((*(int *)(lVar1 + 0x24) < 1 || (1 < *(int *)(lVar1 + 0x24))))) ||
         (*(int *)(lVar1 + 0x24) < 2)) {
        *(undefined4 *)(lVar1 + 0x3c) = 0;
        *(undefined8 *)(lVar1 + 0x34) = 0x400000003;
        uVar3 = DAT_05ae68f0;
        *(undefined4 *)(lVar1 + 0x30) = DAT_05ae68f8;
        *(undefined8 *)(lVar1 + 0x28) = uVar3;
        *(undefined4 *)(lVar1 + 0x24) = 2;
        return 0;
      }
      return 0;
    }
    uVar3 = nn::os::GetSystemTick();
    *(undefined8 *)(param_1 + 0x18) = uVar3;
  }
  return 1;
}


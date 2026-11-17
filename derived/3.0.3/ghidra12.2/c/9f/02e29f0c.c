
bool FUN_02e29f0c(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = (ulong)*(uint *)(param_1 + 0x324);
  if (*(uint *)(param_1 + 0x324) < 0x21) {
    if ((1L << (uVar2 & 0x3f) & 0x60cU) == 0) {
      if (((uVar2 == 0xf) || (uVar2 == 0x20)) && (*(int *)(param_1 + 0x1b0) == 3)) {
        lVar1 = nn::os::GetSystemTick();
        lVar1 = lVar1 - *(long *)(param_1 + 0x358);
        if (lVar1 + 0x20c49ba5e353f7U < 0x4189374bc6a7ee) {
          lVar3 = 0;
          if (*(long *)PTR_DAT_04bb29d0 != 0) {
            lVar3 = (lVar1 * 1000) / *(long *)PTR_DAT_04bb29d0;
          }
        }
        else {
          lVar3 = 0;
          if (DAT_05ae7888 != 0) {
            lVar3 = lVar1 / DAT_05ae7888;
          }
          lVar3 = lVar3 * 1000;
        }
        if ((float)lVar3 / 1000.0 < 3.0) {
          return false;
        }
      }
    }
    else {
      uVar2 = (**(code **)(**(long **)(param_1 + 0x220) + 0x140))(*(long **)(param_1 + 0x220),0);
      if ((uVar2 & 1) == 0) {
        return false;
      }
      if ((*(int *)(param_1 + 0x324) == 10) || (*(int *)(param_1 + 0x324) == 3)) {
        lVar1 = nn::os::GetSystemTick();
        lVar1 = lVar1 - *(long *)(param_1 + 0x360);
        if (lVar1 + 0x20c49ba5e353f7U < 0x4189374bc6a7ee) {
          lVar3 = 0;
          if (*(long *)PTR_DAT_04bb29d0 != 0) {
            lVar3 = (lVar1 * 1000) / *(long *)PTR_DAT_04bb29d0;
          }
        }
        else {
          lVar3 = 0;
          if (DAT_05ae7888 != 0) {
            lVar3 = lVar1 / DAT_05ae7888;
          }
          lVar3 = lVar3 * 1000;
        }
        if (lVar3 < 3000) {
          return false;
        }
      }
    }
  }
  return *(int *)(param_1 + 0x1b0) == 3;
}


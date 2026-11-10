
bool FUN_001886a0(long param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  bool bVar4;
  undefined1 uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  
  puVar3 = PTR_DAT_04bcbd28;
  plVar11 = *(long **)(param_1 + 0x60);
  if (plVar11 == (long *)0x0) {
    return true;
  }
  if ((ulong)plVar11[2] < param_2) {
    bVar4 = true;
  }
  else {
    if (plVar11[4] != 0 && *PTR_DAT_04bcbd28 == '\0') {
      nn::os::LockMutex((MutexType *)(plVar11[4] + 8));
    }
    uVar1 = plVar11[1];
    if (uVar1 == 0) {
      bVar4 = false;
    }
    else {
      uVar7 = 0;
      uVar8 = 0;
      plVar9 = (long *)(*plVar11 + 0x18);
      bVar4 = true;
      do {
        if (param_2 <= (ulong)plVar9[-1]) {
          uVar10 = plVar9[-1] + 0x17U & 0xfffffffffffffff8;
          uVar2 = 0;
          if (uVar10 != 0) {
            uVar2 = (ulong)plVar9[-2] / uVar10;
          }
          uVar8 = (uVar2 - *plVar9) + uVar8;
          if (param_3 <= uVar8) {
            uVar5 = 0;
            goto LAB_001887ac;
          }
        }
        uVar7 = uVar7 + 1;
        plVar9 = plVar9 + 0xd;
        bVar4 = uVar7 < uVar1;
      } while (uVar1 != uVar7);
    }
    lVar6 = *plVar11 + uVar1 * 0x68;
    *(long *)(lVar6 + -8) = *(long *)(lVar6 + -8) + 1;
    uVar5 = 1;
LAB_001887ac:
    *(undefined1 *)((long)plVar11 + 0x19) = uVar5;
    if ((plVar11[4] != 0) && (*puVar3 == '\0')) {
      nn::os::UnlockMutex((MutexType *)(plVar11[4] + 8));
      return bVar4;
    }
  }
  return bVar4;
}


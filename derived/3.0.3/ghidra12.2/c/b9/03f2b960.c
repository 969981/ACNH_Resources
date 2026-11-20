
bool FUN_03f2b960(long param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  
  uVar3 = *(ulong *)(param_1 + 0x30);
  uVar1 = *(long *)(param_1 + 0x38) + uVar3;
  if ((param_2 < uVar3 || uVar1 < param_2) || uVar3 <= param_2 && uVar1 == param_2) {
    bVar4 = false;
  }
  else {
    if ((*(uint *)(param_1 + 0xd0) & 1) == 0) {
      lVar9 = 0;
    }
    else {
      lVar9 = param_1 + 0x90;
      nn::os::LockMutex((MutexType *)(param_1 + 0xb0));
    }
    lVar6 = (long)*(int *)(param_1 + 0x104);
    uVar1 = param_2 - 0x20;
    if ((*(ulong *)(param_2 - 8) & 1) != 0) {
      uVar1 = *(ulong *)(param_2 - 8) - 1;
    }
    lVar5 = *(long *)(uVar1 + lVar6);
    lVar8 = ((long *)(uVar1 + lVar6))[1];
    uVar3 = 0;
    if (lVar5 != param_1 + 0xf0) {
      uVar3 = lVar5 - lVar6;
    }
    uVar2 = 0;
    if (lVar8 != param_1 + 0xf0) {
      uVar2 = lVar8 - lVar6;
    }
    if (*(long *)(param_1 + 0xe0) == param_1 + 0xd8) {
      lVar5 = 0;
      lVar6 = 0x20;
    }
    else {
      lVar8 = (long)*(int *)(param_1 + 0xec);
      lVar5 = 0;
      uVar7 = *(long *)(param_1 + 0xe0) - lVar8;
      lVar6 = 0x20;
      do {
        if (lVar5 == 0) {
          if (uVar7 <= uVar3) {
            lVar5 = 0;
            goto LAB_03f2ba40;
          }
          if (uVar7 < uVar1) {
            lVar5 = *(long *)(uVar7 + 0x18);
            goto LAB_03f2ba40;
          }
LAB_03f2bad4:
          bVar4 = false;
          goto joined_r0x03f2bad8;
        }
LAB_03f2ba40:
        if (uVar1 < uVar7) {
          if ((uVar2 == 0) || (uVar7 < uVar2)) {
            lVar6 = (ulong)*(ushort *)(uVar7 + 0x12) + *(long *)(uVar7 + 0x18) + 0x40;
          }
          else {
            if (uVar7 <= uVar2) goto LAB_03f2bad4;
            lVar6 = 0x20;
          }
          break;
        }
        uVar7 = *(long *)(uVar7 + lVar8 + 8) - lVar8;
      } while (uVar7 != (param_1 + 0xd8) - lVar8);
    }
    bVar4 = param_3 <= lVar5 + lVar6 + (ulong)*(ushort *)(uVar1 + 0x12) + *(long *)(uVar1 + 0x18);
joined_r0x03f2bad8:
    if (lVar9 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar9 + 0x20));
    }
  }
  return bVar4;
}


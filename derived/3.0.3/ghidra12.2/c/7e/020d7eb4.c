
void FUN_020d7eb4(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  if (DAT_053e2f50 == param_1) {
    DAT_053e2f50 = (undefined8 *)0x0;
    *(undefined ***)(DAT_053e2f58 + 0x994a0) = &PTR_LAB_04a59c88;
    *(undefined8 *)(DAT_053e2f58 + 0x99478) = 0;
    *(undefined4 *)(DAT_053e2f58 + 0x99480) = 0;
    *(undefined ***)(DAT_053e2f58 + 0x86208) = &PTR_LAB_04a59c88;
    *(undefined8 *)(DAT_053e2f58 + 0x861e0) = 0;
    *(undefined4 *)(DAT_053e2f58 + 0x861e8) = 0;
    *(undefined ***)(DAT_053e2f58 + 0x72f70) = &PTR_LAB_04a59c88;
    *(undefined8 *)(DAT_053e2f58 + 0x72f48) = 0;
    *(undefined4 *)(DAT_053e2f58 + 0x72f50) = 0;
    *(undefined ***)(DAT_053e2f58 + 0x5fcd8) = &PTR_LAB_04a59c88;
    *(undefined8 *)(DAT_053e2f58 + 0x5fcb0) = 0;
    *(undefined4 *)(DAT_053e2f58 + 0x5fcb8) = 0;
    *(undefined ***)(DAT_053e2f58 + 0x4ca40) = &PTR_LAB_04a59c88;
    *(undefined8 *)(DAT_053e2f58 + 0x4ca18) = 0;
    *(undefined4 *)(DAT_053e2f58 + 0x4ca20) = 0;
    *(undefined ***)(DAT_053e2f58 + 0x397a8) = &PTR_LAB_04a59c88;
    *(undefined8 *)(DAT_053e2f58 + 0x39780) = 0;
    *(undefined4 *)(DAT_053e2f58 + 0x39788) = 0;
    *(undefined ***)(DAT_053e2f58 + 0x26510) = &PTR_LAB_04a59c88;
    *(undefined8 *)(DAT_053e2f58 + 0x264e8) = 0;
    *(undefined4 *)(DAT_053e2f58 + 0x264f0) = 0;
    *(undefined ***)(DAT_053e2f58 + 0x13278) = &PTR_LAB_04a59c88;
    *(undefined8 *)(DAT_053e2f58 + 0x13250) = 0;
    *(undefined4 *)(DAT_053e2f58 + 0x13258) = 0;
    DAT_053e2f58 = 0;
  }
  lVar2 = param_1[1];
  *param_1 = &PTR_FUN_04b64428;
  if (lVar2 != 0) {
    if (lVar2 == 1) {
      return;
    }
    if ((*(uint *)(lVar2 + 0xd0) & 1) == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = lVar2 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar2 + 0xb0));
    }
    plVar1 = (long *)((long)*(int *)(lVar2 + 0x84) + (long)param_1);
    if (*plVar1 != 0) {
      *(long *)(*plVar1 + 8) = plVar1[1];
    }
    if ((long *)plVar1[1] != (long *)0x0) {
      *(long *)plVar1[1] = *plVar1;
    }
    *plVar1 = 0;
    plVar1[1] = 0;
    *(int *)(lVar2 + 0x80) = *(int *)(lVar2 + 0x80) + -1;
    if (lVar3 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar3 + 0x20));
    }
  }
  param_1[1] = 1;
  return;
}


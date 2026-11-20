
void FUN_03eb2e40(long *param_1,long *param_2)

{
  undefined1 *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  int iVar7;
  ulong uVar8;
  
  if (*param_1 == 0) {
    return;
  }
  nn::os::LockMutex((MutexType *)(param_1 + 0x29));
  (**(code **)(*param_2 + 0x18))(param_2);
  uVar6 = 0;
  do {
    if (*(char *)(param_2[1] + uVar6) == '\0') goto LAB_03eb2ee8;
    lVar3 = param_2[1] + uVar6;
    if (*(char *)(lVar3 + 1) == '\0') {
      uVar6 = uVar6 + 1;
      goto LAB_03eb2ee8;
    }
    if (*(char *)(lVar3 + 2) == '\0') {
      uVar6 = uVar6 + 2;
      goto LAB_03eb2ee8;
    }
    uVar6 = uVar6 + 3;
  } while (uVar6 != 0x80001);
  uVar6 = 0;
LAB_03eb2ee8:
  iVar7 = *(int *)((long)param_1 + 0xc);
  iVar5 = (int)uVar6;
  if ((int)param_1[1] + -1 <= iVar7 + iVar5 && *param_1 != 0) {
    iVar7 = 0;
    *(undefined4 *)((long)param_1 + 0xc) = 0;
  }
  puVar2 = PTR_DAT_04bb2120;
  if (0 < iVar5) {
    uVar8 = 0;
    do {
      (**(code **)(*param_2 + 0x18))(param_2);
      lVar3 = param_2[1];
      uVar4 = 0;
      do {
        if (*(char *)(lVar3 + uVar4) == '\0') goto LAB_03eb2f34;
        if (*(char *)(lVar3 + uVar4 + 1) == '\0') {
          uVar4 = uVar4 + 1;
          goto LAB_03eb2f34;
        }
        if (*(char *)(lVar3 + uVar4 + 2) == '\0') {
          uVar4 = uVar4 + 2;
          goto LAB_03eb2f34;
        }
        uVar4 = uVar4 + 3;
      } while (uVar4 != 0x80001);
      uVar4 = 0;
LAB_03eb2f34:
      puVar1 = puVar2;
      if (uVar8 <= (uVar4 & 0xffffffff)) {
        puVar1 = (undefined1 *)(lVar3 + uVar8);
      }
      iVar7 = (int)uVar8;
      uVar8 = uVar8 + 1;
      *(undefined1 *)(*param_1 + (long)*(int *)((long)param_1 + 0xc) + (long)iVar7) = *puVar1;
    } while (uVar8 != (uVar6 & 0xffffffff));
    iVar7 = *(int *)((long)param_1 + 0xc);
  }
  *(int *)((long)param_1 + 0xc) = iVar7 + iVar5;
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x29));
  return;
}


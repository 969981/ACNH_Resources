
void FUN_038b1ea0(long *param_1,long *param_2,long param_3)

{
  long *plVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined1 *__dest;
  long lVar7;
  undefined1 *__src;
  
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = (long)param_1;
  param_1[7] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = (long)&PTR_FUN_04b64428;
  param_1[1] = 0;
  if (DAT_05ae7600 != 0) {
    lVar4 = FUN_038cb610(DAT_05ae7600,param_1);
    param_1[1] = lVar4;
    if (lVar4 != 0) {
      if ((*(uint *)(lVar4 + 0xd0) & 1) == 0) {
        lVar7 = 0;
      }
      else {
        lVar7 = lVar4 + 0x90;
        nn::os::LockMutex((MutexType *)(lVar4 + 0xb0));
      }
      plVar6 = (long *)(lVar4 + 0x70);
      lVar5 = *plVar6;
      plVar1 = (long *)((long)*(int *)(lVar4 + 0x84) + (long)param_1);
      *plVar6 = (long)plVar1;
      *plVar1 = lVar5;
      plVar1[1] = (long)plVar6;
      if (lVar5 != 0) {
        *(long **)(lVar5 + 8) = plVar1;
      }
      *(int *)(lVar4 + 0x80) = *(int *)(lVar4 + 0x80) + 1;
      if (lVar7 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar7 + 0x20));
      }
    }
  }
  puVar3 = PTR_DAT_04bb28c0;
  __dest = (undefined1 *)((long)param_1 + 0x54);
  *__dest = 0;
  *(undefined1 *)((long)param_1 + 0x73) = 0;
  *param_1 = (long)(puVar3 + 0x10);
  *(undefined4 *)(param_1 + 10) = 0x20;
  param_1[8] = (long)&PTR_LAB_048f9700;
  param_1[9] = (long)__dest;
  *(undefined1 *)(param_1 + 0xf) = 1;
  (**(code **)(*param_2 + 0x18))(param_2);
  __src = (undefined1 *)param_2[1];
  if (__dest != __src) {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar4 = 0;
    do {
      if (*(char *)(param_2[1] + lVar4) == '\0') goto LAB_038b200c;
      lVar7 = param_2[1] + lVar4;
      if (*(char *)(lVar7 + 1) == '\0') {
        lVar4 = lVar4 + 1;
        goto LAB_038b200c;
      }
      if (*(char *)(lVar7 + 2) == '\0') {
        lVar4 = lVar4 + 2;
        goto LAB_038b200c;
      }
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
    lVar4 = 0;
LAB_038b200c:
    iVar2 = (int)lVar4;
    if ((int)param_1[10] <= (int)lVar4) {
      iVar2 = (int)param_1[10] + -1;
    }
    memcpy(__dest,__src,(long)iVar2);
    __dest[iVar2] = 0;
  }
  *(undefined4 *)((long)param_1 + 0x7c) = 0;
  *param_1 = (long)&PTR_LAB_04b62e70;
  param_1[0x10] = (long)&PTR_LAB_048f9770;
  param_1[0x11] = *(long *)(param_3 + 8);
  return;
}



void FUN_03c0e010(long *param_1,long *param_2)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  void *__dest;
  void *__src;
  
  param_1[1] = 0;
  puVar2 = PTR_DAT_04bd0d40;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = (long)(puVar2 + 0x10);
  if (DAT_05ae7600 != 0) {
    lVar3 = FUN_038cb610(DAT_05ae7600,param_1);
    param_1[1] = lVar3;
    if (lVar3 != 0) {
      if ((*(uint *)(lVar3 + 0xd0) & 1) == 0) {
        lVar7 = 0;
      }
      else {
        lVar7 = lVar3 + 0x90;
        nn::os::LockMutex((MutexType *)(lVar3 + 0xb0));
      }
      plVar5 = (long *)(lVar3 + 0x70);
      lVar4 = *plVar5;
      plVar6 = (long *)((long)*(int *)(lVar3 + 0x84) + (long)param_1);
      *plVar5 = (long)plVar6;
      *plVar6 = lVar4;
      plVar6[1] = (long)plVar5;
      if (lVar4 != 0) {
        *(long **)(lVar4 + 8) = plVar6;
      }
      *(int *)(lVar3 + 0x80) = *(int *)(lVar3 + 0x80) + 1;
      if (lVar7 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar7 + 0x20));
      }
    }
  }
  *(undefined1 *)((long)param_1 + 0x53) = 0;
  *(undefined1 *)((long)param_1 + 0x34) = 0;
  puVar2 = PTR_DAT_04bb34f0;
  *(undefined4 *)(param_1 + 6) = 0x20;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[4] = (long)&PTR_LAB_048f9700;
  param_1[5] = (long)param_1 + 0x34;
  puVar2 = PTR_DAT_04bb34f8;
  param_1[0xd] = 0xf0000000f;
  plVar6 = param_1 + 0xe;
  *plVar6 = (long)(puVar2 + 0x10);
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0xf] = (long)&PTR_LAB_048f9770;
  param_1[0x10] = (long)&DAT_0407ebb1;
  *(undefined4 *)((long)param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  FUN_038e1bac(param_1 + 0x13,1);
  *(undefined4 *)(param_1 + 0x1c) = 0;
  param_1[0x1d] = (long)"NoName";
  *(undefined4 *)(param_1 + 0x1e) = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  param_1[0x23] = (long)&DAT_0407ebb1;
  param_1[0x21] = 0;
  param_1[0x22] = (long)&PTR_LAB_048f9770;
  *(undefined4 *)((long)param_1 + 0xd4) = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  *(undefined4 *)((long)param_1 + 0xdc) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  param_1[0x19] = 0x800000008;
  puVar2 = PTR_DAT_04bd0f38;
  *(undefined4 *)(param_1 + 0x1a) = 8;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *plVar6 = (long)(puVar2 + 0x10);
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  *(undefined4 *)((long)param_1 + 0xe4) = 0;
  param_1[0x2a] = (long)param_1;
  param_1[0x28] = (long)&PTR_LAB_048f9770;
  param_1[0x29] = (long)&DAT_0407ebb1;
  __dest = (void *)param_1[5];
  param_1[0x27] = (long)&PTR_LAB_04b7cd10;
  (**(code **)(*param_2 + 0x18))(param_2);
  __src = (void *)param_2[1];
  if (__dest != __src) {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar3 = 0;
    do {
      if (*(char *)(param_2[1] + lVar3) == '\0') goto LAB_03c0e23c;
      lVar7 = param_2[1] + lVar3;
      if (*(char *)(lVar7 + 1) == '\0') {
        lVar3 = lVar3 + 1;
        goto LAB_03c0e23c;
      }
      if (*(char *)(lVar7 + 2) == '\0') {
        lVar3 = lVar3 + 2;
        goto LAB_03c0e23c;
      }
      lVar3 = lVar3 + 3;
    } while (lVar3 != 0x80001);
    lVar3 = 0;
LAB_03c0e23c:
    iVar1 = (int)lVar3;
    if ((int)param_1[6] <= (int)lVar3) {
      iVar1 = (int)param_1[6] + -1;
    }
    memcpy(__dest,__src,(long)iVar1);
    *(undefined1 *)((long)__dest + (long)iVar1) = 0;
  }
  FUN_03972570(plVar6,1,0);
  return;
}


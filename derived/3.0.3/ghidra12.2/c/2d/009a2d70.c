
void FUN_009a2d70(long *param_1,long *param_2,int *param_3)

{
  void *__dest;
  undefined *puVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  void *__src;
  undefined *local_88;
  char *local_80;
  undefined *local_78;
  char *pcStack_70;
  undefined *local_68;
  undefined8 *puStack_60;
  undefined4 local_58;
  
  local_88 = PTR_DAT_04bb2020 + 0x10;
  local_80 = "CreatureShow";
  pcStack_70 = "CreatureShow";
  puStack_60 = &DAT_0407ebb1;
  local_58 = 0;
  *param_1 = (long)(PTR_DAT_04bd0d40 + 0x10);
  param_1[1] = 0;
  lVar4 = *(long *)PTR_DAT_04bb2698;
  param_1[2] = 0;
  param_1[3] = 0;
  local_78 = local_88;
  local_68 = local_88;
  if (lVar4 != 0) {
    lVar4 = FUN_038cb610(lVar4,param_1);
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
      plVar2 = (long *)((long)*(int *)(lVar4 + 0x84) + (long)param_1);
      *plVar6 = (long)plVar2;
      *plVar2 = lVar5;
      plVar2[1] = (long)plVar6;
      if (lVar5 != 0) {
        *(long **)(lVar5 + 8) = plVar2;
      }
      *(int *)(lVar4 + 0x80) = *(int *)(lVar4 + 0x80) + 1;
      if (lVar7 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar7 + 0x20));
      }
    }
  }
  param_1[4] = (long)(PTR_DAT_04bb3050 + 0x10);
  (**(code **)(local_88 + 0x18))(&local_88);
  param_1[6] = 0;
  param_1[7] = 0;
  __dest = (void *)((long)param_1 + 0xac);
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  *(undefined8 *)((long)param_1 + 0x7c) = 0;
  *(undefined8 *)((long)param_1 + 0x84) = 0;
  *(undefined8 *)((long)param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 8) = local_58;
  *param_1 = (long)&PTR_FUN_0492c0a8;
  param_1[4] = (long)&PTR_LAB_0492c170;
  param_1[5] = (long)local_80;
  *(undefined4 *)((long)param_1 + 0x94) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x15) = 0x80;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  puVar1 = PTR_DAT_04bb2e90 + 0x10;
  *(undefined1 *)((long)param_1 + 299) = 0;
  param_1[0x13] = (long)puVar1;
  param_1[0x14] = (long)__dest;
  (**(code **)(*param_2 + 0x18))(param_2);
  __src = (void *)param_2[1];
  if (__dest != __src) {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar4 = 0;
    do {
      if (*(char *)(param_2[1] + lVar4) == '\0') goto LAB_009a2f60;
      lVar7 = param_2[1] + lVar4;
      if (*(char *)(lVar7 + 1) == '\0') {
        lVar4 = lVar4 + 1;
        goto LAB_009a2f60;
      }
      if (*(char *)(lVar7 + 2) == '\0') {
        lVar4 = lVar4 + 2;
        goto LAB_009a2f60;
      }
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
    lVar4 = 0;
LAB_009a2f60:
    iVar3 = (int)lVar4;
    if ((int)param_1[0x15] <= (int)lVar4) {
      iVar3 = (int)param_1[0x15] + -1;
    }
    memcpy(__dest,__src,(long)iVar3);
    *(undefined1 *)((long)__dest + (long)iVar3) = 0;
  }
  param_1[0x13] = (long)(PTR_DAT_04bb2d88 + 0x10);
  puVar1 = PTR_DAT_04bb60c8 + 0x10;
  param_1[0x28] = 0;
  param_1[0x29] = (long)(param_1 + 0x2b);
  param_1[0x26] = (long)puVar1;
  param_1[0x27] = 0;
  lVar4 = 0;
  while( true ) {
    *(long *)((long)param_1 + lVar4 + 0x158) = (long)param_1 + lVar4 + 0x160;
    *(long *)((long)param_1 + lVar4 + 0x160) = (long)param_1 + lVar4 + 0x168;
    *(long *)((long)param_1 + lVar4 + 0x168) = (long)param_1 + lVar4 + 0x170;
    if (lVar4 == 0x1d4a0) break;
    *(long *)((long)param_1 + lVar4 + 0x170) = (long)param_1 + lVar4 + 0x178;
    lVar4 = lVar4 + 0x20;
  }
  param_1[0x3ac2] = 0;
  param_1[0x2a] = (long)(param_1 + 0x2b);
  if (param_1 + 0x3ac3 != (long *)0x0) {
    param_1[0x28] = (long)(param_1 + 0x3ac3);
    *(undefined4 *)((long)param_1 + 0x13c) = 15000;
  }
  *(undefined4 *)(param_1 + 0x27) = 0;
  *(undefined2 *)(param_1 + 0x755b) = 0xfffe;
  *(undefined1 *)(param_1 + 0x755c) = 0;
  *(bool *)(param_1 + 0x755c) = *param_3 - 1U < 2;
  FUN_009abec0(param_1,param_3);
  return;
}


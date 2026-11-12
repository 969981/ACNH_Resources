
void FUN_006cd430(long *param_1,long param_2)

{
  long *plVar1;
  int iVar2;
  undefined *puVar3;
  undefined1 *__src;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined1 *__dest;
  long lVar7;
  undefined *local_50;
  undefined1 *local_48;
  
  param_1[4] = 0;
  local_50 = PTR_DAT_04bb2020;
  param_1[5] = 0;
  puVar3 = PTR_DAT_04bd0d40;
  local_50 = local_50 + 0x10;
  local_48 = &DAT_04076719;
  param_1[6] = (long)param_1;
  param_1[7] = 0;
  *param_1 = (long)(puVar3 + 0x10);
  param_1[1] = 0;
  lVar4 = *(long *)PTR_DAT_04bb2698;
  param_1[2] = 0;
  param_1[3] = 0;
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
  param_1[8] = (long)(PTR_DAT_04bb2028 + 0x10);
  param_1[9] = (long)__dest;
  *(undefined1 *)(param_1 + 0xf) = 1;
  (**(code **)(local_50 + 0x18))(&local_50);
  __src = local_48;
  if (__dest != local_48) {
    (**(code **)(local_50 + 0x18))(&local_50);
    lVar4 = 0;
    do {
      if (local_48[lVar4] == '\0') goto LAB_006cd5bc;
      if (local_48[lVar4 + 1] == '\0') {
        lVar4 = lVar4 + 1;
        goto LAB_006cd5bc;
      }
      if (local_48[lVar4 + 2] == '\0') {
        lVar4 = lVar4 + 2;
        goto LAB_006cd5bc;
      }
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
    lVar4 = 0;
LAB_006cd5bc:
    iVar2 = (int)lVar4;
    if ((int)param_1[10] <= (int)lVar4) {
      iVar2 = (int)param_1[10] + -1;
    }
    memcpy(__dest,__src,(long)iVar2);
    __dest[iVar2] = 0;
  }
  puVar3 = PTR_DAT_04bb28b8;
  param_1[0x10] = param_2;
  *param_1 = (long)(puVar3 + 0x10);
  return;
}


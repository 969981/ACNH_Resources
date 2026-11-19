
void FUN_038b5830(long *param_1,long *param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  char *__src;
  long lVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  undefined1 *__dest;
  long lVar10;
  undefined *local_70;
  char *pcStack_68;
  undefined *local_60;
  char *local_58;
  
  param_1[4] = 0;
  puVar4 = PTR_DAT_04bb2020;
  param_1[5] = 0;
  local_60 = puVar4 + 0x10;
  local_58 = "main";
  puVar1 = PTR_DAT_04bd0d40 + 0x10;
  param_1[6] = (long)param_1;
  param_1[7] = 0;
  *param_1 = (long)puVar1;
  param_1[1] = 0;
  puVar1 = PTR_DAT_04bb2698;
  param_1[2] = 0;
  param_1[3] = 0;
  lVar6 = *(long *)puVar1;
  if (lVar6 != 0) {
    lVar6 = FUN_038cb610(lVar6,param_1);
    param_1[1] = lVar6;
    if (lVar6 != 0) {
      if ((*(uint *)(lVar6 + 0xd0) & 1) == 0) {
        lVar10 = 0;
      }
      else {
        lVar10 = lVar6 + 0x90;
        nn::os::LockMutex((MutexType *)(lVar6 + 0xb0));
      }
      plVar9 = (long *)(lVar6 + 0x70);
      lVar8 = *plVar9;
      plVar7 = (long *)((long)*(int *)(lVar6 + 0x84) + (long)param_1);
      *plVar9 = (long)plVar7;
      *plVar7 = lVar8;
      plVar7[1] = (long)plVar9;
      if (lVar8 != 0) {
        *(long **)(lVar8 + 8) = plVar7;
      }
      *(int *)(lVar6 + 0x80) = *(int *)(lVar6 + 0x80) + 1;
      if (lVar10 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar10 + 0x20));
      }
    }
  }
  puVar5 = PTR_DAT_04bb28c0;
  __dest = (undefined1 *)((long)param_1 + 0x54);
  *__dest = 0;
  *(undefined1 *)((long)param_1 + 0x73) = 0;
  *param_1 = (long)(puVar5 + 0x10);
  *(undefined4 *)(param_1 + 10) = 0x20;
  param_1[8] = (long)(PTR_DAT_04bb2028 + 0x10);
  param_1[9] = (long)__dest;
  *(undefined1 *)(param_1 + 0xf) = 1;
  (**(code **)(local_60 + 0x18))(&local_60);
  __src = local_58;
  if (__dest != local_58) {
    (**(code **)(local_60 + 0x18))(&local_60);
    lVar6 = 0;
    do {
      if (local_58[lVar6] == '\0') goto LAB_038b59bc;
      if (local_58[lVar6 + 1] == '\0') {
        lVar6 = lVar6 + 1;
        goto LAB_038b59bc;
      }
      if (local_58[lVar6 + 2] == '\0') {
        lVar6 = lVar6 + 2;
        goto LAB_038b59bc;
      }
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
    lVar6 = 0;
LAB_038b59bc:
    iVar2 = (int)lVar6;
    if ((int)param_1[10] <= (int)lVar6) {
      iVar2 = (int)param_1[10] + -1;
    }
    memcpy(__dest,__src,(long)iVar2);
    __dest[iVar2] = 0;
  }
  param_1[0x10] = 0;
  *param_1 = (long)&PTR_FUN_04b63440;
  lVar6 = *(long *)puVar1;
  if (lVar6 == 0) {
    plVar7 = malloc(0x90);
  }
  else {
    if (param_2 == (long *)0x0) {
      lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      puVar3 = (undefined8 *)(lVar6 + 8);
      if (lVar10 != 0) {
        puVar3 = (undefined8 *)(lVar10 + 0xa8);
      }
      param_2 = (long *)*puVar3;
      plVar7 = (long *)0x0;
      if (param_2 == (long *)0x0) goto LAB_038b5a54;
    }
    plVar7 = (long *)(**(code **)(*param_2 + 0x30))(param_2,0x90,8);
  }
LAB_038b5a54:
  local_70 = puVar4 + 0x10;
  local_58 = "content";
  pcStack_68 = "content";
  local_60 = local_70;
  FUN_038b1ea0(plVar7,&local_60,&local_70);
  *plVar7 = (long)(PTR_DAT_04bd0bd0 + 0x10);
  param_1[0x10] = (long)plVar7;
  return;
}


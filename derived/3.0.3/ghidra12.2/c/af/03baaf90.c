
void FUN_03baaf90(long *param_1,long *param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined1 *__dest;
  undefined1 *__src;
  
  puVar3 = PTR_DAT_04bd2098;
  puVar2 = PTR_DAT_04bb2020;
  __dest = (undefined1 *)((long)param_1 + 0x2c);
  *__dest = 0;
  param_1[4] = (long)__dest;
  *param_1 = (long)(puVar3 + 0x10);
  param_1[1] = (long)(puVar2 + 0x10);
  *(undefined4 *)(param_1 + 5) = 0x20;
  puVar2 = PTR_DAT_04bb2028;
  *(undefined1 *)((long)param_1 + 0x4b) = 0;
  param_1[2] = (long)&DAT_0407ebb1;
  param_1[3] = (long)(puVar2 + 0x10);
  (**(code **)(*param_2 + 0x18))(param_2);
  __src = (undefined1 *)param_2[1];
  if (__dest != __src) {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar4 = 0;
    do {
      if (*(char *)(param_2[1] + lVar4) == '\0') goto LAB_03bab06c;
      lVar5 = param_2[1] + lVar4;
      if (*(char *)(lVar5 + 1) == '\0') {
        lVar4 = lVar4 + 1;
        goto LAB_03bab06c;
      }
      if (*(char *)(lVar5 + 2) == '\0') {
        lVar4 = lVar4 + 2;
        goto LAB_03bab06c;
      }
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
    lVar4 = 0;
LAB_03bab06c:
    iVar1 = (int)lVar4;
    if ((int)param_1[5] <= (int)lVar4) {
      iVar1 = (int)param_1[5] + -1;
    }
    memcpy(__dest,__src,(long)iVar1);
    __dest[iVar1] = 0;
  }
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[2] = param_1[4];
  *param_1 = (long)&PTR_LAB_04b7a2c8;
  lVar4 = 0;
  if (*(long *)PTR_DAT_04bc3ee8 != 0) {
    lVar4 = *(long *)(*(long *)PTR_DAT_04bc3ee8 + 0x20);
  }
  plVar6 = (long *)(lVar4 + 0x50);
  lVar5 = *plVar6;
  param_1 = (long *)((long)*(int *)(lVar4 + 100) + (long)param_1);
  *plVar6 = (long)param_1;
  *param_1 = lVar5;
  param_1[1] = (long)plVar6;
  if (lVar5 != 0) {
    *(long **)(lVar5 + 8) = param_1;
  }
  *(int *)(lVar4 + 0x60) = *(int *)(lVar4 + 0x60) + 1;
  return;
}


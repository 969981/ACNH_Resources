
void FUN_03d704f0(long *param_1,long param_2,long *param_3)

{
  undefined *puVar1;
  void *__dest;
  long lVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  void *__src;
  
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  *param_1 = (long)puVar1;
  param_1[1] = *(long *)(param_2 + 8);
  param_1[2] = (long)puVar1;
  param_1[3] = *(long *)(param_2 + 0x18);
  param_1[4] = (long)puVar1;
  param_1[5] = *(long *)(param_2 + 0x28);
  uVar4 = *(undefined4 *)(param_2 + 0x30);
  param_1[8] = (long)param_1 + 0x4c;
  *(undefined4 *)(param_1 + 9) = 0x20;
  *(undefined1 *)((long)param_1 + 0x6b) = 0;
  *(undefined4 *)(param_1 + 6) = uVar4;
  if ((undefined *)((long)param_1 + 0x4c) != &DAT_040c1623) {
    *(undefined1 *)((long)param_1 + 0x4e) = 0;
    *(undefined2 *)((long)param_1 + 0x4c) = 0x4955;
  }
  __dest = (void *)((long)param_1 + 0x84);
  param_1[7] = (long)(PTR_DAT_04bb2028 + 0x10);
  *(undefined4 *)(param_1 + 0x10) = 0x40;
  *(undefined1 *)((long)param_1 + 0xc3) = 0;
  param_1[0xe] = (long)&PTR_LAB_048fd2d8;
  param_1[0xf] = (long)__dest;
  (**(code **)(*param_3 + 0x18))(param_3);
  __src = (void *)param_3[1];
  if (__dest != __src) {
    (**(code **)(*param_3 + 0x18))(param_3);
    lVar5 = 0;
    do {
      if (*(char *)(param_3[1] + lVar5) == '\0') goto LAB_03d70610;
      lVar2 = param_3[1] + lVar5;
      if (*(char *)(lVar2 + 1) == '\0') {
        lVar5 = lVar5 + 1;
        goto LAB_03d70610;
      }
      if (*(char *)(lVar2 + 2) == '\0') {
        lVar5 = lVar5 + 2;
        goto LAB_03d70610;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_03d70610:
    iVar3 = (int)lVar5;
    if ((int)param_1[0x10] <= (int)lVar5) {
      iVar3 = (int)param_1[0x10] + -1;
    }
    memcpy(__dest,__src,(long)iVar3);
    *(undefined1 *)((long)__dest + (long)iVar3) = 0;
  }
  param_1[0xe] = (long)&PTR_LAB_048fb9f8;
  return;
}


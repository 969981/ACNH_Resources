
undefined8 FUN_02542b38(byte *param_1,undefined2 *param_2,long *param_3)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  char *__dest;
  void *__dest_00;
  void *__src;
  
  if (7 < *param_1) {
    return 0;
  }
  uVar5 = FUN_02582d8c(param_1,1);
  puVar4 = PTR_DAT_04bb4fb8;
  if ((((7 < uVar5) ||
       (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar5 * 0x13f0 + 0x13d4) == '\0')) ||
      (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar5 * 0x13f0 + 0x13d6) == '\0')) ||
     ((uVar5 = FUN_02582d8c(param_1,1), 7 < uVar5 ||
      (*(char *)(*(long *)puVar4 + (ulong)uVar5 * 0x13f0 + 0x13d4) == '\0')))) {
    return 0;
  }
  lVar6 = *(long *)puVar4 + (ulong)uVar5 * 0x13f0;
  *(undefined2 *)(lVar6 + 0x1c) = *param_2;
  *(undefined1 *)(lVar6 + 0x1e) = *(undefined1 *)(param_2 + 1);
  *(undefined1 *)(lVar6 + 0x1f) = *(undefined1 *)((long)param_2 + 3);
  uVar3 = *(undefined4 *)(param_2 + 2);
  *(undefined1 *)(lVar6 + 0x18) = 0;
  __dest_00 = *(void **)(lVar6 + 0x30);
  *(undefined4 *)(lVar6 + 0x20) = uVar3;
  (**(code **)(*param_3 + 0x18))(param_3);
  __src = (void *)param_3[1];
  if (__dest_00 != __src) {
    (**(code **)(*param_3 + 0x18))(param_3);
    lVar7 = 0;
    do {
      if (*(char *)(param_3[1] + lVar7) == '\0') goto LAB_02542ca4;
      lVar1 = param_3[1] + lVar7;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar7 = lVar7 + 1;
        goto LAB_02542ca4;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar7 = lVar7 + 2;
        goto LAB_02542ca4;
      }
      lVar7 = lVar7 + 3;
    } while (lVar7 != 0x80001);
    lVar7 = 0;
LAB_02542ca4:
    iVar2 = (int)lVar7;
    if (*(int *)(lVar6 + 0x38) <= (int)lVar7) {
      iVar2 = *(int *)(lVar6 + 0x38) + -1;
    }
    memcpy(__dest_00,__src,(long)iVar2);
    *(undefined1 *)((long)__dest_00 + (long)iVar2) = 0;
  }
  __dest = *(char **)(lVar6 + 0x88);
  if (__dest != "GetDemo_NpcSpReiPhoto") {
    iVar2 = 0x15;
    if (*(int *)(lVar6 + 0x90) < 0x16) {
      iVar2 = *(int *)(lVar6 + 0x90) + -1;
    }
    memcpy(__dest,"GetDemo_NpcSpReiPhoto",(long)iVar2);
    __dest[iVar2] = '\0';
  }
  return 1;
}



void FUN_00744dd0(long *param_1,long *param_2,long *param_3,long *param_4)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined **ppuVar5;
  long lVar6;
  long lVar7;
  void *__dest;
  void *__src;
  
  *param_1 = (long)(PTR_DAT_04bb3050 + 0x10);
  (**(code **)(*param_2 + 0x18))(param_2);
  lVar7 = param_2[1];
  param_1[3] = 0;
  ppuVar5 = &PTR_LAB_04904708;
  param_1[1] = lVar7;
  param_1[2] = 0;
  lVar7 = param_2[6];
  *(undefined4 *)(param_1 + 7) = 0x40;
  *param_1 = (long)&PTR_LAB_04904708;
  *(undefined1 *)((long)param_1 + 0x7b) = 0;
  param_1[0x10] = 0;
  *(int *)(param_1 + 4) = (int)lVar7;
  *(undefined1 *)((long)param_1 + 0x3c) = 0;
  param_1[5] = (long)&PTR_LAB_048fb9f8;
  param_1[6] = (long)param_1 + 0x3c;
  if (param_4 != (long *)0x0) {
    (**(code **)(*param_4 + 0x140))(param_4,param_1);
    ppuVar5 = (undefined **)*param_1;
  }
  lVar7 = (*(code *)ppuVar5[0x1e])(param_1);
  __dest = *(void **)(lVar7 + 8);
  (**(code **)(*param_3 + 0x18))(param_3);
  __src = (void *)param_3[1];
  if (__dest != __src) {
    (**(code **)(*param_3 + 0x18))(param_3);
    lVar6 = 0;
    do {
      if (*(char *)(param_3[1] + lVar6) == '\0') goto LAB_00744f0c;
      lVar1 = param_3[1] + lVar6;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar6 = lVar6 + 1;
        goto LAB_00744f0c;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar6 = lVar6 + 2;
        goto LAB_00744f0c;
      }
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
    lVar6 = 0;
LAB_00744f0c:
    iVar2 = (int)lVar6;
    if (*(int *)(lVar7 + 0x10) <= (int)lVar6) {
      iVar2 = *(int *)(lVar7 + 0x10) + -1;
    }
    memcpy(__dest,__src,(long)iVar2);
    *(undefined1 *)((long)__dest + (long)iVar2) = 0;
  }
  uVar3 = *(uint *)(param_1 + 4);
  uVar4 = uVar3 | 0x1000000;
  *(uint *)(param_1 + 4) = uVar4;
  if ((uVar3 >> 7 & 1) == 0) {
    if (*(char *)param_3[1] == '\0') {
      param_1[0x10] = (long)&PTR_PTR_04c4b980;
    }
    else {
      FUN_00749f20(param_1,param_3);
      uVar4 = *(uint *)(param_1 + 4);
    }
  }
  *(uint *)(param_1 + 4) = uVar4 & 0xfeffffff;
  return;
}


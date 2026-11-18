
long * FUN_0340a680(long *param_1,long *param_2)

{
  void *__dest;
  int iVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  void *__src;
  
  iVar1 = (int)param_1[2];
  iVar4 = (int)param_1[1];
  if (iVar1 < iVar4) {
    *(int *)(param_1 + 2) = iVar1 + 1;
    iVar1 = *(int *)((long)param_1 + 0xc) + iVar1;
    iVar3 = 0;
    if (iVar4 <= iVar1) {
      iVar3 = iVar4;
    }
    plVar7 = (long *)(*param_1 + (long)(iVar1 - iVar3) * 0x80);
    *(undefined4 *)(plVar7 + 2) = 0x20;
    puVar5 = PTR_DAT_04bb2a08;
    __dest = (void *)((long)plVar7 + 0x14);
    *(undefined1 *)((long)plVar7 + 0x33) = 0;
    *plVar7 = (long)(puVar5 + 0x10);
    plVar7[1] = (long)__dest;
    (**(code **)(*param_2 + 0x18))(param_2);
    __src = (void *)param_2[1];
    if (__dest != __src) {
      (**(code **)(*param_2 + 0x18))(param_2);
      lVar6 = 0;
      do {
        if (*(char *)(param_2[1] + lVar6) == '\0') goto LAB_0340a774;
        lVar2 = param_2[1] + lVar6;
        if (*(char *)(lVar2 + 1) == '\0') {
          lVar6 = lVar6 + 1;
          goto LAB_0340a774;
        }
        if (*(char *)(lVar2 + 2) == '\0') {
          lVar6 = lVar6 + 2;
          goto LAB_0340a774;
        }
        lVar6 = lVar6 + 3;
      } while (lVar6 != 0x80001);
      lVar6 = 0;
LAB_0340a774:
      iVar1 = (int)lVar6;
      if ((int)plVar7[2] <= (int)lVar6) {
        iVar1 = (int)plVar7[2] + -1;
      }
      memcpy(__dest,__src,(long)iVar1);
      *(undefined1 *)((long)__dest + (long)iVar1) = 0;
    }
    *plVar7 = (long)(PTR_DAT_04bb2028 + 0x10);
    *(int *)(plVar7 + 7) = (int)param_2[7];
    plVar7[8] = (long)&PTR_LAB_04986060;
    (**(code **)(param_2[8] + 0x10))();
    plVar7[0xc] = (long)(PTR_DAT_04bbba70 + 0x10);
    (**(code **)(param_2[0xc] + 0x10))(param_2 + 0xc);
  }
  else {
    plVar7 = (long *)0x0;
  }
  return plVar7;
}


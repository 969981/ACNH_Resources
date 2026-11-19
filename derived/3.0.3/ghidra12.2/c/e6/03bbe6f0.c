
void FUN_03bbe6f0(long param_1,uint param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  int *piVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  undefined *__dest;
  undefined *__src;
  long *plVar7;
  long lVar8;
  
  plVar7 = (long *)(param_1 + 0x60) + param_2;
  if (4 < param_2) {
    plVar7 = (long *)(param_1 + 0x60);
  }
  *plVar7 = param_3;
  plVar7 = (long *)(param_1 + 0xa0);
  plVar2 = plVar7 + param_2;
  if (4 < param_2) {
    plVar2 = plVar7;
  }
  if (*plVar2 == 0) goto LAB_03bbe87c;
  uVar6 = (ulong)param_2;
  if (4 < param_2) {
    uVar6 = 0;
  }
  lVar8 = plVar7[uVar6];
  if (param_3 != 0) {
    __dest = *(undefined **)(lVar8 + 8);
    plVar7 = (long *)(param_3 + 8);
    (**(code **)(*plVar7 + 0x18))(plVar7);
    __src = *(undefined **)(param_3 + 0x10);
    if (__dest != __src) {
      (**(code **)(*(long *)(param_3 + 8) + 0x18))(plVar7);
      lVar5 = 0;
      do {
        if (*(char *)(*(long *)(param_3 + 0x10) + lVar5) == '\0') goto LAB_03bbe850;
        lVar1 = *(long *)(param_3 + 0x10) + lVar5;
        if (*(char *)(lVar1 + 1) == '\0') goto LAB_03bbe844;
        if (*(char *)(lVar1 + 2) == '\0') goto LAB_03bbe84c;
        lVar5 = lVar5 + 3;
      } while (lVar5 != 0x80001);
      goto LAB_03bbe83c;
    }
    goto LAB_03bbe880;
  }
  __dest = *(undefined **)(lVar8 + 8);
  (**(code **)(PTR_PTR_04c4b980 + 0x18))(&PTR_PTR_04c4b980);
  __src = PTR_DAT_04c4b988;
  if (__dest != PTR_DAT_04c4b988) {
    (**(code **)(PTR_PTR_04c4b980 + 0x18))(&PTR_PTR_04c4b980);
    lVar5 = 0;
    do {
      if (PTR_DAT_04c4b988[lVar5] == '\0') goto LAB_03bbe850;
      if (PTR_DAT_04c4b988[lVar5 + 1] == '\0') goto LAB_03bbe844;
      if (PTR_DAT_04c4b988[lVar5 + 2] == '\0') goto LAB_03bbe84c;
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
LAB_03bbe83c:
    lVar5 = 0;
    goto LAB_03bbe850;
  }
  goto LAB_03bbe8d0;
LAB_03bbe844:
  lVar5 = lVar5 + 1;
  goto LAB_03bbe850;
LAB_03bbe84c:
  lVar5 = lVar5 + 2;
LAB_03bbe850:
  iVar4 = (int)lVar5;
  if (*(int *)(lVar8 + 0x10) <= (int)lVar5) {
    iVar4 = *(int *)(lVar8 + 0x10) + -1;
  }
  memcpy(__dest,__src,(long)iVar4);
  __dest[iVar4] = 0;
LAB_03bbe87c:
  if (param_3 != 0) {
LAB_03bbe880:
    lVar5 = *(long *)(DAT_05aebb78 + 0x28);
    lVar8 = *(long *)(lVar5 + 0x30);
    if (lVar8 != lVar5 + 0x28) {
      iVar4 = 0;
      do {
        if (lVar8 == *(int *)(lVar5 + 0x3c) + param_3) goto LAB_03bbe8d4;
        lVar8 = *(long *)(lVar8 + 8);
        iVar4 = iVar4 + 1;
      } while (lVar8 != lVar5 + 0x28);
      iVar4 = -1;
      goto LAB_03bbe8d4;
    }
  }
LAB_03bbe8d0:
  iVar4 = -1;
LAB_03bbe8d4:
  piVar3 = (int *)(param_1 + 0xd8) + param_2;
  if (4 < param_2) {
    piVar3 = (int *)(param_1 + 0xd8);
  }
  *piVar3 = iVar4;
  return;
}


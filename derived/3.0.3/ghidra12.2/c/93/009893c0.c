
void FUN_009893c0(long param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  byte bVar7;
  long lVar8;
  void *__dest;
  void *__src;
  
  __dest = *(void **)(param_1 + 0x10);
  (**(code **)(*param_2 + 0x18))(param_2);
  __src = (void *)param_2[1];
  if (__dest != __src) {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar8 = 0;
    do {
      if (*(char *)(param_2[1] + lVar8) == '\0') goto LAB_0098945c;
      lVar1 = param_2[1] + lVar8;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar8 = lVar8 + 1;
        goto LAB_0098945c;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar8 = lVar8 + 2;
        goto LAB_0098945c;
      }
      lVar8 = lVar8 + 3;
    } while (lVar8 != 0x80001);
    lVar8 = 0;
LAB_0098945c:
    iVar2 = (int)lVar8;
    if (*(int *)(param_1 + 0x18) <= (int)lVar8) {
      iVar2 = *(int *)(param_1 + 0x18) + -1;
    }
    memcpy(__dest,__src,(long)iVar2);
    *(undefined1 *)((long)__dest + (long)iVar2) = 0;
  }
  *(int *)(param_1 + 0xa0) = (int)param_2[2];
  cVar4 = *(char *)((long)param_2 + 0x14);
  *(char *)(param_1 + 0xe8) = cVar4;
  *(int *)(param_1 + 0xec) = (int)param_2[3];
  if (cVar4 == '\0') {
    bVar7 = FUN_009790d0(param_2,param_1 + 0xa8,param_1 + 0xb8,param_1 + 0xbc);
  }
  else {
    bVar7 = FUN_00979320();
  }
  *(byte *)(param_1 + 0xa4) = bVar7 & 1;
  iVar6 = DAT_0517afd4;
  iVar2 = DAT_0517afd0;
  if ((bVar7 & 1) != 0) {
    iVar3 = *(int *)(param_1 + 0xbc);
    iVar5 = *(int *)(param_1 + 0xb8);
    if ((*(uint *)(param_1 + 0xa0) & 0x7fffffff) != 0x40000000) {
      iVar3 = *(int *)(param_1 + 0xb8);
      iVar5 = *(int *)(param_1 + 0xbc);
    }
    *(int *)(param_1 + 0xd0) = DAT_0517afd0;
    *(int *)(param_1 + 0xd4) = iVar6;
    *(int *)(param_1 + 0xe0) = iVar3 + iVar2 + -1;
    *(int *)(param_1 + 0xe4) = iVar5 + iVar6 + -1;
  }
  return;
}


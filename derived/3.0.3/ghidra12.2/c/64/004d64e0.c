
undefined8 FUN_004d64e0(long *param_1,char *param_2,long param_3)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  char *__s2;
  long lVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  
  iVar2 = (int)param_1[1];
  if (param_3 == 0) {
    iVar5 = 0;
    if (iVar2 < 1) {
      return 0;
    }
  }
  else {
    lVar6 = 0;
    lVar7 = 0x10;
    do {
      if (iVar2 <= lVar6) break;
      plVar1 = (long *)(*param_1 + lVar7);
      lVar6 = lVar6 + 1;
      lVar7 = lVar7 + 0x18;
    } while (*plVar1 != param_3);
    iVar5 = (int)lVar6;
    if (iVar2 <= iVar5) {
      return 0;
    }
  }
  lVar6 = (long)iVar5;
  lVar7 = (lVar6 + (long)iVar5 * 2) * 8;
  while( true ) {
    lVar4 = *param_1;
    lVar3 = FUN_004846a0(lVar4 + lVar7 + 0x10);
    if (lVar3 == 0) {
      __s2 = (char *)(*(ulong *)(lVar4 + lVar7 + 8) & 0xfffffffffffffffe);
    }
    else {
      __s2 = (char *)FUN_00427270();
    }
    if ((__s2 != (char *)0x0) && (iVar2 = strcmp(param_2,__s2), iVar2 == 0)) break;
    lVar6 = lVar6 + 1;
    lVar7 = lVar7 + 0x18;
    if ((int)param_1[1] <= lVar6) {
      return 0;
    }
  }
  return *(undefined8 *)(*param_1 + lVar7 + 0x10);
}



long * FUN_0038b5c0(long *param_1,char *param_2)

{
  char cVar1;
  undefined *puVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  char *pcVar6;
  long *plVar7;
  
  plVar3 = (long *)FUN_00367b30(0x18);
  puVar2 = PTR_DAT_04bc92a8;
  if (plVar3 != (long *)0x0) {
    plVar3[2] = 0;
    *plVar3 = (long)(puVar2 + 0x10);
    plVar3[1] = -1;
  }
  plVar4 = (long *)FUN_00367b30(0xa0);
  if (plVar4 == (long *)0x0) {
    return (long *)0x0;
  }
  FUN_0038b4e4(plVar4,plVar3,1);
  lVar5 = 0;
  cVar1 = *param_2;
  plVar7 = plVar4;
  do {
    if (cVar1 == '\0') {
      plVar7 = plVar7 + 2;
LAB_0038b670:
      *(undefined1 *)plVar7 = 0;
      pcVar6 = param_2 + lVar5;
      do {
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      lVar5 = *plVar4;
      *plVar4 = *param_1;
      *(long **)(lVar5 + 8) = param_1;
      *(long **)(*param_1 + 8) = plVar4;
      *param_1 = lVar5;
      return plVar3;
    }
    *(char *)(plVar7 + 2) = cVar1;
    if (((int)lVar5 == 0x7e) || (param_2[lVar5 + 1] == '\0')) {
      lVar5 = lVar5 + 1;
      plVar7 = (long *)((long)plVar7 + 0x11);
      goto LAB_0038b670;
    }
    *(char *)((long)plVar7 + 0x11) = param_2[lVar5 + 1];
    lVar5 = lVar5 + 2;
    cVar1 = param_2[lVar5];
    plVar7 = (long *)((long)plVar4 + lVar5);
  } while( true );
}


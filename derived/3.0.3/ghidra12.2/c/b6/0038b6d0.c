
long * FUN_0038b6d0(long *param_1,char *param_2,uint param_3)

{
  char cVar1;
  undefined *puVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  char *pcVar6;
  long *plVar7;
  
  plVar3 = (long *)FUN_00367b30(0xd8);
  if (plVar3 != (long *)0x0) {
    *(undefined4 *)(plVar3 + 2) = 0;
    puVar2 = PTR_DAT_04bd07b8;
    plVar3[7] = 0;
    plVar3[3] = 0;
    plVar3[4] = 0;
    plVar3[5] = 0;
    plVar3[6] = 0;
    *plVar3 = (long)(puVar2 + 0x10);
    plVar3[1] = -1;
    FUN_0034f974(plVar3 + 8);
    FUN_0034f3dc(plVar3 + 0x11);
    plVar3[0x1a] = -0x100000000;
  }
  plVar4 = (long *)FUN_00367b30(0xa0);
  if (plVar4 == (long *)0x0) {
    return (long *)0x0;
  }
  FUN_0038b4e4(plVar4,plVar3,param_3 & 1);
  lVar5 = 0;
  cVar1 = *param_2;
  plVar7 = plVar4;
  do {
    if (cVar1 == '\0') {
      plVar7 = plVar7 + 2;
LAB_0038b7b0:
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
      goto LAB_0038b7b0;
    }
    *(char *)((long)plVar7 + 0x11) = param_2[lVar5 + 1];
    lVar5 = lVar5 + 2;
    cVar1 = param_2[lVar5];
    plVar7 = (long *)((long)plVar4 + lVar5);
  } while( true );
}


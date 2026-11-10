
long * FUN_00365460(long *param_1,char *param_2,long param_3,byte param_4)

{
  char cVar1;
  long *plVar2;
  long lVar3;
  char *pcVar4;
  long *plVar5;
  
  plVar2 = (long *)FUN_00367b30(0xa0);
  if (plVar2 != (long *)0x0) {
    FUN_003652b8(plVar2);
    lVar3 = 0;
    cVar1 = *param_2;
    plVar5 = plVar2;
    while (cVar1 != '\0') {
      *(char *)(plVar5 + 2) = cVar1;
      if (((int)lVar3 == 0x7e) || (param_2[lVar3 + 1] == '\0')) {
        lVar3 = lVar3 + 1;
        plVar5 = (long *)((long)plVar5 + 0x11);
        goto LAB_003654f0;
      }
      *(char *)((long)plVar5 + 0x11) = param_2[lVar3 + 1];
      lVar3 = lVar3 + 2;
      plVar5 = (long *)((long)plVar2 + lVar3);
      cVar1 = param_2[lVar3];
    }
    plVar5 = plVar5 + 2;
LAB_003654f0:
    *(undefined1 *)plVar5 = 0;
    pcVar4 = param_2 + lVar3;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    plVar2[0x12] = param_3;
    *(byte *)(plVar2 + 0x13) = param_4 & 1;
    lVar3 = *plVar2;
    *plVar2 = *param_1;
    *(long **)(lVar3 + 8) = param_1;
    *(long **)(*param_1 + 8) = plVar2;
    *param_1 = lVar3;
  }
  return plVar2;
}


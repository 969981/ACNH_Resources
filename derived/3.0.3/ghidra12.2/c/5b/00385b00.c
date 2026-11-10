
long * FUN_00385b00(long *param_1,char *param_2,uint param_3)

{
  char cVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  char *pcVar5;
  
  plVar2 = (long *)FUN_00367b30(0x60);
  if (plVar2 == (long *)0x0) {
    return (long *)0x0;
  }
  FUN_003859f8(plVar2,param_3 & 1);
  if (*param_2 == '\0') {
    plVar3 = plVar2 + 2;
  }
  else {
    *(char *)(plVar2 + 2) = *param_2;
    pcVar5 = param_2 + 1;
    if (*pcVar5 == '\0') {
      plVar3 = (long *)((long)plVar2 + 0x11);
    }
    else {
      *(char *)((long)plVar2 + 0x11) = *pcVar5;
      pcVar5 = param_2 + 2;
      if (*pcVar5 == '\0') {
        plVar3 = (long *)((long)plVar2 + 0x12);
      }
      else {
        *(char *)((long)plVar2 + 0x12) = *pcVar5;
        pcVar5 = param_2 + 3;
        if (*pcVar5 == '\0') {
          plVar3 = (long *)((long)plVar2 + 0x13);
        }
        else {
          *(char *)((long)plVar2 + 0x13) = *pcVar5;
          pcVar5 = param_2 + 4;
          if (*pcVar5 == '\0') {
            plVar3 = (long *)((long)plVar2 + 0x14);
          }
          else {
            *(char *)((long)plVar2 + 0x14) = *pcVar5;
            pcVar5 = param_2 + 5;
            if (*pcVar5 == '\0') {
              plVar3 = (long *)((long)plVar2 + 0x15);
            }
            else {
              *(char *)((long)plVar2 + 0x15) = *pcVar5;
              pcVar5 = param_2 + 6;
              if (*pcVar5 != '\0') {
                plVar3 = (long *)((long)plVar2 + 0x17);
                *(char *)((long)plVar2 + 0x16) = *pcVar5;
                param_2 = param_2 + 7;
                goto LAB_00385be4;
              }
              plVar3 = (long *)((long)plVar2 + 0x16);
            }
          }
        }
      }
    }
    param_2 = pcVar5;
  }
LAB_00385be4:
  *(undefined1 *)plVar3 = 0;
  do {
    cVar1 = *param_2;
    param_2 = param_2 + 1;
  } while (cVar1 != '\0');
  lVar4 = *plVar2;
  *plVar2 = *param_1;
  *(long **)(lVar4 + 8) = param_1;
  *(long **)(*param_1 + 8) = plVar2;
  *param_1 = lVar4;
  return plVar2 + 3;
}


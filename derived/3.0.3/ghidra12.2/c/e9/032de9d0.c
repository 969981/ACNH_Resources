
undefined8 FUN_032de9d0(long param_1,long *param_2,int *param_3,undefined8 param_4,long *param_5)

{
  long *plVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  long lVar5;
  long lVar6;
  char *pcVar7;
  long local_48;
  
  if (*(long *)(param_1 + 0x418) == 0) {
    return 0;
  }
  lVar6 = *(long *)(param_1 + 0x418) + -0x10;
  if (*(char *)param_5[1] == '\0') {
    do {
      local_48 = lVar6;
      iVar3 = FUN_032df450(&local_48,param_4);
      if (-1 < iVar3) {
LAB_032deaf0:
        *param_3 = iVar3;
        *param_2 = lVar6;
        return 1;
      }
      plVar1 = (long *)(lVar6 + 0x20);
      lVar6 = *plVar1 + -0x10;
    } while (*plVar1 != 0);
  }
  else {
    do {
      pcVar7 = *(char **)(lVar6 + 0x30);
      (**(code **)(*param_5 + 0x18))(param_5);
      pcVar4 = (char *)param_5[1];
      if (pcVar7 == pcVar4) {
LAB_032deadc:
        local_48 = lVar6;
        iVar3 = FUN_032df450(&local_48,param_4);
        if (iVar3 < 0) {
          return 0;
        }
        goto LAB_032deaf0;
      }
      if (*pcVar7 == *pcVar4) {
        if (*pcVar7 == '\0') goto LAB_032deadc;
        lVar5 = 0x7fffe;
        while( true ) {
          if (pcVar7[1] != pcVar4[1]) break;
          if (pcVar7[1] == '\0') goto LAB_032deadc;
          if (pcVar7[2] != pcVar4[2]) break;
          if (pcVar7[2] == '\0') goto LAB_032deadc;
          if ((lVar5 == 0) || (cVar2 = pcVar7[3], cVar2 != pcVar4[3])) break;
          lVar5 = lVar5 + -3;
          pcVar7 = pcVar7 + 3;
          pcVar4 = pcVar4 + 3;
          if (cVar2 == '\0') goto LAB_032deadc;
        }
      }
      plVar1 = (long *)(lVar6 + 0x20);
      lVar6 = *plVar1 + -0x10;
    } while (*plVar1 != 0);
  }
  return 0;
}


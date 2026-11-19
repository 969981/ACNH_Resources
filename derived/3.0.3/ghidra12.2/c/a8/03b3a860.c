
void FUN_03b3a860(long param_1,undefined8 param_2,long *param_3,long *param_4)

{
  char cVar1;
  int *piVar2;
  char *pcVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  char *pcVar7;
  
  if (*param_3 != 0) {
    piVar2 = (int *)FUN_03b3a9c0();
    *(int **)(param_1 + 0x1b8) = piVar2;
    if ((piVar2 != (int *)0x0) && (0 < *piVar2)) {
      lVar6 = 0;
      do {
        plVar5 = *(long **)(*(long *)(piVar2 + 2) + lVar6 * 8);
        (**(code **)(*plVar5 + 0x18))(plVar5);
        (**(code **)(*plVar5 + 0x18))(plVar5);
        pcVar7 = (char *)plVar5[1];
        (**(code **)(*param_4 + 0x18))(param_4);
        pcVar3 = (char *)param_4[1];
        if (pcVar7 == pcVar3) {
LAB_03b3a97c:
          lVar6 = *(long *)(*(long *)(piVar2 + 2) + lVar6 * 8);
          if (lVar6 == 0) {
            return;
          }
          FUN_03b39da0(param_1,lVar6,0);
          return;
        }
        cVar1 = *(char *)plVar5[1];
        if (cVar1 == *pcVar3) {
          if (cVar1 == '\0') goto LAB_03b3a97c;
          lVar4 = 0x7fffe;
          pcVar7 = (char *)plVar5[1];
          while( true ) {
            if (pcVar7[1] != pcVar3[1]) break;
            if (pcVar7[1] == '\0') goto LAB_03b3a97c;
            if (pcVar7[2] != pcVar3[2]) break;
            if (pcVar7[2] == '\0') goto LAB_03b3a97c;
            if ((lVar4 == 0) || (cVar1 = pcVar7[3], cVar1 != pcVar3[3])) break;
            lVar4 = lVar4 + -3;
            pcVar3 = pcVar3 + 3;
            pcVar7 = pcVar7 + 3;
            if (cVar1 == '\0') goto LAB_03b3a97c;
          }
        }
        lVar6 = lVar6 + 1;
      } while (lVar6 < *piVar2);
    }
  }
  return;
}


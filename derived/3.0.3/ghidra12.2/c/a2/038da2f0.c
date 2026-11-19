
undefined8 FUN_038da2f0(long param_1,long *param_2)

{
  char cVar1;
  long *plVar2;
  undefined8 uVar3;
  char *pcVar4;
  long lVar5;
  char *pcVar6;
  long lVar7;
  long lVar8;
  
  if ((*param_2 == 0 || (int)param_2[1] == 0) || *(int *)((long)param_2 + 0xc) == 0) {
    return 0;
  }
  plVar2 = (long *)param_2[3];
  if (plVar2 == (long *)0x0) {
    lVar7 = *(long *)(param_1 + 8);
    if (lVar7 != param_1) {
      do {
        lVar8 = *(long *)(lVar7 + 0x10);
        plVar2 = (long *)(lVar8 + 0x40);
        (**(code **)(*plVar2 + 0x18))(plVar2);
        (**(code **)(*plVar2 + 0x18))(plVar2);
        pcVar6 = *(char **)(lVar8 + 0x48);
        (**(code **)(param_2[4] + 0x18))(param_2 + 4);
        pcVar4 = (char *)param_2[5];
        if (pcVar6 == pcVar4) {
LAB_038da41c:
          plVar2 = *(long **)(lVar7 + 0x10);
          if (plVar2 == (long *)0x0) {
            return 0;
          }
          goto LAB_038da428;
        }
        cVar1 = **(char **)(lVar8 + 0x48);
        if (cVar1 == *pcVar4) {
          if (cVar1 == '\0') goto LAB_038da41c;
          lVar5 = 0x7fffe;
          pcVar6 = *(char **)(lVar8 + 0x48);
          while( true ) {
            if (pcVar6[1] != pcVar4[1]) break;
            if (pcVar6[1] == '\0') goto LAB_038da41c;
            if (pcVar6[2] != pcVar4[2]) break;
            if (pcVar6[2] == '\0') goto LAB_038da41c;
            if ((lVar5 == 0) || (cVar1 = pcVar6[3], cVar1 != pcVar4[3])) break;
            lVar5 = lVar5 + -3;
            pcVar4 = pcVar4 + 3;
            pcVar6 = pcVar6 + 3;
            if (cVar1 == '\0') goto LAB_038da41c;
          }
        }
        lVar7 = *(long *)(lVar7 + 8);
      } while (lVar7 != param_1);
    }
    plVar2 = *(long **)(param_1 + 0x38);
    if (plVar2 == (long *)0x0) {
      return 0;
    }
  }
LAB_038da428:
  uVar3 = (**(code **)(*plVar2 + 0x30))(plVar2,param_2);
  return uVar3;
}


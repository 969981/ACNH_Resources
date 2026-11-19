
void FUN_03a5ba60(long param_1,long *param_2,uint param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  long lVar4;
  char *pcVar5;
  long lVar6;
  char *pcVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  
  uVar1 = param_4;
  if (*(uint *)(param_1 + 0x7c8) <= param_4) {
    uVar1 = 0;
  }
  lVar4 = *(long *)(param_1 + 2000) + (long)(int)uVar1 * 0x600;
  iVar2 = *(int *)(lVar4 + 0x448);
  if (iVar2 == 0) {
    iVar8 = -1;
  }
  else {
    lVar4 = *(long *)(lVar4 + 0x450);
    iVar8 = 0;
    do {
      if (*(char *)(lVar4 + (long)iVar8 * 0x1f0) != '\0') {
        lVar9 = lVar4 + (long)iVar8 * 0x1f0;
        plVar10 = (long *)(lVar9 + 8);
        (**(code **)(*plVar10 + 0x18))(plVar10);
        (**(code **)(*plVar10 + 0x18))(plVar10);
        pcVar7 = *(char **)(lVar9 + 0x10);
        (**(code **)(*param_2 + 0x18))(param_2);
        pcVar5 = (char *)param_2[1];
        if (pcVar7 == pcVar5) goto LAB_03a5bbb4;
        cVar3 = **(char **)(lVar9 + 0x10);
        if (cVar3 == *pcVar5) {
          if (cVar3 == '\0') goto LAB_03a5bbb4;
          lVar6 = 0x7fffe;
          pcVar7 = *(char **)(lVar9 + 0x10);
          while( true ) {
            if (pcVar7[1] != pcVar5[1]) break;
            if (pcVar7[1] == '\0') goto LAB_03a5bbb4;
            if (pcVar7[2] != pcVar5[2]) break;
            if (pcVar7[2] == '\0') goto LAB_03a5bbb4;
            if ((lVar6 == 0) || (cVar3 = pcVar7[3], cVar3 != pcVar5[3])) break;
            lVar6 = lVar6 + -3;
            pcVar7 = pcVar7 + 3;
            pcVar5 = pcVar5 + 3;
            if (cVar3 == '\0') goto LAB_03a5bbb4;
          }
        }
      }
      iVar8 = iVar8 + 1;
    } while (iVar2 != iVar8);
    iVar8 = -1;
  }
LAB_03a5bbb4:
  FUN_03a5bbf0(param_1,iVar8,param_3 & 1,param_4);
  return;
}


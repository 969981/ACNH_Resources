
void FUN_02605980(long param_1,long *param_2,long *param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  char *pcVar4;
  long lVar5;
  char acStack_74 [47];
  undefined1 local_45;
  
  lVar5 = *(long *)(param_1 + 8);
  if (lVar5 != 0) {
    local_45 = 0;
    (**(code **)(*param_2 + 0x18))(param_2);
    pcVar4 = (char *)param_2[1];
    if (acStack_74 != pcVar4) {
      (**(code **)(*param_2 + 0x18))(param_2);
      lVar3 = 0;
      do {
        if (*(char *)(param_2[1] + lVar3) == '\0') goto LAB_02605a4c;
        lVar1 = param_2[1] + lVar3;
        if (*(char *)(lVar1 + 1) == '\0') {
          lVar3 = lVar3 + 1;
          goto LAB_02605a4c;
        }
        if (*(char *)(lVar1 + 2) == '\0') {
          lVar3 = lVar3 + 2;
          goto LAB_02605a4c;
        }
        lVar3 = lVar3 + 3;
      } while (lVar3 != 0x80001);
      lVar3 = 0;
LAB_02605a4c:
      iVar2 = (int)lVar3;
      if (0x2f < (int)lVar3) {
        iVar2 = 0x2f;
      }
      memcpy(acStack_74,pcVar4,(long)iVar2);
      acStack_74[iVar2] = '\0';
    }
    if ((*(uint *)(lVar5 + 0x38) & 1) != 0) {
      iVar2 = *(int *)(lVar5 + 0x44);
      *(int *)(lVar5 + 0x44) = iVar2 + 1;
      if (iVar2 < (int)((*(uint *)(DAT_05b05628 + 0xb0) >> 6 & 1) + *(int *)(lVar5 + 0x40))) {
        pcVar4 = *(char **)(lVar5 + 0x30);
        (**(code **)(*param_3 + 0x18))(param_3);
        nn::prepo::PlayReport::Add(pcVar4,acStack_74);
      }
    }
  }
  return;
}


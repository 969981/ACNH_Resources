
long FUN_03b80b70(long param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  char *pcVar3;
  long lVar4;
  long *plVar5;
  char *pcVar6;
  long lVar7;
  long lVar8;
  
  if (*(char *)param_2[1] == '\0') {
    lVar4 = 0;
  }
  else {
    nn::os::LockMutex((MutexType *)(param_1 + 0x40));
    lVar8 = -(long)*(int *)(param_1 + 0x1c);
    lVar7 = *(long *)(param_1 + 0x10);
    if (lVar7 == param_1 + 8) {
      lVar7 = 0;
    }
    else {
      do {
        lVar4 = lVar7 + lVar8;
        plVar5 = (long *)(lVar4 + 8);
        (**(code **)(*plVar5 + 0x18))(plVar5);
        (**(code **)(*plVar5 + 0x18))(plVar5);
        pcVar6 = *(char **)(lVar4 + 0x10);
        (**(code **)(*param_2 + 0x18))(param_2);
        pcVar3 = (char *)param_2[1];
        if (pcVar6 == pcVar3) goto LAB_03b80cc4;
        pcVar6 = *(char **)(lVar4 + 0x10);
        if (*pcVar6 == *pcVar3) {
          if (*pcVar6 == '\0') goto LAB_03b80cc4;
          uVar1 = 0;
          do {
            uVar2 = uVar1;
            if (pcVar6[uVar2 + 1] != pcVar3[uVar2 + 1]) goto LAB_03b80be0;
            if (pcVar6[uVar2 + 1] == '\0') goto LAB_03b80bd8;
            if (pcVar6[uVar2 + 2] != pcVar3[uVar2 + 2]) goto LAB_03b80be0;
            if (pcVar6[uVar2 + 2] == '\0') {
              uVar2 = uVar2 + 1;
              goto LAB_03b80bd8;
            }
            if ((uVar2 == 0x7fffe) || (pcVar6[uVar2 + 3] != pcVar3[uVar2 + 3])) goto LAB_03b80be0;
            uVar1 = uVar2 + 3;
          } while (pcVar6[uVar2 + 3] != '\0');
          uVar2 = uVar2 + 2;
LAB_03b80bd8:
          if (uVar2 < 0x80000) goto LAB_03b80cc4;
        }
LAB_03b80be0:
        lVar7 = *(long *)(lVar7 + 8);
      } while (lVar7 != param_1 + 8);
      lVar7 = 0;
LAB_03b80cc4:
      lVar8 = -(long)*(int *)(param_1 + 0x1c);
    }
    lVar4 = 0;
    if (lVar7 != 0) {
      lVar4 = lVar8 + lVar7;
    }
    nn::os::UnlockMutex((MutexType *)(param_1 + 0x40));
  }
  return lVar4;
}


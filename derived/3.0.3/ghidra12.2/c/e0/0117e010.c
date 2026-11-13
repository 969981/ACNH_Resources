
undefined8 FUN_0117e010(long *param_1,int param_2,char *param_3)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  char *pcVar5;
  long lVar6;
  long *plVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  
  iVar8 = (int)param_1[2];
  if (iVar8 != 0) {
    if (param_3 == (char *)0x0) {
      iVar9 = *(int *)((long)param_1 + 0xc);
      do {
        iVar1 = 0;
        if ((int)param_1[1] <= iVar9) {
          iVar1 = (int)param_1[1];
        }
        if ((*(int *)(*param_1 + (long)(iVar9 - iVar1) * 0x270 + 0x14) == param_2) &&
           (*(char *)(*param_1 + (long)(iVar9 - iVar1) * 0x270 + 0x268) != '\0')) {
          return 1;
        }
        iVar8 = iVar8 + -1;
        iVar9 = iVar9 + 1;
      } while (iVar8 != 0);
    }
    else {
      iVar9 = 0;
      do {
        iVar1 = *(int *)((long)param_1 + 0xc) + iVar9;
        lVar10 = *param_1;
        iVar2 = 0;
        if ((int)param_1[1] <= iVar1) {
          iVar2 = (int)param_1[1];
        }
        iVar1 = iVar1 - iVar2;
        if (*(int *)(lVar10 + (long)iVar1 * 0x270 + 0x14) == param_2) {
          lVar6 = lVar10 + (long)iVar1 * 0x270;
          plVar7 = (long *)(lVar6 + 0x18);
          (**(code **)(*plVar7 + 0x18))(plVar7);
          (**(code **)(*plVar7 + 0x18))(plVar7);
          pcVar5 = *(char **)(lVar6 + 0x20);
          if (pcVar5 != param_3) {
            if (*pcVar5 != *param_3) goto LAB_0117e060;
            if (*pcVar5 != '\0') {
              uVar3 = 0;
              do {
                uVar4 = uVar3;
                if (pcVar5[uVar4 + 1] != param_3[uVar4 + 1]) goto LAB_0117e060;
                if (pcVar5[uVar4 + 1] == '\0') goto joined_r0x0117e150;
                if (pcVar5[uVar4 + 2] != param_3[uVar4 + 2]) goto LAB_0117e060;
                if (pcVar5[uVar4 + 2] == '\0') {
                  uVar4 = uVar4 + 1;
                  goto joined_r0x0117e150;
                }
                if ((uVar4 == 0x7fffe) || (pcVar5[uVar4 + 3] != param_3[uVar4 + 3]))
                goto LAB_0117e060;
                uVar3 = uVar4 + 3;
              } while (pcVar5[uVar4 + 3] != '\0');
              uVar4 = uVar4 + 2;
joined_r0x0117e150:
              if (uVar4 >> 0x13 != 0) goto LAB_0117e060;
            }
          }
          if (*(char *)(lVar10 + (long)iVar1 * 0x270 + 0x268) != '\0') {
            return 1;
          }
        }
LAB_0117e060:
        iVar9 = iVar9 + 1;
      } while (iVar8 != iVar9);
    }
  }
  return 0;
}


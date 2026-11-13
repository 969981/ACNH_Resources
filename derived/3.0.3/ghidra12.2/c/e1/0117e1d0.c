
undefined4 FUN_0117e1d0(long *param_1,int param_2,char *param_3)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  char *pcVar5;
  long lVar6;
  long *plVar7;
  int iVar8;
  long lVar9;
  int iVar10;
  
  iVar8 = (int)param_1[2];
  if (iVar8 != 0) {
    if (param_3 == (char *)0x0) {
      lVar9 = *param_1;
      iVar4 = *(int *)((long)param_1 + 0xc);
      do {
        iVar10 = 0;
        if ((int)param_1[1] <= iVar4) {
          iVar10 = (int)param_1[1];
        }
        iVar10 = iVar4 - iVar10;
        if (*(int *)(lVar9 + (long)iVar10 * 0x270 + 0x14) == param_2) goto LAB_0117e34c;
        iVar8 = iVar8 + -1;
        iVar4 = iVar4 + 1;
      } while (iVar8 != 0);
    }
    else {
      iVar4 = 0;
      do {
        iVar10 = *(int *)((long)param_1 + 0xc) + iVar4;
        lVar9 = *param_1;
        iVar1 = 0;
        if ((int)param_1[1] <= iVar10) {
          iVar1 = (int)param_1[1];
        }
        iVar10 = iVar10 - iVar1;
        if (*(int *)(lVar9 + (long)iVar10 * 0x270 + 0x14) == param_2) {
          lVar6 = lVar9 + (long)iVar10 * 0x270;
          plVar7 = (long *)(lVar6 + 0x18);
          (**(code **)(*plVar7 + 0x18))(plVar7);
          (**(code **)(*plVar7 + 0x18))(plVar7);
          pcVar5 = *(char **)(lVar6 + 0x20);
          if (pcVar5 == param_3) goto LAB_0117e34c;
          if (*pcVar5 == *param_3) {
            if (*pcVar5 == '\0') {
LAB_0117e34c:
              return *(undefined4 *)(lVar9 + (long)iVar10 * 0x270 + 0x26c);
            }
            uVar2 = 0;
            do {
              uVar3 = uVar2;
              if (pcVar5[uVar3 + 1] != param_3[uVar3 + 1]) goto LAB_0117e260;
              if (pcVar5[uVar3 + 1] == '\0') goto LAB_0117e254;
              if (pcVar5[uVar3 + 2] != param_3[uVar3 + 2]) goto LAB_0117e260;
              if (pcVar5[uVar3 + 2] == '\0') {
                uVar3 = uVar3 + 1;
                goto LAB_0117e254;
              }
              if ((uVar3 == 0x7fffe) || (pcVar5[uVar3 + 3] != param_3[uVar3 + 3]))
              goto LAB_0117e260;
              uVar2 = uVar3 + 3;
            } while (pcVar5[uVar3 + 3] != '\0');
            uVar3 = uVar3 + 2;
LAB_0117e254:
            if (uVar3 < 0x80000) goto LAB_0117e34c;
          }
        }
LAB_0117e260:
        iVar4 = iVar4 + 1;
      } while (iVar8 != iVar4);
    }
  }
  return 0;
}


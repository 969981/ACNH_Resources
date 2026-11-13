
undefined8 FUN_0117de20(long *param_1,undefined4 *param_2,byte param_3,int param_4,char *param_5)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  int iVar11;
  
  iVar6 = (int)param_1[2];
  if (iVar6 != 0) {
    if (param_5 == (char *)0x0) {
      iVar1 = (int)param_1[1];
      iVar5 = *(int *)((long)param_1 + 0xc);
      lVar10 = *param_1;
      iVar11 = 0;
      if (iVar1 <= iVar5) {
        iVar11 = iVar1;
      }
      lVar7 = (long)iVar5 - (long)iVar11;
      if (*(int *)(lVar10 + lVar7 * 0x270 + 0x14) != param_4) {
        do {
          iVar6 = iVar6 + -1;
          iVar5 = iVar5 + 1;
          if (iVar6 == 0) {
            return 0;
          }
          iVar11 = 0;
          if (iVar1 <= iVar5) {
            iVar11 = iVar1;
          }
        } while (*(int *)(lVar10 + (long)(iVar5 - iVar11) * 0x270 + 0x14) != param_4);
        lVar7 = (long)(iVar5 - iVar11);
      }
LAB_0117ded0:
      lVar10 = lVar10 + lVar7 * 0x270;
      *(byte *)(lVar10 + 0x268) = param_3 & 1;
      *(undefined4 *)(lVar10 + 0x26c) = *param_2;
      return 1;
    }
    iVar11 = 0;
    do {
      iVar1 = *(int *)((long)param_1 + 0xc) + iVar11;
      lVar10 = *param_1;
      iVar5 = 0;
      if ((int)param_1[1] <= iVar1) {
        iVar5 = (int)param_1[1];
      }
      iVar1 = iVar1 - iVar5;
      if (*(int *)(lVar10 + (long)iVar1 * 0x270 + 0x14) == param_4) {
        lVar7 = (long)iVar1;
        lVar8 = lVar10 + (long)iVar1 * 0x270;
        plVar9 = (long *)(lVar8 + 0x18);
        (**(code **)(*plVar9 + 0x18))(plVar9);
        (**(code **)(*plVar9 + 0x18))(plVar9);
        pcVar4 = *(char **)(lVar8 + 0x20);
        if (pcVar4 == param_5) goto LAB_0117ded0;
        if (*pcVar4 == *param_5) {
          if (*pcVar4 == '\0') goto LAB_0117ded0;
          uVar2 = 0;
          do {
            uVar3 = uVar2;
            if (pcVar4[uVar3 + 1] != param_5[uVar3 + 1]) goto LAB_0117df04;
            if (pcVar4[uVar3 + 1] == '\0') goto LAB_0117defc;
            if (pcVar4[uVar3 + 2] != param_5[uVar3 + 2]) goto LAB_0117df04;
            if (pcVar4[uVar3 + 2] == '\0') {
              uVar3 = uVar3 + 1;
              goto LAB_0117defc;
            }
            if ((uVar3 == 0x7fffe) || (pcVar4[uVar3 + 3] != param_5[uVar3 + 3])) goto LAB_0117df04;
            uVar2 = uVar3 + 3;
          } while (pcVar4[uVar3 + 3] != '\0');
          uVar3 = uVar3 + 2;
LAB_0117defc:
          if (uVar3 >> 0x13 == 0) goto LAB_0117ded0;
        }
      }
LAB_0117df04:
      iVar11 = iVar11 + 1;
    } while (iVar6 != iVar11);
  }
  return 0;
}


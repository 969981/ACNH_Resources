
undefined8 FUN_0117c860(long param_1,undefined4 *param_2,uint param_3,int param_4,char *param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  char *pcVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  int iVar15;
  
  iVar10 = *(int *)(param_1 + 0x18);
  if (iVar10 != 0) {
    if (param_5 == (char *)0x0) {
      iVar1 = *(int *)(param_1 + 0x10);
      iVar9 = *(int *)(param_1 + 0x14);
      lVar14 = *(long *)(param_1 + 8);
      iVar15 = 0;
      if (iVar1 <= iVar9) {
        iVar15 = iVar1;
      }
      lVar11 = (long)iVar9 - (long)iVar15;
      if (*(int *)(lVar14 + lVar11 * 0x90 + 0x14) != param_4) {
        do {
          iVar10 = iVar10 + -1;
          iVar9 = iVar9 + 1;
          if (iVar10 == 0) goto LAB_0117ca28;
          iVar15 = 0;
          if (iVar1 <= iVar9) {
            iVar15 = iVar1;
          }
        } while (*(int *)(lVar14 + (long)(iVar9 - iVar15) * 0x90 + 0x14) != param_4);
        lVar11 = (long)(iVar9 - iVar15);
      }
LAB_0117c910:
      uVar5 = FUN_01178ea0(lVar14 + lVar11 * 0x90,param_3);
      uVar6 = 1;
      goto LAB_0117ca6c;
    }
    iVar15 = 0;
    do {
      iVar1 = *(int *)(param_1 + 0x14) + iVar15;
      lVar14 = *(long *)(param_1 + 8);
      iVar9 = 0;
      if (*(int *)(param_1 + 0x10) <= iVar1) {
        iVar9 = *(int *)(param_1 + 0x10);
      }
      iVar1 = iVar1 - iVar9;
      if (*(int *)(lVar14 + (long)iVar1 * 0x90 + 0x14) == param_4) {
        lVar11 = (long)iVar1;
        lVar12 = lVar14 + (long)iVar1 * 0x90;
        plVar13 = (long *)(lVar12 + 0x18);
        (**(code **)(*plVar13 + 0x18))(plVar13);
        (**(code **)(*plVar13 + 0x18))(plVar13);
        pcVar8 = *(char **)(lVar12 + 0x20);
        if (pcVar8 == param_5) goto LAB_0117c910;
        if (*pcVar8 == *param_5) {
          if (*pcVar8 == '\0') goto LAB_0117c910;
          uVar4 = 0;
          do {
            uVar7 = uVar4;
            if (pcVar8[uVar7 + 1] != param_5[uVar7 + 1]) goto LAB_0117c940;
            if (pcVar8[uVar7 + 1] == '\0') goto LAB_0117c930;
            if (pcVar8[uVar7 + 2] != param_5[uVar7 + 2]) goto LAB_0117c940;
            if (pcVar8[uVar7 + 2] == '\0') {
              uVar7 = uVar7 + 1;
              goto LAB_0117c930;
            }
            if ((uVar7 == 0x7fffe) || (pcVar8[uVar7 + 3] != param_5[uVar7 + 3])) goto LAB_0117c940;
            uVar4 = uVar7 + 3;
          } while (pcVar8[uVar7 + 3] != '\0');
          uVar7 = uVar7 + 2;
LAB_0117c930:
          if (uVar7 < 0x80000) goto LAB_0117c910;
        }
      }
LAB_0117c940:
      iVar15 = iVar15 + 1;
    } while (iVar10 != iVar15);
  }
LAB_0117ca28:
  uVar6 = 0;
  uVar2 = *(uint *)(param_1 + 0x2420);
  *(undefined4 *)(param_1 + 0x2420) = *(undefined4 *)(param_1 + 0x2424);
  uVar2 = uVar2 ^ uVar2 << 0xb;
  *(undefined4 *)(param_1 + 0x2424) = *(undefined4 *)(param_1 + 0x2428);
  uVar3 = *(uint *)(param_1 + 0x242c);
  *(uint *)(param_1 + 0x2428) = uVar3;
  uVar2 = uVar2 >> 8 ^ uVar3 >> 0x13 ^ uVar2 ^ uVar3;
  *(uint *)(param_1 + 0x242c) = uVar2;
  uVar5 = (undefined4)((ulong)uVar2 * (ulong)param_3 >> 0x20);
LAB_0117ca6c:
  *param_2 = uVar5;
  return uVar6;
}


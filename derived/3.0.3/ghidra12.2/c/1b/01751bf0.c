
bool FUN_01751bf0(long *param_1)

{
  long *plVar1;
  char cVar2;
  ulong uVar3;
  ulong uVar4;
  char *pcVar5;
  long *plVar6;
  char *pcVar7;
  long lVar8;
  
  cVar2 = *(char *)param_1[0x23f];
  if ((cVar2 != '\0') && (param_1[0x227] != 0)) {
    lVar8 = *(long *)(param_1[0x227] + 0x88);
    plVar1 = param_1 + 0x23e;
    plVar6 = (long *)(lVar8 + 0x60);
    (**(code **)(*plVar6 + 0x18))(plVar6);
    (**(code **)(*plVar6 + 0x18))(plVar6);
    pcVar7 = *(char **)(lVar8 + 0x68);
    (**(code **)(param_1[0x23e] + 0x18))(plVar1);
    pcVar5 = (char *)param_1[0x23f];
    if (pcVar7 != pcVar5) {
      pcVar7 = *(char **)(lVar8 + 0x68);
      if (*pcVar7 == *pcVar5) {
        if (*pcVar7 == '\0') goto LAB_01751d38;
        uVar3 = 0;
        do {
          uVar4 = uVar3;
          if ((uVar4 == 0x80000) || (pcVar7[uVar4 + 1] != pcVar5[uVar4 + 1])) goto LAB_01751cd8;
          if (pcVar7[uVar4 + 1] == '\0') goto LAB_01751cd0;
          if (pcVar7[uVar4 + 2] != pcVar5[uVar4 + 2]) goto LAB_01751cd8;
          uVar3 = uVar4 + 2;
        } while (pcVar7[uVar4 + 2] != '\0');
        uVar4 = uVar4 + 1;
LAB_01751cd0:
        if (uVar4 < 0x80000) goto LAB_01751d38;
      }
LAB_01751cd8:
      if (param_1[0x227] != 0) {
        FUN_038501b0(0x41200000,param_1[0x227],0);
        lVar8 = param_1[0x227];
        if (*(char *)(lVar8 + 0x2c0) != '\0') {
          *(undefined1 *)(lVar8 + 0x2c0) = 0;
          FUN_03855b20(lVar8 + 0xc0,0);
        }
        FUN_0384f8c0(lVar8,plVar1,0,0);
        (**(code **)(*param_1 + 0x120))(param_1,plVar1,10,0);
      }
    }
  }
LAB_01751d38:
  return cVar2 != '\0';
}


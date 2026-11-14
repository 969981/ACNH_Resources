
undefined8 FUN_01753390(long *param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  char *pcVar3;
  long *plVar4;
  char *pcVar5;
  long lVar6;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if (*(char *)param_2[1] == '\0') {
    return 0;
  }
  if (param_1[0x227] != 0) {
    lVar6 = *(long *)(param_1[0x227] + 0x88);
    plVar4 = (long *)(lVar6 + 0x60);
    (**(code **)(*plVar4 + 0x18))(plVar4);
    (**(code **)(*plVar4 + 0x18))(plVar4);
    pcVar5 = *(char **)(lVar6 + 0x68);
    (**(code **)(*param_2 + 0x18))(param_2);
    pcVar3 = (char *)param_2[1];
    if (pcVar5 == pcVar3) {
      return 0;
    }
    pcVar5 = *(char **)(lVar6 + 0x68);
    if (*pcVar5 == *pcVar3) {
      if (*pcVar5 == '\0') {
        return 0;
      }
      uVar1 = 0;
      do {
        uVar2 = uVar1;
        if ((uVar2 == 0x80000) || (pcVar5[uVar2 + 1] != pcVar3[uVar2 + 1])) goto LAB_01753480;
        if (pcVar5[uVar2 + 1] == '\0') goto LAB_01753470;
        if (pcVar5[uVar2 + 2] != pcVar3[uVar2 + 2]) goto LAB_01753480;
        uVar1 = uVar2 + 2;
      } while (pcVar5[uVar2 + 2] != '\0');
      uVar2 = uVar2 + 1;
LAB_01753470:
      if (uVar2 < 0x80000) {
        return 0;
      }
    }
LAB_01753480:
    if ((param_1[0x227] != 0) && (lVar6 = *(long *)(param_1[0x227] + 0x78), lVar6 != 0)) {
      plVar4 = *(long **)(lVar6 + 0x50);
      local_40 = 0;
      uStack_38 = 0;
      lVar6 = (**(code **)(*plVar4 + 0x178))(plVar4,param_2,&uStack_38,&local_40);
      if ((lVar6 != 0) && (param_1[0x227] != 0)) {
        FUN_038501b0(0x41200000,param_1[0x227],0);
        lVar6 = param_1[0x227];
        if (*(char *)(lVar6 + 0x2c0) != '\0') {
          *(undefined1 *)(lVar6 + 0x2c0) = 0;
          FUN_03855b20(lVar6 + 0xc0,0);
        }
        FUN_0384f8c0(lVar6,param_2,0,0);
        (**(code **)(*param_1 + 0x120))(param_1,param_2,10,0);
      }
    }
  }
  return 1;
}


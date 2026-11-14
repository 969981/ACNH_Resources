
undefined8 FUN_01707d90(long param_1,long *param_2,undefined4 param_3,uint param_4,uint param_5)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  char *pcVar7;
  long *plVar8;
  char *pcVar9;
  
  lVar4 = *(long *)(param_1 + 0x1138);
  if (lVar4 == 0) {
LAB_01707eb0:
    FUN_017029bc(param_1,param_2,param_3,param_4,param_5 & 1);
    uVar3 = 1;
  }
  else {
    uVar6 = 0;
    if (*(long *)(lVar4 + 0x78) != 0) {
      uVar6 = *(uint *)(*(long *)(lVar4 + 0x78) + 0x18);
    }
    uVar1 = param_4;
    if (uVar6 <= param_4) {
      uVar1 = 0;
    }
    if (*(uint *)(lVar4 + 0x80) <= uVar1) {
      uVar1 = 0;
    }
    lVar4 = *(long *)(lVar4 + 0x88) + (long)(int)uVar1 * 0xe8;
    plVar8 = (long *)(lVar4 + 0x60);
    (**(code **)(*plVar8 + 0x18))(plVar8);
    (**(code **)(*plVar8 + 0x18))(plVar8);
    pcVar9 = *(char **)(lVar4 + 0x68);
    (**(code **)(*param_2 + 0x18))(param_2);
    pcVar7 = (char *)param_2[1];
    if (pcVar9 != pcVar7) {
      pcVar9 = *(char **)(lVar4 + 0x68);
      if (*pcVar9 != *pcVar7) goto LAB_01707eb0;
      if (*pcVar9 != '\0') {
        uVar2 = 0;
        do {
          uVar5 = uVar2;
          if ((uVar5 == 0x80000) || (pcVar9[uVar5 + 1] != pcVar7[uVar5 + 1])) goto LAB_01707eb0;
          if (pcVar9[uVar5 + 1] == '\0') goto LAB_01707ea0;
          if (pcVar9[uVar5 + 2] != pcVar7[uVar5 + 2]) goto LAB_01707eb0;
          uVar2 = uVar5 + 2;
        } while (pcVar9[uVar5 + 2] != '\0');
        uVar5 = uVar5 + 1;
LAB_01707ea0:
        if (0x7ffff < uVar5) goto LAB_01707eb0;
      }
    }
    uVar3 = 0;
  }
  return uVar3;
}


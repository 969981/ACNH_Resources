
undefined8 FUN_0073d870(long *param_1,long *param_2,uint param_3,uint param_4,uint param_5)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  char *pcVar6;
  long *plVar7;
  char *pcVar8;
  
  lVar3 = param_1[0x227];
  if (lVar3 == 0) {
    return 0;
  }
  uVar5 = 0;
  if (*(long *)(lVar3 + 0x78) != 0) {
    uVar5 = *(uint *)(*(long *)(lVar3 + 0x78) + 0x18);
  }
  uVar1 = param_4;
  if (uVar5 <= param_4) {
    uVar1 = 0;
  }
  if (*(uint *)(lVar3 + 0x80) <= uVar1) {
    uVar1 = 0;
  }
  lVar3 = *(long *)(lVar3 + 0x88) + (long)(int)uVar1 * 0xe8;
  plVar7 = (long *)(lVar3 + 0x60);
  (**(code **)(*plVar7 + 0x18))(plVar7);
  (**(code **)(*plVar7 + 0x18))(plVar7);
  pcVar8 = *(char **)(lVar3 + 0x68);
  (**(code **)(*param_2 + 0x18))(param_2);
  pcVar6 = (char *)param_2[1];
  if (pcVar8 != pcVar6) {
    pcVar8 = *(char **)(lVar3 + 0x68);
    if (*pcVar8 != *pcVar6) {
LAB_0073d98c:
      if (param_1[0x227] == 0) {
        return 0;
      }
      FUN_038501b0((float)param_3,param_1[0x227],param_4);
      lVar3 = param_1[0x227];
      if (*(char *)(lVar3 + 0x2c0) != '\0') {
        *(undefined1 *)(lVar3 + 0x2c0) = 0;
        FUN_03855b20(lVar3 + 0xc0,0);
      }
      FUN_0384f8c0(lVar3,param_2,param_4,param_5 & 1);
      (**(code **)(*param_1 + 0x120))(param_1,param_2,param_3,param_4);
      return 1;
    }
    if (*pcVar8 != '\0') {
      uVar2 = 0;
      do {
        uVar4 = uVar2;
        if ((uVar4 == 0x80000) || (pcVar8[uVar4 + 1] != pcVar6[uVar4 + 1])) goto LAB_0073d98c;
        if (pcVar8[uVar4 + 1] == '\0') goto LAB_0073d974;
        if (pcVar8[uVar4 + 2] != pcVar6[uVar4 + 2]) goto LAB_0073d98c;
        uVar2 = uVar4 + 2;
      } while (pcVar8[uVar4 + 2] != '\0');
      uVar4 = uVar4 + 1;
LAB_0073d974:
      if (0x7ffff < uVar4) goto LAB_0073d98c;
    }
  }
  return 0;
}


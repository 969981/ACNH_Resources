
uint FUN_03dcc3d0(undefined8 param_1,long *param_2,long *param_3)

{
  char cVar1;
  ulong uVar2;
  char *pcVar3;
  ulong uVar4;
  char *pcVar5;
  
  (**(code **)(*param_2 + 0x18))(param_2);
  (**(code **)(*param_2 + 0x18))(param_2);
  pcVar5 = (char *)param_2[1];
  (**(code **)(*param_3 + 0x18))(param_3);
  pcVar3 = (char *)param_3[1];
  if (pcVar5 != pcVar3) {
    cVar1 = *(char *)param_2[1];
    if (cVar1 != *pcVar3) {
      return 0;
    }
    if (cVar1 != '\0') {
      pcVar5 = (char *)param_2[1] + 2;
      uVar2 = 0;
      do {
        uVar4 = uVar2;
        if (uVar4 == 0x80000) goto LAB_03dcc4c0;
        if (pcVar5[uVar4 - 1] != pcVar3[uVar4 + 1]) {
          pcVar5 = (char *)0x0;
          goto LAB_03dcc4c0;
        }
        if (pcVar5[uVar4 - 1] == '\0') goto LAB_03dcc494;
        if (pcVar5[uVar4] != pcVar3[uVar4 + 2]) {
          pcVar5 = (char *)0x0;
          uVar4 = uVar4 | 1;
          goto LAB_03dcc4c0;
        }
        uVar2 = uVar4 + 2;
      } while (pcVar5[uVar4] != '\0');
      uVar4 = uVar4 + 1;
LAB_03dcc494:
      pcVar5 = (char *)0x1;
LAB_03dcc4c0:
      return (uint)(uVar4 < 0x80000) & (uint)pcVar5;
    }
  }
  return 1;
}


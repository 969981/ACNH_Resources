
uint FUN_00cf7bb0(long *param_1,long *param_2)

{
  char cVar1;
  ulong uVar2;
  char *pcVar3;
  ulong uVar4;
  char *pcVar5;
  
  (**(code **)(*param_1 + 0x18))();
  (**(code **)(*param_1 + 0x18))(param_1);
  pcVar5 = (char *)param_1[1];
  (**(code **)(*param_2 + 0x18))(param_2);
  pcVar3 = (char *)param_2[1];
  if (pcVar5 != pcVar3) {
    cVar1 = *(char *)param_1[1];
    if (cVar1 != *pcVar3) {
      return 0;
    }
    if (cVar1 != '\0') {
      pcVar5 = (char *)param_1[1] + 2;
      uVar2 = 0;
      do {
        uVar4 = uVar2;
        if (uVar4 == 0x80000) goto LAB_00cf7ca0;
        if (pcVar5[uVar4 - 1] != pcVar3[uVar4 + 1]) {
          pcVar5 = (char *)0x0;
          goto LAB_00cf7ca0;
        }
        if (pcVar5[uVar4 - 1] == '\0') goto LAB_00cf7c74;
        if (pcVar5[uVar4] != pcVar3[uVar4 + 2]) {
          pcVar5 = (char *)0x0;
          uVar4 = uVar4 | 1;
          goto LAB_00cf7ca0;
        }
        uVar2 = uVar4 + 2;
      } while (pcVar5[uVar4] != '\0');
      uVar4 = uVar4 + 1;
LAB_00cf7c74:
      pcVar5 = (char *)0x1;
LAB_00cf7ca0:
      return (uint)(uVar4 < 0x80000) & (uint)pcVar5;
    }
  }
  return 1;
}


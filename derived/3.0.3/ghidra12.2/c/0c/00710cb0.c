
uint FUN_00710cb0(long *param_1,long *param_2)

{
  char cVar1;
  char *pcVar2;
  ulong uVar3;
  ulong uVar4;
  char *pcVar5;
  
  (**(code **)(*param_1 + 0x18))();
  (**(code **)(*param_1 + 0x18))(param_1);
  pcVar5 = (char *)param_1[1];
  (**(code **)(*param_2 + 0x18))(param_2);
  pcVar2 = (char *)param_2[1];
  if (pcVar5 != pcVar2) {
    cVar1 = *(char *)param_1[1];
    if (cVar1 != *pcVar2) {
      return 0;
    }
    if (cVar1 != '\0') {
      uVar4 = 0;
      do {
        uVar3 = uVar4;
        uVar4 = uVar3;
        if (uVar3 == 0x80000) goto LAB_00710d70;
        cVar1 = ((char *)param_1[1])[uVar3 + 1];
        if (cVar1 != pcVar2[uVar3 + 1]) {
          uVar4 = 0;
          goto LAB_00710d70;
        }
        uVar4 = uVar3 + 1;
      } while (cVar1 != '\0');
      uVar4 = 1;
LAB_00710d70:
      return (uint)(uVar3 < 0x80000) & (uint)uVar4;
    }
  }
  return 1;
}


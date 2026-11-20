
uint FUN_03de1a70(undefined8 param_1,long *param_2,long *param_3)

{
  short sVar1;
  ulong uVar2;
  short *psVar3;
  ulong uVar4;
  short *psVar5;
  short *psVar6;
  
  (**(code **)(*param_2 + 0x18))(param_2);
  (**(code **)(*param_2 + 0x18))(param_2);
  psVar6 = (short *)param_2[1];
  (**(code **)(*param_3 + 0x18))(param_3);
  psVar3 = (short *)param_3[1];
  if (psVar6 != psVar3) {
    sVar1 = *(short *)param_2[1];
    if (sVar1 != *psVar3) {
      return 0;
    }
    if (sVar1 != 0) {
      uVar2 = 0;
      psVar6 = (short *)param_2[1];
      do {
        uVar4 = uVar2;
        psVar5 = psVar6 + 2;
        if (uVar4 == 0x80000) goto LAB_03de1b60;
        if (psVar6[1] != psVar3[1]) {
          psVar5 = (short *)0x0;
          goto LAB_03de1b60;
        }
        if (psVar6[1] == 0) goto LAB_03de1b34;
        if (*psVar5 != psVar3[2]) {
          psVar5 = (short *)0x0;
          uVar4 = uVar4 | 1;
          goto LAB_03de1b60;
        }
        uVar2 = uVar4 + 2;
        psVar6 = psVar5;
        psVar3 = psVar3 + 2;
      } while (*psVar5 != 0);
      uVar4 = uVar4 + 1;
LAB_03de1b34:
      psVar5 = (short *)0x1;
LAB_03de1b60:
      return (uint)(uVar4 < 0x80000) & (uint)psVar5;
    }
  }
  return 1;
}


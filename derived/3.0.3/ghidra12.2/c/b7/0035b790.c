
undefined8
FUN_0035b790(long param_1,undefined8 param_2,uint *param_3,undefined8 param_4,undefined8 param_5,
            undefined8 param_6)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  char acStack_150 [256];
  
  if (*(long *)(param_1 + 0x10) != 0) {
    return 0;
  }
  uVar3 = *param_3;
  if (uVar3 == 0x544e4646) {
    if ((short)param_3[1] == -0x101) {
      if ((param_3[2] ^ 0x4000000) >> 0x18 != 0) {
        return 0;
      }
      if ((param_3[2] & 0xfe0000) != 0) {
        return 0;
      }
      if ((0x23 < param_3[3]) && (uVar3 = (uint)(ushort)param_3[4], 1 < (ushort)param_3[4])) {
        piVar5 = (int *)0x0;
        piVar4 = (int *)((long)param_3 + (ulong)*(ushort *)((long)param_3 + 6));
        do {
          iVar1 = *piVar4;
          if (iVar1 < 0x50414d43) {
            if (iVar1 == 0x464e4946) {
              piVar5 = piVar4 + 2;
            }
            else if ((iVar1 != 0x474e524b) && (iVar1 != 0x48445743)) goto LAB_0035b920;
          }
          else if (((iVar1 != 0x50414d43) && (iVar1 != 0x504c4754)) && (iVar1 != 0x52474c47)) {
LAB_0035b920:
            *(uint **)(param_1 + 0x18) = param_3;
            return 0;
          }
          uVar3 = uVar3 - 1;
          piVar4 = (int *)((long)piVar4 + (ulong)(uint)piVar4[1]);
        } while (uVar3 != 0);
        *(uint **)(param_1 + 0x18) = param_3;
        if (piVar5 != (int *)0x0) {
          uVar2 = FUN_0035c2f0(param_3,0x474e524b);
          FUN_0035bbe4(param_1,param_3,piVar5,uVar2,param_4,param_5,param_6);
          FUN_0035c3a8(param_1,param_2);
          return 1;
        }
      }
    }
  }
  else {
    nn::util::SNPrintf(acStack_150,0x100,
                       "Signature check failed (\'%c%c%c%c\' must be \'%c%c%c%c\').",
                       (ulong)(uVar3 >> 0x18),(ulong)(uVar3 >> 0x10 & 0xff),
                       (ulong)(uVar3 >> 8 & 0xff),(ulong)(uVar3 & 0xff),0x54,0x4e,0x46,0x46);
  }
  return 0;
}


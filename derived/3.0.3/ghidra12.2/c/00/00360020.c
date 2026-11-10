
void FUN_00360020(undefined8 *param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined8 *puVar4;
  char acStack_130 [256];
  
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  uVar2 = *param_2;
  if (uVar2 != 0x4e414c46) {
    nn::util::SNPrintf(acStack_130,0x100,
                       "Signature check failed (\'%c%c%c%c\' must be \'%c%c%c%c\').",
                       (ulong)(uVar2 >> 0x18),(ulong)(uVar2 >> 0x10 & 0xff),
                       (ulong)(uVar2 >> 8 & 0xff),(ulong)(uVar2 & 0xff),0x4e,0x41,0x4c,0x46);
  }
  *param_1 = param_2;
  if ((short)param_2[4] != 0) {
    uVar2 = 0;
    piVar3 = (int *)((long)param_2 + (ulong)*(ushort *)((long)param_2 + 6));
    do {
      iVar1 = *piVar3;
      puVar4 = param_1 + 2;
      if (iVar1 == 0x31746170) {
LAB_003600e4:
        *puVar4 = piVar3;
      }
      else {
        if (iVar1 == 0x31696170) {
          puVar4 = param_1 + 1;
          goto LAB_003600e4;
        }
        puVar4 = param_1 + 3;
        if (iVar1 == 0x31686170) goto LAB_003600e4;
      }
      uVar2 = uVar2 + 1;
      piVar3 = (int *)((long)piVar3 + (ulong)(uint)piVar3[1]);
    } while (uVar2 < (ushort)param_2[4]);
  }
  return;
}


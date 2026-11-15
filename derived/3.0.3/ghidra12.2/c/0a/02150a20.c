
void FUN_02150a20(long param_1,undefined4 param_2,int param_3,uint param_4,uint param_5)

{
  undefined *puVar1;
  undefined4 uVar2;
  byte *pbVar3;
  long lVar4;
  
  if (*(long *)(param_1 + 0x1f0) == 0) {
    uVar2 = 0x22;
  }
  else {
    uVar2 = *(undefined4 *)(*(long *)(param_1 + 0x1f0) + 4);
  }
  *(undefined4 *)(param_1 + 0x1fc) = uVar2;
  *(undefined8 *)(param_1 + 0x1f0) = 0;
  FUN_0214d220(param_1);
  *(undefined1 *)(param_1 + 0x236) = 1;
  puVar1 = PTR_DAT_04bb32e8;
  if (param_3 == 1) {
    lVar4 = param_1;
    do {
      lVar4 = *(long *)(lVar4 + 8);
      pbVar3 = (byte *)(lVar4 + -0x10);
      if (pbVar3 == (byte *)(param_1 + -0x10)) goto LAB_02150b48;
    } while (*pbVar3 != param_4);
  }
  else {
    if ((param_5 & 1) == 0) {
      lVar4 = *(long *)(param_1 + 0x78);
      if (lVar4 != param_1 + 0x70) {
        pbVar3 = (byte *)(lVar4 + -0x10);
        do {
          if (*(int *)(pbVar3 + 4) == param_3) goto LAB_02150ab8;
          lVar4 = *(long *)(lVar4 + 8);
          pbVar3 = (byte *)(lVar4 + -0x10);
        } while (pbVar3 != (byte *)(param_1 + 0x60));
      }
LAB_02150b48:
      *(undefined8 *)(param_1 + 0x1f0) = 0;
      *(undefined8 *)(param_1 + 0x228) = *(undefined8 *)(DAT_04da6480 + 0x4060);
      return;
    }
    pbVar3 = (byte *)(param_1 + 0x1e0);
  }
LAB_02150ab8:
  *(byte **)(param_1 + 0x1f0) = pbVar3;
  *(undefined8 *)(param_1 + 0x228) = *(undefined8 *)(*(long *)puVar1 + 0x4060);
  *(undefined1 *)(param_1 + 0x1fa) = 1;
  FUN_0214fcb0(param_1,param_2);
  FUN_0214fac0(param_1,param_2,*(undefined8 *)(param_1 + 0x1f0));
  return;
}


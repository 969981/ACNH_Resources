
uint FUN_0073d6e0(long param_1,undefined4 param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = 0;
  if (*(long *)(param_1 + 0x1138) == 0) goto LAB_0073d754;
  uVar2 = FUN_03850368();
  if ((uVar2 & 1) == 0) {
    uVar1 = 0;
    if (*(long *)(param_1 + 0x1138) == 0) goto LAB_0073d754;
    uVar2 = FUN_03850368(*(long *)(param_1 + 0x1138),param_2);
    if (((uVar2 & 1) != 0) ||
       (uVar2 = FUN_0384fca4(*(undefined8 *)(param_1 + 0x1138),param_2), (uVar2 & 1) != 0)) {
      uVar1 = 0;
      goto LAB_0073d754;
    }
  }
  uVar1 = 0;
  if (*(long *)(param_1 + 0x1138) != 0) {
    uVar1 = FUN_03850a90(*(long *)(param_1 + 0x1138),0x15,0,param_2);
  }
LAB_0073d754:
  return uVar1 & 1;
}


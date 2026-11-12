
uint FUN_0073da08(long param_1,undefined4 param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (*(long *)(param_1 + 0x1138) != 0) {
    uVar2 = FUN_03850368();
    if (((uVar2 & 1) != 0) ||
       (((*(long *)(param_1 + 0x1138) != 0 &&
         (uVar2 = FUN_03850368(*(long *)(param_1 + 0x1138),param_2), (uVar2 & 1) == 0)) &&
        (uVar2 = FUN_0384fca4(*(undefined8 *)(param_1 + 0x1138),param_2), (uVar2 & 1) == 0)))) {
      uVar1 = 0;
      if (*(long *)(param_1 + 0x1138) != 0) {
        uVar1 = FUN_03850a90(*(long *)(param_1 + 0x1138),0x21,0,param_2);
      }
      goto LAB_0073da7c;
    }
  }
  uVar1 = 1;
LAB_0073da7c:
  return uVar1 & 1;
}


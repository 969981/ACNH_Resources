
uint FUN_0033e7e0(undefined4 param_1,long param_2,undefined8 param_3,int *param_4,undefined8 param_5
                 ,undefined4 param_6)

{
  uint uVar1;
  uint uVar2;
  
  (**(code **)**(undefined8 **)(param_2 + 0x19b8))();
  if ((int)*(uint *)(param_2 + 0x1b0) < 1) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = 0;
    do {
      uVar1 = 1 << (ulong)(uVar2 & 0x1f);
      if ((*(uint *)(param_2 + 0x19e0) & uVar1) == 0) {
        *(uint *)(param_2 + 0x19e0) = *(uint *)(param_2 + 0x19e0) | uVar1;
        goto LAB_0033e870;
      }
      uVar2 = uVar2 + 1;
    } while (*(uint *)(param_2 + 0x1b0) != uVar2);
    uVar2 = 0xffffffff;
  }
LAB_0033e870:
  (**(code **)(**(long **)(param_2 + 0x19b8) + 8))();
  uVar1 = FUN_0033e900(param_1,param_2,param_3,param_4,param_5,param_6,uVar2);
  if (*param_4 == 0) {
    (**(code **)**(undefined8 **)(param_2 + 0x19b8))();
    *(uint *)(param_2 + 0x19e0) =
         *(uint *)(param_2 + 0x19e0) & (1 << (ulong)(uVar2 & 0x1f) ^ 0xffffffffU);
    (**(code **)(**(long **)(param_2 + 0x19b8) + 8))();
  }
  return uVar1 & 1;
}


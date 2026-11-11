
uint FUN_003b89a4(long param_1,ulong param_2,undefined8 param_3)

{
  uint uVar1;
  long *plVar2;
  
  uVar1 = FUN_003b9d24(*(undefined8 *)(param_1 + 8),param_2,param_3,0);
  if ((((uVar1 & 1) != 0) && (plVar2 = *(long **)(param_1 + 0x10), plVar2 != (long *)0x0)) &&
     ((char)plVar2[1] != '\0')) {
    (**(code **)(*plVar2 + 0x60))(plVar2,param_2 & 0xffffffff,param_3,0);
  }
  return uVar1 & 1;
}


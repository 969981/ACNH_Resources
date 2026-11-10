
void FUN_00361e08(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  FUN_003652d0(param_1 + 0x80);
  FUN_0038b500(param_1 + 0x90,param_2);
  FUN_00385a70(param_1 + 0xa0,param_2);
  lVar1 = *(long *)(param_1 + 0xb0);
  if (lVar1 != 0) {
    if (*(long *)(lVar1 + 0x48) == *(long *)(lVar1 + 0x40)) {
      FUN_0034915c(*(long *)(lVar1 + 0x48),param_2);
    }
    *(undefined8 *)(lVar1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0xb0) = 0;
  }
  return;
}


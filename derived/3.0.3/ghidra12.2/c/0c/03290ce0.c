
void FUN_03290ce0(long param_1,undefined8 param_2,uint param_3,uint param_4)

{
  long lVar1;
  
  for (lVar1 = *(long *)(param_1 + 0x58); lVar1 != 0; lVar1 = *(long *)(lVar1 + 0x10)) {
    if ((*(byte *)(lVar1 + 0x58) & 1) != 0) {
      (**(code **)(*(long *)(lVar1 + -8) + 0x30))();
    }
  }
  FUN_03290a60(param_1,param_2,param_3 & 1,param_4 & 1);
  *(long *)(param_1 + 0x48) = param_1 + 0x28;
  *(long *)(param_1 + 0x50) = param_1 + 0x28;
  return;
}


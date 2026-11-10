
undefined8 FUN_001b9460(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  long lVar1;
  undefined1 uStack_31;
  undefined8 local_28;
  
  if (*(char *)(param_1 + 0x68) == '\0') {
    FUN_001b8590(param_1);
  }
  if ((param_4 & 1) == 0) {
    lVar1 = param_1 + 0x30;
  }
  else {
    lVar1 = param_1 + 0x48;
  }
  local_28 = param_2;
  lVar1 = FUN_001ddba0(lVar1,param_2,PTR_piecewise_construct_04bcbf80,&local_28,&uStack_31);
  FUN_00189504(lVar1 + 0x48,param_3);
  *(undefined1 *)(param_1 + 0x69) = 0;
  return 1;
}


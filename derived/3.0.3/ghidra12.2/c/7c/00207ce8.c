
undefined8 FUN_00207ce8(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long local_28;
  
  uVar2 = FUN_00194070(param_2);
  if ((uVar2 & 1) == 0) {
    return 0;
  }
  *(undefined8 *)(param_1 + 0xb0) = param_2;
  if (*(char *)(param_1 + 0x18) == '\0') {
    uVar3 = FUN_002091d0(param_1);
    return uVar3;
  }
  lVar1 = param_1 + 0x20;
  FUN_001984a0(lVar1);
  local_28 = param_1;
  FUN_00198814(lVar1,PTR_LAB_04bccc20,&local_28,1);
  (**(code **)(param_1 + 8))(lVar1,param_1 + 0x10);
  return 1;
}


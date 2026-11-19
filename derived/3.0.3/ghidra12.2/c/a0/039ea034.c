
uint FUN_039ea034(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 local_40;
  long lStack_38;
  
  uVar1 = FUN_039f9c10();
  if ((uVar1 & 1) != 0) {
    puVar2 = (undefined8 *)(*(long *)(param_1 + 0x278) + 0x28);
    local_40 = param_2;
    lStack_38 = param_1;
    (**(code **)*puVar2)(puVar2,&local_40);
  }
  return uVar1 & 1;
}


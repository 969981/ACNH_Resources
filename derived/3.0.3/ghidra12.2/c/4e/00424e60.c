
undefined4 FUN_00424e60(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_200 [128];
  long local_140;
  undefined8 *puStack_138;
  undefined1 auStack_130 [256];
  
  local_140 = (long)(int)*param_3;
  if (0x1f < (int)*param_3) {
    local_140 = 0x20;
  }
  puStack_138 = param_3;
  FUN_0043db40(auStack_130,local_140,auStack_200 + 0x80);
  uVar1 = FUN_00424f20(param_1,param_2,&local_140);
  return uVar1;
}



void FUN_03c54e40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_58 [4];
  uint local_54;
  uint local_44 [2];
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  int local_14;
  
  FUN_03c53c60(auStack_58,param_2);
  local_44[0] = local_54;
  local_14 = 1 << (ulong)(local_54 & 0x1f);
  FUN_03c53c60(local_44,param_2);
  FUN_03c54ed0(param_1,param_2,local_34,local_44[0],local_3c,&local_14,uStack_38,param_3);
  return;
}



void FUN_0364efb0(long *param_1,long param_2)

{
  uint uVar1;
  
  *param_1 = param_2;
  uVar1 = *(uint *)(param_2 + 0x294);
  *(undefined8 *)((long)param_1 + 0xc) = 0x300000003;
  *(uint *)(param_1 + 1) = uVar1 >> 0xd;
  *(undefined8 *)((long)param_1 + 0x3c) = 0xff000000ff;
  *(undefined8 *)((long)param_1 + 0x44) = 0xff000000ff;
  FUN_0364f04c();
  if (*(char *)((long)param_1 + 0xac) == '\0') {
    FUN_03650e08(param_1);
    FUN_03650ad4(param_1);
  }
  else {
    FUN_03650ad4(param_1);
    FUN_03650e08(param_1);
  }
  FUN_03650710(param_1,0);
  FUN_03650710(param_1,1);
  FUN_03650710(param_1,2);
  FUN_03650710(param_1,3);
  return;
}



void FUN_0037c7b4(long param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined4 local_44;
  undefined5 local_40;
  undefined3 uStack_3b;
  undefined5 uStack_38;
  
  if ((*(byte *)(param_1 + 0x62) >> 5 & 1) == 0) {
    local_44 = 0x15;
    local_40 = 0xffffffffff;
    uStack_3b = 0xffffff;
    uStack_38 = 0xffffffffff;
    FUN_0037db40(param_1,0x15,&local_44,0x14,1);
  }
  FUN_0037db40(param_1,param_2,param_3,param_4,0);
  return;
}


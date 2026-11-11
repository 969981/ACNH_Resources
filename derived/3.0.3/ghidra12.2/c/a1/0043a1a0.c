
int FUN_0043a1a0(char *param_1,int param_2,undefined8 param_3,char *param_4,undefined8 param_5,
                undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 *local_30;
  long lStack_28;
  undefined8 *local_20;
  undefined8 uStack_18;
  
  local_20 = &local_70;
  lStack_28 = (long)register0x00000008 + -0x50;
  uStack_18 = 0xffffff80ffffffe0;
  local_70 = param_5;
  uStack_68 = param_6;
  local_60 = param_7;
  uStack_58 = param_8;
  local_30 = (undefined1 *)register0x00000008;
  iVar1 = vsnprintf(param_1,(long)param_2,param_4,&local_30);
  return iVar1;
}


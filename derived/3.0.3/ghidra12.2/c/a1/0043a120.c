
int FUN_0043a120(char *param_1,int param_2,char *param_3,undefined8 param_4,undefined8 param_5,
                undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  undefined1 auStack_80 [8];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 *local_30;
  undefined1 *puStack_28;
  undefined1 *local_20;
  undefined8 uStack_18;
  
  local_20 = auStack_80;
  puStack_28 = auStack_80 + 0x30;
  uStack_18 = 0xffffff80ffffffd8;
  local_78 = param_4;
  local_70 = param_5;
  uStack_68 = param_6;
  local_60 = param_7;
  uStack_58 = param_8;
  local_30 = (undefined1 *)register0x00000008;
  iVar1 = vsnprintf(param_1,(long)param_2,param_3,&local_30);
  return iVar1;
}


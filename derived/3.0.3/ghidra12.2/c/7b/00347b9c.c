
void FUN_00347b9c(undefined1 *param_1,undefined8 *param_2,undefined4 *param_3,undefined8 *param_4,
                 undefined8 param_5)

{
  ulong uVar1;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_50 = 0;
  uStack_48 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_80 = 0;
  uStack_78 = 0;
  (**(code **)PTR_DAT_04bbd7b0)(&local_80);
  (**(code **)PTR_DAT_04bbd7b8)(&local_80,*param_2);
  (**(code **)PTR_DAT_04bbd7c8)(&local_80,*param_4,param_5,*param_3);
  *(undefined1 **)(param_1 + 8) = param_1 + 0x10;
  (**(code **)PTR_DAT_04bbd7d0)(param_1 + 0x10,&local_80);
  uVar1 = (**(code **)PTR_DAT_04bcf030)(*param_4);
  param_1[1] = (byte)(uVar1 >> 1) & 2 | param_1[1] & 0xfc;
  *param_1 = 1;
  return;
}


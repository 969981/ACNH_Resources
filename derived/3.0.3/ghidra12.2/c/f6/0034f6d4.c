
void FUN_0034f6d4(undefined1 *param_1,undefined8 *param_2,long param_3,undefined8 *param_4,
                 undefined8 param_5,undefined8 param_6)

{
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
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
  local_90 = 0;
  uStack_88 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  (**(code **)PTR_DAT_04bcf068)(&local_c0,*param_2);
  FUN_0034d150(&local_c0,param_3);
  (**(code **)PTR_DAT_04bcf0a8)(&local_c0,*param_4,param_5);
  if ((*(byte *)(param_3 + 0x10) >> 5 & 1) != 0) {
    FUN_0034e894(&local_c0,param_4,param_5,param_6);
  }
  *(undefined1 **)(param_1 + 8) = param_1 + 0x10;
  (**(code **)PTR_DAT_04bcf0b8)(param_1 + 0x10,&local_c0);
  param_1[1] = param_1[1] & 0xfe;
  *param_1 = 1;
  return;
}


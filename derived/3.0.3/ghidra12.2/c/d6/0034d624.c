
void FUN_0034d624(undefined1 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = 0;
  uStack_38 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_70 = 0;
  uStack_68 = 0;
  (**(code **)PTR_DAT_04bcf910)(&local_70,*param_2);
  FUN_0034d3bc(&local_70,param_3);
  if ((*(byte *)((long)param_2 + 0x300c) & 1) == 0) {
    (**(code **)PTR_DAT_04bcf968)(&local_70,0);
  }
  *(undefined1 **)(param_1 + 8) = param_1 + 0x10;
  (**(code **)PTR_DAT_04bcf9d8)(param_1 + 0x10,&local_70);
  param_1[1] = param_1[1] & 0xfe;
  *param_1 = 1;
  return;
}


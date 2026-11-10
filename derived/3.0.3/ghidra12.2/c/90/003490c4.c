
void FUN_003490c4(long *param_1,undefined8 *param_2,long param_3)

{
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = 0;
  uStack_28 = 0;
  *param_1 = (long)(param_1 + 2);
  param_1[1] = *(long *)(param_3 + 8);
  local_40 = 0;
  uStack_38 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_60 = 0;
  uStack_58 = 0;
  (**(code **)PTR_DAT_04bcf330)(&local_60,*param_2);
  FUN_0034d0e0(&local_60,param_3);
  (**(code **)PTR_DAT_04bcf338)(*param_1,&local_60);
  *(byte *)((long)param_1 + 0x111) = *(byte *)((long)param_1 + 0x111) & 0xfe;
  *(undefined1 *)(param_1 + 0x22) = 1;
  return;
}


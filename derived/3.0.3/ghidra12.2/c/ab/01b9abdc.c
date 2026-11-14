
void FUN_01b9abdc(long param_1,int *param_2,byte param_3,long param_4)

{
  long lVar1;
  undefined *local_f8;
  undefined *puStack_f0;
  undefined *local_e8;
  undefined4 local_e0;
  undefined *local_d8;
  int local_d0;
  undefined1 local_cc;
  long local_c8;
  long lStack_c0;
  long local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined *local_70;
  undefined *local_68;
  undefined *local_60;
  char *pcStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38;
  undefined4 local_34;
  
  local_cc = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_e0 = 0xb;
  local_e8 = PTR_DAT_04bc0b78 + 0x10;
  lVar1 = param_1 + 0x140;
  local_d0 = *(int *)PTR_DAT_04bc0b30;
  local_d8 = PTR_DAT_04bc0a78 + 0x10;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  *(int *)PTR_DAT_04bc0b30 = local_d0 + 1;
  local_b8 = param_1 + 0x400;
  uStack_b0 = 0;
  if ((*(short *)(param_4 + 0x1e8) == 0) || ((short)param_2[1] == 0)) {
    if (*(int *)(param_4 + 0x1e4) == *param_2) goto LAB_01b9acd8;
  }
  else if ((*(int *)(param_4 + 0x1e4) == *param_2) &&
          ((*(long *)(param_2 + 1) == *(long *)(param_4 + 0x1e8) &&
           *(long *)(param_2 + 3) == *(long *)(param_4 + 0x1f0)) &&
           param_2[5] == *(int *)(param_4 + 0x1f8))) {
LAB_01b9acd8:
    puStack_f0 = &DAT_04091fb1;
    goto LAB_01b9acf0;
  }
  puStack_f0 = &DAT_040ff1b7;
LAB_01b9acf0:
  local_f8 = PTR_DAT_04bb2020 + 0x10;
  pcStack_58 = "BirthdayMessage";
  local_68 = &DAT_040d42fe;
  local_c8 = param_1;
  lStack_c0 = lVar1;
  local_70 = local_f8;
  local_60 = local_f8;
  FUN_01bdc520(&local_e8,&local_60,&local_70,&local_f8);
  local_68 = (undefined *)(param_4 + 4);
  local_70 = (undefined *)CONCAT44(local_70._4_4_,0xf0);
  (**(code **)(*(long *)(param_1 + 0x140) + 0x38))(lVar1);
  local_48 = 0;
  uStack_40 = 0;
  local_50 = 0;
  local_38 = 1;
  local_34 = 0;
  local_60 = PTR_DAT_04bc0cd8 + 0x10;
  pcStack_58 = (char *)0x0;
  FUN_02906b00(&local_60,lVar1,&local_70);
  *(byte *)(param_1 + 0x540) = param_3 & 1;
  return;
}


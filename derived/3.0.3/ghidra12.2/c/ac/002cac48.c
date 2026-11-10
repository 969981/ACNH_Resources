
void FUN_002cac48(long *param_1,undefined8 param_2,long *param_3,long *param_4,undefined1 param_5,
                 uint param_6,uint param_7)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  undefined *local_68;
  undefined1 auStack_60 [24];
  undefined2 local_48;
  
  *param_1 = (long)(PTR_DAT_04bce240 + 0x10);
  FUN_002b4018(param_1 + 1);
  lVar2 = *param_3;
  *(undefined2 *)(param_1 + 0x13) = 0;
  *(undefined1 *)((long)param_1 + 0x9a) = 0;
  *(undefined4 *)((long)param_1 + 0x9c) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x14) = param_5;
  param_1[0x11] = lVar2;
  param_1[0x12] = 0;
  *(undefined4 *)((long)param_1 + 0xa4) = 0;
  *(uint *)(param_1 + 0x15) = param_6 & 0xff;
  plVar1 = (long *)FUN_00228380();
  local_68 = (undefined *)0x0;
  param_1[0x16] = *plVar1 * 90000;
  FUN_002282f0(&local_68);
  param_1[0x12] = (long)(local_68 + *param_4);
  FUN_002b4378(&local_68,param_1 + 1);
  local_68 = PTR_DAT_04bcba18;
  *(undefined2 *)((long)param_1 + 0xac) = local_48;
  local_68 = local_68 + 0x10;
  FUN_0021f584(auStack_60);
  uVar3 = (uint)*(ushort *)((long)param_1 + 0xac) + (param_7 & 0xff);
  if (0xfffe < uVar3) {
    uVar3 = 0xffff;
  }
  *(short *)((long)param_1 + 0xae) = (short)uVar3;
  return;
}



void FUN_0038ba78(long param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined4 param_5
                 )

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 *local_88;
  undefined1 *local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  *(undefined8 *)(param_1 + 0x30) = param_3;
  uVar1 = (**(code **)PTR_DAT_04bc9520)
                    (param_1 + 0x18,param_1 + 0x20,param_1 + 0x28,param_3,param_4,
                     *(undefined8 *)PTR_DAT_04bc9530,param_5);
  *(undefined4 *)(param_1 + 0xd4) = uVar1;
  *(undefined8 *)(param_1 + 8) = **(undefined8 **)(param_1 + 0x28);
  local_50 = 0;
  uStack_48 = 0;
  local_60 = 0;
  local_58 = 0;
  local_70 = 0;
  local_68 = 0;
  FUN_0034fda4(&local_70);
  local_70 = CONCAT44(*(undefined4 *)(param_4 + 0xc),(undefined4)local_70);
  uVar2 = 6;
  if (*(ushort *)(param_4 + 8) < 2) {
    uVar2 = 1;
  }
  local_70 = CONCAT71(local_70._1_7_,uVar2);
  local_58 = *(undefined8 *)(param_1 + 0x18);
  local_68 = 0x100000000;
  FUN_0034f990(param_1 + 0x40,param_2,&local_70);
  local_80 = (undefined1 *)0x0;
  uStack_78 = 0;
  local_90 = 0;
  local_88 = (undefined8 *)0x0;
  FUN_0034fd30(&local_90);
  local_50 = 0;
  uStack_48 = 0;
  local_90 = local_90 | 1;
  local_60 = 0;
  local_58 = 0;
  local_70 = 0;
  local_68 = 0;
  FUN_0034fd18(&local_70);
  local_70 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_68 = CONCAT44((float)*(int *)(param_4 + 0x18),(float)*(int *)(param_4 + 0x14));
  FUN_0034fd28(&local_b0);
  local_b0 = 0;
  local_90._0_6_ = CONCAT42(0x10001,(undefined2)local_90);
  local_a8 = *(undefined8 *)(param_4 + 0x14);
  local_88 = &local_70;
  local_80 = (undefined1 *)&local_b0;
  FUN_0034f400(param_1 + 0x88,param_2,&local_90);
  uVar1 = *(undefined4 *)(param_4 + 0x18);
  *(short *)(param_1 + 0x10) = (short)*(undefined4 *)(param_4 + 0x14);
  *(short *)(param_1 + 0x12) = (short)uVar1;
  *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_4 + 0xc);
  return;
}


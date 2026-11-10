
void FUN_00348bb0(long param_1,undefined8 param_2,uint param_3,long param_4)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined4 *puVar3;
  undefined1 local_120 [8];
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
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
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  puVar3 = (undefined4 *)local_120;
  local_30 = 0;
  uStack_28 = 0;
  local_40 = 0;
  uStack_38 = 0;
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
  local_d0 = 0;
  uStack_c8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  local_100 = 0;
  uStack_f8 = 0;
  local_110 = 0;
  uStack_108 = 0;
  local_120 = (undefined1  [8])0x0;
  uStack_118 = 0;
  if (0 < (int)param_3) {
    uVar2 = (ulong)param_3;
    param_4 = param_4 + 8;
    do {
      uVar2 = uVar2 - 1;
      *puVar3 = *(undefined4 *)(param_4 + -8);
      uVar1 = *(undefined4 *)(param_4 + 4);
      *(undefined8 *)(puVar3 + 1) = *(undefined8 *)(param_4 + -4);
      param_4 = param_4 + 0x20;
      puVar3[3] = uVar1;
      puVar3 = puVar3 + 4;
    } while (uVar2 != 0);
  }
  (**(code **)PTR_DAT_04bcf200)(*(undefined8 *)(param_1 + 0xb0),param_2,param_3,local_120);
  return;
}



long FUN_00358fcc(undefined8 *param_1,long param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  long local_18;
  
  local_58 = param_1[10];
  uStack_50 = param_1[0xb];
  local_40 = 0;
  uStack_38 = 0;
  param_3 = param_3 & 0xffffffff;
  uVar2 = -(param_3 >> 0x1f) & 0xfffffffe00000000 | param_3 << 1;
  local_48 = param_1[0xc];
  local_78 = param_1[6];
  uStack_70 = param_1[7];
  local_68 = param_1[8];
  uStack_60 = param_1[9];
  local_98 = (undefined4)param_1[2];
  uStack_8c = (undefined4)((ulong)param_1[3] >> 0x20);
  uStack_94 = 0;
  uStack_90 = 0;
  local_88 = param_1[4];
  uStack_80 = param_1[5];
  local_a8 = *param_1;
  uStack_a0 = param_1[1];
  local_18 = param_2;
  (**(code **)(*(long *)param_1[0xb] + 0x60))((long *)param_1[0xb],param_1,param_2,param_2 + uVar2);
  FUN_003590a0(&local_a8,&local_40,&local_18,param_3);
  (**(code **)(*(long *)param_1[0xb] + 0x68))
            ((long *)param_1[0xb],param_1,local_18,local_18 + uVar2);
  lVar1 = local_18;
  thunk_FUN_0035008c(&local_a8);
  return lVar1;
}


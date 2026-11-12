
void FUN_0081b190(undefined8 param_1,undefined8 param_2,undefined **param_3,uint param_4)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  undefined *local_a8;
  undefined4 local_a0;
  undefined *local_98;
  undefined *local_90;
  undefined4 local_88;
  undefined1 uStack_84;
  undefined1 uStack_83;
  undefined1 uStack_82;
  undefined1 uStack_81;
  undefined4 uStack_80;
  undefined4 local_7c;
  undefined4 uStack_78;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  undefined *local_40;
  undefined *local_38;
  
  local_a0 = 1;
  uStack_84 = 0;
  local_7c = 0;
  uStack_78 = 0;
  local_74 = 0;
  uStack_70 = 0;
  local_6c = 0;
  uStack_68 = 0;
  local_a8 = PTR_DAT_04bdf0b0 + 0x10;
  local_98 = PTR_DAT_04bb2020 + 0x10;
  local_64 = 0;
  uStack_60 = 0;
  local_88 = 0x1010100;
  local_90 = PTR_DAT_04bb2120;
  uStack_83 = 1;
  uStack_82 = 1;
  uStack_81 = 1;
  uStack_80 = CONCAT31(uStack_80._1_3_,1);
  local_5c = 0;
  uStack_58 = 0;
  local_54 = 0;
  uStack_50 = 0;
  local_4c = 0;
  uStack_48 = 0;
  local_44 = 0;
  local_38 = PTR_DAT_04bb2120;
  local_40 = local_98;
  if (((*PTR_DAT_04bb4ef0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_04bb4ef0), iVar2 != 0))
  {
    *(undefined ***)PTR_DAT_04bb4ee8 = &PTR_LAB_049178f8;
    __cxa_guard_release(PTR_DAT_04bb4ef0);
  }
  if (param_3 != (undefined **)0x0) {
    uVar3 = (**(code **)*param_3)(param_3,PTR_DAT_04bb4ee8);
    if ((uVar3 & 1) == 0) goto LAB_0081b2b0;
    uStack_58 = SUB84(param_3[10],0);
    local_54 = (undefined4)((ulong)param_3[10] >> 0x20);
    uStack_50 = SUB84(param_3[0xb],0);
    local_4c = (undefined4)((ulong)param_3[0xb] >> 0x20);
    uStack_48 = SUB84(param_3[0xc],0);
    local_44 = (undefined4)((ulong)param_3[0xc] >> 0x20);
    uStack_78 = SUB84(param_3[6],0);
    local_74 = (undefined4)((ulong)param_3[6] >> 0x20);
    uStack_70 = SUB84(param_3[7],0);
    local_6c = (undefined4)((ulong)param_3[7] >> 0x20);
    uStack_68 = SUB84(param_3[8],0);
    local_64 = (undefined4)((ulong)param_3[8] >> 0x20);
    uStack_60 = SUB84(param_3[9],0);
    local_5c = (undefined4)((ulong)param_3[9] >> 0x20);
    local_90 = param_3[3];
    puVar1 = param_3[4];
    local_88 = SUB84(puVar1,0);
    uStack_84 = (undefined1)((ulong)puVar1 >> 0x20);
    uStack_83 = (undefined1)((ulong)puVar1 >> 0x28);
    uStack_81 = (undefined1)((ulong)puVar1 >> 0x38);
    uStack_80 = SUB84(param_3[5],0);
    local_7c = (undefined4)((ulong)param_3[5] >> 0x20);
    local_a0 = *(undefined4 *)(param_3 + 1);
    local_38 = param_3[0xe];
  }
  if (CONCAT44(local_6c,uStack_70) == 0) {
    uStack_70 = 0x4cce938;
    local_6c = 0;
  }
  param_3 = &local_a8;
  uStack_82 = 0;
LAB_0081b2b0:
  FUN_0081afa0(param_1,param_2,param_3,param_4 & 1);
  return;
}


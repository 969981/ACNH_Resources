
int FUN_006f3fe0(long *param_1,undefined8 param_2,undefined4 *param_3,undefined4 *param_4,
                undefined4 param_5,long param_6,uint param_7)

{
  long lVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined *local_140;
  undefined8 uStack_138;
  undefined4 local_130;
  undefined1 local_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  undefined *local_110;
  undefined1 *puStack_108;
  undefined4 local_100;
  undefined1 local_fc [63];
  undefined1 local_bd;
  undefined *local_b8;
  undefined1 *puStack_b0;
  undefined4 local_a8;
  undefined1 local_a4 [63];
  undefined1 local_65;
  undefined4 local_44;
  
  lVar1 = param_6 + (ulong)param_7 * 2;
  iVar2 = (**(code **)(*param_1 + 0x1a0))(param_1,param_6,lVar1);
  local_128 = 0xffffffff;
  uStack_120 = 0xffffffff00000000;
  local_44 = 0;
  local_12c = 0;
  local_140 = PTR_DAT_04bb2df8 + 0x10;
  local_118 = 0xffffffff;
  puStack_108 = local_fc;
  puStack_b0 = local_a4;
  local_100 = 0x40;
  local_bd = 0;
  local_110 = PTR_DAT_04bb2bc0 + 0x10;
  local_fc[0] = 0;
  local_a8 = 0x40;
  local_65 = 0;
  local_a4[0] = 0;
  uStack_138 = param_2;
  local_130 = param_5;
  local_b8 = local_110;
  iVar3 = (**(code **)(*param_1 + 0x1a8))(param_1,&local_140,&local_44,param_6,lVar1);
  local_140 = PTR_DAT_04bb2de8 + 0x10;
  uStack_138 = param_2;
  local_130 = param_5;
  uVar4 = (**(code **)(*param_1 + 0x1b0))(param_1,&local_140);
  *param_3 = local_44;
  *param_4 = uVar4;
  if (iVar2 != 0) {
    iVar3 = iVar2;
  }
  return iVar3;
}


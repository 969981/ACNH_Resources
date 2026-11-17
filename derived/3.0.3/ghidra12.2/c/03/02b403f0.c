
void FUN_02b403f0(undefined4 *param_1,undefined4 *param_2)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 uStack_130;
  undefined4 local_12c;
  undefined4 uStack_128;
  undefined8 local_124;
  undefined *local_118;
  undefined1 *puStack_110;
  undefined4 local_108;
  undefined1 local_104 [127];
  undefined1 local_85;
  undefined4 local_80;
  undefined2 local_7c;
  undefined ***local_78;
  undefined **local_70;
  undefined8 uStack_68;
  
  lVar1 = DAT_04c93e08;
  if (((int)param_2[1] < 0) || (DAT_04c93e08 == 0)) {
    uVar2 = DAT_04c9a0c8;
  }
  else {
    param_1[1] = *param_2;
    param_1[2] = param_2[1];
    param_1[3] = param_2[2];
    param_1[4] = param_2[3];
    param_1[5] = param_2[4];
    param_1[6] = param_2[5];
    param_1[7] = param_2[6];
    *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 7);
    local_70 = &PTR_LAB_04a9bd78;
    uStack_68 = 0xffffffff00000000;
    FUN_02b40530(param_1,&local_70);
    local_108 = 0x80;
    uStack_140 = *(undefined8 *)(param_1 + 3);
    local_80 = 7;
    local_138 = param_1[5];
    local_85 = 0;
    local_104[0] = 0;
    local_148 = 0xe00000000;
    uStack_130 = param_1[6];
    local_118 = PTR_DAT_04bb2d88 + 0x10;
    local_134 = 0x3f800000;
    puStack_110 = local_104;
    local_12c = param_1[1];
    uStack_128 = param_1[2];
    local_124 = 2;
    local_7c = 0x200;
    local_78 = &local_70;
    uVar2 = FUN_007402e0(lVar1,&local_148,0,0);
  }
  *param_1 = uVar2;
  return;
}


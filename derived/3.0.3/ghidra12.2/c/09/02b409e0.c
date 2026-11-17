
void FUN_02b409e0(undefined4 *param_1,int *param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 local_158;
  int local_150;
  undefined8 local_14c;
  int local_144;
  undefined4 local_140;
  int iStack_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 uStack_130;
  undefined *local_128;
  undefined1 *puStack_120;
  undefined4 local_118;
  undefined1 local_114 [127];
  undefined1 local_95;
  undefined4 local_90;
  undefined2 local_8c;
  undefined **local_88;
  undefined *local_80;
  undefined8 uStack_78;
  undefined4 local_24;
  
  lVar2 = *(long *)PTR_DAT_04bb27c0;
  if ((lVar2 == 0) || (*param_2 != 1)) {
    uVar1 = DAT_04c9a0c8;
  }
  else {
    local_24 = 0;
    FUN_02b674f0(&local_24,param_2[1]);
    param_1[1] = *param_2;
    param_1[2] = local_24;
    local_80 = PTR_DAT_04bc44c0 + 0x10;
    uStack_78 = 0xffffffff00000000;
    FUN_02b40530(param_1,&local_80);
    local_158 = 0xe00000000;
    local_150 = param_2[2];
    local_118 = 0x80;
    local_90 = 7;
    local_14c = *(undefined8 *)(param_2 + 3);
    local_95 = 0;
    local_114[0] = 0;
    local_128 = PTR_DAT_04bb2d88 + 0x10;
    local_144 = param_2[5];
    puStack_120 = local_114;
    iStack_13c = *param_2;
    local_140 = 0;
    local_134 = 3;
    uStack_130 = 0;
    local_138 = local_24;
    local_8c = 0x201;
    local_88 = &local_80;
    uVar1 = FUN_007402e0(lVar2,&local_158,0,0);
  }
  *param_1 = uVar1;
  return;
}


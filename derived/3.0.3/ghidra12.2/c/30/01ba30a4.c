
long FUN_01ba30a4(long *param_1,long *param_2,uint param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  int iVar4;
  undefined **local_250;
  long local_248 [2];
  undefined *local_238;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined *local_208;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined *local_1d8;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined *local_1a8;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined *local_178;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined *local_148;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined *local_118;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined *local_e8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined *local_b8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined *local_88;
  undefined4 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  undefined2 local_4c;
  int local_48;
  
  memset(local_248,0,0x1e0);
  puVar2 = PTR_DAT_04bb2d80;
  local_250 = &PTR_LAB_04a39d30;
  local_4c = 0x101;
  local_48 = 0;
  local_218 = 0;
  uStack_210 = 0;
  puVar1 = PTR_DAT_04bb2d80 + 0x10;
  local_1e8 = 0;
  uStack_1e0 = 0;
  local_1b8 = 0;
  uStack_1b0 = 0;
  local_188 = 0;
  uStack_180 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_238 = puVar1;
  local_208 = puVar1;
  local_1d8 = puVar1;
  local_1a8 = puVar1;
  local_178 = puVar1;
  local_148 = puVar1;
  local_118 = puVar1;
  local_e8 = puVar1;
  local_b8 = puVar1;
  local_88 = puVar1;
  lVar3 = (**(code **)(*param_2 + 0x18))(param_2);
  if (lVar3 == 0) {
    iVar4 = 0;
  }
  else {
    local_248[1] = 0;
    local_50 = 0;
    local_68 = 0;
    local_60 = 0;
    uStack_58 = 0;
    local_248[0] = lVar3;
    local_238 = puVar1;
    FUN_006f17bc(&local_250);
    FUN_006f1490(&local_250);
    iVar4 = local_48;
  }
  if ((int)(iVar4 + ~param_3) < 0) {
    lVar3 = 0;
  }
  else {
    *(uint *)((long)param_1 + 0x204) = iVar4 + ~param_3;
    *(undefined4 *)(param_1 + 0x41) = 0;
    param_1[0x42] = 0;
    *(undefined1 *)(param_1 + 0x43) = 0;
    lVar3 = (**(code **)(*param_2 + 0x18))(param_2);
    if (lVar3 != 0) {
      *(undefined4 *)(param_1 + 0x40) = 0;
      param_1[0x3e] = 0;
      param_1[0x3f] = 0;
      *(undefined4 *)(param_1 + 0x3d) = 0;
      param_1[3] = (long)(puVar2 + 0x10);
      param_1[1] = lVar3;
      param_1[2] = 0;
      (**(code **)(*param_1 + 0x18))(param_1);
      FUN_006f1490(param_1);
    }
    lVar3 = param_1[0x42];
  }
  return lVar3;
}


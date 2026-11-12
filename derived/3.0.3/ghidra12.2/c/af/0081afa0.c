
void FUN_0081afa0(undefined8 param_1,long *param_2,undefined **param_3,uint param_4)

{
  int iVar1;
  ulong uVar2;
  undefined *local_1d0;
  undefined4 local_1c8;
  undefined *local_1c0;
  undefined *local_1b8;
  undefined4 local_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  int local_1a4;
  undefined4 uStack_1a0;
  undefined4 local_19c;
  undefined4 uStack_198;
  undefined4 local_194;
  undefined4 uStack_190;
  undefined4 local_18c;
  undefined4 uStack_188;
  undefined4 local_184;
  undefined4 uStack_180;
  undefined4 local_17c;
  undefined4 uStack_178;
  undefined4 local_174;
  undefined4 uStack_170;
  undefined4 local_16c;
  undefined *local_168;
  undefined *local_160;
  undefined *local_158;
  undefined1 *puStack_150;
  undefined4 local_148;
  undefined1 local_144 [255];
  undefined1 local_45;
  
  local_45 = 0;
  local_148 = 0x100;
  puStack_150 = local_144;
  local_144[0] = 0;
  local_158 = PTR_DAT_04bb21f8 + 0x10;
  (**(code **)(*param_2 + 0x18))(param_2);
  FUN_038d1270(&local_158,"Model/%s%s.zs",param_2[1],".Nin_NX_NVN");
  local_1c8 = 1;
  local_1a4 = 0;
  uStack_1a0 = 0;
  local_19c = 0;
  uStack_198 = 0;
  local_1d0 = PTR_DAT_04bdf0b0 + 0x10;
  local_1c0 = PTR_DAT_04bb2020 + 0x10;
  local_194 = 0;
  uStack_190 = 0;
  local_18c = 0;
  uStack_188 = 0;
  local_184 = 0;
  uStack_180 = 0;
  local_17c = 0;
  uStack_178 = 0;
  local_174 = 0;
  uStack_170 = 0;
  local_1b0 = 0x1010100;
  local_16c = 0;
  uStack_1ac = 0x1010100;
  uStack_1a8 = CONCAT31(uStack_1a8._1_3_,1);
  local_1b8 = PTR_DAT_04bb2120;
  local_160 = PTR_DAT_04bb2120;
  local_168 = local_1c0;
  if (((*PTR_DAT_04bb4ef0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb4ef0), iVar1 != 0))
  {
    *(undefined ***)PTR_DAT_04bb4ee8 = &PTR_LAB_049178f8;
    __cxa_guard_release(PTR_DAT_04bb4ef0);
  }
  if (param_3 != (undefined **)0x0) {
    uVar2 = (**(code **)*param_3)(param_3,PTR_DAT_04bb4ee8);
    if ((uVar2 & 1) == 0) goto LAB_0081b110;
    uStack_180 = SUB84(param_3[10],0);
    local_17c = (undefined4)((ulong)param_3[10] >> 0x20);
    uStack_178 = SUB84(param_3[0xb],0);
    local_174 = (undefined4)((ulong)param_3[0xb] >> 0x20);
    uStack_170 = SUB84(param_3[0xc],0);
    local_16c = (undefined4)((ulong)param_3[0xc] >> 0x20);
    uStack_1a0 = SUB84(param_3[6],0);
    local_19c = (undefined4)((ulong)param_3[6] >> 0x20);
    uStack_198 = SUB84(param_3[7],0);
    local_194 = (undefined4)((ulong)param_3[7] >> 0x20);
    uStack_190 = SUB84(param_3[8],0);
    local_18c = (undefined4)((ulong)param_3[8] >> 0x20);
    uStack_188 = SUB84(param_3[9],0);
    local_184 = (undefined4)((ulong)param_3[9] >> 0x20);
    local_1b8 = param_3[3];
    local_1b0 = SUB84(param_3[4],0);
    uStack_1ac = (undefined4)((ulong)param_3[4] >> 0x20);
    uStack_1a8 = SUB84(param_3[5],0);
    local_1a4 = (int)((ulong)param_3[5] >> 0x20);
    local_1c8 = *(undefined4 *)(param_3 + 1);
    local_160 = param_3[0xe];
  }
  if (local_1a4 == 0) {
    local_1a4 = 0x2000;
  }
  if (CONCAT44(local_194,uStack_198) == 0) {
    uStack_198 = 0x4cce858;
    local_194 = 0;
  }
  param_3 = &local_1d0;
LAB_0081b110:
  FUN_0081a630(param_1,&local_158,param_3,param_4 & 1);
  return;
}


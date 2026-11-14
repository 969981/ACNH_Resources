
uint FUN_01bdcd2c(long *param_1,long param_2,long param_3,long param_4,long param_5,byte *param_6)

{
  long *plVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  undefined *local_1a8;
  undefined1 *puStack_1a0;
  undefined4 local_198;
  undefined1 local_194;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined4 local_180;
  undefined *local_178;
  undefined1 *puStack_170;
  undefined4 local_168;
  undefined1 local_164 [63];
  undefined1 local_125;
  undefined *local_120;
  undefined1 *puStack_118;
  undefined4 local_110;
  undefined1 local_10c [63];
  undefined1 local_cd;
  undefined1 local_c8 [8];
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined *local_88;
  undefined1 *local_80;
  undefined4 local_78;
  undefined1 local_74 [31];
  undefined1 local_55;
  
  local_55 = 0;
  *(undefined4 *)(param_1 + 1) = 0x11;
  param_1[7] = param_2;
  param_1[8] = param_3;
  local_80 = local_74;
  param_1[9] = 0;
  param_1[10] = 0;
  local_78 = 0x20;
  local_74[0] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = param_4;
  param_1[0xd] = (long)param_6;
  param_1[0xe] = param_5;
  local_88 = PTR_DAT_04bb2028 + 0x10;
  FUN_038d1270(&local_88,"-----");
  if ((ulong)*param_6 < 0x23) {
    FUN_038d1270(&local_88,"%s%02d",*(undefined8 *)(PTR_DAT_04bb9e38 + (ulong)*param_6 * 8 + 0xb0),
                 param_6[1]);
  }
  (**(code **)(local_88 + 0x18))(&local_88);
  puVar4 = local_80;
  local_198 = 0x20;
  local_190 = 0xffffffff;
  uStack_188 = 0xffffffff00000000;
  puStack_170 = local_164;
  local_180 = 0xffffffff;
  puStack_1a0 = local_c8;
  local_194 = 0;
  local_168 = 0x40;
  local_125 = 0;
  local_164[0] = 0;
  local_178 = PTR_DAT_04bb2bc0 + 0x10;
  local_110 = 0x40;
  local_cd = 0;
  local_10c[0] = 0;
  puStack_118 = local_10c;
  local_1a8 = PTR_DAT_04bb4e10 + 0x10;
  local_c8 = (undefined1  [8])0x0;
  uStack_c0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  ppuVar2 = &local_88;
  if (&local_88 <= local_c8 + 2) {
    ppuVar2 = (undefined **)(local_c8 + 2);
  }
  local_120 = local_178;
  memset(puStack_1a0,0,(size_t)((long)ppuVar2 + (-0xe0 - (long)&local_1a8)));
  FUN_01c0e6b4(&local_1a8,puVar4,PTR_DAT_04bb2df0);
  FUN_01bae5d0(param_1 + 2,&local_1a8,0);
  puVar3 = PTR_DAT_04bb28f8;
  lVar8 = *(long *)PTR_DAT_04bb28f8;
  plVar1 = (long *)(lVar8 + 0x2688);
  nn::os::LockMutex((MutexType *)(lVar8 + 0x26b0));
  *(long **)(lVar8 + 0x2688) = param_1;
  uVar5 = FUN_01bde430(plVar1);
  uVar6 = FUN_01bde840(plVar1);
  uVar7 = *(uint *)(*(long *)(lVar8 + 0x2688) + 8);
  if ((uVar7 >> 3 & 1) == 0) {
    if ((uVar7 >> 4 & 1) == 0) {
      uVar7 = 1;
    }
    else {
      uVar7 = FUN_01bdf6c0(plVar1);
    }
  }
  else {
    uVar7 = FUN_01bdf2bc(plVar1);
  }
  if (*(char *)(*plVar1 + 0x1c) != '\0') {
    FUN_01bc1880(*(long *)puVar3 + 0x2990,*plVar1 + 0x18);
  }
  *plVar1 = 0;
  nn::os::UnlockMutex((MutexType *)(lVar8 + 0x26b0));
  (**(code **)(*param_1 + 0x10))(param_1);
  return uVar5 & uVar6 & uVar7 & 1;
}


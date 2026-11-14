
void FUN_01bb0ec0(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined **ppuVar1;
  int iVar2;
  ulong uVar3;
  undefined1 uVar4;
  undefined4 local_1cc;
  undefined *local_1c8;
  char *pcStack_1c0;
  undefined *local_1b8;
  undefined1 *puStack_1b0;
  undefined4 local_1a8;
  undefined1 local_1a4;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined4 local_190;
  undefined *local_188;
  undefined1 *puStack_180;
  undefined4 local_178;
  undefined1 local_174 [63];
  undefined1 local_135;
  undefined *local_130;
  undefined1 *puStack_128;
  undefined4 local_120;
  undefined1 local_11c [63];
  undefined1 local_dd;
  undefined1 local_d8 [8];
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined *local_58;
  long lStack_50;
  undefined8 local_48;
  undefined1 local_3d;
  undefined4 local_34;
  
  local_48 = 0x34303000000008;
  lStack_50 = (long)&local_48 + 4;
  local_3d = 0;
  local_58 = PTR_DAT_04bb3768 + 0x10;
  switch(param_2) {
  case 0:
    uVar4 = 0x34;
    break;
  case 1:
    uVar4 = 0x35;
    break;
  case 2:
    uVar4 = 0x36;
    break;
  case 3:
    uVar4 = 0x37;
    break;
  default:
    goto switchD_01bb0f30_default;
  }
  local_48 = (ulong)CONCAT16(uVar4,0x303000000008);
switchD_01bb0f30_default:
  local_1a4 = 0;
  local_1a8 = 0x40;
  puStack_1b0 = local_d8;
  local_1a0 = 0xffffffff;
  uStack_198 = 0xffffffff00000000;
  local_190 = 0xffffffff;
  puStack_180 = local_174;
  local_178 = 0x40;
  local_135 = 0;
  local_188 = PTR_DAT_04bb2bc0 + 0x10;
  local_174[0] = 0;
  local_120 = 0x40;
  local_dd = 0;
  local_11c[0] = 0;
  puStack_128 = local_11c;
  local_1b8 = PTR_DAT_04bb6b18 + 0x10;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  ppuVar1 = &local_58;
  if (&local_58 <= local_d8 + 2) {
    ppuVar1 = (undefined **)(local_d8 + 2);
  }
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_d8 = (undefined1  [8])0x0;
  uStack_d0 = 0;
  local_130 = local_188;
  local_34 = param_2;
  memset(puStack_1b0,0,(size_t)((long)ppuVar1 + (-0xe0 - (long)&local_1b8)));
  local_1c8 = PTR_DAT_04bb2020 + 0x10;
  pcStack_1c0 = "STR_Common";
  FUN_006f50a0(&local_1b8,&local_1c8,&local_58,0);
  if (((*PTR_DAT_04bc0a88 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_04bc0a88), iVar2 != 0))
  {
    FUN_01bb25c8(PTR_DAT_04bc0a80);
    __cxa_guard_release(PTR_DAT_04bc0a88);
  }
  if (0 < (int)*(uint *)PTR_DAT_04bc0a80) {
    uVar3 = 0;
    do {
      if (*(int *)(*(long *)(PTR_DAT_04bc0a80 + 8) + uVar3 * 4) == 0x6e) goto LAB_01bb1080;
      uVar3 = uVar3 + 1;
    } while (*(uint *)PTR_DAT_04bc0a80 != uVar3);
  }
  uVar3 = 0;
LAB_01bb1080:
  local_1cc = (undefined4)uVar3;
  FUN_01bae480(param_1,&local_1b8,param_3,&local_1cc,0x29);
  return;
}


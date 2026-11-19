
/* WARNING: Removing unreachable block (ram,0x03c12d30) */

void FUN_03c12ce0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  undefined4 local_1d8 [2];
  undefined1 *local_1d0;
  long local_1c8;
  undefined7 local_1c0;
  undefined1 uStack_1b9;
  undefined1 auStack_1b8 [8];
  undefined8 local_1b0;
  undefined7 uStack_1a8;
  undefined1 local_1a1;
  undefined1 auStack_1a0 [8];
  undefined8 local_198;
  undefined7 uStack_190;
  undefined1 local_189;
  undefined7 uStack_188;
  undefined8 local_180;
  undefined7 uStack_178;
  undefined1 local_171;
  undefined7 uStack_170;
  undefined4 local_168;
  long local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined *local_120;
  undefined1 *puStack_118;
  undefined4 local_110;
  undefined1 local_10c [63];
  undefined1 local_cd;
  undefined *local_70;
  
  lVar14 = 1;
  local_120 = (undefined *)CONCAT44(local_120._4_4_,1);
  lVar15 = *(long *)(*(long *)PTR_DAT_04bb2628 + 0x108);
  if (lVar15 != 0) {
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar14 = *(long *)(lVar8 + 0xa8);
    *(long *)(lVar8 + 0xa8) = lVar15;
  }
  auStack_1a0._0_7_ = 0;
  local_168 = 0;
  local_1c0 = 0;
  uStack_1b9 = 0;
  auStack_1b8._0_7_ = 0;
  local_1b0 = 0;
  uStack_1a8 = 0;
  local_1a1 = 0;
  local_198 = 0;
  uStack_190 = 0;
  local_189 = 0;
  uStack_188 = 0;
  local_180 = 0;
  uStack_178 = 0;
  local_171 = 0;
  uStack_170 = 0;
  local_150 = 0;
  uStack_148 = 0;
  local_140 = 0;
  uStack_138 = 0;
  local_130 = 0x1ffffffff;
  uStack_128 = 0;
  uStack_158 = 0;
  uVar1 = *(uint *)PTR_DAT_04bd0ca0;
  local_160 = param_1;
  if (0 < (int)uVar1) {
    uVar10 = (ulong)uVar1 & 3;
    if (uVar1 < 4) {
      uVar11 = 0;
    }
    else {
      uVar11 = 0;
      puVar12 = auStack_1a0 + 4;
      do {
        uVar11 = uVar11 + 4;
        puVar12[-0x18] = 1;
        *puVar12 = 1;
        puVar12[0x18] = 1;
        puVar12[0x30] = 1;
        puVar12 = puVar12 + 0x60;
      } while (((ulong)uVar1 & 0xfffffffc) != uVar11);
    }
    if ((uVar1 & 3) != 0) {
      puVar12 = auStack_1b8 + uVar11 * 0x18 + 4;
      do {
        uVar10 = uVar10 - 1;
        *puVar12 = 1;
        puVar12 = puVar12 + 0x18;
      } while (uVar10 != 0);
    }
  }
  uVar16 = *(undefined8 *)(param_1 + 0xb0);
  local_1d8[0] = 2;
  local_1d0 = &LAB_03c131a8;
  local_1c8 = lVar15;
  memcpy(&local_120,local_1d8,0xb0);
  local_70 = PTR_LAB_04bd19a8;
  plVar9 = (long *)FUN_038be470(uVar16,&local_120);
  if (((*PTR_DAT_04bd19c0 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04bd19c0), iVar7 != 0))
  {
    *(undefined **)PTR_DAT_04bd19b8 = PTR_DAT_04bb23c0 + 0x10;
    __cxa_guard_release(PTR_DAT_04bd19c0);
  }
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x10))(plVar9,PTR_DAT_04bd19b8);
  }
  puVar4 = PTR_DAT_04bb2bc0;
  local_cd = 0;
  local_110 = 0x40;
  local_10c[0] = 0;
  puStack_118 = local_10c;
  local_120 = PTR_DAT_04bb2bc0 + 0x10;
  lVar8 = nn::os::GetSystemTick();
  puVar6 = PTR_DAT_04bd2db8;
  puVar3 = PTR_DAT_04bb29d0;
  lVar8 = lVar8 - *(long *)PTR_DAT_04bd2db8;
  if (lVar8 + 0x20c49ba5e353f7U < 0x4189374bc6a7ee) {
    lVar13 = 0;
    if (*(long *)PTR_DAT_04bb29d0 != 0) {
      lVar13 = (lVar8 * 1000) / *(long *)PTR_DAT_04bb29d0;
    }
  }
  else {
    lVar13 = 0;
    if (*(long *)PTR_DAT_04bb29d0 != 0) {
      lVar13 = lVar8 / *(long *)PTR_DAT_04bb29d0;
    }
    lVar13 = lVar13 * 1000;
  }
  lVar8 = lVar13 / 1000;
  auVar2 = SEXT816(lVar13 / 60000) * ZEXT816(0x8888888888888889);
  FUN_038d13f0(&local_120,"[time: %3d:%02d:%02d.%02d]",
               (int)(SUB168(SEXT816(lVar13) * SEXT816(0x4a90be587de6e565),8) >> 0x14) -
               (SUB164(SEXT816(lVar13) * SEXT816(0x4a90be587de6e565),0xc) >> 0x1f),
               (int)(lVar13 / 60000) + ((int)(auVar2._8_8_ >> 5) - (auVar2._12_4_ >> 0x1f)) * -0x3c,
               (int)lVar8 +
               ((int)(SUB168(SEXT816(lVar8) * ZEXT816(0x8888888888888889),8) >> 5) -
               (SUB164(SEXT816(lVar8) * ZEXT816(0x8888888888888889),0xc) >> 0x1f)) * -0x3c,
               (int)(short)((short)lVar13 + (short)lVar8 * -1000) / 10);
  puVar5 = PTR_DAT_04bbdb80;
  FUN_03b03ef0(*(undefined8 *)PTR_DAT_04bbdb80,param_2,param_3,param_4,lVar15);
  puStack_118 = local_10c;
  local_cd = 0;
  local_110 = 0x40;
  local_120 = puVar4 + 0x10;
  local_10c[0] = 0;
  lVar15 = nn::os::GetSystemTick();
  lVar15 = lVar15 - *(long *)puVar6;
  if (lVar15 + 0x20c49ba5e353f7U < 0x4189374bc6a7ee) {
    lVar13 = *(long *)puVar3;
    lVar8 = 0;
    if (lVar13 != 0) {
      lVar8 = (lVar15 * 1000) / lVar13;
    }
  }
  else {
    lVar13 = *(long *)puVar3;
    lVar8 = 0;
    if (lVar13 != 0) {
      lVar8 = lVar15 / lVar13;
    }
    lVar8 = lVar8 * 1000;
  }
  lVar15 = lVar8 / 1000;
  auVar2 = SEXT816(lVar8 / 60000) * ZEXT816(0x8888888888888889);
  FUN_038d13f0(&local_120,"[time: %3d:%02d:%02d.%02d]",lVar8 / 3600000,
               (int)(lVar8 / 60000) + ((int)(auVar2._8_8_ >> 5) - (auVar2._12_4_ >> 0x1f)) * -0x3c,
               (int)lVar15 +
               ((int)(SUB168(SEXT816(lVar15) * ZEXT816(0x8888888888888889),8) >> 5) -
               (SUB164(SEXT816(lVar15) * ZEXT816(0x8888888888888889),0xc) >> 0x1f)) * -0x3c,
               (int)(short)((short)lVar8 + (short)lVar15 * -1000) / 10);
  puVar3 = PTR_DAT_04bbdb78;
  *(undefined8 *)(*(long *)puVar5 + 0x498) = *(undefined8 *)(*(long *)PTR_DAT_04bb3518 + 0x100);
  *(undefined8 *)(*(long *)puVar3 + 0x520) = 0;
  if (lVar14 != 1) {
    lVar15 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    *(long *)(lVar15 + 0xa8) = lVar14;
  }
  return;
}


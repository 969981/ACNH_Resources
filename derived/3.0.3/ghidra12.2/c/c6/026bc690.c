
/* WARNING: Removing unreachable block (ram,0x026bcaa8) */
/* WARNING: Removing unreachable block (ram,0x026bca78) */
/* WARNING: Removing unreachable block (ram,0x026bca3c) */
/* WARNING: Removing unreachable block (ram,0x026bca04) */
/* WARNING: Removing unreachable block (ram,0x026bc83c) */
/* WARNING: Removing unreachable block (ram,0x026bc7ac) */
/* WARNING: Removing unreachable block (ram,0x026bc7d0) */
/* WARNING: Removing unreachable block (ram,0x026bca20) */
/* WARNING: Removing unreachable block (ram,0x026bca58) */
/* WARNING: Removing unreachable block (ram,0x026bca8c) */
/* WARNING: Removing unreachable block (ram,0x026bcacc) */
/* WARNING: Removing unreachable block (ram,0x026bc8a4) */
/* WARNING: Removing unreachable block (ram,0x026bc7f4) */
/* WARNING: Removing unreachable block (ram,0x026bc818) */
/* WARNING: Removing unreachable block (ram,0x026bc860) */
/* WARNING: Removing unreachable block (ram,0x026bc884) */

void FUN_026bc690(undefined8 *param_1)

{
  undefined2 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint *puVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined2 uVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  ulong uVar13;
  ulong uVar14;
  uint *puVar15;
  ulong uVar16;
  uint uVar17;
  long lVar18;
  
  memset(param_1 + 0x60e7e,0,0x1b00);
  uVar13 = 0;
  do {
    uVar14 = uVar13 << 2;
    uVar16 = uVar13 >> 0x1f;
    uVar11 = (int)uVar13 + 1;
    uVar13 = (ulong)uVar11;
    *(undefined4 *)((long)(param_1 + 0x60e7e) + (-uVar16 & 0xfffffffc00000000 | uVar14)) = 0;
  } while (uVar11 != 0x6c0);
  memset(param_1 + 0x611de,0,0x1b00);
  uVar13 = 0;
  do {
    uVar14 = uVar13 << 2;
    uVar16 = uVar13 >> 0x1f;
    uVar11 = (int)uVar13 + 1;
    uVar13 = (ulong)uVar11;
    *(undefined4 *)((long)(param_1 + 0x611de) + (-uVar16 & 0xfffffffc00000000 | uVar14)) = 0;
  } while (uVar11 != 0x6c0);
  uVar11 = 0;
  do {
    puVar2 = param_1 + 0x6795a + (ulong)uVar11 * 0x5145;
    if (7 < uVar11) {
      puVar2 = param_1 + 0x6795a;
    }
    uVar10 = 0;
    do {
      puVar3 = (undefined8 *)((long)(puVar2 + 0x24) + (ulong)uVar10 * 0x6c24);
      if (5 < uVar10) {
        puVar3 = puVar2 + 0x24;
      }
      *(undefined4 *)(puVar3 + 0xc86) = 0;
      puVar3[0xc84] = 0;
      puVar3[0xc85] = 0;
      puVar3[0xc82] = 0;
      puVar3[0xc83] = 0;
      puVar3[0xc80] = 0;
      puVar3[0xc81] = 0;
      *(undefined4 *)((long)puVar3 + 0x6464) = 0;
      *(undefined8 *)((long)puVar3 + 0x6454) = 0;
      *(undefined8 *)((long)puVar3 + 0x645c) = 0;
      *(undefined8 *)((long)puVar3 + 0x6444) = 0;
      *(undefined8 *)((long)puVar3 + 0x644c) = 0;
      *(undefined8 *)((long)puVar3 + 0x6434) = 0;
      *(undefined8 *)((long)puVar3 + 0x643c) = 0;
      *(undefined4 *)(puVar3 + 0xc93) = 0;
      puVar3[0xc91] = 0;
      puVar3[0xc92] = 0;
      puVar3[0xc8f] = 0;
      puVar3[0xc90] = 0;
      puVar3[0xc8d] = 0;
      puVar3[0xc8e] = 0;
      *(undefined4 *)((long)puVar3 + 0x64cc) = 0;
      *(undefined8 *)((long)puVar3 + 0x64bc) = 0;
      *(undefined8 *)((long)puVar3 + 0x64c4) = 0;
      *(undefined8 *)((long)puVar3 + 0x64ac) = 0;
      *(undefined8 *)((long)puVar3 + 0x64b4) = 0;
      *(undefined8 *)((long)puVar3 + 0x649c) = 0;
      *(undefined8 *)((long)puVar3 + 0x64a4) = 0;
      *(undefined4 *)(puVar3 + 0xca0) = 0;
      puVar3[0xc9e] = 0;
      puVar3[0xc9f] = 0;
      puVar3[0xc9c] = 0;
      puVar3[0xc9d] = 0;
      puVar3[0xc9a] = 0;
      puVar3[0xc9b] = 0;
      *(undefined4 *)((long)puVar3 + 0x6534) = 0;
      *(undefined8 *)((long)puVar3 + 0x6524) = 0;
      *(undefined8 *)((long)puVar3 + 0x652c) = 0;
      *(undefined8 *)((long)puVar3 + 0x6514) = 0;
      *(undefined8 *)((long)puVar3 + 0x651c) = 0;
      *(undefined8 *)((long)puVar3 + 0x6504) = 0;
      *(undefined8 *)((long)puVar3 + 0x650c) = 0;
      *(undefined4 *)(puVar3 + 0xcad) = 0;
      puVar3[0xcab] = 0;
      puVar3[0xcac] = 0;
      puVar3[0xca9] = 0;
      puVar3[0xcaa] = 0;
      puVar3[0xca7] = 0;
      puVar3[0xca8] = 0;
      uVar17 = 6;
      if ((int)uVar10 < 6) {
        uVar17 = uVar10 + 1;
      }
      *(undefined4 *)((long)puVar3 + 0x659c) = 0;
      *(undefined8 *)((long)puVar3 + 0x658c) = 0;
      *(undefined8 *)((long)puVar3 + 0x6594) = 0;
      *(undefined8 *)((long)puVar3 + 0x657c) = 0;
      *(undefined8 *)((long)puVar3 + 0x6584) = 0;
      *(undefined8 *)((long)puVar3 + 0x656c) = 0;
      *(undefined8 *)((long)puVar3 + 0x6574) = 0;
      uVar10 = uVar17;
    } while (uVar17 != 6);
    uVar10 = 8;
    if ((int)uVar11 < 8) {
      uVar10 = uVar11 + 1;
    }
    uVar11 = uVar10;
  } while (uVar10 != 8);
  memset((void *)((long)param_1 + 0x492114),0,0x2400);
  memset(param_1 + 0x91baa,0,0xea8);
  *(undefined4 *)(param_1 + 0x92222) = 1;
  memset((void *)((long)param_1 + 0x491114),0,0x1000);
  lVar18 = 0;
  do {
    *(undefined1 *)((long)param_1 + lVar18 + 0x492116) = 0;
    *(undefined1 *)((long)param_1 + lVar18 + 0x492117) = 0;
    *(undefined4 *)((long)param_1 + lVar18 + 0x492118) = 0;
    *(undefined2 *)((long)param_1 + lVar18 + 0x492114) = 0xfffe;
    FUN_0277d4ac();
    lVar18 = lVar18 + 8;
  } while (lVar18 != 0x2000);
  uVar13 = 0;
  do {
    uVar14 = uVar13 << 2;
    uVar16 = uVar13 >> 0x1f;
    uVar11 = (int)uVar13 + 1;
    uVar13 = (ulong)uVar11;
    *(undefined4 *)((long)param_1 + 0x491114 + (-uVar16 & 0xfffffffc00000000 | uVar14)) = 0;
  } while (uVar11 != 0x400);
  uVar11 = 0;
  uVar8 = *(undefined2 *)PTR_DAT_04bb37e0;
  uVar6 = PTR_DAT_04bb37e0[2];
  uVar7 = PTR_DAT_04bb37e0[3];
  uVar5 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
  do {
    uVar13 = (ulong)uVar11;
    uVar11 = uVar11 + 1;
    puVar1 = (undefined2 *)((long)param_1 + 0x492114 + ((long)(uVar13 << 0x20) >> 0x1d));
    *puVar1 = uVar8;
    *(undefined1 *)(puVar1 + 1) = uVar6;
    *(undefined1 *)((long)puVar1 + 3) = uVar7;
    *(undefined4 *)(puVar1 + 2) = uVar5;
  } while (uVar11 != 0x400);
  iVar12 = 0;
  do {
    *(undefined1 *)((long)param_1 + (long)iVar12 + 0x494114) = 0xff;
    iVar12 = iVar12 + 1;
  } while (iVar12 != 0x400);
  param_1[0x6795c] = 0;
  param_1[0x6795d] = 0;
  param_1[0x6caa1] = 0;
  param_1[0x6caa2] = 0;
  param_1[0x71be6] = 0;
  param_1[0x71be7] = 0;
  param_1[0x76d2b] = 0;
  param_1[0x76d2c] = 0;
  param_1[0x7be70] = 0;
  param_1[0x7be71] = 0;
  param_1[0x80fb5] = 0;
  param_1[0x80fb6] = 0;
  param_1[0x860fa] = 0;
  param_1[0x860fb] = 0;
  param_1[0x8b23f] = 0;
  param_1[0x8b240] = 0;
  memset(param_1 + 0x928ec,0,0x900);
  uVar13 = (ulong)DAT_04da7d88;
  if (0 < (int)DAT_04da7d88) {
    uVar14 = 0;
    puVar15 = (uint *)&DAT_04da7d8c;
    do {
      bVar9 = 0x3f < uVar14;
      uVar14 = uVar14 + 1;
      puVar4 = puVar15;
      if (bVar9) {
        puVar4 = (uint *)&DAT_04da7d8c;
      }
      puVar15 = puVar15 + 1;
      uVar16 = (ulong)*puVar4;
      if (0x3ff < *puVar4) {
        uVar16 = 0;
      }
      *(undefined2 *)((long)param_1 + (long)(&LAB_0022ebf0 + uVar16 * 2)) = 0;
    } while (uVar13 != uVar14);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[0xaf0b0] = 0;
  param_1[0xaf0b1] = 0;
  param_1[0xaf0ae] = 0;
  param_1[0xaf0af] = 0;
  param_1[0xaf0ac] = 0;
  param_1[0xaf0ad] = 0;
  param_1[0xaf0aa] = 0;
  param_1[0xaf0ab] = 0;
  param_1[0xaf0a8] = 0;
  param_1[0xaf0a9] = 0;
  param_1[0xaf0a6] = 0;
  param_1[0xaf0a7] = 0;
  param_1[0xaf0a4] = 0;
  param_1[0xaf0a5] = 0;
  param_1[0xaf0a2] = 0;
  param_1[0xaf0a3] = 0;
  param_1[0xaf0a0] = 0;
  param_1[0xaf0a1] = 0;
  param_1[0xaf09e] = 0;
  param_1[0xaf09f] = 0;
  param_1[0xaf09c] = 0;
  param_1[0xaf09d] = 0;
  param_1[0xaf09a] = 0;
  param_1[0xaf09b] = 0;
  param_1[0xaf098] = 0;
  param_1[0xaf099] = 0;
  param_1[0xaf096] = 0;
  param_1[0xaf097] = 0;
  param_1[0xaf094] = 0;
  param_1[0xaf095] = 0;
  param_1[0xaf092] = 0;
  param_1[0xaf093] = 0;
  param_1[0x3c674] = 0;
  param_1[0x3c675] = 0;
  return;
}


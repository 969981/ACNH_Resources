
void FUN_02769ac0(undefined8 *param_1,undefined8 param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  short *psVar4;
  short *psVar5;
  short *psVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined *puVar10;
  int iVar11;
  ulong uVar12;
  ulong uVar13;
  short *psVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  long lVar18;
  undefined *local_80;
  ulong local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  long local_58;
  long local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  long lStack_28;
  
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_80 = PTR_DAT_04bc3858 + 0x10;
  local_50 = 0;
  local_60 = 0;
  local_58 = 0;
  lVar18 = *(long *)*param_1;
  local_48 = 0;
  local_30 = 0;
  lStack_28 = 0;
  local_40 = 0;
  uStack_38 = 0;
  FUN_0272d760(lVar18 + 8,&local_48,param_2);
  if ((local_48 != 0) && (*(int *)(local_48 + 0x2c) == 1)) {
    lVar18 = *(long *)(lVar18 + 0x30);
    if (lVar18 != 0) {
      local_78 = local_48;
      local_70 = local_40;
      local_68 = uStack_38;
      local_60 = local_30;
      local_58 = lStack_28;
      local_50 = lVar18;
    }
  }
  lVar18 = FUN_027ebd78(&local_80);
  (**(code **)(DAT_0558d470 + 0x18))(&DAT_0558d470);
  local_48 = local_48 & 0xffffff0000000000;
  uVar12 = FUN_03ea9450((undefined8 *)(lVar18 + 8),&local_48,DAT_0558d478);
  puVar10 = PTR_DAT_04bb37e0;
  if (((uVar12 & 1) != 0) && (local_48._4_1_ != -1)) {
    uVar12 = local_48 & 0xffffffff;
    if (local_48._4_1_ == -0x2f) {
      if ((-1 < (int)(uint)local_48) &&
         (((uint)local_48 & ((int)(uint)local_48 >> 0x1f ^ 0xffffffffU)) == 0x6c000))
      goto LAB_02769bf0;
    }
    else {
      if (local_48._4_1_ != -0x2d) {
        psVar14 = *(short **)(lVar18 + 8);
        uVar13 = *(ulong *)((long)psVar14 + uVar12);
        uVar12 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
        uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
        uVar12 = uVar12 >> 0x20 | uVar12 << 0x20;
        if (*psVar14 != 0x5942) {
          uVar12 = uVar13;
        }
        if ((local_48._4_1_ != -0x2b) && ((local_48._4_1_ != -0x2c || ((long)uVar12 < 0))))
        goto LAB_02769c04;
      }
      if (uVar12 == 0x6c000) {
LAB_02769bf0:
        psVar14 = (short *)0x0;
        if (local_50 != 0) {
          psVar14 = (short *)(local_58 + local_50);
        }
        goto LAB_02769c08;
      }
    }
  }
LAB_02769c04:
  psVar14 = (short *)0x0;
LAB_02769c08:
  uVar7 = *(uint *)(PTR_DAT_04bb5d40 + 8);
  uVar8 = *(uint *)(PTR_DAT_04bb5d40 + 0xc);
  iVar3 = uVar7 + 0xdf;
  iVar15 = uVar8 + 0xbf;
  uVar16 = uVar8;
  uVar17 = uVar7;
  do {
    if (((((int)uVar17 < (int)uVar7) || (iVar3 < (int)uVar17)) || ((int)uVar16 < (int)uVar8)) ||
       (iVar15 < (int)uVar16)) {
      psVar5 = psVar14 + (ulong)uVar17 * 0x300;
      if (0x11f < uVar17) {
        psVar5 = psVar14;
      }
      psVar4 = psVar5 + (ulong)uVar16 * 4;
      if (0xbf < uVar16) {
        psVar4 = psVar5;
      }
      *psVar4 = *(short *)puVar10;
      *(undefined *)(psVar4 + 1) = puVar10[2];
      *(undefined *)((long)psVar4 + 3) = puVar10[3];
      *(undefined4 *)(psVar4 + 2) = *(undefined4 *)(puVar10 + 4);
    }
    if ((int)uVar17 < (int)(uVar7 + 0x11f)) {
      uVar17 = uVar17 + 1;
    }
    else {
      uVar16 = uVar16 + 1;
      uVar17 = uVar7;
    }
  } while ((uVar7 != uVar17) || (uVar8 + 0xc0 != uVar16));
  iVar11 = iVar3;
  do {
    uVar16 = iVar11 - uVar7;
    uVar17 = iVar15 - uVar8;
    psVar5 = psVar14 + (ulong)uVar16 * 0x300;
    if (0x11f < uVar16) {
      psVar5 = psVar14;
    }
    psVar4 = psVar5 + (ulong)uVar17 * 4;
    if (0xbf < uVar17) {
      psVar4 = psVar5;
    }
    if (*psVar4 != -2) {
      uVar16 = (DAT_05581570 + uVar16) - DAT_05581538;
      uVar17 = (DAT_05581574 + uVar17) - DAT_0558153c;
      psVar5 = psVar14 + (ulong)uVar16 * 0x300;
      if (0x11f < uVar16) {
        psVar5 = psVar14;
      }
      psVar6 = psVar5 + (ulong)uVar17 * 4;
      if (0xbf < uVar17) {
        psVar6 = psVar5;
      }
      *psVar6 = *psVar4;
      *(char *)(psVar6 + 1) = (char)psVar4[1];
      *(undefined1 *)((long)psVar6 + 3) = *(undefined1 *)((long)psVar4 + 3);
      *(undefined4 *)(psVar6 + 2) = *(undefined4 *)(psVar4 + 2);
      *psVar4 = *(short *)puVar10;
      *(undefined *)(psVar4 + 1) = puVar10[2];
      *(undefined *)((long)psVar4 + 3) = puVar10[3];
      *(undefined4 *)(psVar4 + 2) = *(undefined4 *)(puVar10 + 4);
    }
    iVar9 = iVar11 + -1;
    bVar2 = iVar11 <= (int)uVar7;
    bVar1 = (int)uVar7 < iVar11;
    iVar11 = iVar3;
    if (bVar1) {
      iVar11 = iVar9;
    }
    iVar15 = iVar15 - (uint)bVar2;
  } while ((iVar3 != iVar11) || (uVar8 - 1 != iVar15));
  return;
}


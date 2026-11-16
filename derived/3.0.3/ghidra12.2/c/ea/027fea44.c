
void FUN_027fea44(long param_1,uint *param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  byte bVar3;
  ushort uVar4;
  short sVar5;
  short sVar6;
  undefined *puVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  short *psVar11;
  uint *puVar12;
  uint uVar13;
  ulong uVar14;
  uint *puVar15;
  uint uVar16;
  short *psVar17;
  long lVar18;
  long lVar19;
  uint local_80 [2];
  undefined *local_78;
  short local_70;
  undefined1 local_6e;
  undefined1 local_6d;
  undefined4 local_6c;
  uint *local_68;
  short local_48;
  undefined1 local_46;
  undefined1 local_45;
  undefined4 local_44;
  
  puVar7 = PTR_DAT_04bb43c0;
  uVar9 = *param_2;
  if (0x27 < uVar9) {
    return;
  }
  uVar13 = *(uint *)(param_1 + 0x158);
  if (0x13 < uVar13) {
    uVar13 = 0x14;
  }
  if (uVar9 < uVar13) {
    psVar17 = (short *)(param_1 + (ulong)uVar9 * 8 + 0xb8);
    sVar5 = *psVar17;
LAB_027feac8:
    psVar11 = psVar17;
    if (sVar5 != -2) {
      lVar18 = *(long *)PTR_DAT_04bb43c0;
      uVar9 = FUN_0277d6c4(psVar17);
      if (*(long *)puVar7 == 0) goto LAB_027feb28;
      lVar18 = *(long *)(lVar18 + 0x57e58);
      uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
      psVar11 = &DAT_05586008;
      if ((uVar9 < *(uint *)(lVar18 + 0x1d8)) &&
         (psVar11 = &DAT_05586008, *(long *)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar9 * 8) != 0)
         ) {
        psVar11 = psVar17;
      }
    }
  }
  else {
    uVar9 = uVar9 - uVar13;
    if (-1 < (int)uVar9) {
      uVar13 = *(uint *)(param_1 + 0xa0);
      if (0x13 < uVar13) {
        uVar13 = 0x14;
      }
      if (uVar9 < uVar13) {
        psVar17 = (short *)(param_1 + (ulong)uVar9 * 8);
        sVar5 = *psVar17;
        goto LAB_027feac8;
      }
    }
LAB_027feb28:
    psVar11 = &DAT_05586008;
  }
  sVar5 = *psVar11;
  sVar6 = psVar11[1];
  uVar2 = *(undefined1 *)((long)psVar11 + 3);
  uVar1 = *(undefined4 *)(psVar11 + 2);
  lVar19 = *(long *)puVar7;
  local_48 = sVar5;
  local_46 = (char)sVar6;
  local_45 = uVar2;
  local_44 = uVar1;
  uVar9 = FUN_0277d6c4(&local_48);
  lVar18 = *(long *)puVar7;
  if (lVar18 == 0) {
    return;
  }
  lVar19 = *(long *)(lVar19 + 0x57e58);
  uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
  if (*(uint *)(lVar19 + 0x1d8) <= uVar9) {
    return;
  }
  if (*(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar9 * 8) == 0) {
    return;
  }
  local_78 = PTR_DAT_04bc0510 + 0x10;
  local_68 = (uint *)0x0;
  local_70 = sVar5;
  local_6e = (char)sVar6;
  local_6d = uVar2;
  local_6c = uVar1;
  uVar9 = FUN_0277d6c4(&local_70);
  if (*(long *)puVar7 == 0) {
LAB_027fecc8:
    local_80[0] = 0xbc;
  }
  else {
    lVar18 = *(long *)(lVar18 + 0x57e58);
    uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
    if ((*(uint *)(lVar18 + 0x1d8) <= uVar9) ||
       (*(long *)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar9 * 8) == 0)) goto LAB_027fecc8;
    lVar18 = *(long *)PTR_DAT_04bc0428;
    uVar9 = FUN_0277d6c4(&local_48);
    uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
    if ((*(uint *)(lVar18 + 0x1d8) <= uVar9) ||
       (puVar12 = *(uint **)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar9 * 8),
       puVar12 == (uint *)0x0)) goto LAB_027fecc8;
    local_80[0] = 0;
    uVar9 = *puVar12;
    local_68 = puVar12;
    if ((uVar9 != 0) && (puVar12 != (uint *)(ulong)uVar9)) {
      puVar15 = (uint *)((long)puVar12 - (long)(ulong)uVar9);
      local_80[0] = 0;
      if (*puVar15 != 0) {
        uVar9 = puVar15[1];
        if ((uVar9 != 0) && ((ulong)(ushort)puVar15[2] != 0)) {
          lVar18 = 0xc;
          if (*(char *)((long)puVar15 + 10) != '\0') {
            lVar18 = 0x1c;
          }
          lVar18 = (long)puVar15 + lVar18 + (ulong)(ushort)puVar15[2] * 8;
          if (lVar18 != 0) {
            uVar13 = 0;
            if ((ulong)uVar9 != 0) {
              uVar13 = (uint)((ulong)((long)puVar12 - lVar18) / (ulong)uVar9);
            }
            if (*puVar15 <= uVar13) {
              uVar13 = 0xffffffff;
            }
            if ((uVar13 < DAT_05326ec0) &&
               (local_80[0] = (uint)*(ushort *)(DAT_05326ec8 + (long)(int)uVar13 * 2),
               local_80[0] < 0xbd)) goto LAB_027feccc;
          }
        }
        local_80[0] = 0;
      }
    }
  }
LAB_027feccc:
  if (local_80[0] != 0x86) {
    return;
  }
  uVar13 = 99999;
  uVar10 = FUN_01aed730(&local_78);
  uVar9 = *(uint *)(param_1 + 0x170);
  uVar14 = (ulong)uVar9;
  lVar18 = param_1 + 0x170;
  uVar4 = *(ushort *)(param_1 + 0x174);
  bVar3 = *(byte *)(param_1 + 0x176);
  uVar16 = (uint)*(byte *)(param_1 + 0x177);
  bVar8 = uVar16 == ((uVar9 + (uVar9 >> 0x10) + (uVar9 >> 0x18) + (uVar9 >> 8)) - 0x2d & 0xff);
  uVar9 = uVar13;
  if ((((uVar14 != 0 || uVar4 != 0) || bVar3 != 0) || uVar16 != 0) && bVar8) {
    lVar19 = uVar14 << ((ulong)(0x1d - bVar3) & 0x3f);
    uVar9 = (99999 - (int)((ulong)lVar19 >> 0x20)) - (((int)lVar19 - (uint)uVar4) + -0x7f1cd4ef);
  }
  if (uVar9 < uVar10) {
    if (1999 < (int)uVar10) {
      uVar9 = uVar13;
      if ((((uVar14 != 0 || uVar4 != 0) || bVar3 != 0) || uVar16 != 0) && bVar8) {
        lVar19 = uVar14 << ((ulong)(0x1d - bVar3) & 0x3f);
        uVar9 = (99999 - (int)((ulong)lVar19 >> 0x20)) - (((int)lVar19 - (uint)uVar4) + -0x7f1cd4ef)
        ;
      }
      FUN_0285dc20(lVar18,(uVar9 / 1000) * 1000,99999);
      uVar10 = uVar10 + (uVar9 / 1000) * -1000;
    }
    if (uVar10 - 100 < 0x385) {
      uVar9 = *(uint *)(param_1 + 0x170);
      if ((*(byte *)(param_1 + 0x177) != 0 ||
           (((ulong)uVar9 != 0 || *(ushort *)(param_1 + 0x174) != 0) ||
           *(byte *)(param_1 + 0x176) != 0)) &&
         ((uint)*(byte *)(param_1 + 0x177) ==
          ((uVar9 + (uVar9 >> 0x10) + (uVar9 >> 0x18) + (uVar9 >> 8)) - 0x2d & 0xff))) {
        lVar19 = (ulong)uVar9 << ((ulong)(0x1d - *(byte *)(param_1 + 0x176)) & 0x3f);
        uVar13 = (99999 - (int)((ulong)lVar19 >> 0x20)) -
                 (((int)lVar19 - (uint)*(ushort *)(param_1 + 0x174)) + -0x7f1cd4ef);
      }
      FUN_0285dc20(lVar18,(uVar13 / 100) * 100,99999);
      uVar10 = uVar10 + (uVar13 / 100) * -100;
    }
    if (0 < (int)uVar10) {
      FUN_01aeda40(local_80,uVar10);
      uVar9 = *param_2;
      puVar12 = local_80;
      goto LAB_027feeac;
    }
  }
  else {
    FUN_0285dc20(lVar18,uVar10,99999);
  }
  uVar9 = *param_2;
  puVar12 = (uint *)PTR_DAT_04bb37e0;
LAB_027feeac:
  FUN_027fa2dc(param_1,uVar9,puVar12,0);
  return;
}


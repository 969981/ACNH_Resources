
undefined8 FUN_02800cb0(long param_1,undefined4 *param_2)

{
  short *psVar1;
  ulong uVar2;
  short sVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  ulong uVar10;
  ulong uVar11;
  short *psVar12;
  uint uVar13;
  long lVar14;
  short *psVar15;
  uint uVar16;
  undefined *local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  long local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined *local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  long local_68;
  
  puVar5 = PTR_DAT_04bc0510;
  puVar4 = PTR_DAT_04bb43c0;
  local_68 = 0;
  local_78 = PTR_DAT_04bc0510 + 0x10;
  local_70 = *param_2;
  uStack_6c = param_2[1];
  lVar14 = *(long *)PTR_DAT_04bb43c0;
  uVar6 = FUN_0277d6c4(&local_70);
  if (*(long *)puVar4 != 0) {
    lVar14 = *(long *)(lVar14 + 0x57e58);
    uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
    if ((uVar6 < *(uint *)(lVar14 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
      lVar14 = *(long *)PTR_DAT_04bc0428;
      uVar6 = FUN_0277d6c4(param_2);
      uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
      if ((uVar6 < *(uint *)(lVar14 + 0x1d8)) &&
         (lVar14 = *(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar6 * 8), lVar14 != 0)) {
        local_68 = lVar14;
      }
    }
  }
  uVar10 = FUN_01af0020(&local_78);
  if ((uVar10 & 1) != 0) {
    iVar7 = FUN_01af02d0(&local_78);
    iVar8 = FUN_01af2610(&local_78);
    uVar10 = 0;
    psVar15 = (short *)(param_1 + 0xb8);
    uVar6 = 0;
    if (*(byte *)(param_1 + 0x178) < 3) {
      uVar6 = (uint)*(byte *)(param_1 + 0x178);
    }
    local_98 = (undefined *)CONCAT44(local_98._4_4_,uVar6);
    do {
      uVar6 = *(uint *)(param_1 + 0x158);
      if (0x13 < uVar6) {
        uVar6 = 0x14;
      }
      if (uVar10 < uVar6) {
        sVar3 = *psVar15;
        psVar1 = psVar15;
joined_r0x02800e98:
        psVar12 = psVar1;
        if (sVar3 != -2) {
          lVar14 = *(long *)puVar4;
          uVar6 = FUN_0277d6c4(psVar1);
          if (*(long *)puVar4 == 0) goto LAB_02800f00;
          lVar14 = *(long *)(lVar14 + 0x57e58);
          uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
          psVar12 = &DAT_05586008;
          if (uVar6 < *(uint *)(lVar14 + 0x1d8)) {
            psVar12 = &DAT_05586008;
            if (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar6 * 8) != 0) {
              psVar12 = psVar1;
            }
          }
        }
      }
      else {
        uVar13 = (uint)(uVar10 + -uVar6);
        if ((int)uVar13 < 0) {
LAB_02800f00:
          psVar12 = &DAT_05586008;
        }
        else {
          uVar16 = *(uint *)(param_1 + 0xa0);
          if (0x13 < uVar16) {
            uVar16 = 0x14;
          }
          psVar12 = &DAT_05586008;
          if (uVar13 < uVar16) {
            psVar1 = (short *)(param_1 + (uVar10 + -uVar6 & 0xffffffff) * 8);
            sVar3 = *psVar1;
            goto joined_r0x02800e98;
          }
        }
      }
      local_80 = *(undefined4 *)psVar12;
      local_7c = *(undefined4 *)(psVar12 + 2);
      lVar14 = *(long *)puVar4;
      uVar6 = FUN_0277d6c4(&local_80);
      if (*(long *)puVar4 != 0) {
        lVar14 = *(long *)(lVar14 + 0x57e58);
        uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
        if (((uVar6 < *(uint *)(lVar14 + 0x1d8)) &&
            (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) &&
           (uVar11 = FUN_01af28ac(&local_78,&local_80), (uVar11 & 1) != 0)) {
          local_88 = 0;
          lVar14 = *(long *)puVar4;
          local_90 = local_80;
          uStack_8c = local_7c;
          local_98 = puVar5 + 0x10;
          uVar6 = FUN_0277d6c4(&local_90);
          if (*(long *)puVar4 != 0) {
            lVar14 = *(long *)(lVar14 + 0x57e58);
            uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
            if ((uVar6 < *(uint *)(lVar14 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
              lVar14 = *(long *)PTR_DAT_04bc0428;
              uVar6 = FUN_0277d6c4(&local_80);
              uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
              if ((uVar6 < *(uint *)(lVar14 + 0x1d8)) &&
                 (lVar14 = *(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar6 * 8), lVar14 != 0)
                 ) {
                local_88 = lVar14;
              }
            }
          }
          iVar9 = FUN_01af02d0(&local_98);
          iVar7 = (iVar9 - iVar8) + iVar7;
          if (iVar7 < 1) {
            return 1;
          }
        }
      }
      uVar10 = uVar10 + 1;
      psVar15 = psVar15 + 4;
      uVar6 = 0;
      if (*(byte *)(param_1 + 0x178) < 3) {
        uVar6 = (uint)*(byte *)(param_1 + 0x178);
      }
      local_98 = (undefined *)CONCAT44(local_98._4_4_,uVar6);
      uVar11 = 0x1e;
      if (uVar6 != 1) {
        uVar11 = 0x14;
      }
      uVar2 = 0x28;
      if (uVar6 != 2) {
        uVar2 = uVar11;
      }
    } while (uVar10 < uVar2);
  }
  return 0;
}


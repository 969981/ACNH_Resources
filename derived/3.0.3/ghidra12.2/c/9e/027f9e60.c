
int FUN_027f9e60(long param_1,short *param_2)

{
  short *psVar1;
  ulong uVar2;
  short sVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  ulong uVar10;
  short *psVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  long lVar15;
  short *psVar16;
  ulong uVar17;
  undefined *local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  long local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined *local_78;
  short local_70;
  short local_6e;
  undefined4 local_6c;
  long local_68;
  
  puVar6 = PTR_DAT_04bc0510;
  puVar5 = PTR_DAT_04bb43c0;
  local_70 = *param_2;
  if (local_70 == -2) {
    iVar14 = 0;
  }
  else {
    local_6e = param_2[1];
    local_68 = 0;
    local_6c = *(undefined4 *)(param_2 + 2);
    local_78 = PTR_DAT_04bc0510 + 0x10;
    lVar15 = *(long *)PTR_DAT_04bb43c0;
    uVar7 = FUN_0277d6c4(&local_70);
    if (*(long *)puVar5 != 0) {
      lVar15 = *(long *)(lVar15 + 0x57e58);
      uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
      if ((uVar7 < *(uint *)(lVar15 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
        lVar15 = *(long *)PTR_DAT_04bc0428;
        uVar7 = FUN_0277d6c4(param_2);
        uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
        if (uVar7 < *(uint *)(lVar15 + 0x1d8)) {
          lVar15 = *(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar7 * 8);
          if (lVar15 != 0) {
            local_68 = lVar15;
          }
        }
      }
    }
    uVar7 = 0;
    if (*(byte *)(param_1 + 0x178) < 3) {
      uVar7 = (uint)*(byte *)(param_1 + 0x178);
    }
    local_98 = (undefined *)CONCAT44(local_98._4_4_,uVar7);
    uVar17 = 0x1e;
    if (uVar7 != 1) {
      uVar17 = 0x14;
    }
    uVar2 = 0x28;
    if (uVar7 != 2) {
      uVar2 = uVar17;
    }
    uVar10 = FUN_01af0020(&local_78);
    puVar4 = PTR_DAT_04bb37e0;
    psVar16 = (short *)(param_1 + 0xb8);
    uVar17 = 0;
    iVar14 = 0;
    if ((uVar10 & 1) == 0) {
      do {
        uVar7 = *(uint *)(param_1 + 0x158);
        if (0x13 < uVar7) {
          uVar7 = 0x14;
        }
        if (uVar17 < uVar7) {
          sVar3 = *psVar16;
          psVar1 = psVar16;
joined_r0x027fa288:
          psVar11 = psVar1;
          if (sVar3 != -2) {
            lVar15 = *(long *)puVar5;
            uVar7 = FUN_0277d6c4(psVar1);
            if (*(long *)puVar5 == 0) goto LAB_027fa1f4;
            lVar15 = *(long *)(lVar15 + 0x57e58);
            psVar11 = &DAT_05586008;
            uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
            if ((uVar7 < *(uint *)(lVar15 + 0x1d8)) &&
               (psVar11 = &DAT_05586008,
               *(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
              psVar11 = psVar1;
            }
          }
        }
        else {
          uVar12 = (uint)(uVar17 + -uVar7);
          if ((int)uVar12 < 0) {
LAB_027fa1f4:
            psVar11 = &DAT_05586008;
          }
          else {
            uVar13 = *(uint *)(param_1 + 0xa0);
            psVar11 = &DAT_05586008;
            if (0x13 < uVar13) {
              uVar13 = 0x14;
            }
            if (uVar12 < uVar13) {
              psVar1 = (short *)(param_1 + (uVar17 + -uVar7 & 0xffffffff) * 8);
              sVar3 = *psVar1;
              goto joined_r0x027fa288;
            }
          }
        }
        iVar8 = FUN_0277d6c4(psVar11);
        iVar9 = FUN_0277d6c4(param_2);
        uVar17 = uVar17 + 1;
        psVar16 = psVar16 + 4;
        if (iVar9 == iVar8) {
          iVar14 = iVar14 + 1;
        }
      } while (uVar2 != uVar17);
    }
    else {
      do {
        uVar7 = *(uint *)(param_1 + 0x158);
        if (0x13 < uVar7) {
          uVar7 = 0x14;
        }
        psVar11 = (short *)puVar4;
        if (uVar17 < uVar7) {
          sVar3 = *psVar16;
          psVar1 = psVar16;
joined_r0x027fa068:
          psVar11 = psVar1;
          if (sVar3 != -2) {
            lVar15 = *(long *)puVar5;
            uVar7 = FUN_0277d6c4(psVar1);
            if (*(long *)puVar5 == 0) {
              psVar11 = (short *)puVar4;
            }
            else {
              lVar15 = *(long *)(lVar15 + 0x57e58);
              uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
              psVar11 = (short *)puVar4;
              if (uVar7 < *(uint *)(lVar15 + 0x1d8)) {
                if (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar7 * 8) != 0) {
                  psVar11 = psVar1;
                }
              }
            }
          }
        }
        else {
          uVar12 = (uint)(uVar17 + -uVar7);
          if (-1 < (int)uVar12) {
            uVar13 = *(uint *)(param_1 + 0xa0);
            if (0x13 < uVar13) {
              uVar13 = 0x14;
            }
            if (uVar12 < uVar13) {
              psVar1 = (short *)(param_1 + (uVar17 + -uVar7 & 0xffffffff) * 8);
              sVar3 = *psVar1;
              goto joined_r0x027fa068;
            }
          }
        }
        local_80 = *(undefined4 *)psVar11;
        local_7c = *(undefined4 *)(psVar11 + 2);
        lVar15 = *(long *)puVar5;
        uVar7 = FUN_0277d6c4(&local_80);
        if (*(long *)puVar5 != 0) {
          lVar15 = *(long *)(lVar15 + 0x57e58);
          uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
          if (((uVar7 < *(uint *)(lVar15 + 0x1d8)) &&
              (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) &&
             (uVar10 = FUN_01af28ac(&local_78,&local_80), (uVar10 & 1) != 0)) {
            local_88 = 0;
            lVar15 = *(long *)puVar5;
            local_90 = local_80;
            uStack_8c = local_7c;
            local_98 = puVar6 + 0x10;
            uVar7 = FUN_0277d6c4(&local_90);
            if (*(long *)puVar5 != 0) {
              lVar15 = *(long *)(lVar15 + 0x57e58);
              uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
              if ((uVar7 < *(uint *)(lVar15 + 0x1d8)) &&
                 (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
                lVar15 = *(long *)PTR_DAT_04bc0428;
                uVar7 = FUN_0277d6c4(&local_80);
                uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
                if (uVar7 < *(uint *)(lVar15 + 0x1d8)) {
                  lVar15 = *(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar7 * 8);
                  if (lVar15 != 0) {
                    local_88 = lVar15;
                  }
                }
              }
            }
            iVar8 = FUN_01af02d0(&local_98);
            iVar14 = iVar8 + iVar14;
          }
        }
        uVar17 = uVar17 + 1;
        psVar16 = psVar16 + 4;
      } while (uVar2 != uVar17);
    }
  }
  return iVar14;
}


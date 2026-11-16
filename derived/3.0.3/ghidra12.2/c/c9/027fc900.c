
uint FUN_027fc900(long param_1,short *param_2,int param_3)

{
  bool bVar1;
  short *psVar2;
  short sVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  short *psVar11;
  uint uVar12;
  long lVar13;
  ulong uVar14;
  short *psVar15;
  uint uVar16;
  undefined1 local_a8 [8];
  undefined8 local_a0;
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
  
  if (*param_2 == -2) {
    return 0;
  }
  iVar7 = FUN_027f9e60();
  puVar6 = PTR_DAT_04bc0510;
  puVar5 = PTR_DAT_04bb43c0;
  if (param_3 <= iVar7) {
    local_68 = 0;
    local_78 = PTR_DAT_04bc0510 + 0x10;
    local_70 = *(undefined4 *)param_2;
    uStack_6c = *(undefined4 *)(param_2 + 2);
    lVar13 = *(long *)PTR_DAT_04bb43c0;
    uVar8 = FUN_0277d6c4(&local_70);
    if (*(long *)puVar5 != 0) {
      lVar13 = *(long *)(lVar13 + 0x57e58);
      uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
      if ((uVar8 < *(uint *)(lVar13 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
        lVar13 = *(long *)PTR_DAT_04bc0428;
        uVar8 = FUN_0277d6c4(param_2);
        uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
        if ((uVar8 < *(uint *)(lVar13 + 0x1d8)) &&
           (lVar13 = *(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar8 * 8), lVar13 != 0)) {
          local_68 = lVar13;
        }
      }
    }
    uVar8 = 0;
    if (*(byte *)(param_1 + 0x178) < 3) {
      uVar8 = (uint)*(byte *)(param_1 + 0x178);
    }
    local_98 = (undefined *)CONCAT44(local_98._4_4_,uVar8);
    uVar10 = 0x1d;
    if (uVar8 != 1) {
      uVar10 = 0x13;
    }
    uVar14 = 0x27;
    if (uVar8 != 2) {
      uVar14 = uVar10;
    }
    uVar10 = FUN_01af0020(&local_78);
    puVar4 = PTR_DAT_04bb37e0;
    if ((uVar10 & 1) != 0) {
      psVar15 = (short *)(param_1 + uVar14 * 8 + 0xb8);
      do {
        uVar8 = *(uint *)(param_1 + 0x158);
        if (0x13 < uVar8) {
          uVar8 = 0x14;
        }
        if (uVar14 < uVar8) {
          sVar3 = *psVar15;
          psVar2 = psVar15;
joined_r0x027fcae4:
          psVar11 = psVar2;
          if (sVar3 != -2) {
            lVar13 = *(long *)puVar5;
            uVar8 = FUN_0277d6c4(psVar2);
            if (*(long *)puVar5 == 0) goto LAB_027fcb30;
            lVar13 = *(long *)(lVar13 + 0x57e58);
            uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
            psVar11 = (short *)puVar4;
            if (uVar8 < *(uint *)(lVar13 + 0x1d8)) {
              if (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar8 * 8) != 0) {
                psVar11 = psVar2;
              }
            }
          }
        }
        else {
          uVar12 = (uint)(uVar14 + -uVar8);
          if ((int)uVar12 < 0) {
LAB_027fcb30:
            psVar11 = (short *)puVar4;
          }
          else {
            uVar16 = *(uint *)(param_1 + 0xa0);
            if (0x13 < uVar16) {
              uVar16 = 0x14;
            }
            psVar11 = (short *)puVar4;
            if (uVar12 < uVar16) {
              psVar2 = (short *)(param_1 + (uVar14 + -uVar8 & 0xffffffff) * 8);
              sVar3 = *psVar2;
              goto joined_r0x027fcae4;
            }
          }
        }
        local_80 = *(undefined4 *)psVar11;
        local_7c = *(undefined4 *)(psVar11 + 2);
        lVar13 = *(long *)puVar5;
        uVar8 = FUN_0277d6c4(&local_80);
        if (*(long *)puVar5 != 0) {
          lVar13 = *(long *)(lVar13 + 0x57e58);
          uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
          if (((uVar8 < *(uint *)(lVar13 + 0x1d8)) &&
              (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) &&
             (uVar10 = FUN_01af28ac(&local_78,&local_80), (uVar10 & 1) != 0)) {
            local_88 = 0;
            lVar13 = *(long *)puVar5;
            local_90 = local_80;
            uStack_8c = local_7c;
            local_98 = puVar6 + 0x10;
            uVar8 = FUN_0277d6c4(&local_90);
            if (*(long *)puVar5 != 0) {
              lVar13 = *(long *)(lVar13 + 0x57e58);
              uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
              if ((uVar8 < *(uint *)(lVar13 + 0x1d8)) &&
                 (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
                lVar13 = *(long *)PTR_DAT_04bc0428;
                uVar8 = FUN_0277d6c4(&local_80);
                uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
                if ((uVar8 < *(uint *)(lVar13 + 0x1d8)) &&
                   (lVar13 = *(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar8 * 8),
                   lVar13 != 0)) {
                  local_88 = lVar13;
                }
              }
            }
            iVar9 = FUN_01af02d0(&local_98);
            iVar7 = param_3 - iVar9;
            if (iVar7 == 0 || param_3 < iVar9) {
              if (iVar7 == 0) {
                FUN_027fa2dc(param_1,uVar14,PTR_DAT_04bb37e0,0);
                uVar8 = 1;
              }
              else {
                local_a0 = 0xfffe;
                FUN_0277d4ac(&local_a0);
                FUN_01af3d60(local_a8,&local_80,param_3);
                uVar8 = FUN_027fa2dc(param_1,uVar14,&local_a0,0);
              }
              return uVar8 & 1;
            }
            FUN_027fa2dc(param_1,uVar14,puVar4,0);
            param_3 = iVar7;
          }
        }
        psVar15 = psVar15 + -4;
        bVar1 = (long)uVar14 < 1;
        uVar14 = uVar14 - 1;
        if (bVar1) {
          return 0;
        }
      } while( true );
    }
    psVar15 = (short *)(param_1 + uVar14 * 8 + 0xb8);
    do {
      uVar8 = *(uint *)(param_1 + 0x158);
      if (0x13 < uVar8) {
        uVar8 = 0x14;
      }
      if (uVar14 < uVar8) {
        sVar3 = *psVar15;
        psVar2 = psVar15;
joined_r0x027fcce4:
        psVar11 = psVar2;
        if (sVar3 != -2) {
          lVar13 = *(long *)puVar5;
          uVar8 = FUN_0277d6c4(psVar2);
          if (*(long *)puVar5 == 0) goto LAB_027fcd40;
          lVar13 = *(long *)(lVar13 + 0x57e58);
          uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
          psVar11 = (short *)puVar4;
          if (uVar8 < *(uint *)(lVar13 + 0x1d8)) {
            if (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar8 * 8) != 0) {
              psVar11 = psVar2;
            }
          }
        }
      }
      else {
        uVar12 = (uint)(uVar14 + -uVar8);
        if ((int)uVar12 < 0) {
LAB_027fcd40:
          psVar11 = (short *)puVar4;
        }
        else {
          uVar16 = *(uint *)(param_1 + 0xa0);
          if (0x13 < uVar16) {
            uVar16 = 0x14;
          }
          psVar11 = (short *)puVar4;
          if (uVar12 < uVar16) {
            psVar2 = (short *)(param_1 + (uVar14 + -uVar8 & 0xffffffff) * 8);
            sVar3 = *psVar2;
            goto joined_r0x027fcce4;
          }
        }
      }
      iVar7 = FUN_0277d6c4(psVar11);
      iVar9 = FUN_0277d6c4(param_2);
      if (iVar9 == iVar7) {
        FUN_027fa2dc(param_1,uVar14,puVar4,0);
        if (param_3 < 2) {
          return 1;
        }
        param_3 = param_3 + -1;
      }
      psVar15 = psVar15 + -4;
      bVar1 = 0 < (long)uVar14;
      uVar14 = uVar14 - 1;
    } while (bVar1);
  }
  return 0;
}


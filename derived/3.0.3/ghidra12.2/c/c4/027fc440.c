
undefined8 FUN_027fc440(long param_1,short *param_2)

{
  short *psVar1;
  ulong uVar2;
  short sVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  undefined8 uVar10;
  short *psVar11;
  uint uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  short *psVar16;
  uint uVar17;
  int local_9c;
  undefined **local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  long local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined **local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  long local_68;
  
  puVar5 = PTR_DAT_04bb43c0;
  if (*param_2 == -2) {
    return 1;
  }
  uVar6 = *(uint *)(param_1 + 0x158);
  psVar16 = (short *)(param_1 + 0xb8);
  if (0x13 < uVar6) {
    uVar6 = 0x14;
  }
  if (uVar6 == 0) {
    iVar7 = 0;
  }
  else {
    if (uVar6 == 1) {
      uVar13 = 0;
      iVar7 = 0;
    }
    else {
      uVar13 = 0;
      iVar7 = 0;
      psVar11 = (short *)(param_1 + 0xc0);
      do {
        psVar1 = psVar11 + -4;
        uVar13 = uVar13 + 2;
        sVar3 = *psVar11;
        psVar11 = psVar11 + 8;
        if (*psVar1 == -2) {
          iVar7 = iVar7 + 1;
        }
        if (sVar3 == -2) {
          iVar7 = iVar7 + 1;
        }
      } while (((ulong)uVar6 & 0x1e) != uVar13);
    }
    if (((uVar6 & 1) != 0) && (psVar16[uVar13 * 4] == -2)) {
      iVar7 = iVar7 + 1;
    }
  }
  uVar6 = *(uint *)(param_1 + 0xa0);
  if (0x13 < uVar6) {
    uVar6 = 0x14;
  }
  if (uVar6 == 0) {
    iVar8 = 0;
  }
  else {
    if (uVar6 == 1) {
      uVar13 = 0;
      iVar8 = 0;
    }
    else {
      uVar13 = 0;
      iVar8 = 0;
      psVar11 = (short *)(param_1 + 8);
      do {
        psVar1 = psVar11 + -4;
        uVar13 = uVar13 + 2;
        sVar3 = *psVar11;
        psVar11 = psVar11 + 8;
        if (*psVar1 == -2) {
          iVar8 = iVar8 + 1;
        }
        if (sVar3 == -2) {
          iVar8 = iVar8 + 1;
        }
      } while (((ulong)uVar6 & 0x1e) != uVar13);
    }
    if (((uVar6 & 1) != 0) && (*(short *)(param_1 + uVar13 * 8) == -2)) {
      iVar8 = iVar8 + 1;
    }
  }
  if (iVar8 + iVar7 == 0) {
    lVar14 = *(long *)PTR_DAT_04bb43c0;
    uVar6 = FUN_0277d6c4(param_2);
    lVar15 = *(long *)puVar5;
    if (lVar15 != 0) {
      lVar14 = *(long *)(lVar14 + 0x57e58);
      uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
      if ((uVar6 < *(uint *)(lVar14 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
        local_68 = 0;
        local_70 = *(undefined4 *)param_2;
        uStack_6c = *(undefined4 *)(param_2 + 2);
        local_78 = &PTR_FUN_04a36b50;
        uVar6 = FUN_0277d6c4(&local_70);
        if (*(long *)puVar5 != 0) {
          lVar14 = *(long *)(lVar15 + 0x57e58);
          uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
          if ((uVar6 < *(uint *)(lVar14 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
            lVar14 = *(long *)PTR_DAT_04bc0428;
            uVar6 = FUN_0277d6c4(param_2);
            uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
            if (uVar6 < *(uint *)(lVar14 + 0x1d8)) {
              lVar14 = *(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar6 * 8);
              if (lVar14 != 0) {
                local_68 = lVar14;
              }
            }
          }
        }
        uVar6 = 0;
        if (*(byte *)(param_1 + 0x178) < 3) {
          uVar6 = (uint)*(byte *)(param_1 + 0x178);
        }
        local_98 = (undefined **)CONCAT44(local_98._4_4_,uVar6);
        uVar13 = FUN_01af0020(&local_78);
        if ((uVar13 & 1) == 0) {
          return 0;
        }
        uVar13 = 0x1e;
        if (uVar6 != 1) {
          uVar13 = 0x14;
        }
        uVar2 = 0x28;
        if (uVar6 != 2) {
          uVar2 = uVar13;
        }
        local_9c = FUN_01af02d0(&local_78);
        puVar4 = PTR_DAT_04bb37e0;
        uVar13 = 0;
        do {
          uVar6 = *(uint *)(param_1 + 0x158);
          if (0x13 < uVar6) {
            uVar6 = 0x14;
          }
          if (uVar13 < uVar6) {
            sVar3 = *psVar16;
            psVar1 = psVar16;
joined_r0x027fc784:
            psVar11 = psVar1;
            if (sVar3 != -2) {
              lVar14 = *(long *)puVar5;
              uVar6 = FUN_0277d6c4(psVar1);
              if (*(long *)puVar5 == 0) goto LAB_027fc7d0;
              lVar14 = *(long *)(lVar14 + 0x57e58);
              uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
              psVar11 = (short *)puVar4;
              if (uVar6 < *(uint *)(lVar14 + 0x1d8)) {
                if (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar6 * 8) != 0) {
                  psVar11 = psVar1;
                }
              }
            }
          }
          else {
            uVar12 = (uint)(uVar13 + -uVar6);
            if ((int)uVar12 < 0) {
LAB_027fc7d0:
              psVar11 = (short *)puVar4;
            }
            else {
              uVar17 = *(uint *)(param_1 + 0xa0);
              if (0x13 < uVar17) {
                uVar17 = 0x14;
              }
              psVar11 = (short *)puVar4;
              if (uVar12 < uVar17) {
                psVar1 = (short *)(param_1 + (uVar13 + -uVar6 & 0xffffffff) * 8);
                sVar3 = *psVar1;
                goto joined_r0x027fc784;
              }
            }
          }
          local_80 = *(undefined4 *)psVar11;
          local_7c = *(undefined4 *)(psVar11 + 2);
          lVar14 = *(long *)puVar5;
          uVar6 = FUN_0277d6c4(&local_80);
          if (*(long *)puVar5 != 0) {
            lVar14 = *(long *)(lVar14 + 0x57e58);
            uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
            if (((uVar6 < *(uint *)(lVar14 + 0x1d8)) &&
                (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) &&
               (uVar9 = FUN_01af28ac(&local_78,&local_80), (uVar9 & 1) != 0)) {
              local_88 = 0;
              local_98 = &PTR_FUN_04a36b50;
              lVar14 = *(long *)puVar5;
              local_90 = local_80;
              uStack_8c = local_7c;
              uVar6 = FUN_0277d6c4(&local_90);
              if (*(long *)puVar5 != 0) {
                lVar14 = *(long *)(lVar14 + 0x57e58);
                uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
                if ((uVar6 < *(uint *)(lVar14 + 0x1d8)) &&
                   (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
                  lVar14 = *(long *)PTR_DAT_04bc0428;
                  uVar6 = FUN_0277d6c4(&local_80);
                  uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
                  if (uVar6 < *(uint *)(lVar14 + 0x1d8)) {
                    lVar14 = *(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar6 * 8);
                    if (lVar14 != 0) {
                      local_88 = lVar14;
                    }
                  }
                }
              }
              iVar7 = FUN_01af2610(&local_98);
              iVar8 = FUN_01af02d0(&local_98);
              local_9c = (iVar8 - iVar7) + local_9c;
              if (local_9c < 1) goto LAB_027fc8cc;
            }
          }
          uVar13 = uVar13 + 1;
          psVar16 = psVar16 + 4;
        } while (uVar2 != uVar13);
      }
    }
    uVar10 = 0;
  }
  else {
LAB_027fc8cc:
    uVar10 = 1;
  }
  return uVar10;
}



/* WARNING: Removing unreachable block (ram,0x012f4cd0) */
/* WARNING: Removing unreachable block (ram,0x012f4ebc) */

void FUN_012f4994(long param_1,long param_2,uint param_3)

{
  undefined *puVar1;
  ushort *puVar2;
  undefined *puVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  undefined *puVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  uint *puVar13;
  uint uVar14;
  ushort uVar15;
  uint uVar16;
  uint *puVar17;
  float fVar18;
  float fVar19;
  undefined *local_1f8;
  long local_1f0;
  undefined *local_1e8;
  uint *local_1e0;
  uint local_1d8;
  int local_1cc;
  undefined8 local_1c8;
  uint *local_1c0;
  undefined **local_1b8;
  undefined8 uStack_1b0;
  undefined *local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined *local_78;
  undefined *puStack_70;
  undefined8 local_68;
  undefined *local_60;
  undefined8 local_58;
  
  puVar7 = PTR_DAT_04bbc2f8;
  if (param_2 == 0) {
    return;
  }
  local_1cc = 0;
  if ((*(uint *)(param_1 + 8) >> 2 & 1) == 0) {
    if ((((*(long *)PTR_DAT_04bb27c8 == 0) ||
         (lVar12 = *(long *)(*(long *)PTR_DAT_04bb27c8 + 0xa8), lVar12 == 0)) ||
        (uVar16 = (int)((float)(int)*(float *)(param_1 + 0x18) / 5.0) -
                  (uint)(*(float *)(param_1 + 0x18) < 0.0), (int)uVar16 < 0)) ||
       ((uVar11 = (int)((float)(int)*(float *)(param_1 + 0x20) / 5.0) -
                  (uint)(*(float *)(param_1 + 0x20) < 0.0), (int)uVar11 < 0 ||
        (*(uint *)(lVar12 + 0x38) <= uVar16 || *(uint *)(lVar12 + 0x3c) <= uVar11))))
    goto LAB_012f4a78;
    uVar16 = uVar16 + *(uint *)(lVar12 + 0x38) * uVar11;
    if ((*(uint *)(lVar12 + 0x68) <= uVar16 || *(long *)(lVar12 + 0x70) == 0) ||
       (local_1c8 = (undefined *)CONCAT44(local_1c8._4_4_,3),
       (*(uint *)(*(long *)(lVar12 + 0x70) + (long)(int)uVar16 * 4) >> 3 & 1) == 0))
    goto LAB_012f4a78;
LAB_012f4e18:
    iVar8 = 2;
LAB_012f4e1c:
    local_1cc = iVar8;
  }
  else {
LAB_012f4a78:
    lVar12 = param_1 + 0xdc;
    sVar4 = *(short *)(param_1 + 0xd4);
    if (*(short *)(param_1 + 0xd8) <= *(short *)(param_1 + 0xd4)) {
      sVar4 = *(short *)(param_1 + 0xd8);
    }
    sVar5 = *(short *)(param_1 + 0xd6);
    if (*(short *)(param_1 + 0xda) <= *(short *)(param_1 + 0xd6)) {
      sVar5 = *(short *)(param_1 + 0xda);
    }
    uVar16 = *(int *)(param_1 + 0x44) - (int)sVar5;
    uVar11 = *(int *)(param_1 + 0x40) - (int)sVar4;
    uVar10 = *(int *)(param_1 + 0x68) - (int)sVar4;
    uVar14 = *(int *)(param_1 + 0x6c) - (int)sVar5;
    puVar3 = (undefined *)(lVar12 + (ulong)(uVar16 * 3 + uVar11) * 0xe);
    if (2 < uVar16 || 2 < uVar11) {
      puVar3 = PTR_DAT_04bbc2f8;
    }
    uVar16 = uVar14 * 3 + uVar10;
    local_1c8 = (undefined *)CONCAT44(local_1c8._4_4_,(uint)(byte)puVar3[0xc]);
    puVar1 = (undefined *)(lVar12 + (ulong)uVar16 * 0xe);
    if (2 < uVar14 || 2 < uVar10) {
      puVar1 = PTR_DAT_04bbc2f8;
    }
    if ((byte)puVar3[0xc] == 4) {
      local_1c8 = (undefined *)((ulong)local_1c8._4_4_ << 0x20);
    }
    local_1e8._0_4_ = (uint)(byte)puVar1[0xc];
    if ((byte)puVar1[0xc] == 4) {
      local_1e8._0_4_ = 0;
    }
    if (((uint)local_1e8 < (uint)local_1c8) || ((uint)local_1c8 != (uint)local_1e8))
    goto LAB_012f4e18;
    if ((*(uint *)(param_1 + 8) & 1) == 0) {
      local_1b8 = &PTR_LAB_0498d930;
      uStack_1b0 = 0;
      local_1c8 = PTR_DAT_04bbc5b0 + 0x10;
      local_1c0 = (uint *)(PTR_DAT_04bbc5b8 + 0x10);
      local_1a8 = PTR_DAT_04bb2e18 + 0x10;
      memset(&local_1a0,0,0x128);
      FUN_0137c524(&local_198);
      local_68 = 0;
      local_78 = PTR_DAT_04bbc5d8 + 0x10;
      puStack_70 = PTR_DAT_04bb2018 + 0x10;
      local_58 = 0;
      local_60 = puStack_70;
      FUN_0137c6ec(&local_1c8);
      local_1c8 = PTR_DAT_04bbc278 + 0x10;
      FUN_0137c6ec(&local_1c8);
      fVar19 = (float)*(int *)(param_1 + 0x6c) * 10.0 + 5.0 + -10.0;
      fVar18 = (float)*(int *)(param_1 + 0x68) * 10.0 + 5.0 + -10.0;
      iVar8 = (int)((float)(int)fVar18 / 10.0) - (uint)(fVar18 < 0.0);
      iVar6 = (int)((float)(int)fVar19 / 10.0) - (uint)(fVar19 < 0.0);
      local_68 = CONCAT44(iVar6,iVar8);
      local_1a0 = CONCAT44(iVar6,iVar8);
      local_58 = CONCAT44(iVar6 + 2,iVar8 + 2);
      FUN_0137cab0(&local_1c8);
      iVar8 = FUN_012ffbd4(&local_1c8,param_1 + 0x60);
      if (iVar8 == 0) {
        sVar4 = *(short *)(param_1 + 0xd4);
        if (*(short *)(param_1 + 0xd8) <= *(short *)(param_1 + 0xd4)) {
          sVar4 = *(short *)(param_1 + 0xd8);
        }
        sVar5 = *(short *)(param_1 + 0xd6);
        if (*(short *)(param_1 + 0xda) <= *(short *)(param_1 + 0xd6)) {
          sVar5 = *(short *)(param_1 + 0xda);
        }
        uVar10 = *(int *)(param_1 + 0x68) - (int)sVar4;
        uVar14 = *(int *)(param_1 + 0x6c) - (int)sVar5;
        uVar16 = uVar14 * 3 + uVar10;
        goto LAB_012f4ca4;
      }
      goto LAB_012f4e1c;
    }
LAB_012f4ca4:
    puVar2 = (ushort *)(lVar12 + (ulong)uVar16 * 0xe);
    if (2 < uVar10 || 2 < uVar14) {
      puVar2 = (ushort *)puVar7;
    }
    local_1c8 = PTR_DAT_04bbc330 + 0x10;
    local_1c0 = (uint *)0x0;
    local_1b8 = (undefined **)CONCAT44(local_1b8._4_4_,(uint)(byte)puVar2[2]);
    lVar12 = *(long *)PTR_DAT_04bb27a8;
    uVar16 = (uint)*puVar2 - (uint)*(ushort *)(lVar12 + 0x408);
    if (uVar16 < *(uint *)(lVar12 + 1000)) {
      puVar13 = *(uint **)(*(long *)(lVar12 + 0x3f0) + (long)(int)uVar16 * 8);
      if (puVar13 == (uint *)0x0) goto LAB_012f4da4;
      uVar11 = 0;
      uVar16 = *puVar13;
      local_1c0 = puVar13;
      if ((uVar16 != 0) && (puVar13 != (uint *)(ulong)uVar16)) {
        puVar17 = (uint *)((long)puVar13 - (long)(ulong)uVar16);
        uVar11 = 0;
        if (*puVar17 != 0) {
          uVar16 = puVar17[1];
          if ((uVar16 != 0) && ((ulong)(ushort)puVar17[2] != 0)) {
            lVar12 = 0xc;
            if (*(char *)((long)puVar17 + 10) != '\0') {
              lVar12 = 0x1c;
            }
            lVar12 = (long)puVar17 + lVar12 + (ulong)(ushort)puVar17[2] * 8;
            if (lVar12 != 0) {
              uVar11 = 0;
              if ((ulong)uVar16 != 0) {
                uVar11 = (uint)((ulong)((long)puVar13 - lVar12) / (ulong)uVar16);
              }
              if (*puVar17 <= uVar11) {
                uVar11 = 0xffffffff;
              }
              if ((uVar11 < *(uint *)PTR_DAT_04bbbe48) &&
                 (uVar11 = (uint)*(ushort *)
                                  (*(long *)(PTR_DAT_04bbbe48 + 8) + (long)(int)uVar11 * 2),
                 uVar11 < 5)) goto LAB_012f4da8;
            }
          }
          goto LAB_012f4da4;
        }
      }
    }
    else {
LAB_012f4da4:
      uVar11 = 0;
    }
LAB_012f4da8:
    local_1e8 = (undefined *)CONCAT44(local_1e8._4_4_,uVar11);
    local_1f8 = (undefined *)CONCAT44(local_1f8._4_4_,(uint)(byte)puVar2[6]);
    if ((DAT_051810a8 <= (int)(uint)(byte)puVar2[6]) ||
       ((uVar11 != 0 && ((uVar11 != 3 || (iVar8 = FUN_01313218(&local_1c8), iVar8 == 2))))))
    goto LAB_012f4e18;
    if (*(long *)(param_1 + 0x50) != 0) {
      lVar12 = FUN_01381bbc(*(long *)(param_1 + 0x50),param_1 + 0x60);
      if ((*(uint *)(lVar12 + 0xc) & 0x2100) != 0x100) goto LAB_012f4e18;
    }
  }
  if (local_1cc != 0) {
    *(int *)(param_2 + 0xc) = local_1cc;
    *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 2;
    return;
  }
  *(undefined4 *)(param_1 + 0xa0) = 1;
  sVar4 = *(short *)(param_1 + 0xd4);
  if (*(short *)(param_1 + 0xd8) <= *(short *)(param_1 + 0xd4)) {
    sVar4 = *(short *)(param_1 + 0xd8);
  }
  sVar5 = *(short *)(param_1 + 0xd6);
  if (*(short *)(param_1 + 0xda) <= *(short *)(param_1 + 0xd6)) {
    sVar5 = *(short *)(param_1 + 0xda);
  }
  uVar16 = *(int *)(param_1 + 0x6c) - (int)sVar5;
  uVar11 = *(int *)(param_1 + 0x68) - (int)sVar4;
  puVar3 = (undefined *)(param_1 + (ulong)(uVar16 * 3 + uVar11) * 0xe + 0xdc);
  if (2 < uVar16 || 2 < uVar11) {
    puVar3 = puVar7;
  }
  local_1e8 = PTR_DAT_04bbc330 + 0x10;
  local_1e0 = (uint *)0x0;
  local_1d8 = (uint)(byte)puVar3[10];
  lVar12 = *(long *)PTR_DAT_04bb27a8;
  uVar16 = (uint)*(ushort *)(puVar3 + 6) - (uint)*(ushort *)(lVar12 + 0x408);
  if (uVar16 < *(uint *)(lVar12 + 1000)) {
    puVar13 = *(uint **)(*(long *)(lVar12 + 0x3f0) + (long)(int)uVar16 * 8);
    if (puVar13 != (uint *)0x0) {
      local_1e0 = puVar13;
    }
  }
  if (param_3 == 0) {
    uVar9 = 5;
    goto LAB_012f518c;
  }
  local_1c8 = (undefined *)CONCAT44(local_1c8._4_4_,param_3);
  local_1f8 = PTR_DAT_04bbc308 + 0x10;
  if ((int)*(uint *)(lVar12 + 0x7a8) < 1) {
    if ((((*(long *)(lVar12 + 0x698) == 0) ||
         (puVar13 = *(uint **)(*(long *)(lVar12 + 0x698) + 8), puVar13 == (uint *)0x0)) ||
        ((param_3 < *(uint *)(lVar12 + 0x6b0) &&
         (*(char *)(*(long *)(lVar12 + 0x6b8) + (long)(int)param_3) == '\0')))) ||
       (((*puVar13 <= param_3 || (puVar13[1] == 0)) || ((ushort)puVar13[2] == 0))))
    goto LAB_012f4fcc;
    iVar8 = 0xc;
    if (*(char *)((long)puVar13 + 10) != '\0') {
      iVar8 = 0x1c;
    }
    local_1f0 = (ulong)(puVar13[1] * param_3 + (uint)(ushort)puVar13[2] * 8 + iVar8) + (long)puVar13
    ;
  }
  else if (param_3 < *(uint *)(lVar12 + 0x7a8)) {
    if (*(uint *)(lVar12 + 0x798) <= param_3) {
      param_3 = 0;
    }
    local_1f0 = *(long *)(*(long *)(lVar12 + 0x7a0) + (ulong)param_3 * 8);
  }
  else {
LAB_012f4fcc:
    local_1f0 = 0;
  }
  iVar8 = FUN_0130dad0(&local_1f8);
  local_188 = 0x500000005;
  local_1b8 = (undefined **)0x500000005;
  uStack_1b0 = 0x500000005;
  local_1c8 = PTR_DAT_04bbc328 + 0x10;
  local_1a8 = (undefined *)0x500000005;
  local_1a0 = 0x500000005;
  local_198 = 0x500000005;
  uStack_190 = 0x500000005;
  local_1c0 = (uint *)0x500000005;
  FUN_01313c40(&local_1e8,&local_1c8,0);
  if (local_1e0 == (uint *)0x0) {
LAB_012f50b8:
    uVar15 = 0;
  }
  else {
    uVar16 = *local_1e0;
    uVar15 = 0;
    if ((uVar16 != 0) && (local_1e0 != (uint *)(ulong)uVar16)) {
      puVar13 = (uint *)((long)local_1e0 - (long)(ulong)uVar16);
      uVar15 = 0;
      if (*puVar13 != 0) {
        uVar16 = puVar13[1];
        if ((uVar16 != 0) && ((ulong)(ushort)puVar13[2] != 0)) {
          lVar12 = 0xc;
          if (*(char *)((long)puVar13 + 10) != '\0') {
            lVar12 = 0x1c;
          }
          lVar12 = (long)puVar13 + lVar12 + (ulong)(ushort)puVar13[2] * 8;
          if (lVar12 != 0) {
            uVar11 = 0;
            if ((ulong)uVar16 != 0) {
              uVar11 = (uint)((ulong)((long)local_1e0 - lVar12) / (ulong)uVar16);
            }
            if (*puVar13 <= uVar11) {
              uVar11 = 0xffffffff;
            }
            if ((uVar11 < *(uint *)PTR_DAT_04bbbe48) &&
               (uVar15 = *(ushort *)(*(long *)(PTR_DAT_04bbbe48 + 8) + (long)(int)uVar11 * 2),
               uVar15 < 5)) goto LAB_012f50bc;
          }
        }
        goto LAB_012f50b8;
      }
    }
  }
LAB_012f50bc:
  uVar9 = 3;
  if ((uVar15 == 2) && (uVar9 = 4, uStack_1b0._4_4_ == iVar8)) {
    uVar16 = *(uint *)(param_1 + 8) & 2;
    uVar9 = 3;
    if (uVar16 == 0) {
      uVar9 = 5;
    }
    if ((local_1e0 != (uint *)0x0) && (uVar16 == 0)) {
      uVar16 = *local_1e0;
      uVar9 = 5;
      if ((uVar16 != 0) && (local_1e0 != (uint *)(ulong)uVar16)) {
        puVar13 = (uint *)((long)local_1e0 - (long)(ulong)uVar16);
        if (*puVar13 != 0) {
          uVar16 = puVar13[1];
          if ((uVar16 != 0) && ((ulong)(ushort)puVar13[2] != 0)) {
            lVar12 = 0xc;
            if (*(char *)((long)puVar13 + 10) != '\0') {
              lVar12 = 0x1c;
            }
            lVar12 = (long)puVar13 + lVar12 + (ulong)(ushort)puVar13[2] * 8;
            if (lVar12 != 0) {
              uVar11 = 0;
              if ((ulong)uVar16 != 0) {
                uVar11 = (uint)((ulong)((long)local_1e0 - lVar12) / (ulong)uVar16);
              }
              uVar9 = 5;
              if (*puVar13 <= uVar11) {
                uVar11 = 0xffffffff;
              }
              if ((uVar11 < *(uint *)PTR_DAT_04bbbe30) &&
                 (uVar9 = 0xf,
                 *(short *)(*(long *)(PTR_DAT_04bbbe30 + 8) + (long)(int)uVar11 * 2) != 1)) {
                uVar9 = 5;
              }
              goto LAB_012f518c;
            }
          }
          uVar9 = 5;
        }
      }
    }
  }
LAB_012f518c:
  *(undefined4 *)(param_2 + 8) = uVar9;
  return;
}


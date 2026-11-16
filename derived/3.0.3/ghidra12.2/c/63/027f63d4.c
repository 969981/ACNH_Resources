
/* WARNING: Removing unreachable block (ram,0x027f68d8) */

void FUN_027f63d4(long param_1)

{
  long *plVar1;
  uint uVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined8 uVar12;
  long *plVar13;
  uint *puVar14;
  uint *puVar15;
  uint *puVar16;
  long lVar17;
  long lVar18;
  undefined **local_a8;
  undefined8 local_a0;
  undefined **local_98;
  uint local_90;
  undefined *local_88;
  uint local_80;
  uint uStack_7c;
  uint *local_78;
  uint local_6c;
  uint local_68;
  uint local_64;
  
  puVar5 = PTR_DAT_04bb43c0;
  lVar17 = *(long *)PTR_DAT_04bb43c0;
  uVar8 = FUN_0277d6c4(param_1 + 0x28a10);
  puVar6 = PTR_DAT_04bc0510;
  lVar18 = *(long *)puVar5;
  if (lVar18 == 0) {
    return;
  }
  lVar17 = *(long *)(lVar17 + 0x57e58);
  uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
  if (*(uint *)(lVar17 + 0x1d8) <= uVar8) {
    return;
  }
  if (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar8 * 8) == 0) {
    return;
  }
  local_78 = (uint *)0x0;
  puVar15 = (uint *)(param_1 + 0x28a08);
  local_80 = *puVar15;
  uVar8 = *(uint *)(param_1 + 0x28a0c);
  local_88 = PTR_DAT_04bc0510 + 0x10;
  uStack_7c = uVar8;
  uVar9 = FUN_0277d6c4(&local_80);
  if (*(long *)puVar5 == 0) {
LAB_027f6594:
    local_64 = 0xbc;
  }
  else {
    lVar17 = *(long *)(lVar18 + 0x57e58);
    uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
    if ((*(uint *)(lVar17 + 0x1d8) <= uVar9) ||
       (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar9 * 8) == 0)) goto LAB_027f6594;
    lVar17 = *(long *)PTR_DAT_04bc0428;
    uVar9 = FUN_0277d6c4(puVar15);
    uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
    if ((*(uint *)(lVar17 + 0x1d8) <= uVar9) ||
       (puVar14 = *(uint **)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar9 * 8),
       puVar14 == (uint *)0x0)) goto LAB_027f6594;
    local_64 = 0;
    uVar9 = *puVar14;
    local_78 = puVar14;
    if ((uVar9 != 0) && (puVar14 != (uint *)(ulong)uVar9)) {
      puVar16 = (uint *)((long)puVar14 - (long)(ulong)uVar9);
      local_64 = 0;
      if (*puVar16 != 0) {
        uVar9 = puVar16[1];
        if ((uVar9 != 0) && ((ulong)(ushort)puVar16[2] != 0)) {
          lVar17 = 0xc;
          if (*(char *)((long)puVar16 + 10) != '\0') {
            lVar17 = 0x1c;
          }
          lVar17 = (long)puVar16 + lVar17 + (ulong)(ushort)puVar16[2] * 8;
          if (lVar17 != 0) {
            uVar10 = 0;
            if ((ulong)uVar9 != 0) {
              uVar10 = (uint)((ulong)((long)puVar14 - lVar17) / (ulong)uVar9);
            }
            if (*puVar16 <= uVar10) {
              uVar10 = 0xffffffff;
            }
            if (uVar10 < *(uint *)PTR_DAT_04bc00c8) {
              local_64 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar10 * 2);
              if (0xbc < local_64) {
                local_64 = 0;
              }
              goto LAB_027f65a0;
            }
          }
        }
        local_64 = 0;
      }
    }
  }
LAB_027f65a0:
  local_a8 = (undefined **)(puVar6 + 0x10);
  uVar8 = uVar8 & 0xf;
  uVar4 = *(undefined2 *)(param_1 + 0x28a10);
  local_98 = (undefined **)0x0;
  *(undefined2 *)(param_1 + 0x28a08) = uVar4;
  uVar7 = *(undefined1 *)(param_1 + 0x28a12);
  uVar3 = *(undefined1 *)(param_1 + 0x28a13);
  uVar9 = *(uint *)(param_1 + 0x28a14);
  *(undefined1 *)(param_1 + 0x28a0a) = uVar7;
  *(undefined1 *)(param_1 + 0x28a0b) = uVar3;
  *(uint *)(param_1 + 0x28a0c) = uVar9;
  lVar17 = *(long *)puVar5;
  if (local_64 != 0x76) {
    uVar8 = 0;
  }
  local_a0 = CONCAT44(uVar9,CONCAT13(uVar3,CONCAT12(uVar7,uVar4)));
  uVar10 = FUN_0277d6c4(&local_a0);
  if (*(long *)puVar5 == 0) {
LAB_027f6728:
    local_68 = 0xbc;
  }
  else {
    lVar17 = *(long *)(lVar17 + 0x57e58);
    uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
    if ((*(uint *)(lVar17 + 0x1d8) <= uVar10) ||
       (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar10 * 8) == 0)) goto LAB_027f6728;
    lVar17 = *(long *)PTR_DAT_04bc0428;
    uVar10 = FUN_0277d6c4(puVar15);
    uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
    if ((*(uint *)(lVar17 + 0x1d8) <= uVar10) ||
       (puVar14 = *(uint **)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar10 * 8),
       puVar14 == (uint *)0x0)) goto LAB_027f6728;
    local_68 = 0;
    uVar10 = *puVar14;
    local_98 = (undefined **)puVar14;
    if ((uVar10 != 0) && (puVar14 != (uint *)(ulong)uVar10)) {
      puVar16 = (uint *)((long)puVar14 - (long)(ulong)uVar10);
      local_68 = 0;
      if (*puVar16 != 0) {
        uVar10 = puVar16[1];
        if ((uVar10 != 0) && ((ulong)(ushort)puVar16[2] != 0)) {
          lVar17 = 0xc;
          if (*(char *)((long)puVar16 + 10) != '\0') {
            lVar17 = 0x1c;
          }
          lVar17 = (long)puVar16 + lVar17 + (ulong)(ushort)puVar16[2] * 8;
          if (lVar17 != 0) {
            uVar2 = 0;
            if ((ulong)uVar10 != 0) {
              uVar2 = (uint)((ulong)((long)puVar14 - lVar17) / (ulong)uVar10);
            }
            if (*puVar16 <= uVar2) {
              uVar2 = 0xffffffff;
            }
            if ((uVar2 < *(uint *)PTR_DAT_04bc00c8) &&
               (local_68 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar2 * 2)
               , local_68 < 0xbd)) goto LAB_027f6730;
          }
        }
        local_68 = 0;
      }
    }
  }
LAB_027f6730:
  local_64 = 0x76;
  if (local_68 == 0x76) {
    uVar9 = uVar9 & 0xfffffff0 | uVar8;
  }
  *(undefined2 *)(param_1 + 0x28a08) = uVar4;
  *(undefined1 *)(param_1 + 0x28a0a) = uVar7;
  *(undefined1 *)(param_1 + 0x28a0b) = uVar3;
  *(uint *)(param_1 + 0x28a0c) = uVar9;
  puVar5 = PTR_DAT_04bb4e20;
  local_6c = uVar8;
  if (*(char *)(param_1 + 0x289f8) != -1) {
    local_a8 = (undefined **)CONCAT44(local_a8._4_4_,(int)*(char *)(param_1 + 0x289f8));
    iVar11 = FUN_026792b0(&local_a8,0x76);
    if (iVar11 != *(int *)puVar5) {
      FUN_02675db0(&local_a8,0x76);
      FUN_02674a80(&local_a8,iVar11,puVar15,1,0);
    }
  }
  if (*(char *)(param_1 + 0x289f9) != -1) {
    local_a8 = (undefined **)CONCAT44(local_a8._4_4_,(int)*(char *)(param_1 + 0x289f9));
    iVar11 = FUN_026792b0(&local_a8,0x76);
    if (iVar11 != *(int *)puVar5) {
      FUN_02675db0(&local_a8,0x76);
      FUN_02674a80(&local_a8,iVar11,puVar15,1,0);
    }
  }
  local_88 = PTR_DAT_04bbfe68 + 0x10;
  uStack_7c = *(uint *)(PTR_DAT_04bbbf90 + 0xc);
  local_80 = 1;
  uVar7 = FUN_017baf44();
  local_a8 = &PTR_LAB_04a91580;
  local_98 = &local_88;
  local_78 = (uint *)(CONCAT71(local_78._1_7_,uVar7) & 0xffffffffffffff01);
  local_a0 = param_1;
  local_90 = uVar8;
  uVar12 = FUN_01a4fa00(&local_88);
  if (local_80 != 0) {
    local_68 = local_80;
    if (local_80 == 0) {
      return;
    }
    if (local_80 != 0) {
      plVar1 = (long *)(*(long *)PTR_DAT_04bb27a8 + 0x30);
      plVar13 = plVar1 + local_80;
      if (0x38 < local_80) {
        plVar13 = plVar1;
      }
      goto LAB_027f68b0;
    }
  }
  plVar13 = (long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
LAB_027f68b0:
  if (*plVar13 != 0) {
    local_64 = 0;
    lVar17 = *(long *)(*plVar13 + 0xd0);
    if (lVar17 != 0) {
      FUN_012e6150(lVar17,&local_a8,uVar12);
    }
  }
  return;
}


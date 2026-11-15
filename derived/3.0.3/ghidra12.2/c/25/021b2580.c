
/* WARNING: Removing unreachable block (ram,0x021b2960) */
/* WARNING: Removing unreachable block (ram,0x021b2920) */
/* WARNING: Removing unreachable block (ram,0x021b28d8) */
/* WARNING: Removing unreachable block (ram,0x021b27c0) */
/* WARNING: Removing unreachable block (ram,0x021b29b4) */
/* WARNING: Removing unreachable block (ram,0x021b27ec) */
/* WARNING: Removing unreachable block (ram,0x021b2790) */
/* WARNING: Removing unreachable block (ram,0x021b284c) */

void FUN_021b2580(long param_1)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  byte *pbVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  uint local_118 [36];
  undefined8 local_88;
  uint *puStack_80;
  uint local_64;
  
  local_118[0x22] = 0;
  local_118[0] = 0;
  local_118[1] = 0;
  local_118[0x1e] = 0;
  local_118[0x1f] = 0;
  local_118[0x20] = 0;
  local_118[0x21] = 0;
  *(undefined2 *)(param_1 + 0x55d0d) = 0x23;
  *(undefined1 *)(param_1 + 0x55d0f) = 8;
  puVar4 = PTR_DAT_04bb46b0;
  local_118[0x1a] = 0;
  local_118[0x1b] = 0;
  local_118[0x1c] = 0;
  local_118[0x1d] = 0;
  local_118[0x16] = 0;
  local_118[0x17] = 0;
  local_118[0x18] = 0;
  local_118[0x19] = 0;
  local_118[0x12] = 0;
  local_118[0x13] = 0;
  local_118[0x14] = 0;
  local_118[0x15] = 0;
  local_118[0xe] = 0;
  local_118[0xf] = 0;
  local_118[0x10] = 0;
  local_118[0x11] = 0;
  local_118[10] = 0;
  local_118[0xb] = 0;
  local_118[0xc] = 0;
  local_118[0xd] = 0;
  local_118[6] = 0;
  local_118[7] = 0;
  local_118[8] = 0;
  local_118[9] = 0;
  local_118[2] = 0;
  local_118[3] = 0;
  local_118[4] = 0;
  local_118[5] = 0;
  lVar13 = *(long *)PTR_DAT_04bb46b0;
  DAT_054573c0 = 0;
  if (lVar13 == 0) {
LAB_021b2668:
    DAT_054573c0 = 0xff;
  }
  else {
    puVar14 = *(undefined8 **)(lVar13 + 0x10);
    if ((*(byte *)(lVar13 + 0x453) & 1) == 0) {
      lVar13 = (**(code **)(*(long *)*puVar14 + 0x38))();
      if (lVar13 == 0) goto LAB_021b2668;
      lVar13 = lVar13 + 0x70;
    }
    else if (((puVar14 == (undefined8 *)0x0) || ((long *)puVar14[0x26] == (long *)0x0)) ||
            (lVar13 = (**(code **)(*(long *)puVar14[0x26] + 0x38))(), lVar13 == 0))
    goto LAB_021b2668;
    if ((*(long **)(&LAB_00205730 + lVar13) == (long *)0x0) ||
       (puVar14 = (undefined8 *)**(long **)(&LAB_00205730 + lVar13), puVar14 == (undefined8 *)0x0))
    {
      uVar6 = 0;
    }
    else {
      uVar6 = (**(code **)*puVar14)();
      uVar6 = uVar6 & 0xffffffff;
    }
    uVar11 = local_88._4_4_;
    local_88 = (undefined **)((ulong)local_88._4_4_ << 0x20);
    pbVar10 = (byte *)(*(long *)(&LAB_00205718 + lVar13) + *(long *)(&LAB_00205710 + lVar13));
    local_64 = (uint)pbVar10[0x20];
    if (local_64 == 2) {
      local_88 = (undefined **)CONCAT44(uVar11,1);
      local_64 = (uint)pbVar10[0x5c];
      if (local_64 != 2) goto LAB_021b2834;
      local_88 = (undefined **)CONCAT44(uVar11,2);
      local_64 = (uint)pbVar10[0x98];
      if (local_64 != 2) goto LAB_021b2834;
      lVar16 = *(long *)puVar4;
      if (lVar16 == 0) {
LAB_021b3328:
        if ((uVar6 & 1) == 0) {
          return;
        }
        if (*(long *)(&LAB_00205730 + lVar13) == 0) {
          return;
        }
        puVar14 = *(undefined8 **)(*(long *)(&LAB_00205730 + lVar13) + 8);
        if (puVar14 == (undefined8 *)0x0) {
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x021b3360. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)*puVar14)();
        return;
      }
      puVar14 = *(undefined8 **)(lVar16 + 0x10);
      if ((*(byte *)(lVar16 + 0x453) & 1) == 0) {
        lVar16 = (**(code **)(*(long *)*puVar14 + 0x38))();
        if (lVar16 == 0) goto LAB_021b3328;
        lVar16 = lVar16 + 0x70;
      }
      else if (((puVar14 == (undefined8 *)0x0) || ((long *)puVar14[0x26] == (long *)0x0)) ||
              (lVar16 = (**(code **)(*(long *)puVar14[0x26] + 0x38))(), lVar16 == 0))
      goto LAB_021b3328;
      if ((*(long **)(lVar16 + 0xd0) == (long *)0x0) ||
         (puVar14 = (undefined8 *)**(long **)(lVar16 + 0xd0), puVar14 == (undefined8 *)0x0)) {
        uVar8 = 0;
      }
      else {
        uVar8 = (**(code **)*puVar14)();
        uVar8 = uVar8 & 0xffffffff;
      }
      uVar9 = FUN_027e0484(*(long *)(lVar16 + 0xb8) + *(long *)(lVar16 + 0xb0));
      if ((((uVar8 & 1) != 0) && (*(long *)(lVar16 + 0xd0) != 0)) &&
         (puVar14 = *(undefined8 **)(*(long *)(lVar16 + 0xd0) + 8), puVar14 != (undefined8 *)0x0)) {
        (**(code **)*puVar14)();
      }
      if ((uVar9 & 1) == 0) goto LAB_021b3328;
      DAT_054573c0 = 0xff;
    }
    else {
LAB_021b2834:
      uVar8 = (ulong)*pbVar10;
      if (((0x22 < uVar8) || ((byte)PTR_DAT_04bc27f0[uVar8] < pbVar10[1])) ||
         ((*(uint *)(PTR_DAT_04bc2a20 + uVar8 * 4) >> (ulong)(pbVar10[1] & 0x1f) & 1) == 0)) {
        local_64 = 0;
        DAT_054573c0 = DAT_054573c0 | 1;
      }
      uVar8 = (ulong)pbVar10[0x3c];
      if (((0x22 < uVar8) || ((byte)PTR_DAT_04bc27f0[uVar8] < pbVar10[0x3d])) ||
         ((*(uint *)(PTR_DAT_04bc2a20 + uVar8 * 4) >> (ulong)(pbVar10[0x3d] & 0x1f) & 1) == 0)) {
        local_64 = 5;
        DAT_054573c0 = DAT_054573c0 | 0x20;
      }
      local_88 = (undefined **)CONCAT44(local_88._4_4_,2);
      uVar8 = (ulong)pbVar10[0x78];
      if (((0x22 < uVar8) || ((byte)PTR_DAT_04bc27f0[uVar8] < pbVar10[0x79])) ||
         ((*(uint *)(PTR_DAT_04bc2a20 + uVar8 * 4) >> (ulong)(pbVar10[0x79] & 0x1f) & 1) == 0)) {
        local_88 = (undefined **)CONCAT44(local_88._4_4_,2);
        local_64 = 4;
        DAT_054573c0 = DAT_054573c0 | 0x10;
      }
    }
    if ((((uVar6 & 1) != 0) && (*(long *)(&LAB_00205730 + lVar13) != 0)) &&
       (puVar14 = *(undefined8 **)(*(long *)(&LAB_00205730 + lVar13) + 8),
       puVar14 != (undefined8 *)0x0)) {
      (**(code **)*puVar14)();
    }
  }
  FUN_020fc590(local_118,&LAB_021b3370);
  lVar13 = *(long *)puVar4;
  if (lVar13 != 0) {
    puVar14 = *(undefined8 **)(lVar13 + 0x10);
    if ((*(byte *)(lVar13 + 0x453) & 1) == 0) {
      lVar16 = (**(code **)(*(long *)*puVar14 + 0x38))();
      lVar13 = 0;
      if (lVar16 != 0) {
        lVar13 = lVar16 + 0x70;
      }
    }
    else if ((puVar14 == (undefined8 *)0x0) || ((long *)puVar14[0x26] == (long *)0x0)) {
      lVar13 = 0;
    }
    else {
      lVar13 = (**(code **)(*(long *)puVar14[0x26] + 0x38))();
    }
    lVar15 = *(long *)puVar4;
    lVar16 = lVar13 + 0xa8;
    if (lVar13 == 0) {
      lVar16 = 0;
    }
    if (lVar15 != 0) {
      puVar14 = *(undefined8 **)(lVar15 + 0x10);
      if ((*(byte *)(lVar15 + 0x453) & 1) == 0) {
        lVar7 = (**(code **)(*(long *)*puVar14 + 0x38))();
        lVar15 = 0;
        if (lVar7 != 0) {
          lVar15 = lVar7 + 0x70;
        }
      }
      else {
        if ((puVar14 == (undefined8 *)0x0) || ((long *)puVar14[0x26] == (long *)0x0))
        goto LAB_021b2f9c;
        lVar15 = (**(code **)(*(long *)puVar14[0x26] + 0x38))();
      }
      lVar7 = lVar15 + 0x1c2958;
      if (lVar15 == 0) {
        lVar7 = 0;
      }
      if ((lVar13 != 0) && (lVar15 != 0)) {
        if ((*(long **)(lVar16 + 0x28) == (long *)0x0) ||
           (puVar14 = (undefined8 *)**(long **)(lVar16 + 0x28), puVar14 == (undefined8 *)0x0)) {
          uVar6 = 0;
        }
        else {
          uVar6 = (**(code **)*puVar14)();
          uVar6 = uVar6 & 0xffffffff;
        }
        pbVar10 = (byte *)(*(long *)(lVar16 + 0x10) + *(long *)(lVar16 + 8));
        uVar8 = (ulong)*pbVar10;
        if (((uVar8 < 0x23) && (pbVar10[1] <= (byte)PTR_DAT_04bc27f0[uVar8])) &&
           ((*(uint *)(PTR_DAT_04bc2a20 + uVar8 * 4) >> (ulong)(pbVar10[1] & 0x1f) & 1) != 0)) {
          FUN_020fcb1c(local_118);
          pbVar10 = (byte *)(*(long *)(lVar16 + 0x10) + *(long *)(lVar16 + 8));
        }
        uVar8 = (ulong)pbVar10[0x13230];
        if (((uVar8 < 0x23) && (pbVar10[0x13231] <= (byte)PTR_DAT_04bc27f0[uVar8])) &&
           ((*(uint *)(PTR_DAT_04bc2a20 + uVar8 * 4) >> (ulong)(pbVar10[0x13231] & 0x1f) & 1) != 0))
        {
          FUN_020fcb1c(local_118,pbVar10 + 0x13230);
          pbVar10 = (byte *)(*(long *)(lVar16 + 0x10) + *(long *)(lVar16 + 8));
        }
        uVar8 = (ulong)pbVar10[0x26460];
        if (((uVar8 < 0x23) && (pbVar10[0x26461] <= (byte)PTR_DAT_04bc27f0[uVar8])) &&
           ((*(uint *)(PTR_DAT_04bc2a20 + uVar8 * 4) >> (ulong)(pbVar10[0x26461] & 0x1f) & 1) != 0))
        {
          FUN_020fcb1c(local_118,pbVar10 + 0x26460);
          pbVar10 = (byte *)(*(long *)(lVar16 + 0x10) + *(long *)(lVar16 + 8));
        }
        uVar8 = (ulong)pbVar10[0x39690];
        if (((uVar8 < 0x23) && (pbVar10[0x39691] <= (byte)PTR_DAT_04bc27f0[uVar8])) &&
           ((*(uint *)(PTR_DAT_04bc2a20 + uVar8 * 4) >> (ulong)(pbVar10[0x39691] & 0x1f) & 1) != 0))
        {
          FUN_020fcb1c(local_118,pbVar10 + 0x39690);
          pbVar10 = (byte *)(*(long *)(lVar16 + 0x10) + *(long *)(lVar16 + 8));
        }
        uVar8 = (ulong)pbVar10[0x4c8c0];
        if (((uVar8 < 0x23) && (pbVar10[0x4c8c1] <= (byte)PTR_DAT_04bc27f0[uVar8])) &&
           ((*(uint *)(PTR_DAT_04bc2a20 + uVar8 * 4) >> (ulong)(pbVar10[0x4c8c1] & 0x1f) & 1) != 0))
        {
          FUN_020fcb1c(local_118,pbVar10 + 0x4c8c0);
          pbVar10 = (byte *)(*(long *)(lVar16 + 0x10) + *(long *)(lVar16 + 8));
        }
        uVar8 = (ulong)pbVar10[0x5faf0];
        if (((uVar8 < 0x23) && (pbVar10[0x5faf1] <= (byte)PTR_DAT_04bc27f0[uVar8])) &&
           ((*(uint *)(PTR_DAT_04bc2a20 + uVar8 * 4) >> (ulong)(pbVar10[0x5faf1] & 0x1f) & 1) != 0))
        {
          FUN_020fcb1c(local_118,pbVar10 + 0x5faf0);
          pbVar10 = (byte *)(*(long *)(lVar16 + 0x10) + *(long *)(lVar16 + 8));
        }
        uVar8 = (ulong)pbVar10[0x72d20];
        if (((uVar8 < 0x23) && (pbVar10[0x72d21] <= (byte)PTR_DAT_04bc27f0[uVar8])) &&
           ((*(uint *)(PTR_DAT_04bc2a20 + uVar8 * 4) >> (ulong)(pbVar10[0x72d21] & 0x1f) & 1) != 0))
        {
          FUN_020fcb1c(local_118,pbVar10 + 0x72d20);
          pbVar10 = (byte *)(*(long *)(lVar16 + 0x10) + *(long *)(lVar16 + 8));
        }
        uVar8 = (ulong)pbVar10[0x85f50];
        if (((uVar8 < 0x23) && (pbVar10[0x85f51] <= (byte)PTR_DAT_04bc27f0[uVar8])) &&
           ((*(uint *)(PTR_DAT_04bc2a20 + uVar8 * 4) >> (ulong)(pbVar10[0x85f51] & 0x1f) & 1) != 0))
        {
          FUN_020fcb1c(local_118,pbVar10 + 0x85f50);
          pbVar10 = (byte *)(*(long *)(lVar16 + 0x10) + *(long *)(lVar16 + 8));
        }
        uVar8 = (ulong)pbVar10[0x99180];
        if (((uVar8 < 0x23) && (pbVar10[0x99181] <= (byte)PTR_DAT_04bc27f0[uVar8])) &&
           ((*(uint *)(PTR_DAT_04bc2a20 + uVar8 * 4) >> (ulong)(pbVar10[0x99181] & 0x1f) & 1) != 0))
        {
          FUN_020fcb1c(local_118,pbVar10 + 0x99180);
          pbVar10 = (byte *)(*(long *)(lVar16 + 0x10) + *(long *)(lVar16 + 8));
        }
        uVar8 = (ulong)pbVar10[0xac3b0];
        if (((uVar8 < 0x23) && (pbVar10[0xac3b1] <= (byte)PTR_DAT_04bc27f0[uVar8])) &&
           ((*(uint *)(PTR_DAT_04bc2a20 + uVar8 * 4) >> (ulong)(pbVar10[0xac3b1] & 0x1f) & 1) != 0))
        {
          FUN_020fcb1c(local_118,pbVar10 + 0xac3b0);
          pbVar10 = (byte *)(*(long *)(lVar16 + 0x10) + *(long *)(lVar16 + 8));
        }
        uVar8 = (ulong)pbVar10[0xbf670];
        if (((uVar8 < 0x23) && (pbVar10[0xbf671] <= (byte)PTR_DAT_04bc27f0[uVar8])) &&
           ((*(uint *)(PTR_DAT_04bc2a20 + uVar8 * 4) >> (ulong)(pbVar10[0xbf671] & 0x1f) & 1) != 0))
        {
          FUN_020fcb1c(local_118,pbVar10 + 0xbf670);
          pbVar10 = (byte *)(*(long *)(lVar16 + 0x10) + *(long *)(lVar16 + 8));
        }
        uVar8 = (ulong)pbVar10[0xd28a0];
        if (((uVar8 < 0x23) && (pbVar10[0xd28a1] <= (byte)PTR_DAT_04bc27f0[uVar8])) &&
           ((*(uint *)(PTR_DAT_04bc2a20 + uVar8 * 4) >> (ulong)(pbVar10[0xd28a1] & 0x1f) & 1) != 0))
        {
          FUN_020fcb1c(local_118,pbVar10 + 0xd28a0);
          pbVar10 = (byte *)(*(long *)(lVar16 + 0x10) + *(long *)(lVar16 + 8));
        }
        uVar8 = (ulong)pbVar10[0xe5ad0];
        if (((uVar8 < 0x23) && (pbVar10[0xe5ad1] <= (byte)PTR_DAT_04bc27f0[uVar8])) &&
           ((*(uint *)(PTR_DAT_04bc2a20 + uVar8 * 4) >> (ulong)(pbVar10[0xe5ad1] & 0x1f) & 1) != 0))
        {
          FUN_020fcb1c(local_118,pbVar10 + 0xe5ad0);
          pbVar10 = (byte *)(*(long *)(lVar16 + 0x10) + *(long *)(lVar16 + 8));
        }
        uVar8 = (ulong)pbVar10[0xf8d00];
        if (((uVar8 < 0x23) && (pbVar10[0xf8d01] <= (byte)PTR_DAT_04bc27f0[uVar8])) &&
           ((*(uint *)(PTR_DAT_04bc2a20 + uVar8 * 4) >> (ulong)(pbVar10[0xf8d01] & 0x1f) & 1) != 0))
        {
          FUN_020fcb1c(local_118);
        }
        if ((*(long **)(lVar7 + 0x28) == (long *)0x0) ||
           (puVar14 = (undefined8 *)**(long **)(lVar7 + 0x28), puVar14 == (undefined8 *)0x0)) {
          uVar8 = 0;
        }
        else {
          uVar8 = (**(code **)*puVar14)();
          uVar8 = uVar8 & 0xffffffff;
        }
        lVar13 = *(long *)(lVar7 + 8);
        lVar15 = *(long *)(lVar7 + 0x10);
        uVar9 = FUN_027c5f10();
        if ((uVar9 & 1) == 0) {
          local_88 = (undefined **)CONCAT53(local_88._3_5_,0x80023);
          uVar1 = *(ushort *)(lVar15 + lVar13);
          if ((byte)(uVar1 >> 8) < 0x23) {
            FUN_020fd218(&local_88,uVar1 >> 8,uVar1 & 0xff);
          }
        }
        else {
          local_88 = (undefined **)CONCAT53(local_88._3_5_,*(undefined3 *)PTR_DAT_04bb9cf0);
        }
        uVar9 = (ulong)local_88;
        uVar1 = (ushort)local_88;
        if ((((uVar8 & 1) != 0) && (*(long *)(lVar7 + 0x28) != 0)) &&
           (puVar14 = *(undefined8 **)(*(long *)(lVar7 + 0x28) + 8), puVar14 != (undefined8 *)0x0))
        {
          (**(code **)*puVar14)();
        }
        if ((uVar1 & 0xff) < 0x23) {
          uVar11 = (uint)(uVar1 >> 8);
          if ((uVar11 <= (byte)PTR_DAT_04bc27f0[uVar9 & 0xff]) &&
             ((*(uint *)(PTR_DAT_04bc2a20 + (uVar9 & 0xff) * 4) >> (ulong)(uVar11 & 0x1f) & 1) != 0)
             ) {
            FUN_020fcb1c(local_118,&local_88);
          }
        }
        if ((((uVar6 & 1) != 0) && (*(long *)(lVar16 + 0x28) != 0)) &&
           (puVar14 = *(undefined8 **)(*(long *)(lVar16 + 0x28) + 8), puVar14 != (undefined8 *)0x0))
        {
          (**(code **)*puVar14)();
        }
      }
    }
  }
LAB_021b2f9c:
  local_88 = &PTR_LAB_04a767b0;
  puStack_80 = local_118;
  FUN_016d43e0(&local_88);
  uVar11 = 0;
  uVar6 = 0;
  local_88 = (undefined **)0x0;
  do {
    uVar20 = *(uint *)((long)local_118 + (-(uVar6 >> 0x1f) & 0xfffffffc00000000 | uVar6 << 2));
    uVar20 = uVar20 - (uVar20 >> 1 & 0x55555555);
    uVar20 = (uVar20 >> 2 & 0x33333333) + (uVar20 & 0x33333333);
    uVar20 = uVar20 + (uVar20 >> 4) & 0xf0f0f0f;
    uVar20 = uVar20 + (uVar20 >> 8);
    if ((uVar20 + (uVar20 >> 0x10) & 0x3f) != 0) {
      local_118[(ulong)(uVar11 >> 5) + 0x24] =
           local_118[(ulong)(uVar11 >> 5) + 0x24] | 1 << (ulong)(uVar11 & 0x1f);
    }
    uVar11 = uVar11 + 1;
    uVar6 = (ulong)((int)uVar6 + 1);
  } while (uVar11 != 0x23);
  uVar12 = (uint)local_88;
  uVar3 = local_88._4_4_;
  uVar11 = (uint)local_88 - ((uint)local_88 >> 1 & 0x55555555);
  uVar5 = local_88._4_4_ - (local_88._4_4_ >> 1 & 0x55555555);
  uVar11 = (uVar11 >> 2 & 0x33333333) + (uVar11 & 0x33333333);
  uVar11 = uVar11 + (uVar11 >> 4) & 0xf0f0f0f;
  uVar11 = uVar11 + (uVar11 >> 8);
  uVar20 = uVar11 + (uVar11 >> 0x10) & 0x3f;
  uVar11 = (uVar5 >> 2 & 0x33333333) + (uVar5 & 0x33333333);
  uVar11 = uVar11 + (uVar11 >> 4) & 0xf0f0f0f;
  uVar11 = uVar11 + (uVar11 >> 8);
  uVar11 = uVar11 + (uVar11 >> 0x10) & 0x3f;
  if (uVar11 + uVar20 == 0) {
    return;
  }
  uVar5 = nn::os::GetSystemTick();
  uVar2 = (uVar5 ^ uVar5 >> 0x1e) * 0x6c078965 + 1;
  uVar5 = uVar2 ^ uVar2 * 0x800;
  uVar2 = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 2;
  uVar18 = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 3;
  uVar18 = (uVar18 ^ uVar18 >> 0x1e) * 0x6c078965 + 4;
  uVar11 = uVar11 + uVar20;
  uVar5 = uVar5 >> 8 ^ uVar18 >> 0x13 ^ uVar5 ^ uVar18;
  uVar18 = (uint)((ulong)uVar5 * (ulong)uVar11 >> 0x20);
  if (uVar18 < uVar20) {
    iVar17 = 0;
    uVar20 = 0;
  }
  else {
    if (uVar11 <= uVar18) {
      local_64 = 0xffffffff;
      goto LAB_021b3184;
    }
    iVar17 = 0x20;
    uVar12 = uVar3;
  }
  if (uVar12 == 0) {
    local_64 = 0xffffffff;
  }
  else {
    iVar19 = (uVar18 - uVar20) + 2;
    local_64 = 0xffffffff;
    do {
      iVar19 = iVar19 + -1;
      if (iVar19 < 2) {
        uVar11 = uVar12 - 1 & (uVar12 ^ 0xffffffff);
        uVar11 = uVar11 - (uVar11 >> 1 & 0x55555555);
        uVar11 = (uVar11 >> 2 & 0x33333333) + (uVar11 & 0x33333333);
        uVar11 = uVar11 + (uVar11 >> 4) & 0xf0f0f0f;
        uVar11 = uVar11 + (uVar11 >> 8);
        local_64 = uVar11 + (uVar11 >> 0x10) & 0x3f;
        break;
      }
      uVar12 = uVar12 - 1 & uVar12;
    } while (uVar12 != 0);
  }
  local_64 = local_64 + iVar17;
LAB_021b3184:
  uVar11 = 0xffffffff;
  uVar6 = (ulong)local_64;
  uVar8 = (ulong)local_64;
  if (0x22 < local_64) {
    uVar6 = 0;
    uVar8 = 0;
  }
  uVar20 = local_118[uVar6];
  if ((uVar20 != 0) &&
     (uVar2 = uVar2 ^ uVar2 * 0x800,
     uVar12 = local_118[uVar8] - (local_118[uVar8] >> 1 & 0x55555555),
     uVar12 = (uVar12 >> 2 & 0x33333333) + (uVar12 & 0x33333333),
     uVar3 = uVar20 - (uVar20 >> 1 & 0x55555555), uVar12 = uVar12 + (uVar12 >> 4) & 0xf0f0f0f,
     uVar12 = uVar12 + (uVar12 >> 8), uVar3 = (uVar3 >> 2 & 0x33333333) + (uVar3 & 0x33333333),
     uVar3 = uVar3 + (uVar3 >> 4) & 0xf0f0f0f, uVar3 = uVar3 + (uVar3 >> 8),
     uVar12 = (uint)((ulong)(uVar12 + (uVar12 >> 0x10) & 0x3f) *
                     (ulong)(uVar2 >> 8 ^ uVar5 >> 0x13 ^ uVar2 ^ uVar5) >> 0x20),
     uVar12 < (uVar3 + (uVar3 >> 0x10) & 0x3f))) {
    iVar17 = uVar12 + 2;
    do {
      iVar17 = iVar17 + -1;
      if (iVar17 < 2) {
        uVar11 = uVar20 - 1 & (uVar20 ^ 0xffffffff);
        uVar11 = uVar11 - (uVar11 >> 1 & 0x55555555);
        uVar11 = (uVar11 >> 2 & 0x33333333) + (uVar11 & 0x33333333);
        uVar11 = uVar11 + (uVar11 >> 4) & 0xf0f0f0f;
        uVar11 = uVar11 + (uVar11 >> 8);
        uVar11 = uVar11 + (uVar11 >> 0x10) & 0x3f;
        break;
      }
      uVar20 = uVar20 - 1 & uVar20;
    } while (uVar20 != 0);
  }
  FUN_020fd218((undefined2 *)(param_1 + 0x55d0d),(ulong)local_64,uVar11);
  return;
}


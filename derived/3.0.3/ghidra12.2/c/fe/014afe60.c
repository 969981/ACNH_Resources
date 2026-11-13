
/* WARNING: Removing unreachable block (ram,0x014b0228) */
/* WARNING: Removing unreachable block (ram,0x014b0238) */

void FUN_014afe60(long param_1,byte *param_2,undefined4 *param_3,undefined8 param_4)

{
  undefined2 *puVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined1 uVar9;
  uint uVar10;
  int iVar11;
  ushort *puVar12;
  undefined8 *puVar13;
  int *piVar14;
  long lVar15;
  undefined1 *puVar16;
  long lVar17;
  ushort uVar18;
  long *plVar19;
  long lVar20;
  undefined4 uVar21;
  undefined2 uVar22;
  ulong uVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  uint local_174c;
  undefined4 local_1748;
  undefined4 uStack_1744;
  undefined *local_1740;
  undefined8 local_1738;
  undefined1 auStack_172c [2];
  undefined1 auStack_172a [2];
  undefined *local_1728;
  undefined2 local_1720;
  undefined1 uStack_171e;
  undefined1 uStack_171d;
  undefined4 uStack_171c;
  ulong local_1718;
  undefined4 local_88;
  undefined4 local_84;
  undefined *local_80;
  undefined8 local_78;
  long local_70;
  
  puVar8 = PTR_DAT_04bb43c0;
  uVar22 = *(undefined2 *)param_3;
  uVar24 = *(undefined1 *)((long)param_3 + 2);
  uVar25 = *(undefined1 *)((long)param_3 + 3);
  local_88 = *param_3;
  uVar21 = param_3[1];
  local_1728 = PTR_DAT_04bc0510 + 0x10;
  local_1718 = 0;
  lVar20 = *(long *)PTR_DAT_04bb43c0;
  local_1720 = uVar22;
  uStack_171e = uVar24;
  uStack_171d = uVar25;
  uStack_171c = uVar21;
  local_84 = uVar21;
  uVar10 = FUN_0277d6c4(&local_1720);
  if (*(long *)puVar8 != 0) {
    lVar20 = *(long *)(lVar20 + 0x57e58);
    uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar20 + 0x1f8);
    if ((uVar10 < *(uint *)(lVar20 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar20 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
      lVar20 = *(long *)PTR_DAT_04bc0428;
      uVar10 = FUN_0277d6c4(&local_88);
      uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar20 + 0x1f8);
      if ((uVar10 < *(uint *)(lVar20 + 0x1d8)) &&
         (lVar20 = *(long *)(*(long *)(lVar20 + 0x1e0) + (long)(int)uVar10 * 8), lVar20 != 0)) {
        local_1718 = lVar20;
      }
    }
  }
  iVar11 = FUN_01afcfa0(&local_1728);
  if (((iVar11 == 0) ||
      (puVar12 = (ushort *)FUN_01afd600(&local_1728), puVar7 = PTR_DAT_04bb3128,
      puVar12 == (ushort *)0x0)) || ((*puVar12 & 0x18) != 0x10)) goto LAB_014b01a4;
  if (((*PTR_DAT_04bb3128 & 1) == 0) &&
     (iVar11 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar11 != 0)) {
    FUN_00706e58(PTR_DAT_04bb3120);
    __cxa_guard_release(PTR_DAT_04bb3128);
  }
  puVar6 = PTR_DAT_04bb3120;
  if (0 < (int)*(uint *)PTR_DAT_04bb3120) {
    uVar23 = 0;
    do {
      if (*(int *)(*(long *)(PTR_DAT_04bb3120 + 8) + uVar23 * 4) == 0x1a) goto LAB_014affdc;
      uVar23 = uVar23 + 1;
    } while (*(uint *)PTR_DAT_04bb3120 != uVar23);
  }
  uVar23 = 0;
LAB_014affdc:
  bVar4 = *param_2;
  local_1740 = (undefined *)((ulong)local_1740 & 0xffffffffffff0000);
  uVar18 = bVar4 & 0x7f;
  if (((*puVar7 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar11 != 0)) {
    FUN_00706e58(PTR_DAT_04bb3120);
    __cxa_guard_release(PTR_DAT_04bb3128);
  }
  uVar10 = (uint)uVar23;
  if (*(uint *)puVar6 <= uVar10) {
    uVar10 = 0;
  }
  if (7 < bVar4) {
    uVar18 = 0x7f;
  }
  local_1740 = (undefined *)
               (CONCAT62(local_1740._2_6_,
                         uVar18 | (ushort)(*(int *)(*(long *)(puVar6 + 8) + (long)(int)uVar10 * 4)
                                          << 0xb)) | 0x100);
  FUN_007ef010(auStack_172a,&local_1740);
  FUN_007e4920(&local_1728,auStack_172a);
  lVar20 = CONCAT44(uStack_171c,CONCAT13(uStack_171d,CONCAT12(uStack_171e,local_1720)));
  lVar17 = *(long *)(lVar20 + 0x28);
  if (lVar17 == 0) {
    local_174c = 0;
  }
  else {
    if (*(undefined8 **)(lVar17 + 0x10) == (undefined8 *)0x0) {
      local_174c = 0;
    }
    else {
      local_174c = (**(code **)**(undefined8 **)(lVar17 + 0x10))();
      lVar17 = *(long *)(lVar20 + 0x28);
      if (lVar17 == 0) goto LAB_014b0098;
    }
    plVar19 = *(long **)(lVar17 + 0x20);
    if (plVar19 != (long *)0x0) {
      local_80 = *(undefined **)(lVar20 + 8);
      local_78 = *(undefined8 *)(lVar20 + 0x10);
      local_70 = 0x2a8;
      (**(code **)(*plVar19 + 0x20))(plVar19,&local_80);
    }
  }
LAB_014b0098:
  FUN_027c1640(*(long *)(lVar20 + 0x10) + *(long *)(lVar20 + 8),param_4);
  lVar17 = *(long *)puVar8;
  local_70 = 0;
  local_78 = CONCAT44(local_84,local_88);
  local_80 = PTR_DAT_04bc0510 + 0x10;
  uVar10 = FUN_0277d6c4(&local_78);
  if (*(long *)puVar8 != 0) {
    lVar17 = *(long *)(lVar17 + 0x57e58);
    uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
    if ((uVar10 < *(uint *)(lVar17 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
      lVar17 = *(long *)PTR_DAT_04bc0428;
      uVar10 = FUN_0277d6c4(&local_88);
      uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
      if ((uVar10 < *(uint *)(lVar17 + 0x1d8)) &&
         (lVar17 = *(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar10 * 8), lVar17 != 0)) {
        local_70 = lVar17;
      }
    }
  }
  FUN_007ef010(auStack_172c,&local_1740);
  FUN_01afde50(&local_80,auStack_172c);
  uVar22 = (undefined2)local_78;
  uVar24 = local_78._2_1_;
  uVar25 = local_78._3_1_;
  uVar21 = local_78._4_4_;
  local_88 = (undefined4)local_78;
  local_84 = local_78._4_4_;
  if ((((local_174c & 1) != 0) && (*(long *)(lVar20 + 0x28) != 0)) &&
     (puVar13 = *(undefined8 **)(*(long *)(lVar20 + 0x28) + 0x18), puVar13 != (undefined8 *)0x0)) {
    (**(code **)*puVar13)();
  }
LAB_014b01a4:
  if ((ulong)*param_2 < 8) {
    puVar1 = (undefined2 *)(param_1 + (ulong)*param_2 * 8);
    *puVar1 = uVar22;
    *(undefined1 *)(puVar1 + 1) = uVar24;
    *(undefined1 *)((long)puVar1 + 3) = uVar25;
    *(undefined4 *)(puVar1 + 2) = uVar21;
    uStack_171c = *(undefined4 *)(PTR_DAT_04bbbf90 + 0xd0);
    local_1720 = 0x32;
    uStack_171e = 0;
    uStack_171d = 0;
    uVar9 = FUN_017baf44();
    puVar7 = PTR_DAT_04bb4948;
    local_1718 = CONCAT71(local_1718._1_7_,uVar9) & 0xffffffffffffff01;
    local_1728 = PTR_DAT_04bb5438 + 0x10;
    lVar20 = *(long *)PTR_DAT_04bb27a8;
    local_80 = (undefined *)CONCAT44(local_80._4_4_,0x32);
    if (*(long *)(lVar20 + 0x1c0) != 0) {
      bVar5 = *param_2;
      uVar9 = 0;
      local_1740 = PTR_DAT_04bb2010 + 0x10;
      local_1738 = 0;
      bVar4 = bVar5;
      if (7 < bVar5) {
        bVar4 = 0xff;
      }
      lVar17 = *(long *)PTR_DAT_04bb4948;
      if ((lVar17 != 0) && (lVar20 != 0)) {
        if ((*(ushort *)(lVar20 + 0x4b68) & 1) == 0) {
          uVar9 = 0;
        }
        else {
          iVar11 = *(int *)(lVar20 + 0x4b6c);
          iVar2 = *(int *)(lVar20 + 0x4b70);
          piVar14 = (int *)(**(code **)(*(long *)(lVar17 + 0x218) + 0xf0))(lVar17 + 0x218);
          uVar9 = 0;
          iVar11 = *piVar14 + iVar11 * 0x20;
          iVar2 = piVar14[1] + iVar2 * 0x20;
          local_1738 = CONCAT44(iVar2,iVar11);
          if (bVar5 < 8) {
            lVar20 = *(long *)puVar7;
            if ((int)(char)bVar4 < *(int *)(lVar20 + 0x3d8)) {
              lVar17 = (ulong)(uint)(int)(char)bVar4 * 8;
              plVar19 = (long *)(*(long *)(*(long *)(lVar20 + 0x3e0) + lVar17) + 0x30);
              piVar14 = (int *)(**(code **)(*plVar19 + 0xf0))(plVar19);
              iVar3 = *piVar14;
              lVar15 = (**(code **)(*plVar19 + 0xf0))(plVar19);
              local_1738 = CONCAT44(iVar2 + *(int *)(lVar15 + 4),iVar11 + iVar3);
              puVar16 = (undefined1 *)
                        (**(code **)(*(long *)(*(long *)(*(long *)(lVar20 + 0x3e0) + lVar17) + 0x68)
                                    + 0xf0))();
              uVar9 = *puVar16;
            }
          }
        }
      }
      lVar20 = *(long *)puVar8;
      local_78._0_4_ = CONCAT13(uVar25,CONCAT12(uVar24,uVar22));
      local_80 = PTR_DAT_04bc0510 + 0x10;
      local_78 = CONCAT44(uVar21,(undefined4)local_78);
      local_70 = 0;
      uVar10 = FUN_0277d6c4(&local_78);
      if (*(long *)puVar8 != 0) {
        lVar20 = *(long *)(lVar20 + 0x57e58);
        uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar20 + 0x1f8);
        if ((uVar10 < *(uint *)(lVar20 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar20 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
          lVar20 = *(long *)PTR_DAT_04bc0428;
          uVar10 = FUN_0277d6c4(&local_88);
          uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar20 + 0x1f8);
          if ((uVar10 < *(uint *)(lVar20 + 0x1d8)) &&
             (lVar20 = *(long *)(*(long *)(lVar20 + 0x1e0) + (long)(int)uVar10 * 8), lVar20 != 0)) {
            local_70 = lVar20;
          }
        }
      }
      FUN_01afade0(&local_80,uVar9);
      local_1748 = (undefined4)local_78;
      uStack_1744 = local_78._4_4_;
      FUN_01a50970(&local_1728,0,&local_1748,&local_1740);
      FUN_014fd424(&local_1728,0,&local_1740,0);
    }
  }
  return;
}



void FUN_017fd540(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined2 *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  long lVar14;
  ulong uVar15;
  long *plVar16;
  undefined8 *puVar17;
  long *plVar18;
  int iVar19;
  long lVar20;
  long lVar21;
  int iVar22;
  undefined8 local_100;
  undefined *puStack_f8;
  uint local_f0;
  int iStack_ec;
  undefined *local_e8;
  undefined *puStack_e0;
  undefined8 local_d8;
  undefined *local_d0;
  undefined8 local_c8;
  undefined *local_c0;
  undefined2 local_b8;
  undefined1 local_b6;
  undefined1 local_b5;
  undefined4 local_b4;
  long local_b0;
  undefined2 local_a8;
  undefined1 local_a6;
  undefined1 local_a5;
  undefined4 local_a4;
  undefined *local_a0;
  undefined2 local_98;
  undefined1 local_96;
  undefined1 local_95;
  undefined4 local_94;
  long local_90;
  undefined2 local_88;
  undefined1 local_86;
  undefined1 local_85;
  undefined4 local_84;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  if (((*(short *)(param_1 + 0x1b4) != -2) && (*(long *)PTR_DAT_04bb46b0 != 0)) &&
     (lVar14 = FUN_026f480c(), lVar14 != 0)) {
    plVar4 = (long *)(lVar14 + 0xdf90);
    lVar21 = 0;
    puVar1 = PTR_DAT_04bc0510 + 0x10;
    puVar2 = PTR_DAT_04bbc1a0 + 0x10;
    puVar3 = PTR_DAT_04bb2010 + 0x10;
    plVar16 = (long *)PTR_DAT_04bb43c0;
    do {
      local_90 = 0;
      local_98 = *(undefined2 *)(param_1 + 0x1b4);
      local_96 = *(undefined1 *)(param_1 + 0x1b6);
      local_95 = *(undefined1 *)(param_1 + 0x1b7);
      local_94 = *(undefined4 *)(param_1 + 0x1b8);
      lVar20 = *plVar16;
      local_a0 = puVar1;
      local_88 = local_98;
      local_86 = local_96;
      local_85 = local_95;
      local_84 = local_94;
      uVar9 = FUN_0277d6c4(&local_98);
      if (*plVar16 != 0) {
        lVar20 = *(long *)(lVar20 + 0x57e58);
        uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar20 + 0x1f8);
        if ((uVar9 < *(uint *)(lVar20 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar20 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) {
          lVar20 = *(long *)PTR_DAT_04bc0428;
          uVar9 = FUN_0277d6c4(&local_88);
          uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar20 + 0x1f8);
          if ((uVar9 < *(uint *)(lVar20 + 0x1d8)) &&
             (lVar20 = *(long *)(*(long *)(lVar20 + 0x1e0) + (long)(int)uVar9 * 8), lVar20 != 0)) {
            local_90 = lVar20;
          }
        }
      }
      iVar8 = DAT_05293db4;
      iVar22 = DAT_05293db0;
      iVar6 = (&DAT_052945dc)[lVar21 * 3];
      iVar19 = (&DAT_052945e0)[lVar21 * 3];
      FUN_01afade0(&local_a0,(&DAT_052945d8)[lVar21 * 3]);
      local_b0 = 0;
      local_c0 = PTR_DAT_04bc0510 + 0x10;
      lVar20 = *plVar16;
      local_a6 = local_96;
      local_a5 = local_95;
      local_a4 = local_94;
      local_b6 = local_96;
      local_b5 = local_95;
      local_b4 = local_94;
      local_a8 = local_98;
      local_b8 = local_98;
      uVar9 = FUN_0277d6c4(&local_b8);
      if (*plVar16 != 0) {
        lVar20 = *(long *)(lVar20 + 0x57e58);
        uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar20 + 0x1f8);
        if ((uVar9 < *(uint *)(lVar20 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar20 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) {
          lVar20 = *(long *)PTR_DAT_04bc0428;
          uVar9 = FUN_0277d6c4(&local_a8);
          uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar20 + 0x1f8);
          if ((uVar9 < *(uint *)(lVar20 + 0x1d8)) &&
             (lVar20 = *(long *)(*(long *)(lVar20 + 0x1e0) + (long)(int)uVar9 * 8), lVar20 != 0)) {
            local_b0 = lVar20;
          }
        }
      }
      uVar9 = iVar6 - iVar22;
      uVar7 = iVar19 - iVar8;
      local_d8 = 0;
      local_c8 = 0;
      local_e8 = puVar2;
      puStack_e0 = puVar3;
      local_d0 = puVar3;
      FUN_01afb480(&local_c0,&local_e8);
      iVar6 = local_c8._4_4_ + 1;
      if (iVar6 != local_d8._4_4_) {
        iVar8 = (int)local_d8;
        iVar19 = local_d8._4_4_;
        iVar22 = (int)local_d8;
        do {
          puStack_f8 = PTR_DAT_04bb2010 + 0x10;
          local_100 = 0xfffe;
          local_f0 = iVar22;
          iStack_ec = iVar19;
          FUN_0277d4ac(&local_100);
          FUN_0277eec0(&local_a8,&local_100,&puStack_f8);
          uVar12 = iVar22 + uVar9;
          uVar13 = iVar19 + uVar7;
          local_f0 = uVar12;
          uVar10 = (**(code **)(*plVar4 + 0x18))(plVar4);
          uVar11 = (**(code **)(*plVar4 + 0x20))(plVar4);
          lVar20 = *(long *)(lVar14 + 0xdfb8);
          if (uVar10 <= uVar12) {
            uVar12 = 0;
          }
          if (uVar11 <= uVar13) {
            uVar13 = 0;
          }
          if (lVar20 == 0) {
            uVar15 = 0;
          }
          else {
            if (*(undefined8 **)(lVar20 + 0x10) == (undefined8 *)0x0) {
              uVar15 = 0;
              lVar20 = *(long *)(lVar20 + 0x20);
            }
            else {
              uVar15 = (**(code **)**(undefined8 **)(lVar20 + 0x10))();
              uVar15 = uVar15 & 0xffffffff;
              if (*(long *)(lVar14 + 0xdfb8) == 0) goto LAB_017fd8ec;
              lVar20 = *(long *)(*(long *)(lVar14 + 0xdfb8) + 0x20);
            }
            if (lVar20 != 0) {
              local_80 = *(undefined8 *)(lVar14 + 0xdf98);
              local_78 = (**(code **)(*plVar4 + 0x28))(plVar4,uVar12,uVar13);
              uStack_70 = 8;
              plVar16 = *(long **)(*(long *)(lVar14 + 0xdfb8) + 0x20);
              (**(code **)(*plVar16 + 0x20))(plVar16,&local_80);
            }
          }
LAB_017fd8ec:
          lVar20 = (**(code **)(*plVar4 + 0x28))(plVar4,uVar12,uVar13);
          puVar5 = (undefined2 *)(lVar20 + *(long *)(lVar14 + 0xdf98));
          *puVar5 = (undefined2)local_100;
          *(undefined1 *)(puVar5 + 1) = local_100._2_1_;
          *(undefined1 *)((long)puVar5 + 3) = local_100._3_1_;
          *(undefined4 *)(puVar5 + 2) = local_100._4_4_;
          if ((((uVar15 & 1) != 0) && (*(long *)(lVar14 + 0xdfb8) != 0)) &&
             (puVar17 = *(undefined8 **)(*(long *)(lVar14 + 0xdfb8) + 0x18),
             puVar17 != (undefined8 *)0x0)) {
            (**(code **)*puVar17)();
          }
          if (iVar22 < (int)local_c8) {
            iVar22 = iVar22 + 1;
          }
          else {
            iVar19 = iVar19 + 1;
            iVar22 = (int)local_d8;
          }
        } while ((iVar8 != iVar22) || (iVar6 != iVar19));
      }
      uVar12 = (**(code **)(*plVar4 + 0x18))(plVar4);
      uVar13 = (**(code **)(*plVar4 + 0x20))(plVar4);
      lVar20 = *(long *)(lVar14 + 0xdfb8);
      if (uVar12 <= uVar9) {
        uVar9 = 0;
      }
      if (uVar13 <= uVar7) {
        uVar7 = 0;
      }
      plVar16 = (long *)PTR_DAT_04bb43c0;
      if (lVar20 == 0) {
        uVar15 = 0;
      }
      else {
        if (*(undefined8 **)(lVar20 + 0x10) == (undefined8 *)0x0) {
          uVar15 = 0;
          lVar20 = *(long *)(lVar20 + 0x20);
        }
        else {
          uVar15 = (**(code **)**(undefined8 **)(lVar20 + 0x10))();
          uVar15 = uVar15 & 0xffffffff;
          plVar16 = (long *)PTR_DAT_04bb43c0;
          if (*(long *)(lVar14 + 0xdfb8) == 0) goto LAB_017fda5c;
          lVar20 = *(long *)(*(long *)(lVar14 + 0xdfb8) + 0x20);
        }
        PTR_DAT_04bb43c0 = (undefined *)plVar16;
        if (lVar20 != 0) {
          local_80 = *(undefined8 *)(lVar14 + 0xdf98);
          local_78 = (**(code **)(*plVar4 + 0x28))(plVar4,uVar9,uVar7);
          uStack_70 = 8;
          plVar18 = *(long **)(*(long *)(lVar14 + 0xdfb8) + 0x20);
          (**(code **)(*plVar18 + 0x20))(plVar18,&local_80);
        }
      }
LAB_017fda5c:
      lVar20 = (**(code **)(*plVar4 + 0x28))(plVar4,uVar9,uVar7);
      puVar5 = (undefined2 *)(lVar20 + *(long *)(lVar14 + 0xdf98));
      *puVar5 = local_a8;
      *(undefined1 *)(puVar5 + 1) = local_a6;
      *(undefined1 *)((long)puVar5 + 3) = local_a5;
      *(undefined4 *)(puVar5 + 2) = local_a4;
      if ((((uVar15 & 1) != 0) && (*(long *)(lVar14 + 0xdfb8) != 0)) &&
         (puVar17 = *(undefined8 **)(*(long *)(lVar14 + 0xdfb8) + 0x18),
         puVar17 != (undefined8 *)0x0)) {
        (**(code **)*puVar17)();
      }
      lVar21 = lVar21 + 1;
    } while (lVar21 != 3);
  }
  return;
}


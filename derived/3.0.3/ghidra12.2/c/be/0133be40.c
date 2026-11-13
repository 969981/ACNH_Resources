
void FUN_0133be40(undefined8 param_1,long param_2,long param_3,int param_4,int param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined2 *puVar4;
  uint uVar5;
  int iVar6;
  byte bVar7;
  char cVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined8 *puVar13;
  int *piVar14;
  byte *pbVar15;
  ulong uVar16;
  char *pcVar17;
  long *plVar18;
  undefined **ppuVar19;
  ulong uVar20;
  uint uVar21;
  long lVar22;
  undefined8 uVar23;
  int iVar24;
  int iVar25;
  undefined *local_100;
  int local_f8;
  int iStack_f4;
  undefined2 local_f0;
  undefined2 local_ee;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined8 *puStack_e0;
  int local_d8;
  int iStack_d4;
  undefined *local_d0;
  undefined8 *puStack_c8;
  undefined8 local_c0;
  undefined8 *local_b8;
  undefined8 local_b0;
  undefined *local_a8;
  undefined **local_a0;
  undefined1 *puStack_98;
  long local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  uVar5 = *(uint *)(param_3 + 0x138);
  if (0 < (int)uVar5) {
    if (param_2 == 0) {
      uVar20 = 0;
      puVar1 = PTR_DAT_04bbc1d0 + 0x10;
      puVar2 = PTR_DAT_04bbc1a0 + 0x10;
      do {
        lVar22 = *(long *)(*(long *)(param_3 + 0x120) + uVar20 * 8);
        puVar13 = (undefined8 *)(**(code **)(*(long *)(lVar22 + 0x60) + 0xf0))();
        uVar23 = *puVar13;
        local_ee = 0;
        local_ec = 0;
        local_f0 = (undefined2)uVar23;
        FUN_0277d4ac(&local_f0);
        local_ee = (undefined2)((ulong)uVar23 >> 0x10);
        local_ec = (undefined4)((ulong)uVar23 >> 0x20);
        piVar14 = (int *)(**(code **)(*(long *)(lVar22 + 0x98) + 0xf0))();
        iVar6 = *piVar14 + param_4 * 0x20;
        piVar14 = (int *)(**(code **)(*(long *)(lVar22 + 200) + 0xf0))();
        iVar25 = *piVar14 + param_5 * 0x20;
        local_f8 = iVar6;
        iStack_f4 = iVar25;
        pcVar17 = (char *)(**(code **)(*(long *)(lVar22 + 0xf8) + 0xf0))((long *)(lVar22 + 0xf8));
        cVar8 = *pcVar17;
        uVar16 = FUN_0277da10(&local_f0);
        if ((uVar16 & 1) != 0) {
          ppuVar19 = &PTR_LAB_0498d640;
          local_a0 = &PTR_LAB_0498d640;
          if (cVar8 == '\0') {
            puStack_98 = &LAB_01367360;
LAB_0133c0b8:
            ppuVar19 = &PTR_FUN_0498b870;
            local_a0 = &PTR_FUN_0498b870;
          }
          else if (cVar8 == '\x01') {
            puStack_98 = &LAB_013673e0;
            goto LAB_0133c0b8;
          }
          local_a8 = puVar1;
          uVar16 = (*(code *)ppuVar19[2])(&local_a0);
          if ((uVar16 & 1) != 0) {
            local_c0 = 0;
            puStack_c8 = &DAT_048f9750;
            local_b8 = &DAT_048f9750;
            local_b0 = 0;
            local_d0 = puVar2;
            FUN_012e5518(&local_d0,&local_f0);
            iVar3 = (int)local_c0 + iVar6;
            iVar24 = local_c0._4_4_ + iVar25;
            local_c0 = CONCAT44(iVar24,iVar3);
            local_b0._4_4_ = local_b0._4_4_ + iVar25;
            local_b0 = CONCAT44(local_b0._4_4_,(int)local_b0 + iVar6);
            iVar6 = local_b0._4_4_ + 1;
            if (iVar6 != iVar24) {
              iVar25 = iVar3;
              do {
                iVar9 = DAT_05195878._4_4_;
                uVar21 = iVar25 - (int)DAT_05195878;
                plVar18 = (long *)(*(code *)*local_a0)(&local_a0);
                uVar10 = (**(code **)(*plVar18 + 0x18))();
                if (uVar21 < uVar10) {
                  uVar10 = iVar24 - iVar9;
                  plVar18 = (long *)(*(code *)*local_a0)(&local_a0);
                  uVar11 = (**(code **)(*plVar18 + 0x20))();
                  if (uVar10 < uVar11) {
                    plVar18 = (long *)(*(code *)*local_a0)(&local_a0);
                    uVar11 = (**(code **)(*plVar18 + 0x18))();
                    uVar12 = (**(code **)(*plVar18 + 0x20))(plVar18);
                    if (uVar11 <= uVar21) {
                      uVar21 = 0;
                    }
                    if (uVar12 <= uVar10) {
                      uVar10 = 0;
                    }
                    if ((plVar18[5] == 0) ||
                       (puVar13 = *(undefined8 **)(plVar18[5] + 0x10), puVar13 == (undefined8 *)0x0)
                       ) {
                      uVar16 = 0;
                    }
                    else {
                      uVar16 = (**(code **)*puVar13)();
                      uVar16 = uVar16 & 0xffffffff;
                    }
                    if ((iVar25 - local_f8 == 0) && (iVar24 == iStack_f4)) {
                      if ((plVar18[5] != 0) && (*(long *)(plVar18[5] + 0x20) != 0)) {
                        local_80 = plVar18[1];
                        local_78 = (**(code **)(*plVar18 + 0x28))(plVar18,uVar21,uVar10);
                        uStack_70 = 8;
                        (**(code **)(**(long **)(plVar18[5] + 0x20) + 0x20))
                                  (*(long **)(plVar18[5] + 0x20),&local_80);
                      }
                      lVar22 = (**(code **)(*plVar18 + 0x28))(plVar18,uVar21,uVar10);
                      puVar4 = (undefined2 *)(lVar22 + plVar18[1]);
                      *puVar4 = local_f0;
                      *(undefined1 *)(puVar4 + 1) = (undefined1)local_ee;
                      *(undefined1 *)((long)puVar4 + 3) = local_ee._1_1_;
                      *(undefined4 *)(puVar4 + 2) = local_ec;
                    }
                    else {
                      iStack_d4 = iVar24 - iStack_f4;
                      local_e8 = 0xfffe;
                      puStack_e0 = &DAT_048f9750;
                      local_d8 = iVar25 - local_f8;
                      FUN_0277d4ac(&local_e8);
                      FUN_0277eec0(&local_f0,&local_e8,&puStack_e0);
                      if ((plVar18[5] != 0) && (*(long *)(plVar18[5] + 0x20) != 0)) {
                        local_80 = plVar18[1];
                        local_78 = (**(code **)(*plVar18 + 0x28))(plVar18,uVar21,uVar10);
                        uStack_70 = 8;
                        (**(code **)(**(long **)(plVar18[5] + 0x20) + 0x20))
                                  (*(long **)(plVar18[5] + 0x20),&local_80);
                      }
                      lVar22 = (**(code **)(*plVar18 + 0x28))(plVar18,uVar21,uVar10);
                      puVar4 = (undefined2 *)(lVar22 + plVar18[1]);
                      *puVar4 = (undefined2)local_e8;
                      *(undefined1 *)(puVar4 + 1) = local_e8._2_1_;
                      *(undefined1 *)((long)puVar4 + 3) = local_e8._3_1_;
                      *(undefined4 *)(puVar4 + 2) = local_e8._4_4_;
                    }
                    if ((((uVar16 & 1) != 0) && (plVar18[5] != 0)) &&
                       (puVar13 = *(undefined8 **)(plVar18[5] + 0x18), puVar13 != (undefined8 *)0x0)
                       ) {
                      (**(code **)*puVar13)();
                    }
                  }
                }
                if (iVar25 < (int)local_b0) {
                  iVar25 = iVar25 + 1;
                }
                else {
                  iVar24 = iVar24 + 1;
                  iVar25 = (int)local_c0;
                }
              } while ((iVar3 != iVar25) || (iVar6 != iVar24));
            }
          }
        }
        uVar20 = uVar20 + 1;
      } while (uVar20 != uVar5);
    }
    else {
      uVar20 = 0;
      puVar1 = PTR_DAT_04bb2010 + 0x10;
      do {
        lVar22 = *(long *)(*(long *)(param_3 + 0x120) + uVar20 * 8);
        puVar13 = (undefined8 *)(**(code **)(*(long *)(lVar22 + 0x60) + 0xf0))();
        uVar23 = *puVar13;
        local_ee = 0;
        local_ec = 0;
        local_f0 = (undefined2)uVar23;
        FUN_0277d4ac(&local_f0);
        local_ee = (undefined2)((ulong)uVar23 >> 0x10);
        local_ec = (undefined4)((ulong)uVar23 >> 0x20);
        piVar14 = (int *)(**(code **)(*(long *)(lVar22 + 0x98) + 0xf0))();
        iVar6 = *piVar14;
        piVar14 = (int *)(**(code **)(*(long *)(lVar22 + 200) + 0xf0))();
        iStack_f4 = *piVar14 + param_5 * 0x20;
        local_100 = puVar1;
        local_f8 = iVar6 + param_4 * 0x20;
        pbVar15 = (byte *)(**(code **)(*(long *)(lVar22 + 0xf8) + 0xf0))((long *)(lVar22 + 0xf8));
        bVar7 = *pbVar15;
        uVar16 = FUN_0277da10(&local_f0);
        if ((uVar16 & 1) != 0) {
          uVar21 = (uint)bVar7;
          local_a8 = (undefined *)CONCAT44(local_a8._4_4_,uVar21);
          lVar22 = param_2 + 200 + (ulong)uVar21 * 0x10;
          if (7 < uVar21) {
            lVar22 = param_2 + 200;
          }
          if (*(long *)(lVar22 + 8) != 0) {
            FUN_012e5290(*(long *)(lVar22 + 8),&local_f0,&local_100);
          }
        }
        uVar20 = uVar20 + 1;
      } while (uVar5 != uVar20);
    }
  }
  return;
}


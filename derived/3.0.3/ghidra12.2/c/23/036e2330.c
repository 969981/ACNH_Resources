
/* WARNING: Removing unreachable block (ram,0x036e2c3c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_036e2330(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  uint *puVar3;
  ushort uVar4;
  char cVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  bool bVar8;
  undefined1 uVar9;
  int iVar10;
  undefined4 uVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  ulong uVar17;
  void *__dest;
  long lVar18;
  undefined *puVar19;
  ushort *puVar20;
  byte *pbVar21;
  byte *pbVar22;
  byte bVar23;
  long lVar24;
  undefined2 uVar25;
  uint uVar26;
  undefined8 uVar27;
  char *pcVar28;
  undefined *puVar29;
  long lVar30;
  uint local_80c;
  byte local_808 [4];
  byte local_804 [4];
  undefined8 local_800;
  char *local_7f8;
  undefined4 local_7f0;
  char local_7ec [7];
  undefined1 local_7e5;
  undefined8 local_7e0;
  byte *local_7d8;
  undefined8 local_7d0;
  undefined8 *puStack_7c8;
  undefined8 local_7c0;
  undefined8 **local_7b8;
  undefined8 *local_7b0;
  undefined8 local_7a8;
  char local_7a0 [1812];
  uint local_8c;
  byte local_88;
  byte bStack_87;
  undefined1 uStack_86;
  byte bStack_85;
  byte bStack_84;
  undefined1 uStack_83;
  undefined2 uStack_82;
  undefined2 local_80;
  undefined2 uStack_7e;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined1 local_74 [7];
  undefined1 local_6d;
  
  puVar29 = PTR_DAT_04bb2020;
  local_7e0 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
  local_7d8 = (byte *)0x40b2990;
  iVar10 = FUN_02758850(&local_7e0);
  if (iVar10 != 0) {
    local_80 = 0;
    local_88 = 0;
    bStack_87 = 0;
    uStack_86 = 0;
    bStack_85 = 0;
    bStack_84 = 0;
    uStack_83 = 0;
    uStack_82 = 0;
    local_7e0 = &PTR_LAB_04b46920;
    local_7d8 = &local_88;
    FUN_036f09c0(*(undefined8 *)PTR_DAT_04bb4970,&local_7e0);
  }
  puVar2 = PTR_DAT_04bb39b0;
  iVar10 = *(int *)(param_1 + 0x18);
  if (iVar10 == 3) {
    local_7e0 = *(undefined ***)(param_1 + 0x3a0);
    FUN_03769620(&local_7e0);
    if (((0 < *(int *)(param_1 + 0x14)) && (*(int *)(param_1 + 0x14) < 4)) ||
       ((*(byte *)(param_1 + 0x1a72) >> 2 & 1) != 0)) goto LAB_036e4280;
    lVar18 = *(long *)puVar2;
    pbVar22 = PTR_DAT_04bb32e0;
    if (lVar18 == 0) {
LAB_036e25c0:
      if (*pbVar22 < 8) goto LAB_036e2638;
LAB_036e25cc:
      if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_036e2630:
        pbVar22 = PTR_DAT_04bb5038;
        goto LAB_036e2638;
      }
      lVar18 = **(long **)PTR_DAT_04bb27d0;
      bVar23 = *(byte *)(lVar18 + 0x473);
      pbVar22 = PTR_DAT_04bb5038;
      if ((long)(char)bVar23 != 0xffffffffffffffff) {
        puVar3 = (uint *)(lVar18 + 0x48) + ((long)(char)bVar23 & 0xffffffffU) * 0x20;
        if (7 < bVar23) {
          puVar3 = (uint *)(lVar18 + 0x48);
        }
        if ((*puVar3 & 8) != 0) {
          pbVar22 = (byte *)(lVar18 + 0x471);
        }
      }
      local_88 = *pbVar22;
      if (7 < local_88) goto LAB_036e2630;
    }
    else {
      if (*(int *)(lVar18 + 0x15c) != 0) {
        pbVar22 = (byte *)(lVar18 + 0x158);
      }
      if (7 < *pbVar22) {
        if ((*(int *)(lVar18 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
          pbVar22 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
          goto LAB_036e25c0;
        }
        goto LAB_036e25cc;
      }
LAB_036e2638:
      local_88 = *pbVar22;
      if (7 < local_88) {
        local_88 = 0xff;
      }
    }
    FUN_01a20400(&local_88);
  }
  else if (iVar10 == 2) {
    FUN_037693c0();
    if (((0 < *(int *)(param_1 + 0x14)) && (*(int *)(param_1 + 0x14) < 4)) ||
       ((*(byte *)(param_1 + 0x1a72) >> 2 & 1) != 0)) goto LAB_036e4280;
    lVar18 = *(long *)puVar2;
    pbVar22 = PTR_DAT_04bb32e0;
    if (lVar18 == 0) {
LAB_036e2660:
      if (*pbVar22 < 8) goto LAB_036e26d8;
LAB_036e266c:
      if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_036e26d0:
        pbVar22 = PTR_DAT_04bb5038;
        goto LAB_036e26d8;
      }
      lVar18 = **(long **)PTR_DAT_04bb27d0;
      bVar23 = *(byte *)(lVar18 + 0x473);
      pbVar22 = PTR_DAT_04bb5038;
      if ((long)(char)bVar23 != 0xffffffffffffffff) {
        puVar3 = (uint *)(lVar18 + 0x48) + ((long)(char)bVar23 & 0xffffffffU) * 0x20;
        if (7 < bVar23) {
          puVar3 = (uint *)(lVar18 + 0x48);
        }
        if ((*puVar3 & 8) != 0) {
          pbVar22 = (byte *)(lVar18 + 0x471);
        }
      }
      bVar23 = *pbVar22;
      bVar8 = 7 < bVar23;
      if (bVar8) {
        bVar23 = 0xff;
      }
      local_7e0 = (undefined **)CONCAT71(local_7e0._1_7_,bVar23);
      if (bVar8) goto LAB_036e26d0;
    }
    else {
      if (*(int *)(lVar18 + 0x15c) != 0) {
        pbVar22 = (byte *)(lVar18 + 0x158);
      }
      if (7 < *pbVar22) {
        if ((*(int *)(lVar18 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
          pbVar22 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
          goto LAB_036e2660;
        }
        goto LAB_036e266c;
      }
LAB_036e26d8:
      bVar23 = *pbVar22;
      if (7 < bVar23) {
        bVar23 = 0xff;
      }
      local_7e0 = (undefined **)CONCAT71(local_7e0._1_7_,bVar23);
    }
    FUN_01a20400(&local_7e0);
    lVar18 = *(long *)puVar2;
    pbVar22 = PTR_DAT_04bb32e0;
    if (lVar18 == 0) {
LAB_036e274c:
      if (*pbVar22 < 8) goto LAB_036e27c4;
LAB_036e2758:
      if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_036e27bc:
        pbVar22 = PTR_DAT_04bb5038;
        goto LAB_036e27c4;
      }
      lVar18 = **(long **)PTR_DAT_04bb27d0;
      bVar23 = *(byte *)(lVar18 + 0x473);
      pbVar22 = PTR_DAT_04bb5038;
      if ((long)(char)bVar23 != 0xffffffffffffffff) {
        puVar3 = (uint *)(lVar18 + 0x48) + ((long)(char)bVar23 & 0xffffffffU) * 0x20;
        if (7 < bVar23) {
          puVar3 = (uint *)(lVar18 + 0x48);
        }
        if ((*puVar3 & 8) != 0) {
          pbVar22 = (byte *)(lVar18 + 0x471);
        }
      }
      bVar23 = *pbVar22;
      bVar8 = 7 < bVar23;
      if (bVar8) {
        bVar23 = 0xff;
      }
      local_7e0 = (undefined **)CONCAT71(local_7e0._1_7_,bVar23);
      if (bVar8) goto LAB_036e27bc;
    }
    else {
      if (*(int *)(lVar18 + 0x15c) != 0) {
        pbVar22 = (byte *)(lVar18 + 0x158);
      }
      if (7 < *pbVar22) {
        if ((*(int *)(lVar18 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
          pbVar22 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
          goto LAB_036e274c;
        }
        goto LAB_036e2758;
      }
LAB_036e27c4:
      bVar23 = *pbVar22;
      if (7 < bVar23) {
        bVar23 = 0xff;
      }
      local_7e0 = (undefined **)CONCAT71(local_7e0._1_7_,bVar23);
    }
    FUN_01a20f60(&local_7e0);
  }
  else if (iVar10 == 1) {
    lVar18 = *(long *)PTR_DAT_04bb27f0;
    if (lVar18 != 0) {
      *(undefined4 *)(lVar18 + 0x2f4) = 0;
      *(uint *)(lVar18 + 0x43c) = *(uint *)(lVar18 + 0x43c) | 1;
    }
    puVar16 = (undefined8 *)PTR_DAT_04bc3a48;
    pbVar22 = PTR_DAT_04bb32e0;
    if (*(int *)(param_1 + 0x18) == 1) {
      lVar18 = *(long *)puVar2;
      pbVar21 = PTR_DAT_04bb32e0;
      if ((*(ushort **)PTR_DAT_04bc3a48 == (ushort *)0x0) ||
         (uVar4 = **(ushort **)PTR_DAT_04bc3a48, (uVar4 & 1) == 0)) {
        if (*(int *)(param_1 + 0x10) == 1) goto LAB_036e2564;
        if (*(int *)(param_1 + 0x10) == 2) goto LAB_036e27f0;
      }
      else {
        if (((uVar4 ^ 0xffff) & 3) == 0) {
LAB_036e2564:
          uVar27 = 0;
          if (lVar18 == 0) goto LAB_036e27f8;
LAB_036e256c:
          if (*(int *)(lVar18 + 0x15c) != 0) {
            pbVar21 = (byte *)(lVar18 + 0x158);
          }
          if ((7 < *pbVar21) &&
             (((*(int *)(lVar18 + 0x15c) == 0 || (*(long *)PTR_DAT_04bb4718 == 0)) ||
              (pbVar21 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5), 7 < *pbVar21))))
          goto LAB_036e2808;
LAB_036e2874:
          local_88 = *pbVar21;
          if (7 < local_88) {
            local_88 = 0xff;
          }
        }
        else {
          if (((uVar4 ^ 0xffff) & 5) != 0) goto LAB_036e2be8;
LAB_036e27f0:
          uVar27 = 1;
          if (lVar18 != 0) goto LAB_036e256c;
LAB_036e27f8:
          if ((byte)*PTR_DAT_04bb32e0 < 8) goto LAB_036e2874;
LAB_036e2808:
          if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_036e286c:
            pbVar21 = PTR_DAT_04bb5038;
            goto LAB_036e2874;
          }
          lVar18 = **(long **)PTR_DAT_04bb27d0;
          bVar23 = *(byte *)(lVar18 + 0x473);
          pbVar21 = PTR_DAT_04bb5038;
          if ((long)(char)bVar23 != 0xffffffffffffffff) {
            puVar3 = (uint *)(lVar18 + 0x48) + ((long)(char)bVar23 & 0xffffffffU) * 0x20;
            if (7 < bVar23) {
              puVar3 = (uint *)(lVar18 + 0x48);
            }
            if ((*puVar3 & 8) != 0) {
              pbVar21 = (byte *)(lVar18 + 0x471);
            }
          }
          local_88 = *pbVar21;
          if (7 < local_88) goto LAB_036e286c;
        }
        FUN_025f4950(&local_7e0,&local_88,uVar27);
        puVar20 = (ushort *)*puVar16;
        if (puVar20 == (ushort *)0x0) {
          if (*(int *)(param_1 + 0x10) != 1) goto LAB_036e294c;
LAB_036e2a00:
          local_800 = (undefined *)0xffffffffffffffff;
          uVar25 = *(undefined2 *)(param_1 + 0x2a);
LAB_036e2a04:
          local_800 = (undefined *)CONCAT62(local_800._2_6_,uVar25);
          if ((((ushort *)*puVar16 == (ushort *)0x0) || ((*(ushort *)*puVar16 & 1) == 0)) ||
             (*(long *)PTR_DAT_04bc1530 == 0)) {
            uVar25 = *(undefined2 *)(param_1 + 0x2c);
            if ((*(ushort *)(param_1 + 0x28) & 0x80) != 0) {
              uVar25 = 0xffff;
            }
          }
          else {
            lVar18 = *(long *)(*(long *)PTR_DAT_04bc1530 + 0x10);
            if ((*(long **)(lVar18 + 0x11b0) == (long *)0x0) ||
               (puVar15 = (undefined8 *)**(long **)(lVar18 + 0x11b0), puVar15 == (undefined8 *)0x0))
            {
              uVar25 = *(undefined2 *)(*(long *)(lVar18 + 0x1198) + *(long *)(lVar18 + 0x1190) + 2);
            }
            else {
              uVar13 = (**(code **)*puVar15)();
              uVar25 = *(undefined2 *)(*(long *)(lVar18 + 0x1198) + *(long *)(lVar18 + 0x1190) + 2);
              if ((((uVar13 & 1) != 0) && (*(long *)(lVar18 + 0x11b0) != 0)) &&
                 (puVar15 = *(undefined8 **)(*(long *)(lVar18 + 0x11b0) + 8),
                 puVar15 != (undefined8 *)0x0)) {
                (**(code **)*puVar15)();
              }
            }
          }
          local_800._0_4_ = CONCAT22(uVar25,(undefined2)local_800);
          local_6d = 0;
          local_74[0] = 0;
          local_78 = 8;
          puVar29 = PTR_DAT_04bb3768 + 0x10;
          local_88 = (byte)puVar29;
          bStack_87 = (byte)((ulong)puVar29 >> 8);
          uStack_86 = (undefined1)((ulong)puVar29 >> 0x10);
          bStack_85 = (byte)((ulong)puVar29 >> 0x18);
          bStack_84 = (byte)((ulong)puVar29 >> 0x20);
          uStack_83 = (undefined1)((ulong)puVar29 >> 0x28);
          uStack_82 = (undefined2)((ulong)puVar29 >> 0x30);
          local_80 = SUB82(local_74,0);
          uStack_7e = (undefined2)((ulong)local_74 >> 0x10);
          uStack_7c = (undefined4)((ulong)local_74 >> 0x20);
          if ((((ushort *)*puVar16 == (ushort *)0x0) || ((*(ushort *)*puVar16 & 1) == 0)) ||
             ((*(long *)PTR_DAT_04bc1530 == 0 ||
              (lVar18 = *(long *)(*(long *)PTR_DAT_04bc1530 + 8), lVar18 == 0)))) {
            uVar25 = *(undefined2 *)(param_1 + 0x2a);
          }
          else if ((*(long **)(lVar18 + 0x60) == (long *)0x0) ||
                  (puVar15 = (undefined8 *)**(long **)(lVar18 + 0x60), puVar15 == (undefined8 *)0x0)
                  ) {
            uVar25 = *(undefined2 *)(*(long *)(lVar18 + 0x48) + *(long *)(lVar18 + 0x40) + 2);
          }
          else {
            uVar13 = (**(code **)*puVar15)();
            uVar25 = *(undefined2 *)(*(long *)(lVar18 + 0x48) + *(long *)(lVar18 + 0x40) + 2);
            if ((((uVar13 & 1) != 0) && (*(long *)(lVar18 + 0x60) != 0)) &&
               (puVar15 = *(undefined8 **)(*(long *)(lVar18 + 0x60) + 8),
               puVar15 != (undefined8 *)0x0)) {
              (**(code **)*puVar15)();
            }
          }
          FUN_0376b510(&local_88,uVar25);
          local_8c = 0xffffffff;
          FUN_0082f984(&local_8c,&local_88);
          if ((local_8c & 0xe000) == 0) {
LAB_036e2b74:
            lVar18 = 0x1ad0;
LAB_036e2b78:
            local_800 = (undefined *)
                        CONCAT44(*(undefined4 *)(param_1 + lVar18),(undefined4)local_800);
          }
          else if ((local_8c & 0xe000) == 0x2000) {
            if ((local_8c & 7) == 1) {
              lVar18 = 0x1ad4;
              goto LAB_036e2b78;
            }
            if ((local_8c & 7) == 0) goto LAB_036e2b74;
          }
          FUN_025f4ce4(&local_7e0,&local_800);
        }
        else {
          if ((*puVar20 & 1) == 0) {
            if (*(int *)(param_1 + 0x10) == 1) goto LAB_036e28d8;
          }
          else if (((*puVar20 ^ 0xffff) & 3) == 0) {
LAB_036e28d8:
            local_800 = (undefined *)0xffffffffffffffff;
            if ((((*puVar20 & 1) == 0) || (*(long *)PTR_DAT_04bc1530 == 0)) ||
               (lVar18 = *(long *)(*(long *)PTR_DAT_04bc1530 + 8), lVar18 == 0)) goto LAB_036e2a00;
            if ((*(long **)(lVar18 + 0x60) == (long *)0x0) ||
               (puVar15 = (undefined8 *)**(long **)(lVar18 + 0x60), puVar15 == (undefined8 *)0x0)) {
              uVar25 = *(undefined2 *)(*(long *)(lVar18 + 0x48) + *(long *)(lVar18 + 0x40) + 2);
            }
            else {
              uVar13 = (**(code **)*puVar15)();
              uVar25 = *(undefined2 *)(*(long *)(lVar18 + 0x48) + *(long *)(lVar18 + 0x40) + 2);
              if ((((uVar13 & 1) != 0) && (*(long *)(lVar18 + 0x60) != 0)) &&
                 (puVar15 = *(undefined8 **)(*(long *)(lVar18 + 0x60) + 8),
                 puVar15 != (undefined8 *)0x0)) {
                (**(code **)*puVar15)();
              }
            }
            goto LAB_036e2a04;
          }
LAB_036e294c:
          bStack_84 = 0xff;
          uStack_83 = 0xff;
          uStack_82 = 0xffff;
          local_80 = 0xffff;
          uStack_7e = 0xffff;
          uVar11 = *(undefined4 *)(param_1 + 0xc);
          local_800 = (undefined *)CONCAT44(local_800._4_4_,uVar11);
          local_8c = 0xffffffff;
          local_88 = (byte)uVar11;
          bStack_87 = (byte)((uint)uVar11 >> 8);
          uStack_86 = (undefined1)((uint)uVar11 >> 0x10);
          bStack_85 = (byte)((uint)uVar11 >> 0x18);
          FUN_0082fad0(&local_8c,&local_800,0);
          if ((local_8c & 0xe000) == 0) {
LAB_036e2998:
            lVar18 = 0x1ad0;
LAB_036e299c:
            uVar11 = *(undefined4 *)(param_1 + lVar18);
            bStack_84 = (byte)uVar11;
            uStack_83 = (undefined1)((uint)uVar11 >> 8);
            uStack_82 = (undefined2)((uint)uVar11 >> 0x10);
          }
          else if ((local_8c & 0xe000) == 0x2000) {
            if ((local_8c & 7) == 1) {
              lVar18 = 0x1ad4;
              goto LAB_036e299c;
            }
            if ((local_8c & 7) == 0) goto LAB_036e2998;
          }
          local_8c = 0xffffffff;
          FUN_0082fad0(&local_8c,&local_800,1);
          if ((local_8c & 0xe000) == 0) {
LAB_036e29e0:
            lVar18 = 0x1ad0;
LAB_036e29e4:
            local_80 = (undefined2)*(undefined4 *)(param_1 + lVar18);
            uStack_7e = (undefined2)((uint)*(undefined4 *)(param_1 + lVar18) >> 0x10);
          }
          else if ((local_8c & 0xe000) == 0x2000) {
            if ((local_8c & 7) == 1) {
              lVar18 = 0x1ad4;
              goto LAB_036e29e4;
            }
            if ((local_8c & 7) == 0) goto LAB_036e29e0;
          }
          FUN_025f4fc8(&local_7e0,&local_88);
        }
        local_7e0 = (undefined **)(PTR_DAT_04bc34f8 + 0x10);
        iVar10 = FUN_025f5320(&local_7e0);
        if (iVar10 == -1) {
LAB_036e2bd0:
          if (local_7c0._4_4_ == 0) {
            local_7c0 = (undefined8 ***)CONCAT44(1,(undefined4)local_7c0);
          }
        }
        else {
          iVar10 = (*(code *)local_7e0[4])(&local_7e0);
          local_88 = (byte)iVar10;
          bStack_87 = (byte)((uint)iVar10 >> 8);
          uStack_86 = (undefined1)((uint)iVar10 >> 0x10);
          bStack_85 = (byte)((uint)iVar10 >> 0x18);
          if (0xc < iVar10) goto LAB_036e2bd0;
        }
        FUN_02601530(&local_7e0);
      }
    }
LAB_036e2be8:
    FUN_02215924(&DAT_0545a400);
    local_88 = 0x23;
    bStack_87 = 0;
    uStack_86 = 8;
    bStack_85 = 0x23;
    bStack_84 = 0;
    uStack_83 = 8;
    lVar18 = *(long *)PTR_DAT_04bb46b0;
    if (lVar18 == 0) {
      lVar18 = 0;
    }
    else {
      local_7e0 = (undefined **)CONCAT44(local_7e0._4_4_,1);
      if (((*(byte *)(lVar18 + 0x50d) ^ 0xff) & 6) == 0) {
        lVar12 = (**(code **)(**(long **)(*(long *)(lVar18 + 0x10) + 0x188) + 0x30))();
      }
      else {
        lVar12 = 0;
      }
      lVar18 = 0;
      if (lVar12 != 0) {
        lVar18 = lVar12 + 0xa8;
      }
    }
    uVar26 = *(ushort *)(param_1 + 0xdc) & 0xf;
    local_7e0 = (undefined **)
                (CONCAT44(local_7e0._4_4_,(uint)*(ushort *)(param_1 + 0xdc)) & 0xffffffff0000000f);
    if (((int)local_7e0 == 1) || (local_8c = uVar26, uVar26 == 3)) {
      uVar11 = *(undefined4 *)(param_1 + 0xc);
    }
    else {
      uVar11 = 5;
    }
    local_800 = (undefined *)CONCAT44(local_800._4_4_,uVar11);
    lVar12 = *(long *)(lVar18 + 0x450);
    if (lVar12 == 0) {
      uVar13 = 0;
    }
    else {
      if (*(undefined8 **)(lVar12 + 0x10) == (undefined8 *)0x0) {
        uVar13 = 0;
        plVar14 = *(long **)(lVar12 + 0x20);
      }
      else {
        uVar13 = (**(code **)**(undefined8 **)(lVar12 + 0x10))();
        uVar13 = uVar13 & 0xffffffff;
        if (*(long *)(lVar18 + 0x450) == 0) goto LAB_036e2d28;
        plVar14 = *(long **)(*(long *)(lVar18 + 0x450) + 0x20);
      }
      if (plVar14 != (long *)0x0) {
        local_7e0 = *(undefined ***)(lVar18 + 0x430);
        local_7d8 = *(byte **)(lVar18 + 0x438);
        local_7d0 = (undefined8 *)0x297e8;
        (**(code **)(*plVar14 + 0x20))(plVar14,&local_7e0);
      }
    }
LAB_036e2d28:
    FUN_028eaac0(*(long *)(lVar18 + 0x438) + *(long *)(lVar18 + 0x430),&local_800);
    lVar12 = *(long *)(lVar18 + 0x450);
    if ((uVar13 & 1) == 0) {
LAB_036e2d60:
      if (lVar12 != 0) goto LAB_036e2d64;
LAB_036e2df0:
      FUN_028eac00(*(long *)(lVar18 + 0x438) + *(long *)(lVar18 + 0x430),&local_800,&local_88);
    }
    else {
      if (lVar12 == 0) goto LAB_036e2df0;
      if (*(undefined8 **)(lVar12 + 0x18) != (undefined8 *)0x0) {
        (**(code **)**(undefined8 **)(lVar12 + 0x18))();
        lVar12 = *(long *)(lVar18 + 0x450);
        goto LAB_036e2d60;
      }
LAB_036e2d64:
      if (*(undefined8 **)(lVar12 + 0x10) == (undefined8 *)0x0) {
        uVar13 = 0;
        plVar14 = *(long **)(lVar12 + 0x20);
joined_r0x036e2e54:
        if (plVar14 != (long *)0x0) {
          local_7e0 = *(undefined ***)(lVar18 + 0x430);
          local_7d8 = *(byte **)(lVar18 + 0x438);
          local_7d0 = (undefined8 *)0x297e8;
          (**(code **)(*plVar14 + 0x20))(plVar14,&local_7e0);
        }
      }
      else {
        uVar13 = (**(code **)**(undefined8 **)(lVar12 + 0x10))();
        uVar13 = uVar13 & 0xffffffff;
        if (*(long *)(lVar18 + 0x450) != 0) {
          plVar14 = *(long **)(*(long *)(lVar18 + 0x450) + 0x20);
          goto joined_r0x036e2e54;
        }
      }
      FUN_028eac00(*(long *)(lVar18 + 0x438) + *(long *)(lVar18 + 0x430),&local_800,&local_88);
      if ((((uVar13 & 1) != 0) && (*(long *)(lVar18 + 0x450) != 0)) &&
         (puVar15 = *(undefined8 **)(*(long *)(lVar18 + 0x450) + 0x18), puVar15 != (undefined8 *)0x0
         )) {
        (**(code **)*puVar15)();
      }
    }
    local_7e0 = (undefined **)
                (CONCAT44(local_7e0._4_4_,(uint)*(ushort *)(param_1 + 0xc0)) & 0xffffffff0000000f);
    if ((int)local_7e0 == 1) {
      lVar12 = *(long *)(lVar18 + 0x450);
      if (lVar12 == 0) {
        uVar13 = 0;
      }
      else {
        if (*(undefined8 **)(lVar12 + 0x10) == (undefined8 *)0x0) {
          uVar13 = 0;
        }
        else {
          uVar13 = (**(code **)**(undefined8 **)(lVar12 + 0x10))();
          lVar12 = *(long *)(lVar18 + 0x450);
          uVar13 = uVar13 & 0xffffffff;
          if (lVar12 == 0) goto LAB_036e2e98;
        }
        plVar14 = *(long **)(lVar12 + 0x20);
        if (plVar14 != (long *)0x0) {
          local_7e0 = *(undefined ***)(lVar18 + 0x430);
          local_7d8 = *(byte **)(lVar18 + 0x438);
          local_7d0 = (undefined8 *)0x297e8;
          (**(code **)(*plVar14 + 0x20))(plVar14,&local_7e0);
        }
      }
LAB_036e2e98:
      lVar12 = *(long *)(lVar18 + 0x430);
      lVar24 = *(long *)(lVar18 + 0x438);
      if (((((ushort *)*puVar16 == (ushort *)0x0) || ((*(ushort *)*puVar16 & 1) == 0)) ||
          (*(long *)PTR_DAT_04bc1530 == 0)) ||
         (lVar30 = *(long *)(*(long *)PTR_DAT_04bc1530 + 8), lVar30 == 0)) {
        uVar25 = *(undefined2 *)(param_1 + 0x2a);
      }
      else if ((*(long **)(lVar30 + 0x60) == (long *)0x0) ||
              (puVar16 = (undefined8 *)**(long **)(lVar30 + 0x60), puVar16 == (undefined8 *)0x0)) {
        uVar25 = *(undefined2 *)(*(long *)(lVar30 + 0x48) + *(long *)(lVar30 + 0x40) + 2);
      }
      else {
        uVar17 = (**(code **)*puVar16)();
        uVar25 = *(undefined2 *)(*(long *)(lVar30 + 0x48) + *(long *)(lVar30 + 0x40) + 2);
        if ((((uVar17 & 1) != 0) && (*(long *)(lVar30 + 0x60) != 0)) &&
           (puVar16 = *(undefined8 **)(*(long *)(lVar30 + 0x60) + 8), puVar16 != (undefined8 *)0x0))
        {
          (**(code **)*puVar16)();
        }
      }
      FUN_028eb350(lVar24 + lVar12,uVar25,0xffff,1);
      puVar16 = (undefined8 *)PTR_DAT_04bc3a48;
      if ((((uVar13 & 1) != 0) && (*(long *)(lVar18 + 0x450) != 0)) &&
         (puVar15 = *(undefined8 **)(*(long *)(lVar18 + 0x450) + 0x18), puVar15 != (undefined8 *)0x0
         )) {
        (**(code **)*puVar15)();
      }
    }
    uVar13 = (ulong)local_88;
    if ((((uVar13 < 0x23) && (bStack_87 <= (byte)PTR_DAT_04bc27f0[uVar13])) &&
        (((*(uint *)(PTR_DAT_04bc2a20 + uVar13 * 4) >> (ulong)(bStack_87 & 0x1f) & 1) != 0 &&
         ((uVar13 = (ulong)bStack_85, uVar13 < 0x23 && (bStack_84 <= (byte)PTR_DAT_04bc27f0[uVar13])
          ))))) &&
       ((*(uint *)(PTR_DAT_04bc2a20 + uVar13 * 4) >> (ulong)(bStack_84 & 0x1f) & 1) != 0)) {
      DAT_0545a400 = local_88;
      DAT_0545a401 = bStack_87;
      DAT_0545a5e4 = DAT_0545a5e4 | 2;
      DAT_0545a402 = FUN_020fd7d8(&local_88);
      _DAT_0545a403 = CONCAT11(bStack_84,bStack_85);
      DAT_0545a405 = FUN_020fd7d8((ulong)&local_88 | 3);
    }
    FUN_022119a0(&DAT_0545a400,1);
    FUN_02211824(&DAT_0545a400);
    uVar27 = *(undefined8 *)PTR_DAT_04bb4978;
    FUN_03701d30(uVar27);
    uVar7 = DAT_0545c464;
    uVar6 = DAT_0545c460;
    uVar11 = DAT_0545c45c;
    FUN_0221bd54(&DAT_0545b240,DAT_0545c458);
    FUN_0221bd54(&DAT_0545b240,uVar11);
    FUN_0221bd54(&DAT_0545b240,uVar6);
    FUN_0221bd54(&DAT_0545b240,uVar7);
    FUN_036fb110(uVar27);
    __dest = (void *)(**(code **)(*(long *)(param_1 + 0x1290) + 0x18))(param_1 + 0x1290);
    lVar12 = (**(code **)(*(long *)(param_1 + 0xb20) + 0x20))(param_1 + 0xb20);
    puVar29 = PTR_DAT_04bb2020;
    for (lVar18 = 0;
        *(uint *)(local_7ec + lVar18 + 0xc) =
             *(uint *)(lVar12 + lVar18) | *(uint *)((long)__dest + lVar18), lVar18 != 0x750;
        lVar18 = lVar18 + 8) {
      *(uint *)(local_7a0 + lVar18 + -0x3c) =
           *(uint *)(lVar12 + lVar18 + 4) | *(uint *)((long)__dest + lVar18 + 4);
    }
    memcpy(__dest,&local_7e0,0x754);
    *(uint *)((long)__dest + 0x750) = *(uint *)((long)__dest + 0x750) & 0xffffff;
    if (((ushort *)*puVar16 == (ushort *)0x0) || (uVar4 = *(ushort *)*puVar16, (uVar4 & 1) == 0)) {
      if (*(int *)(param_1 + 0x10) == 1) {
LAB_036e3124:
        uVar25 = *(undefined2 *)(param_1 + 0x2a);
        goto LAB_036e3128;
      }
      if (*(int *)(param_1 + 0x10) == 2) goto LAB_036e34ec;
    }
    else if (((uVar4 ^ 0xffff) & 3) == 0) {
      if ((*(long *)PTR_DAT_04bc1530 == 0) ||
         (lVar18 = *(long *)(*(long *)PTR_DAT_04bc1530 + 8), lVar18 == 0)) goto LAB_036e3124;
      if ((*(long **)(lVar18 + 0x60) == (long *)0x0) ||
         (puVar15 = (undefined8 *)**(long **)(lVar18 + 0x60), puVar15 == (undefined8 *)0x0)) {
        uVar25 = *(undefined2 *)(*(long *)(lVar18 + 0x48) + *(long *)(lVar18 + 0x40) + 2);
      }
      else {
        uVar13 = (**(code **)*puVar15)();
        uVar25 = *(undefined2 *)(*(long *)(lVar18 + 0x48) + *(long *)(lVar18 + 0x40) + 2);
        if ((((uVar13 & 1) != 0) && (*(long *)(lVar18 + 0x60) != 0)) &&
           (puVar15 = *(undefined8 **)(*(long *)(lVar18 + 0x60) + 8), puVar15 != (undefined8 *)0x0))
        {
          (**(code **)*puVar15)();
        }
      }
LAB_036e3128:
      FUN_037530e0(uVar25,1);
      if ((((ushort *)*puVar16 == (ushort *)0x0) || ((*(ushort *)*puVar16 & 1) == 0)) ||
         (*(long *)PTR_DAT_04bc1530 == 0)) {
        uVar26 = (uint)*(ushort *)(param_1 + 0x2c);
        if ((*(ushort *)(param_1 + 0x28) & 0x80) != 0) {
          uVar26 = 0xffffffff;
        }
      }
      else {
        lVar18 = *(long *)(*(long *)PTR_DAT_04bc1530 + 0x10);
        if ((*(long **)(lVar18 + 0x11b0) == (long *)0x0) ||
           (puVar15 = (undefined8 *)**(long **)(lVar18 + 0x11b0), puVar15 == (undefined8 *)0x0)) {
          uVar26 = (uint)*(ushort *)(*(long *)(lVar18 + 0x1198) + *(long *)(lVar18 + 0x1190) + 2);
        }
        else {
          uVar13 = (**(code **)*puVar15)();
          uVar26 = (uint)*(ushort *)(*(long *)(lVar18 + 0x1198) + *(long *)(lVar18 + 0x1190) + 2);
          if ((((uVar13 & 1) != 0) && (*(long *)(lVar18 + 0x11b0) != 0)) &&
             (puVar15 = *(undefined8 **)(*(long *)(lVar18 + 0x11b0) + 8),
             puVar15 != (undefined8 *)0x0)) {
            (**(code **)*puVar15)();
          }
        }
      }
      FUN_037530e0(uVar26,1);
      *(uint *)(param_1 + 0x1a70) = *(uint *)(param_1 + 0x1a70) & 0xfffffffb;
      local_8c = CONCAT31(local_8c._1_3_,*(byte *)(param_1 + 0x28) >> 2) & 0xffffff01;
      FUN_03762e10(&local_8c);
      local_7e0 = (undefined **)
                  (CONCAT44(local_7e0._4_4_,(uint)*(ushort *)(param_1 + 0xc0)) & 0xffffffff0000000f)
      ;
      if ((int)local_7e0 == 1) {
        local_6d = 0;
        local_74[0] = 0;
        local_78 = 8;
        puVar1 = PTR_DAT_04bb3768 + 0x10;
        local_88 = (byte)puVar1;
        bStack_87 = (byte)((ulong)puVar1 >> 8);
        uStack_86 = (undefined1)((ulong)puVar1 >> 0x10);
        bStack_85 = (byte)((ulong)puVar1 >> 0x18);
        bStack_84 = (byte)((ulong)puVar1 >> 0x20);
        uStack_83 = (undefined1)((ulong)puVar1 >> 0x28);
        uStack_82 = (undefined2)((ulong)puVar1 >> 0x30);
        local_80 = SUB82(local_74,0);
        uStack_7e = (undefined2)((ulong)local_74 >> 0x10);
        uStack_7c = (undefined4)((ulong)local_74 >> 0x20);
        if ((((ushort *)*puVar16 == (ushort *)0x0) || ((*(ushort *)*puVar16 & 1) == 0)) ||
           ((*(long *)PTR_DAT_04bc1530 == 0 ||
            (lVar18 = *(long *)(*(long *)PTR_DAT_04bc1530 + 8), lVar18 == 0)))) {
          uVar25 = *(undefined2 *)(param_1 + 0x2a);
        }
        else {
          local_7d8 = (byte *)(lVar18 + 0x38);
          local_7d0 = (undefined8 *)CONCAT71(local_7d0._1_7_,1);
          if (*(long **)(lVar18 + 0x60) == (long *)0x0) {
            uVar9 = 0;
          }
          else {
            puVar15 = (undefined8 *)**(long **)(lVar18 + 0x60);
            uVar9 = 0;
            if (puVar15 != (undefined8 *)0x0) {
              uVar9 = (**(code **)*puVar15)();
            }
          }
          local_7d0 = (undefined8 *)
                      (CONCAT62(local_7d0._2_6_,CONCAT11(uVar9,(undefined1)local_7d0)) &
                      0xffffffffffff01ff);
          local_7e0 = (undefined **)(PTR_DAT_04bb7688 + 0x10);
          uVar25 = *(undefined2 *)(*(long *)(lVar18 + 0x48) + *(long *)(lVar18 + 0x40) + 2);
          FUN_02640184(&local_7e0);
        }
        uVar13 = FUN_0376b510(&local_88,uVar25);
        if ((uVar13 & 1) != 0) {
          uVar27 = FUN_0376b780(&local_88,0);
          FUN_03752e10(uVar27,1,*(ushort *)(param_1 + 0x28) >> 3 & 1);
        }
        local_7e0 = (undefined **)0x0;
        local_7d8 = (byte *)0x0;
        local_7c0 = &local_7b8;
        local_7b8 = &local_7b0;
        local_7d0 = &local_7c0;
        local_7b0 = &local_7a8;
        local_7a8 = 0;
        if (local_7a0 != (char *)0x0) {
          local_7e0 = (undefined **)0x400000000;
          local_7d8 = (byte *)local_7a0;
        }
        puStack_7c8 = local_7d0;
        if ((((ushort *)*puVar16 == (ushort *)0x0) || ((*(ushort *)*puVar16 & 1) == 0)) ||
           ((*(long *)PTR_DAT_04bc1530 == 0 ||
            (lVar18 = *(long *)(*(long *)PTR_DAT_04bc1530 + 8), lVar18 == 0)))) {
          uVar25 = *(undefined2 *)(param_1 + 0x2a);
        }
        else {
          local_7f8 = (char *)(lVar18 + 0x38);
          local_7f0 = CONCAT31(local_7f0._1_3_,1);
          if (*(long **)(lVar18 + 0x60) == (long *)0x0) {
            uVar9 = 0;
          }
          else {
            puVar15 = (undefined8 *)**(long **)(lVar18 + 0x60);
            uVar9 = 0;
            if (puVar15 != (undefined8 *)0x0) {
              uVar9 = (**(code **)*puVar15)();
            }
          }
          local_7f0 = CONCAT22(local_7f0._2_2_,CONCAT11(uVar9,(undefined1)local_7f0)) & 0xffff01ff;
          local_800 = PTR_DAT_04bb7688 + 0x10;
          uVar25 = *(undefined2 *)(*(long *)(lVar18 + 0x48) + *(long *)(lVar18 + 0x40) + 2);
          FUN_02640184(&local_800);
        }
        local_800 = (undefined *)CONCAT62(local_800._2_6_,uVar25);
        uVar13 = FUN_03770770(&local_800,&local_7e0);
        if ((uVar13 & 1) != 0) {
          if ((int)local_7e0 != 0) {
            lVar18 = (long)(int)local_7e0 << 3;
            puVar1 = PTR_DAT_04bb3768 + 0x10;
            pbVar21 = local_7d8;
            do {
              local_7f0 = 8;
              local_7e5 = 0;
              local_7ec[0] = '\0';
              local_800 = puVar1;
              local_7f8 = local_7ec;
              uVar13 = FUN_0376b510(&local_800,**(undefined2 **)pbVar21);
              if ((uVar13 & 1) != 0) {
                uVar27 = FUN_0376b780(&local_800,0);
                FUN_03752e10(uVar27,1,*(ushort *)(param_1 + 0x28) >> 3 & 1);
              }
              pbVar21 = pbVar21 + 8;
              lVar18 = lVar18 + -8;
            } while (lVar18 != 0);
          }
        }
      }
      else if ((*(ushort *)(param_1 + 0xc0) & 0xf) == 2) {
        puStack_7c8._0_4_ = (uint)(uint3)puStack_7c8;
        local_7d8 = (byte *)((long)&local_7d0 + 4);
        local_7d0._4_4_ = (uint)((ulong)local_7d0 >> 0x20) & 0xffffff00;
        local_7d0 = (undefined8 *)CONCAT44(local_7d0._4_4_,8);
        local_7e0 = (undefined **)(PTR_DAT_04bb3768 + 0x10);
        if ((((ushort *)*puVar16 == (ushort *)0x0) || ((*(ushort *)*puVar16 & 1) == 0)) ||
           (*(long *)PTR_DAT_04bc1530 == 0)) {
          uVar26 = (uint)*(ushort *)(param_1 + 0x2c);
          if ((*(ushort *)(param_1 + 0x28) & 0x80) != 0) {
            uVar26 = 0xffffffff;
          }
        }
        else {
          lVar12 = *(long *)(*(long *)PTR_DAT_04bc1530 + 0x10);
          lVar18 = lVar12 + 0x1188;
          local_80 = (undefined2)lVar18;
          uStack_7e = (undefined2)((ulong)lVar18 >> 0x10);
          uStack_7c = (undefined4)((ulong)lVar18 >> 0x20);
          local_78 = CONCAT31(local_78._1_3_,1);
          if (*(long **)(lVar12 + 0x11b0) == (long *)0x0) {
            uVar9 = 0;
          }
          else {
            puVar15 = (undefined8 *)**(long **)(lVar12 + 0x11b0);
            uVar9 = 0;
            if (puVar15 != (undefined8 *)0x0) {
              uVar9 = (**(code **)*puVar15)();
            }
          }
          local_78 = CONCAT22(local_78._2_2_,CONCAT11(uVar9,(undefined1)local_78)) & 0xffff01ff;
          puVar1 = PTR_DAT_04bb7688 + 0x10;
          local_88 = (byte)puVar1;
          bStack_87 = (byte)((ulong)puVar1 >> 8);
          uStack_86 = (undefined1)((ulong)puVar1 >> 0x10);
          bStack_85 = (byte)((ulong)puVar1 >> 0x18);
          bStack_84 = (byte)((ulong)puVar1 >> 0x20);
          uStack_83 = (undefined1)((ulong)puVar1 >> 0x28);
          uStack_82 = (undefined2)((ulong)puVar1 >> 0x30);
          uVar26 = (uint)*(ushort *)(*(long *)(lVar12 + 0x1198) + *(long *)(lVar12 + 0x1190) + 2);
          FUN_02640184(&local_88);
        }
        uVar13 = FUN_0376b510(&local_7e0,uVar26);
        if ((uVar13 & 1) != 0) {
          uVar27 = FUN_0376b780(&local_7e0,0);
          FUN_03752e10(uVar27,1,*(ushort *)(param_1 + 0x28) >> 3 & 1);
        }
      }
      if ((*(ushort *)(param_1 + 0xc0) & 0xf) == 1) {
        local_7e0 = (undefined **)(puVar29 + 0x10);
        local_7d8 = (byte *)0x40d566b;
        FUN_02758bb8(&local_7e0,0);
      }
    }
    else if (((uVar4 ^ 0xffff) & 5) == 0) {
LAB_036e34ec:
      local_7e0 = (undefined **)
                  (CONCAT71(local_7e0._1_7_,*(byte *)(param_1 + 0xd0) >> 2) & 0xffffffffffffff01);
      FUN_03768530(&local_7e0);
      FUN_037537f0(*(undefined4 *)(param_1 + 0xc),1,*(ushort *)(param_1 + 0xd0) >> 5 & 1);
      FUN_03754c40(*(undefined4 *)(param_1 + 0xc));
    }
    lVar18 = *(long *)puVar2;
    pbVar21 = pbVar22;
    if (lVar18 == 0) {
      if (7 < *pbVar22) goto LAB_036e35f4;
LAB_036e3660:
      bVar23 = *pbVar21;
      if (7 < bVar23) {
        bVar23 = 0xff;
      }
      local_8c = CONCAT31(local_8c._1_3_,bVar23);
    }
    else {
      if (*(int *)(lVar18 + 0x15c) != 0) {
        pbVar21 = (byte *)(lVar18 + 0x158);
      }
      if ((*pbVar21 < 8) ||
         (((*(int *)(lVar18 + 0x15c) != 0 && (*(long *)PTR_DAT_04bb4718 != 0)) &&
          (pbVar21 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5), *pbVar21 < 8))))
      goto LAB_036e3660;
LAB_036e35f4:
      if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_036e3658:
        pbVar21 = PTR_DAT_04bb5038;
        goto LAB_036e3660;
      }
      lVar18 = **(long **)PTR_DAT_04bb27d0;
      bVar23 = *(byte *)(lVar18 + 0x473);
      pbVar21 = PTR_DAT_04bb5038;
      if ((long)(char)bVar23 != 0xffffffffffffffff) {
        puVar3 = (uint *)(lVar18 + 0x48) + ((long)(char)bVar23 & 0xffffffffU) * 0x20;
        if (7 < bVar23) {
          puVar3 = (uint *)(lVar18 + 0x48);
        }
        if ((*puVar3 & 8) != 0) {
          pbVar21 = (byte *)(lVar18 + 0x471);
        }
      }
      bVar23 = *pbVar21;
      bVar8 = 7 < bVar23;
      if (bVar8) {
        bVar23 = 0xff;
      }
      local_8c = CONCAT31(local_8c._1_3_,bVar23);
      if (bVar8) goto LAB_036e3658;
    }
    puStack_7c8._0_4_ = (uint)(uint3)puStack_7c8;
    local_7d8 = (byte *)((long)&local_7d0 + 4);
    local_7d0._4_4_ = (uint)((ulong)local_7d0 >> 0x20) & 0xffffff00;
    local_7d0 = (undefined8 *)CONCAT44(local_7d0._4_4_,8);
    local_7e0 = (undefined **)(PTR_DAT_04bb3768 + 0x10);
    if ((((ushort *)*puVar16 == (ushort *)0x0) || ((*(ushort *)*puVar16 & 1) == 0)) ||
       ((*(long *)PTR_DAT_04bc1530 == 0 ||
        (lVar18 = *(long *)(*(long *)PTR_DAT_04bc1530 + 8), lVar18 == 0)))) {
      uVar25 = *(undefined2 *)(param_1 + 0x2a);
    }
    else if ((*(long **)(lVar18 + 0x60) == (long *)0x0) ||
            (puVar15 = (undefined8 *)**(long **)(lVar18 + 0x60), puVar15 == (undefined8 *)0x0)) {
      uVar25 = *(undefined2 *)(*(long *)(lVar18 + 0x48) + *(long *)(lVar18 + 0x40) + 2);
    }
    else {
      uVar13 = (**(code **)*puVar15)();
      uVar25 = *(undefined2 *)(*(long *)(lVar18 + 0x48) + *(long *)(lVar18 + 0x40) + 2);
      if ((((uVar13 & 1) != 0) && (*(long *)(lVar18 + 0x60) != 0)) &&
         (puVar15 = *(undefined8 **)(*(long *)(lVar18 + 0x60) + 8), puVar15 != (undefined8 *)0x0)) {
        (**(code **)*puVar15)();
      }
    }
    uVar13 = FUN_0376b510(&local_7e0,uVar25);
    if ((uVar13 & 1) != 0) {
      lVar18 = 0;
      puVar1 = puVar29 + 0x10;
      do {
        puVar19 = (&PTR_DAT_04a76c90)[lVar18 * 2];
        local_88 = (byte)puVar1;
        bStack_87 = (byte)((ulong)puVar1 >> 8);
        uStack_86 = (undefined1)((ulong)puVar1 >> 0x10);
        bStack_85 = (byte)((ulong)puVar1 >> 0x18);
        bStack_84 = (byte)((ulong)puVar1 >> 0x20);
        uStack_83 = (undefined1)((ulong)puVar1 >> 0x28);
        uStack_82 = (undefined2)((ulong)puVar1 >> 0x30);
        local_80 = SUB82(puVar19,0);
        uStack_7e = (undefined2)((ulong)puVar19 >> 0x10);
        uStack_7c = (undefined4)((ulong)puVar19 >> 0x20);
        (**(code **)((long)local_7e0 + 0x18))(&local_7e0);
        (**(code **)((long)local_7e0 + 0x18))(&local_7e0);
        pbVar21 = local_7d8;
        (**(code **)(CONCAT26(uStack_82,
                              CONCAT15(uStack_83,
                                       CONCAT14(bStack_84,
                                                CONCAT13(bStack_85,
                                                         CONCAT12(uStack_86,
                                                                  CONCAT11(bStack_87,local_88))))))
                    + 0x18))(&local_88);
        puVar16 = (undefined8 *)PTR_DAT_04bc3a48;
        pcVar28 = (char *)CONCAT44(uStack_7c,CONCAT22(uStack_7e,local_80));
        if (pbVar21 == (byte *)pcVar28) {
LAB_036e3848:
          puVar1 = puVar29 + 0x10;
          puVar19 = (&PTR_s_UnlockSanrioCollabo_04a76c98)[lVar18 * 2];
          local_88 = (byte)puVar1;
          bStack_87 = (byte)((ulong)puVar1 >> 8);
          uStack_86 = (undefined1)((ulong)puVar1 >> 0x10);
          bStack_85 = (byte)((ulong)puVar1 >> 0x18);
          bStack_84 = (byte)((ulong)puVar1 >> 0x20);
          uStack_83 = (undefined1)((ulong)puVar1 >> 0x28);
          uStack_82 = (undefined2)((ulong)puVar1 >> 0x30);
          local_80 = SUB82(puVar19,0);
          uStack_7e = (undefined2)((ulong)puVar19 >> 0x10);
          uStack_7c = (undefined4)((ulong)puVar19 >> 0x20);
          FUN_0274bfe8(&local_8c,&local_88,1);
          break;
        }
        uVar13 = 0;
        bVar8 = true;
        do {
          if (local_7d8[uVar13] != pcVar28[uVar13]) break;
          if (local_7d8[uVar13] == '\0') {
            if (bVar8) goto LAB_036e3848;
            break;
          }
          if (local_7d8[uVar13 + 1] != pcVar28[uVar13 + 1]) break;
          if (local_7d8[uVar13 + 1] == '\0') goto LAB_036e3848;
          if (local_7d8[uVar13 + 2] != pcVar28[uVar13 + 2]) break;
          if (local_7d8[uVar13 + 2] == '\0') goto LAB_036e3848;
          bVar8 = uVar13 < 0x7fffe;
          uVar13 = uVar13 + 3;
        } while (uVar13 != 0x80001);
        lVar18 = lVar18 + 1;
      } while (lVar18 != 10);
    }
    local_6d = 0;
    local_74[0] = 0;
    local_78 = 8;
    puVar1 = PTR_DAT_04bb3768 + 0x10;
    local_88 = (byte)puVar1;
    bStack_87 = (byte)((ulong)puVar1 >> 8);
    uStack_86 = (undefined1)((ulong)puVar1 >> 0x10);
    bStack_85 = (byte)((ulong)puVar1 >> 0x18);
    bStack_84 = (byte)((ulong)puVar1 >> 0x20);
    uStack_83 = (undefined1)((ulong)puVar1 >> 0x28);
    uStack_82 = (undefined2)((ulong)puVar1 >> 0x30);
    local_80 = SUB82(local_74,0);
    uStack_7e = (undefined2)((ulong)local_74 >> 0x10);
    uStack_7c = (undefined4)((ulong)local_74 >> 0x20);
    if ((((ushort *)*puVar16 == (ushort *)0x0) || ((*(ushort *)*puVar16 & 1) == 0)) ||
       (*(long *)PTR_DAT_04bc1530 == 0)) {
      uVar26 = (uint)*(ushort *)(param_1 + 0x2c);
      if ((*(ushort *)(param_1 + 0x28) & 0x80) != 0) {
        uVar26 = 0xffffffff;
      }
    }
    else {
      lVar18 = *(long *)(*(long *)PTR_DAT_04bc1530 + 0x10);
      if ((*(long **)(lVar18 + 0x11b0) == (long *)0x0) ||
         (puVar15 = (undefined8 *)**(long **)(lVar18 + 0x11b0), puVar15 == (undefined8 *)0x0)) {
        uVar26 = (uint)*(ushort *)(*(long *)(lVar18 + 0x1198) + *(long *)(lVar18 + 0x1190) + 2);
      }
      else {
        uVar13 = (**(code **)*puVar15)();
        uVar26 = (uint)*(ushort *)(*(long *)(lVar18 + 0x1198) + *(long *)(lVar18 + 0x1190) + 2);
        if ((((uVar13 & 1) != 0) && (*(long *)(lVar18 + 0x11b0) != 0)) &&
           (puVar15 = *(undefined8 **)(*(long *)(lVar18 + 0x11b0) + 8), puVar15 != (undefined8 *)0x0
           )) {
          (**(code **)*puVar15)();
        }
      }
    }
    uVar13 = FUN_0376b510(&local_88,uVar26);
    if ((uVar13 & 1) != 0) {
      lVar18 = 0;
      do {
        local_7f8 = (&PTR_DAT_04a76c90)[lVar18 * 2];
        local_800 = puVar29 + 0x10;
        (**(code **)(CONCAT26(uStack_82,
                              CONCAT15(uStack_83,
                                       CONCAT14(bStack_84,
                                                CONCAT13(bStack_85,
                                                         CONCAT12(uStack_86,
                                                                  CONCAT11(bStack_87,local_88))))))
                    + 0x18))(&local_88);
        (**(code **)(CONCAT26(uStack_82,
                              CONCAT15(uStack_83,
                                       CONCAT14(bStack_84,
                                                CONCAT13(bStack_85,
                                                         CONCAT12(uStack_86,
                                                                  CONCAT11(bStack_87,local_88))))))
                    + 0x18))(&local_88);
        pcVar28 = (char *)CONCAT44(uStack_7c,CONCAT22(uStack_7e,local_80));
        (**(code **)(local_800 + 0x18))(&local_800);
        puVar16 = (undefined8 *)PTR_DAT_04bc3a48;
        if (pcVar28 == local_7f8) {
LAB_036e3a38:
          local_800 = puVar29 + 0x10;
          local_7f8 = (&PTR_s_UnlockSanrioCollabo_04a76c98)[lVar18 * 2];
          FUN_0274bfe8(&local_8c,&local_800,1);
          break;
        }
        uVar13 = 0;
        bVar8 = true;
        lVar12 = CONCAT44(uStack_7c,CONCAT22(uStack_7e,local_80)) + 1;
        do {
          lVar24 = lVar12 + uVar13;
          cVar5 = *(char *)(lVar24 + -1);
          if (cVar5 != local_7f8[uVar13]) break;
          if (cVar5 == '\0') {
            if (bVar8) goto LAB_036e3a38;
            break;
          }
          cVar5 = *(char *)(lVar12 + uVar13);
          if (cVar5 != local_7f8[uVar13 + 1]) break;
          if (cVar5 == '\0') goto LAB_036e3a38;
          cVar5 = *(char *)(lVar24 + 1);
          if (cVar5 != local_7f8[uVar13 + 2]) break;
          if (cVar5 == '\0') goto LAB_036e3a38;
          bVar8 = uVar13 < 0x7fffe;
          uVar13 = uVar13 + 3;
        } while (uVar13 != 0x80001);
        lVar18 = lVar18 + 1;
      } while (lVar18 != 10);
    }
    puVar20 = (ushort *)*puVar16;
    if ((puVar20 == (ushort *)0x0) || ((*puVar20 & 1) == 0)) {
      if (*(int *)(param_1 + 0x10) == 1) goto LAB_036e3a84;
    }
    else if (((*puVar20 ^ 0xffff) & 3) == 0) {
LAB_036e3a84:
      local_7e0 = (undefined **)
                  (CONCAT44(local_7e0._4_4_,(uint)*(ushort *)(param_1 + 0xc0)) & 0xffffffff0000000f)
      ;
      if ((int)local_7e0 == 1) {
        local_6d = 0;
        local_78 = 8;
        local_74[0] = 0;
        puVar1 = PTR_DAT_04bb3768 + 0x10;
        local_88 = (byte)puVar1;
        bStack_87 = (byte)((ulong)puVar1 >> 8);
        uStack_86 = (undefined1)((ulong)puVar1 >> 0x10);
        bStack_85 = (byte)((ulong)puVar1 >> 0x18);
        bStack_84 = (byte)((ulong)puVar1 >> 0x20);
        uStack_83 = (undefined1)((ulong)puVar1 >> 0x28);
        uStack_82 = (undefined2)((ulong)puVar1 >> 0x30);
        local_80 = SUB82(local_74,0);
        uStack_7e = (undefined2)((ulong)local_74 >> 0x10);
        uStack_7c = (undefined4)((ulong)local_74 >> 0x20);
        if (((puVar20 == (ushort *)0x0) || ((*puVar20 & 1) == 0)) ||
           ((*(long *)PTR_DAT_04bc1530 == 0 ||
            (lVar18 = *(long *)(*(long *)PTR_DAT_04bc1530 + 8), lVar18 == 0)))) {
          uVar25 = *(undefined2 *)(param_1 + 0x2a);
        }
        else {
          local_7d8 = (byte *)(lVar18 + 0x38);
          local_7d0 = (undefined8 *)CONCAT71(local_7d0._1_7_,1);
          if (*(long **)(lVar18 + 0x60) == (long *)0x0) {
            uVar9 = 0;
          }
          else {
            puVar15 = (undefined8 *)**(long **)(lVar18 + 0x60);
            uVar9 = 0;
            if (puVar15 != (undefined8 *)0x0) {
              uVar9 = (**(code **)*puVar15)();
            }
          }
          local_7d0 = (undefined8 *)
                      (CONCAT62(local_7d0._2_6_,CONCAT11(uVar9,(undefined1)local_7d0)) &
                      0xffffffffffff01ff);
          local_7e0 = (undefined **)(PTR_DAT_04bb7688 + 0x10);
          uVar25 = *(undefined2 *)(*(long *)(lVar18 + 0x48) + *(long *)(lVar18 + 0x40) + 2);
          FUN_02640184(&local_7e0);
        }
        FUN_0376b510(&local_88,uVar25);
        lVar18 = *(long *)PTR_DAT_04bb4130;
        if (lVar18 != 0) {
          (**(code **)(CONCAT26(uStack_82,
                                CONCAT15(uStack_83,
                                         CONCAT14(bStack_84,
                                                  CONCAT13(bStack_85,
                                                           CONCAT12(uStack_86,
                                                                    CONCAT11(bStack_87,local_88)))))
                               ) + 0x18))(&local_88);
          uVar11 = FUN_006bd550(CONCAT44(uStack_7c,CONCAT22(uStack_7e,local_80)),0);
          local_7e0 = (undefined **)CONCAT44(local_7e0._4_4_,uVar11);
          lVar18 = FUN_0079e4d0(lVar18,&local_7e0);
          if (lVar18 != 0) {
            lVar18 = *(long *)puVar2;
            pbVar21 = pbVar22;
            if (lVar18 == 0) {
              if (7 < *pbVar22) goto LAB_036e3bec;
LAB_036e3c58:
              local_804[0] = *pbVar21;
              if (7 < local_804[0]) {
                local_804[0] = 0xff;
              }
            }
            else {
              if (*(int *)(lVar18 + 0x15c) != 0) {
                pbVar21 = (byte *)(lVar18 + 0x158);
              }
              if ((*pbVar21 < 8) ||
                 (((*(int *)(lVar18 + 0x15c) != 0 && (*(long *)PTR_DAT_04bb4718 != 0)) &&
                  (pbVar21 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5), *pbVar21 < 8))))
              goto LAB_036e3c58;
LAB_036e3bec:
              if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_036e3c50:
                pbVar21 = PTR_DAT_04bb5038;
                goto LAB_036e3c58;
              }
              lVar18 = **(long **)PTR_DAT_04bb27d0;
              bVar23 = *(byte *)(lVar18 + 0x473);
              pbVar21 = PTR_DAT_04bb5038;
              if ((long)(char)bVar23 != 0xffffffffffffffff) {
                puVar3 = (uint *)(lVar18 + 0x48) + ((long)(char)bVar23 & 0xffffffffU) * 0x20;
                if (7 < bVar23) {
                  puVar3 = (uint *)(lVar18 + 0x48);
                }
                if ((*puVar3 & 8) != 0) {
                  pbVar21 = (byte *)(lVar18 + 0x471);
                }
              }
              local_804[0] = *pbVar21;
              if (7 < local_804[0]) goto LAB_036e3c50;
            }
            lVar12 = FUN_02583354(*(undefined8 *)PTR_DAT_04bb4f78,local_804,1);
            lVar18 = lVar12 + 0x194b0;
            if (*(long *)(lVar12 + 0x194b8) == 0) {
              lVar18 = *(long *)(*(long *)PTR_DAT_04bb46b0 + 0x20);
            }
            lVar12 = *(long *)(lVar18 + 0x28);
            if (lVar12 == 0) {
              local_80c = 0;
            }
            else {
              if (*(undefined8 **)(lVar12 + 0x10) == (undefined8 *)0x0) {
                local_80c = 0;
              }
              else {
                local_80c = (**(code **)**(undefined8 **)(lVar12 + 0x10))();
                lVar12 = *(long *)(lVar18 + 0x28);
                if (lVar12 == 0) goto LAB_036e3d08;
              }
              plVar14 = *(long **)(lVar12 + 0x20);
              if (plVar14 != (long *)0x0) {
                local_7e0 = *(undefined ***)(lVar18 + 8);
                local_7d8 = *(byte **)(lVar18 + 0x10);
                local_7d0 = (undefined8 *)0x3ce60;
                (**(code **)(*plVar14 + 0x20))(plVar14,&local_7e0);
              }
            }
LAB_036e3d08:
            local_7c0 = &local_7b8;
            local_7b8 = &local_7b0;
            local_7b0 = &local_7a8;
            local_7d0 = &local_7c0;
            local_7e0 = (undefined **)0x0;
            local_7d8 = (byte *)0x0;
            local_7a8 = 0;
            if (local_7a0 != (char *)0x0) {
              local_7e0 = (undefined **)0x400000000;
              local_7d8 = (byte *)local_7a0;
            }
            lVar12 = *(long *)(lVar18 + 0x10) + *(long *)(lVar18 + 8) + 0x3b54c;
            puStack_7c8 = local_7d0;
            if ((((ushort *)*puVar16 == (ushort *)0x0) || ((*(ushort *)*puVar16 & 1) == 0)) ||
               ((*(long *)PTR_DAT_04bc1530 == 0 ||
                (lVar24 = *(long *)(*(long *)PTR_DAT_04bc1530 + 8), lVar24 == 0)))) {
              uVar25 = *(undefined2 *)(param_1 + 0x2a);
            }
            else {
              local_7f8 = (char *)(lVar24 + 0x38);
              local_7f0 = CONCAT31(local_7f0._1_3_,1);
              if (*(long **)(lVar24 + 0x60) == (long *)0x0) {
                uVar9 = 0;
              }
              else {
                puVar16 = (undefined8 *)**(long **)(lVar24 + 0x60);
                if (puVar16 == (undefined8 *)0x0) {
                  uVar9 = 0;
                }
                else {
                  uVar9 = (**(code **)*puVar16)();
                }
              }
              local_7f0 = CONCAT22(local_7f0._2_2_,CONCAT11(uVar9,(undefined1)local_7f0)) &
                          0xffff01ff;
              local_800 = PTR_DAT_04bb7688 + 0x10;
              uVar25 = *(undefined2 *)(*(long *)(lVar24 + 0x48) + *(long *)(lVar24 + 0x40) + 2);
              FUN_02640184(&local_800);
            }
            local_800 = (undefined *)CONCAT62(local_800._2_6_,uVar25);
            uVar13 = FUN_03770770(&local_800,&local_7e0);
            if ((uVar13 & 1) == 0) {
              FUN_028b5c10(lVar12,&local_88);
            }
            else if ((int)local_7e0 != 0) {
              lVar24 = (long)(int)local_7e0 << 3;
              puVar29 = PTR_DAT_04bb3768 + 0x10;
              pbVar21 = local_7d8;
              do {
                local_7f0 = 8;
                local_7e5 = 0;
                local_7ec[0] = '\0';
                local_800 = puVar29;
                local_7f8 = local_7ec;
                uVar13 = FUN_0376b510(&local_800,**(undefined2 **)pbVar21);
                if ((uVar13 & 1) != 0) {
                  FUN_028b5c10(lVar12,&local_800);
                }
                pbVar21 = pbVar21 + 8;
                lVar24 = lVar24 + -8;
              } while (lVar24 != 0);
            }
            puVar16 = (undefined8 *)PTR_DAT_04bc3a48;
            puVar29 = PTR_DAT_04bb2020;
            if ((((local_80c & 1) != 0) && (*(long *)(lVar18 + 0x28) != 0)) &&
               (puVar15 = *(undefined8 **)(*(long *)(lVar18 + 0x28) + 0x18),
               puVar15 != (undefined8 *)0x0)) {
              (**(code **)*puVar15)();
            }
          }
        }
      }
    }
    FUN_0252d11c(local_808);
    if (local_808[0] < 8) {
      puVar20 = (ushort *)*puVar16;
      if (puVar20 == (ushort *)0x0) {
        if (*(int *)(param_1 + 0x10) == 1) {
          puStack_7c8._0_4_ = (uint)(uint3)puStack_7c8;
          local_7d0 = (undefined8 *)CONCAT35(local_7d0._5_3_,8);
          goto LAB_036e3f8c;
        }
LAB_036e3ef4:
        if (*(int *)(param_1 + 0x10) == 2) {
LAB_036e4008:
          uVar4 = *(ushort *)(param_1 + 0xdc) & 0xf;
          if (uVar4 == 3) {
            local_7e0 = (undefined **)(puVar29 + 0x10);
            local_7d8 = (byte *)0x40fb958;
            FUN_01b64670(&local_7e0,param_1 + 0xc,local_808);
          }
          else {
            local_7e0 = (undefined **)(puVar29 + 0x10);
            local_7d8 = (byte *)0x40f1379;
            local_88 = (byte)uVar4;
            bStack_87 = 0;
            uStack_86 = 0;
            bStack_85 = 0;
            FUN_01b65240(&local_7e0,param_1 + 0xc,uVar4 != 1,local_808);
          }
        }
      }
      else {
        uVar4 = *puVar20;
        if ((uVar4 & 1) == 0) {
          if (*(int *)(param_1 + 0x10) != 1) goto LAB_036e3ef4;
        }
        else if (((uVar4 ^ 0xffff) & 3) != 0) {
          if (((uVar4 ^ 0xffff) & 5) == 0) goto LAB_036e4008;
          goto LAB_036e4188;
        }
        puStack_7c8._0_4_ = (uint)(uint3)puStack_7c8;
        local_7d8 = (byte *)((long)&local_7d0 + 4);
        local_7d0._4_4_ = (uint)((ulong)local_7d0 >> 0x20) & 0xffffff00;
        local_7d0 = (undefined8 *)CONCAT44(local_7d0._4_4_,8);
        local_7e0 = (undefined **)(PTR_DAT_04bb3768 + 0x10);
        if ((((*puVar20 & 1) == 0) || (*(long *)PTR_DAT_04bc1530 == 0)) ||
           (lVar18 = *(long *)(*(long *)PTR_DAT_04bc1530 + 8), lVar18 == 0)) {
LAB_036e3f8c:
          local_7d8 = (byte *)((long)&local_7d0 + 4);
          local_7e0 = (undefined **)(PTR_DAT_04bb3768 + 0x10);
          uVar25 = *(undefined2 *)(param_1 + 0x2a);
        }
        else {
          lVar12 = lVar18 + 0x38;
          local_80 = (undefined2)lVar12;
          uStack_7e = (undefined2)((ulong)lVar12 >> 0x10);
          uStack_7c = (undefined4)((ulong)lVar12 >> 0x20);
          local_78 = CONCAT31(local_78._1_3_,1);
          if (*(long **)(lVar18 + 0x60) == (long *)0x0) {
            uVar9 = 0;
          }
          else {
            puVar15 = (undefined8 *)**(long **)(lVar18 + 0x60);
            uVar9 = 0;
            if (puVar15 != (undefined8 *)0x0) {
              uVar9 = (**(code **)*puVar15)();
            }
          }
          local_78 = CONCAT22(local_78._2_2_,CONCAT11(uVar9,(undefined1)local_78)) & 0xffff01ff;
          puVar1 = PTR_DAT_04bb7688 + 0x10;
          local_88 = (byte)puVar1;
          bStack_87 = (byte)((ulong)puVar1 >> 8);
          uStack_86 = (undefined1)((ulong)puVar1 >> 0x10);
          bStack_85 = (byte)((ulong)puVar1 >> 0x18);
          bStack_84 = (byte)((ulong)puVar1 >> 0x20);
          uStack_83 = (undefined1)((ulong)puVar1 >> 0x28);
          uStack_82 = (undefined2)((ulong)puVar1 >> 0x30);
          uVar25 = *(undefined2 *)(*(long *)(lVar18 + 0x48) + *(long *)(lVar18 + 0x40) + 2);
          FUN_02640184(&local_88);
        }
        FUN_0376b510(&local_7e0,uVar25);
        uVar4 = *(ushort *)(param_1 + 0xc0);
        local_8c = uVar4 & 0xf;
        local_88 = (byte)local_8c;
        switch(local_8c) {
        case 1:
          uVar4 = uVar4 >> 4 & 0xf;
          if (local_8c != 1) {
            uVar4 = 0;
          }
          local_88 = (byte)uVar4;
          local_8c = 6;
          if (uVar4 != 2) {
            local_8c = 1;
          }
          break;
        case 2:
          local_8c = 5;
          break;
        case 3:
          uVar4 = uVar4 >> 4 & 0xf;
          if (local_8c != 3) {
            uVar4 = 0;
          }
          local_88 = (byte)uVar4;
          local_8c = 2;
          if (uVar4 == 3) {
            local_8c = 3;
          }
          break;
        case 4:
          break;
        default:
          local_8c = 0;
        }
        bStack_85 = 0;
        uStack_86 = 0;
        bStack_87 = 0;
        if (local_8c != 0) {
          pcVar28 = "PE_Wherearen_CoordinateSNPC";
          lVar18 = *(long *)PTR_DAT_04bb4138;
          if (lVar18 != 0) {
            (**(code **)((long)local_7e0 + 0x18))(&local_7e0);
            uVar11 = FUN_006bd550(local_7d8,0);
            local_88 = (byte)uVar11;
            bStack_87 = (byte)((uint)uVar11 >> 8);
            uStack_86 = (undefined1)((uint)uVar11 >> 0x10);
            bStack_85 = (byte)((uint)uVar11 >> 0x18);
            lVar18 = FUN_0079e770(lVar18,&local_88);
            pcVar28 = "PE_Wherearen_CoordinateSNPC";
            if (lVar18 != 0) {
              pcVar28 = "PE_Wherearen_CoordinateNNPC";
            }
          }
          local_800 = puVar29 + 0x10;
          local_7f8 = pcVar28;
          if ((((ushort *)*puVar16 == (ushort *)0x0) || ((*(ushort *)*puVar16 & 1) == 0)) ||
             ((*(long *)PTR_DAT_04bc1530 == 0 ||
              (lVar18 = *(long *)(*(long *)PTR_DAT_04bc1530 + 8), lVar18 == 0)))) {
            uVar25 = *(undefined2 *)(param_1 + 0x2a);
          }
          else {
            lVar12 = lVar18 + 0x38;
            local_80 = (undefined2)lVar12;
            uStack_7e = (undefined2)((ulong)lVar12 >> 0x10);
            uStack_7c = (undefined4)((ulong)lVar12 >> 0x20);
            local_78 = CONCAT31(local_78._1_3_,1);
            if (*(long **)(lVar18 + 0x60) == (long *)0x0) {
              uVar9 = 0;
            }
            else {
              puVar16 = (undefined8 *)**(long **)(lVar18 + 0x60);
              uVar9 = 0;
              if (puVar16 != (undefined8 *)0x0) {
                uVar9 = (**(code **)*puVar16)();
              }
            }
            local_78 = CONCAT22(local_78._2_2_,CONCAT11(uVar9,(undefined1)local_78)) & 0xffff01ff;
            puVar1 = PTR_DAT_04bb7688 + 0x10;
            local_88 = (byte)puVar1;
            bStack_87 = (byte)((ulong)puVar1 >> 8);
            uStack_86 = (undefined1)((ulong)puVar1 >> 0x10);
            bStack_85 = (byte)((ulong)puVar1 >> 0x18);
            bStack_84 = (byte)((ulong)puVar1 >> 0x20);
            uStack_83 = (undefined1)((ulong)puVar1 >> 0x28);
            uStack_82 = (undefined2)((ulong)puVar1 >> 0x30);
            uVar25 = *(undefined2 *)(*(long *)(lVar18 + 0x48) + *(long *)(lVar18 + 0x40) + 2);
            FUN_02640184(&local_88);
          }
          local_88 = (byte)uVar25;
          bStack_87 = (byte)((ushort)uVar25 >> 8);
          FUN_01b67ef0(&local_800,&local_88,local_8c,local_808);
        }
      }
LAB_036e4188:
      local_7e0 = (undefined **)(puVar29 + 0x10);
      local_7d8 = (byte *)0x40f1394;
      FUN_01b5c520(&local_7e0,1,local_808);
    }
    lVar18 = *(long *)puVar2;
    if (lVar18 == 0) {
LAB_036e41ec:
      if (*pbVar22 < 8) goto LAB_036e4264;
LAB_036e41f8:
      if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_036e425c:
        pbVar22 = PTR_DAT_04bb5038;
        goto LAB_036e4264;
      }
      lVar18 = **(long **)PTR_DAT_04bb27d0;
      bVar23 = *(byte *)(lVar18 + 0x473);
      pbVar22 = PTR_DAT_04bb5038;
      if ((long)(char)bVar23 != 0xffffffffffffffff) {
        puVar3 = (uint *)(lVar18 + 0x48) + ((long)(char)bVar23 & 0xffffffffU) * 0x20;
        if (7 < bVar23) {
          puVar3 = (uint *)(lVar18 + 0x48);
        }
        if ((*puVar3 & 8) != 0) {
          pbVar22 = (byte *)(lVar18 + 0x471);
        }
      }
      bVar23 = *pbVar22;
      bVar8 = 7 < bVar23;
      if (bVar8) {
        bVar23 = 0xff;
      }
      local_7e0 = (undefined **)CONCAT71(local_7e0._1_7_,bVar23);
      if (bVar8) goto LAB_036e425c;
    }
    else {
      if (*(int *)(lVar18 + 0x15c) != 0) {
        pbVar22 = (byte *)(lVar18 + 0x158);
      }
      if (7 < *pbVar22) {
        if ((*(int *)(lVar18 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
          pbVar22 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
          goto LAB_036e41ec;
        }
        goto LAB_036e41f8;
      }
LAB_036e4264:
      bVar23 = *pbVar22;
      if (7 < bVar23) {
        bVar23 = 0xff;
      }
      local_7e0 = (undefined **)CONCAT71(local_7e0._1_7_,bVar23);
    }
    FUN_01a20790(&local_7e0);
  }
LAB_036e4280:
  puVar1 = puVar29 + 0x10;
  local_7d8 = (byte *)0x40cbfe5;
  local_7e0 = (undefined **)puVar1;
  FUN_036e4608(&local_7e0);
  local_7d8 = (byte *)0x40cbff8;
  local_7e0 = (undefined **)puVar1;
  FUN_036e4608(&local_7e0);
  local_7d8 = (byte *)0x40f6b2b;
  local_7e0 = (undefined **)puVar1;
  FUN_036e4608(&local_7e0);
  lVar18 = *(long *)PTR_DAT_04bb4e28;
  if (lVar18 != 0) {
    *(uint *)(&DAT_00001230 + lVar18) = *(uint *)(&DAT_00001230 + lVar18) | 2;
  }
  lVar18 = *(long *)puVar2;
  pbVar22 = PTR_DAT_04bb32e0;
  if (lVar18 == 0) {
LAB_036e4334:
    if (7 < *pbVar22) {
LAB_036e4340:
      if (*(long **)PTR_DAT_04bb27d0 != (long *)0x0) {
        lVar18 = **(long **)PTR_DAT_04bb27d0;
        bVar23 = *(byte *)(lVar18 + 0x473);
        pbVar22 = PTR_DAT_04bb5038;
        if ((long)(char)bVar23 != 0xffffffffffffffff) {
          puVar3 = (uint *)(lVar18 + 0x48) + ((long)(char)bVar23 & 0xffffffffU) * 0x20;
          if (7 < bVar23) {
            puVar3 = (uint *)(lVar18 + 0x48);
          }
          if ((*puVar3 & 8) != 0) {
            pbVar22 = (byte *)(lVar18 + 0x471);
          }
        }
        bVar23 = *pbVar22;
        bVar8 = bVar23 < 8;
        if (!bVar8) {
          bVar23 = 0xff;
        }
        local_800 = (undefined *)CONCAT71(local_800._1_7_,bVar23);
        if (bVar8) goto LAB_036e43c0;
      }
      pbVar22 = PTR_DAT_04bb5038;
    }
  }
  else {
    if (*(int *)(lVar18 + 0x15c) != 0) {
      pbVar22 = (byte *)(lVar18 + 0x158);
    }
    if (7 < *pbVar22) {
      if ((*(int *)(lVar18 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar22 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_036e4334;
      }
      goto LAB_036e4340;
    }
  }
  bVar23 = *pbVar22;
  if (7 < bVar23) {
    bVar23 = 0xff;
  }
  local_800 = (undefined *)CONCAT71(local_800._1_7_,bVar23);
LAB_036e43c0:
  puVar2 = puVar29 + 0x10;
  local_7d8 = (byte *)0x409155d;
  local_7e0 = (undefined **)puVar2;
  iVar10 = FUN_0274bce0(&local_800,&local_7e0);
  if (iVar10 != 0) {
    local_88 = (byte)puVar2;
    bStack_87 = (byte)((ulong)puVar2 >> 8);
    uStack_86 = (undefined1)((ulong)puVar2 >> 0x10);
    bStack_85 = (byte)((ulong)puVar2 >> 0x18);
    bStack_84 = (byte)((ulong)puVar2 >> 0x20);
    uStack_83 = (undefined1)((ulong)puVar2 >> 0x28);
    uStack_82 = (undefined2)((ulong)puVar2 >> 0x30);
    local_80 = 0x6b3e;
    uStack_7e = 0x40f;
    uStack_7c = 0;
    iVar10 = FUN_02758850(&local_88);
    if (iVar10 == 0) {
      local_7e0 = (undefined **)(puVar29 + 0x10);
      local_7d8 = (byte *)0x40f6b3e;
      FUN_02758bb8(&local_7e0,1);
    }
  }
  if (*(int *)(param_1 + 0x18) != 3) {
    FUN_036dab00(param_1);
  }
  return;
}


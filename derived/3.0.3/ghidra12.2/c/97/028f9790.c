
void FUN_028f9790(short *param_1,long param_2,long *param_3,int param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  short *psVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  undefined *puVar7;
  int iVar8;
  uint uVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  int iVar13;
  int iVar14;
  byte *pbVar15;
  byte *pbVar16;
  uint *puVar17;
  long lVar18;
  uint *puVar19;
  int iVar20;
  short local_c0;
  undefined1 local_be;
  undefined1 local_bd;
  undefined4 local_bc;
  byte local_b8 [4];
  uint local_b4;
  undefined *local_b0;
  undefined1 *puStack_a8;
  undefined4 local_a0;
  undefined1 local_9c [31];
  undefined1 local_7d;
  undefined *local_78;
  short local_70;
  undefined1 local_6e;
  undefined1 local_6d;
  undefined4 local_6c;
  undefined8 local_68;
  
  iVar20 = 0;
  puVar1 = PTR_DAT_04bc0510 + 0x10;
  puVar2 = PTR_DAT_04bb2028 + 0x10;
  do {
    lVar10 = (**(code **)(*param_3 + 0x20))(param_3);
    lVar18 = 0;
    iVar13 = 0;
    do {
      puVar17 = (uint *)(lVar10 + lVar18);
      lVar18 = lVar18 + 4;
      uVar9 = *puVar17 - (*puVar17 >> 1 & 0x55555555);
      uVar9 = (uVar9 >> 2 & 0x33333333) + (uVar9 & 0x33333333);
      uVar9 = uVar9 + (uVar9 >> 4) & 0xf0f0f0f;
      uVar9 = uVar9 + (uVar9 >> 8);
      iVar13 = (uVar9 + (uVar9 >> 0x10) & 0x3f) + iVar13;
    } while (lVar18 != 0x754);
    if (iVar13 == 0) {
      local_7d = 0;
      local_a0 = 0x20;
      local_9c[0] = 0;
      puStack_a8 = local_9c;
      local_b0 = PTR_DAT_04bb2028 + 0x10;
      FUN_038d1270(&local_b0,"Shop.WherearenCafe");
      return;
    }
    lVar18 = *(long *)PTR_DAT_04bb39b0;
    pbVar16 = PTR_DAT_04bb32e0;
    if (lVar18 == 0) {
      if (7 < (byte)*PTR_DAT_04bb32e0) goto LAB_028f98ec;
LAB_028f9964:
      local_b8[0] = *pbVar16;
      if (7 < local_b8[0]) {
        local_b8[0] = 0xff;
      }
    }
    else {
      if (*(int *)(lVar18 + 0x15c) != 0) {
        pbVar16 = (byte *)(lVar18 + 0x158);
      }
      if ((*pbVar16 < 8) ||
         (((*(int *)(lVar18 + 0x15c) != 0 && (*(long *)PTR_DAT_04bb4718 != 0)) &&
          (pbVar16 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5), *pbVar16 < 8))))
      goto LAB_028f9964;
LAB_028f98ec:
      pbVar16 = PTR_DAT_04bb5038;
      if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) goto LAB_028f9964;
      lVar18 = **(long **)PTR_DAT_04bb27d0;
      bVar4 = *(byte *)(lVar18 + 0x473);
      pbVar15 = PTR_DAT_04bb5038;
      if ((long)(char)bVar4 != 0xffffffffffffffff) {
        puVar17 = (uint *)(lVar18 + 0x48) + ((long)(char)bVar4 & 0xffffffffU) * 0x20;
        if (7 < bVar4) {
          puVar17 = (uint *)(lVar18 + 0x48);
        }
        if ((*puVar17 & 8) != 0) {
          pbVar15 = (byte *)(lVar18 + 0x471);
        }
      }
      local_b8[0] = *pbVar15;
      if (7 < local_b8[0]) goto LAB_028f9964;
    }
    if (7 < local_b8[0]) {
      local_b8[0] = 0xff;
    }
    lVar18 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_b8,1);
    if (lVar18 == 0) {
      return;
    }
    if ((*(long **)(lVar18 + 0x17f68) == (long *)0x0) ||
       (puVar11 = (undefined8 *)**(long **)(lVar18 + 0x17f68), puVar11 == (undefined8 *)0x0)) {
      iVar13 = *(int *)(*(long *)(lVar18 + 0x17f50) + *(long *)(lVar18 + 0x17f48));
    }
    else {
      uVar12 = (**(code **)*puVar11)();
      iVar13 = *(int *)(*(long *)(lVar18 + 0x17f50) + *(long *)(lVar18 + 0x17f48));
      if ((((uVar12 & 1) != 0) && (*(long *)(lVar18 + 0x17f68) != 0)) &&
         (puVar11 = *(undefined8 **)(*(long *)(lVar18 + 0x17f68) + 8), puVar11 != (undefined8 *)0x0)
         ) {
        (**(code **)*puVar11)();
      }
    }
    uVar12 = *(ulong *)(param_2 + 0x10);
    lVar10 = (**(code **)(*param_3 + 0x20))(param_3);
    lVar18 = 0;
    iVar14 = 0;
    do {
      puVar17 = (uint *)(lVar10 + lVar18);
      lVar18 = lVar18 + 4;
      uVar9 = *puVar17 - (*puVar17 >> 1 & 0x55555555);
      uVar9 = (uVar9 >> 2 & 0x33333333) + (uVar9 & 0x33333333);
      uVar9 = uVar9 + (uVar9 >> 4) & 0xf0f0f0f;
      uVar9 = uVar9 + (uVar9 >> 8);
      iVar14 = (uVar9 + (uVar9 >> 0x10) & 0x3f) + iVar14;
    } while (lVar18 != 0x754);
    iVar8 = FUN_00a82f40(uVar12 & 0xffffffff,uVar12 >> 0x10,uVar12 >> 0x18,1);
    lVar10 = (**(code **)(*param_3 + 0x20))(param_3);
    lVar18 = 0;
    uVar9 = 0;
    do {
      puVar17 = (uint *)(lVar10 + lVar18);
      lVar18 = lVar18 + 4;
      uVar5 = *puVar17 - (*puVar17 >> 1 & 0x55555555);
      uVar5 = (uVar5 >> 2 & 0x33333333) + (uVar5 & 0x33333333);
      uVar5 = uVar5 + (uVar5 >> 4) & 0xf0f0f0f;
      uVar5 = uVar5 + (uVar5 >> 8);
      uVar9 = (uVar5 + (uVar5 >> 0x10) & 0x3f) + uVar9;
    } while (lVar18 != 0x754);
    uVar5 = iVar13 + (short)uVar12 + ((uint)(iVar14 * iVar20) >> 1) + iVar8;
    uVar6 = 0;
    if (uVar9 != 0) {
      uVar6 = uVar5 / uVar9;
    }
    FUN_00889f80(&local_c0,param_3,(uVar5 - uVar6 * uVar9) + 1);
    if (*param_1 == -2) {
      lVar18 = 0;
LAB_028f9d80:
      psVar3 = param_1 + lVar18 * 4;
      *psVar3 = local_c0;
      *(undefined1 *)(psVar3 + 1) = local_be;
      *(undefined1 *)((long)psVar3 + 3) = local_bd;
      *(undefined4 *)(psVar3 + 2) = local_bc;
      puVar7 = PTR_DAT_04bb43c0;
      local_70 = local_c0;
      local_6e = local_be;
      local_6d = local_bd;
      local_6c = local_bc;
      lVar18 = *(long *)PTR_DAT_04bb43c0;
      local_68 = 0;
      local_78 = puVar1;
      uVar9 = FUN_0277d6c4(&local_70);
      if (*(long *)puVar7 == 0) {
LAB_028f9f00:
        local_b4 = 0xbc;
        local_b0 = puVar2;
      }
      else {
        lVar18 = *(long *)(lVar18 + 0x57e58);
        uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
        if ((*(uint *)(lVar18 + 0x1d8) <= uVar9) ||
           (*(long *)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar9 * 8) == 0)) goto LAB_028f9f00;
        lVar18 = *(long *)PTR_DAT_04bc0428;
        uVar9 = FUN_0277d6c4(psVar3);
        uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
        if (*(uint *)(lVar18 + 0x1d8) <= uVar9) goto LAB_028f9f00;
        puVar17 = *(uint **)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar9 * 8);
        local_b0 = PTR_DAT_04bb2028 + 0x10;
        if (puVar17 == (uint *)0x0) {
          local_b4 = 0xbc;
        }
        else {
          uVar9 = *puVar17;
          local_b4 = 0;
          if ((uVar9 != 0) && (puVar17 != (uint *)(ulong)uVar9)) {
            puVar19 = (uint *)((long)puVar17 - (long)(ulong)uVar9);
            local_b4 = 0;
            if (*puVar19 != 0) {
              uVar9 = puVar19[1];
              if ((uVar9 != 0) && ((ulong)(ushort)puVar19[2] != 0)) {
                lVar18 = 0xc;
                if (*(char *)((long)puVar19 + 10) != '\0') {
                  lVar18 = 0x1c;
                }
                lVar18 = (long)puVar19 + lVar18 + (ulong)(ushort)puVar19[2] * 8;
                if (lVar18 != 0) {
                  uVar5 = 0;
                  if ((ulong)uVar9 != 0) {
                    uVar5 = (uint)((ulong)((long)puVar17 - lVar18) / (ulong)uVar9);
                  }
                  if (*puVar19 <= uVar5) {
                    uVar5 = 0xffffffff;
                  }
                  if (uVar5 < *(uint *)PTR_DAT_04bc00c8) {
                    local_b4 = (uint)*(ushort *)
                                      (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar5 * 2);
                    if (local_b4 < 0xbd) goto LAB_028f9f24;
                  }
                }
              }
              local_b4 = 0;
            }
          }
        }
      }
LAB_028f9f24:
      local_7d = 0;
      local_9c[0] = 0;
      local_a0 = 0x20;
      puVar11 = &DAT_0407ebb1;
      if (local_b4 < 0xbd) {
        puVar11 = *(undefined8 **)(PTR_DAT_04bb8f90 + (ulong)local_b4 * 8 + 0x830);
      }
      puStack_a8 = local_9c;
      FUN_038d1270(&local_b0,"Shop.WherearenCafe.%s",puVar11);
    }
    else {
      if (param_1[4] == -2) {
        lVar18 = 1;
        goto LAB_028f9d80;
      }
      if (param_1[8] == -2) {
        lVar18 = 2;
        goto LAB_028f9d80;
      }
      if (param_1[0xc] == -2) {
        lVar18 = 3;
        goto LAB_028f9d80;
      }
      if (param_1[0x10] == -2) {
        lVar18 = 4;
        goto LAB_028f9d80;
      }
      if (param_1[0x14] == -2) {
        lVar18 = 5;
        goto LAB_028f9d80;
      }
      if (param_1[0x18] == -2) {
        lVar18 = 6;
        goto LAB_028f9d80;
      }
      if (param_1[0x1c] == -2) {
        lVar18 = 7;
        goto LAB_028f9d80;
      }
      if (param_1[0x20] == -2) {
        lVar18 = 8;
        goto LAB_028f9d80;
      }
      if (param_1[0x24] == -2) {
        lVar18 = 9;
        goto LAB_028f9d80;
      }
      if (param_1[0x28] == -2) {
        lVar18 = 10;
        goto LAB_028f9d80;
      }
      if (param_1[0x2c] == -2) {
        lVar18 = 0xb;
        goto LAB_028f9d80;
      }
      if (param_1[0x30] == -2) {
        lVar18 = 0xc;
        goto LAB_028f9d80;
      }
      if (param_1[0x34] == -2) {
        lVar18 = 0xd;
        goto LAB_028f9d80;
      }
      if (param_1[0x38] == -2) {
        lVar18 = 0xe;
        goto LAB_028f9d80;
      }
      if (param_1[0x3c] == -2) {
        lVar18 = 0xf;
        goto LAB_028f9d80;
      }
      if (param_1[0x40] == -2) {
        lVar18 = 0x10;
        goto LAB_028f9d80;
      }
      if (param_1[0x44] == -2) {
        lVar18 = 0x11;
        goto LAB_028f9d80;
      }
      if (param_1[0x48] == -2) {
        lVar18 = 0x12;
        goto LAB_028f9d80;
      }
      if (param_1[0x4c] == -2) {
        lVar18 = 0x13;
        goto LAB_028f9d80;
      }
      if (param_1[0x50] == -2) {
        lVar18 = 0x14;
        goto LAB_028f9d80;
      }
      if (param_1[0x54] == -2) {
        lVar18 = 0x15;
        goto LAB_028f9d80;
      }
      if (param_1[0x58] == -2) {
        lVar18 = 0x16;
        goto LAB_028f9d80;
      }
      if (param_1[0x5c] == -2) {
        lVar18 = 0x17;
        goto LAB_028f9d80;
      }
      if (param_1[0x60] == -2) {
        lVar18 = 0x18;
        goto LAB_028f9d80;
      }
      if (param_1[100] == -2) {
        lVar18 = 0x19;
        goto LAB_028f9d80;
      }
      if (param_1[0x68] == -2) {
        lVar18 = 0x1a;
        goto LAB_028f9d80;
      }
      if (param_1[0x6c] == -2) {
        lVar18 = 0x1b;
        goto LAB_028f9d80;
      }
      if (param_1[0x70] == -2) {
        lVar18 = 0x1c;
        goto LAB_028f9d80;
      }
      if (param_1[0x74] == -2) {
        lVar18 = 0x1d;
        goto LAB_028f9d80;
      }
      if (param_1[0x78] == -2) {
        lVar18 = 0x1e;
        goto LAB_028f9d80;
      }
      if (param_1[0x7c] == -2) {
        lVar18 = 0x1f;
        goto LAB_028f9d80;
      }
    }
    iVar20 = iVar20 + 1;
    if (iVar20 == param_4) {
      return;
    }
  } while( true );
}


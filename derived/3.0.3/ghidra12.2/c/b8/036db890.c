
/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffffffffff838 : 0x036dcbe4 */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_036db890(char *param_1)

{
  undefined **ppuVar1;
  long lVar2;
  undefined *puVar3;
  long *plVar4;
  long *plVar5;
  uint *puVar6;
  undefined *puVar7;
  undefined1 uVar8;
  bool bVar9;
  ushort uVar10;
  undefined4 uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  ulong uVar19;
  void *pvVar20;
  undefined8 uVar21;
  char cVar22;
  ushort *puVar23;
  byte *pbVar24;
  byte bVar25;
  long lVar26;
  ulong uVar27;
  int *piVar28;
  undefined2 uVar29;
  char *pcVar30;
  undefined8 *puVar31;
  uint *puVar32;
  long lVar33;
  short sVar34;
  undefined *puVar35;
  int local_16b4;
  undefined8 local_16b0;
  char *local_16a8;
  undefined8 local_16a0;
  byte *pbStack_1698;
  undefined8 local_f40;
  char *local_f38;
  undefined8 *local_f30;
  undefined8 *local_f28;
  undefined8 local_f20;
  undefined2 local_f18;
  ushort uStack_f16;
  byte bStack_f14;
  undefined1 uStack_f13;
  undefined2 uStack_f12;
  byte bStack_f10;
  byte bStack_f0f;
  byte bStack_f0e;
  undefined5 uStack_f0d;
  undefined8 local_f08;
  char local_f00 [1820];
  uint local_7e4;
  uint local_7e0;
  uint local_7dc;
  int local_7d8;
  byte local_7cc [4];
  undefined4 local_7c8;
  undefined4 local_7c4;
  undefined8 local_7c0;
  char *local_7b8;
  
  puVar7 = PTR_DAT_04bc3a48;
  param_1[0x14] = '\x04';
  puVar3 = PTR_DAT_04bb43c0;
  puVar35 = PTR_DAT_04bb2020;
  param_1[0x15] = '\0';
  param_1[0x16] = '\0';
  param_1[0x17] = '\0';
  puVar23 = *(ushort **)puVar7;
  if ((puVar23 == (ushort *)0x0) || (uVar10 = *puVar23, (uVar10 & 1) == 0)) {
    if (*(int *)(param_1 + 0x10) == 1) goto LAB_036db914;
    if (*(int *)(param_1 + 0x10) == 2) goto LAB_036dbbc0;
  }
  else if (((uVar10 ^ 0xffff) & 3) == 0) {
LAB_036db914:
    local_f20 = (undefined2 *)((ulong)local_f20 & 0xffffffff);
    uStack_f16 = 0;
    local_f40 = (undefined **)(PTR_DAT_04bb7648 + 0x10);
    local_f38._0_2_ = 0xffff;
    local_f28 = (undefined8 *)CONCAT62(local_f28._2_6_,0xffff);
    bStack_f14 = 0;
    uStack_f12 = 0;
    bStack_f10 = 0;
    bStack_f0f = 0;
    bStack_f0e = 0;
    local_f30 = local_f40;
    if ((((puVar23 == (ushort *)0x0) || ((*puVar23 & 1) == 0)) || (*(long *)PTR_DAT_04bc1530 == 0))
       || (lVar26 = *(long *)(*(long *)PTR_DAT_04bc1530 + 8), lVar26 == 0)) {
      uVar29 = *(undefined2 *)(param_1 + 0x2a);
    }
    else if ((*(long **)(lVar26 + 0x60) == (long *)0x0) ||
            (puVar31 = (undefined8 *)**(long **)(lVar26 + 0x60), puVar31 == (undefined8 *)0x0)) {
      uVar29 = *(undefined2 *)(*(long *)(lVar26 + 0x48) + *(long *)(lVar26 + 0x40) + 2);
    }
    else {
      uVar19 = (**(code **)*puVar31)();
      uVar29 = *(undefined2 *)(*(long *)(lVar26 + 0x48) + *(long *)(lVar26 + 0x40) + 2);
      if ((((uVar19 & 1) != 0) && (*(long *)(lVar26 + 0x60) != 0)) &&
         (puVar31 = *(undefined8 **)(*(long *)(lVar26 + 0x60) + 8), puVar31 != (undefined8 *)0x0)) {
        (**(code **)*puVar31)();
      }
    }
    local_f38 = (char *)CONCAT62(local_f38._2_6_,uVar29);
    if (((*(ushort **)puVar7 == (ushort *)0x0) || ((**(ushort **)puVar7 & 1) == 0)) ||
       (*(long *)PTR_DAT_04bc1530 == 0)) {
      uVar29 = *(undefined2 *)(param_1 + 0x2c);
      if ((*(ushort *)(param_1 + 0x28) & 0x80) != 0) {
        uVar29 = 0xffff;
      }
    }
    else {
      lVar26 = *(long *)(*(long *)PTR_DAT_04bc1530 + 0x10);
      if ((*(long **)(lVar26 + 0x11b0) == (long *)0x0) ||
         (puVar31 = (undefined8 *)**(long **)(lVar26 + 0x11b0), puVar31 == (undefined8 *)0x0)) {
        uVar29 = *(undefined2 *)(*(long *)(lVar26 + 0x1198) + *(long *)(lVar26 + 0x1190) + 2);
      }
      else {
        uVar19 = (**(code **)*puVar31)();
        uVar29 = *(undefined2 *)(*(long *)(lVar26 + 0x1198) + *(long *)(lVar26 + 0x1190) + 2);
        if ((((uVar19 & 1) != 0) && (*(long *)(lVar26 + 0x11b0) != 0)) &&
           (puVar31 = *(undefined8 **)(*(long *)(lVar26 + 0x11b0) + 8), puVar31 != (undefined8 *)0x0
           )) {
          (**(code **)*puVar31)();
        }
      }
    }
    local_f28 = (undefined8 *)CONCAT62(local_f28._2_6_,uVar29);
    if ((((*(ushort **)puVar7 == (ushort *)0x0) || ((**(ushort **)puVar7 & 1) == 0)) &&
        (((byte)param_1[0x1a71] >> 2 & 1) == 0)) ||
       ((*(long *)PTR_DAT_04bc1530 == 0 ||
        (lVar26 = *(long *)(*(long *)PTR_DAT_04bc1530 + 8), lVar26 == 0)))) {
      uVar29 = *(undefined2 *)(param_1 + 2);
    }
    else if ((*(long **)(lVar26 + 0x1790) == (long *)0x0) ||
            (puVar31 = (undefined8 *)**(long **)(lVar26 + 0x1790), puVar31 == (undefined8 *)0x0)) {
      uVar29 = *(undefined2 *)(*(long *)(lVar26 + 0x1778) + *(long *)(lVar26 + 6000) + 2);
    }
    else {
      uVar19 = (**(code **)*puVar31)();
      uVar29 = *(undefined2 *)(*(long *)(lVar26 + 0x1778) + *(long *)(lVar26 + 6000) + 2);
      if ((((uVar19 & 1) != 0) && (*(long *)(lVar26 + 0x1790) != 0)) &&
         (puVar31 = *(undefined8 **)(*(long *)(lVar26 + 0x1790) + 8), puVar31 != (undefined8 *)0x0))
      {
        (**(code **)*puVar31)();
      }
    }
    local_f20 = (undefined2 *)CONCAT62(local_f20._2_6_,uVar29);
    if ((((*(ushort **)puVar7 == (ushort *)0x0) || ((**(ushort **)puVar7 & 1) == 0)) &&
        (((byte)param_1[0x1a71] >> 2 & 1) == 0)) ||
       ((*(long *)PTR_DAT_04bc1530 == 0 ||
        (lVar26 = *(long *)(*(long *)PTR_DAT_04bc1530 + 8), lVar26 == 0)))) {
      iVar12 = *(int *)(param_1 + 4);
    }
    else if ((*(long **)(lVar26 + 0x1790) == (long *)0x0) ||
            (puVar31 = (undefined8 *)**(long **)(lVar26 + 0x1790), puVar31 == (undefined8 *)0x0)) {
      iVar12 = (int)*(char *)(*(long *)(lVar26 + 0x1778) + *(long *)(lVar26 + 6000) + 4);
    }
    else {
      uVar19 = (**(code **)*puVar31)();
      iVar12 = (int)*(char *)(*(long *)(lVar26 + 0x1778) + *(long *)(lVar26 + 6000) + 4);
      if ((((uVar19 & 1) != 0) && (*(long *)(lVar26 + 0x1790) != 0)) &&
         (puVar31 = *(undefined8 **)(*(long *)(lVar26 + 0x1790) + 8), puVar31 != (undefined8 *)0x0))
      {
        (**(code **)*puVar31)();
      }
    }
    local_f20 = (undefined2 *)CONCAT44(iVar12,(undefined4)local_f20);
    uStack_f12 = 0;
    uVar13 = *(uint *)(param_1 + 0x1a70);
    local_f18 = *(undefined2 *)(param_1 + 0x2e);
    bStack_f14 = (byte)param_1[0x28] >> 3 & 1;
    uStack_f16 = *(ushort *)(param_1 + 0xc0);
    bStack_f0f = (byte)(uVar13 >> 8) & 1;
    bStack_f0e = (byte)(uVar13 >> 0xf) & 1;
    if ((*(ushort **)puVar7 == (ushort *)0x0) || (uVar10 = **(ushort **)puVar7, (uVar10 & 1) == 0))
    {
      if (*(int *)(param_1 + 0x10) == 1) goto LAB_036dbc04;
    }
    else if (((uVar10 ^ 0xffff) & 3) == 0) {
LAB_036dbc04:
      local_16b0 = (undefined **)(CONCAT44(local_16b0._4_4_,(uint)uStack_f16) & 0xffffffff0000000f);
      if ((int)local_16b0 == 1) {
        local_16b0 = *(undefined ***)(param_1 + 0x38);
        lVar26 = *(long *)puVar3;
        uVar13 = FUN_0277d6c4(&local_16b0);
        if (*(long *)puVar3 == 0) {
LAB_036dbcc0:
          uStack_f12 = 0xffff;
        }
        else {
          lVar26 = *(long *)(lVar26 + 0x57e58);
          uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar26 + 0x1f8);
          if ((*(uint *)(lVar26 + 0x1d8) <= uVar13) ||
             (*(long *)(*(long *)(lVar26 + 0x1e0) + (long)(int)uVar13 * 8) == 0)) goto LAB_036dbcc0;
          lVar26 = *(long *)PTR_DAT_04bb26a8;
          uVar10 = FUN_0277d6c4(&local_16b0);
          for (lVar26 = *(long *)(lVar26 + 0x19f800); lVar26 != 0; lVar26 = *(long *)(lVar26 + 0x10)
              ) {
            while (uVar10 < *(ushort *)(lVar26 + 0x20)) {
              lVar26 = *(long *)(lVar26 + 8);
              if (lVar26 == 0) goto LAB_036dbcb8;
            }
            if (uVar10 <= *(ushort *)(lVar26 + 0x20)) {
              uStack_f12 = (undefined2)*(undefined4 *)(lVar26 + 0x24);
              goto LAB_036dbcc4;
            }
          }
LAB_036dbcb8:
          uStack_f12 = 0;
        }
LAB_036dbcc4:
        uVar13 = *(uint *)(param_1 + 0x1a70);
      }
    }
    bStack_f10 = (byte)(uVar13 >> 1) & 1;
    FUN_03760960(&local_f40);
    DAT_0545c409 = 1;
    local_16b0 = (undefined **)
                 (CONCAT44(local_16b0._4_4_,(uint)*(ushort *)(param_1 + 0xc0)) & 0xffffffff0000000f)
    ;
    if (((int)local_16b0 == 1) && ((*(uint *)(param_1 + 0x1a70) >> 1 & 1) != 0)) {
      uVar19 = (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
      if ((uVar19 & 1) == 0) goto LAB_036dbd10;
LAB_036dbd30:
      uVar13 = *(uint *)(param_1 + 0x1a70) | 0x30;
    }
    else {
      if ((*(ushort *)(param_1 + 0x28) >> 3 & 1) != 0) goto LAB_036dbd30;
LAB_036dbd10:
      uVar13 = *(uint *)(param_1 + 0x1a70) & 0xffffffcf;
    }
    *(uint *)(param_1 + 0x1a70) = uVar13;
    local_16b0 = (undefined **)
                 (CONCAT44(local_16b0._4_4_,(uint)*(ushort *)(param_1 + 0xc0)) & 0xffffffff0000000f)
    ;
    if ((int)local_16b0 == 1) {
      local_16b0 = (undefined **)(puVar35 + 0x10);
      local_16a8 = "IsOrderedNewNpcHouse";
      FUN_02758bb8(&local_16b0,1);
      uVar13 = *(uint *)(param_1 + 0x1a70);
    }
    if ((uVar13 >> 1 & 1) == 0) {
      FUN_0252d11c(&local_16b4);
      if ((byte)local_16b4 < 8) {
        pbStack_1698._0_4_ = (uint)(uint3)pbStack_1698;
        local_16a8 = (char *)((long)&local_16a0 + 4);
        local_16a0 = (undefined8 *)CONCAT35(local_16a0._5_3_,8);
        local_16b0 = (undefined **)(PTR_DAT_04bb3768 + 0x10);
        if ((((*(ushort **)puVar7 == (ushort *)0x0) || ((**(ushort **)puVar7 & 1) == 0)) ||
            (*(long *)PTR_DAT_04bc1530 == 0)) ||
           (lVar26 = *(long *)(*(long *)PTR_DAT_04bc1530 + 8), lVar26 == 0)) {
          uVar29 = *(undefined2 *)(param_1 + 0x2a);
        }
        else if ((*(long **)(lVar26 + 0x60) == (long *)0x0) ||
                (puVar31 = (undefined8 *)**(long **)(lVar26 + 0x60), puVar31 == (undefined8 *)0x0))
        {
          uVar29 = *(undefined2 *)(*(long *)(lVar26 + 0x48) + *(long *)(lVar26 + 0x40) + 2);
        }
        else {
          uVar19 = (**(code **)*puVar31)();
          uVar29 = *(undefined2 *)(*(long *)(lVar26 + 0x48) + *(long *)(lVar26 + 0x40) + 2);
          if ((((uVar19 & 1) != 0) && (*(long *)(lVar26 + 0x60) != 0)) &&
             (puVar31 = *(undefined8 **)(*(long *)(lVar26 + 0x60) + 8), puVar31 != (undefined8 *)0x0
             )) {
            (**(code **)*puVar31)();
          }
        }
        FUN_0376b510(&local_16b0,uVar29);
        local_7b8 = "PE_Wherearen_OrderReceivedSNPC";
        lVar26 = *(long *)PTR_DAT_04bb4138;
        if (lVar26 != 0) {
          (*(code *)local_16b0[3])(&local_16b0);
          uVar11 = FUN_006bd550(local_16a8,0);
          local_7c0 = (undefined **)CONCAT44(local_7c0._4_4_,uVar11);
          lVar26 = FUN_0079e770(lVar26,&local_7c0);
          local_7b8 = "PE_Wherearen_OrderReceivedSNPC";
          if (lVar26 != 0) {
            local_7b8 = "PE_Wherearen_OrderReceivedNNPC";
          }
        }
        local_7c0 = (undefined **)(puVar35 + 0x10);
        if ((((*(ushort **)puVar7 == (ushort *)0x0) || ((**(ushort **)puVar7 & 1) == 0)) ||
            (*(long *)PTR_DAT_04bc1530 == 0)) ||
           (lVar26 = *(long *)(*(long *)PTR_DAT_04bc1530 + 8), lVar26 == 0)) {
          uVar29 = *(undefined2 *)(param_1 + 0x2a);
        }
        else if ((*(long **)(lVar26 + 0x60) == (long *)0x0) ||
                (puVar31 = (undefined8 *)**(long **)(lVar26 + 0x60), puVar31 == (undefined8 *)0x0))
        {
          uVar29 = *(undefined2 *)(*(long *)(lVar26 + 0x48) + *(long *)(lVar26 + 0x40) + 2);
        }
        else {
          uVar19 = (**(code **)*puVar31)();
          uVar29 = *(undefined2 *)(*(long *)(lVar26 + 0x48) + *(long *)(lVar26 + 0x40) + 2);
          if ((((uVar19 & 1) != 0) && (*(long *)(lVar26 + 0x60) != 0)) &&
             (puVar31 = *(undefined8 **)(*(long *)(lVar26 + 0x60) + 8), puVar31 != (undefined8 *)0x0
             )) {
            (**(code **)*puVar31)();
          }
        }
        local_7c8 = CONCAT22((short)(local_7c8 >> 0x10),uVar29);
        FUN_01b63910(&local_7c0,&local_7c8,&local_16b4);
      }
    }
  }
  else if (((uVar10 ^ 0xffff) & 5) == 0) {
LAB_036dbbc0:
    local_f40._0_6_ = (uint6)*(uint *)(param_1 + 0xd4);
    local_f40 = (undefined **)
                (CONCAT17(local_f40._7_1_,CONCAT16((byte)param_1[0x1a70] >> 1,(uint6)local_f40)) &
                0xff01ffffffffffff);
    local_16b0 = (undefined **)
                 (CONCAT44(local_16b0._4_4_,(uint)*(ushort *)(param_1 + 0xdc)) & 0xffffffff0000000f)
    ;
    local_f40._0_6_ = CONCAT24((short)local_16b0,(int)local_f40);
    FUN_03766dc0(&local_f40);
  }
  puVar31 = (undefined8 *)PTR_DAT_04bb4970;
  lVar26 = *(long *)PTR_DAT_04bb39b0;
  pbVar24 = PTR_DAT_04bb32e0;
  if (lVar26 == 0) {
LAB_036dbf84:
    if (*pbVar24 < 8) goto LAB_036dbffc;
LAB_036dbf90:
    if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_036dbff4:
      pbVar24 = PTR_DAT_04bb5038;
      goto LAB_036dbffc;
    }
    lVar26 = **(long **)PTR_DAT_04bb27d0;
    bVar25 = *(byte *)(lVar26 + 0x473);
    pbVar24 = PTR_DAT_04bb5038;
    if ((long)(char)bVar25 != 0xffffffffffffffff) {
      puVar32 = (uint *)(lVar26 + 0x48) + ((long)(char)bVar25 & 0xffffffffU) * 0x20;
      if (7 < bVar25) {
        puVar32 = (uint *)(lVar26 + 0x48);
      }
      if ((*puVar32 & 8) != 0) {
        pbVar24 = (byte *)(lVar26 + 0x471);
      }
    }
    local_7cc[0] = *pbVar24;
    if (7 < local_7cc[0]) goto LAB_036dbff4;
  }
  else {
    if (*(int *)(lVar26 + 0x15c) != 0) {
      pbVar24 = (byte *)(lVar26 + 0x158);
    }
    if (7 < *pbVar24) {
      if ((*(int *)(lVar26 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar24 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_036dbf84;
      }
      goto LAB_036dbf90;
    }
LAB_036dbffc:
    local_7cc[0] = *pbVar24;
    if (7 < local_7cc[0]) {
      local_7cc[0] = 0xff;
    }
  }
  puVar23 = *(ushort **)puVar7;
  if ((puVar23 == (ushort *)0x0) || (uVar10 = *puVar23, (uVar10 & 1) == 0)) {
    if (*(int *)(param_1 + 0x10) == 1) goto LAB_036dc078;
    if (*(int *)(param_1 + 0x10) == 2) goto LAB_036dc348;
  }
  else if (((uVar10 ^ 0xffff) & 3) == 0) {
LAB_036dc078:
    local_f20 = &local_f18;
    local_f40 = (undefined **)0x0;
    local_f38 = (char *)0x0;
    local_f18 = SUB82(&bStack_f10,0);
    uStack_f16 = (ushort)((ulong)&bStack_f10 >> 0x10);
    bStack_f14 = (byte)((ulong)&bStack_f10 >> 0x20);
    uStack_f13 = (undefined1)((ulong)&bStack_f10 >> 0x28);
    uStack_f12 = (undefined2)((ulong)&bStack_f10 >> 0x30);
    local_f30 = &local_f20;
    uVar10 = *(ushort *)(param_1 + 0x28) >> 3 & 1;
    if ((*(ushort *)(param_1 + 0xc0) & 0xf) != 1) {
      uVar10 = 1;
    }
    bStack_f10 = (byte)&local_f08;
    bStack_f0f = (byte)((ulong)&local_f08 >> 8);
    bStack_f0e = (byte)((ulong)&local_f08 >> 0x10);
    uStack_f0d = (undefined5)((ulong)&local_f08 >> 0x18);
    local_f08 = 0;
    if (local_f00 != (char *)0x0) {
      local_f40 = (undefined **)0x400000000;
      local_f38 = local_f00;
    }
    local_f28 = local_f30;
    if ((((puVar23 == (ushort *)0x0) || ((*puVar23 & 1) == 0)) || (*(long *)PTR_DAT_04bc1530 == 0))
       || (lVar26 = *(long *)(*(long *)PTR_DAT_04bc1530 + 8), lVar26 == 0)) {
      uVar29 = *(undefined2 *)(param_1 + 0x2a);
LAB_036dc14c:
      puVar17 = (undefined8 *)PTR_DAT_04bc3a48;
    }
    else {
      if ((*(long **)(lVar26 + 0x60) == (long *)0x0) ||
         (puVar17 = (undefined8 *)**(long **)(lVar26 + 0x60), puVar17 == (undefined8 *)0x0)) {
        uVar29 = *(undefined2 *)(*(long *)(lVar26 + 0x48) + *(long *)(lVar26 + 0x40) + 2);
        goto LAB_036dc14c;
      }
      uVar19 = (**(code **)*puVar17)();
      puVar17 = (undefined8 *)PTR_DAT_04bc3a48;
      uVar29 = *(undefined2 *)(*(long *)(lVar26 + 0x48) + *(long *)(lVar26 + 0x40) + 2);
      if (((uVar19 & 1) == 0) || (*(long *)(lVar26 + 0x60) == 0)) goto LAB_036dc14c;
      puVar18 = *(undefined8 **)(*(long *)(lVar26 + 0x60) + 8);
      if (puVar18 != (undefined8 *)0x0) {
        (**(code **)*puVar18)();
      }
    }
    local_16b0 = (undefined **)CONCAT62(local_16b0._2_6_,uVar29);
    uVar19 = FUN_03770770(&local_16b0,&local_f40);
    puVar35 = PTR_DAT_04bb3768;
    if ((uVar19 & 1) == 0) {
      local_16a8 = (char *)((long)&local_16a0 + 4);
      pbStack_1698._0_4_ = (uint)(uint3)pbStack_1698;
      local_16a0 = (undefined8 *)CONCAT35(local_16a0._5_3_,8);
      local_16b0 = (undefined **)(PTR_DAT_04bb3768 + 0x10);
      if (((((ushort *)*puVar17 == (ushort *)0x0) || ((*(ushort *)*puVar17 & 1) == 0)) ||
          (*(long *)PTR_DAT_04bc1530 == 0)) ||
         (lVar26 = *(long *)(*(long *)PTR_DAT_04bc1530 + 8), lVar26 == 0)) {
        uVar29 = *(undefined2 *)(param_1 + 0x2a);
      }
      else if ((*(long **)(lVar26 + 0x60) == (long *)0x0) ||
              (puVar17 = (undefined8 *)**(long **)(lVar26 + 0x60), puVar17 == (undefined8 *)0x0)) {
        uVar29 = *(undefined2 *)(*(long *)(lVar26 + 0x48) + *(long *)(lVar26 + 0x40) + 2);
      }
      else {
        uVar19 = (**(code **)*puVar17)();
        uVar29 = *(undefined2 *)(*(long *)(lVar26 + 0x48) + *(long *)(lVar26 + 0x40) + 2);
        if ((((uVar19 & 1) != 0) && (*(long *)(lVar26 + 0x60) != 0)) &&
           (puVar17 = *(undefined8 **)(*(long *)(lVar26 + 0x60) + 8), puVar17 != (undefined8 *)0x0))
        {
          (**(code **)*puVar17)();
        }
      }
      FUN_0376b510(&local_16b0,uVar29);
      uVar21 = FUN_0376b780(&local_16b0,0);
      FUN_03752e10(uVar21,0,uVar10);
      if (((*(ushort **)PTR_DAT_04bc3a48 == (ushort *)0x0) ||
          ((**(ushort **)PTR_DAT_04bc3a48 & 1) == 0)) || (*(long *)PTR_DAT_04bc1530 == 0)) {
        if ((*(ushort *)(param_1 + 0x28) >> 7 & 1) != 0) goto LAB_036dc784;
        sVar34 = *(short *)(param_1 + 0x2c);
      }
      else {
        lVar26 = *(long *)(*(long *)PTR_DAT_04bc1530 + 0x10);
        if ((*(long **)(lVar26 + 0x11b0) == (long *)0x0) ||
           (puVar17 = (undefined8 *)**(long **)(lVar26 + 0x11b0), puVar17 == (undefined8 *)0x0)) {
          sVar34 = *(short *)(*(long *)(lVar26 + 0x1198) + *(long *)(lVar26 + 0x1190) + 2);
        }
        else {
          uVar19 = (**(code **)*puVar17)();
          sVar34 = *(short *)(*(long *)(lVar26 + 0x1198) + *(long *)(lVar26 + 0x1190) + 2);
          if ((((uVar19 & 1) != 0) && (*(long *)(lVar26 + 0x11b0) != 0)) &&
             (puVar17 = *(undefined8 **)(*(long *)(lVar26 + 0x11b0) + 8),
             puVar17 != (undefined8 *)0x0)) {
            (**(code **)*puVar17)();
          }
        }
      }
      if (sVar34 != -1) {
        pbStack_1698._0_4_ = (uint)(uint3)pbStack_1698;
        local_16b0 = (undefined **)(puVar35 + 0x10);
        local_16a8 = (char *)((long)&local_16a0 + 4);
        uVar19 = (ulong)local_16a0 >> 0x20;
        local_16a0 = (undefined8 *)CONCAT44((uint)uVar19 & 0xffffff00,8);
        if (((*(ushort **)PTR_DAT_04bc3a48 == (ushort *)0x0) ||
            ((**(ushort **)PTR_DAT_04bc3a48 & 1) == 0)) || (*(long *)PTR_DAT_04bc1530 == 0)) {
          uVar13 = (uint)*(ushort *)(param_1 + 0x2c);
          if ((*(ushort *)(param_1 + 0x28) & 0x80) != 0) {
            uVar13 = 0xffffffff;
          }
        }
        else {
          lVar26 = *(long *)(*(long *)PTR_DAT_04bc1530 + 0x10);
          if ((*(long **)(lVar26 + 0x11b0) == (long *)0x0) ||
             (puVar17 = (undefined8 *)**(long **)(lVar26 + 0x11b0), puVar17 == (undefined8 *)0x0)) {
            uVar13 = (uint)*(ushort *)(*(long *)(lVar26 + 0x1198) + *(long *)(lVar26 + 0x1190) + 2);
          }
          else {
            uVar19 = (**(code **)*puVar17)();
            uVar13 = (uint)*(ushort *)(*(long *)(lVar26 + 0x1198) + *(long *)(lVar26 + 0x1190) + 2);
            if ((((uVar19 & 1) != 0) && (*(long *)(lVar26 + 0x11b0) != 0)) &&
               (puVar17 = *(undefined8 **)(*(long *)(lVar26 + 0x11b0) + 8),
               puVar17 != (undefined8 *)0x0)) {
              (**(code **)*puVar17)();
            }
          }
        }
        uVar19 = FUN_0376b510(&local_16b0,uVar13);
        if ((uVar19 & 1) != 0) {
          uVar21 = FUN_0376b780(&local_16b0,0);
          FUN_03752e10(uVar21,0,uVar10);
        }
      }
    }
    else if ((int)local_f40 != 0) {
      lVar26 = (long)(int)local_f40 << 3;
      ppuVar1 = (undefined **)(PTR_DAT_04bb3768 + 0x10);
      pcVar30 = local_f38;
      do {
        pbStack_1698._0_4_ = (uint)(uint3)pbStack_1698;
        local_16a0 = (undefined8 *)CONCAT35(local_16a0._5_3_,8);
        local_16b0 = ppuVar1;
        local_16a8 = (char *)((long)&local_16a0 + 4);
        uVar19 = FUN_0376b510(&local_16b0,**(undefined2 **)pcVar30);
        if ((uVar19 & 1) != 0) {
          uVar21 = FUN_0376b780(&local_16b0,0);
          FUN_03752e10(uVar21,0,uVar10);
        }
        pcVar30 = pcVar30 + 8;
        lVar26 = lVar26 + -8;
      } while (lVar26 != 0);
    }
LAB_036dc784:
    puVar35 = PTR_DAT_04bb2020;
    if ((DAT_05ab5ea8 != 0) && ((*(ushort *)(DAT_05ab5ea8 + 0xc0) & 0xf) == 1)) {
      local_f40 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
      local_f38 = "SeqKabetasuEventReady";
      iVar12 = FUN_02758850(&local_f40);
      if (iVar12 != 0) {
        local_f40 = (undefined **)
                    (CONCAT44(local_f40._4_4_,(uint)*(ushort *)(param_1 + 0xc0)) &
                    0xffffffff0000000f);
        if ((int)local_f40 == 1) {
          local_16b0 = (undefined **)0x100000000;
          local_f38 = (char *)&local_16b0;
          local_16a8 = (char *)((ulong)local_16a8 & 0xffffffffffff0000);
          local_f40 = &PTR_LAB_04b46920;
          FUN_036f09c0(*puVar31,&local_f40);
        }
      }
    }
    if ((((*(ushort **)PTR_DAT_04bc3a48 == (ushort *)0x0) ||
         ((**(ushort **)PTR_DAT_04bc3a48 & 1) == 0)) || (*(long *)PTR_DAT_04bc1530 == 0)) ||
       (lVar26 = *(long *)(*(long *)PTR_DAT_04bc1530 + 8), lVar26 == 0)) {
      uVar29 = *(undefined2 *)(param_1 + 0x2a);
    }
    else if ((*(long **)(lVar26 + 0x60) == (long *)0x0) ||
            (puVar17 = (undefined8 *)**(long **)(lVar26 + 0x60), puVar17 == (undefined8 *)0x0)) {
      uVar29 = *(undefined2 *)(*(long *)(lVar26 + 0x48) + *(long *)(lVar26 + 0x40) + 2);
    }
    else {
      uVar19 = (**(code **)*puVar17)();
      uVar29 = *(undefined2 *)(*(long *)(lVar26 + 0x48) + *(long *)(lVar26 + 0x40) + 2);
      if ((((uVar19 & 1) != 0) && (*(long *)(lVar26 + 0x60) != 0)) &&
         (puVar17 = *(undefined8 **)(*(long *)(lVar26 + 0x60) + 8), puVar17 != (undefined8 *)0x0)) {
        (**(code **)*puVar17)();
      }
    }
    FUN_037530e0(uVar29,0);
    if (((*(ushort **)PTR_DAT_04bc3a48 == (ushort *)0x0) ||
        ((**(ushort **)PTR_DAT_04bc3a48 & 1) == 0)) || (*(long *)PTR_DAT_04bc1530 == 0)) {
      uVar13 = (uint)*(ushort *)(param_1 + 0x2c);
      if ((*(ushort *)(param_1 + 0x28) & 0x80) != 0) {
        uVar13 = 0xffffffff;
      }
    }
    else {
      lVar26 = *(long *)(*(long *)PTR_DAT_04bc1530 + 0x10);
      if ((*(long **)(lVar26 + 0x11b0) == (long *)0x0) ||
         (puVar17 = (undefined8 *)**(long **)(lVar26 + 0x11b0), puVar17 == (undefined8 *)0x0)) {
        uVar13 = (uint)*(ushort *)(*(long *)(lVar26 + 0x1198) + *(long *)(lVar26 + 0x1190) + 2);
      }
      else {
        uVar19 = (**(code **)*puVar17)();
        uVar13 = (uint)*(ushort *)(*(long *)(lVar26 + 0x1198) + *(long *)(lVar26 + 0x1190) + 2);
        if ((((uVar19 & 1) != 0) && (*(long *)(lVar26 + 0x11b0) != 0)) &&
           (puVar17 = *(undefined8 **)(*(long *)(lVar26 + 0x11b0) + 8), puVar17 != (undefined8 *)0x0
           )) {
          (**(code **)*puVar17)();
        }
      }
    }
    FUN_037530e0(uVar13,0);
  }
  else if (((uVar10 ^ 0xffff) & 5) == 0) {
LAB_036dc348:
    FUN_037537f0(*(undefined4 *)(param_1 + 0xc),0,*(ushort *)(param_1 + 0xd0) >> 5 & 1);
    if (*(int *)(param_1 + 0xd4) == 4) {
      local_f40 = (undefined **)(PTR_DAT_04bbfe60 + 0x10);
      memset(&local_f38,0,0x754);
      uVar13 = nn::os::GetSystemTick();
      local_7e4 = (uVar13 ^ uVar13 >> 0x1e) * 0x6c078965 + 1;
      local_7e0 = (local_7e4 ^ local_7e4 >> 0x1e) * 0x6c078965 + 2;
      local_7dc = (local_7e0 ^ local_7e0 >> 0x1e) * 0x6c078965 + 3;
      local_7d8 = (local_7dc ^ local_7dc >> 0x1e) * 0x6c078965 + 4;
      pvVar20 = (void *)FUN_01a451fc(&local_f40);
      memset(pvVar20,0,0x754);
      local_16a8 = (char *)&local_7c0;
      local_7c0 = (undefined **)CONCAT44(local_7c0._4_4_,0xb8);
      local_16b0 = &PTR_FUN_049ff448;
      FUN_008a1ba0(&local_f40,&local_16b0);
      lVar26 = (**(code **)((long)local_f40 + 0x20))(&local_f40);
      uVar19 = 0;
      do {
        if ((*(uint *)(lVar26 + (uVar19 >> 5) * 4) >> (ulong)((uint)uVar19 & 0x1f) & 1) != 0)
        goto LAB_036dc450;
        uVar13 = (uint)uVar19 + 1;
        uVar19 = (ulong)uVar13;
      } while (uVar13 != 15000);
      uVar19 = 0;
LAB_036dc450:
      lVar33 = (**(code **)((long)local_f40 + 0x20))(&local_f40);
      puVar7 = PTR_DAT_04bbfe58;
      puVar35 = PTR_DAT_04bb37e0;
      iVar12 = 15000;
      do {
        if ((*(uint *)(lVar33 + (ulong)(iVar12 - 1U >> 5) * 4) >> (ulong)(iVar12 - 1U & 0x1f) & 1)
            != 0) break;
        iVar12 = iVar12 + -1;
      } while (iVar12 != 0);
      if (iVar12 != (int)uVar19) {
LAB_036dc500:
        local_7c0 = (undefined **)CONCAT44(local_7c0._4_4_,1);
        plVar4 = (long *)(puVar7 + uVar19 * 8);
        if (0x752 < (uint)(uVar19 >> 3)) {
          plVar4 = (long *)puVar7;
        }
        plVar5 = (long *)puVar35;
        if ((uint)uVar19 < 0x3a99) {
          plVar5 = plVar4;
        }
        local_16b0 = (undefined **)*plVar5;
        if ((short)*plVar5 != -2) {
          uVar27 = FUN_02686510(&local_16b0);
          lVar33 = DAT_05ab5ea8;
          if ((uVar27 & 1) == 0) {
            if ((int)local_7c0 != 0) {
              lVar2 = DAT_05ab5ea8 + 0x3b0;
              FUN_0277dedc(&local_16b0);
              lVar33 = (**(code **)(*(long *)(lVar33 + 0x3b0) + 0x18))(lVar2);
              uVar13 = FUN_0277d6c4(&local_16b0);
              if ((uVar13 >> 3 & 0x1fff) < 0x753) {
                lVar2 = (ulong)((uVar13 & 0xffff) >> 5) * 4;
                *(uint *)(lVar33 + lVar2) = *(uint *)(lVar33 + lVar2) | 1 << (ulong)(uVar13 & 0x1f);
              }
            }
            if ((int)local_7c0 != 1) {
              FUN_02686340(&local_16b0);
            }
          }
        }
        do {
          uVar13 = (int)uVar19 + 1;
          uVar19 = (ulong)uVar13;
          if (0x752 < uVar13 >> 3) {
            uVar13 = 0x3a95;
            goto LAB_036dc610;
          }
        } while ((*(uint *)(lVar26 + (ulong)(uVar13 >> 5) * 4) >> (ulong)(uVar13 & 0x1f) & 1) == 0);
        goto LAB_036dc4f8;
      }
LAB_036dc494:
      puVar35 = PTR_DAT_04bb2020;
      puVar31 = (undefined8 *)PTR_DAT_04bb4970;
    }
  }
  local_f40 = (undefined **)(puVar35 + 0x10);
  local_f38 = "UnlockCatalogPokiBag";
  iVar12 = FUN_0274bce0(local_7cc,&local_f40);
  if (iVar12 != 0) {
    local_f40 = (undefined **)0x2f4;
    FUN_0277d4ac(&local_f40);
    local_16b0 = (undefined **)CONCAT44(local_16b0._4_4_,2);
    if ((short)local_f40 != -2) {
      uVar19 = FUN_02686510(&local_f40);
      lVar26 = DAT_05ab5ea8;
      if ((uVar19 & 1) == 0) {
        if ((int)local_16b0 != 0) {
          lVar33 = DAT_05ab5ea8 + 0x3b0;
          FUN_0277dedc(&local_f40);
          lVar26 = (**(code **)(*(long *)(lVar26 + 0x3b0) + 0x18))(lVar33);
          uVar13 = FUN_0277d6c4(&local_f40);
          if ((uVar13 >> 3 & 0x1fff) < 0x753) {
            lVar33 = (ulong)((uVar13 & 0xffff) >> 5) * 4;
            *(uint *)(lVar26 + lVar33) = *(uint *)(lVar26 + lVar33) | 1 << (ulong)(uVar13 & 0x1f);
          }
        }
        if ((int)local_16b0 != 1) {
          FUN_02686340(&local_f40);
        }
      }
    }
  }
  uVar19 = FUN_02612720(local_7cc);
  if ((uVar19 & 1) != 0) {
    local_f40 = (undefined **)0x2f0;
    FUN_0277d4ac(&local_f40);
    local_16b0 = (undefined **)CONCAT44(local_16b0._4_4_,2);
    if ((short)local_f40 != -2) {
      uVar19 = FUN_02686510(&local_f40);
      lVar26 = DAT_05ab5ea8;
      if ((uVar19 & 1) == 0) {
        if ((int)local_16b0 != 0) {
          lVar33 = DAT_05ab5ea8 + 0x3b0;
          FUN_0277dedc(&local_f40);
          lVar26 = (**(code **)(*(long *)(lVar26 + 0x3b0) + 0x18))(lVar33);
          uVar13 = FUN_0277d6c4(&local_f40);
          if ((uVar13 >> 3 & 0x1fff) < 0x753) {
            lVar33 = (ulong)((uVar13 & 0xffff) >> 5) * 4;
            *(uint *)(lVar26 + lVar33) = *(uint *)(lVar26 + lVar33) | 1 << (ulong)(uVar13 & 0x1f);
          }
        }
        if ((int)local_16b0 != 1) {
          FUN_02686340(&local_f40);
        }
      }
    }
  }
  local_f40 = (undefined **)(PTR_DAT_04bbfe60 + 0x10);
  memset(&local_f38,0,0x754);
  uVar13 = nn::os::GetSystemTick();
  local_7e4 = (uVar13 ^ uVar13 >> 0x1e) * 0x6c078965 + 1;
  local_7e0 = (local_7e4 ^ local_7e4 >> 0x1e) * 0x6c078965 + 2;
  local_7dc = (local_7e0 ^ local_7e0 >> 0x1e) * 0x6c078965 + 3;
  local_7d8 = (local_7dc ^ local_7dc >> 0x1e) * 0x6c078965 + 4;
  pvVar20 = (void *)(**(code **)((long)local_f40 + 0x18))(&local_f40);
  memset(pvVar20,0,0x754);
  local_7c8 = local_7c8 & 0xff000000;
  local_7c0 = (undefined **)0x200000007;
  local_7b8 = (char *)CONCAT62(local_7b8._2_6_,1);
  local_16a8 = (char *)&local_7c0;
  local_16b0 = &PTR_LAB_04b46920;
  FUN_036f09c0(*puVar31,&local_16b0);
  local_16a8 = "Unlock_Kabetasu";
  local_16b0 = (undefined **)(puVar35 + 0x10);
  iVar12 = FUN_02758850(&local_16b0);
  if (iVar12 != 0) {
    local_7c0 = (undefined **)((ulong)local_7c0 & 0xffffffff00000000);
    local_7c8 = local_7c8 | 1;
  }
  local_16a8 = "Unlock_FlowerCatalog";
  local_16b0 = (undefined **)(puVar35 + 0x10);
  iVar12 = FUN_02758850(&local_16b0);
  if (iVar12 != 0) {
    local_7c0 = (undefined **)CONCAT44(local_7c0._4_4_,0xb);
    uVar8 = local_7c8._1_1_;
    local_7c8 = CONCAT23(local_7c8._2_2_,CONCAT12(uVar8,(short)local_7c8)) | 0x80000;
  }
  local_16a8 = "Unlock_PillarCatalog_01";
  local_16b0 = (undefined **)(puVar35 + 0x10);
  iVar12 = FUN_02758850(&local_16b0);
  if (iVar12 != 0) {
    local_7c0 = (undefined **)CONCAT44(local_7c0._4_4_,0xc);
    uVar8 = local_7c8._1_1_;
    local_7c8 = CONCAT23(local_7c8._2_2_,CONCAT12(uVar8,(short)local_7c8)) | 0x100000;
  }
  local_16a8 = "Unlock_PillarCatalog_02";
  local_16b0 = (undefined **)(puVar35 + 0x10);
  iVar12 = FUN_02758850(&local_16b0);
  if (iVar12 != 0) {
    local_7c0 = (undefined **)CONCAT44(local_7c0._4_4_,0xd);
    uVar8 = local_7c8._1_1_;
    local_7c8 = CONCAT23(local_7c8._2_2_,CONCAT12(uVar8,(short)local_7c8)) | 0x200000;
  }
  local_16a8 = "Unlock_PillarCatalog_Brick";
  local_16b0 = (undefined **)(puVar35 + 0x10);
  iVar12 = FUN_02758850(&local_16b0);
  if (iVar12 != 0) {
    local_7c0 = (undefined **)CONCAT44(local_7c0._4_4_,0xf);
    uVar8 = local_7c8._1_1_;
    local_7c8 = CONCAT23(local_7c8._2_2_,CONCAT12(uVar8,(short)local_7c8)) | 0x800000;
  }
  local_16a8 = "Unlock_PillarCatalog_Concrete";
  local_16b0 = (undefined **)(puVar35 + 0x10);
  iVar12 = FUN_02758850(&local_16b0);
  if (iVar12 != 0) {
    local_7c0 = (undefined **)CONCAT44(local_7c0._4_4_,0x10);
    local_7c8 = CONCAT12(local_7c8._3_1_,CONCAT11(local_7c8._2_1_,(undefined1)local_7c8)) | 0x100;
  }
  local_16a8 = "Unlock_PillarCatalog_Steel";
  local_16b0 = (undefined **)(puVar35 + 0x10);
  iVar12 = FUN_02758850(&local_16b0);
  if (iVar12 != 0) {
    local_7c0 = (undefined **)CONCAT44(local_7c0._4_4_,0x11);
    local_7c8 = CONCAT12(local_7c8._3_1_,CONCAT11(local_7c8._2_1_,(undefined1)local_7c8)) | 0x200;
  }
  local_16a8 = "Unlock_PillarCatalog_Plain";
  local_16b0 = (undefined **)(puVar35 + 0x10);
  iVar12 = FUN_02758850(&local_16b0);
  if (iVar12 != 0) {
    local_7c0 = (undefined **)CONCAT44(local_7c0._4_4_,0x12);
    local_7c8 = CONCAT12(local_7c8._3_1_,CONCAT11(local_7c8._2_1_,(undefined1)local_7c8)) | 0x400;
  }
  local_16a8 = "Unlock_PillarCatalog_Marble";
  local_16b0 = (undefined **)(puVar35 + 0x10);
  iVar12 = FUN_02758850(&local_16b0);
  if (iVar12 != 0) {
    local_7c0 = (undefined **)CONCAT44(local_7c0._4_4_,0x13);
    local_7c8 = CONCAT12(local_7c8._3_1_,CONCAT11(local_7c8._2_1_,(undefined1)local_7c8)) | 0x800;
  }
  local_16a8 = "Unlock_Item_Event_After_Facility_School";
  local_16b0 = (undefined **)(puVar35 + 0x10);
  iVar12 = FUN_02758850(&local_16b0);
  if (iVar12 != 0) {
    local_7c0 = (undefined **)0x20000000e;
    local_7b8 = (char *)CONCAT62(local_7b8._2_6_,1);
    local_16a8 = (char *)&local_7c0;
    local_16b0 = &PTR_LAB_04b46920;
    FUN_036f09c0(*puVar31,&local_16b0);
  }
  local_16a8 = (char *)&local_7c0;
  local_7c0 = (undefined **)CONCAT62(CONCAT51(local_7c0._3_5_,local_7c8._2_1_),(short)local_7c8);
  local_16b0 = &PTR_LAB_04b46998;
  FUN_008a1ba0(&local_f40,&local_16b0);
  ppuVar1 = (undefined **)(puVar35 + 0x10);
  local_16a8 = "Unlock_FlowerCatalog";
  local_16b0 = ppuVar1;
  iVar12 = FUN_02758850(&local_16b0);
  if (iVar12 != 0) {
    FUN_0264a400(&local_16b0,local_7cc);
    puVar7 = PTR_DAT_04bcaaf0;
    lVar26 = *(long *)PTR_DAT_04bb4980;
    uVar13 = *(uint *)(lVar26 + 0x1c0);
    if ((0 < (int)uVar13) ||
       (((*(long *)(lVar26 + 0xb0) != 0 &&
         (puVar32 = *(uint **)(*(long *)(lVar26 + 0xb0) + 8), puVar32 != (uint *)0x0)) &&
        (uVar13 = *puVar32, 0 < (int)uVar13)))) {
      uVar19 = 0;
      do {
        if ((int)*(uint *)(lVar26 + 0x1c0) < 1) {
          if (((((*(long *)(lVar26 + 0xb0) != 0) &&
                (puVar32 = *(uint **)(*(long *)(lVar26 + 0xb0) + 8), puVar32 != (uint *)0x0)) &&
               ((*(uint *)(lVar26 + 200) <= uVar19 ||
                (*(char *)(*(long *)(lVar26 + 0xd0) + uVar19) != '\0')))) &&
              ((uVar19 < *puVar32 && (puVar32[1] != 0)))) && ((ushort)puVar32[2] != 0)) {
            iVar12 = 0xc;
            if (*(char *)((long)puVar32 + 10) != '\0') {
              iVar12 = 0x1c;
            }
            puVar32 = (uint *)((ulong)(puVar32[1] * (int)uVar19 + (uint)(ushort)puVar32[2] * 8 +
                                      iVar12) + (long)puVar32);
            goto joined_r0x036dd1d8;
          }
        }
        else if (uVar19 < *(uint *)(lVar26 + 0x1c0)) {
          uVar27 = uVar19 & 0xffffffff;
          if (*(uint *)(lVar26 + 0x1b0) <= uVar19) {
            uVar27 = 0;
          }
          puVar32 = *(uint **)(*(long *)(lVar26 + 0x1b8) + uVar27 * 8);
joined_r0x036dd1d8:
          if (puVar32 != (uint *)0x0) {
            uVar14 = *puVar32;
            if (uVar14 != 0) {
              cVar22 = *PTR_DAT_04bcaae8;
              do {
                if (cVar22 == '\0') {
                  cVar22 = '\x01';
                  *PTR_DAT_04bcaae8 = 1;
                  *(undefined8 *)puVar7 = 0xffffffffffffffff;
                  *(undefined4 *)(puVar7 + 8) = 0xffffffff;
                  uVar14 = *puVar32;
                }
                else {
                  uVar15 = *(uint *)puVar7;
                  if (-1 < (int)uVar15) {
                    if ((ushort *)((ulong)uVar15 + (long)puVar32) != (ushort *)0x0) {
                      uVar10 = *(ushort *)((ulong)uVar15 + (long)puVar32);
                      goto LAB_036dd1f4;
                    }
                    break;
                  }
                  if (uVar15 != 0xffffffff) break;
                }
                puVar6 = (uint *)(ulong)uVar14;
                uVar10 = 0xfffe;
                if ((puVar6 == (uint *)0x0) || (uVar10 = 0xfffe, puVar32 == puVar6))
                goto LAB_036dd1f4;
                lVar33 = 0xc;
                if (*(char *)((long)puVar32 + (10 - (long)puVar6)) != '\0') {
                  lVar33 = 0x1c;
                }
                lVar33 = (long)puVar32 + (lVar33 - (long)puVar6);
                if (lVar33 == 0) break;
                uVar27 = (ulong)*(ushort *)((long)puVar32 + (8 - (long)puVar6));
                *(undefined4 *)puVar7 = 0xfffffffe;
                if (uVar27 == 0) break;
                piVar28 = (int *)(lVar33 + 4);
                while (piVar28[-1] != 0x6d932b1b) {
                  piVar28 = piVar28 + 2;
                  uVar27 = uVar27 - 1;
                  if (uVar27 == 0) goto LAB_036dd1f0;
                }
                iVar12 = 0;
                if (*piVar28 != -1) {
                  iVar12 = *piVar28;
                }
                *(int *)puVar7 = iVar12;
                uVar14 = *puVar32;
                if (uVar14 == 0) break;
              } while( true );
            }
LAB_036dd1f0:
            uVar10 = 0xfffe;
LAB_036dd1f4:
            local_7c0 = (undefined **)(ulong)uVar10;
            FUN_0277d4ac(&local_7c0);
            uVar14 = *puVar32;
            if (uVar14 != 0) {
              cVar22 = *PTR_DAT_04bcaae8;
              do {
                if (cVar22 == '\0') {
                  cVar22 = '\x01';
                  *PTR_DAT_04bcaae8 = 1;
                  *(undefined8 *)puVar7 = 0xffffffffffffffff;
                  *(undefined4 *)(puVar7 + 8) = 0xffffffff;
                  uVar14 = *puVar32;
                }
                else {
                  uVar15 = *(uint *)(puVar7 + 8);
                  if (-1 < (int)uVar15) {
                    if ((ushort *)((ulong)uVar15 + (long)puVar32) != (ushort *)0x0) {
                      uVar10 = *(ushort *)((ulong)uVar15 + (long)puVar32);
                      goto LAB_036dd300;
                    }
                    break;
                  }
                  if (uVar15 != 0xffffffff) break;
                }
                puVar6 = (uint *)(ulong)uVar14;
                uVar10 = 0xfffe;
                if ((puVar6 == (uint *)0x0) || (uVar10 = 0xfffe, puVar32 == puVar6))
                goto LAB_036dd300;
                lVar33 = 0xc;
                if (*(char *)((long)puVar32 + (10 - (long)puVar6)) != '\0') {
                  lVar33 = 0x1c;
                }
                lVar33 = (long)puVar32 + (lVar33 - (long)puVar6);
                if (lVar33 == 0) break;
                uVar27 = (ulong)*(ushort *)((long)puVar32 + (8 - (long)puVar6));
                *(undefined4 *)(puVar7 + 8) = 0xfffffffe;
                if (uVar27 == 0) break;
                piVar28 = (int *)(lVar33 + 4);
                while (piVar28[-1] != -0x1e040125) {
                  piVar28 = piVar28 + 2;
                  uVar27 = uVar27 - 1;
                  if (uVar27 == 0) goto LAB_036dd2fc;
                }
                iVar12 = 0;
                if (*piVar28 != -1) {
                  iVar12 = *piVar28;
                }
                *(int *)(puVar7 + 8) = iVar12;
                uVar14 = *puVar32;
                if (uVar14 == 0) break;
              } while( true );
            }
LAB_036dd2fc:
            uVar10 = 0xfffe;
LAB_036dd300:
            local_7c8 = (uint)uVar10;
            local_7c4 = 0;
            FUN_0277d4ac(&local_7c8);
            lVar33 = *(long *)puVar3;
            uVar14 = FUN_0277d6c4(&local_7c0);
            if (*(long *)puVar3 != 0) {
              lVar33 = *(long *)(lVar33 + 0x57e58);
              uVar14 = (uVar14 & 0xffff) - (uint)*(ushort *)(lVar33 + 0x1f8);
              if ((uVar14 < *(uint *)(lVar33 + 0x1d8)) &&
                 (*(long *)(*(long *)(lVar33 + 0x1e0) + (long)(int)uVar14 * 8) != 0)) {
                FUN_0277d6c4(&local_7c8);
              }
            }
            lVar33 = (*(code *)local_16b0[4])(&local_16b0);
            uVar14 = FUN_0277d6c4(&local_7c0);
            if (((uVar14 >> 3 & 0x1fff) < 0x753) &&
               ((*(uint *)(lVar33 + (ulong)((uVar14 & 0xffff) >> 5) * 4) >> (ulong)(uVar14 & 0x1f) &
                1) != 0)) {
              local_16b4 = 2;
              if ((short)local_7c8 != -2) {
                uVar27 = FUN_02686510(&local_7c8);
                lVar33 = DAT_05ab5ea8;
                if ((uVar27 & 1) == 0) {
                  if (local_16b4 != 0) {
                    lVar2 = DAT_05ab5ea8 + 0x3b0;
                    FUN_0277dedc(&local_7c8);
                    puVar35 = PTR_DAT_04bb2020;
                    lVar33 = (**(code **)(*(long *)(lVar33 + 0x3b0) + 0x18))(lVar2);
                    uVar14 = FUN_0277d6c4(&local_7c8);
                    if ((uVar14 >> 3 & 0x1fff) < 0x753) {
                      lVar2 = (ulong)((uVar14 & 0xffff) >> 5) * 4;
                      *(uint *)(lVar33 + lVar2) =
                           *(uint *)(lVar33 + lVar2) | 1 << (ulong)(uVar14 & 0x1f);
                    }
                  }
                  if (local_16b4 != 1) {
                    FUN_02686340(&local_7c8);
                  }
                }
              }
            }
          }
        }
        uVar19 = uVar19 + 1;
      } while (uVar19 != uVar13);
    }
  }
  local_16a8 = "Unlock_MargeCatalog_General";
  local_16b0 = ppuVar1;
  uVar21 = FUN_02758850(&local_16b0);
  if ((int)uVar21 == 0) {
    local_16b0 = (undefined **)(puVar35 + 0x10);
    local_16a8 = "Unlock_MargeCatalog_DIY";
    iVar12 = FUN_02757a80(uVar21,&local_16b0);
    if ((iVar12 != 0) &&
       (local_7c0 = *(undefined ***)PTR_DAT_04bb46f0, local_7c0 != (undefined **)0x0)) {
      local_16a0 = &local_7c0;
      local_16b0 = &PTR_LAB_04b45510;
      pbStack_1698 = local_7cc;
      local_16a8 = param_1;
      FUN_008a1ba0(&local_f40,&local_16b0);
    }
  }
  else {
    FUN_0264a400(&local_16b0,local_7cc);
    puVar31 = (undefined8 *)&DAT_05ab5e50;
    do {
      uVar13 = 0;
      local_7c0 = &PTR_FUN_049ff448;
      local_7b8 = (char *)puVar31;
      do {
        (*(code *)local_16b0[2])(&local_7c8,&local_16b0,uVar13);
        lVar26 = (*(code *)local_16b0[4])(&local_16b0);
        uVar14 = 1 << (ulong)(uVar13 & 0x1f);
        if ((*(uint *)(lVar26 + (ulong)(uVar13 >> 5) * 4) & uVar14) != 0) {
          lVar26 = *(long *)puVar3;
          uVar15 = FUN_0277d6c4(&local_7c8);
          if (*(long *)puVar3 != 0) {
            lVar26 = *(long *)(lVar26 + 0x57e58);
            uVar15 = (uVar15 & 0xffff) - (uint)*(ushort *)(lVar26 + 0x1f8);
            if (((uVar15 < *(uint *)(lVar26 + 0x1d8)) &&
                (*(long *)(*(long *)(lVar26 + 0x1e0) + (long)(int)uVar15 * 8) != 0)) &&
               (uVar19 = (*(code *)*local_7c0)(&local_7c0,&local_7c8), (uVar19 & 1) == 0))
            goto LAB_036dd4f4;
          }
          lVar26 = (*(code *)local_16b0[3])(&local_16b0);
          lVar33 = (ulong)(uVar13 >> 5) * 4;
          *(uint *)(lVar26 + lVar33) = *(uint *)(lVar26 + lVar33) & (uVar14 ^ 0xffffffff);
        }
LAB_036dd4f4:
        uVar13 = uVar13 + 1;
      } while (uVar13 != 15000);
      puVar31 = (undefined8 *)((long)puVar31 + 4);
    } while (puVar31 != &DAT_05ab5e78);
    pvVar20 = (void *)(**(code **)((long)local_f40 + 0x18))(&local_f40);
    lVar33 = (*(code *)local_16b0[4])(&local_16b0);
    for (lVar26 = 0;
        *(uint *)((long)&local_7c0 + lVar26) =
             *(uint *)(lVar33 + lVar26) | *(uint *)((long)pvVar20 + lVar26), lVar26 != 0x750;
        lVar26 = lVar26 + 8) {
      *(uint *)((long)&local_7c0 + lVar26 + 4) =
           *(uint *)(lVar33 + lVar26 + 4) | *(uint *)((long)pvVar20 + lVar26 + 4);
    }
    memcpy(pvVar20,&local_7c0,0x754);
    *(uint *)((long)pvVar20 + 0x750) = *(uint *)((long)pvVar20 + 0x750) & 0xffffff;
  }
  FUN_02686600(&local_16b0);
  lVar26 = (**(code **)((long)local_f40 + 0x20))(&local_f40);
  uVar19 = 0;
  do {
    if ((*(uint *)(lVar26 + (uVar19 >> 5) * 4) >> (ulong)((uint)uVar19 & 0x1f) & 1) != 0)
    goto LAB_036dd660;
    uVar13 = (uint)uVar19 + 1;
    uVar19 = (ulong)uVar13;
  } while (uVar13 != 15000);
  uVar19 = 0;
LAB_036dd660:
  lVar33 = (**(code **)((long)local_f40 + 0x20))(&local_f40);
  puVar3 = PTR_DAT_04bbfe58;
  puVar35 = PTR_DAT_04bb37e0;
  iVar12 = 15000;
  do {
    if ((*(uint *)(lVar33 + (ulong)(iVar12 - 1U >> 5) * 4) >> (ulong)(iVar12 - 1U & 0x1f) & 1) != 0)
    break;
    iVar12 = iVar12 + -1;
  } while (iVar12 != 0);
  if (iVar12 != (int)uVar19) {
LAB_036dd714:
    puVar31 = (undefined8 *)(puVar3 + uVar19 * 8);
    if (0x752 < (uint)(uVar19 >> 3)) {
      puVar31 = (undefined8 *)puVar3;
    }
    puVar17 = (undefined8 *)puVar35;
    if ((uint)uVar19 < 0x3a99) {
      puVar17 = puVar31;
    }
    local_7c0 = (undefined **)*puVar17;
    lVar33 = (*(code *)local_16b0[4])(&local_16b0);
    uVar13 = FUN_0277d6c4(&local_7c0);
    if ((0x752 < (uVar13 >> 3 & 0x1fff)) ||
       ((*(uint *)(lVar33 + (ulong)((uVar13 & 0xffff) >> 5) * 4) >> (ulong)(uVar13 & 0x1f) & 1) == 0
       )) {
      FUN_0277dedc(&local_7c0);
      lVar33 = (**(code **)(*(long *)(param_1 + 0x3b0) + 0x18))(param_1 + 0x3b0);
      uVar13 = FUN_0277d6c4(&local_7c0);
      if ((uVar13 >> 3 & 0x1fff) < 0x753) {
        lVar2 = (ulong)((uVar13 & 0xffff) >> 5) * 4;
        *(uint *)(lVar33 + lVar2) = *(uint *)(lVar33 + lVar2) | 1 << (ulong)(uVar13 & 0x1f);
      }
      FUN_0277dedc(&local_7c0);
      lVar33 = (*(code *)local_16b0[3])(&local_16b0);
      uVar13 = FUN_0277d6c4(&local_7c0);
      if ((uVar13 >> 3 & 0x1fff) < 0x753) {
        lVar2 = (ulong)((uVar13 & 0xffff) >> 5) * 4;
        *(uint *)(lVar33 + lVar2) = *(uint *)(lVar33 + lVar2) | 1 << (ulong)(uVar13 & 0x1f);
      }
    }
    do {
      uVar13 = (int)uVar19 + 1;
      uVar19 = (ulong)uVar13;
      if (0x752 < uVar13 >> 3) {
        uVar13 = 0x3a95;
        goto LAB_036dd840;
      }
    } while ((*(uint *)(lVar26 + (ulong)(uVar13 >> 5) * 4) >> (ulong)(uVar13 & 0x1f) & 1) == 0);
    goto LAB_036dd70c;
  }
LAB_036dd6a4:
  FUN_02686790(&local_16b0);
  uVar13 = DAT_05ac1978;
  if ((int)DAT_05ac1978 < 1) {
    if ((DAT_05ac1868 == 0) || (*(ushort **)(DAT_05ac1868 + 8) == (ushort *)0x0)) {
      uVar13 = 0;
    }
    else {
      uVar13 = (uint)**(ushort **)(DAT_05ac1868 + 8);
    }
  }
  puVar35 = PTR_DAT_04bb2020 + 0x10;
  local_16a8 = "CoordinatorGrade";
  local_16b0 = (undefined **)puVar35;
  iVar12 = FUN_02758850(&local_16b0);
  if ((uVar13 & 0xffff) != 0) {
    uVar19 = 0;
    puVar3 = PTR_DAT_04bcad28 + 0x10;
    do {
      local_16b0 = (undefined **)puVar3;
      if ((int)DAT_05ac1978 < 1) {
        if (((DAT_05ac1868 != 0) && (puVar32 = *(uint **)(DAT_05ac1868 + 8), puVar32 != (uint *)0x0)
            ) && (((DAT_05ac1880 <= uVar19 || (*(char *)(DAT_05ac1888 + uVar19) != '\0')) &&
                  (((uVar19 < *puVar32 && (puVar32[1] != 0)) && ((ushort)puVar32[2] != 0)))))) {
          iVar16 = 0xc;
          if (*(char *)((long)puVar32 + 10) != '\0') {
            iVar16 = 0x1c;
          }
          local_16a8 = (char *)((ulong)(puVar32[1] * (int)uVar19 + (uint)(ushort)puVar32[2] * 8 +
                                       iVar16) + (long)puVar32);
          goto joined_r0x036ddac0;
        }
      }
      else if (uVar19 < DAT_05ac1978) {
        uVar27 = uVar19;
        if (DAT_05ac1968 <= uVar19) {
          uVar27 = 0;
        }
        local_16a8 = *(char **)(DAT_05ac1970 + uVar27 * 8);
joined_r0x036ddac0:
        if (local_16a8 != (char *)0x0) {
          iVar16 = FUN_03789370(&local_16b0);
          if (iVar16 <= iVar12) {
            FUN_03789240(&local_7c0,&local_16b0);
            local_7c8 = 2;
            if ((short)local_7c0 != -2) {
              uVar27 = FUN_02686510(&local_7c0);
              lVar26 = DAT_05ab5ea8;
              if ((uVar27 & 1) == 0) {
                if (local_7c8 != 0) {
                  lVar33 = DAT_05ab5ea8 + 0x3b0;
                  FUN_0277dedc(&local_7c0);
                  lVar26 = (**(code **)(*(long *)(lVar26 + 0x3b0) + 0x18))(lVar33);
                  uVar14 = FUN_0277d6c4(&local_7c0);
                  if ((uVar14 >> 3 & 0x1fff) < 0x753) {
                    lVar33 = (ulong)((uVar14 & 0xffff) >> 5) * 4;
                    *(uint *)(lVar26 + lVar33) =
                         *(uint *)(lVar26 + lVar33) | 1 << (ulong)(uVar14 & 0x1f);
                  }
                }
                if (local_7c8 != 1) {
                  FUN_02686340(&local_7c0);
                }
              }
            }
          }
        }
      }
      uVar19 = uVar19 + 1;
    } while ((uVar13 & 0xffff) != uVar19);
  }
  local_f38 = "IsDoneOrderPostUnlockCeiling";
  local_f40 = (undefined **)puVar35;
  iVar12 = FUN_02758850(&local_f40);
  if (iVar12 != 0) {
    return;
  }
  lVar26 = *(long *)PTR_DAT_04bb39b0;
  pbVar24 = PTR_DAT_04bb32e0;
  if (lVar26 == 0) {
    bVar25 = *PTR_DAT_04bb32e0;
joined_r0x036ddb6c:
    if (7 < bVar25) {
LAB_036ddb70:
      if (*(long **)PTR_DAT_04bb27d0 != (long *)0x0) {
        lVar26 = **(long **)PTR_DAT_04bb27d0;
        bVar25 = *(byte *)(lVar26 + 0x473);
        pbVar24 = PTR_DAT_04bb5038;
        if ((long)(char)bVar25 != 0xffffffffffffffff) {
          puVar32 = (uint *)(lVar26 + 0x48) + ((long)(char)bVar25 & 0xffffffffU) * 0x20;
          if (7 < bVar25) {
            puVar32 = (uint *)(lVar26 + 0x48);
          }
          if ((*puVar32 & 8) != 0) {
            pbVar24 = (byte *)(lVar26 + 0x471);
          }
        }
        bVar25 = *pbVar24;
        bVar9 = 7 < bVar25;
        if (bVar9) {
          bVar25 = 0xff;
        }
        local_7c0 = (undefined **)CONCAT71(local_7c0._1_7_,bVar25);
        if (!bVar9) goto LAB_036ddbf0;
      }
      pbVar24 = PTR_DAT_04bb5038;
    }
  }
  else {
    if (*(int *)(lVar26 + 0x15c) != 0) {
      pbVar24 = (byte *)(lVar26 + 0x158);
    }
    if (7 < *pbVar24) {
      if ((*(int *)(lVar26 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar24 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        bVar25 = *pbVar24;
        goto joined_r0x036ddb6c;
      }
      goto LAB_036ddb70;
    }
  }
  bVar25 = *pbVar24;
  if (7 < bVar25) {
    bVar25 = 0xff;
  }
  local_7c0 = (undefined **)CONCAT71(local_7c0._1_7_,bVar25);
LAB_036ddbf0:
  puVar35 = PTR_DAT_04bb2020 + 0x10;
  local_f38 = "UnlockInterior_CeilingFurniture";
  local_f40 = (undefined **)puVar35;
  iVar12 = FUN_0274bce0(&local_7c0,&local_f40);
  if (iVar12 == 0) {
    local_16a8 = "SeqCeilingEventReady";
    local_16b0 = (undefined **)puVar35;
    iVar12 = FUN_02758850(&local_16b0);
    if (iVar12 == 0) {
      return;
    }
  }
  local_f40 = (undefined **)(PTR_DAT_04bbfe60 + 0x10);
  memset(&local_f38,0,0x754);
  uVar13 = nn::os::GetSystemTick();
  local_7e4 = (uVar13 ^ uVar13 >> 0x1e) * 0x6c078965 + 1;
  local_7e0 = (local_7e4 ^ local_7e4 >> 0x1e) * 0x6c078965 + 2;
  local_7dc = (local_7e0 ^ local_7e0 >> 0x1e) * 0x6c078965 + 3;
  local_7d8 = (local_7dc ^ local_7dc >> 0x1e) * 0x6c078965 + 4;
  pvVar20 = (void *)FUN_01a451fc(&local_f40);
  memset(pvVar20,0,0x754);
  local_7c0 = (undefined **)CONCAT44(local_7c0._4_4_,2);
  local_16b0 = &PTR_FUN_049ff498;
  local_16a8 = (char *)&local_7c0;
  FUN_008a1ba0(&local_f40,&local_16b0);
  FUN_02686600(&local_16b0);
  pvVar20 = (void *)(**(code **)((long)local_f40 + 0x18))(&local_f40);
  lVar33 = (*(code *)local_16b0[4])(&local_16b0);
  for (lVar26 = 0;
      *(uint *)((long)&local_7c0 + lVar26) =
           *(uint *)(lVar33 + lVar26) & *(uint *)((long)pvVar20 + lVar26), lVar26 != 0x750;
      lVar26 = lVar26 + 8) {
    *(uint *)((long)&local_7c0 + lVar26 + 4) =
         *(uint *)(lVar33 + lVar26 + 4) & *(uint *)((long)pvVar20 + lVar26 + 4);
  }
  memcpy(pvVar20,&local_7c0,0x754);
  *(uint *)((long)pvVar20 + 0x750) = *(uint *)((long)pvVar20 + 0x750) & 0xffffff;
  pvVar20 = (void *)(**(code **)(*(long *)(param_1 + 0x3b0) + 0x18))(param_1 + 0x3b0);
  lVar33 = (**(code **)((long)local_f40 + 0x20))(&local_f40);
  for (lVar26 = 0;
      *(uint *)((long)&local_16b0 + lVar26) =
           *(uint *)(lVar33 + lVar26) | *(uint *)((long)pvVar20 + lVar26), lVar26 != 0x750;
      lVar26 = lVar26 + 8) {
    *(uint *)((long)&local_16b0 + lVar26 + 4) =
         *(uint *)(lVar33 + lVar26 + 4) | *(uint *)((long)pvVar20 + lVar26 + 4);
  }
  memcpy(pvVar20,&local_16b0,0x754);
  *(uint *)((long)pvVar20 + 0x750) = *(uint *)((long)pvVar20 + 0x750) & 0xffffff;
  return;
  while( true ) {
    uVar14 = uVar13 + 1;
    if ((*(uint *)(lVar26 + (ulong)(uVar14 >> 5) * 4) >> (ulong)(uVar14 & 0x1f) & 1) != 0)
    goto LAB_036dc4f0;
    if ((*(uint *)(lVar26 + (ulong)(uVar13 >> 5) * 4) >> (ulong)(uVar13 & 0x1f) & 1) != 0)
    goto LAB_036dc4f4;
    uVar13 = uVar13 - 3;
    if (uVar13 == 0xfffffffd) break;
LAB_036dc610:
    uVar14 = uVar13 + 2;
    if ((*(uint *)(lVar26 + (ulong)(uVar14 >> 5) * 4) >> (ulong)(uVar14 & 0x1f) & 1) != 0) {
LAB_036dc4f0:
      uVar13 = uVar14;
LAB_036dc4f4:
      uVar19 = (ulong)(uVar13 + 1);
      goto LAB_036dc4f8;
    }
  }
  uVar19 = 0;
LAB_036dc4f8:
  if (iVar12 == (int)uVar19) goto LAB_036dc494;
  goto LAB_036dc500;
  while (uVar13 = uVar13 - 3, uVar13 != 0xfffffffd) {
LAB_036dd840:
    uVar14 = uVar13 + 2;
    if ((((*(uint *)(lVar26 + (ulong)(uVar14 >> 5) * 4) >> (ulong)(uVar14 & 0x1f) & 1) != 0) ||
        (uVar14 = uVar13 + 1,
        (*(uint *)(lVar26 + (ulong)(uVar14 >> 5) * 4) >> (ulong)(uVar14 & 0x1f) & 1) != 0)) ||
       (uVar14 = uVar13,
       (*(uint *)(lVar26 + (ulong)(uVar13 >> 5) * 4) >> (ulong)(uVar13 & 0x1f) & 1) != 0)) {
      uVar19 = (ulong)(uVar14 + 1);
      goto LAB_036dd70c;
    }
  }
  uVar19 = 0;
LAB_036dd70c:
  if (iVar12 == (int)uVar19) goto LAB_036dd6a4;
  goto LAB_036dd714;
}


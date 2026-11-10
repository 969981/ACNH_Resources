
/* WARNING: Type propagation algorithm not settling */

void FUN_0030b300(undefined8 param_1,long param_2,long param_3,undefined8 param_4,long param_5,
                 undefined8 param_6,int param_7)

{
  ulong uVar1;
  byte bVar2;
  ulong uVar3;
  undefined4 uVar4;
  char cVar5;
  byte bVar6;
  undefined1 uVar7;
  undefined *puVar8;
  bool bVar9;
  undefined4 uVar10;
  int iVar11;
  long lVar12;
  undefined8 uVar13;
  ulong uVar14;
  short sVar15;
  uint uVar16;
  undefined4 *puVar17;
  ulong uVar18;
  undefined4 *puVar19;
  undefined4 *puVar20;
  undefined1 *puVar21;
  undefined1 *puVar22;
  byte *pbVar23;
  undefined8 *puVar24;
  long lVar25;
  ulong uVar26;
  long lVar27;
  long lVar28;
  undefined4 *local_d0 [5];
  undefined8 *local_a8 [2];
  undefined8 local_98;
  undefined4 *local_90;
  undefined4 *local_88;
  undefined4 **local_80;
  undefined8 uStack_78;
  undefined1 uStack_69;
  undefined8 *local_68;
  
  if (param_3 != 0) {
    FUN_00313d28(param_3);
    if ((*(byte *)(param_2 + 0xd30) >> 4 & 1) != 0) {
      FUN_00313e34(param_3,*(undefined4 *)(param_2 + 0x14));
    }
    uVar10 = FUN_002e0778(*(undefined4 *)(param_2 + 0x18));
    FUN_00313e48(param_3,uVar10);
    if ((*(byte *)(param_2 + 0xd30) & 1) != 0) {
      sVar15 = *(short *)(param_2 + 0xa34);
      if (*(short *)(param_2 + 0xa36) == -1) {
        if (sVar15 != -1) goto LAB_0030b3a8;
      }
      else {
        bVar9 = sVar15 == -1;
        sVar15 = *(short *)(param_2 + 0xa36);
        if (bVar9) {
LAB_0030b3a8:
          FUN_00313e5c(param_3,sVar15);
        }
        else {
          FUN_00313e70();
        }
      }
    }
    if ((*(byte *)(param_2 + 0xd30) >> 1 & 1) != 0) {
      sVar15 = *(short *)(param_2 + 0xa38);
      if (*(short *)(param_2 + 0xa3a) == -1) {
        if (sVar15 != -1) goto LAB_0030b3ec;
      }
      else {
        bVar9 = sVar15 == -1;
        sVar15 = *(short *)(param_2 + 0xa3a);
        if (bVar9) {
LAB_0030b3ec:
          FUN_00313e8c(param_3,sVar15);
        }
        else {
          FUN_00313ea0();
        }
      }
    }
    uVar16 = *(uint *)(param_2 + 0xd30);
    if ((uVar16 >> 2 & 1) == 0) {
      if ((uVar16 >> 3 & 1) == 0) goto LAB_0030b3fc;
LAB_0030b46c:
      FUN_0031401c(param_3,*(undefined1 *)(param_2 + 0xa3d));
      uVar16 = *(uint *)(param_2 + 0xd30);
      if ((uVar16 >> 0xc & 1) != 0) goto LAB_0030b480;
LAB_0030b400:
      if ((uVar16 >> 0xd & 1) == 0) goto LAB_0030b404;
LAB_0030b494:
      FUN_00314034(param_3,*(undefined1 *)(param_2 + 0x9cb));
      if ((*(uint *)(param_2 + 0xd30) >> 0x16 & 1) != 0) goto LAB_0030b4a8;
LAB_0030b408:
      if (*(int *)(param_2 + 0x9cc) == 2) goto LAB_0030b414;
LAB_0030b4bc:
      uVar10 = FUN_002e72dc();
      FUN_0031403c(param_3,uVar10);
      cVar5 = *(char *)(param_2 + 0xd32);
    }
    else {
      FUN_00314014(param_3,*(undefined1 *)(param_2 + 0xa3c));
      uVar16 = *(uint *)(param_2 + 0xd30);
      if ((uVar16 >> 3 & 1) != 0) goto LAB_0030b46c;
LAB_0030b3fc:
      if ((uVar16 >> 0xc & 1) == 0) goto LAB_0030b400;
LAB_0030b480:
      FUN_0031402c(param_3,*(undefined1 *)(param_2 + 0x9ca));
      uVar16 = *(uint *)(param_2 + 0xd30);
      if ((uVar16 >> 0xd & 1) != 0) goto LAB_0030b494;
LAB_0030b404:
      if ((uVar16 >> 0x16 & 1) == 0) goto LAB_0030b408;
LAB_0030b4a8:
      *(undefined4 *)(param_3 + 0x104) = *(undefined4 *)(param_2 + 0xa30);
      if (*(int *)(param_2 + 0x9cc) != 2) goto LAB_0030b4bc;
LAB_0030b414:
      lVar25 = param_5 + 0x10;
      FUN_00202558(lVar25,*(undefined8 *)(param_5 + 0x18));
      *(undefined8 **)(param_5 + 0x10) = (undefined8 *)(param_5 + 0x18);
      *(undefined8 *)(param_5 + 0x18) = 0;
      *(undefined8 *)(param_5 + 0x20) = 0;
      uVar16 = *(uint *)(param_2 + 0xd30);
      if ((uVar16 >> 0xf & 1) != 0) {
        uVar10 = *(undefined4 *)(param_2 + 0x9d0);
        local_90 = (undefined4 *)((ulong)local_90 & 0xffffffffffffff00);
        puVar17 = (undefined4 *)(PTR_DAT_04bc0ec8 + 0x10);
        local_80 = &local_90;
        uStack_78 = 0x10;
        local_98 = puVar17;
        FUN_0018b070(&local_98,*(undefined8 *)PTR_PTR_04bceaf8,0xffffffffffffffff);
        FUN_0018d8ac(local_d0,uVar10);
        local_a8[0] = &local_98;
        lVar28 = FUN_00203760(lVar25,&local_98,PTR_piecewise_construct_04bcbf80,local_a8,&local_68);
        FUN_0018d620(lVar28 + 0x48,local_d0);
        FUN_0018d854(local_d0);
        local_98 = puVar17;
        FUN_0018b1a0(&local_98);
        uVar16 = *(uint *)(param_2 + 0xd30);
      }
      if ((uVar16 >> 0x10 & 1) != 0) {
        uVar10 = *(undefined4 *)(param_2 + 0x9d4);
        local_90 = (undefined4 *)((ulong)local_90 & 0xffffffffffffff00);
        puVar17 = (undefined4 *)((long)PTR_DAT_04bc0ec8 + 0x10);
        local_80 = &local_90;
        uStack_78 = 0x10;
        local_98 = puVar17;
        FUN_0018b070(&local_98,*(undefined8 *)PTR_PTR_04bcea20,0xffffffffffffffff);
        FUN_0018d8ac(local_d0,uVar10);
        local_a8[0] = &local_98;
        lVar28 = FUN_00203760(lVar25,&local_98,PTR_piecewise_construct_04bcbf80,local_a8,&local_68);
        FUN_0018d620(lVar28 + 0x48,local_d0);
        FUN_0018d854(local_d0);
        local_98 = puVar17;
        FUN_0018b1a0(&local_98);
        uVar16 = *(uint *)(param_2 + 0xd30);
      }
      if ((uVar16 >> 0x11 & 1) != 0) {
        uVar10 = *(undefined4 *)(param_2 + 0x9d8);
        local_90 = (undefined4 *)((ulong)local_90 & 0xffffffffffffff00);
        puVar17 = (undefined4 *)((long)PTR_DAT_04bc0ec8 + 0x10);
        local_80 = &local_90;
        uStack_78 = 0x10;
        local_98 = puVar17;
        FUN_0018b070(&local_98,*(undefined8 *)PTR_PTR_04bcea30,0xffffffffffffffff);
        FUN_0018d8ac(local_d0,uVar10);
        local_a8[0] = &local_98;
        lVar28 = FUN_00203760(lVar25,&local_98,PTR_piecewise_construct_04bcbf80,local_a8,&local_68);
        FUN_0018d620(lVar28 + 0x48,local_d0);
        FUN_0018d854(local_d0);
        local_98 = puVar17;
        FUN_0018b1a0(&local_98);
        uVar16 = *(uint *)(param_2 + 0xd30);
      }
      if ((uVar16 >> 0x12 & 1) != 0) {
        uVar10 = *(undefined4 *)(param_2 + 0x9dc);
        local_90 = (undefined4 *)((ulong)local_90 & 0xffffffffffffff00);
        puVar17 = (undefined4 *)((long)PTR_DAT_04bc0ec8 + 0x10);
        local_80 = &local_90;
        uStack_78 = 0x10;
        local_98 = puVar17;
        FUN_0018b070(&local_98,*(undefined8 *)PTR_PTR_04bcea28,0xffffffffffffffff);
        FUN_0018d8ac(local_d0,uVar10);
        local_a8[0] = &local_98;
        lVar28 = FUN_00203760(lVar25,&local_98,PTR_piecewise_construct_04bcbf80,local_a8,&local_68);
        FUN_0018d620(lVar28 + 0x48,local_d0);
        FUN_0018d854(local_d0);
        local_98 = puVar17;
        FUN_0018b1a0(&local_98);
        uVar16 = *(uint *)(param_2 + 0xd30);
      }
      if ((uVar16 >> 0x14 & 1) != 0) {
        uVar7 = *(undefined1 *)(param_2 + 0xa08);
        local_90 = (undefined4 *)((ulong)local_90 & 0xffffffffffffff00);
        puVar17 = (undefined4 *)(PTR_DAT_04bc0ec8 + 0x10);
        local_80 = &local_90;
        uStack_78 = 0x10;
        local_98 = puVar17;
        FUN_0018b070(&local_98,*(undefined8 *)PTR_PTR_04bcea38,0xffffffffffffffff);
        FUN_0018d8d0(local_d0,uVar7);
        local_a8[0] = &local_98;
        lVar28 = FUN_00203760(lVar25,&local_98,PTR_piecewise_construct_04bcbf80,local_a8,&local_68);
        FUN_0018d620(lVar28 + 0x48,local_d0);
        FUN_0018d854(local_d0);
        local_98 = puVar17;
        FUN_0018b1a0(&local_98);
        uVar16 = *(uint *)(param_2 + 0xd30);
      }
      if ((uVar16 >> 0x15 & 1) != 0) {
        FUN_002bed30(param_2 + 0xa10,param_4);
        FUN_001e18ec(local_d0,param_4);
        local_90 = (undefined4 *)((ulong)local_90 & 0xffffffffffffff00);
        puVar17 = (undefined4 *)(PTR_DAT_04bc0ec8 + 0x10);
        local_80 = &local_90;
        uStack_78 = 0x10;
        local_98 = puVar17;
        FUN_0018b070(&local_98,*(undefined8 *)PTR_PTR_04bcea40,0xffffffffffffffff);
        FUN_0018d8e0(local_a8,local_d0);
        local_68 = &local_98;
        lVar28 = FUN_00203760(lVar25,&local_98,PTR_piecewise_construct_04bcbf80,&local_68,&uStack_69
                             );
        FUN_0018d620(lVar28 + 0x48,local_a8);
        FUN_0018d854(local_a8);
        local_98 = puVar17;
        FUN_0018b1a0(&local_98);
        local_d0[0] = puVar17;
        FUN_0018b1a0(local_d0);
        uVar16 = *(uint *)(param_2 + 0xd30);
      }
      if ((uVar16 >> 0x13 & 1) != 0) {
        lVar28 = param_2 + 0x9e0;
        iVar11 = FUN_00227d94(lVar28);
        if (iVar11 == 2) {
          uVar13 = FUN_00227acc(lVar28);
          local_90 = (undefined4 *)((ulong)local_90 & 0xffffffffffffff00);
          puVar17 = (undefined4 *)(PTR_DAT_04bc0ec8 + 0x10);
          local_80 = &local_90;
          uStack_78 = 0x10;
          local_98 = puVar17;
          FUN_0018b1d0(&local_98,uVar13,0xffffffffffffffff);
        }
        else {
          uVar13 = FUN_00227acc(lVar28);
          local_90 = (undefined4 *)((ulong)local_90 & 0xffffffffffffff00);
          puVar17 = (undefined4 *)(PTR_DAT_04bc0ec8 + 0x10);
          local_80 = &local_90;
          uStack_78 = 0x10;
          local_98 = puVar17;
          FUN_0018b070(&local_98,uVar13,0xffffffffffffffff);
        }
        FUN_003136a0(param_5,&local_98);
        local_98 = puVar17;
        FUN_0018b1a0(&local_98);
      }
      puVar8 = PTR_piecewise_construct_04bcbf80;
      lVar27 = 0;
      puVar24 = (undefined8 *)(param_2 + 0xb00);
      lVar28 = param_2 + 0xa40;
      puVar17 = (undefined4 *)(PTR_DAT_04bc0ec8 + 0x10);
      do {
        if ((((*(uint *)(param_2 + 0xd30) >> (ulong)((uint)lVar27 & 0x1f)) >> 0x19 & 1) != 0) &&
           (iVar11 = FUN_00227cb0(lVar28), iVar11 != 0)) {
          switch(*(undefined4 *)(puVar24 + 1)) {
          case 1:
            uVar13 = FUN_00227acc(lVar28);
            local_90 = (undefined4 *)((ulong)local_90 & 0xffffffffffffff00);
            uStack_78 = 0x10;
            local_98 = puVar17;
            local_80 = &local_90;
            FUN_0018b070(&local_98,uVar13,0xffffffffffffffff);
            FUN_0018d888(local_d0,*puVar24);
            puVar19 = puVar17;
            break;
          case 2:
            uVar13 = FUN_00227acc(lVar28);
            local_90 = (undefined4 *)((ulong)local_90 & 0xffffffffffffff00);
            puVar19 = (undefined4 *)(PTR_DAT_04bc0ec8 + 0x10);
            uStack_78 = 0x10;
            local_98 = puVar19;
            local_80 = &local_90;
            FUN_0018b070(&local_98,uVar13,0xffffffffffffffff);
            FUN_0018d878(local_d0,*puVar24);
            break;
          case 3:
            uVar13 = FUN_00227acc(lVar28);
            local_90 = (undefined4 *)((ulong)local_90 & 0xffffffffffffff00);
            puVar19 = (undefined4 *)(PTR_DAT_04bc0ec8 + 0x10);
            uStack_78 = 0x10;
            local_98 = puVar19;
            local_80 = &local_90;
            FUN_0018b070(&local_98,uVar13,0xffffffffffffffff);
            FUN_0018d8ac(local_d0,*(undefined4 *)puVar24);
            break;
          case 4:
            uVar13 = FUN_00227acc(lVar28);
            local_90 = (undefined4 *)((ulong)local_90 & 0xffffffffffffff00);
            puVar19 = (undefined4 *)(PTR_DAT_04bc0ec8 + 0x10);
            uStack_78 = 0x10;
            local_98 = puVar19;
            local_80 = &local_90;
            FUN_0018b070(&local_98,uVar13,0xffffffffffffffff);
            FUN_0018d898(local_d0,*(undefined4 *)puVar24);
            break;
          case 5:
            uVar13 = FUN_00227acc(lVar28);
            local_90 = (undefined4 *)((ulong)local_90 & 0xffffffffffffff00);
            puVar19 = (undefined4 *)(PTR_DAT_04bc0ec8 + 0x10);
            uStack_78 = 0x10;
            local_98 = puVar19;
            local_80 = &local_90;
            FUN_0018b070(&local_98,uVar13,0xffffffffffffffff);
            FUN_0018d8d0(local_d0,*(undefined1 *)puVar24);
            break;
          case 6:
            uVar13 = FUN_00227acc(lVar28);
            local_90 = (undefined4 *)((ulong)local_90 & 0xffffffffffffff00);
            puVar19 = (undefined4 *)(PTR_DAT_04bc0ec8 + 0x10);
            uStack_78 = 0x10;
            local_98 = puVar19;
            local_80 = &local_90;
            FUN_0018b070(&local_98,uVar13,0xffffffffffffffff);
            FUN_0018d8c0(*puVar24,local_d0);
            break;
          default:
            goto switchD_0030ba1c_default;
          }
          local_a8[0] = &local_98;
          lVar12 = FUN_00203760(lVar25,&local_98,puVar8,local_a8,&local_68);
          FUN_0018d620(lVar12 + 0x48,local_d0);
          FUN_0018d854(local_d0);
          local_98 = puVar19;
          FUN_0018b1a0(&local_98);
        }
switchD_0030ba1c_default:
        lVar27 = lVar27 + 1;
        puVar24 = puVar24 + 2;
        lVar28 = lVar28 + 0x40;
      } while (lVar27 != 3);
      if ((*(byte *)(param_2 + 0xd33) & 1) != 0) {
        iVar11 = FUN_00227cb0(param_2 + 0xb30);
        if (iVar11 != 0) {
          iVar11 = FUN_00227cb0(param_2 + 0xb70);
          if (iVar11 != 0) {
            uVar13 = FUN_00227acc(param_2 + 0xb30);
            local_90 = (undefined4 *)((ulong)local_90 & 0xffffffffffffff00);
            puVar17 = (undefined4 *)(PTR_DAT_04bc0ec8 + 0x10);
            local_80 = &local_90;
            uStack_78 = 0x10;
            local_98 = puVar17;
            FUN_0018b070(&local_98,uVar13,0xffffffffffffffff);
            uVar13 = FUN_00227acc(param_2 + 0xb70);
            FUN_0018d9c0(local_d0,uVar13);
            local_a8[0] = &local_98;
            lVar25 = FUN_00203760(lVar25,&local_98,PTR_piecewise_construct_04bcbf80,local_a8,
                                  &local_68);
            FUN_0018d620(lVar25 + 0x48,local_d0);
            FUN_0018d854(local_d0);
            local_98 = puVar17;
            FUN_0018b1a0(&local_98);
          }
        }
      }
      uVar10 = FUN_002e72dc(*(undefined4 *)(param_2 + 0x9cc));
      FUN_00314044(param_3,uVar10,param_5);
      cVar5 = *(char *)(param_2 + 0xd32);
    }
    if (cVar5 < '\0') {
      lVar25 = param_2 + 0xc90;
      iVar11 = FUN_00227d94(lVar25);
      if (iVar11 == 2) {
        uVar13 = FUN_00227acc(lVar25);
        local_90 = (undefined4 *)((ulong)local_90 & 0xffffffffffffff00);
        puVar17 = (undefined4 *)(PTR_DAT_04bc0ec8 + 0x10);
        local_80 = &local_90;
        uStack_78 = 0x10;
        local_98 = puVar17;
        FUN_0018b1d0(&local_98,uVar13,0xffffffffffffffff);
      }
      else {
        uVar13 = FUN_00227acc(lVar25);
        local_90 = (undefined4 *)((ulong)local_90 & 0xffffffffffffff00);
        puVar17 = (undefined4 *)(PTR_DAT_04bc0ec8 + 0x10);
        local_80 = &local_90;
        uStack_78 = 0x10;
        local_98 = puVar17;
        FUN_0018b070(&local_98,uVar13,0xffffffffffffffff);
      }
      uVar14 = FUN_00314070(param_3,&local_98);
      local_98 = puVar17;
      FUN_0018b1a0(&local_98);
      if ((uVar14 & 1) == 0) {
        local_98 = (undefined4 *)CONCAT44(local_98._4_4_,0x10c07);
        goto LAB_0030bfa0;
      }
    }
    bVar2 = *(char *)(param_2 + 0xa3d) << 3;
    if (*(char *)(param_2 + 0xa3c) != '\0') {
      bVar2 = *(char *)(param_2 + 0xa3d) << 3 | 4;
    }
    if (*(char *)(param_2 + 0x9ca) != '\0') {
      bVar2 = bVar2 | 2;
    }
    if (*(long **)PTR_DAT_04bcb8d8 != (long *)0x0) {
      bVar6 = *(byte *)(param_2 + 0x9cb);
      uVar14 = (**(code **)(**(long **)PTR_DAT_04bcb8d8 + 0x58))();
      if ((uVar14 & 1) != 0) {
        if (param_7 == 0) {
          puVar17 = (undefined4 *)(PTR_DAT_04bccf00 + 0xbc);
          puVar19 = (undefined4 *)(PTR_DAT_04bccf00 + 0xc0);
          puVar20 = (undefined4 *)(PTR_DAT_04bccf00 + 0xb8);
          puVar21 = PTR_DAT_04bccf00 + 0xb7;
          puVar22 = PTR_DAT_04bccf00 + 0xb5;
          pbVar23 = PTR_DAT_04bccf00 + 0xb4;
        }
        else {
          if (param_7 != 1) goto LAB_0030bdd8;
          puVar17 = (undefined4 *)(PTR_DAT_04bccf00 + 0xcc);
          puVar19 = (undefined4 *)(PTR_DAT_04bccf00 + 0xd0);
          puVar20 = (undefined4 *)(PTR_DAT_04bccf00 + 200);
          puVar21 = PTR_DAT_04bccf00 + 199;
          puVar22 = PTR_DAT_04bccf00 + 0xc5;
          pbVar23 = PTR_DAT_04bccf00 + 0xc4;
        }
        uVar10 = *(undefined4 *)(param_2 + 0x9d8);
        *pbVar23 = bVar2 | bVar6;
        uVar4 = *(undefined4 *)(param_2 + 0x9cc);
        *puVar19 = uVar10;
        uVar7 = *(undefined1 *)(param_2 + 0xa08);
        uVar10 = *(undefined4 *)(param_2 + 0x9dc);
        *puVar20 = *(undefined4 *)(param_2 + 0x9d4);
        *puVar22 = (char)uVar4;
        *puVar21 = uVar7;
        *puVar17 = uVar10;
      }
    }
LAB_0030bdd8:
    uVar14 = 0;
    do {
      if (((*(uint *)(param_2 + 0xd30) >> (ulong)((uint)uVar14 & 0x1f)) >> 6 & 1) != 0) {
        lVar25 = param_2 + uVar14 * 4;
        if (*(char *)(param_2 + uVar14 + 0x9c4) == '\0') {
          if (*(int *)(lVar25 + 0x97c) != 0) {
            if (*(int *)(lVar25 + 0x97c) == 1) {
              FUN_00313ebc(param_3,uVar14 & 0xffffffff,
                           *(undefined4 *)(param_2 + uVar14 * 400 + 0x1c));
            }
            else {
              uVar26 = 0;
              local_98 = (undefined4 *)0x0;
              local_90 = (undefined4 *)0x0;
              local_88 = (undefined4 *)0x0;
              do {
                puVar17 = (undefined4 *)(param_2 + uVar14 * 400 + uVar26 * 4 + 0x1c);
                if (local_90 == local_88) {
                  uVar18 = (long)local_90 - (long)local_98;
                  lVar28 = (long)uVar18 >> 2;
                  uVar1 = lVar28 + 1;
                  if (uVar1 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_001a3240(&local_98);
                  }
                  uVar3 = (long)uVar18 >> 1;
                  if ((ulong)((long)uVar18 >> 1) <= uVar1) {
                    uVar3 = uVar1;
                  }
                  if (0x7ffffffffffffffb < uVar18) {
                    uVar3 = 0x3fffffffffffffff;
                  }
                  if (uVar3 == 0) {
                    lVar27 = 0;
                    puVar19 = (undefined4 *)(lVar28 * 4);
                    puVar20 = puVar19 + 1;
                    *puVar19 = *puVar17;
                    if (local_90 != local_98) goto LAB_0030bf00;
                  }
                  else {
                    lVar27 = FUN_00187df4(uVar3 << 2);
                    puVar19 = (undefined4 *)(lVar27 + lVar28 * 4);
                    puVar20 = puVar19 + 1;
                    *puVar19 = *puVar17;
                    if (local_90 != local_98) {
LAB_0030bf00:
                      do {
                        local_90 = local_90 + -1;
                        puVar19 = puVar19 + -1;
                        *puVar19 = *local_90;
                      } while (local_90 != local_98);
                    }
                  }
                  local_88 = (undefined4 *)(lVar27 + uVar3 * 4);
                  bVar9 = local_98 != (undefined4 *)0x0;
                  local_98 = puVar19;
                  local_90 = puVar20;
                  if (bVar9) {
                    FUN_00187e4c();
                  }
                }
                else {
                  *local_90 = *puVar17;
                  local_90 = local_90 + 1;
                }
                uVar26 = uVar26 + 1;
              } while (uVar26 < *(uint *)(lVar25 + 0x97c));
              FUN_00313ee0(param_3,uVar14 & 0xffffffff,&local_98);
              if (local_98 != (undefined4 *)0x0) {
                local_90 = local_98;
                FUN_00187e4c();
              }
            }
          }
        }
        else {
          FUN_00313ffc(param_3,uVar14 & 0xffffffff,*(undefined4 *)(lVar25 + 0x994),
                       *(undefined4 *)(lVar25 + 0x9ac));
        }
      }
      uVar14 = uVar14 + 1;
    } while (uVar14 != 6);
  }
  local_98 = (undefined4 *)(PTR_DAT_04bc0fe8 + 0x10);
  local_90 = (undefined4 *)
             (CONCAT44(*(undefined4 *)(param_2 + 8),(int)local_90) & 0xffffffffffffff00);
  local_88 = (undefined4 *)CONCAT44(local_88._4_4_,*(undefined4 *)(param_2 + 0xc));
  FUN_001fed98(param_3 + 0x130,&local_98);
  local_98 = (undefined4 *)((ulong)local_98 & 0xffffffff00000000);
LAB_0030bfa0:
  local_d0[0] = (undefined4 *)((ulong)local_d0[0] & 0xffffffff00000000);
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((long)&local_98 + 4),(Result *)local_d0);
  FUN_002296c4(param_1,&local_98);
  return;
}


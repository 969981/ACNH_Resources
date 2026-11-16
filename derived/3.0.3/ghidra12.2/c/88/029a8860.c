
void FUN_029a8860(long param_1,uint param_2,byte param_3)

{
  undefined4 *puVar1;
  long *plVar2;
  undefined *puVar3;
  long *plVar4;
  uint uVar5;
  short sVar6;
  bool bVar7;
  undefined2 uVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined **ppuVar14;
  bool bVar15;
  long lVar16;
  long *plVar17;
  long lVar18;
  long *plVar19;
  int *piVar20;
  long lVar21;
  uint *puVar22;
  long lVar23;
  int *piVar24;
  int local_e4;
  int local_e0;
  int local_dc;
  undefined *local_d8;
  undefined8 local_d0;
  int local_c8;
  undefined4 uStack_c4;
  undefined1 uStack_c0;
  undefined1 uStack_bf;
  byte bStack_be;
  undefined1 uStack_bd;
  undefined2 local_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  int local_90;
  undefined4 uStack_8c;
  undefined1 uStack_88;
  undefined1 uStack_87;
  byte bStack_86;
  undefined1 uStack_85;
  undefined2 local_84;
  undefined8 local_80;
  undefined8 uStack_78;
  int local_6c [3];
  
  local_a0 = (undefined *)CONCAT44(0xffffffff,(undefined4)local_a0);
  param_3 = param_3 & 1;
  uVar12 = FUN_037839b0(&local_a0);
  if ((uVar12 & 1) != 0) {
    lVar23 = *(long *)(param_1 + 0xa0);
    local_6c[0] = (int)local_a0._2_2_;
    lVar16 = 0x109;
    if (*(uint *)(param_1 + 0x98) < 0x10a) {
      lVar16 = 0;
    }
    lVar21 = lVar23 + lVar16 * 400;
    *(undefined1 *)(lVar21 + 8) = (undefined1)local_a0;
    piVar20 = (int *)(lVar21 + 0x18);
    *piVar20 = local_a0._4_4_;
    FUN_029a7d90(param_1,lVar21,local_6c);
    puVar22 = (uint *)(lVar21 + 0xc);
    if ((int)*puVar22 < 0) {
      local_a0 = (undefined *)0xfffe;
      FUN_0277d4ac(&local_a0);
      ppuVar14 = (undefined **)&local_a0;
    }
    else {
      local_d8 = (undefined *)0xfffe;
      FUN_0277d4ac(&local_d8);
      uVar5 = *puVar22;
      uVar10 = 0;
      if (uVar5 != 99999 && -1 < (int)uVar5) {
        uVar10 = uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU);
      }
      for (lVar21 = *(long *)(DAT_055f6860 + 0x19f820); lVar21 != 0; lVar21 = *(long *)(lVar21 + 8))
      {
        while (*(int *)(lVar21 + 0x20) <= (int)uVar10) {
          if ((int)uVar10 <= *(int *)(lVar21 + 0x20)) {
            local_a0 = (undefined *)(ulong)(ushort)*(undefined4 *)(lVar21 + 0x2c);
            goto LAB_029a89a0;
          }
          lVar21 = *(long *)(lVar21 + 0x10);
          if (lVar21 == 0) goto LAB_029a896c;
        }
      }
LAB_029a896c:
      local_a0 = (undefined *)0xfffe;
LAB_029a89a0:
      FUN_0277d4ac(&local_a0);
      ppuVar14 = &local_d8;
      local_d8 = local_a0;
    }
    uVar8 = FUN_0277d6c4(ppuVar14);
    *(undefined2 *)(lVar23 + lVar16 * 400 + 0x122) = uVar8;
    if ((param_2 & 1) != 0) {
      lVar21 = lVar23 + lVar16 * 400;
      puVar1 = (undefined4 *)(lVar21 + 0x40);
      if (*(long **)(lVar21 + 0x50) != (long *)(lVar21 + 0x48)) {
        lVar18 = lVar23 + lVar16 * 400;
        piVar24 = (int *)(lVar18 + 0x58);
        plVar2 = (long *)(lVar18 + 0x60);
        plVar17 = *(long **)(lVar21 + 0x50);
        do {
          plVar4 = (long *)plVar17[1];
          plVar19 = plVar4;
          if (*plVar17 != 0) {
            *(long **)(*plVar17 + 8) = plVar4;
            plVar19 = (long *)plVar17[1];
          }
          if (plVar19 != (long *)0x0) {
            *plVar19 = *plVar17;
          }
          *plVar17 = 0;
          plVar17[1] = 0;
          *piVar24 = *piVar24 + -1;
          plVar17[-1] = *plVar2;
          *plVar2 = (long)(plVar17 + -1);
          plVar17 = plVar4;
        } while (plVar4 != (long *)(lVar21 + 0x48));
      }
      *puVar1 = 0xffffffff;
      if (*piVar20 != -1) {
        local_a0 = (undefined *)0xfffe;
        FUN_0277d4ac(&local_a0);
        local_98 = 0xfffe;
        FUN_0277d4ac(&local_98);
        local_80 = 0;
        uStack_78 = 0;
        uStack_8c = 0xffffffff;
        uStack_88 = 0;
        uStack_87 = 0;
        bStack_86 = 0;
        uStack_85 = 0;
        local_84 = 0;
        local_90 = *piVar20;
        piVar24 = (int *)(lVar23 + lVar16 * 400 + 4);
        uVar9 = 0xffffffff;
        if (0xffffffea < *piVar24 - 0xf9U) {
          uVar10 = *piVar24 + 0x1b;
          uVar9 = FUN_026641e0((uint)(int)(char)((char)uVar10 + (char)((uVar10 & 0x80) >> 7)) >> 1 &
                               0xff,0);
        }
        uStack_8c = uVar9;
        uStack_88 = 1;
        uStack_85 = *piVar24 - 0x109U < 0x2a;
        bStack_86 = param_3;
        FUN_0298b040(puVar1,&local_a0);
        local_a8 = (undefined *)0xfffe;
        FUN_0277d4ac(&local_a8);
        uVar5 = *puVar22;
        uVar10 = 0;
        if (uVar5 != 99999 && -1 < (int)uVar5) {
          uVar10 = uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU);
        }
        for (lVar16 = *(long *)(DAT_055f6860 + 0x19f820); lVar16 != 0;
            lVar16 = *(long *)(lVar16 + 8)) {
          while (*(int *)(lVar16 + 0x20) <= (int)uVar10) {
            if ((int)uVar10 <= *(int *)(lVar16 + 0x20)) {
              local_d8 = (undefined *)(ulong)(ushort)*(undefined4 *)(lVar16 + 0x2c);
              goto LAB_029a8b98;
            }
            lVar16 = *(long *)(lVar16 + 0x10);
            if (lVar16 == 0) goto LAB_029a8b7c;
          }
        }
LAB_029a8b7c:
        local_d8 = (undefined *)0xfffe;
LAB_029a8b98:
        FUN_0277d4ac(&local_d8);
        local_a8 = local_d8;
        local_d8 = (undefined *)0xfffe;
        FUN_0277d4ac(&local_d8);
        local_d0 = 0xfffe;
        FUN_0277d4ac(&local_d0);
        local_b8 = 0;
        uStack_b0 = 0;
        uStack_c4 = 0xffffffff;
        uStack_c0 = 0;
        uStack_bf = 0;
        bStack_be = 0;
        uStack_bd = 0;
        local_bc = 0;
        local_d8 = local_a8;
        local_c8 = *piVar20;
        if (*piVar24 - 0xf9U < 0xffffffeb) {
          uStack_c4 = 0xffffffff;
        }
        else {
          uVar10 = *piVar24 + 0x1b;
          uStack_c4 = FUN_026641e0((uint)(int)(char)((char)uVar10 + (char)((uVar10 & 0x80) >> 7)) >>
                                   1 & 0xff,0);
        }
        uStack_c0 = 0;
        uStack_bd = *piVar24 - 0x109U < 0x2a;
        bStack_be = param_3;
        FUN_0298b040(puVar1,&local_d8);
      }
    }
  }
  puVar3 = PTR_DAT_04bb7648 + 0x10;
  local_98 = CONCAT62(local_98._2_6_,*DAT_05ab5ea8);
  local_a0 = puVar3;
  lVar16 = FUN_03775a30(&local_a0);
  if (lVar16 != 0) {
    if ((*(long **)(lVar16 + 0x12f8) == (long *)0x0) ||
       (puVar13 = (undefined8 *)**(long **)(lVar16 + 0x12f8), puVar13 == (undefined8 *)0x0)) {
      uVar10 = 1;
    }
    else {
      uVar10 = (**(code **)*puVar13)();
      uVar10 = uVar10 ^ 1;
    }
    sVar6 = *(short *)(*(long *)(lVar16 + 0x12e0) + *(long *)(lVar16 + 0x12d8));
    iVar11 = FUN_0252d29c();
    if ((((uVar10 & 1) == 0) && (*(long *)(lVar16 + 0x12f8) != 0)) &&
       (puVar13 = *(undefined8 **)(*(long *)(lVar16 + 0x12f8) + 8), puVar13 != (undefined8 *)0x0)) {
      (**(code **)*puVar13)();
    }
    lVar23 = *(long *)(param_1 + 0xa0);
    local_dc = (int)sVar6;
    lVar16 = 0x10a;
    if (*(uint *)(param_1 + 0x98) < 0x10b) {
      lVar16 = 0;
    }
    lVar21 = lVar23 + lVar16 * 400;
    *(undefined1 *)(lVar21 + 8) = 0;
    piVar20 = (int *)(lVar21 + 0x18);
    *piVar20 = iVar11;
    FUN_029a7d90(param_1,lVar21,&local_dc);
    puVar22 = (uint *)(lVar21 + 0xc);
    if ((int)*puVar22 < 0) {
      local_a0 = (undefined *)0xfffe;
      FUN_0277d4ac(&local_a0);
      ppuVar14 = (undefined **)&local_a0;
    }
    else {
      local_d8 = (undefined *)0xfffe;
      FUN_0277d4ac(&local_d8);
      uVar5 = *puVar22;
      uVar10 = 0;
      if (uVar5 != 99999 && -1 < (int)uVar5) {
        uVar10 = uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU);
      }
      for (lVar21 = *(long *)(DAT_055f6860 + 0x19f820); lVar21 != 0; lVar21 = *(long *)(lVar21 + 8))
      {
        while (*(int *)(lVar21 + 0x20) <= (int)uVar10) {
          if ((int)uVar10 <= *(int *)(lVar21 + 0x20)) {
            local_a0 = (undefined *)(ulong)(ushort)*(undefined4 *)(lVar21 + 0x2c);
            goto LAB_029a8de0;
          }
          lVar21 = *(long *)(lVar21 + 0x10);
          if (lVar21 == 0) goto LAB_029a8dac;
        }
      }
LAB_029a8dac:
      local_a0 = (undefined *)0xfffe;
LAB_029a8de0:
      FUN_0277d4ac(&local_a0);
      ppuVar14 = &local_d8;
      local_d8 = local_a0;
    }
    uVar8 = FUN_0277d6c4(ppuVar14);
    *(undefined2 *)(lVar23 + lVar16 * 400 + 0x122) = uVar8;
    if ((param_2 & 1) != 0) {
      lVar21 = lVar23 + lVar16 * 400;
      puVar1 = (undefined4 *)(lVar21 + 0x40);
      if (*(long **)(lVar21 + 0x50) != (long *)(lVar21 + 0x48)) {
        lVar18 = lVar23 + lVar16 * 400;
        piVar24 = (int *)(lVar18 + 0x58);
        plVar2 = (long *)(lVar18 + 0x60);
        plVar17 = *(long **)(lVar21 + 0x50);
        do {
          plVar4 = (long *)plVar17[1];
          plVar19 = plVar4;
          if (*plVar17 != 0) {
            *(long **)(*plVar17 + 8) = plVar4;
            plVar19 = (long *)plVar17[1];
          }
          if (plVar19 != (long *)0x0) {
            *plVar19 = *plVar17;
          }
          *plVar17 = 0;
          plVar17[1] = 0;
          *piVar24 = *piVar24 + -1;
          plVar17[-1] = *plVar2;
          *plVar2 = (long)(plVar17 + -1);
          plVar17 = plVar4;
        } while (plVar4 != (long *)(lVar21 + 0x48));
      }
      *puVar1 = 0xffffffff;
      if (*piVar20 != -1) {
        local_a0 = (undefined *)0xfffe;
        FUN_0277d4ac(&local_a0);
        local_98 = 0xfffe;
        FUN_0277d4ac(&local_98);
        local_80 = 0;
        uStack_78 = 0;
        uStack_8c = 0xffffffff;
        uStack_88 = 0;
        uStack_87 = 0;
        bStack_86 = 0;
        uStack_85 = 0;
        local_84 = 0;
        local_90 = *piVar20;
        piVar24 = (int *)(lVar23 + lVar16 * 400 + 4);
        uVar9 = 0xffffffff;
        if (0xffffffea < *piVar24 - 0xf9U) {
          uVar10 = *piVar24 + 0x1b;
          uVar9 = FUN_026641e0((uint)(int)(char)((char)uVar10 + (char)((uVar10 & 0x80) >> 7)) >> 1 &
                               0xff,0);
        }
        uStack_8c = uVar9;
        uStack_88 = 1;
        uStack_85 = *piVar24 - 0x109U < 0x2a;
        bStack_86 = param_3;
        FUN_0298b040(puVar1,&local_a0);
        local_a8 = (undefined *)0xfffe;
        FUN_0277d4ac(&local_a8);
        uVar5 = *puVar22;
        uVar10 = 0;
        if (uVar5 != 99999 && -1 < (int)uVar5) {
          uVar10 = uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU);
        }
        for (lVar16 = *(long *)(DAT_055f6860 + 0x19f820); lVar16 != 0;
            lVar16 = *(long *)(lVar16 + 8)) {
          while (*(int *)(lVar16 + 0x20) <= (int)uVar10) {
            if ((int)uVar10 <= *(int *)(lVar16 + 0x20)) {
              local_d8 = (undefined *)(ulong)(ushort)*(undefined4 *)(lVar16 + 0x2c);
              goto LAB_029a8fd8;
            }
            lVar16 = *(long *)(lVar16 + 0x10);
            if (lVar16 == 0) goto LAB_029a8fbc;
          }
        }
LAB_029a8fbc:
        local_d8 = (undefined *)0xfffe;
LAB_029a8fd8:
        FUN_0277d4ac(&local_d8);
        local_a8 = local_d8;
        local_d8 = (undefined *)0xfffe;
        FUN_0277d4ac(&local_d8);
        local_d0 = 0xfffe;
        FUN_0277d4ac(&local_d0);
        uStack_c4 = 0xffffffff;
        uStack_c0 = 0;
        uStack_bf = 0;
        bStack_be = 0;
        uStack_bd = 0;
        local_b8 = 0;
        uStack_b0 = 0;
        local_bc = 0;
        local_d8 = local_a8;
        local_c8 = *piVar20;
        uVar9 = 0xffffffff;
        if (0xffffffea < *piVar24 - 0xf9U) {
          uVar10 = *piVar24 + 0x1b;
          uVar9 = FUN_026641e0((uint)(int)(char)((char)uVar10 + (char)((uVar10 & 0x80) >> 7)) >> 1 &
                               0xff,0);
        }
        uStack_c4 = uVar9;
        uStack_c0 = 0;
        uStack_bd = *piVar24 - 0x109U < 0x2a;
        bStack_be = param_3;
        FUN_0298b040(puVar1,&local_d8);
      }
    }
  }
  lVar16 = 0;
  bVar15 = true;
  do {
    local_a0 = (undefined *)CONCAT44(0xffffffff,(undefined4)local_a0);
    uVar12 = FUN_03783b30(&local_a0,lVar16);
    if ((uVar12 & 1) != 0) {
      lVar23 = *(long *)(param_1 + 0xa0);
      uVar12 = lVar16 * 2 + 0x10b;
      local_e0 = (int)local_a0._2_2_;
      if (*(uint *)(param_1 + 0x98) <= uVar12) {
        uVar12 = 0;
      }
      lVar21 = lVar23 + uVar12 * 400;
      *(undefined1 *)(lVar21 + 8) = (undefined1)local_a0;
      piVar20 = (int *)(lVar21 + 0x18);
      *piVar20 = local_a0._4_4_;
      FUN_029a7d90(param_1,lVar21,&local_e0);
      puVar22 = (uint *)(lVar21 + 0xc);
      if ((int)*puVar22 < 0) {
        local_a0 = (undefined *)0xfffe;
        FUN_0277d4ac(&local_a0);
        ppuVar14 = (undefined **)&local_a0;
      }
      else {
        local_d8 = (undefined *)0xfffe;
        FUN_0277d4ac(&local_d8);
        uVar5 = *puVar22;
        uVar10 = 0;
        if (uVar5 != 99999 && -1 < (int)uVar5) {
          uVar10 = uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU);
        }
        for (lVar21 = *(long *)(DAT_055f6860 + 0x19f820); lVar21 != 0;
            lVar21 = *(long *)(lVar21 + 8)) {
          while (*(int *)(lVar21 + 0x20) <= (int)uVar10) {
            if ((int)uVar10 <= *(int *)(lVar21 + 0x20)) {
              local_a0 = (undefined *)(ulong)(ushort)*(undefined4 *)(lVar21 + 0x2c);
              goto LAB_029a9208;
            }
            lVar21 = *(long *)(lVar21 + 0x10);
            if (lVar21 == 0) goto LAB_029a91dc;
          }
        }
LAB_029a91dc:
        local_a0 = (undefined *)0xfffe;
LAB_029a9208:
        FUN_0277d4ac(&local_a0);
        ppuVar14 = &local_d8;
        local_d8 = local_a0;
      }
      uVar8 = FUN_0277d6c4(ppuVar14);
      *(undefined2 *)(lVar23 + uVar12 * 400 + 0x122) = uVar8;
      if ((param_2 & 1) != 0) {
        lVar21 = lVar23 + uVar12 * 400;
        if (*(long **)(lVar21 + 0x50) != (long *)(lVar21 + 0x48)) {
          lVar18 = lVar23 + uVar12 * 400;
          piVar24 = (int *)(lVar18 + 0x58);
          plVar2 = (long *)(lVar18 + 0x60);
          plVar17 = *(long **)(lVar21 + 0x50);
          do {
            plVar4 = (long *)plVar17[1];
            plVar19 = plVar4;
            if (*plVar17 != 0) {
              *(long **)(*plVar17 + 8) = plVar4;
              plVar19 = (long *)plVar17[1];
            }
            if (plVar19 != (long *)0x0) {
              *plVar19 = *plVar17;
            }
            *plVar17 = 0;
            plVar17[1] = 0;
            *piVar24 = *piVar24 + -1;
            plVar17[-1] = *plVar2;
            *plVar2 = (long)(plVar17 + -1);
            plVar17 = plVar4;
          } while (plVar4 != (long *)(lVar21 + 0x48));
        }
        puVar1 = (undefined4 *)(lVar21 + 0x40);
        *puVar1 = 0xffffffff;
        if (*piVar20 != -1) {
          local_a0 = (undefined *)0xfffe;
          FUN_0277d4ac(&local_a0);
          local_98 = 0xfffe;
          FUN_0277d4ac(&local_98);
          uVar9 = 0xffffffff;
          uStack_8c = 0xffffffff;
          local_80 = 0;
          uStack_78 = 0;
          uStack_88 = 0;
          uStack_87 = 0;
          bStack_86 = 0;
          uStack_85 = 0;
          local_84 = 0;
          local_90 = *piVar20;
          piVar24 = (int *)(lVar23 + uVar12 * 400 + 4);
          if (0xffffffea < *piVar24 - 0xf9U) {
            uVar10 = *piVar24 + 0x1b;
            uVar9 = FUN_026641e0((uint)(int)(char)((char)uVar10 + (char)((uVar10 & 0x80) >> 7)) >> 1
                                 & 0xff,0);
          }
          uStack_88 = 1;
          uStack_85 = *piVar24 - 0x109U < 0x2a;
          uStack_8c = uVar9;
          bStack_86 = param_3;
          FUN_0298b040(puVar1,&local_a0);
          local_a8 = (undefined *)0xfffe;
          FUN_0277d4ac(&local_a8);
          uVar5 = *puVar22;
          uVar10 = 0;
          if (uVar5 != 99999 && -1 < (int)uVar5) {
            uVar10 = uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU);
          }
          for (lVar23 = *(long *)(DAT_055f6860 + 0x19f820); lVar23 != 0;
              lVar23 = *(long *)(lVar23 + 8)) {
            while (*(int *)(lVar23 + 0x20) <= (int)uVar10) {
              if ((int)uVar10 <= *(int *)(lVar23 + 0x20)) {
                local_d8 = (undefined *)(ulong)(ushort)*(undefined4 *)(lVar23 + 0x2c);
                goto LAB_029a93e8;
              }
              lVar23 = *(long *)(lVar23 + 0x10);
              if (lVar23 == 0) goto LAB_029a93d0;
            }
          }
LAB_029a93d0:
          local_d8 = (undefined *)0xfffe;
LAB_029a93e8:
          FUN_0277d4ac(&local_d8);
          local_a8 = local_d8;
          local_d8 = (undefined *)0xfffe;
          FUN_0277d4ac(&local_d8);
          local_d0 = 0xfffe;
          FUN_0277d4ac(&local_d0);
          uVar9 = 0xffffffff;
          uStack_c4 = 0xffffffff;
          local_b8 = 0;
          uStack_b0 = 0;
          uStack_c0 = 0;
          uStack_bf = 0;
          bStack_be = 0;
          uStack_bd = 0;
          local_bc = 0;
          local_d8 = local_a8;
          local_c8 = *piVar20;
          if (0xffffffea < *piVar24 - 0xf9U) {
            uVar10 = *piVar24 + 0x1b;
            uVar9 = FUN_026641e0((uint)(int)(char)((char)uVar10 + (char)((uVar10 & 0x80) >> 7)) >> 1
                                 & 0xff,0);
          }
          uStack_c0 = 0;
          uStack_bd = *piVar24 - 0x109U < 0x2a;
          uStack_c4 = uVar9;
          bStack_be = param_3;
          FUN_0298b040(puVar1,&local_d8);
        }
      }
    }
    local_d8 = (undefined *)CONCAT44(local_d8._4_4_,(int)lVar16);
    local_98 = CONCAT62(local_98._2_6_,*DAT_05ab5ea8);
    local_a0 = puVar3;
    lVar23 = FUN_03775a30(&local_a0);
    if (lVar23 != 0) {
      lVar21 = lVar23 + 0x380 + ((ulong)local_d8 & 0xffffffff) * 0x658;
      if (1 < (uint)local_d8) {
        lVar21 = lVar23 + 0x380;
      }
      if ((*(long **)(lVar21 + 0x648) == (long *)0x0) ||
         (puVar13 = (undefined8 *)**(long **)(lVar21 + 0x648), puVar13 == (undefined8 *)0x0)) {
        uVar10 = 1;
      }
      else {
        uVar10 = (**(code **)*puVar13)();
        uVar10 = uVar10 ^ 1;
      }
      sVar6 = *(short *)(*(long *)(lVar21 + 0x630) + *(long *)(lVar21 + 0x628));
      iVar11 = FUN_0252d29c();
      if ((((uVar10 & 1) == 0) && (*(long *)(lVar21 + 0x648) != 0)) &&
         (puVar13 = *(undefined8 **)(*(long *)(lVar21 + 0x648) + 8), puVar13 != (undefined8 *)0x0))
      {
        (**(code **)*puVar13)();
      }
      uVar12 = lVar16 << 1 | 0x10c;
      lVar16 = *(long *)(param_1 + 0xa0);
      local_e4 = (int)sVar6;
      if (*(uint *)(param_1 + 0x98) <= uVar12) {
        uVar12 = 0;
      }
      lVar23 = lVar16 + uVar12 * 400;
      *(undefined1 *)(lVar23 + 8) = 0;
      piVar20 = (int *)(lVar23 + 0x18);
      *piVar20 = iVar11;
      FUN_029a7d90(param_1,lVar23,&local_e4);
      puVar22 = (uint *)(lVar23 + 0xc);
      if ((int)*puVar22 < 0) {
        local_a0 = (undefined *)0xfffe;
        FUN_0277d4ac(&local_a0);
        ppuVar14 = (undefined **)&local_a0;
      }
      else {
        local_d8 = (undefined *)0xfffe;
        FUN_0277d4ac(&local_d8);
        uVar5 = *puVar22;
        uVar10 = 0;
        if (uVar5 != 99999 && -1 < (int)uVar5) {
          uVar10 = uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU);
        }
        for (lVar23 = *(long *)(DAT_055f6860 + 0x19f820); lVar23 != 0;
            lVar23 = *(long *)(lVar23 + 8)) {
          while (*(int *)(lVar23 + 0x20) <= (int)uVar10) {
            if ((int)uVar10 <= *(int *)(lVar23 + 0x20)) {
              local_a0 = (undefined *)(ulong)(ushort)*(undefined4 *)(lVar23 + 0x2c);
              goto LAB_029a9638;
            }
            lVar23 = *(long *)(lVar23 + 0x10);
            if (lVar23 == 0) goto LAB_029a960c;
          }
        }
LAB_029a960c:
        local_a0 = (undefined *)0xfffe;
LAB_029a9638:
        FUN_0277d4ac(&local_a0);
        ppuVar14 = &local_d8;
        local_d8 = local_a0;
      }
      uVar8 = FUN_0277d6c4(ppuVar14);
      *(undefined2 *)(lVar16 + uVar12 * 400 + 0x122) = uVar8;
      if ((param_2 & 1) != 0) {
        lVar23 = lVar16 + uVar12 * 400;
        if (*(long **)(lVar23 + 0x50) != (long *)(lVar23 + 0x48)) {
          lVar21 = lVar16 + uVar12 * 400;
          piVar24 = (int *)(lVar21 + 0x58);
          plVar2 = (long *)(lVar21 + 0x60);
          plVar17 = *(long **)(lVar23 + 0x50);
          do {
            plVar4 = (long *)plVar17[1];
            plVar19 = plVar4;
            if (*plVar17 != 0) {
              *(long **)(*plVar17 + 8) = plVar4;
              plVar19 = (long *)plVar17[1];
            }
            if (plVar19 != (long *)0x0) {
              *plVar19 = *plVar17;
            }
            *plVar17 = 0;
            plVar17[1] = 0;
            *piVar24 = *piVar24 + -1;
            plVar17[-1] = *plVar2;
            *plVar2 = (long)(plVar17 + -1);
            plVar17 = plVar4;
          } while (plVar4 != (long *)(lVar23 + 0x48));
        }
        puVar1 = (undefined4 *)(lVar23 + 0x40);
        *puVar1 = 0xffffffff;
        if (*piVar20 != -1) {
          local_a0 = (undefined *)0xfffe;
          FUN_0277d4ac(&local_a0);
          local_98 = 0xfffe;
          FUN_0277d4ac(&local_98);
          uVar9 = 0xffffffff;
          uStack_8c = 0xffffffff;
          local_80 = 0;
          uStack_78 = 0;
          uStack_88 = 0;
          uStack_87 = 0;
          bStack_86 = 0;
          uStack_85 = 0;
          local_84 = 0;
          local_90 = *piVar20;
          piVar24 = (int *)(lVar16 + uVar12 * 400 + 4);
          if (0xffffffea < *piVar24 - 0xf9U) {
            uVar10 = *piVar24 + 0x1b;
            uVar9 = FUN_026641e0((uint)(int)(char)((char)uVar10 + (char)((uVar10 & 0x80) >> 7)) >> 1
                                 & 0xff,0);
          }
          uStack_88 = 1;
          uStack_85 = *piVar24 - 0x109U < 0x2a;
          uStack_8c = uVar9;
          bStack_86 = param_3;
          FUN_0298b040(puVar1,&local_a0);
          local_a8 = (undefined *)0xfffe;
          FUN_0277d4ac(&local_a8);
          uVar5 = *puVar22;
          uVar10 = 0;
          if (uVar5 != 99999 && -1 < (int)uVar5) {
            uVar10 = uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU);
          }
          for (lVar16 = *(long *)(DAT_055f6860 + 0x19f820); lVar16 != 0;
              lVar16 = *(long *)(lVar16 + 8)) {
            while (*(int *)(lVar16 + 0x20) <= (int)uVar10) {
              if ((int)uVar10 <= *(int *)(lVar16 + 0x20)) {
                local_d8 = (undefined *)(ulong)(ushort)*(undefined4 *)(lVar16 + 0x2c);
                goto LAB_029a9818;
              }
              lVar16 = *(long *)(lVar16 + 0x10);
              if (lVar16 == 0) goto LAB_029a9800;
            }
          }
LAB_029a9800:
          local_d8 = (undefined *)0xfffe;
LAB_029a9818:
          FUN_0277d4ac(&local_d8);
          local_a8 = local_d8;
          local_d8 = (undefined *)0xfffe;
          FUN_0277d4ac(&local_d8);
          local_d0 = 0xfffe;
          FUN_0277d4ac(&local_d0);
          uVar9 = 0xffffffff;
          uStack_c4 = 0xffffffff;
          local_b8 = 0;
          uStack_b0 = 0;
          uStack_c0 = 0;
          uStack_bf = 0;
          bStack_be = 0;
          uStack_bd = 0;
          local_bc = 0;
          local_d8 = local_a8;
          local_c8 = *piVar20;
          if (0xffffffea < *piVar24 - 0xf9U) {
            uVar10 = *piVar24 + 0x1b;
            uVar9 = FUN_026641e0((uint)(int)(char)((char)uVar10 + (char)((uVar10 & 0x80) >> 7)) >> 1
                                 & 0xff,0);
          }
          uStack_c0 = 0;
          uStack_bd = *piVar24 - 0x109U < 0x2a;
          uStack_c4 = uVar9;
          bStack_be = param_3;
          FUN_0298b040(puVar1,&local_d8);
        }
      }
    }
    lVar16 = 1;
    bVar7 = !bVar15;
    bVar15 = false;
    if (bVar7) {
      return;
    }
  } while( true );
}



void FUN_029aa3f0(long param_1,uint param_2,undefined1 param_3)

{
  undefined4 *puVar1;
  long *plVar2;
  long *plVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined2 uVar10;
  undefined4 uVar11;
  uint uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long *plVar15;
  long lVar16;
  long *plVar17;
  long lVar18;
  uint *puVar19;
  int *piVar20;
  long lVar21;
  int *piVar22;
  int local_d0;
  undefined8 local_cc;
  undefined8 local_c4;
  int local_bc;
  undefined8 local_b8;
  undefined2 local_b0;
  undefined8 local_ac;
  undefined8 local_a4;
  undefined8 local_9c;
  undefined8 local_94;
  undefined8 local_8c;
  int local_84;
  undefined8 local_80;
  undefined2 local_78;
  undefined8 local_74;
  undefined8 local_6c;
  int local_64;
  
  iVar4 = *(int *)(param_1 + 0x50);
  local_94 = CONCAT44(0xffffffff,(undefined4)local_94);
  iVar7 = iVar4 + -0x132;
  if (0x132 < iVar4) {
    iVar7 = iVar4 + -0x133;
  }
  uVar13 = FUN_016ca684(&local_94,iVar7 >> 1);
  if ((uVar13 & 1) != 0) {
    uVar12 = *(uint *)(param_1 + 0x50);
    lVar21 = *(long *)(param_1 + 0xa0);
    if (*(uint *)(param_1 + 0x98) <= uVar12) {
      uVar12 = 0;
    }
    local_64 = (int)local_94._2_2_;
    lVar18 = lVar21 + (long)(int)uVar12 * 400;
    *(undefined1 *)(lVar18 + 8) = (undefined1)local_94;
    piVar20 = (int *)(lVar18 + 0x18);
    *piVar20 = local_94._4_4_;
    FUN_029a7d90(param_1,lVar18,&local_64);
    puVar19 = (uint *)(lVar18 + 0xc);
    if ((int)*puVar19 < 0) {
      local_94 = 0xfffe;
      FUN_0277d4ac(&local_94);
      puVar14 = &local_94;
    }
    else {
      local_cc = 0xfffe;
      FUN_0277d4ac(&local_cc);
      uVar5 = *puVar19;
      uVar6 = 0;
      if (uVar5 != 99999 && -1 < (int)uVar5) {
        uVar6 = uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU);
      }
      for (lVar18 = *(long *)(DAT_055f6860 + 0x19f820); lVar18 != 0; lVar18 = *(long *)(lVar18 + 8))
      {
        while (*(int *)(lVar18 + 0x20) <= (int)uVar6) {
          if ((int)uVar6 <= *(int *)(lVar18 + 0x20)) {
            local_94 = (ulong)(ushort)*(undefined4 *)(lVar18 + 0x2c);
            goto LAB_029aa550;
          }
          lVar18 = *(long *)(lVar18 + 0x10);
          if (lVar18 == 0) goto LAB_029aa51c;
        }
      }
LAB_029aa51c:
      local_94 = 0xfffe;
LAB_029aa550:
      FUN_0277d4ac(&local_94);
      puVar14 = &local_cc;
      local_cc = local_94;
    }
    uVar10 = FUN_0277d6c4(puVar14);
    *(undefined2 *)(lVar21 + (long)(int)uVar12 * 400 + 0x122) = uVar10;
    if ((param_2 & 1) != 0) {
      lVar18 = lVar21 + (long)(int)uVar12 * 400;
      puVar1 = (undefined4 *)(lVar18 + 0x40);
      if (*(long **)(lVar18 + 0x50) != (long *)(lVar18 + 0x48)) {
        lVar16 = lVar21 + (long)(int)uVar12 * 400;
        piVar22 = (int *)(lVar16 + 0x58);
        plVar2 = (long *)(lVar16 + 0x60);
        plVar15 = *(long **)(lVar18 + 0x50);
        do {
          plVar3 = (long *)plVar15[1];
          plVar17 = plVar3;
          if (*plVar15 != 0) {
            *(long **)(*plVar15 + 8) = plVar3;
            plVar17 = (long *)plVar15[1];
          }
          if (plVar17 != (long *)0x0) {
            *plVar17 = *plVar15;
          }
          *plVar15 = 0;
          plVar15[1] = 0;
          *piVar22 = *piVar22 + -1;
          plVar15[-1] = *plVar2;
          *plVar2 = (long)(plVar15 + -1);
          plVar15 = plVar3;
        } while (plVar3 != (long *)(lVar18 + 0x48));
      }
      iVar4 = *piVar20;
      *puVar1 = 0xffffffff;
      if (iVar4 != -1) {
        local_94 = 0xfffe;
        FUN_0277d4ac(&local_94);
        local_8c = 0xfffe;
        FUN_0277d4ac(&local_8c);
        uVar11 = 0xffffffff;
        local_74 = 0;
        local_6c = 0;
        local_80 = 0xffffffff;
        local_78 = 0;
        local_84 = *piVar20;
        piVar22 = (int *)(lVar21 + (long)(int)uVar12 * 400 + 4);
        if (0xffffffea < *piVar22 - 0xf9U) {
          uVar12 = *piVar22 + 0x1b;
          uVar11 = FUN_026641e0((uint)(int)(char)((char)uVar12 + (char)((uVar12 & 0x80) >> 7)) >> 1
                                & 0xff,0);
        }
        uVar8 = local_80;
        local_80._0_5_ = CONCAT14(1,uVar11);
        uVar9 = local_80;
        local_80._7_1_ = SUB81(uVar8,7);
        local_80._0_6_ = (undefined6)uVar9;
        local_80 = CONCAT17(local_80._7_1_,CONCAT16(param_3,(undefined6)local_80)) &
                   0xff01ffffffffffff;
        local_78 = CONCAT11(local_78._1_1_,*piVar22 - 0x133U < 0x20);
        FUN_0298b040(puVar1,&local_94);
        local_9c = 0xfffe;
        FUN_0277d4ac(&local_9c);
        uVar6 = *puVar19;
        uVar12 = 0;
        if (uVar6 != 99999 && -1 < (int)uVar6) {
          uVar12 = uVar6 & ((int)uVar6 >> 0x1f ^ 0xffffffffU);
        }
        for (lVar21 = *(long *)(DAT_055f6860 + 0x19f820); lVar21 != 0;
            lVar21 = *(long *)(lVar21 + 8)) {
          while (*(int *)(lVar21 + 0x20) <= (int)uVar12) {
            if ((int)uVar12 <= *(int *)(lVar21 + 0x20)) {
              local_cc = (ulong)(ushort)*(undefined4 *)(lVar21 + 0x2c);
              goto LAB_029aa74c;
            }
            lVar21 = *(long *)(lVar21 + 0x10);
            if (lVar21 == 0) goto LAB_029aa730;
          }
        }
LAB_029aa730:
        local_cc = 0xfffe;
LAB_029aa74c:
        FUN_0277d4ac(&local_cc);
        local_9c = local_cc;
        local_cc = 0xfffe;
        FUN_0277d4ac(&local_cc);
        local_c4 = 0xfffe;
        FUN_0277d4ac(&local_c4);
        uVar12 = 0xffffffff;
        local_b8 = 0xffffffff;
        local_ac = 0;
        local_a4 = 0;
        local_b0 = 0;
        local_cc = local_9c;
        local_bc = *piVar20;
        if (0xffffffea < *piVar22 - 0xf9U) {
          uVar12 = *piVar22 + 0x1b;
          uVar12 = FUN_026641e0((uint)(int)(char)((char)uVar12 + (char)((uVar12 & 0x80) >> 7)) >> 1
                                & 0xff,0);
        }
        uVar8 = local_b8;
        local_b8._0_5_ = (uint5)uVar12;
        uVar9 = local_b8;
        local_b8._7_1_ = SUB81(uVar8,7);
        local_b8._0_6_ = (undefined6)uVar9;
        local_b8 = CONCAT17(local_b8._7_1_,CONCAT16(param_3,(undefined6)local_b8)) &
                   0xff01ffffffffffff;
        local_b0 = CONCAT11(local_b0._1_1_,*piVar22 - 0x133U < 0x20);
        FUN_0298b040(puVar1,&local_cc);
      }
    }
  }
  local_94 = CONCAT44(0xffffffff,(undefined4)local_94);
  uVar13 = FUN_016cabec(&local_94,iVar7 >> 1);
  if ((uVar13 & 1) != 0) {
    uVar12 = *(uint *)(param_1 + 0x54);
    lVar21 = *(long *)(param_1 + 0xa0);
    local_d0 = (int)(short)local_94;
    if (*(uint *)(param_1 + 0x98) <= uVar12) {
      uVar12 = 0;
    }
    lVar18 = lVar21 + (long)(int)uVar12 * 400;
    *(undefined1 *)(lVar18 + 8) = 0;
    piVar20 = (int *)(lVar18 + 0x18);
    *piVar20 = local_94._4_4_;
    FUN_029a7d90(param_1,lVar18,&local_d0);
    puVar19 = (uint *)(lVar18 + 0xc);
    if ((int)*puVar19 < 0) {
      local_94 = 0xfffe;
      FUN_0277d4ac(&local_94);
      puVar14 = &local_94;
    }
    else {
      local_cc = 0xfffe;
      FUN_0277d4ac(&local_cc);
      uVar5 = *puVar19;
      uVar6 = 0;
      if (uVar5 != 99999 && -1 < (int)uVar5) {
        uVar6 = uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU);
      }
      for (lVar18 = *(long *)(DAT_055f6860 + 0x19f820); lVar18 != 0; lVar18 = *(long *)(lVar18 + 8))
      {
        while (*(int *)(lVar18 + 0x20) <= (int)uVar6) {
          if ((int)uVar6 <= *(int *)(lVar18 + 0x20)) {
            local_94 = (ulong)(ushort)*(undefined4 *)(lVar18 + 0x2c);
            goto LAB_029aa914;
          }
          lVar18 = *(long *)(lVar18 + 0x10);
          if (lVar18 == 0) goto LAB_029aa8e0;
        }
      }
LAB_029aa8e0:
      local_94 = 0xfffe;
LAB_029aa914:
      FUN_0277d4ac(&local_94);
      puVar14 = &local_cc;
      local_cc = local_94;
    }
    uVar10 = FUN_0277d6c4(puVar14);
    *(undefined2 *)(lVar21 + (long)(int)uVar12 * 400 + 0x122) = uVar10;
    if ((param_2 & 1) != 0) {
      lVar18 = lVar21 + (long)(int)uVar12 * 400;
      puVar1 = (undefined4 *)(lVar18 + 0x40);
      if (*(long **)(lVar18 + 0x50) != (long *)(lVar18 + 0x48)) {
        lVar16 = lVar21 + (long)(int)uVar12 * 400;
        piVar22 = (int *)(lVar16 + 0x58);
        plVar2 = (long *)(lVar16 + 0x60);
        plVar15 = *(long **)(lVar18 + 0x50);
        do {
          plVar3 = (long *)plVar15[1];
          plVar17 = plVar3;
          if (*plVar15 != 0) {
            *(long **)(*plVar15 + 8) = plVar3;
            plVar17 = (long *)plVar15[1];
          }
          if (plVar17 != (long *)0x0) {
            *plVar17 = *plVar15;
          }
          *plVar15 = 0;
          plVar15[1] = 0;
          *piVar22 = *piVar22 + -1;
          plVar15[-1] = *plVar2;
          *plVar2 = (long)(plVar15 + -1);
          plVar15 = plVar3;
        } while (plVar3 != (long *)(lVar18 + 0x48));
      }
      iVar7 = *piVar20;
      *puVar1 = 0xffffffff;
      if (iVar7 != -1) {
        local_94 = 0xfffe;
        FUN_0277d4ac(&local_94);
        local_8c = 0xfffe;
        FUN_0277d4ac(&local_8c);
        uVar11 = 0xffffffff;
        local_74 = 0;
        local_6c = 0;
        local_80 = 0xffffffff;
        local_78 = 0;
        local_84 = *piVar20;
        piVar22 = (int *)(lVar21 + (long)(int)uVar12 * 400 + 4);
        if (0xffffffea < *piVar22 - 0xf9U) {
          uVar12 = *piVar22 + 0x1b;
          uVar11 = FUN_026641e0((uint)(int)(char)((char)uVar12 + (char)((uVar12 & 0x80) >> 7)) >> 1
                                & 0xff,0);
        }
        uVar8 = local_80;
        local_80._0_5_ = CONCAT14(1,uVar11);
        uVar9 = local_80;
        local_80._7_1_ = SUB81(uVar8,7);
        local_80._0_6_ = (undefined6)uVar9;
        local_80 = CONCAT17(local_80._7_1_,CONCAT16(param_3,(undefined6)local_80)) &
                   0xff01ffffffffffff;
        local_78 = CONCAT11(local_78._1_1_,*piVar22 - 0x133U < 0x20);
        FUN_0298b040(puVar1,&local_94);
        local_9c = 0xfffe;
        FUN_0277d4ac(&local_9c);
        uVar6 = *puVar19;
        uVar12 = 0;
        if (uVar6 != 99999 && -1 < (int)uVar6) {
          uVar12 = uVar6 & ((int)uVar6 >> 0x1f ^ 0xffffffffU);
        }
        for (lVar21 = *(long *)(DAT_055f6860 + 0x19f820); lVar21 != 0;
            lVar21 = *(long *)(lVar21 + 8)) {
          while (*(int *)(lVar21 + 0x20) <= (int)uVar12) {
            if ((int)uVar12 <= *(int *)(lVar21 + 0x20)) {
              local_cc = (ulong)(ushort)*(undefined4 *)(lVar21 + 0x2c);
              goto LAB_029aab08;
            }
            lVar21 = *(long *)(lVar21 + 0x10);
            if (lVar21 == 0) goto LAB_029aaaec;
          }
        }
LAB_029aaaec:
        local_cc = 0xfffe;
LAB_029aab08:
        FUN_0277d4ac(&local_cc);
        uVar13 = local_cc;
        local_9c._4_4_ = local_cc._4_4_;
        local_cc = 0xfffe;
        local_9c._0_4_ = (undefined4)uVar13;
        FUN_0277d4ac(&local_cc);
        local_c4 = 0xfffe;
        FUN_0277d4ac(&local_c4);
        uVar12 = 0xffffffff;
        local_b8 = 0xffffffff;
        local_ac = 0;
        local_a4 = 0;
        local_b0 = 0;
        local_cc = CONCAT44(local_9c._4_4_,(undefined4)local_9c);
        local_bc = *piVar20;
        if (0xffffffea < *piVar22 - 0xf9U) {
          uVar12 = *piVar22 + 0x1b;
          uVar12 = FUN_026641e0((uint)(int)(char)((char)uVar12 + (char)((uVar12 & 0x80) >> 7)) >> 1
                                & 0xff,0);
        }
        uVar8 = local_b8;
        local_b8._0_5_ = (uint5)uVar12;
        uVar9 = local_b8;
        local_b8._7_1_ = SUB81(uVar8,7);
        local_b8._0_6_ = (undefined6)uVar9;
        local_b8 = CONCAT17(local_b8._7_1_,CONCAT16(param_3,(undefined6)local_b8)) &
                   0xff01ffffffffffff;
        local_b0 = CONCAT11(local_b0._1_1_,*piVar22 - 0x133U < 0x20);
        FUN_0298b040(puVar1,&local_cc);
      }
    }
  }
  return;
}


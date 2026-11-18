
void FUN_03734854(long param_1,undefined8 *param_2,uint param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined2 uVar22;
  undefined2 uVar23;
  undefined2 uVar24;
  undefined2 uVar25;
  undefined2 uVar26;
  undefined2 uVar27;
  undefined2 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined1 uVar34;
  undefined2 uVar35;
  int iVar36;
  uint uVar37;
  long lVar38;
  long *plVar39;
  undefined1 uVar40;
  ushort *puVar41;
  undefined1 uVar42;
  undefined2 uVar43;
  undefined4 uVar44;
  undefined8 *puVar45;
  long lVar46;
  undefined1 uVar47;
  undefined1 uVar48;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined *local_90;
  undefined2 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  
  if (param_3 < *(uint *)(param_1 + 0xe0)) {
    lVar46 = *(long *)(*(long *)(param_1 + 0xe8) + (long)(int)param_3 * 8);
  }
  else {
    lVar46 = 0;
  }
  local_ac = *(undefined4 *)((long)param_2 + 4);
  uVar8 = *(undefined1 *)((long)param_2 + 10);
  uVar9 = *(undefined1 *)((long)param_2 + 0xb);
  uVar1 = *(undefined4 *)((long)param_2 + 0xc);
  uVar35 = *(undefined2 *)param_2;
  uVar22 = *(undefined2 *)(param_2 + 2);
  uVar10 = *(undefined1 *)((long)param_2 + 0x12);
  uVar42 = *(undefined1 *)((long)param_2 + 2);
  uVar40 = *(undefined1 *)((long)param_2 + 3);
  uVar29 = *param_2;
  uVar11 = *(undefined1 *)((long)param_2 + 0x13);
  uVar2 = *(undefined4 *)((long)param_2 + 0x14);
  puVar45 = param_2 + 1;
  uVar23 = *(undefined2 *)puVar45;
  uVar33 = *puVar45;
  uVar32 = *puVar45;
  puVar45 = param_2 + 3;
  uVar12 = *(undefined1 *)((long)param_2 + 0x23);
  uVar3 = *(undefined4 *)((long)param_2 + 0x24);
  uVar24 = *(undefined2 *)(param_2 + 5);
  uVar13 = *(undefined1 *)((long)param_2 + 0x2a);
  uVar31 = *puVar45;
  uVar30 = *puVar45;
  uVar25 = *(undefined2 *)(param_2 + 4);
  uVar14 = *(undefined1 *)((long)param_2 + 0x2b);
  uVar15 = *(undefined1 *)((long)param_2 + 0x32);
  uVar16 = *(undefined1 *)((long)param_2 + 0x22);
  uVar26 = *(undefined2 *)(param_2 + 6);
  uVar4 = *(undefined4 *)((long)param_2 + 0x2c);
  uVar5 = *(undefined4 *)((long)param_2 + 0x34);
  uVar17 = *(undefined1 *)((long)param_2 + 0x3a);
  uVar18 = *(undefined1 *)((long)param_2 + 0x3b);
  uVar19 = *(undefined1 *)((long)param_2 + 0x33);
  uVar6 = *(undefined4 *)((long)param_2 + 0x3c);
  uVar27 = *(undefined2 *)(param_2 + 8);
  uVar20 = *(undefined1 *)((long)param_2 + 0x42);
  uVar28 = *(undefined2 *)(param_2 + 7);
  uVar21 = *(undefined1 *)((long)param_2 + 0x43);
  uVar7 = *(undefined4 *)((long)param_2 + 0x44);
  uVar47 = *(undefined1 *)((long)param_2 + 0x1a);
  uVar44 = *(undefined4 *)((long)param_2 + 0x1c);
  uVar43 = *(undefined2 *)puVar45;
  uVar48 = *(undefined1 *)((long)param_2 + 0x1b);
  if (((*(ushort *)(lVar46 + 0x114) & 1) == 0) &&
     ((*(ushort **)PTR_DAT_04bc3a48 == (ushort *)0x0 || ((**(ushort **)PTR_DAT_04bc3a48 & 1) == 0)))
     ) {
    if (*(int *)(lVar46 + 0xd0) == -1) {
      if (DAT_05aed670 == 0) {
        puVar45 = &DAT_055c04a0;
      }
      else {
        puVar45 = &DAT_055c04a0;
        if (*(long *)(DAT_05aed670 + 0x330) != 0) {
          puVar45 = (undefined8 *)
                    (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                              (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(DAT_05aed670 + 0x338));
          iVar36 = FUN_006bd550(*puVar45,0);
          puVar45 = (undefined8 *)PTR_DAT_04bc3a80;
          if (iVar36 != 0x758f7eaf) {
            puVar45 = &DAT_055c04a0;
          }
        }
      }
      iVar36 = *(int *)(puVar45 + 7);
      if ((iVar36 == -0x7975b8e8) || (iVar36 == -0x3e092032)) {
        uVar42 = 1;
      }
      else {
        uVar42 = 1;
        if (iVar36 != -0x17df00c3) {
          uVar42 = 0;
        }
      }
      local_78._0_5_ = CONCAT14(uVar42,1);
      local_78 = CONCAT26(*(undefined2 *)(lVar46 + 0x38),(undefined6)local_78);
      local_70 = CONCAT44(local_70._4_4_,*(undefined4 *)(lVar46 + 0xe0));
      local_80 = uVar29;
      FUN_02128440(&local_a8,&local_80);
      local_ac = local_a8._4_4_;
      uVar35 = (undefined2)local_a8;
      local_78 = CONCAT44(local_78._4_4_,2);
      uVar42 = local_a8._2_1_;
      uVar40 = local_a8._3_1_;
      local_80 = uVar30;
      FUN_02128440(&local_a8,&local_80);
      puVar41 = *(ushort **)PTR_DAT_04bc3a48;
      uVar47 = local_a8._2_1_;
      uVar44 = local_a8._4_4_;
      uVar43 = (undefined2)local_a8;
      uVar48 = local_a8._3_1_;
      goto joined_r0x03734a7c;
    }
    local_78 = CONCAT44(0xffffffff,*(int *)(lVar46 + 0xd0));
    local_70._0_4_ = (uint)local_70 & 0xffff0000;
    local_70 = CONCAT44(1,(uint)local_70);
    local_a8 = (undefined *)0xfffe;
    local_80 = *param_2;
    FUN_0277d4ac(&local_a8);
    FUN_02127af0(&local_80,&local_a8);
    uVar35 = (undefined2)local_a8;
    uVar42 = local_a8._2_1_;
    local_70 = CONCAT44(2,(uint)local_70);
    uVar40 = local_a8._3_1_;
    local_ac = local_a8._4_4_;
    local_a8 = (undefined *)0xfffe;
    local_80 = uVar31;
    FUN_0277d4ac(&local_a8);
    FUN_02127af0(&local_80,&local_a8);
    uVar47 = local_a8._2_1_;
    uVar44 = local_a8._4_4_;
    uVar43 = (undefined2)local_a8;
    uVar48 = local_a8._3_1_;
  }
  puVar41 = *(ushort **)PTR_DAT_04bc3a48;
joined_r0x03734a7c:
  if ((((puVar41 == (ushort *)0x0) || ((*puVar41 & 1) == 0)) && (*(int *)(lVar46 + 0x3c) != 2)) &&
     ((*(ushort *)(lVar46 + 0x114) >> 5 & 1) == 0)) {
    if (DAT_05aed670 == 0) {
      puVar45 = &DAT_055c04a0;
    }
    else {
      puVar45 = &DAT_055c04a0;
      if (*(long *)(DAT_05aed670 + 0x330) != 0) {
        puVar45 = (undefined8 *)
                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                            (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(DAT_05aed670 + 0x338));
        iVar36 = FUN_006bd550(*puVar45,0);
        puVar45 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar36 != 0x758f7eaf) {
          puVar45 = &DAT_055c04a0;
        }
      }
    }
    iVar36 = *(int *)(puVar45 + 7);
    if (((iVar36 == -0x7975b8e8) || (iVar36 == -0x17df00c3)) || (iVar36 == -0x3e092032)) {
      if ((*(ushort *)(lVar46 + 0x114) >> 7 & 1) == 0) {
        local_90 = PTR_DAT_04bb7648 + 0x10;
        local_88 = *(undefined2 *)(lVar46 + 0x38);
        lVar38 = FUN_03775e20(&local_90);
        if (lVar38 != 0) {
          if ((*(long *)(lVar38 + 0x28) == 0) ||
             (puVar45 = *(undefined8 **)(*(long *)(lVar38 + 0x28) + 0x10),
             puVar45 == (undefined8 *)0x0)) {
            uVar37 = 1;
          }
          else {
            uVar37 = (**(code **)*puVar45)();
            uVar37 = uVar37 ^ 1;
          }
          local_a8 = (undefined *)0xfffe;
          FUN_0277d4ac(&local_a8);
          local_a0 = 0xfffe;
          FUN_0277d4ac(&local_a0);
          local_98 = 0xfffe;
          FUN_0277d4ac(&local_98);
          local_a0._0_4_ = CONCAT22(CONCAT11(uVar40,uVar42),uVar35);
          local_a8 = (undefined *)CONCAT62(CONCAT42(uVar44,CONCAT11(uVar48,uVar47)),uVar43);
          local_98 = uVar32;
          local_a0._4_4_ = local_ac;
          if ((*(long *)(lVar38 + 0x28) != 0) &&
             (plVar39 = *(long **)(*(long *)(lVar38 + 0x28) + 0x20), plVar39 != (long *)0x0)) {
            local_80 = *(undefined8 *)(lVar38 + 8);
            local_78 = *(undefined8 *)(lVar38 + 0x10);
            local_70 = 0x1170;
            (**(code **)(*plVar39 + 0x20))(plVar39,&local_80);
          }
          puVar41 = (ushort *)(*(long *)(lVar38 + 0x10) + *(long *)(lVar38 + 8));
          *puVar41 = *puVar41 | 1;
          *(undefined4 *)(puVar41 + 2) = (undefined4)local_a8;
          *(undefined4 *)(puVar41 + 4) = local_a8._4_4_;
          *(undefined4 *)(puVar41 + 6) = (undefined4)local_a0;
          *(undefined4 *)(puVar41 + 8) = local_a0._4_4_;
          puVar41[10] = (ushort)local_98;
          *(undefined1 *)(puVar41 + 0xb) = local_98._2_1_;
          *(undefined1 *)((long)puVar41 + 0x17) = local_98._3_1_;
          *(undefined4 *)(puVar41 + 0xc) = local_98._4_4_;
          if ((((uVar37 & 1) == 0) && (*(long *)(lVar38 + 0x28) != 0)) &&
             (puVar45 = *(undefined8 **)(*(long *)(lVar38 + 0x28) + 0x18),
             puVar45 != (undefined8 *)0x0)) {
            (**(code **)*puVar45)();
          }
        }
      }
    }
    else if (*(uint *)(lVar46 + 0xe8) < 3) {
      if (DAT_05aed670 == 0) {
        puVar45 = &DAT_055c04a0;
      }
      else {
        puVar45 = &DAT_055c04a0;
        if (*(long *)(DAT_05aed670 + 0x330) != 0) {
          puVar45 = (undefined8 *)
                    (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                              (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(DAT_05aed670 + 0x338));
          iVar36 = FUN_006bd550(*puVar45,0);
          puVar45 = (undefined8 *)PTR_DAT_04bc3a80;
          if (iVar36 != 0x758f7eaf) {
            puVar45 = &DAT_055c04a0;
          }
        }
      }
      iVar36 = *(int *)(puVar45 + 7);
      if ((((((DAT_05ac0a90 == iVar36) || (DAT_05ac0aa0 == iVar36)) ||
            ((DAT_05ac0ab0 == iVar36 || ((DAT_05ac0ac0 == iVar36 || (DAT_05ac0ad0 == iVar36)))))) ||
           (DAT_05ac0ae0 == iVar36)) ||
          ((((DAT_05ac0af0 == iVar36 || (DAT_05ac0b00 == iVar36)) || (DAT_05ac0b10 == iVar36)) ||
           (DAT_05ac0b20 == iVar36)))) &&
         (local_a0 = FUN_03776960(*(undefined4 *)(lVar46 + 0xd8),*(undefined4 *)(lVar46 + 0xdc)),
         local_a0 != 0)) {
        FUN_0373abb8(&local_80);
        local_80._0_4_ = CONCAT13(uVar48,CONCAT12(uVar47,uVar43));
        local_98 = local_98 & 0xffffffffffffff00;
        local_78._0_4_ = CONCAT13(uVar40,CONCAT12(uVar42,uVar35));
        local_70 = uVar33;
        local_80._4_4_ = uVar44;
        local_78._4_4_ = local_ac;
        if (*(long *)(local_a0 + 0x28) == 0) {
          uVar34 = 0;
        }
        else {
          puVar45 = *(undefined8 **)(*(long *)(local_a0 + 0x28) + 0x10);
          uVar34 = 0;
          if (puVar45 != (undefined8 *)0x0) {
            uVar34 = (**(code **)*puVar45)();
          }
        }
        local_98 = CONCAT62(local_98._2_6_,CONCAT11(uVar34,(undefined1)local_98)) &
                   0xffffffffffff01ff;
        local_a8 = PTR_DAT_04bcaae0 + 0x10;
        puVar41 = (ushort *)FUN_0373b0e0(&local_a8);
        *puVar41 = *puVar41 | 1;
        *(undefined4 *)(puVar41 + 2) = (undefined4)local_80;
        *(undefined4 *)(puVar41 + 4) = local_80._4_4_;
        *(undefined4 *)(puVar41 + 6) = (undefined4)local_78;
        *(undefined4 *)(puVar41 + 8) = local_78._4_4_;
        puVar41[10] = (ushort)local_70;
        *(undefined1 *)(puVar41 + 0xb) = local_70._2_1_;
        *(undefined1 *)((long)puVar41 + 0x17) = local_70._3_1_;
        *(undefined4 *)(puVar41 + 0xc) = local_70._4_4_;
        FUN_02640184(&local_a8);
      }
    }
  }
  *(undefined2 *)(lVar46 + 0x88) = uVar35;
  *(undefined1 *)(lVar46 + 0x8a) = uVar42;
  *(undefined1 *)(lVar46 + 0x8b) = uVar40;
  *(undefined2 *)(lVar46 + 0x90) = uVar23;
  *(undefined2 *)(lVar46 + 0xa0) = uVar43;
  *(undefined1 *)(lVar46 + 0xa2) = uVar47;
  *(undefined1 *)(lVar46 + 0xa3) = uVar48;
  *(undefined4 *)(lVar46 + 0x8c) = local_ac;
  *(undefined4 *)(lVar46 + 0xa4) = uVar44;
  *(undefined2 *)(lVar46 + 0xa8) = uVar25;
  *(undefined1 *)(lVar46 + 0xaa) = uVar16;
  *(undefined2 *)(lVar46 + 0xb8) = uVar26;
  *(undefined4 *)(lVar46 + 0xbc) = uVar5;
  *(undefined1 *)(lVar46 + 0xc2) = uVar17;
  *(undefined1 *)(lVar46 + 0xc3) = uVar18;
  *(undefined4 *)(lVar46 + 0xc4) = uVar6;
  *(undefined1 *)(lVar46 + 0x92) = uVar8;
  *(undefined2 *)(lVar46 + 200) = uVar27;
  *(undefined1 *)(lVar46 + 0xca) = uVar20;
  *(undefined1 *)(lVar46 + 0xcb) = uVar21;
  *(undefined4 *)(lVar46 + 0xcc) = uVar7;
  *(undefined1 *)(lVar46 + 0x93) = uVar9;
  *(undefined4 *)(lVar46 + 0x94) = uVar1;
  *(undefined2 *)(lVar46 + 0x98) = uVar22;
  *(undefined1 *)(lVar46 + 0x9a) = uVar10;
  *(undefined1 *)(lVar46 + 0x9b) = uVar11;
  *(undefined4 *)(lVar46 + 0x9c) = uVar2;
  *(undefined1 *)(lVar46 + 0xab) = uVar12;
  *(undefined4 *)(lVar46 + 0xac) = uVar3;
  *(undefined2 *)(lVar46 + 0xb0) = uVar24;
  *(undefined1 *)(lVar46 + 0xb2) = uVar13;
  *(undefined1 *)(lVar46 + 0xb3) = uVar14;
  *(undefined4 *)(lVar46 + 0xb4) = uVar4;
  *(undefined1 *)(lVar46 + 0xba) = uVar15;
  *(undefined1 *)(lVar46 + 0xbb) = uVar19;
  *(undefined2 *)(lVar46 + 0xc0) = uVar28;
  return;
}


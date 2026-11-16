
void FUN_0257e9f4(int param_1)

{
  undefined2 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  byte bVar10;
  ulong uVar11;
  byte *pbVar12;
  uint *puVar13;
  byte bVar14;
  long lVar15;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  uint local_a8;
  uint uStack_a4;
  uint local_a0;
  uint uStack_9c;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined2 local_78;
  undefined1 local_76;
  undefined1 local_75;
  undefined4 local_74;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  
  iVar5 = FUN_00a8c014(*(undefined8 *)PTR_DAT_04bb30a0);
  uVar6 = nn::os::GetSystemTick();
  puVar4 = PTR_DAT_04bb4870;
  uVar6 = (uVar6 ^ uVar6 >> 0x1e) * 0x6c078965 + 1;
  uStack_a4 = (uVar6 ^ uVar6 >> 0x1e) * 0x6c078965 + 2;
  local_a0 = (uStack_a4 ^ uStack_a4 >> 0x1e) * 0x6c078965 + 3;
  uVar3 = (local_a0 ^ local_a0 >> 0x1e) * 0x6c078965 + 4;
  local_a8 = uVar6;
  uStack_9c = uVar3;
  if (param_1 == 0) {
    if ((iVar5 == 0) || (iVar5 == 1)) goto LAB_0257eb4c;
    local_e0 = 0xfffe;
    FUN_0277d4ac(&local_e0);
    local_d8 = 0xfffe;
    FUN_0277d4ac(&local_d8);
    local_d0 = 0xfffe;
    FUN_0277d4ac(&local_d0);
    local_c8 = 0xfffe;
    FUN_0277d4ac(&local_c8);
    local_c0 = 0xfffe;
    FUN_0277d4ac(&local_c0);
    local_b8 = 0xfffe;
    FUN_0277d4ac(&local_b8);
    local_b0 = 0xfffe;
    FUN_0277d4ac(&local_b0);
    uVar2 = *(uint *)(*(long *)(DAT_054ecc70 + 0x10) + 0x1c0);
    uVar11 = (ulong)uVar2;
    if ((int)uVar2 < 1) {
      lVar7 = *(long *)(*(long *)(DAT_054ecc70 + 0x10) + 0xb0);
      uVar11 = 0;
      if (lVar7 != 0) {
        puVar13 = *(uint **)(lVar7 + 8);
        uVar11 = 0;
        if (puVar13 != (uint *)0x0) {
          uVar11 = (ulong)*puVar13;
        }
      }
    }
    uVar6 = uVar6 ^ uVar6 * 0x800;
    FUN_024fcbd0(&local_98,DAT_054ecc70,
                 uVar11 * (uVar6 >> 8 ^ uVar3 >> 0x13 ^ uVar6 ^ uVar3) >> 0x20);
LAB_0257eca0:
    local_e0 = local_98;
    local_d8 = local_90;
    local_d0 = local_88;
    local_c8 = CONCAT44(uStack_7c,local_80);
    local_c0._0_4_ = CONCAT13(local_75,CONCAT12(local_76,local_78));
    local_c0 = CONCAT44(local_74,(undefined4)local_c0);
    local_b8 = local_70;
    local_b0 = CONCAT44(uStack_64,local_68);
  }
  else {
    if (param_1 == 1) {
      uVar6 = uVar6 ^ uVar6 * 0x800;
      if ((iVar5 == 0) || (iVar5 == 1)) {
        local_e0 = 0xfffe;
        FUN_0277d4ac(&local_e0);
        local_d8 = 0xfffe;
        FUN_0277d4ac(&local_d8);
        local_d0 = 0xfffe;
        FUN_0277d4ac(&local_d0);
        local_c8 = 0xfffe;
        FUN_0277d4ac(&local_c8);
        local_c0 = 0xfffe;
        FUN_0277d4ac(&local_c0);
        local_b8 = 0xfffe;
        FUN_0277d4ac(&local_b8);
        local_b0 = 0xfffe;
        FUN_0277d4ac(&local_b0);
        lVar7 = *(long *)puVar4;
        lVar15 = *(long *)(lVar7 + 0x18);
        uVar2 = *(uint *)(lVar15 + 0x1c0);
        uVar11 = (ulong)uVar2;
        if ((int)uVar2 < 1) {
          lVar15 = *(long *)(lVar15 + 0xb0);
          uVar11 = 0;
          if (lVar15 != 0) {
            puVar13 = *(uint **)(lVar15 + 8);
            uVar11 = 0;
            if (puVar13 != (uint *)0x0) {
              uVar11 = (ulong)*puVar13;
            }
          }
        }
        FUN_024fd4e0(&local_98,lVar7,uVar11 * (uVar6 >> 8 ^ uVar3 >> 0x13 ^ uVar6 ^ uVar3) >> 0x20);
      }
      else {
        local_e0 = 0xfffe;
        FUN_0277d4ac(&local_e0);
        local_d8 = 0xfffe;
        FUN_0277d4ac(&local_d8);
        local_d0 = 0xfffe;
        FUN_0277d4ac(&local_d0);
        local_c8 = 0xfffe;
        FUN_0277d4ac(&local_c8);
        local_c0 = 0xfffe;
        FUN_0277d4ac(&local_c0);
        local_b8 = 0xfffe;
        FUN_0277d4ac(&local_b8);
        local_b0 = 0xfffe;
        FUN_0277d4ac(&local_b0);
        lVar7 = *(long *)puVar4;
        lVar15 = *(long *)(lVar7 + 0x20);
        uVar2 = *(uint *)(lVar15 + 0x1c0);
        uVar11 = (ulong)uVar2;
        if ((int)uVar2 < 1) {
          lVar15 = *(long *)(lVar15 + 0xb0);
          uVar11 = 0;
          if (lVar15 != 0) {
            puVar13 = *(uint **)(lVar15 + 8);
            uVar11 = 0;
            if (puVar13 != (uint *)0x0) {
              uVar11 = (ulong)*puVar13;
            }
          }
        }
        FUN_024fddf0(&local_98,lVar7,uVar11 * (uVar6 >> 8 ^ uVar3 >> 0x13 ^ uVar6 ^ uVar3) >> 0x20);
      }
      goto LAB_0257eca0;
    }
LAB_0257eb4c:
    FUN_0257f34c(&local_e0,&local_a8);
  }
  if (DAT_04cd19d8 == 0) {
    pbVar12 = &DAT_0548e140;
LAB_0257ed48:
    if (*pbVar12 < 8) goto LAB_0257edc0;
LAB_0257ed54:
    if (DAT_0537d558 == (long *)0x0) {
LAB_0257edb8:
      pbVar12 = &DAT_0548e168;
      goto LAB_0257edc0;
    }
    lVar7 = *DAT_0537d558;
    bVar14 = *(byte *)(lVar7 + 0x473);
    pbVar12 = PTR_DAT_04bb5038;
    if ((long)(char)bVar14 != 0xffffffffffffffff) {
      puVar13 = (uint *)(lVar7 + 0x48) + ((long)(char)bVar14 & 0xffffffffU) * 0x20;
      if (7 < bVar14) {
        puVar13 = (uint *)(lVar7 + 0x48);
      }
      if ((*puVar13 & 8) != 0) {
        pbVar12 = (byte *)(lVar7 + 0x471);
      }
    }
    bVar10 = *pbVar12;
    bVar14 = bVar10;
    if (7 < bVar10) {
      bVar14 = 0xff;
    }
    local_a8 = CONCAT31(local_a8._1_3_,bVar14);
    if (7 < bVar10) goto LAB_0257edb8;
  }
  else {
    pbVar12 = PTR_DAT_04bb32e0;
    if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
      pbVar12 = (byte *)(DAT_04cd19d8 + 0x158);
    }
    if (7 < *pbVar12) {
      if ((*(int *)(DAT_04cd19d8 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
        pbVar12 = (byte *)(DAT_054f5738 + 0x11a5);
        goto LAB_0257ed48;
      }
      goto LAB_0257ed54;
    }
LAB_0257edc0:
    bVar10 = *pbVar12;
    if (7 < bVar10) {
      bVar10 = 0xff;
    }
    local_a8 = CONCAT31(local_a8._1_3_,bVar10);
  }
  if (7 < bVar10) {
    bVar10 = 0xff;
  }
  local_98 = CONCAT71(local_98._1_7_,bVar10);
  lVar7 = FUN_02583354(*(undefined8 *)PTR_DAT_04bb4f78,&local_98,1);
  if (lVar7 == 0) {
    return;
  }
  lVar15 = *(long *)(lVar7 + 0x1b0);
  if (lVar15 == 0) {
    uVar11 = 0;
  }
  else {
    if (*(undefined8 **)(lVar15 + 0x10) == (undefined8 *)0x0) {
      uVar11 = 0;
      plVar8 = *(long **)(lVar15 + 0x20);
    }
    else {
      uVar11 = (**(code **)**(undefined8 **)(lVar15 + 0x10))();
      uVar11 = uVar11 & 0xffffffff;
      if (*(long *)(lVar7 + 0x1b0) == 0) goto LAB_0257ee6c;
      plVar8 = *(long **)(*(long *)(lVar7 + 0x1b0) + 0x20);
    }
    if (plVar8 != (long *)0x0) {
      local_98 = *(undefined8 *)(lVar7 + 400);
      local_90 = *(undefined8 *)(lVar7 + 0x198);
      local_88 = 0x1190;
      (**(code **)(*plVar8 + 0x20))(plVar8,&local_98);
    }
  }
LAB_0257ee6c:
  puVar1 = (undefined2 *)(*(long *)(lVar7 + 0x198) + *(long *)(lVar7 + 400));
  *puVar1 = (undefined2)local_e0;
  *(undefined1 *)(puVar1 + 1) = local_e0._2_1_;
  *(undefined1 *)((long)puVar1 + 3) = local_e0._3_1_;
  *(undefined4 *)(puVar1 + 2) = local_e0._4_4_;
  lVar15 = *(long *)(lVar7 + 0x1b0);
  if ((uVar11 & 1) == 0) {
LAB_0257eeb8:
    if (lVar15 != 0) goto LAB_0257eebc;
LAB_0257eee8:
    uVar11 = 0;
  }
  else {
    if (lVar15 == 0) goto LAB_0257eee8;
    if (*(undefined8 **)(lVar15 + 0x18) != (undefined8 *)0x0) {
      (**(code **)**(undefined8 **)(lVar15 + 0x18))();
      lVar15 = *(long *)(lVar7 + 0x1b0);
      goto LAB_0257eeb8;
    }
LAB_0257eebc:
    if (*(undefined8 **)(lVar15 + 0x10) == (undefined8 *)0x0) {
      uVar11 = 0;
      plVar8 = *(long **)(lVar15 + 0x20);
    }
    else {
      uVar11 = (**(code **)**(undefined8 **)(lVar15 + 0x10))();
      uVar11 = uVar11 & 0xffffffff;
      if (*(long *)(lVar7 + 0x1b0) == 0) goto LAB_0257ef1c;
      plVar8 = *(long **)(*(long *)(lVar7 + 0x1b0) + 0x20);
    }
    if (plVar8 != (long *)0x0) {
      local_98 = *(undefined8 *)(lVar7 + 400);
      local_90 = *(undefined8 *)(lVar7 + 0x198);
      local_88 = 0x1190;
      (**(code **)(*plVar8 + 0x20))(plVar8,&local_98);
    }
  }
LAB_0257ef1c:
  lVar15 = *(long *)(lVar7 + 0x198) + *(long *)(lVar7 + 400);
  *(undefined4 *)(lVar15 + 0x8b0) = (undefined4)local_d8;
  *(undefined4 *)(lVar15 + 0x8b4) = local_d8._4_4_;
  lVar15 = *(long *)(lVar7 + 0x1b0);
  if ((uVar11 & 1) == 0) {
LAB_0257ef54:
    if (lVar15 != 0) goto LAB_0257ef58;
LAB_0257ef84:
    uVar11 = 0;
  }
  else {
    if (lVar15 == 0) goto LAB_0257ef84;
    if (*(undefined8 **)(lVar15 + 0x18) != (undefined8 *)0x0) {
      (**(code **)**(undefined8 **)(lVar15 + 0x18))();
      lVar15 = *(long *)(lVar7 + 0x1b0);
      goto LAB_0257ef54;
    }
LAB_0257ef58:
    if (*(undefined8 **)(lVar15 + 0x10) == (undefined8 *)0x0) {
      uVar11 = 0;
      plVar8 = *(long **)(lVar15 + 0x20);
    }
    else {
      uVar11 = (**(code **)**(undefined8 **)(lVar15 + 0x10))();
      uVar11 = uVar11 & 0xffffffff;
      if (*(long *)(lVar7 + 0x1b0) == 0) goto LAB_0257efb8;
      plVar8 = *(long **)(*(long *)(lVar7 + 0x1b0) + 0x20);
    }
    if (plVar8 != (long *)0x0) {
      local_98 = *(undefined8 *)(lVar7 + 400);
      local_90 = *(undefined8 *)(lVar7 + 0x198);
      local_88 = 0x1190;
      (**(code **)(*plVar8 + 0x20))(plVar8,&local_98);
    }
  }
LAB_0257efb8:
  lVar15 = *(long *)(lVar7 + 0x198) + *(long *)(lVar7 + 400);
  *(undefined4 *)(lVar15 + 0x8b8) = (undefined4)local_d0;
  *(undefined4 *)(lVar15 + 0x8bc) = local_d0._4_4_;
  lVar15 = *(long *)(lVar7 + 0x1b0);
  if ((uVar11 & 1) == 0) {
LAB_0257eff0:
    if (lVar15 != 0) goto LAB_0257eff4;
LAB_0257f020:
    uVar11 = 0;
  }
  else {
    if (lVar15 == 0) goto LAB_0257f020;
    if (*(undefined8 **)(lVar15 + 0x18) != (undefined8 *)0x0) {
      (**(code **)**(undefined8 **)(lVar15 + 0x18))();
      lVar15 = *(long *)(lVar7 + 0x1b0);
      goto LAB_0257eff0;
    }
LAB_0257eff4:
    if (*(undefined8 **)(lVar15 + 0x10) == (undefined8 *)0x0) {
      uVar11 = 0;
      plVar8 = *(long **)(lVar15 + 0x20);
    }
    else {
      uVar11 = (**(code **)**(undefined8 **)(lVar15 + 0x10))();
      uVar11 = uVar11 & 0xffffffff;
      if (*(long *)(lVar7 + 0x1b0) == 0) goto LAB_0257f054;
      plVar8 = *(long **)(*(long *)(lVar7 + 0x1b0) + 0x20);
    }
    if (plVar8 != (long *)0x0) {
      local_98 = *(undefined8 *)(lVar7 + 400);
      local_90 = *(undefined8 *)(lVar7 + 0x198);
      local_88 = 0x1190;
      (**(code **)(*plVar8 + 0x20))(plVar8,&local_98);
    }
  }
LAB_0257f054:
  lVar15 = *(long *)(lVar7 + 0x198) + *(long *)(lVar7 + 400);
  *(undefined4 *)(lVar15 + 0x8c0) = (undefined4)local_c8;
  *(undefined4 *)(lVar15 + 0x8c4) = local_c8._4_4_;
  lVar15 = *(long *)(lVar7 + 0x1b0);
  if ((uVar11 & 1) == 0) {
LAB_0257f08c:
    if (lVar15 != 0) goto LAB_0257f090;
LAB_0257f0bc:
    uVar11 = 0;
  }
  else {
    if (lVar15 == 0) goto LAB_0257f0bc;
    if (*(undefined8 **)(lVar15 + 0x18) != (undefined8 *)0x0) {
      (**(code **)**(undefined8 **)(lVar15 + 0x18))();
      lVar15 = *(long *)(lVar7 + 0x1b0);
      goto LAB_0257f08c;
    }
LAB_0257f090:
    if (*(undefined8 **)(lVar15 + 0x10) == (undefined8 *)0x0) {
      uVar11 = 0;
      plVar8 = *(long **)(lVar15 + 0x20);
    }
    else {
      uVar11 = (**(code **)**(undefined8 **)(lVar15 + 0x10))();
      uVar11 = uVar11 & 0xffffffff;
      if (*(long *)(lVar7 + 0x1b0) == 0) goto LAB_0257f0f0;
      plVar8 = *(long **)(*(long *)(lVar7 + 0x1b0) + 0x20);
    }
    if (plVar8 != (long *)0x0) {
      local_98 = *(undefined8 *)(lVar7 + 400);
      local_90 = *(undefined8 *)(lVar7 + 0x198);
      local_88 = 0x1190;
      (**(code **)(*plVar8 + 0x20))(plVar8,&local_98);
    }
  }
LAB_0257f0f0:
  lVar15 = *(long *)(lVar7 + 0x198) + *(long *)(lVar7 + 400);
  *(undefined4 *)(lVar15 + 0x1170) = (undefined4)local_c0;
  *(undefined4 *)(lVar15 + 0x1174) = local_c0._4_4_;
  lVar15 = *(long *)(lVar7 + 0x1b0);
  if ((uVar11 & 1) == 0) {
LAB_0257f138:
    if (lVar15 != 0) goto LAB_0257f13c;
LAB_0257f168:
    uVar11 = 0;
  }
  else {
    if (lVar15 == 0) goto LAB_0257f168;
    if (*(undefined8 **)(lVar15 + 0x18) != (undefined8 *)0x0) {
      (**(code **)**(undefined8 **)(lVar15 + 0x18))();
      lVar15 = *(long *)(lVar7 + 0x1b0);
      goto LAB_0257f138;
    }
LAB_0257f13c:
    if (*(undefined8 **)(lVar15 + 0x10) == (undefined8 *)0x0) {
      uVar11 = 0;
      plVar8 = *(long **)(lVar15 + 0x20);
    }
    else {
      uVar11 = (**(code **)**(undefined8 **)(lVar15 + 0x10))();
      uVar11 = uVar11 & 0xffffffff;
      if (*(long *)(lVar7 + 0x1b0) == 0) goto LAB_0257f19c;
      plVar8 = *(long **)(*(long *)(lVar7 + 0x1b0) + 0x20);
    }
    if (plVar8 != (long *)0x0) {
      local_98 = *(undefined8 *)(lVar7 + 400);
      local_90 = *(undefined8 *)(lVar7 + 0x198);
      local_88 = 0x1190;
      (**(code **)(*plVar8 + 0x20))(plVar8,&local_98);
    }
  }
LAB_0257f19c:
  lVar15 = *(long *)(lVar7 + 0x198) + *(long *)(lVar7 + 400);
  *(undefined4 *)(lVar15 + 0x1178) = (undefined4)local_b8;
  *(undefined4 *)(lVar15 + 0x117c) = local_b8._4_4_;
  lVar15 = *(long *)(lVar7 + 0x1b0);
  if ((uVar11 & 1) == 0) {
LAB_0257f1ec:
    if (lVar15 == 0) {
LAB_0257f21c:
      uVar11 = 0;
      goto LAB_0257f250;
    }
  }
  else {
    if (lVar15 == 0) goto LAB_0257f21c;
    if (*(undefined8 **)(lVar15 + 0x18) != (undefined8 *)0x0) {
      (**(code **)**(undefined8 **)(lVar15 + 0x18))();
      lVar15 = *(long *)(lVar7 + 0x1b0);
      goto LAB_0257f1ec;
    }
  }
  if (*(undefined8 **)(lVar15 + 0x10) == (undefined8 *)0x0) {
    uVar11 = 0;
    plVar8 = *(long **)(lVar15 + 0x20);
  }
  else {
    uVar11 = (**(code **)**(undefined8 **)(lVar15 + 0x10))();
    uVar11 = uVar11 & 0xffffffff;
    if (*(long *)(lVar7 + 0x1b0) == 0) goto LAB_0257f250;
    plVar8 = *(long **)(*(long *)(lVar7 + 0x1b0) + 0x20);
  }
  if (plVar8 != (long *)0x0) {
    local_98 = *(undefined8 *)(lVar7 + 400);
    local_90 = *(undefined8 *)(lVar7 + 0x198);
    local_88 = 0x1190;
    (**(code **)(*plVar8 + 0x20))(plVar8,&local_98);
  }
LAB_0257f250:
  lVar15 = *(long *)(lVar7 + 0x198) + *(long *)(lVar7 + 400);
  *(undefined4 *)(lVar15 + 0x1180) = (undefined4)local_b0;
  *(undefined4 *)(lVar15 + 0x1184) = local_b0._4_4_;
  if ((((uVar11 & 1) != 0) && (*(long *)(lVar7 + 0x1b0) != 0)) &&
     (puVar9 = *(undefined8 **)(*(long *)(lVar7 + 0x1b0) + 0x18), puVar9 != (undefined8 *)0x0)) {
    (**(code **)*puVar9)();
  }
  FUN_02648c90(&local_a8,&local_e0,0);
  FUN_02648c90(&local_a8,&local_d8,0);
  FUN_02648c90(&local_a8,&local_d0,0);
  FUN_02648c90(&local_a8,&local_c8,0);
  FUN_02648c90(&local_a8,&local_c0,0);
  FUN_02648c90(&local_a8,&local_b8,0);
  FUN_02648c90(&local_a8,&local_b0,0);
  return;
}


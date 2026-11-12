
void FUN_008122f0(long param_1)

{
  uint *puVar1;
  uint uVar2;
  undefined *puVar3;
  uint uVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  uint uVar13;
  long lVar14;
  byte *pbVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  uint uVar20;
  long *plVar21;
  long *plVar22;
  long *plVar23;
  byte bVar24;
  uint local_c0;
  byte local_bc [4];
  undefined8 local_b8;
  long local_b0;
  undefined8 local_a8;
  undefined1 local_85;
  byte local_80 [4];
  byte local_7c [4];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  if ((*(long *)PTR_DAT_04bb46b0 != 0) &&
     (lVar5 = (**(code **)(*(long *)**(undefined8 **)(*(long *)PTR_DAT_04bb46b0 + 0x10) + 0x30))(),
     lVar5 != 0)) {
    plVar23 = (long *)(lVar5 + 0x276e78);
    if ((*(long *)(lVar5 + 0x276e98) == 0) ||
       (puVar6 = *(undefined8 **)(*(long *)(lVar5 + 0x276e98) + 0x10), puVar6 == (undefined8 *)0x0))
    {
      uVar7 = 0;
    }
    else {
      uVar7 = (**(code **)*puVar6)();
      uVar7 = uVar7 & 0xffffffff;
    }
    plVar9 = DAT_04ccc690;
    plVar22 = *(long **)(param_1 + 0x10);
    if ((char)DAT_04ccc690[1] == '\0') {
      lVar8 = nn::oe::GetProgramTotalActiveTime();
      *plVar9 = lVar8;
      *(undefined1 *)(plVar9 + 1) = 1;
    }
    else {
      lVar8 = *DAT_04ccc690;
    }
    lVar14 = *plVar22;
    lVar16 = *(long *)(param_1 + 0x18);
    if ((*(long *)(lVar5 + 0x276e98) != 0) &&
       (plVar9 = *(long **)(*(long *)(lVar5 + 0x276e98) + 0x20), plVar9 != (long *)0x0)) {
      local_b8 = (undefined *)*plVar23;
      local_b0 = *(long *)(lVar5 + 0x276e80);
      local_a8 = 8;
      (**(code **)(*plVar9 + 0x20))(plVar9,&local_b8);
    }
    *(long *)(*(long *)(lVar5 + 0x276e80) + *plVar23) = (lVar8 - lVar14) / 1000000000 + lVar16;
    if ((*(long *)(lVar5 + 0x276e98) != 0) &&
       (plVar9 = *(long **)(*(long *)(lVar5 + 0x276e98) + 0x20), plVar9 != (long *)0x0)) {
      local_b8 = (undefined *)*plVar23;
      local_b0 = *(long *)(lVar5 + 0x276e80);
      local_a8 = 8;
      (**(code **)(*plVar9 + 0x20))(plVar9,&local_b8);
    }
    if ((((uVar7 & 1) != 0) && (*(long *)(lVar5 + 0x276e98) != 0)) &&
       (puVar6 = *(undefined8 **)(*(long *)(lVar5 + 0x276e98) + 0x18), puVar6 != (undefined8 *)0x0))
    {
      (**(code **)*puVar6)();
    }
  }
  puVar6 = (undefined8 *)PTR_DAT_04bb4f78;
  if (*(int *)(param_1 + 0x30) == -1) goto LAB_00812abc;
  pbVar15 = &DAT_0548e140;
  if (DAT_04cd19d8 == 0) {
LAB_008124ac:
    if (*pbVar15 < 8) goto LAB_00812518;
LAB_008124b8:
    if (DAT_0537d558 == (long *)0x0) {
LAB_00812510:
      pbVar15 = &DAT_0548e168;
      goto LAB_00812518;
    }
    lVar5 = *DAT_0537d558;
    bVar24 = *(byte *)(lVar5 + 0x473);
    pbVar15 = PTR_DAT_04bb5038;
    if ((long)(char)bVar24 != 0xffffffffffffffff) {
      puVar1 = (uint *)(lVar5 + 0x48) + ((long)(char)bVar24 & 0xffffffffU) * 0x20;
      if (7 < bVar24) {
        puVar1 = (uint *)(lVar5 + 0x48);
      }
      if ((*puVar1 & 8) != 0) {
        pbVar15 = (byte *)(lVar5 + 0x471);
      }
    }
    local_80[0] = *pbVar15;
    if (7 < local_80[0]) goto LAB_00812510;
  }
  else {
    pbVar15 = &DAT_0548e140;
    if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
      pbVar15 = (byte *)(DAT_04cd19d8 + 0x158);
    }
    if (7 < *pbVar15) {
      if ((*(int *)(DAT_04cd19d8 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
        pbVar15 = (byte *)(DAT_054f5738 + 0x11a5);
        goto LAB_008124ac;
      }
      goto LAB_008124b8;
    }
LAB_00812518:
    local_80[0] = *pbVar15;
    if (7 < local_80[0]) {
      local_80[0] = 0xff;
    }
  }
  if (7 < local_80[0]) {
    local_80[0] = 0xff;
  }
  lVar5 = FUN_02583354(*(undefined8 *)PTR_DAT_04bb4f78,local_80,1);
  if (lVar5 != 0) {
    local_85 = 0;
    local_b0 = (long)&local_a8 + 4;
    local_a8 = CONCAT35(local_a8._5_3_,0x20);
    local_b8 = PTR_DAT_04bb2028 + 0x10;
    lVar8 = lVar5 + 0x194b0;
    plVar23 = (long *)(lVar5 + 0x194b8);
    lVar5 = lVar8;
    if (*plVar23 == 0) {
      lVar5 = *(long *)(DAT_05574040 + 0x20);
    }
    plVar9 = (long *)(lVar5 + 0x2a6d0);
    if ((*(long *)(lVar5 + 0x2a6f0) == 0) ||
       (puVar6 = *(undefined8 **)(*(long *)(lVar5 + 0x2a6f0) + 0x10), puVar6 == (undefined8 *)0x0))
    {
      uVar7 = 0;
    }
    else {
      uVar7 = (**(code **)*puVar6)();
      uVar7 = uVar7 & 0xffffffff;
    }
    plVar22 = DAT_04ccc690;
    plVar21 = *(long **)(param_1 + 0x20);
    if ((char)DAT_04ccc690[1] == '\0') {
      lVar14 = nn::oe::GetProgramTotalActiveTime();
      *plVar22 = lVar14;
      *(undefined1 *)(plVar22 + 1) = 1;
    }
    else {
      lVar14 = *DAT_04ccc690;
    }
    lVar16 = *plVar21;
    lVar17 = *(long *)(param_1 + 0x28);
    if ((*(long *)(lVar5 + 0x2a6f0) != 0) &&
       (plVar22 = *(long **)(*(long *)(lVar5 + 0x2a6f0) + 0x20), plVar22 != (long *)0x0)) {
      local_78 = *plVar9;
      local_70 = *(undefined8 *)(lVar5 + 0x2a6d8);
      uStack_68 = 8;
      (**(code **)(*plVar22 + 0x20))(plVar22,&local_78);
    }
    *(long *)(*(long *)(lVar5 + 0x2a6d8) + *plVar9) = (lVar14 - lVar16) / 1000000000 + lVar17;
    FUN_038d1270(&local_b8,"MainPlayer Total (index:%d)",*(undefined4 *)(param_1 + 0x30));
    (**(code **)(local_b8 + 0x18))(&local_b8);
    if ((*(long *)(lVar5 + 0x2a6f0) != 0) &&
       (plVar22 = *(long **)(*(long *)(lVar5 + 0x2a6f0) + 0x20), plVar22 != (long *)0x0)) {
      local_78 = *plVar9;
      local_70 = *(undefined8 *)(lVar5 + 0x2a6d8);
      uStack_68 = 8;
      (**(code **)(*plVar22 + 0x20))(plVar22,&local_78);
    }
    lVar14 = lVar8;
    if (*plVar23 == 0) {
      lVar14 = *(long *)(DAT_05574040 + 0x20);
    }
    plVar9 = (long *)(lVar14 + 0x2a740);
    if ((*(long *)(lVar14 + 0x2a760) == 0) ||
       (puVar6 = *(undefined8 **)(*(long *)(lVar14 + 0x2a760) + 0x10), puVar6 == (undefined8 *)0x0))
    {
      uVar10 = 0;
    }
    else {
      uVar10 = (**(code **)*puVar6)();
      uVar10 = uVar10 & 0xffffffff;
    }
    plVar22 = DAT_04ccc690;
    plVar21 = *(long **)(param_1 + 0x68);
    if ((char)DAT_04ccc690[1] == '\0') {
      lVar16 = nn::oe::GetProgramTotalActiveTime();
      *plVar22 = lVar16;
      *(undefined1 *)(plVar22 + 1) = 1;
    }
    else {
      lVar16 = *DAT_04ccc690;
    }
    lVar17 = *plVar21;
    lVar18 = *(long *)(param_1 + 0x70);
    if ((*(long *)(lVar14 + 0x2a760) != 0) &&
       (plVar22 = *(long **)(*(long *)(lVar14 + 0x2a760) + 0x20), plVar22 != (long *)0x0)) {
      local_78 = *plVar9;
      local_70 = *(undefined8 *)(lVar14 + 0x2a748);
      uStack_68 = 8;
      (**(code **)(*plVar22 + 0x20))(plVar22,&local_78);
    }
    *(long *)(*(long *)(lVar14 + 0x2a748) + *plVar9) = (lVar16 - lVar17) / 1000000000 + lVar18;
    FUN_038d1270(&local_b8,"MainPlayer Daily (index:%d)",*(undefined4 *)(param_1 + 0x30));
    (**(code **)(local_b8 + 0x18))(&local_b8);
    if ((*(long *)(lVar14 + 0x2a760) != 0) &&
       (plVar22 = *(long **)(*(long *)(lVar14 + 0x2a760) + 0x20), plVar22 != (long *)0x0)) {
      local_78 = *plVar9;
      local_70 = *(undefined8 *)(lVar14 + 0x2a748);
      uStack_68 = 8;
      (**(code **)(*plVar22 + 0x20))(plVar22,&local_78);
    }
    if (*(char *)(param_1 + 0x98) != '\0') {
      lVar16 = lVar8;
      if (*plVar23 == 0) {
        lVar16 = *(long *)(DAT_05574040 + 0x20);
      }
      plVar9 = (long *)(lVar16 + 0x2a778);
      if ((*(long *)(lVar16 + 0x2a798) == 0) ||
         (puVar6 = *(undefined8 **)(*(long *)(lVar16 + 0x2a798) + 0x10), puVar6 == (undefined8 *)0x0
         )) {
        local_c0 = 0;
      }
      else {
        local_c0 = (**(code **)*puVar6)();
      }
      plVar22 = DAT_04ccc690;
      plVar21 = *(long **)(param_1 + 0x78);
      if ((char)DAT_04ccc690[1] == '\0') {
        lVar17 = nn::oe::GetProgramTotalActiveTime();
        *plVar22 = lVar17;
        *(undefined1 *)(plVar22 + 1) = 1;
      }
      else {
        lVar17 = *DAT_04ccc690;
      }
      lVar18 = *plVar21;
      lVar19 = *(long *)(param_1 + 0x80);
      if ((*(long *)(lVar16 + 0x2a798) != 0) &&
         (plVar22 = *(long **)(*(long *)(lVar16 + 0x2a798) + 0x20), plVar22 != (long *)0x0)) {
        local_78 = *plVar9;
        local_70 = *(undefined8 *)(lVar16 + 0x2a780);
        uStack_68 = 8;
        (**(code **)(*plVar22 + 0x20))(plVar22,&local_78);
      }
      *(long *)(*(long *)(lVar16 + 0x2a780) + *plVar9) = (lVar17 - lVar18) / 1000000000 + lVar19;
      FUN_038d1270(&local_b8,"Wherearen Total (index:%d)",*(undefined4 *)(param_1 + 0x30));
      (**(code **)(local_b8 + 0x18))(&local_b8);
      if ((*(long *)(lVar16 + 0x2a798) != 0) &&
         (plVar22 = *(long **)(*(long *)(lVar16 + 0x2a798) + 0x20), plVar22 != (long *)0x0)) {
        local_78 = *plVar9;
        local_70 = *(undefined8 *)(lVar16 + 0x2a780);
        uStack_68 = 8;
        (**(code **)(*plVar22 + 0x20))(plVar22,&local_78);
      }
      if (*plVar23 == 0) {
        lVar8 = *(long *)(DAT_05574040 + 0x20);
      }
      plVar23 = (long *)(lVar8 + 0x2a7b0);
      if ((*(long *)(lVar8 + 0x2a7d0) == 0) ||
         (puVar6 = *(undefined8 **)(*(long *)(lVar8 + 0x2a7d0) + 0x10), puVar6 == (undefined8 *)0x0)
         ) {
        uVar11 = 0;
      }
      else {
        uVar11 = (**(code **)*puVar6)();
        uVar11 = uVar11 & 0xffffffff;
      }
      plVar9 = DAT_04ccc690;
      plVar22 = *(long **)(param_1 + 0x88);
      if ((char)DAT_04ccc690[1] == '\0') {
        lVar17 = nn::oe::GetProgramTotalActiveTime();
        *plVar9 = lVar17;
        *(undefined1 *)(plVar9 + 1) = 1;
      }
      else {
        lVar17 = *DAT_04ccc690;
      }
      lVar18 = *plVar22;
      lVar19 = *(long *)(param_1 + 0x90);
      if ((*(long *)(lVar8 + 0x2a7d0) != 0) &&
         (plVar9 = *(long **)(*(long *)(lVar8 + 0x2a7d0) + 0x20), plVar9 != (long *)0x0)) {
        local_78 = *plVar23;
        local_70 = *(undefined8 *)(lVar8 + 0x2a7b8);
        uStack_68 = 8;
        (**(code **)(*plVar9 + 0x20))(plVar9,&local_78);
      }
      *(long *)(*(long *)(lVar8 + 0x2a7b8) + *plVar23) = (lVar17 - lVar18) / 1000000000 + lVar19;
      FUN_038d1270(&local_b8,"Wherearen Daily (index:%d)",*(undefined4 *)(param_1 + 0x30));
      (**(code **)(local_b8 + 0x18))(&local_b8);
      if ((*(long *)(lVar8 + 0x2a7d0) != 0) &&
         (plVar9 = *(long **)(*(long *)(lVar8 + 0x2a7d0) + 0x20), plVar9 != (long *)0x0)) {
        local_78 = *plVar23;
        local_70 = *(undefined8 *)(lVar8 + 0x2a7b8);
        uStack_68 = 8;
        (**(code **)(*plVar9 + 0x20))(plVar9,&local_78);
      }
      if ((((uVar11 & 1) != 0) && (*(long *)(lVar8 + 0x2a7d0) != 0)) &&
         (puVar6 = *(undefined8 **)(*(long *)(lVar8 + 0x2a7d0) + 0x18), puVar6 != (undefined8 *)0x0)
         ) {
        (**(code **)*puVar6)();
      }
      if ((((local_c0 & 1) != 0) && (*(long *)(lVar16 + 0x2a798) != 0)) &&
         (puVar6 = *(undefined8 **)(*(long *)(lVar16 + 0x2a798) + 0x18), puVar6 != (undefined8 *)0x0
         )) {
        (**(code **)*puVar6)();
      }
    }
    if ((((uVar10 & 1) != 0) && (*(long *)(lVar14 + 0x2a760) != 0)) &&
       (puVar6 = *(undefined8 **)(*(long *)(lVar14 + 0x2a760) + 0x18), puVar6 != (undefined8 *)0x0))
    {
      (**(code **)*puVar6)();
    }
    if ((((uVar7 & 1) != 0) && (*(long *)(lVar5 + 0x2a6f0) != 0)) &&
       (puVar6 = *(undefined8 **)(*(long *)(lVar5 + 0x2a6f0) + 0x18), puVar6 != (undefined8 *)0x0))
    {
      (**(code **)*puVar6)();
    }
    puVar6 = &DAT_055021a0;
  }
LAB_00812abc:
  puVar3 = PTR_DAT_04bb5038;
  if (*(int *)(param_1 + 0x38) != 0) {
    plVar23 = *(long **)(param_1 + 0x40);
    do {
      uVar2 = *(uint *)*plVar23;
      FUN_02507c6c(&local_b8,1,1,0,0);
      uVar20 = (uint)(byte)local_b8;
      local_78 = CONCAT44(local_b8._4_4_,(undefined4)local_78);
      bVar24 = (byte)local_b8;
      if (7 < (byte)local_b8) {
        bVar24 = 0xff;
      }
      local_78 = CONCAT71(local_78._1_7_,bVar24);
      local_70 = CONCAT62(local_70._2_6_,(undefined2)local_b0);
      if ((byte)local_b8 < 8) {
        while( true ) {
          local_7c[0] = (byte)uVar20;
          FUN_02582a24(local_7c);
          uVar4 = FUN_02582d8c(local_7c,1);
          uVar13 = 0xffffffff;
          if (uVar4 < 8) {
            lVar5 = *(long *)PTR_DAT_04bb4fb8 + (ulong)uVar4 * 0x13f0;
            if (*(char *)(lVar5 + 0x13d4) == '\0') {
              uVar13 = 0xffffffff;
            }
            else {
              uVar13 = 0xffffffff;
              if (*(int *)(lVar5 + 0x13d0) == 0) {
                uVar13 = (uint)*(byte *)(lVar5 + 0x13d5);
              }
            }
          }
          if (uVar13 == uVar2) break;
          uVar7 = (ulong)uVar20;
          do {
            if (uVar7 == 7) goto LAB_00812af0;
            uVar7 = uVar7 + 1;
            uVar10 = FUN_02507924(&local_78,puVar3 + uVar7);
          } while ((uVar10 & 1) == 0);
          bVar24 = puVar3[uVar7];
          uVar20 = (uint)bVar24;
          if (7 < uVar20) goto LAB_00812af0;
          local_78 = CONCAT71(local_78._1_7_,bVar24);
        }
        local_bc[0] = local_7c[0];
        if (7 < local_7c[0]) {
          local_bc[0] = 0xff;
        }
        lVar5 = FUN_02583354(*puVar6,local_bc,1);
        if (lVar5 != 0) {
          lVar8 = lVar5 + 0x194b0;
          if (*(long *)(lVar5 + 0x194b8) == 0) {
            lVar8 = *(long *)(DAT_05574040 + 0x20);
          }
          plVar9 = (long *)(lVar8 + 0x2a708);
          if ((*(long *)(lVar8 + 0x2a728) == 0) ||
             (puVar6 = *(undefined8 **)(*(long *)(lVar8 + 0x2a728) + 0x10),
             puVar6 == (undefined8 *)0x0)) {
            local_c0 = 0;
          }
          else {
            local_c0 = (**(code **)*puVar6)();
          }
          plVar22 = DAT_04ccc690;
          lVar5 = *plVar23;
          if ((char)DAT_04ccc690[1] == '\0') {
            lVar16 = nn::oe::GetProgramTotalActiveTime();
            *plVar22 = lVar16;
            *(undefined1 *)(plVar22 + 1) = 1;
            lVar14 = *plVar23;
          }
          else {
            lVar16 = *DAT_04ccc690;
            lVar14 = lVar5;
          }
          lVar17 = *(long *)(lVar5 + 8);
          lVar5 = *(long *)(lVar14 + 0x10);
          if ((*(long *)(lVar8 + 0x2a728) != 0) &&
             (plVar22 = *(long **)(*(long *)(lVar8 + 0x2a728) + 0x20), plVar22 != (long *)0x0)) {
            local_b8 = (undefined *)*plVar9;
            local_b0 = *(long *)(lVar8 + 0x2a710);
            local_a8 = 8;
            (**(code **)(*plVar22 + 0x20))(plVar22,&local_b8);
          }
          puVar6 = (undefined8 *)PTR_DAT_04bb4f78;
          *(long *)(*(long *)(lVar8 + 0x2a710) + *plVar9) = (lVar16 - lVar17) / 1000000000 + lVar5;
          FUN_006d8678(&local_b8,"Player (index:%d)",*(undefined4 *)*plVar23);
          (**(code **)(local_b8 + 0x18))(&local_b8);
          if ((*(long *)(lVar8 + 0x2a728) != 0) &&
             (plVar22 = *(long **)(*(long *)(lVar8 + 0x2a728) + 0x20), plVar22 != (long *)0x0)) {
            local_78 = *plVar9;
            local_70 = *(undefined8 *)(lVar8 + 0x2a710);
            uStack_68 = 8;
            (**(code **)(*plVar22 + 0x20))(plVar22,&local_78);
          }
          if ((((local_c0 & 1) != 0) && (*(long *)(lVar8 + 0x2a728) != 0)) &&
             (puVar12 = *(undefined8 **)(*(long *)(lVar8 + 0x2a728) + 0x18),
             puVar12 != (undefined8 *)0x0)) {
            (**(code **)*puVar12)();
          }
        }
      }
LAB_00812af0:
      plVar23 = plVar23 + 1;
    } while (plVar23 != (long *)(*(long *)(param_1 + 0x40) + (long)*(int *)(param_1 + 0x38) * 8));
  }
  return;
}


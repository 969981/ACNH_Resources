
/* WARNING: Removing unreachable block (ram,0x01df5c50) */
/* WARNING: Removing unreachable block (ram,0x01df5cc4) */

undefined8 FUN_01df5870(void)

{
  ulong *puVar1;
  uint *puVar2;
  long *plVar3;
  uint uVar4;
  byte bVar5;
  undefined1 uVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  byte *pbVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  uint local_bc;
  long local_a0;
  long local_98;
  undefined8 uStack_90;
  byte local_84 [4];
  ulong local_80;
  long local_78;
  long lStack_70;
  undefined1 local_68;
  
  local_84[0] = DAT_0548e140;
  if (DAT_04cd19d8 == 0) {
joined_r0x01df5900:
    if (7 < local_84[0]) {
LAB_01df5904:
      if (DAT_0537d558 != (long *)0x0) {
        lVar7 = *DAT_0537d558;
        bVar5 = *(byte *)(lVar7 + 0x473);
        pbVar12 = PTR_DAT_04bb5038;
        if ((long)(char)bVar5 != 0xffffffffffffffff) {
          puVar2 = (uint *)(lVar7 + 0x48) + ((long)(char)bVar5 & 0xffffffffU) * 0x20;
          if (7 < bVar5) {
            puVar2 = (uint *)(lVar7 + 0x48);
          }
          if ((*puVar2 & 8) != 0) {
            pbVar12 = (byte *)(lVar7 + 0x471);
          }
        }
        local_84[0] = *pbVar12;
        if (*pbVar12 < 8) goto LAB_01df5970;
      }
      local_84[0] = DAT_0548e168;
      if (7 < DAT_0548e168) {
        return 0;
      }
    }
  }
  else {
    pbVar12 = PTR_DAT_04bb32e0;
    if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
      pbVar12 = (byte *)(DAT_04cd19d8 + 0x158);
    }
    local_84[0] = *pbVar12;
    if (7 < *pbVar12) {
      if ((*(int *)(DAT_04cd19d8 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
        local_84[0] = *(byte *)(DAT_054f5738 + 0x11a5);
        goto joined_r0x01df5900;
      }
      goto LAB_01df5904;
    }
  }
LAB_01df5970:
  lVar7 = FUN_02583354(*(undefined8 *)PTR_DAT_04bb4f78,local_84,1);
  if (lVar7 == 0) {
    return 0;
  }
  lVar15 = lVar7 + 0x194b0;
  lVar13 = lVar15;
  if (*(long *)(lVar7 + 0x194b8) == 0) {
    lVar13 = *(long *)(DAT_05574040 + 0x20);
  }
  if ((*(long *)(lVar13 + 0x2ae60) == 0) ||
     (puVar8 = *(undefined8 **)(*(long *)(lVar13 + 0x2ae60) + 0x10), puVar8 == (undefined8 *)0x0)) {
    local_bc = 0;
  }
  else {
    local_bc = (**(code **)*puVar8)();
  }
  lVar16 = *(long *)(DAT_04c88f78 + 0x160);
  if (0 < *(int *)(lVar16 + 0x70d4)) {
    lVar19 = 0;
    puVar8 = (undefined8 *)((ulong)&local_80 | 4);
    do {
      lVar20 = lVar16 + lVar19 * 0x40;
      local_80 = local_80 & 0xffffffff00000000;
      local_68 = 2;
      plVar10 = (long *)(lVar20 + 0xcd0);
      *puVar8 = 0;
      puVar8[1] = 0;
      *(undefined4 *)(puVar8 + 2) = 0;
      uVar9 = FUN_0265a200(&local_80,plVar10);
      uVar6 = local_68;
      uVar11 = local_80;
      if ((uVar9 & 1) != 0) {
        local_a0 = local_78;
        local_98 = lStack_70;
        lVar18 = *plVar10;
        lVar20 = *(long *)(lVar20 + 0xcd8);
        if ((*(long *)(lVar13 + 0x2ae60) != 0) &&
           (plVar10 = *(long **)(*(long *)(lVar13 + 0x2ae60) + 0x20), plVar10 != (long *)0x0)) {
          local_80 = *(ulong *)(lVar13 + 0x2ae40);
          local_78 = *(long *)(lVar13 + 0x2ae48);
          lStack_70 = 0x6270;
          (**(code **)(*plVar10 + 0x20))(plVar10,&local_80);
        }
        lVar14 = 0;
        plVar10 = (long *)(*(long *)(lVar13 + 0x2ae48) + *(ulong *)(lVar13 + 0x2ae40));
        do {
          uVar4 = *(uint *)((long)plVar10 + lVar14 + 0x60e0);
          plVar3 = plVar10 + (ulong)uVar4 * 0x1f;
          if (99 < uVar4) {
            plVar3 = plVar10;
          }
          if ((((*plVar3 != 0 && plVar3[1] != 0) && ((int)plVar3[2] != 0 && plVar3[6] != 0)) &&
              (*(int *)((long)plVar3 + 0x54) != 0 && (int)plVar3[7] != 0)) &&
             ((short)plVar3[0xe] != 0 && *plVar3 == lVar18)) {
            *plVar3 = lVar18;
            plVar3[1] = lVar20;
            *(undefined1 *)(plVar3 + 5) = uVar6;
            plVar3[4] = local_98;
            plVar3[2] = uVar11;
            plVar3[3] = local_a0;
            break;
          }
          lVar14 = lVar14 + 4;
        } while (lVar14 != 400);
      }
      lVar19 = lVar19 + 1;
    } while (lVar19 < *(int *)(lVar16 + 0x70d4));
  }
  if (*(long *)(lVar7 + 0x194b8) == 0) {
    lVar15 = *(long *)(DAT_05574040 + 0x20);
  }
  puVar1 = (ulong *)(lVar15 + 0x2ac80);
  lVar7 = *(long *)(lVar15 + 0x2aca0);
  if (lVar7 == 0) {
    uVar17 = *(undefined8 *)(lVar16 + 0x70e0);
    uVar11 = 0;
  }
  else {
    if (*(undefined8 **)(lVar7 + 0x10) == (undefined8 *)0x0) {
      uVar17 = *(undefined8 *)(lVar16 + 0x70e0);
      uVar11 = 0;
      plVar10 = *(long **)(lVar7 + 0x20);
    }
    else {
      uVar11 = (**(code **)**(undefined8 **)(lVar7 + 0x10))();
      uVar11 = uVar11 & 0xffffffff;
      uVar17 = *(undefined8 *)(lVar16 + 0x70e0);
      if (*(long *)(lVar15 + 0x2aca0) == 0) goto LAB_01df5c2c;
      plVar10 = *(long **)(*(long *)(lVar15 + 0x2aca0) + 0x20);
    }
    if (plVar10 != (long *)0x0) {
      local_80 = *puVar1;
      local_78 = *(long *)(lVar15 + 0x2ac88);
      lStack_70 = 0x180;
      (**(code **)(*plVar10 + 0x20))(plVar10,&local_80);
    }
  }
LAB_01df5c2c:
  lVar7 = *(long *)(lVar15 + 0x2ac88) + *puVar1;
  local_80 = CONCAT44(local_80._4_4_,2);
  *(undefined8 *)(lVar7 + 0x30) = uVar17;
  *(long *)(lVar7 + 0x38) = local_a0;
  *(long *)(lVar7 + 0x40) = local_98;
  nn::time::GetStandardSteadyClockCurrentTimePoint((SteadyClockTimePoint *)&local_a0);
  if ((*(long *)(lVar15 + 0x2aca0) != 0) &&
     (plVar10 = *(long **)(*(long *)(lVar15 + 0x2aca0) + 0x20), plVar10 != (long *)0x0)) {
    local_80 = *puVar1;
    local_78 = *(long *)(lVar15 + 0x2ac88);
    lStack_70 = 0x180;
    (**(code **)(*plVar10 + 0x20))(plVar10,&local_80);
  }
  local_80 = CONCAT44(local_80._4_4_,3);
  lVar7 = *(long *)(lVar15 + 0x2ac88) + *puVar1;
  *(undefined8 *)(lVar7 + 0x58) = uStack_90;
  *(long *)(lVar7 + 0x48) = local_a0;
  *(long *)(lVar7 + 0x50) = local_98;
  if ((((uVar11 & 1) != 0) && (*(long *)(lVar15 + 0x2aca0) != 0)) &&
     (puVar8 = *(undefined8 **)(*(long *)(lVar15 + 0x2aca0) + 0x18), puVar8 != (undefined8 *)0x0)) {
    (**(code **)*puVar8)();
  }
  if ((((local_bc & 1) != 0) && (*(long *)(lVar13 + 0x2ae60) != 0)) &&
     (puVar8 = *(undefined8 **)(*(long *)(lVar13 + 0x2ae60) + 0x18), puVar8 != (undefined8 *)0x0)) {
    (**(code **)*puVar8)();
  }
  return 1;
}



/* WARNING: Removing unreachable block (ram,0x01df5814) */

undefined8 FUN_01df5440(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  uint *puVar6;
  undefined4 uVar7;
  byte bVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 *puVar11;
  long lVar12;
  byte *pbVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  byte local_104 [4];
  undefined *local_100;
  long lStack_f8;
  undefined4 local_f0;
  undefined *local_e8;
  long local_e0;
  undefined8 local_d8;
  undefined2 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined1 auStack_98 [28];
  byte local_7c [4];
  undefined4 local_78 [2];
  undefined4 *local_70;
  
  lVar14 = *(long *)PTR_DAT_04bb39b0;
  pbVar13 = PTR_DAT_04bb32e0;
  if (lVar14 == 0) {
LAB_01df54c0:
    if (*pbVar13 < 8) goto LAB_01df5538;
LAB_01df54cc:
    if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_01df5530:
      pbVar13 = PTR_DAT_04bb5038;
      goto LAB_01df5538;
    }
    lVar14 = **(long **)PTR_DAT_04bb27d0;
    bVar8 = *(byte *)(lVar14 + 0x473);
    pbVar13 = PTR_DAT_04bb5038;
    if ((long)(char)bVar8 != 0xffffffffffffffff) {
      puVar6 = (uint *)(lVar14 + 0x48) + ((long)(char)bVar8 & 0xffffffffU) * 0x20;
      if (7 < bVar8) {
        puVar6 = (uint *)(lVar14 + 0x48);
      }
      if ((*puVar6 & 8) != 0) {
        pbVar13 = (byte *)(lVar14 + 0x471);
      }
    }
    local_7c[0] = *pbVar13;
    if (7 < local_7c[0]) goto LAB_01df5530;
  }
  else {
    if (*(int *)(lVar14 + 0x15c) != 0) {
      pbVar13 = (byte *)(lVar14 + 0x158);
    }
    if (7 < *pbVar13) {
      if ((*(int *)(lVar14 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar13 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_01df54c0;
      }
      goto LAB_01df54cc;
    }
LAB_01df5538:
    local_7c[0] = *pbVar13;
    if (7 < local_7c[0]) {
      return 0;
    }
  }
  FUN_02645730(auStack_98,local_7c);
  lVar14 = *(long *)(*(long *)PTR_DAT_04bb21c8 + 0x160);
  if (0 < *(int *)(lVar14 + 0x70d4)) {
    lVar16 = 0;
    puVar1 = PTR_DAT_04bc0d30 + 0x10;
    puVar2 = PTR_DAT_04bb2020 + 0x10;
    puVar3 = PTR_DAT_04bb2de8 + 0x10;
    lVar15 = lVar14;
    do {
      lVar4 = lVar14 + lVar16 * 0x40;
      local_b8 = 0;
      local_a0 = CONCAT31(local_a0._1_3_,2);
      lStack_f8 = lVar4 + 0xce0;
      uStack_b4 = 0;
      uStack_b0 = 0;
      uStack_ac = 0;
      local_a8 = 0;
      uStack_a4 = 0;
      local_c0 = 0;
      uVar9 = (ulong)local_d8 >> 0x20;
      local_d8 = CONCAT44((uint)uVar9 & 0xffff0000,0xb);
      for (lVar12 = 0; lVar5 = lVar15 + lVar12, *(char *)(lVar5 + 0xce0) != '\0';
          lVar12 = lVar12 + 4) {
        if (lVar12 == 0x28) {
          lVar12 = 0xffffffff;
          break;
        }
        if (*(char *)(lVar5 + 0xce1) == '\0') {
          lVar12 = lVar12 + 1;
          break;
        }
        if (*(char *)(lVar5 + 0xce2) == '\0') {
          lVar12 = lVar12 + 2;
          break;
        }
        if (*(char *)(lVar5 + 0xce3) == '\0') {
          lVar12 = lVar12 + 3;
          break;
        }
      }
      local_100 = puVar2;
      local_e8 = puVar1;
      local_e0 = (long)&local_d8 + 4;
      uVar9 = FUN_01df33d0(&local_e8,&local_100,lVar12);
      if ((uVar9 & 1) == 0) {
        return 0;
      }
      (**(code **)(local_e8 + 0x18))(&local_e8);
      lStack_f8 = local_e0;
      local_f0 = (undefined4)local_d8;
      uVar7 = *(undefined4 *)(lVar4 + 0xd0c);
      local_a0 = 2;
      local_b8 = 0;
      uStack_a4 = 0;
      local_78[0] = 10;
      uStack_b4 = 0;
      uStack_b0 = 0;
      uStack_ac = 0;
      local_a8 = 0;
      local_100 = puVar3;
      local_70 = &uStack_b4;
      FUN_02906c90(local_78,&local_100);
      local_100 = (undefined *)CONCAT44(local_100._4_4_,(uint)*(byte *)(lVar4 + 0xd09));
      local_a0 = CONCAT31(local_a0._1_3_,*(byte *)(lVar4 + 0xd09));
      local_b8 = uVar7;
      FUN_026465e0(auStack_98,lVar4 + 0xcd0,&local_b8,lVar4 + 0xcd8);
      lVar16 = lVar16 + 1;
      lVar15 = lVar15 + 0x40;
    } while (lVar16 < *(int *)(lVar14 + 0x70d4));
  }
  FUN_02646774(auStack_98,lVar14 + 0x70e0);
  nn::time::GetStandardSteadyClockCurrentTimePoint((SteadyClockTimePoint *)&local_b8);
  local_104[0] = local_7c[0];
  if (7 < local_7c[0]) {
    local_104[0] = 0xff;
  }
  lVar16 = FUN_02583354(*(undefined8 *)PTR_DAT_04bb4f78,local_104,1);
  lVar14 = lVar16 + 0x194b0;
  if (*(long *)(lVar16 + 0x194b8) == 0) {
    lVar14 = *(long *)(*(long *)PTR_DAT_04bb46b0 + 0x20);
  }
  lVar16 = *(long *)(lVar14 + 0x2aca0);
  if (lVar16 == 0) {
    uVar9 = 0;
  }
  else {
    if (*(undefined8 **)(lVar16 + 0x10) == (undefined8 *)0x0) {
      uVar9 = 0;
      plVar10 = *(long **)(lVar16 + 0x20);
    }
    else {
      uVar9 = (**(code **)**(undefined8 **)(lVar16 + 0x10))();
      uVar9 = uVar9 & 0xffffffff;
      if (*(long *)(lVar14 + 0x2aca0) == 0) goto LAB_01df57f4;
      plVar10 = *(long **)(*(long *)(lVar14 + 0x2aca0) + 0x20);
    }
    if (plVar10 != (long *)0x0) {
      local_e8 = *(undefined **)(lVar14 + 0x2ac80);
      local_e0 = *(long *)(lVar14 + 0x2ac88);
      local_d8 = 0x180;
      (**(code **)(*plVar10 + 0x20))(plVar10,&local_e8);
    }
  }
LAB_01df57f4:
  local_e8 = (undefined *)((ulong)local_e8 & 0xffffffff00000000);
  puVar11 = (undefined8 *)(*(long *)(lVar14 + 0x2ac88) + *(long *)(lVar14 + 0x2ac80));
  *puVar11 = CONCAT44(uStack_b4,local_b8);
  puVar11[1] = CONCAT44(uStack_ac,uStack_b0);
  puVar11[2] = CONCAT44(uStack_a4,local_a8);
  if ((((uVar9 & 1) != 0) && (*(long *)(lVar14 + 0x2aca0) != 0)) &&
     (puVar11 = *(undefined8 **)(*(long *)(lVar14 + 0x2aca0) + 0x18), puVar11 != (undefined8 *)0x0))
  {
    (**(code **)*puVar11)();
  }
  return 1;
}


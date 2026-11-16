
void FUN_02652f70(short *param_1,short *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint *puVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long *plVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  byte *pbVar15;
  byte bVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined1 uStack_3079;
  undefined1 auStack_3078 [680];
  undefined *local_2dd0;
  long local_2dc8;
  undefined1 local_2dc0;
  byte local_2dbf;
  undefined1 auStack_2db2 [2];
  undefined1 auStack_2db0 [8];
  long local_2da8;
  long local_2da0;
  undefined1 auStack_170a [2];
  undefined1 auStack_1708 [8];
  long local_1700;
  long local_16f8;
  undefined *local_68;
  long local_60;
  ulong local_58;
  
  if (*param_1 == *(short *)PTR_DAT_04bb3170) {
    return;
  }
  if (*param_2 == *(short *)PTR_DAT_04bb3170) {
    return;
  }
  FUN_007ef010(auStack_170a,param_1);
  FUN_007e4920(auStack_1708,auStack_170a);
  FUN_007ef010(auStack_2db2,param_2);
  FUN_007e4920(auStack_2db0,auStack_2db2);
  uVar6 = FUN_007e4bb0(auStack_1708);
  uVar7 = FUN_007e4bb0(auStack_2db0);
  uVar8 = FUN_007e4bb0(auStack_1708);
  if (((uVar6 ^ uVar7) & 1) != 0) {
    if (((uVar8 & 1) == 0) && (uVar8 = FUN_007e4bb0(auStack_2db0), (uVar8 & 1) != 0)) {
      if (local_1700 == 0) {
        return;
      }
      if (local_2da0 == 0) {
        return;
      }
      local_60 = local_1700;
      local_58 = CONCAT71(local_58._1_7_,1);
      if (*(long **)(local_1700 + 0x28) == (long *)0x0) {
        uVar5 = 0;
      }
      else {
        puVar9 = (undefined8 *)**(long **)(local_1700 + 0x28);
        uVar5 = 0;
        if (puVar9 != (undefined8 *)0x0) {
          uVar5 = (**(code **)*puVar9)();
        }
      }
      local_58 = CONCAT62(local_58._2_6_,CONCAT11(uVar5,(undefined1)local_58)) & 0xffffffffffff01ff;
      local_2dc8 = local_2da0;
      local_68 = PTR_DAT_04bb4c58 + 0x10;
      local_2dc0 = 0;
      if (*(long *)(local_2da0 + 0x28) == 0) {
        local_2dbf = 0;
      }
      else {
        puVar9 = *(undefined8 **)(*(long *)(local_2da0 + 0x28) + 0x10);
        local_2dbf = 0;
        if (puVar9 != (undefined8 *)0x0) {
          local_2dbf = (**(code **)*puVar9)();
        }
      }
      local_2dbf = local_2dbf & 1;
      local_2dd0 = PTR_DAT_04bb4c50 + 0x10;
      uVar12 = FUN_02125b64(&local_2dd0);
      FUN_027c1430(auStack_3078,*(long *)(local_1700 + 0x10) + *(long *)(local_1700 + 8));
      FUN_00807334(uVar12,auStack_3078);
    }
    else {
      uVar8 = FUN_007e4bb0(auStack_1708);
      if ((uVar8 & 1) == 0) {
        return;
      }
      uVar8 = FUN_007e4bb0(auStack_2db0);
      if ((uVar8 & 1) != 0) {
        return;
      }
      if (local_16f8 == 0) {
        return;
      }
      if (local_2da8 == 0) {
        return;
      }
      local_60 = local_16f8;
      local_58 = CONCAT71(local_58._1_7_,1);
      if (*(long **)(local_16f8 + 0x28) == (long *)0x0) {
        uVar5 = 0;
      }
      else {
        puVar9 = (undefined8 *)**(long **)(local_16f8 + 0x28);
        uVar5 = 0;
        if (puVar9 != (undefined8 *)0x0) {
          uVar5 = (**(code **)*puVar9)();
        }
      }
      local_58 = CONCAT62(local_58._2_6_,CONCAT11(uVar5,(undefined1)local_58)) & 0xffffffffffff01ff;
      local_2dc8 = local_2da8;
      local_68 = PTR_DAT_04bb4c50 + 0x10;
      local_2dc0 = 0;
      if (*(long *)(local_2da8 + 0x28) == 0) {
        local_2dbf = 0;
      }
      else {
        puVar9 = *(undefined8 **)(*(long *)(local_2da8 + 0x28) + 0x10);
        local_2dbf = 0;
        if (puVar9 != (undefined8 *)0x0) {
          local_2dbf = (**(code **)*puVar9)();
        }
      }
      local_2dbf = local_2dbf & 1;
      local_2dd0 = PTR_DAT_04bb4c58 + 0x10;
      uVar12 = FUN_026535fc(&local_2dd0);
      FUN_00807430(uVar12,*(long *)(local_16f8 + 0x10) + *(long *)(local_16f8 + 8));
    }
    FUN_025196e4(&uStack_3079);
    FUN_007e5828(auStack_2db0,&uStack_3079);
    FUN_02640184(&local_2dd0);
    FUN_02640184(&local_68);
    return;
  }
  if ((uVar8 & 1) == 0) {
    if (local_1700 == 0) {
      return;
    }
    if (local_2da8 == 0) {
      return;
    }
    if ((*(long **)(local_1700 + 0x28) == (long *)0x0) ||
       (puVar9 = (undefined8 *)**(long **)(local_1700 + 0x28), puVar9 == (undefined8 *)0x0)) {
      uVar8 = 0;
    }
    else {
      uVar8 = (**(code **)*puVar9)();
      uVar8 = uVar8 & 0xffffffff;
    }
    lVar13 = *(long *)(local_1700 + 0x10) + *(long *)(local_1700 + 8);
    lVar14 = *(long *)(local_2da8 + 0x28);
    if (lVar14 != 0) {
      if (*(undefined8 **)(lVar14 + 0x10) == (undefined8 *)0x0) {
        uVar10 = 0;
LAB_026532d4:
        plVar11 = *(long **)(lVar14 + 0x20);
        if (plVar11 != (long *)0x0) {
          local_68 = *(undefined **)(local_2da8 + 8);
          local_60 = *(undefined8 *)(local_2da8 + 0x10);
          local_58 = 0x2a8;
          (**(code **)(*plVar11 + 0x20))(plVar11,&local_68);
        }
      }
      else {
        uVar10 = (**(code **)**(undefined8 **)(lVar14 + 0x10))();
        lVar14 = *(long *)(local_2da8 + 0x28);
        uVar10 = uVar10 & 0xffffffff;
        if (lVar14 != 0) goto LAB_026532d4;
      }
      FUN_027c1640(*(long *)(local_2da8 + 0x10) + *(long *)(local_2da8 + 8),lVar13);
      goto joined_r0x02653310;
    }
    FUN_027c1640(*(long *)(local_2da8 + 0x10) + *(long *)(local_2da8 + 8),lVar13);
  }
  else {
    if (local_16f8 == 0) {
      return;
    }
    if (local_2da0 == 0) {
      return;
    }
    if ((*(long **)(local_16f8 + 0x28) == (long *)0x0) ||
       (puVar9 = (undefined8 *)**(long **)(local_16f8 + 0x28), puVar9 == (undefined8 *)0x0)) {
      uVar8 = 0;
    }
    else {
      uVar8 = (**(code **)*puVar9)();
      uVar8 = uVar8 & 0xffffffff;
    }
    puVar1 = (undefined4 *)(*(long *)(local_16f8 + 0x10) + *(long *)(local_16f8 + 8));
    lVar13 = *(long *)(local_2da0 + 0x28);
    if (lVar13 == 0) {
      uVar10 = 0;
    }
    else {
      if (*(undefined8 **)(lVar13 + 0x10) == (undefined8 *)0x0) {
        uVar10 = 0;
      }
      else {
        uVar10 = (**(code **)**(undefined8 **)(lVar13 + 0x10))();
        lVar13 = *(long *)(local_2da0 + 0x28);
        uVar10 = uVar10 & 0xffffffff;
        if (lVar13 == 0) goto LAB_026531f4;
      }
      plVar11 = *(long **)(lVar13 + 0x20);
      if (plVar11 != (long *)0x0) {
        local_68 = *(undefined **)(local_2da0 + 8);
        local_60 = *(undefined8 *)(local_2da0 + 0x10);
        local_58 = 0x8a8;
        (**(code **)(*plVar11 + 0x20))(plVar11,&local_68);
      }
    }
LAB_026531f4:
    puVar2 = (undefined4 *)(*(long *)(local_2da0 + 0x10) + *(long *)(local_2da0 + 8));
    *puVar2 = *puVar1;
    puVar2[1] = puVar1[1];
    *(undefined8 *)(puVar2 + 2) = *(undefined8 *)(puVar1 + 2);
    *(undefined8 *)(puVar2 + 4) = *(undefined8 *)(puVar1 + 4);
    uVar12 = *(undefined8 *)(puVar1 + 6);
    uVar17 = *(undefined8 *)(puVar1 + 8);
    uVar18 = *(undefined8 *)(puVar1 + 0xc);
    *(undefined8 *)(puVar2 + 10) = *(undefined8 *)(puVar1 + 10);
    *(undefined8 *)(puVar2 + 0xc) = uVar18;
    *(undefined8 *)(puVar2 + 6) = uVar12;
    *(undefined8 *)(puVar2 + 8) = uVar17;
    uVar18 = *(undefined8 *)(puVar1 + 0x12);
    uVar12 = *(undefined8 *)(puVar1 + 0xe);
    uVar17 = *(undefined8 *)(puVar1 + 0x10);
    *(undefined1 *)(puVar2 + 0x14) = *(undefined1 *)(puVar1 + 0x14);
    *(undefined8 *)(puVar2 + 0x10) = uVar17;
    *(undefined8 *)(puVar2 + 0x12) = uVar18;
    *(undefined8 *)(puVar2 + 0xe) = uVar12;
    uVar12 = *(undefined8 *)(puVar1 + 0x15);
    uVar17 = *(undefined8 *)(puVar1 + 0x17);
    *(undefined8 *)(puVar2 + 0x19) = *(undefined8 *)(puVar1 + 0x19);
    *(undefined8 *)(puVar2 + 0x17) = uVar17;
    *(undefined8 *)(puVar2 + 0x15) = uVar12;
    uVar6 = puVar1[0x1b];
    if (1 < uVar6) {
      uVar6 = 0;
    }
    puVar2[0x1b] = uVar6;
    *(undefined1 *)(puVar2 + 0x1c) = *(undefined1 *)(puVar1 + 0x1c);
    *(undefined1 *)((long)puVar2 + 0x71) = *(undefined1 *)((long)puVar1 + 0x71);
    *(undefined2 *)((long)puVar2 + 0x72) = *(undefined2 *)((long)puVar1 + 0x72);
    uVar12 = *(undefined8 *)(puVar1 + 0x20);
    *(undefined8 *)(puVar2 + 0x1e) = *(undefined8 *)(puVar1 + 0x1e);
    *(undefined8 *)(puVar2 + 0x20) = uVar12;
    uVar18 = *(undefined8 *)(puVar1 + 0x26);
    uVar12 = *(undefined8 *)(puVar1 + 0x22);
    uVar17 = *(undefined8 *)(puVar1 + 0x24);
    *(undefined8 *)((long)puVar2 + 0x9d) = *(undefined8 *)((long)puVar1 + 0x9d);
    *(undefined8 *)(puVar2 + 0x24) = uVar17;
    *(undefined8 *)(puVar2 + 0x26) = uVar18;
    *(undefined8 *)(puVar2 + 0x22) = uVar12;
    memcpy((void *)((long)puVar2 + 0xa5),(void *)((long)puVar1 + 0xa5),0x800);
    uVar5 = *(undefined1 *)((long)puVar1 + 0x8a5);
    *(undefined2 *)((long)puVar2 + 0x8a6) = 0;
    *(undefined1 *)((long)puVar2 + 0x8a5) = uVar5;
    FUN_027c1b80(puVar2);
    local_2da8 = local_2da0;
    local_1700 = local_16f8;
joined_r0x02653310:
    if ((uVar10 & 1) != 0) {
      if (*(long *)(local_2da8 + 0x28) != 0) {
        puVar9 = *(undefined8 **)(*(long *)(local_2da8 + 0x28) + 0x18);
        if (puVar9 != (undefined8 *)0x0) {
          (**(code **)*puVar9)();
        }
      }
    }
  }
  if ((((uVar8 & 1) != 0) && (*(long *)(local_1700 + 0x28) != 0)) &&
     (puVar9 = *(undefined8 **)(*(long *)(local_1700 + 0x28) + 8), puVar9 != (undefined8 *)0x0)) {
    (**(code **)*puVar9)();
  }
  if (DAT_04cd19d8 == 0) {
    pbVar15 = &DAT_0548e140;
LAB_026533b0:
    if (7 < *pbVar15) {
LAB_026533bc:
      if (DAT_0537d558 != (long *)0x0) {
        lVar13 = *DAT_0537d558;
        bVar16 = *(byte *)(lVar13 + 0x473);
        pbVar15 = PTR_DAT_04bb5038;
        if ((long)(char)bVar16 != 0xffffffffffffffff) {
          puVar3 = (uint *)(lVar13 + 0x48) + ((long)(char)bVar16 & 0xffffffffU) * 0x20;
          if (7 < bVar16) {
            puVar3 = (uint *)(lVar13 + 0x48);
          }
          if ((*puVar3 & 8) != 0) {
            pbVar15 = (byte *)(lVar13 + 0x471);
          }
        }
        bVar16 = *pbVar15;
        bVar4 = 7 < bVar16;
        if (bVar4) {
          bVar16 = 0xff;
        }
        local_2dd0 = (undefined *)CONCAT71(local_2dd0._1_7_,bVar16);
        if (!bVar4) goto LAB_0265343c;
      }
      pbVar15 = &DAT_0548e168;
    }
  }
  else {
    pbVar15 = PTR_DAT_04bb32e0;
    if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
      pbVar15 = (byte *)(DAT_04cd19d8 + 0x158);
    }
    if (7 < *pbVar15) {
      if ((*(int *)(DAT_04cd19d8 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
        pbVar15 = (byte *)(DAT_054f5738 + 0x11a5);
        goto LAB_026533b0;
      }
      goto LAB_026533bc;
    }
  }
  bVar16 = *pbVar15;
  if (7 < bVar16) {
    bVar16 = 0xff;
  }
  local_2dd0 = (undefined *)CONCAT71(local_2dd0._1_7_,bVar16);
LAB_0265343c:
  FUN_02582a24(&local_2dd0);
  uVar6 = FUN_02582d8c(&local_2dd0,1);
  if (((uVar6 < 8) &&
      (lVar13 = *(long *)PTR_DAT_04bb4fb8,
      *(char *)(lVar13 + (ulong)uVar6 * 0x13f0 + 0x13d4) != '\0')) &&
     (*(int *)(lVar13 + (ulong)uVar6 * 0x13f0 + 0x13d0) == 0)) {
    uVar6 = (uint)*(byte *)(lVar13 + (ulong)uVar6 * 0x13f0 + 0x13d5);
  }
  else {
    uVar6 = 0xffffffff;
  }
  local_68 = (undefined *)CONCAT44(local_68._4_4_,uVar6);
  FUN_007e5260(auStack_2db0,&local_68);
  return;
}


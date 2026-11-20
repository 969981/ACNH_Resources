
bool FUN_03f06e60(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long *param_5)

{
  ushort *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  size_t __size;
  uint *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint uVar9;
  short sVar10;
  char cVar11;
  uint uVar12;
  short sVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  bool bVar18;
  bool bVar19;
  long lVar20;
  long *plVar21;
  undefined4 *puVar22;
  undefined8 *puVar23;
  long lVar24;
  long *plVar25;
  ulong *puVar26;
  ulong *puVar27;
  undefined8 uVar28;
  int iVar29;
  undefined8 *puVar30;
  undefined4 *puVar31;
  ulong uVar32;
  char *pcVar33;
  ulong uVar34;
  ulong uVar35;
  ulong uVar36;
  ulong uVar37;
  ulong uVar38;
  ulong uVar39;
  long lVar40;
  ulong uVar41;
  ulong uVar42;
  ulong uVar43;
  uint uVar44;
  undefined8 uVar45;
  long local_88;
  undefined *local_80;
  char *local_78;
  undefined *local_70;
  ulong local_68;
  
  puVar2 = PTR_DAT_04bb2f80;
  uVar44 = **(uint **)(param_1 + 0xd0);
  uVar41 = (ulong)uVar44;
  if ((int)uVar44 < 1) {
    return false;
  }
  lVar40 = *(long *)PTR_DAT_04bb2698;
  if (lVar40 == 0) {
    puVar22 = malloc(uVar41 << 4);
joined_r0x03f06f20:
    if (puVar22 != (undefined4 *)0x0) {
      uVar43 = uVar41 & 3;
      puVar31 = puVar22;
      if ((uVar44 & 3) != 0) {
        do {
          *puVar31 = 0;
          uVar43 = uVar43 - 1;
          *(undefined8 *)(puVar31 + 2) = 0;
          puVar31 = puVar31 + 4;
        } while (uVar43 != 0);
      }
      if (2 < (uVar41 - 1 & 0xfffffffffffffff)) {
        do {
          *puVar31 = 0;
          *(undefined8 *)(puVar31 + 2) = 0;
          puVar31[4] = 0;
          *(undefined8 *)(puVar31 + 6) = 0;
          puVar31[8] = 0;
          *(undefined8 *)(puVar31 + 10) = 0;
          puVar31[0xc] = 0;
          *(undefined8 *)(puVar31 + 0xe) = 0;
          puVar31 = puVar31 + 0x10;
        } while (puVar31 != puVar22 + uVar41 * 4);
      }
      *(uint *)(param_3 + 8) = uVar44;
      *(undefined4 **)(param_3 + 0x10) = puVar22;
    }
    lVar40 = *(long *)PTR_DAT_04bb2698;
    if (lVar40 == 0) goto LAB_03f0701c;
    if (param_5 == (long *)0x0) {
LAB_03f06fd0:
      lVar20 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar21 = (long *)(lVar40 + 8);
      if (lVar20 != 0) {
        plVar21 = (long *)(lVar20 + 0xa8);
      }
      plVar21 = (long *)*plVar21;
      if (plVar21 == (long *)0x0) goto LAB_03f070c4;
    }
    else {
      plVar21 = param_5;
    }
    puVar23 = (undefined8 *)(**(code **)(*plVar21 + 0x30))(plVar21,uVar41 * 0x38,8);
  }
  else {
    plVar21 = param_5;
    if (param_5 != (long *)0x0) {
LAB_03f06ef4:
      puVar22 = (undefined4 *)(**(code **)(*plVar21 + 0x30))(plVar21,uVar41 << 4,8);
      goto joined_r0x03f06f20;
    }
    lVar20 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar21 = (long *)(lVar40 + 8);
    if (lVar20 != 0) {
      plVar21 = (long *)(lVar20 + 0xa8);
    }
    plVar21 = (long *)*plVar21;
    if (plVar21 != (long *)0x0) goto LAB_03f06ef4;
    lVar40 = *(long *)PTR_DAT_04bb2698;
    if (lVar40 != 0) goto LAB_03f06fd0;
LAB_03f0701c:
    puVar23 = malloc(uVar41 * 0x38);
  }
  if (puVar23 != (undefined8 *)0x0) {
    uVar43 = uVar41 * 0x38 - 0x38;
    puVar30 = puVar23;
    if ((uVar43 / 0x38 & 1) == 0) {
      uVar28 = *(undefined8 *)(puVar2 + 0x10);
      uVar45 = *(undefined8 *)(puVar2 + 0x18);
      puVar23[6] = 0;
      puVar23[2] = uVar28;
      puVar23[3] = uVar45;
      uVar28 = *(undefined8 *)(puVar2 + 0x28);
      puVar23[4] = *(undefined8 *)(puVar2 + 0x20);
      puVar23[5] = uVar28;
      uVar28 = *(undefined8 *)(puVar2 + 8);
      *puVar23 = *(undefined8 *)puVar2;
      puVar23[1] = uVar28;
      puVar30 = puVar23 + 7;
    }
    if (0x37 < uVar43) {
      uVar28 = *(undefined8 *)(puVar2 + 0x10);
      uVar6 = *(undefined8 *)(puVar2 + 0x18);
      uVar45 = *(undefined8 *)(puVar2 + 0x20);
      uVar7 = *(undefined8 *)(puVar2 + 0x28);
      uVar5 = *(undefined8 *)puVar2;
      uVar8 = *(undefined8 *)(puVar2 + 8);
      do {
        puVar30[2] = uVar28;
        puVar30[3] = uVar6;
        puVar30[4] = uVar45;
        puVar30[5] = uVar7;
        *puVar30 = uVar5;
        puVar30[1] = uVar8;
        puVar30[6] = 0;
        puVar30[7] = uVar5;
        puVar30[8] = uVar8;
        puVar30[9] = uVar28;
        puVar30[10] = uVar6;
        puVar30[0xb] = uVar45;
        puVar30[0xc] = uVar7;
        puVar30[0xd] = 0;
        puVar30 = puVar30 + 0xe;
      } while (puVar30 != puVar23 + uVar41 * 7);
    }
    *(uint *)(param_3 + 0x18) = uVar44;
    *(undefined8 **)(param_3 + 0x20) = puVar23;
  }
LAB_03f070c4:
  uVar43 = 0;
  bVar19 = false;
  puVar2 = PTR_DAT_04bb2020 + 0x10;
  puVar3 = PTR_DAT_04bd1760 + 0x10;
LAB_03f070fc:
  uVar35 = uVar43 & 0xffffffff;
  uVar34 = uVar35;
  if (**(uint **)(param_1 + 0xd0) <= uVar43) {
    uVar34 = 0;
  }
  plVar21 = (long *)(*(long *)(*(uint **)(param_1 + 0xd0) + 2) + uVar34 * 0x20);
  uVar44 = *(uint *)(*plVar21 + 0x48);
  uVar34 = (ulong)uVar44;
  if ((int)uVar44 < 1) {
    return bVar19;
  }
  lVar40 = *(long *)(param_3 + 0x10);
  uVar38 = uVar35;
  if (*(uint *)(param_3 + 8) <= uVar43) {
    uVar38 = 0;
  }
  lVar20 = *(long *)PTR_DAT_04bb2698;
  if (lVar20 == 0) {
    puVar22 = malloc(uVar34 << 4);
  }
  else {
    plVar25 = param_5;
    if (param_5 == (long *)0x0) {
      lVar24 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar25 = (long *)(lVar20 + 8);
      if (lVar24 != 0) {
        plVar25 = (long *)(lVar24 + 0xa8);
      }
      plVar25 = (long *)*plVar25;
      if (plVar25 == (long *)0x0) goto LAB_03f07258;
    }
    puVar22 = (undefined4 *)(**(code **)(*plVar25 + 0x30))(plVar25,uVar34 << 4,8);
  }
  if (puVar22 != (undefined4 *)0x0) {
    uVar42 = uVar34 & 7;
    puVar31 = puVar22;
    if ((uVar44 & 7) != 0) {
      do {
        *puVar31 = 0;
        uVar42 = uVar42 - 1;
        *(undefined8 *)(puVar31 + 2) = 0;
        puVar31 = puVar31 + 4;
      } while (uVar42 != 0);
    }
    if (6 < (uVar34 - 1 & 0xfffffffffffffff)) {
      do {
        *puVar31 = 0;
        *(undefined8 *)(puVar31 + 2) = 0;
        puVar31[4] = 0;
        *(undefined8 *)(puVar31 + 6) = 0;
        puVar31[8] = 0;
        *(undefined8 *)(puVar31 + 10) = 0;
        puVar31[0xc] = 0;
        *(undefined8 *)(puVar31 + 0xe) = 0;
        puVar31[0x10] = 0;
        *(undefined8 *)(puVar31 + 0x12) = 0;
        puVar31[0x14] = 0;
        *(undefined8 *)(puVar31 + 0x16) = 0;
        puVar31[0x18] = 0;
        *(undefined8 *)(puVar31 + 0x1a) = 0;
        puVar31[0x1c] = 0;
        *(undefined8 *)(puVar31 + 0x1e) = 0;
        puVar31 = puVar31 + 0x20;
      } while (puVar31 != puVar22 + uVar34 * 4);
    }
    puVar4 = (uint *)(lVar40 + uVar38 * 0x10);
    *puVar4 = uVar44;
    *(undefined4 **)(puVar4 + 2) = puVar22;
  }
LAB_03f07258:
  uVar38 = 0;
LAB_03f07274:
  uVar44 = *(uint *)(*(long *)(*(long *)(*plVar21 + 0x40) + uVar38 * 8) + 0x24);
  uVar42 = (ulong)uVar44;
  if ((int)uVar44 < 1) {
    return bVar19;
  }
  uVar39 = uVar35;
  if (*(uint *)(param_3 + 8) <= uVar43) {
    uVar39 = 0;
  }
  uVar36 = uVar38 & 0xffffffff;
  puVar4 = (uint *)(*(long *)(param_3 + 0x10) + uVar39 * 0x10);
  lVar40 = *(long *)(puVar4 + 2);
  __size = uVar42 * 0xa8 + 8;
  uVar39 = uVar36;
  if (*puVar4 <= uVar38) {
    uVar39 = 0;
  }
  lVar20 = *(long *)PTR_DAT_04bb2698;
  if (lVar20 == 0) {
    puVar26 = malloc(__size);
  }
  else {
    plVar25 = param_5;
    if (param_5 == (long *)0x0) {
      lVar24 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar25 = (long *)(lVar20 + 8);
      if (lVar24 != 0) {
        plVar25 = (long *)(lVar24 + 0xa8);
      }
      plVar25 = (long *)*plVar25;
      if (plVar25 == (long *)0x0) goto LAB_03f073ec;
    }
    puVar26 = (ulong *)(**(code **)(*plVar25 + 0x30))(plVar25,__size,8);
  }
  if (puVar26 != (ulong *)0x0) {
    puVar27 = puVar26 + 1;
    *puVar26 = uVar42;
    puVar17 = PTR_DAT_04bd0da0;
    puVar16 = PTR_DAT_04bb2f80;
    puVar15 = PTR_DAT_04bb2f78;
    puVar14 = PTR_PTR_04bb2238;
    puVar4 = (uint *)(lVar40 + uVar39 * 0x10);
    puVar26 = puVar27;
    do {
      uVar39 = *(ulong *)(puVar16 + 0x10);
      uVar37 = *(ulong *)(puVar16 + 0x18);
      *(undefined2 *)(puVar26 + 0xe) = 0xffff;
      puVar26[9] = (ulong)puVar2;
      *(undefined2 *)((long)puVar26 + 0x72) = 0xffff;
      puVar26[2] = uVar39;
      puVar26[3] = uVar37;
      uVar39 = *(ulong *)(puVar16 + 0x28);
      puVar26[4] = *(ulong *)(puVar16 + 0x20);
      puVar26[5] = uVar39;
      uVar39 = *(ulong *)(puVar16 + 8);
      *puVar26 = *(ulong *)puVar16;
      puVar26[1] = uVar39;
      puVar26[6] = *(ulong *)puVar15;
      *(undefined4 *)(puVar26 + 7) = *(undefined4 *)(puVar15 + 8);
      uVar39 = *(ulong *)(puVar14 + 8);
      puVar26[0xc] = 0;
      puVar26[0xd] = 0;
      puVar26[8] = (ulong)puVar3;
      puVar26[0xf] = 0xffffffffffffffff;
      puVar26[0x10] = 0xffffffff;
      puVar26[0x13] = 0;
      puVar26[0x14] = 0;
      puVar26[10] = uVar39;
      puVar26[0xb] = 0;
      uVar39 = *(ulong *)(puVar17 + 8);
      puVar26[0x11] = *(ulong *)puVar17;
      puVar26[0x12] = uVar39;
      puVar26 = puVar26 + 0x15;
    } while (puVar26 != puVar27 + (ulong)uVar44 * 0x15);
    *puVar4 = uVar44;
    *(ulong **)(puVar4 + 2) = puVar27;
  }
LAB_03f073ec:
  local_68 = *(ulong *)(*(long *)(*(long *)(*plVar21 + 0x40) + uVar38 * 8) + 0x18) &
             0xfffffffffffffffe;
  local_70 = PTR_DAT_04bb2020 + 0x10;
  uVar45 = *(undefined8 *)(*(long *)(param_1 + 0xd0) + 0x10);
  uVar28 = FUN_00427270(PTR_DAT_04bdea40);
  lVar40 = FUN_004d64e0(uVar45,uVar28,0);
  if (lVar40 == 0) {
    return bVar19;
  }
  (**(code **)(local_70 + 0x18))(&local_70);
  lVar40 = FUN_0066b490(lVar40,local_68);
  if (lVar40 == 0) {
    return bVar19;
  }
  uVar39 = 0;
LAB_03f07480:
  lVar20 = 0;
  local_68 = *(ulong *)(*(long *)(lVar40 + 0x30) + uVar39 * 0x10) & 0xfffffffffffffffe;
  local_80 = PTR_DAT_04bb2020 + 0x10;
  local_78 = "NoMove";
  do {
    local_70 = local_80;
    if (*(char *)(local_68 + lVar20) == '\0') {
LAB_03f074e4:
      iVar29 = (int)lVar20;
joined_r0x03f074e8:
      if (5 < iVar29) {
        uVar37 = 0;
        goto LAB_03f0751c;
      }
      break;
    }
    if (*(char *)(local_68 + lVar20 + 1) == '\0') {
      lVar20 = lVar20 + 1;
      goto LAB_03f074e4;
    }
    if (*(char *)(local_68 + lVar20 + 2) == '\0') {
      iVar29 = (int)lVar20 + 2;
      goto joined_r0x03f074e8;
    }
    lVar20 = lVar20 + 3;
  } while (lVar20 != 0x80001);
  goto LAB_03f075c0;
  while (uVar37 = uVar37 + 1, iVar29 - 5 != uVar37) {
LAB_03f0751c:
    pcVar33 = (char *)(local_68 + uVar37);
    (**(code **)(local_80 + 0x18))(&local_80);
    if ((pcVar33 == local_78) ||
       ((*pcVar33 == *local_78 &&
        ((*pcVar33 == '\0' ||
         ((pcVar33[1] == local_78[1] &&
          ((pcVar33[1] == '\0' ||
           ((pcVar33[2] == local_78[2] &&
            ((pcVar33[2] == '\0' ||
             ((pcVar33[3] == local_78[3] &&
              ((pcVar33[3] == '\0' ||
               ((pcVar33[4] == local_78[4] && ((pcVar33[4] == '\0' || (pcVar33[5] == local_78[5]))))
               )))))))))))))))))) {
      if ((int)uVar37 != -1) goto LAB_03f07474;
      break;
    }
  }
LAB_03f075c0:
  if ((param_3 != 0) && ((long)uVar43 < (long)(int)*(uint *)(param_1 + 0x20))) {
    uVar37 = uVar35;
    if (*(uint *)(param_1 + 0x20) <= uVar43) {
      uVar37 = 0;
    }
    lVar20 = *(long *)(param_1 + 0x28) + uVar37 * 0x1a0;
    (**(code **)(local_70 + 0x18))(&local_70);
    (**(code **)(local_70 + 0x18))(&local_70);
    uVar37 = local_68;
    plVar25 = (long *)(lVar20 + 0x98);
    (**(code **)(*plVar25 + 0x18))(plVar25);
    uVar32 = *(ulong *)(lVar20 + 0xa0);
    if (uVar37 == uVar32) {
LAB_03f076a4:
      uVar37 = uVar35;
      if (*(uint *)(param_3 + 0x18) <= uVar43) {
        uVar37 = 0;
      }
      *(int *)(*(long *)(param_3 + 0x20) + uVar37 * 0x38 + 0x30) = (int)uVar38;
      uVar37 = uVar35;
      if (*(uint *)(param_3 + 0x18) <= uVar43) {
        uVar37 = 0;
      }
      *(int *)(*(long *)(param_3 + 0x20) + uVar37 * 0x38 + 0x34) = (int)uVar39;
    }
    else {
      uVar37 = 0;
      bVar18 = true;
      do {
        lVar20 = local_68 + 2 + uVar37;
        cVar11 = *(char *)(lVar20 + -2);
        if (cVar11 != *(char *)(uVar32 + uVar37)) break;
        if (cVar11 == '\0') {
          if (bVar18) goto LAB_03f076a4;
          break;
        }
        cVar11 = *(char *)(lVar20 + -1);
        if (cVar11 != *(char *)(uVar32 + uVar37 + 1)) break;
        if (cVar11 == '\0') goto LAB_03f076a4;
        cVar11 = *(char *)(local_68 + 2 + uVar37);
        if (cVar11 != *(char *)(uVar32 + uVar37 + 2)) break;
        if (cVar11 == '\0') goto LAB_03f076a4;
        bVar18 = uVar37 < 0x7fffe;
        uVar37 = uVar37 + 3;
      } while (uVar37 != 0x80001);
    }
  }
  local_80 = PTR_DAT_04bb2020 + 0x10;
  local_78 = ":";
  (**(code **)(local_70 + 0x18))(&local_70);
  lVar20 = 0;
  do {
    if (*(char *)(local_68 + lVar20) == '\0') goto LAB_03f07754;
    if (*(char *)(local_68 + lVar20 + 1) == '\0') {
      lVar20 = lVar20 + 1;
      goto LAB_03f07754;
    }
    if (*(char *)(local_68 + lVar20 + 2) == '\0') {
      lVar20 = lVar20 + 2;
      goto LAB_03f07754;
    }
    lVar20 = lVar20 + 3;
  } while (lVar20 != 0x80001);
  lVar20 = 0;
LAB_03f07754:
  uVar44 = (uint)lVar20;
  (**(code **)(local_80 + 0x18))(&local_80);
  lVar20 = 0;
  do {
    if (local_78[lVar20] == '\0') {
LAB_03f077b4:
      uVar44 = uVar44 - (int)lVar20;
      uVar37 = (ulong)uVar44;
      if ((int)uVar44 < 0) goto LAB_03f07834;
      if ((int)lVar20 < 1) goto LAB_03f0784c;
      goto LAB_03f077cc;
    }
    if (local_78[lVar20 + 1] == '\0') {
      lVar20 = lVar20 + 1;
      goto LAB_03f077b4;
    }
    if (local_78[lVar20 + 2] == '\0') {
      lVar20 = lVar20 + 2;
      goto LAB_03f077b4;
    }
    lVar20 = lVar20 + 3;
  } while (lVar20 != 0x80001);
  if ((int)uVar44 < 0) {
LAB_03f07834:
    uVar44 = 0xffffffff;
  }
  else {
LAB_03f0784c:
    (**(code **)(local_80 + 0x18))(&local_80);
  }
LAB_03f0785c:
  uVar32 = uVar39 & 0xffffffff;
  uVar37 = uVar35;
  if (*(uint *)(param_3 + 8) <= uVar43) {
    uVar37 = 0;
  }
  puVar4 = (uint *)(*(long *)(param_3 + 0x10) + uVar37 * 0x10);
  uVar37 = uVar36;
  if (*puVar4 <= uVar38) {
    uVar37 = 0;
  }
  puVar4 = (uint *)(*(long *)(puVar4 + 2) + uVar37 * 0x10);
  lVar20 = *(long *)(puVar4 + 2);
  uVar37 = uVar32;
  if (*puVar4 <= uVar39) {
    uVar37 = 0;
  }
  (**(code **)(local_70 + 0x18))(&local_70);
  local_80 = PTR_DAT_04bb2020 + 0x10;
  local_78 = (char *)(local_68 + (long)(int)uVar44 + 1);
  FUN_039aa424(lVar20 + uVar37 * 0xa8 + 0x40,param_4,&local_80);
  uVar37 = uVar35;
  if (*(uint *)(param_3 + 8) <= uVar43) {
    uVar37 = 0;
  }
  puVar4 = (uint *)(*(long *)(param_3 + 0x10) + uVar37 * 0x10);
  uVar37 = uVar36;
  if (*puVar4 <= uVar38) {
    uVar37 = 0;
  }
  puVar4 = (uint *)(*(long *)(puVar4 + 2) + uVar37 * 0x10);
  uVar37 = uVar32;
  if (*puVar4 <= uVar39) {
    uVar37 = 0;
  }
  lVar20 = *(long *)(puVar4 + 2) + uVar37 * 0xa8;
  *(uint *)(lVar20 + 0x84) = *(uint *)(lVar20 + 0x84) & 0xfffffffe;
  uVar45 = *(undefined8 *)(*(long *)(param_1 + 0xd0) + 0x10);
  uVar28 = FUN_00427270(PTR_DAT_04bdade0);
  lVar20 = FUN_004d64e0(uVar45,uVar28,0);
  if (lVar20 == 0) goto LAB_03f07474;
  (**(code **)(local_70 + 0x18))(&local_70);
  lVar20 = FUN_00687f30(lVar20,local_68);
  if (lVar20 == 0) goto LAB_03f07474;
  FUN_00687470(&local_80,lVar20,"meshBone");
  FUN_00687470(&local_88,lVar20,"noClothSimulation");
  if (local_88 != 0) {
    if (**(char **)(local_88 + 0x18) != '\0') {
      uVar37 = uVar35;
      if (*(uint *)(param_3 + 8) <= uVar43) {
        uVar37 = 0;
      }
      puVar4 = (uint *)(*(long *)(param_3 + 0x10) + uVar37 * 0x10);
      uVar37 = uVar36;
      if (*puVar4 <= uVar38) {
        uVar37 = 0;
      }
      puVar4 = (uint *)(*(long *)(puVar4 + 2) + uVar37 * 0x10);
      if (*puVar4 <= uVar39) {
        uVar32 = 0;
      }
      lVar20 = *(long *)(puVar4 + 2) + uVar32 * 0xa8;
      *(uint *)(lVar20 + 0x84) = *(uint *)(lVar20 + 0x84) & 0xfffffffe;
      if (local_88 == 0) goto LAB_03f07a3c;
    }
    FUN_004435c0();
  }
LAB_03f07a3c:
  if (local_80 != (undefined *)0x0) {
    FUN_004435c0();
  }
LAB_03f07474:
  uVar39 = uVar39 + 1;
  if (uVar39 == uVar42) goto LAB_03f07260;
  goto LAB_03f07480;
LAB_03f077cc:
  uVar32 = local_68;
  pcVar33 = (char *)(local_68 + uVar37);
  (**(code **)(local_80 + 0x18))(&local_80);
  uVar44 = (uint)uVar37;
  if (pcVar33 == local_78) goto LAB_03f0785c;
  pcVar33 = local_78;
  lVar24 = lVar20;
  while( true ) {
    lVar24 = lVar24 + -1;
    if (*(char *)(uVar32 + uVar37) != *pcVar33) break;
    if (*(char *)(uVar32 + uVar37) == '\0') goto LAB_03f0785c;
    uVar32 = uVar32 + 1;
    pcVar33 = pcVar33 + 1;
    if (lVar24 == 0) goto LAB_03f0785c;
  }
  uVar37 = uVar37 - 1;
  bVar18 = (int)uVar44 < 1;
  uVar44 = 0xffffffff;
  if (bVar18) goto LAB_03f0785c;
  goto LAB_03f077cc;
LAB_03f07260:
  uVar38 = uVar38 + 1;
  if (uVar38 == uVar34) goto LAB_03f07a4c;
  goto LAB_03f07274;
LAB_03f07a4c:
  uVar44 = *(uint *)(*plVar21 + 0x58);
  if (0 < (int)uVar44) {
    uVar34 = 0;
    lVar40 = 0;
    do {
      lVar20 = *(long *)(*(long *)(*plVar21 + 0x50) + uVar34 * 8);
      iVar29 = *(int *)(lVar20 + 0x24);
      if (iVar29 == 0x10) goto LAB_03f07ad4;
      uVar34 = uVar34 + 1;
      if (iVar29 != 0x11) {
        lVar20 = lVar40;
      }
      lVar40 = lVar20;
    } while (iVar29 != 0x11 && uVar34 < uVar44);
    if (lVar40 != 0) {
      if (*(int *)(lVar40 + 0x24) == 0x11) {
        uVar44 = *(uint *)(lVar40 + 0x58);
        if (0 < (int)uVar44) {
          lVar20 = 0;
          do {
            uVar34 = uVar35;
            if (*(uint *)(param_3 + 8) <= uVar43) {
              uVar34 = 0;
            }
            puVar4 = (uint *)(*(long *)(param_3 + 0x10) + uVar34 * 0x10);
            uVar9 = *(uint *)(lVar40 + 0x4c);
            if (*puVar4 <= uVar9) {
              uVar9 = 0;
            }
            puVar4 = (uint *)(*(long *)(puVar4 + 2) + (long)(int)uVar9 * 0x10);
            puVar1 = (ushort *)(*(long *)(lVar40 + 0x50) + lVar20);
            lVar20 = lVar20 + 4;
            uVar9 = (uint)(*puVar1 >> 6);
            if (*puVar4 <= uVar9) {
              uVar9 = 0;
            }
            lVar24 = *(long *)(puVar4 + 2) + (ulong)uVar9 * 0xa8;
            *(uint *)(lVar24 + 0x84) = *(uint *)(lVar24 + 0x84) | 1;
          } while ((ulong)uVar44 * 4 != lVar20);
        }
      }
      else {
        lVar20 = lVar40;
        if (*(int *)(lVar40 + 0x24) == 0x10) {
LAB_03f07ad4:
          uVar44 = *(uint *)(lVar20 + 0x68);
          if (1 < (int)uVar44) {
            uVar34 = 1;
            sVar13 = **(short **)(lVar20 + 0x60);
            do {
              sVar10 = *(short *)(*(long *)(lVar20 + 0x60) + uVar34 * 2);
              if (sVar13 != sVar10) {
                uVar38 = uVar35;
                if (*(uint *)(param_3 + 8) <= uVar43) {
                  uVar38 = 0;
                }
                puVar4 = (uint *)(*(long *)(param_3 + 0x10) + uVar38 * 0x10);
                uVar9 = *(uint *)(lVar20 + 0x4c);
                uVar12 = (int)uVar34 - 1;
                if (*puVar4 <= uVar9) {
                  uVar9 = 0;
                }
                puVar4 = (uint *)(*(long *)(puVar4 + 2) + (long)(int)uVar9 * 0x10);
                if (*puVar4 <= uVar12) {
                  uVar12 = 0;
                }
                lVar40 = *(long *)(puVar4 + 2) + (long)(int)uVar12 * 0xa8;
                *(uint *)(lVar40 + 0x84) = *(uint *)(lVar40 + 0x84) | 1;
              }
              uVar34 = uVar34 + 1;
              sVar13 = sVar10;
            } while (uVar44 != uVar34);
          }
        }
      }
      goto LAB_03f07ae4;
    }
  }
  *(undefined1 *)(plVar21 + 3) = 1;
LAB_03f07ae4:
  uVar43 = uVar43 + 1;
  bVar19 = uVar41 <= uVar43;
  if (uVar43 == uVar41) {
    return bVar19;
  }
  goto LAB_03f070fc;
}



/* WARNING: Removing unreachable block (ram,0x027e8de8) */

undefined8
FUN_027e8410(ushort *param_1,byte *param_2,undefined4 param_3,undefined4 param_4,uint param_5)

{
  undefined *puVar1;
  long lVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  undefined *puVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  undefined8 uVar10;
  long *plVar11;
  byte bVar12;
  ushort uVar13;
  uint uVar14;
  ulong uVar15;
  long lVar16;
  undefined8 *puVar17;
  byte bVar18;
  ushort *puVar19;
  ushort *puVar20;
  ushort *puVar21;
  ushort *puVar22;
  ushort *__s;
  undefined *local_80;
  char *pcStack_78;
  undefined8 local_70;
  
  __s = param_1 + 0x7c680;
  iVar7 = 0;
  puVar19 = param_1 + 0x72d68;
  puVar20 = param_1 + 0x69450;
  puVar21 = param_1 + 0x5fb38;
  do {
    puVar22 = puVar21 + (long)iVar7 * 0x9918;
    uVar15 = (ulong)(byte)*puVar22;
    if (((uVar15 < 0x23) &&
        (bVar3 = *(byte *)((long)puVar22 + 1), bVar3 <= (byte)PTR_DAT_04bc27f0[uVar15])) &&
       ((*(uint *)(PTR_DAT_04bc2a20 + uVar15 * 4) >> (ulong)(bVar3 & 0x1f) & 1) != 0)) {
      uVar13 = CONCAT11((byte)*puVar22,bVar3);
      if (uVar13 == (ushort)(*param_1 >> 8 | *param_1 << 8)) {
        memset(puVar22,0,0x13230);
        FUN_0268abb0(puVar22);
        uVar13 = *puVar22 >> 8 | *puVar22 << 8;
      }
      if (uVar13 == (ushort)(param_1[0x9918] >> 8 | param_1[0x9918] << 8)) {
        memset(puVar22,0,0x13230);
        FUN_0268abb0(puVar22);
        uVar13 = *puVar22 >> 8 | *puVar22 << 8;
      }
      if (uVar13 == (ushort)(param_1[0x13230] >> 8 | param_1[0x13230] << 8)) {
        memset(puVar22,0,0x13230);
        FUN_0268abb0(puVar22);
        uVar13 = *puVar22 >> 8 | *puVar22 << 8;
      }
      if (uVar13 == (ushort)(param_1[0x1cb48] >> 8 | param_1[0x1cb48] << 8)) {
        memset(puVar22,0,0x13230);
        FUN_0268abb0(puVar22);
        uVar13 = *puVar22 >> 8 | *puVar22 << 8;
      }
      if (uVar13 == (ushort)(param_1[0x26460] >> 8 | param_1[0x26460] << 8)) {
        memset(puVar22,0,0x13230);
        FUN_0268abb0(puVar22);
        uVar13 = *puVar22 >> 8 | *puVar22 << 8;
      }
      if (uVar13 == (ushort)(param_1[0x2fd78] >> 8 | param_1[0x2fd78] << 8)) {
        memset(puVar22,0,0x13230);
        FUN_0268abb0(puVar22);
        uVar13 = *puVar22 >> 8 | *puVar22 << 8;
      }
      if (uVar13 == (ushort)(param_1[0x39690] >> 8 | param_1[0x39690] << 8)) {
        memset(puVar22,0,0x13230);
        FUN_0268abb0(puVar22);
        uVar13 = *puVar22 >> 8 | *puVar22 << 8;
      }
      if (uVar13 == (ushort)(param_1[0x42fa8] >> 8 | param_1[0x42fa8] << 8)) {
        memset(puVar22,0,0x13230);
        FUN_0268abb0(puVar22);
        uVar13 = *puVar22 >> 8 | *puVar22 << 8;
      }
      if (uVar13 == (ushort)(param_1[0x4c8c0] >> 8 | param_1[0x4c8c0] << 8)) {
        memset(puVar22,0,0x13230);
        FUN_0268abb0(puVar22);
        uVar13 = *puVar22 >> 8 | *puVar22 << 8;
      }
      if (uVar13 == (ushort)(param_1[0x561d8] >> 8 | param_1[0x561d8] << 8)) {
        memset(puVar22,0,0x13230);
        FUN_0268abb0(puVar22);
      }
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 != 4);
  FUN_027dd450(param_1);
  bVar3 = 0;
  uVar15 = (ulong)(byte)*puVar21;
  if ((uVar15 < 0x23) && (*(byte *)((long)param_1 + 0xbf671) <= (byte)PTR_DAT_04bc27f0[uVar15])) {
    uVar14 = *(uint *)(PTR_DAT_04bc2a20 + uVar15 * 4) >>
             (ulong)(*(byte *)((long)param_1 + 0xbf671) & 0x1f) & 1;
    if ((param_5 & 1) == 0) goto LAB_027e8824;
LAB_027e87bc:
    if (uVar14 == 0) {
      bVar18 = 0;
      puVar21 = (ushort *)0x0;
LAB_027e88c4:
      uVar15 = (ulong)(byte)*puVar20;
      if (((uVar15 < 0x23) && (*(byte *)((long)param_1 + 0xd28a1) <= (byte)PTR_DAT_04bc27f0[uVar15])
          ) && ((*(uint *)(PTR_DAT_04bc2a20 + uVar15 * 4) >>
                 (ulong)(*(byte *)((long)param_1 + 0xd28a1) & 0x1f) & 1) != 0)) {
        if ((char)param_1[0x7278c] == '\x03') {
          bVar18 = *(byte *)((long)param_1 + 0xe4f19);
          local_80 = PTR_DAT_04bb2020 + 0x10;
          pcStack_78 = "ForceMoveOutVillagerIndex";
          iVar7 = FUN_02749340(param_1 + 0x7278e,&local_80);
          puVar21 = puVar20;
          if (iVar7 != 0) goto LAB_027e8a5c;
        }
      }
      else {
        puVar20 = puVar21;
      }
      uVar15 = (ulong)(byte)*puVar19;
      if (((uVar15 < 0x23) && (*(byte *)((long)param_1 + 0xe5ad1) <= (byte)PTR_DAT_04bc27f0[uVar15])
          ) && ((*(uint *)(PTR_DAT_04bc2a20 + uVar15 * 4) >>
                 (ulong)(*(byte *)((long)param_1 + 0xe5ad1) & 0x1f) & 1) != 0)) {
        if ((char)param_1[0x7c0a4] == '\x03') {
          bVar18 = *(byte *)((long)param_1 + 0xf8149);
          local_80 = PTR_DAT_04bb2020 + 0x10;
          pcStack_78 = "ForceMoveOutVillagerIndex";
          iVar7 = FUN_02749340(param_1 + 0x7c0a6,&local_80);
          puVar21 = puVar19;
          if (iVar7 != 0) goto LAB_027e8a5c;
        }
      }
      else {
        puVar19 = puVar20;
      }
      uVar15 = (ulong)(byte)*__s;
      if (((uVar15 < 0x23) && (*(byte *)((long)param_1 + 0xf8d01) <= (byte)PTR_DAT_04bc27f0[uVar15])
          ) && ((*(uint *)(PTR_DAT_04bc2a20 + uVar15 * 4) >>
                 (ulong)(*(byte *)((long)param_1 + 0xf8d01) & 0x1f) & 1) != 0)) {
        if ((char)param_1[0x859bc] == '\x03') {
          bVar18 = *(byte *)((long)param_1 + 0x10b379);
          local_80 = PTR_DAT_04bb2020 + 0x10;
          pcStack_78 = "ForceMoveOutVillagerIndex";
          FUN_02749340(param_1 + 0x859be,&local_80);
        }
        puVar21 = __s;
        goto LAB_027e8a5c;
      }
      goto joined_r0x027e8a58;
    }
    if ((char)param_1[0x68e74] != '\x03') {
      bVar18 = 0;
      goto LAB_027e88c4;
    }
    bVar18 = *(byte *)((long)param_1 + 0xd1ce9);
    local_80 = PTR_DAT_04bb2020 + 0x10;
    pcStack_78 = "ForceMoveOutVillagerIndex";
    iVar7 = FUN_02749340(param_1 + 0x68e76,&local_80);
    if (iVar7 == 0) goto LAB_027e88c4;
LAB_027e8a5c:
    __s = puVar21;
    FUN_026b1890(param_2,__s);
    bVar3 = bVar18;
    if (bVar18 == 0) goto LAB_027e8b44;
    bVar12 = 3;
  }
  else {
    uVar14 = 0;
    if ((param_5 & 1) != 0) goto LAB_027e87bc;
LAB_027e8824:
    if (uVar14 != 0) {
      puVar22 = puVar21;
      if ((char)param_1[0x68e74] != '\x03') goto LAB_027e886c;
      lVar16 = 0;
      __s = puVar21;
LAB_027e883c:
      bVar18 = *(byte *)((long)puVar21 + lVar16 * 0x13230 + 0x12679);
      puVar21 = __s;
      goto LAB_027e8a5c;
    }
    puVar22 = (ushort *)0x0;
LAB_027e886c:
    uVar15 = (ulong)(byte)*puVar20;
    if (((uVar15 < 0x23) && (*(byte *)((long)param_1 + 0xd28a1) <= (byte)PTR_DAT_04bc27f0[uVar15]))
       && ((*(uint *)(PTR_DAT_04bc2a20 + uVar15 * 4) >>
            (ulong)(*(byte *)((long)param_1 + 0xd28a1) & 0x1f) & 1) != 0)) {
      if ((char)param_1[0x7278c] == '\x03') {
        lVar16 = 1;
        __s = puVar20;
        goto LAB_027e883c;
      }
      puVar22 = puVar20;
    }
    uVar15 = (ulong)(byte)*puVar19;
    if (((uVar15 < 0x23) && (*(byte *)((long)param_1 + 0xe5ad1) <= (byte)PTR_DAT_04bc27f0[uVar15]))
       && ((*(uint *)(PTR_DAT_04bc2a20 + uVar15 * 4) >>
            (ulong)(*(byte *)((long)param_1 + 0xe5ad1) & 0x1f) & 1) != 0)) {
      if ((char)param_1[0x7c0a4] == '\x03') {
        lVar16 = 2;
        __s = puVar19;
        goto LAB_027e883c;
      }
      puVar22 = puVar19;
    }
    uVar15 = (ulong)(byte)*__s;
    if (((0x22 < uVar15) || ((byte)PTR_DAT_04bc27f0[uVar15] < *(byte *)((long)param_1 + 0xf8d01)))
       || ((*(uint *)(PTR_DAT_04bc2a20 + uVar15 * 4) >>
            (ulong)(*(byte *)((long)param_1 + 0xf8d01) & 0x1f) & 1) == 0)) {
      bVar18 = 0;
      puVar19 = puVar22;
joined_r0x027e8a58:
      puVar21 = puVar19;
      if (puVar19 == (ushort *)0x0) {
        return 0;
      }
      goto LAB_027e8a5c;
    }
    if ((char)param_1[0x859bc] == '\x03') {
      lVar16 = 3;
      goto LAB_027e883c;
    }
    FUN_026b1890(param_2,__s);
LAB_027e8b44:
    bVar18 = 0;
    bVar12 = 2;
  }
  lVar16 = *(long *)PTR_DAT_04bb32e8;
  uVar13 = *(ushort *)(lVar16 + 0x4060);
  bVar4 = *(byte *)(lVar16 + 0x4062);
  bVar5 = *(byte *)(lVar16 + 0x4063);
  uVar15 = nn::time::IsValidDate((uint)uVar13,(uint)bVar4,(uint)bVar5);
  if ((uVar15 & 1) != 0) {
    *(ushort *)(param_2 + 0x12674) = uVar13;
    param_2[0x12676] = bVar4;
    param_2[0x12677] = bVar5;
  }
  param_2[0x12678] = bVar12;
  param_2[0x12679] = bVar18;
  uVar8 = FUN_021d7d60(param_2);
  puVar6 = PTR_DAT_04bb2020;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_78 = "MoveInCompletion";
  local_80 = puVar1;
  FUN_02749650(param_2 + 0x1267c,uVar8,&local_80,0,0);
  local_80 = (undefined *)((ulong)local_80 & 0xffffffff00000000);
  param_2[0x1267a] = 0;
  if (((bVar3 != 3) && (bVar3 != 4)) && (bVar3 != 2)) {
    FUN_026b1100(param_2);
    FUN_02690d60(param_2);
  }
  pcStack_78 = "MoveInCompletion";
  local_80 = puVar1;
  FUN_02749650(param_2 + 0x1267c,param_4,&local_80,0,0);
  iVar7 = FUN_027dc31c(param_1,param_2);
  FUN_027dc460(param_1,param_2);
  uVar15 = (ulong)*param_2;
  if (0x22 < *param_2) {
    uVar15 = 0;
  }
  *(uint *)(param_1 + uVar15 * 2 + 0x5faf0) =
       *(uint *)(param_1 + uVar15 * 2 + 0x5faf0) | 1 << (ulong)(param_2[1] & 0x1f);
  pcStack_78 = "IsNpcIncreased";
  local_80 = puVar1;
  iVar9 = FUN_0273ea30(&local_80);
  if ((iVar9 == 0) && (uVar10 = FUN_021d7d60(param_2), (int)uVar10 != -1)) {
    pcStack_78 = "Is3rdNpc";
    local_80 = puVar6 + 0x10;
    FUN_027494ac(uVar10,&local_80,1);
    pcStack_78 = "IsNpcIncreased";
    local_80 = puVar6 + 0x10;
    FUN_0273f3c4(&local_80,1);
  }
  local_80 = (undefined *)CONCAT44(local_80._4_4_,param_3);
  lVar16 = *(long *)PTR_DAT_04bb46b0;
  if (lVar16 == 0) goto LAB_027e8ea4;
  puVar17 = *(undefined8 **)(lVar16 + 0x10);
  if ((*(byte *)(lVar16 + 0x453) & 1) == 0) {
    lVar16 = (**(code **)(*(long *)*puVar17 + 0x38))();
    if (lVar16 == 0) goto LAB_027e8ea4;
    lVar16 = lVar16 + 0x70;
  }
  else if (((puVar17 == (undefined8 *)0x0) || ((long *)puVar17[0x26] == (long *)0x0)) ||
          (lVar16 = (**(code **)(*(long *)puVar17[0x26] + 0x38))(), lVar16 == 0)) goto LAB_027e8ea4;
  if (9 < (uint)local_80) goto LAB_027e8ea4;
  lVar2 = lVar16 + 0x1962d8 + ((ulong)local_80 & 0xffffffff) * 0x10d8;
  if (9 < (uint)local_80) {
    lVar2 = lVar16 + 0x1962d8;
  }
  lVar16 = *(long *)(lVar2 + 0x28);
  if (lVar16 == 0) {
    uVar15 = 0;
  }
  else {
    if (*(undefined8 **)(lVar16 + 0x10) == (undefined8 *)0x0) {
      uVar15 = 0;
    }
    else {
      uVar15 = (**(code **)**(undefined8 **)(lVar16 + 0x10))();
      lVar16 = *(long *)(lVar2 + 0x28);
      uVar15 = uVar15 & 0xffffffff;
      if (lVar16 == 0) goto LAB_027e8dc4;
    }
    plVar11 = *(long **)(lVar16 + 0x20);
    if (plVar11 != (long *)0x0) {
      local_80 = *(undefined **)(lVar2 + 8);
      pcStack_78 = *(char **)(lVar2 + 0x10);
      local_70 = 0x12e8;
      (**(code **)(*plVar11 + 0x20))(plVar11,&local_80);
    }
  }
LAB_027e8dc4:
  local_80 = (undefined *)((ulong)local_80 & 0xffffffff00000000);
  if (iVar7 != -1) {
    *(char *)(*(long *)(lVar2 + 0x10) + *(long *)(lVar2 + 8) + 0x1c4) = (char)iVar7;
  }
  lVar16 = *(long *)(lVar2 + 0x28);
  if ((uVar15 & 1) == 0) {
LAB_027e8e14:
    if (lVar16 == 0) {
LAB_027e8e3c:
      FUN_027cdc30(*(long *)(lVar2 + 0x10) + *(long *)(lVar2 + 8));
      goto LAB_027e8ea4;
    }
  }
  else {
    if (lVar16 == 0) goto LAB_027e8e3c;
    if (*(undefined8 **)(lVar16 + 0x18) != (undefined8 *)0x0) {
      (**(code **)**(undefined8 **)(lVar16 + 0x18))();
      lVar16 = *(long *)(lVar2 + 0x28);
      goto LAB_027e8e14;
    }
  }
  if (*(undefined8 **)(lVar16 + 0x10) == (undefined8 *)0x0) {
    uVar15 = 0;
LAB_027e8e50:
    plVar11 = *(long **)(lVar16 + 0x20);
    if (plVar11 != (long *)0x0) {
      local_80 = *(undefined **)(lVar2 + 8);
      pcStack_78 = *(char **)(lVar2 + 0x10);
      local_70 = 0x12e8;
      (**(code **)(*plVar11 + 0x20))(plVar11,&local_80);
    }
  }
  else {
    uVar15 = (**(code **)**(undefined8 **)(lVar16 + 0x10))();
    lVar16 = *(long *)(lVar2 + 0x28);
    uVar15 = uVar15 & 0xffffffff;
    if (lVar16 != 0) goto LAB_027e8e50;
  }
  FUN_027cdc30(*(long *)(lVar2 + 0x10) + *(long *)(lVar2 + 8));
  if ((((uVar15 & 1) != 0) && (*(long *)(lVar2 + 0x28) != 0)) &&
     (puVar17 = *(undefined8 **)(*(long *)(lVar2 + 0x28) + 0x18), puVar17 != (undefined8 *)0x0)) {
    (**(code **)*puVar17)();
  }
LAB_027e8ea4:
  memset(__s,0,0x13230);
  FUN_0268abb0(__s);
  FUN_027dd450(param_1);
  return 1;
}


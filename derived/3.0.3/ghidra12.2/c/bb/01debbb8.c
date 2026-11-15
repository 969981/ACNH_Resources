
undefined8 FUN_01debbb8(long param_1,uint param_2,ulong param_3)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long *plVar11;
  void *pvVar12;
  undefined8 uVar13;
  long lVar14;
  byte *pbVar15;
  long lVar16;
  byte *pbVar17;
  uint uVar18;
  long *plVar19;
  byte local_88 [4];
  undefined1 local_84;
  undefined1 uStack_83;
  undefined1 uStack_82;
  undefined1 uStack_81;
  undefined1 uStack_80;
  undefined1 uStack_7f;
  undefined1 uStack_7e;
  undefined1 uStack_7d;
  byte local_7c;
  byte local_78 [4];
  uint local_74;
  undefined8 local_70;
  long local_68;
  undefined *local_60;
  undefined8 uStack_58;
  
  puVar7 = PTR_DAT_04bb36f0;
  if (*(int *)(param_1 + 8) != 0) {
    return 0;
  }
  lVar14 = *(long *)PTR_DAT_04bb36f0;
  if (*(char *)(param_1 + 0x48) != '\0') {
    uVar2 = *(uint *)(param_1 + 0x4c);
    if (*(uint *)(lVar14 + 0x20) <= uVar2) {
      uVar2 = 0;
    }
    if (*(char *)(*(long *)(lVar14 + 0x28) + (long)(int)uVar2 * 0x38 + 0x2c) == '\0') {
      return 0;
    }
  }
  *(undefined1 *)(param_1 + 0x50) = 0;
  puVar5 = PTR_DAT_04bb39b0;
  pbVar17 = PTR_DAT_04bb32e0;
  local_70 = (undefined *)CONCAT44(local_70._4_4_,param_2);
  uVar2 = param_2;
  if (*(uint *)(lVar14 + 0x20) <= param_2) {
    uVar2 = 0;
  }
  if (*(char *)(*(long *)(lVar14 + 0x28) + (long)(int)uVar2 * 0x38 + 0x2c) == '\0') {
    return 0;
  }
  lVar14 = *(long *)PTR_DAT_04bb39b0;
  pbVar15 = PTR_DAT_04bb32e0;
  if (lVar14 == 0) {
    if (7 < (byte)*PTR_DAT_04bb32e0) goto LAB_01debcec;
LAB_01debd58:
    local_78[0] = *pbVar15;
    if (7 < local_78[0]) {
      local_78[0] = 0xff;
    }
  }
  else {
    if (*(int *)(lVar14 + 0x15c) != 0) {
      pbVar15 = (byte *)(lVar14 + 0x158);
    }
    if ((*pbVar15 < 8) ||
       (((*(int *)(lVar14 + 0x15c) != 0 && (*(long *)PTR_DAT_04bb4718 != 0)) &&
        (pbVar15 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5), *pbVar15 < 8)))) goto LAB_01debd58;
LAB_01debcec:
    if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_01debd50:
      pbVar15 = PTR_DAT_04bb5038;
      goto LAB_01debd58;
    }
    lVar14 = **(long **)PTR_DAT_04bb27d0;
    bVar3 = *(byte *)(lVar14 + 0x473);
    pbVar15 = PTR_DAT_04bb5038;
    if ((long)(char)bVar3 != 0xffffffffffffffff) {
      puVar1 = (uint *)(lVar14 + 0x48) + ((long)(char)bVar3 & 0xffffffffU) * 0x20;
      if (7 < bVar3) {
        puVar1 = (uint *)(lVar14 + 0x48);
      }
      if ((*puVar1 & 8) != 0) {
        pbVar15 = (byte *)(lVar14 + 0x471);
      }
    }
    local_78[0] = *pbVar15;
    if (7 < local_78[0]) goto LAB_01debd50;
  }
  lVar14 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_78,1);
  if (lVar14 == 0) {
    return 0;
  }
  lVar16 = *(long *)puVar5;
  if (lVar16 == 0) {
LAB_01debdd0:
    if (*pbVar17 < 8) goto LAB_01debe48;
LAB_01debddc:
    if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_01debe40:
      pbVar17 = PTR_DAT_04bb5038;
      goto LAB_01debe48;
    }
    lVar16 = **(long **)PTR_DAT_04bb27d0;
    bVar3 = *(byte *)(lVar16 + 0x473);
    pbVar17 = PTR_DAT_04bb5038;
    if ((long)(char)bVar3 != 0xffffffffffffffff) {
      puVar1 = (uint *)(lVar16 + 0x48) + ((long)(char)bVar3 & 0xffffffffU) * 0x20;
      if (7 < bVar3) {
        puVar1 = (uint *)(lVar16 + 0x48);
      }
      if ((*puVar1 & 8) != 0) {
        pbVar17 = (byte *)(lVar16 + 0x471);
      }
    }
    local_88[0] = *pbVar17;
    if (7 < local_88[0]) goto LAB_01debe40;
  }
  else {
    if (*(int *)(lVar16 + 0x15c) != 0) {
      pbVar17 = (byte *)(lVar16 + 0x158);
    }
    if (7 < *pbVar17) {
      if ((*(int *)(lVar16 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar17 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_01debdd0;
      }
      goto LAB_01debddc;
    }
LAB_01debe48:
    local_88[0] = *pbVar17;
    if (7 < local_88[0]) {
      local_88[0] = 0xff;
    }
  }
  FUN_02642790(&local_70,local_88);
  local_84 = (undefined1)local_70;
  uStack_83 = local_70._1_1_;
  uStack_82 = local_70._2_1_;
  uStack_81 = local_70._3_1_;
  uStack_80 = local_70._4_1_;
  uStack_7f = local_70._5_1_;
  uStack_7e = local_70._6_1_;
  uStack_7d = local_70._7_1_;
  local_74 = (uint)(byte)local_68;
  iVar4 = (int)((ulong)local_70 >> 0x20);
  local_7c = (byte)local_68;
  uVar2 = ((int)local_70 * 0x16a88000 | (uint)((int)local_70 * -0x3361d2af) >> 0x11) * 0x1b873593 ^
          0x78fccf32;
  uVar2 = (iVar4 * 0x16a88000 | (uint)(iVar4 * -0x3361d2af) >> 0x11) * 0x1b873593 ^
          (uVar2 >> 0x13 | uVar2 << 0xd) * 5 + 0xe6546b64;
  uVar2 = (local_74 * 0x16a88000 | local_74 * -0x3361d2af >> 0x11) * 0x1b873593 ^
          (uVar2 >> 0x13 | uVar2 << 0xd) * 5 + 0xe6546b64;
  uVar2 = (uVar2 ^ uVar2 >> 0x10 ^ 9) * -0x7a143595;
  uVar2 = (uVar2 ^ uVar2 >> 0xd) * -0x3d4d51cb;
  uVar2 = uVar2 ^ uVar2 >> 0x10;
  if ((param_3 & 1) == 0) {
    lVar16 = lVar14 + 0x194b0;
    if (*(long *)(lVar14 + 0x194b8) == 0) {
      lVar16 = *(long *)(*(long *)PTR_DAT_04bb46b0 + 0x20);
    }
    if ((*(long **)(lVar16 + 0x2acd8) == (long *)0x0) ||
       (puVar9 = (undefined8 *)**(long **)(lVar16 + 0x2acd8), puVar9 == (undefined8 *)0x0)) {
      uVar18 = *(uint *)(*(long *)(lVar16 + 0x2acc0) + *(long *)(lVar16 + 0x2acb8) + 0x10);
    }
    else {
      uVar10 = (**(code **)*puVar9)();
      uVar18 = *(uint *)(*(long *)(lVar16 + 0x2acc0) + *(long *)(lVar16 + 0x2acb8) + 0x10);
      if ((((uVar10 & 1) != 0) && (*(long *)(lVar16 + 0x2acd8) != 0)) &&
         (puVar9 = *(undefined8 **)(*(long *)(lVar16 + 0x2acd8) + 8), puVar9 != (undefined8 *)0x0))
      {
        (**(code **)*puVar9)();
      }
    }
    if ((uVar18 != 0) && (uVar18 == uVar2)) {
      *(undefined1 *)(param_1 + 0x50) = 1;
      return 1;
    }
  }
  puVar5 = PTR_DAT_04bb2698;
  plVar19 = *(long **)(*(long *)PTR_DAT_04bb47c8 + 8);
  lVar14 = *(long *)PTR_DAT_04bb2698;
  if (lVar14 == 0) {
    plVar11 = malloc(0x20);
  }
  else {
    plVar11 = plVar19;
    if (plVar19 == (long *)0x0) {
      lVar16 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar11 = (long *)(lVar14 + 8);
      if (lVar16 != 0) {
        plVar11 = (long *)(lVar16 + 0xa8);
      }
      plVar11 = (long *)*plVar11;
      if (plVar11 == (long *)0x0) {
        plVar11 = (long *)0x0;
        goto LAB_01dec0bc;
      }
    }
    plVar11 = (long *)(**(code **)(*plVar11 + 0x30))(plVar11,0x20,8);
  }
LAB_01dec0bc:
  puVar6 = PTR_DAT_04bb29b8;
  *(undefined4 *)(plVar11 + 1) = 0;
  plVar11[2] = 0;
  plVar11[3] = 0;
  *plVar11 = (long)(puVar6 + 0x10);
  *(long **)(param_1 + 0x78) = plVar11;
  lVar14 = *(long *)puVar5;
  if (lVar14 == 0) {
    pvVar12 = malloc(9);
  }
  else {
    if (plVar19 == (long *)0x0) {
      lVar16 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      puVar9 = (undefined8 *)(lVar14 + 8);
      if (lVar16 != 0) {
        puVar9 = (undefined8 *)(lVar16 + 0xa8);
      }
      plVar19 = (long *)*puVar9;
      if (plVar19 == (long *)0x0) goto LAB_01dec134;
    }
    pvVar12 = (void *)(**(code **)(*plVar19 + 0x30))(plVar19,9,8);
  }
  if (pvVar12 != (void *)0x0) {
    *(undefined4 *)(plVar11 + 1) = 9;
    plVar11[2] = (long)pvVar12;
  }
LAB_01dec134:
  lVar14 = *(long *)(param_1 + 0x78);
  puVar9 = *(undefined8 **)(lVar14 + 0x10);
  if (puVar9 != (undefined8 *)0x0) {
    if (*(uint *)(lVar14 + 8) < 9) {
      memcpy(puVar9,&local_84,(ulong)*(uint *)(lVar14 + 8));
      uVar10 = (ulong)*(uint *)(lVar14 + 8);
    }
    else {
      *puVar9 = CONCAT17(uStack_7d,
                         CONCAT16(uStack_7e,
                                  CONCAT15(uStack_7f,
                                           CONCAT14(uStack_80,
                                                    CONCAT13(uStack_81,
                                                             CONCAT12(uStack_82,
                                                                      CONCAT11(uStack_83,local_84)))
                                                   ))));
      *(byte *)(puVar9 + 1) = local_7c;
      uVar10 = 9;
    }
    *(ulong *)(lVar14 + 0x18) = uVar10;
    lVar14 = *(long *)(param_1 + 0x78);
  }
  lVar16 = *(long *)(*(long *)PTR_DAT_04bb21c8 + 0x240);
  *(long *)(lVar16 + 0x50) = lVar14;
  if ((*(long *)(lVar14 + 0x10) != 0) && (*(long *)(lVar14 + 0x18) != 0)) {
    *(undefined1 *)(lVar16 + 0x4c) = *PTR_DAT_04bb2950;
    local_60 = PTR_LAB_04bb2a30;
    *(undefined2 *)(lVar16 + 0x4d) = 0;
    local_70 = PTR_DAT_04bb2a38 + 0x10;
    uStack_58 = 0;
    local_68 = lVar16;
    uVar8 = FUN_006d6214(*(undefined8 *)(*(long *)PTR_DAT_04bcb7d8 + 0x88),&local_70,
                         (undefined1 *)(lVar16 + 0x4c),0,0,0);
    *(undefined4 *)(lVar16 + 0x44) = uVar8;
    uVar13 = *(undefined8 *)puVar7;
    *(undefined8 *)(param_1 + 0x58) = &PTR_LAB_04a5bd08;
    *(uint *)(param_1 + 0x60) = uVar2;
    *(long *)(param_1 + 0x68) = param_1;
    FUN_01c9a8a8(uVar13,(undefined8 *)(param_1 + 0x58),1,param_2);
    *(uint *)(param_1 + 0x4c) = param_2;
    *(undefined1 *)(param_1 + 0x48) = 1;
    return 1;
  }
  if (*(long **)(param_1 + 0x78) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x78) + 8))();
  }
  *(undefined8 *)(param_1 + 0x78) = 0;
  return 0;
}


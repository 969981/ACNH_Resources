
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_02324d54(long param_1)

{
  char *pcVar1;
  byte *pbVar2;
  byte *pbVar3;
  uint *puVar4;
  uint uVar5;
  short sVar6;
  undefined *puVar7;
  undefined *puVar8;
  bool bVar9;
  undefined1 uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  ulong uVar14;
  undefined8 uVar15;
  byte bVar16;
  byte bVar17;
  long lVar18;
  undefined8 *puVar19;
  ulong *puVar20;
  long lVar21;
  undefined *local_88;
  char *local_80;
  long local_78;
  undefined *local_70;
  char *local_68;
  
  puVar8 = PTR_DAT_04bb6298;
  pcVar1 = (char *)(param_1 + 0x17ac);
  sVar6 = *(short *)PTR_DAT_04bb6298;
  if (sVar6 == -1) {
LAB_02324dfc:
    bVar17 = 0;
    if (*(long *)PTR_DAT_04bb27f8 != 0) {
      bVar17 = *(byte *)(*(long *)PTR_DAT_04bb27f8 + 0x1a71) >> 1 & 1;
    }
  }
  else {
    local_88 = (undefined *)CONCAT44(local_88._4_4_,0x19);
    puVar4 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar6 * 8);
    if (0xff < (uint)(int)sVar6) {
      puVar4 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar4 >> 0x19 & 1) == 0) goto LAB_02324dfc;
    local_88 = PTR_DAT_04bb2020 + 0x10;
    local_80 = "IsParty";
    iVar11 = FUN_02758850(&local_88);
    if (iVar11 == 0) goto LAB_02324dfc;
    bVar17 = 1;
  }
  if (*(long *)PTR_DAT_04bb7ff8 != 0) {
    bVar16 = 0;
    if (*(int *)(*(long *)PTR_DAT_04bb7ff8 + 0x588) != 0) {
      bVar16 = bVar17;
    }
    if (bVar16 == 1) {
      if (*pcVar1 != '\0') {
        return 0;
      }
      local_88 = (undefined *)((ulong)local_88 & 0xffffffff00000000);
      if ((*(uint *)(param_1 + 0xed0) & 1) == 0) {
        return 0;
      }
    }
  }
  if (bVar17 == 0) {
    uVar14 = FUN_016e6f44();
    if ((uVar14 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x21ac) = 0;
      if (*pcVar1 != '\0') {
        return 0;
      }
      local_88 = (undefined *)((ulong)local_88 & 0xffffffff00000000);
      if ((*(uint *)(param_1 + 0xed0) & 1) == 0) {
        return 0;
      }
    }
    else {
      if (*(char *)(param_1 + 0x21ac) == '\0') {
        if (*pcVar1 != '\0') {
          return 0;
        }
        if ((*(uint *)(param_1 + 0xed0) & 1) == 0) {
          return 0;
        }
        *(undefined1 *)(param_1 + 0x21ac) = 1;
        return 0;
      }
      *(undefined1 *)(param_1 + 0x21ac) = 0;
    }
  }
  puVar7 = PTR_DAT_04bb4718;
  if (*(long *)PTR_DAT_04bb4718 == 0) {
    if ((DAT_054f0960 & 1) == 0) {
      iVar11 = __cxa_guard_acquire(&DAT_054f0960);
      puVar19 = &DAT_054f0958;
      if (iVar11 != 0) {
        DAT_054f0958 = 0;
        __cxa_guard_release(&DAT_054f0960);
      }
    }
    else {
      puVar19 = &DAT_054f0958;
    }
  }
  else {
    puVar19 = (undefined8 *)(*(long *)PTR_DAT_04bb4718 + 0x204);
    if ((ulong)*(byte *)(param_1 + 0x1ee8) < 8) {
      puVar19 = puVar19 + *(byte *)(param_1 + 0x1ee8);
    }
  }
  pbVar3 = PTR_DAT_04bb32e0;
  if ((*(uint *)((long)puVar19 + 4) >> 0xf & 1) != 0) {
    return 0;
  }
  local_88 = (undefined *)((ulong)local_88 & 0xffffffff00000000);
  if ((*(byte *)(*(long *)PTR_DAT_04bb2230 + 0x3f0) & 1) != 0) {
    return 0;
  }
  pbVar2 = PTR_DAT_04bb32e0;
  if (*(long *)puVar7 != 0) {
    pbVar2 = (byte *)(*(long *)puVar7 + 0x11a4);
  }
  if ((ulong)*pbVar2 < 8) {
    lVar18 = **(long **)PTR_DAT_04bb27d0;
    if (*(byte *)(lVar18 + 0x476) < 2) {
      iVar11 = FUN_02582d8c(pbVar2,2);
      if (-1 < iVar11) {
        return 0;
      }
    }
    else {
      bVar17 = *(byte *)(lVar18 + (ulong)*pbVar2 * 4 + 0x44e);
      if ((long)(char)bVar17 != 0xffffffffffffffff) {
        pbVar2 = (byte *)(lVar18 + 0x48) + ((long)(char)bVar17 & 0xffffffffU) * 0x80;
        if (7 < bVar17) {
          pbVar2 = (byte *)(lVar18 + 0x48);
        }
        if ((*pbVar2 >> 3 & 1) != 0) {
          return 0;
        }
      }
    }
  }
  if (9 < *(uint *)(param_1 + 0x1810)) {
    return 0;
  }
  if ((1 << (ulong)(*(uint *)(param_1 + 0x1810) & 0x1f) & 0x20eU) == 0) {
    return 0;
  }
  uVar14 = FUN_023ce290(param_1);
  if (((((uVar14 & 1) != 0) && (*(int *)(param_1 + 0x178) == 0)) &&
      ((*(long *)(param_1 + 0x70) == 0 || (2 < *(int *)(*(long *)(param_1 + 0x70) + 0x280) - 0x10aU)
       ))) && (uVar14 = FUN_023ce578(param_1), (uVar14 & 1) != 0)) {
    return 1;
  }
  lVar18 = (long)*(short *)puVar8;
  if (*(short *)puVar8 != -1) {
    local_88 = (undefined *)CONCAT44(local_88._4_4_,1);
    lVar18 = 1;
  }
  iVar11 = FUN_016f5c40(lVar18,param_1);
  puVar7 = PTR_DAT_04bb43c0;
  if (*(long *)(param_1 + 0x298) == 0) {
    puVar20 = (ulong *)PTR_DAT_04bb37e0;
  }
  else {
    lVar18 = *(long *)(*(long *)(param_1 + 0x298) + 0x1480);
    puVar20 = (ulong *)(lVar18 + ((ulong)*(uint *)(lVar18 + 0x10) & 1) * 0x20 + 0x14);
  }
  lVar21 = *(long *)PTR_DAT_04bb43c0;
  uVar12 = FUN_0277d6c4(puVar20);
  lVar18 = *(long *)puVar7;
  if (lVar18 == 0) {
    return 0;
  }
  lVar21 = *(long *)(lVar21 + 0x57e58);
  uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
  if (*(uint *)(lVar21 + 0x1d8) <= uVar12) {
    return 0;
  }
  if (*(long *)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar12 * 8) == 0) {
    return 0;
  }
  local_88 = PTR_DAT_04bc0510 + 0x10;
  local_80 = (char *)*puVar20;
  local_78 = 0;
  uVar12 = FUN_0277d6c4(&local_80);
  if (*(long *)puVar7 != 0) {
    lVar18 = *(long *)(lVar18 + 0x57e58);
    uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
    if ((uVar12 < *(uint *)(lVar18 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar12 * 8) != 0)) {
      lVar18 = *(long *)PTR_DAT_04bc0428;
      uVar12 = FUN_0277d6c4(puVar20);
      uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
      if (uVar12 < *(uint *)(lVar18 + 0x1d8)) {
        lVar18 = *(long *)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar12 * 8);
        if (lVar18 != 0) {
          local_78 = lVar18;
        }
      }
    }
  }
  lVar18 = *(long *)PTR_DAT_04bb39b0;
  if ((lVar18 == 0) || (*(int *)(lVar18 + 0x15c) == 0)) {
    bVar9 = true;
  }
  else {
    bVar17 = *(byte *)(param_1 + 0x1ee8);
    if (*(int *)(lVar18 + 0x15c) != 0) {
      pbVar3 = (byte *)(lVar18 + 0x158);
    }
    bVar16 = *pbVar3;
    if (7 < bVar16) {
      bVar16 = 0xff;
    }
    if (7 < bVar17) {
      bVar17 = 0xff;
    }
    bVar9 = bVar16 == bVar17;
  }
  uVar10 = FUN_0235a9ec(param_1);
  local_70 = (undefined *)CONCAT53(local_70._3_5_,0x10000);
  local_70 = (undefined *)(CONCAT62(local_70._2_6_,CONCAT11(uVar10,bVar9)) & 0xffffffffffff01ff);
  local_68 = (char *)(*(long *)(param_1 + 0x68) + 0x278);
  uVar12 = FUN_01add954(&local_88,&local_70);
  sVar6 = *(short *)puVar8;
  if (sVar6 == -1) {
LAB_023252c8:
    bVar9 = false;
  }
  else {
    local_70 = (undefined *)CONCAT44(local_70._4_4_,0x19);
    puVar4 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar6 * 8);
    if (0xff < (uint)(int)sVar6) {
      puVar4 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar4 >> 0x19 & 1) == 0) goto LAB_023252c8;
    local_70 = PTR_DAT_04bb2020 + 0x10;
    local_68 = "IsParty";
    iVar13 = FUN_02758850(&local_70);
    if (iVar13 == 0) goto LAB_023252c8;
    bVar9 = true;
  }
  sVar6 = *(short *)puVar8;
  if (sVar6 != -1) {
    local_70 = (undefined *)CONCAT44(local_70._4_4_,0x17);
    puVar4 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar6 * 8);
    if (0xff < (uint)(int)sVar6) {
      puVar4 = (uint *)PTR_DAT_04bc39f8;
    }
    if (((*puVar4 >> 0x17 & 1) != 0) && (uVar14 = FUN_016f62fc(param_1), (uVar14 & 1) != 0)) {
      return 0;
    }
  }
  if ((uVar12 & 1) == 0 && !bVar9) {
    return 0;
  }
  switch(iVar11) {
  case 0xc:
    uVar15 = 0x7f;
    break;
  default:
    uVar14 = FUN_016f5f00(param_1);
    if ((uVar14 & 1) != 0) {
      if (*(long *)(param_1 + 0x70) == 0) {
        uVar12 = 0;
      }
      else {
        uVar5 = *(uint *)(*(long *)(param_1 + 0x70) + 0x280);
        uVar12 = 0;
        if (uVar5 < 0x149) {
          uVar12 = uVar5;
        }
        if (uVar12 == 0xaf) {
          return 0;
        }
        if (uVar12 == 0xb0) {
          return 0;
        }
      }
      local_70 = (undefined *)CONCAT44(local_70._4_4_,uVar12);
      if (uVar12 == 0xb1) {
        return 0;
      }
      local_80 = (char *)((ulong)local_80 & 0xffffffffffffff00);
      local_88 = (undefined *)*puVar20;
      FUN_024353c4(param_1,&local_88);
      return 1;
    }
    switch(iVar11) {
    case 0x1d:
      uVar14 = FUN_0248f3d0(param_1,0);
      break;
    default:
      uVar14 = FUN_024d0a88(param_1,0,puVar20);
      if ((uVar14 & 1) != 0) {
        return 1;
      }
      uVar14 = FUN_024d4da0(param_1,0,puVar20);
      if ((uVar14 & 1) != 0) {
        return 1;
      }
      uVar14 = FUN_024d2394(param_1,0,puVar20);
      if ((uVar14 & 1) != 0) {
        return 1;
      }
      if ((iVar11 != 0x70) && (iVar11 != 0x6f)) {
        return 0;
      }
    case 0x47:
      FUN_02372704(param_1,0x106,0,1);
      return 1;
    case 0x1f:
      puVar19 = &DAT_054e9a58;
      if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
        puVar19 = *(undefined8 **)(param_1 + 0x4c8);
      }
      uVar14 = FUN_02481c00(param_1,puVar19 + 0x4f,(long)puVar19 + 0x2b4);
      break;
    case 0x20:
      puVar19 = &DAT_054e9a58;
      if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
        puVar19 = *(undefined8 **)(param_1 + 0x4c8);
      }
      uVar14 = FUN_024d9bb8(param_1,puVar19 + 0x4f,(long)puVar19 + 0x2b4);
      break;
    case 0x2a:
      uVar15 = 0xf1;
      goto LAB_02325428;
    case 0x3d:
      puVar19 = &DAT_054e9a58;
      if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
        puVar19 = *(undefined8 **)(param_1 + 0x4c8);
      }
      uVar14 = FUN_0247e5ac(param_1,puVar19 + 0x4f,(long)puVar19 + 0x2b4,0);
      break;
    case 0x51:
      puVar19 = &DAT_054e9a58;
      if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
        puVar19 = *(undefined8 **)(param_1 + 0x4c8);
      }
      uVar14 = FUN_024cb0a4(param_1,puVar19 + 0x4f,(long)puVar19 + 0x2b4);
    }
    if ((uVar14 & 1) == 0) {
      return 0;
    }
    return 1;
  case 0x13:
    uVar15 = 0x94;
    break;
  case 0x1b:
    puVar19 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar19 = *(undefined8 **)(param_1 + 0x4c8);
    }
    FUN_024a6440(param_1,puVar19 + 0x4f,(long)puVar19 + 0x2b4);
    return 1;
  case 0x1e:
    local_88 = (undefined *)CONCAT44(local_88._4_4_,0xda);
    uVar12 = 0;
    if (*(long *)(param_1 + 0x70) != 0) {
      uVar5 = *(uint *)(*(long *)(param_1 + 0x70) + 0x280);
      uVar12 = 0;
      if (uVar5 < 0x149) {
        uVar12 = uVar5;
      }
    }
    local_70 = (undefined *)CONCAT44(local_70._4_4_,uVar12);
    if (uVar12 == 0xda) {
      return 0;
    }
    uVar15 = 0xda;
  }
LAB_02325428:
  uVar14 = FUN_02372704(param_1,uVar15,0,1);
  if ((uVar14 & 1) == 0) {
    return 0;
  }
  return 1;
}


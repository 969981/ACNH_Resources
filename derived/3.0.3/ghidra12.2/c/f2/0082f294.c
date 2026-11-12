
void FUN_0082f294(uint *param_1)

{
  ushort *puVar1;
  ulong uVar2;
  uint *puVar3;
  short sVar4;
  undefined *puVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  ulong uVar15;
  byte *pbVar16;
  byte bVar17;
  long lVar18;
  undefined8 *puVar19;
  long lVar20;
  byte local_18 [4];
  uint local_14;
  
  puVar5 = PTR_DAT_04bb6298;
  *param_1 = 0xffffffff;
  sVar4 = *(short *)puVar5;
  if (sVar4 != -1) {
    local_14 = 0x1b;
    puVar3 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar4 * 8);
    if (0xff < (uint)(int)sVar4) {
      puVar3 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar3 >> 0x1b & 1) != 0) {
      lVar18 = *(long *)PTR_DAT_04bb39b0;
      pbVar16 = PTR_DAT_04bb32e0;
      if (lVar18 == 0) {
LAB_0082f760:
        if (*pbVar16 < 8) goto LAB_0082f7d8;
LAB_0082f76c:
        if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_0082f7d0:
          pbVar16 = PTR_DAT_04bb5038;
          goto LAB_0082f7d8;
        }
        lVar18 = **(long **)PTR_DAT_04bb27d0;
        bVar17 = *(byte *)(lVar18 + 0x473);
        pbVar16 = PTR_DAT_04bb5038;
        if ((long)(char)bVar17 != 0xffffffffffffffff) {
          puVar3 = (uint *)(lVar18 + 0x48) + ((long)(char)bVar17 & 0xffffffffU) * 0x20;
          if (7 < bVar17) {
            puVar3 = (uint *)(lVar18 + 0x48);
          }
          if ((*puVar3 & 8) != 0) {
            pbVar16 = (byte *)(lVar18 + 0x471);
          }
        }
        bVar17 = *pbVar16;
        if (7 < bVar17) goto LAB_0082f7d0;
      }
      else {
        if (*(int *)(lVar18 + 0x15c) != 0) {
          pbVar16 = (byte *)(lVar18 + 0x158);
        }
        if (7 < *pbVar16) {
          if ((*(int *)(lVar18 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
            pbVar16 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
            goto LAB_0082f760;
          }
          goto LAB_0082f76c;
        }
LAB_0082f7d8:
        bVar17 = *pbVar16;
        if (7 < bVar17) {
          bVar17 = 0xff;
        }
      }
      local_14 = (uint)bVar17;
      uVar14 = FUN_02582fe0(&local_14);
      uVar14 = (uVar14 & 7) << 0x10 | 0x4000;
      goto LAB_0082f8bc;
    }
  }
  lVar18 = *(long *)PTR_DAT_04bb2720;
  if (lVar18 == 0) {
    puVar19 = &DAT_055c04a0;
  }
  else {
    puVar19 = &DAT_055c04a0;
    if (*(long *)(lVar18 + 0x330) != 0) {
      puVar19 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar18 + 0x338));
      iVar12 = FUN_006bd550(*puVar19,0);
      puVar19 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar12 != 0x758f7eaf) {
        puVar19 = &DAT_055c04a0;
      }
    }
  }
  iVar12 = *(int *)(puVar19 + 7);
  if (((iVar12 != -0x7975b8e8) && (iVar12 != -0x17df00c3)) && (iVar12 != -0x3e092032)) {
    bVar6 = DAT_05ac0a90 != iVar12;
    bVar7 = DAT_05ac0aa0 != iVar12;
    bVar8 = DAT_05ac0ab0 != iVar12;
    bVar9 = DAT_05ac0ac0 != iVar12;
    bVar10 = DAT_05ac0ad0 != iVar12;
    bVar11 = DAT_05ac0ae0 != iVar12;
    if (((DAT_05ac0b00 != iVar12 &&
          (DAT_05ac0af0 != iVar12 && (bVar11 && (bVar10 && (bVar9 && (bVar8 && (bVar6 && bVar7))))))
         ) && (DAT_05ac0b10 != iVar12)) && (DAT_05ac0b20 != iVar12)) {
      if (iVar12 != -0x6efba09b) {
        return;
      }
      local_14 = 0;
      uVar15 = FUN_03773250(&local_14);
      if ((uVar15 & 1) == 0) {
        return;
      }
      lVar18 = *(long *)PTR_DAT_04bb39b0;
      pbVar16 = PTR_DAT_04bb32e0;
      if (lVar18 == 0) {
LAB_0082f8d8:
        if (*pbVar16 < 8) goto LAB_0082f950;
LAB_0082f8e4:
        if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_0082f948:
          pbVar16 = PTR_DAT_04bb5038;
          goto LAB_0082f950;
        }
        lVar18 = **(long **)PTR_DAT_04bb27d0;
        bVar17 = *(byte *)(lVar18 + 0x473);
        pbVar16 = PTR_DAT_04bb5038;
        if ((long)(char)bVar17 != 0xffffffffffffffff) {
          puVar3 = (uint *)(lVar18 + 0x48) + ((long)(char)bVar17 & 0xffffffffU) * 0x20;
          if (7 < bVar17) {
            puVar3 = (uint *)(lVar18 + 0x48);
          }
          if ((*puVar3 & 8) != 0) {
            pbVar16 = (byte *)(lVar18 + 0x471);
          }
        }
        local_18[0] = *pbVar16;
        if (7 < local_18[0]) goto LAB_0082f948;
      }
      else {
        if (*(int *)(lVar18 + 0x15c) != 0) {
          pbVar16 = (byte *)(lVar18 + 0x158);
        }
        if (7 < *pbVar16) {
          if ((*(int *)(lVar18 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
            pbVar16 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
            goto LAB_0082f8d8;
          }
          goto LAB_0082f8e4;
        }
LAB_0082f950:
        local_18[0] = *pbVar16;
        if (7 < local_18[0]) {
          local_18[0] = 0xff;
        }
      }
      uVar14 = FUN_02582fe0(local_18);
      uVar14 = (local_14 & 0x3ff) << 3 | (uVar14 & 7) << 0x10 | 0x2001;
      goto LAB_0082f8bc;
    }
    uVar15 = 2;
    if (DAT_05ac0ab0 != iVar12) {
      uVar15 = 3;
    }
    uVar2 = (ulong)(DAT_05ac0a90 != iVar12);
    if (bVar6 && bVar7) {
      uVar2 = uVar15;
    }
    uVar15 = 4;
    if (DAT_05ac0ad0 != iVar12) {
      uVar15 = 5;
    }
    if (bVar9 && (bVar8 && (bVar6 && bVar7))) {
      uVar2 = uVar15;
    }
    uVar15 = 6;
    if (DAT_05ac0af0 != iVar12) {
      uVar15 = 7;
    }
    if (bVar11 && (bVar10 && (bVar9 && (bVar8 && (bVar6 && bVar7))))) {
      uVar2 = uVar15;
    }
    uVar15 = 8;
    if (DAT_05ac0b10 != iVar12) {
      uVar15 = 9;
    }
    if (DAT_05ac0b00 != iVar12 &&
        (DAT_05ac0af0 != iVar12 && (bVar11 && (bVar10 && (bVar9 && (bVar8 && (bVar6 && bVar7)))))))
    {
      uVar2 = uVar15;
    }
    local_14 = (&DAT_05ac0a94)[uVar2 * 4];
    lVar18 = *(long *)PTR_DAT_04bb39b0;
    pbVar16 = PTR_DAT_04bb32e0;
    if (lVar18 == 0) {
LAB_0082f818:
      if (*pbVar16 < 8) goto LAB_0082f890;
LAB_0082f824:
      if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_0082f888:
        pbVar16 = PTR_DAT_04bb5038;
        goto LAB_0082f890;
      }
      lVar18 = **(long **)PTR_DAT_04bb27d0;
      bVar17 = *(byte *)(lVar18 + 0x473);
      pbVar16 = PTR_DAT_04bb5038;
      if ((long)(char)bVar17 != 0xffffffffffffffff) {
        puVar3 = (uint *)(lVar18 + 0x48) + ((long)(char)bVar17 & 0xffffffffU) * 0x20;
        if (7 < bVar17) {
          puVar3 = (uint *)(lVar18 + 0x48);
        }
        if ((*puVar3 & 8) != 0) {
          pbVar16 = (byte *)(lVar18 + 0x471);
        }
      }
      local_18[0] = *pbVar16;
      if (7 < local_18[0]) goto LAB_0082f888;
    }
    else {
      if (*(int *)(lVar18 + 0x15c) != 0) {
        pbVar16 = (byte *)(lVar18 + 0x158);
      }
      if (7 < *pbVar16) {
        if ((*(int *)(lVar18 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
          pbVar16 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
          goto LAB_0082f818;
        }
        goto LAB_0082f824;
      }
LAB_0082f890:
      local_18[0] = *pbVar16;
      if (7 < local_18[0]) {
        local_18[0] = 0xff;
      }
    }
    uVar14 = FUN_02582fe0(local_18);
    uVar14 = (local_14 & 0x3ff) << 3 | (uVar14 & 7) << 0x10 | 0x2000;
    goto LAB_0082f8bc;
  }
  lVar18 = *(long *)PTR_DAT_04bb27f8;
  if ((((*(ushort **)PTR_DAT_04bc3a48 == (ushort *)0x0) ||
       ((**(ushort **)PTR_DAT_04bc3a48 & 1) == 0)) || (*(long *)PTR_DAT_04bc1530 == 0)) ||
     (lVar20 = *(long *)(*(long *)PTR_DAT_04bc1530 + 8), lVar20 == 0)) {
    puVar1 = (ushort *)(lVar18 + 0x2c);
    if ((*(ushort *)(lVar18 + 0x28) & 0x40) != 0) {
      puVar1 = (ushort *)(lVar18 + 0x2a);
    }
    uVar14 = (uint)*puVar1;
  }
  else if ((*(long **)(lVar20 + 0x60) == (long *)0x0) ||
          (puVar19 = (undefined8 *)**(long **)(lVar20 + 0x60), puVar19 == (undefined8 *)0x0)) {
    uVar14 = (uint)*(ushort *)(*(long *)(lVar20 + 0x48) + *(long *)(lVar20 + 0x40) + 2);
  }
  else {
    uVar15 = (**(code **)*puVar19)();
    uVar14 = (uint)*(ushort *)(*(long *)(lVar20 + 0x48) + *(long *)(lVar20 + 0x40) + 2);
    if ((((uVar15 & 1) != 0) && (*(long *)(lVar20 + 0x60) != 0)) &&
       (puVar19 = *(undefined8 **)(*(long *)(lVar20 + 0x60) + 8), puVar19 != (undefined8 *)0x0)) {
      (**(code **)*puVar19)();
    }
  }
  if (499 < uVar14) {
    return;
  }
  lVar18 = *(long *)PTR_DAT_04bb39b0;
  pbVar16 = PTR_DAT_04bb32e0;
  if (lVar18 == 0) {
LAB_0082f5fc:
    if (*pbVar16 < 8) goto LAB_0082f674;
LAB_0082f608:
    if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_0082f66c:
      pbVar16 = PTR_DAT_04bb5038;
      goto LAB_0082f674;
    }
    lVar18 = **(long **)PTR_DAT_04bb27d0;
    bVar17 = *(byte *)(lVar18 + 0x473);
    pbVar16 = PTR_DAT_04bb5038;
    if ((long)(char)bVar17 != 0xffffffffffffffff) {
      puVar3 = (uint *)(lVar18 + 0x48) + ((long)(char)bVar17 & 0xffffffffU) * 0x20;
      if (7 < bVar17) {
        puVar3 = (uint *)(lVar18 + 0x48);
      }
      if ((*puVar3 & 8) != 0) {
        pbVar16 = (byte *)(lVar18 + 0x471);
      }
    }
    bVar17 = *pbVar16;
    bVar6 = 7 < bVar17;
    if (bVar6) {
      bVar17 = 0xff;
    }
    local_14 = CONCAT31(local_14._1_3_,bVar17);
    if (bVar6) goto LAB_0082f66c;
  }
  else {
    if (*(int *)(lVar18 + 0x15c) != 0) {
      pbVar16 = (byte *)(lVar18 + 0x158);
    }
    if (7 < *pbVar16) {
      if ((*(int *)(lVar18 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar16 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_0082f5fc;
      }
      goto LAB_0082f608;
    }
LAB_0082f674:
    bVar17 = *pbVar16;
    if (7 < bVar17) {
      bVar17 = 0xff;
    }
    local_14 = CONCAT31(local_14._1_3_,bVar17);
  }
  uVar13 = FUN_02582fe0(&local_14);
  uVar14 = (uVar14 & 0x3ff) << 3 | (uVar13 & 7) << 0x10;
LAB_0082f8bc:
  *param_1 = uVar14;
  return;
}


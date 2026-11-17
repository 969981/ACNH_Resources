
void FUN_02b07dd0(long param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  uint uVar6;
  short sVar7;
  undefined *puVar8;
  undefined *puVar9;
  byte bVar10;
  uint uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  long lVar14;
  char cVar15;
  int *piVar16;
  uint *puVar17;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined4 local_140;
  byte local_13c;
  undefined *local_138;
  char *local_130;
  undefined *local_128;
  char *local_120;
  undefined *local_118;
  char *local_110;
  undefined *local_108;
  char *local_100;
  undefined *local_f8;
  undefined *local_d8;
  undefined *local_b8;
  long lStack_b0;
  undefined1 *local_a8;
  undefined8 uStack_a0;
  undefined *local_98;
  long lStack_90;
  undefined1 *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  char *pcStack_70;
  
  puVar9 = PTR_DAT_04bbba70;
  puVar5 = PTR_DAT_04bb2120;
  lVar14 = *(long *)PTR_DAT_04bb5008;
  uVar11 = (uint)*(ushort *)(param_1 + 0x304) - (uint)*(ushort *)(lVar14 + 0x9f0);
  if (uVar11 < *(uint *)(lVar14 + 0x9d0)) {
    puVar17 = *(uint **)(*(long *)(lVar14 + 0x9d8) + (long)(int)uVar11 * 8);
  }
  else {
    puVar17 = (uint *)0x0;
  }
  local_138 = PTR_DAT_04bb2020 + 0x10;
  local_130 = PTR_DAT_04bb2120;
  local_120 = PTR_DAT_04bb2120;
  local_110 = PTR_DAT_04bb2120;
  local_f8 = PTR_DAT_04bbba70 + 0x10;
  local_100 = PTR_DAT_04bb2120;
  local_140 = 0;
  local_b8 = PTR_DAT_04bbba78 + 0x10;
  local_150 = *(undefined8 *)(*(long *)(param_1 + 0x48) + 0x240);
  uStack_148 = *(undefined8 *)(*(long *)(param_1 + 0x48) + 0x60);
  pcStack_70 = "Tutorial1PTentLightON";
  local_128 = local_138;
  local_118 = local_138;
  local_108 = local_138;
  local_d8 = local_f8;
  local_98 = local_b8;
  local_78 = local_138;
  uVar12 = FUN_0273f0a0(&local_78);
  bVar10 = 0;
  if ((uVar12 & 1) != 0) {
    sVar7 = *(short *)PTR_DAT_04bb6298;
    if (sVar7 != -1) {
      local_78 = (undefined *)CONCAT44(local_78._4_4_,0x20);
      puVar1 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar7 * 8;
      if (0xff < (uint)(int)sVar7) {
        puVar1 = PTR_DAT_04bc39f8;
      }
      if ((*(uint *)(puVar1 + 4) & 1) != 0) {
        local_78 = (undefined *)((ulong)local_78._4_4_ << 0x20);
        lVar14 = FUN_02643020();
        if (lVar14 == 0) {
          bVar10 = 0;
        }
        else {
          lVar4 = lVar14 + 0xe0 + ((ulong)local_78 & 0xffffffff) * 0x2488;
          if (5 < (uint)local_78) {
            lVar4 = lVar14 + 0xe0;
          }
          if ((*(long **)(lVar4 + 0x1ec8) == (long *)0x0) ||
             (puVar13 = (undefined8 *)**(long **)(lVar4 + 0x1ec8), puVar13 == (undefined8 *)0x0)) {
            uVar11 = 1;
          }
          else {
            uVar11 = (**(code **)*puVar13)();
            uVar11 = uVar11 ^ 1;
          }
          local_78 = (undefined *)
                     (CONCAT44(local_78._4_4_,
                               (uint)(*(byte *)(*(long *)(lVar4 + 0x1eb0) +
                                                *(long *)(lVar4 + 0x1ea8) + 0x20) >> 1)) &
                     0xffffffff00000007);
          bVar10 = (uint)local_78 != 2;
          if ((((uVar11 & 1) == 0) && (*(long *)(lVar4 + 0x1ec8) != 0)) &&
             (puVar13 = *(undefined8 **)(*(long *)(lVar4 + 0x1ec8) + 8),
             puVar13 != (undefined8 *)0x0)) {
            (**(code **)*puVar13)();
          }
        }
        goto LAB_02b07f48;
      }
    }
    bVar10 = FUN_02b5a0b0(*(undefined4 *)(param_1 + 0x300));
  }
LAB_02b07f48:
  local_13c = bVar10 & 1;
  local_130 = "InteriorLightToON";
  local_120 = "InteriorLightON";
  local_110 = "InteriorLightToOFF";
  local_100 = "InteriorLightOFF";
  local_b8 = &DAT_04aa1620;
  local_a8 = &LAB_02b09cd8;
  uStack_a0 = 0;
  local_98 = &DAT_04aa1620;
  local_88 = &LAB_02b09b94;
  uStack_80 = 0;
  lStack_b0 = param_1;
  lStack_90 = param_1;
  FUN_02b556e0(param_1 + 0x310,&local_150);
  puVar8 = PTR_DAT_04bb5be8;
  puVar1 = PTR_DAT_04bb5be0;
  if ((puVar17 != (uint *)0x0) && (uVar11 = *puVar17, uVar11 != 0)) {
    cVar15 = *PTR_DAT_04bb5be0;
    do {
      uVar12 = (ulong)uVar11;
      if (cVar15 != '\0') {
        uVar11 = *(uint *)(puVar8 + 0x20);
        if ((int)uVar11 < 0) {
          if ((uVar11 == 0xffffffff) && (uVar12 != 0)) goto LAB_02b08030;
        }
        else if (((char *)((ulong)uVar11 + (long)puVar17) != (char *)0x0) &&
                (*(char *)((ulong)uVar11 + (long)puVar17) != '\0')) {
          local_f8 = puVar9 + 0x10;
          local_138 = PTR_DAT_04bb2020 + 0x10;
          local_130 = puVar5;
          local_120 = puVar5;
          local_110 = puVar5;
          local_100 = puVar5;
          local_b8 = PTR_DAT_04bbba78 + 0x10;
          pcStack_70 = "Tutorial1PTentLightON";
          local_150 = *(undefined8 *)(*(long *)(param_1 + 0x48) + 0x240);
          uStack_148 = *(undefined8 *)(*(long *)(param_1 + 0x48) + 0x60);
          local_140 = 1;
          local_128 = local_138;
          local_118 = local_138;
          local_108 = local_138;
          local_d8 = local_f8;
          local_98 = local_b8;
          local_78 = local_138;
          uVar12 = FUN_0273f0a0(&local_78);
          if ((uVar12 & 1) == 0) {
            bVar10 = 0;
          }
          else {
            sVar7 = *(short *)PTR_DAT_04bb6298;
            if (sVar7 != -1) {
              local_78 = (undefined *)CONCAT44(local_78._4_4_,0x20);
              puVar3 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar7 * 8;
              if (0xff < (uint)(int)sVar7) {
                puVar3 = PTR_DAT_04bc39f8;
              }
              if ((*(uint *)(puVar3 + 4) & 1) != 0) {
                local_78 = (undefined *)((ulong)local_78._4_4_ << 0x20);
                lVar14 = FUN_02643020();
                bVar10 = 0;
                if (lVar14 != 0) {
                  lVar4 = lVar14 + 0xe0 + ((ulong)local_78 & 0xffffffff) * 0x2488;
                  if (5 < (uint)local_78) {
                    lVar4 = lVar14 + 0xe0;
                  }
                  if ((*(long **)(lVar4 + 0x1ec8) == (long *)0x0) ||
                     (puVar13 = (undefined8 *)**(long **)(lVar4 + 0x1ec8),
                     puVar13 == (undefined8 *)0x0)) {
                    uVar11 = 1;
                  }
                  else {
                    uVar11 = (**(code **)*puVar13)();
                    uVar11 = uVar11 ^ 1;
                  }
                  local_78 = (undefined *)
                             (CONCAT44(local_78._4_4_,
                                       (uint)(*(byte *)(*(long *)(lVar4 + 0x1eb0) +
                                                        *(long *)(lVar4 + 0x1ea8) + 0x20) >> 1)) &
                             0xffffffff00000007);
                  bVar10 = (uint)local_78 != 2;
                  if ((((uVar11 & 1) == 0) && (*(long *)(lVar4 + 0x1ec8) != 0)) &&
                     (puVar13 = *(undefined8 **)(*(long *)(lVar4 + 0x1ec8) + 8),
                     puVar13 != (undefined8 *)0x0)) {
                    (**(code **)*puVar13)();
                  }
                }
                goto LAB_02b0821c;
              }
            }
            bVar10 = FUN_02b5a0b0(*(undefined4 *)(param_1 + 0x300));
          }
LAB_02b0821c:
          local_13c = bVar10 & 1;
          local_130 = "ExteriorLightToON";
          local_120 = "ExteriorLightON";
          local_110 = "ExteriorLightToOFF";
          local_100 = "ExteriorLightOFF";
          local_b8 = &DAT_04aa1620;
          local_a8 = &LAB_02b09cd8;
          uStack_a0 = 0;
          local_98 = &DAT_04aa1620;
          local_88 = &LAB_02b09b94;
          uStack_80 = 0;
          lStack_b0 = param_1;
          lStack_90 = param_1;
          FUN_02b556e0(param_1 + 0x858,&local_150);
        }
LAB_02b08270:
        uVar11 = *puVar17;
        if (uVar11 == 0) {
          return;
        }
        cVar15 = *puVar1;
        goto LAB_02b08290;
      }
      cVar15 = '\x01';
      *(undefined8 *)puVar8 = 0xffffffffffffffff;
      *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
      *puVar1 = 1;
      *(undefined4 *)(puVar8 + 0x20) = 0xffffffff;
      *(undefined8 *)(puVar8 + 0x10) = 0xffffffffffffffff;
      *(undefined8 *)(puVar8 + 0x18) = 0xffffffffffffffff;
      uVar12 = (ulong)*puVar17;
      if (uVar12 == 0) goto LAB_02b08270;
LAB_02b08030:
      lVar14 = (long)puVar17 - uVar12;
      if (lVar14 == 0) goto LAB_02b08270;
      lVar4 = 0xc;
      if (*(char *)(lVar14 + 10) != '\0') {
        lVar4 = 0x1c;
      }
      if (lVar4 + lVar14 == 0) goto LAB_02b08270;
      uVar12 = (ulong)*(ushort *)(lVar14 + 8);
      *(undefined4 *)(puVar8 + 0x20) = 0xfffffffe;
      if (uVar12 == 0) goto LAB_02b08270;
      piVar16 = (int *)(lVar4 + lVar14 + 4);
      while (piVar16[-1] != 0x424930f) {
        piVar16 = piVar16 + 2;
        uVar12 = uVar12 - 1;
        if (uVar12 == 0) goto LAB_02b08270;
      }
      iVar2 = 0;
      if (*piVar16 != -1) {
        iVar2 = *piVar16;
      }
      *(int *)(puVar8 + 0x20) = iVar2;
      uVar11 = *puVar17;
    } while (uVar11 != 0);
  }
  return;
LAB_02b08290:
  uVar12 = (ulong)uVar11;
  if (cVar15 != '\0') {
    uVar11 = *(uint *)(puVar8 + 0x1c);
    if ((int)uVar11 < 0) {
      if ((uVar11 == 0xffffffff) && (uVar12 != 0)) goto LAB_02b082d0;
    }
    else if (((char *)((ulong)uVar11 + (long)puVar17) != (char *)0x0) &&
            (*(char *)((ulong)uVar11 + (long)puVar17) != '\0')) {
      local_f8 = puVar9 + 0x10;
      local_150 = *(undefined8 *)(*(long *)(param_1 + 0x48) + 0x240);
      uStack_148 = *(undefined8 *)(*(long *)(param_1 + 0x48) + 0x60);
      local_138 = PTR_DAT_04bb2020 + 0x10;
      local_140 = 2;
      local_128 = local_138;
      local_118 = local_138;
      local_108 = local_138;
      local_d8 = local_f8;
      local_13c = FUN_02b09e20(param_1);
      local_130 = "CurtainOpen";
      local_13c = local_13c & 1;
      local_120 = "CurtainOpenWait";
      local_110 = "CurtainClose";
      local_b8 = &DAT_04aa1648;
      local_100 = "CurtainCloseWait";
      local_98 = &DAT_04aa1670;
      lStack_b0 = param_1;
      lStack_90 = param_1;
      FUN_02b556e0(param_1 + 0xda0,&local_150);
    }
LAB_02b083ec:
    uVar11 = *puVar17;
    if (uVar11 == 0) {
      return;
    }
    cVar15 = *puVar1;
    goto LAB_02b08404;
  }
  cVar15 = '\x01';
  *(undefined8 *)puVar8 = 0xffffffffffffffff;
  *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
  *puVar1 = 1;
  *(undefined4 *)(puVar8 + 0x20) = 0xffffffff;
  *(undefined8 *)(puVar8 + 0x10) = 0xffffffffffffffff;
  *(undefined8 *)(puVar8 + 0x18) = 0xffffffffffffffff;
  uVar12 = (ulong)*puVar17;
  if (uVar12 == 0) goto LAB_02b083ec;
LAB_02b082d0:
  lVar14 = (long)puVar17 - uVar12;
  if (lVar14 == 0) goto LAB_02b083ec;
  lVar4 = 0xc;
  if (*(char *)(lVar14 + 10) != '\0') {
    lVar4 = 0x1c;
  }
  if (lVar4 + lVar14 == 0) goto LAB_02b083ec;
  uVar12 = (ulong)*(ushort *)(lVar14 + 8);
  *(undefined4 *)(puVar8 + 0x1c) = 0xfffffffe;
  if (uVar12 == 0) goto LAB_02b083ec;
  piVar16 = (int *)(lVar4 + lVar14 + 4);
  while (piVar16[-1] != -0x61e636b4) {
    piVar16 = piVar16 + 2;
    uVar12 = uVar12 - 1;
    if (uVar12 == 0) goto LAB_02b083ec;
  }
  iVar2 = 0;
  if (*piVar16 != -1) {
    iVar2 = *piVar16;
  }
  *(int *)(puVar8 + 0x1c) = iVar2;
  uVar11 = *puVar17;
  if (uVar11 == 0) {
    return;
  }
  goto LAB_02b08290;
LAB_02b08404:
  if (cVar15 == '\0') {
    cVar15 = '\x01';
    *(undefined8 *)puVar8 = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
    *puVar1 = 1;
    *(undefined4 *)(puVar8 + 0x20) = 0xffffffff;
    *(undefined8 *)(puVar8 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x18) = 0xffffffffffffffff;
    uVar11 = *puVar17;
  }
  else {
    uVar6 = *(uint *)(puVar8 + 0x1c);
    if (-1 < (int)uVar6) {
      if ((char *)((ulong)uVar6 + (long)puVar17) == (char *)0x0) {
        return;
      }
      if (*(char *)((ulong)uVar6 + (long)puVar17) == '\0') {
        return;
      }
      puVar1 = PTR_DAT_04bb2020 + 0x10;
      local_f8 = puVar9 + 0x10;
      local_130 = puVar5;
      local_120 = puVar5;
      local_110 = puVar5;
      local_100 = puVar5;
      local_b8 = PTR_DAT_04bbba78 + 0x10;
      local_150 = *(undefined8 *)(*(long *)(param_1 + 0x48) + 0x240);
      uStack_148 = *(undefined8 *)(*(long *)(param_1 + 0x48) + 0x60);
      local_140 = 3;
      local_138 = puVar1;
      local_128 = puVar1;
      local_118 = puVar1;
      local_108 = puVar1;
      local_d8 = local_f8;
      local_98 = local_b8;
      uVar12 = FUN_02b09e20(param_1);
      if ((uVar12 & 1) == 0) {
        pcStack_70 = "Tutorial1PTentLightON";
        local_78 = puVar1;
        uVar12 = FUN_0273f0a0(&local_78);
        if ((uVar12 & 1) != 0) {
          sVar7 = *(short *)PTR_DAT_04bb6298;
          if (sVar7 == -1) {
LAB_02b085c8:
            uVar12 = FUN_02b5a0b0(*(undefined4 *)(param_1 + 0x300));
            if ((uVar12 & 1) == 0) goto LAB_02b08684;
          }
          else {
            local_78 = (undefined *)CONCAT44(local_78._4_4_,0x20);
            puVar5 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar7 * 8;
            if (0xff < (uint)(int)sVar7) {
              puVar5 = PTR_DAT_04bc39f8;
            }
            if ((*(uint *)(puVar5 + 4) & 1) == 0) goto LAB_02b085c8;
            local_78 = (undefined *)((ulong)local_78._4_4_ << 0x20);
            lVar14 = FUN_02643020();
            if (lVar14 == 0) goto LAB_02b08684;
            lVar4 = lVar14 + 0xe0 + ((ulong)local_78 & 0xffffffff) * 0x2488;
            if (5 < (uint)local_78) {
              lVar4 = lVar14 + 0xe0;
            }
            if ((*(long **)(lVar4 + 0x1ec8) == (long *)0x0) ||
               (puVar13 = (undefined8 *)**(long **)(lVar4 + 0x1ec8), puVar13 == (undefined8 *)0x0))
            {
              uVar11 = 1;
            }
            else {
              uVar11 = (**(code **)*puVar13)();
              uVar11 = uVar11 ^ 1;
            }
            local_78 = (undefined *)
                       (CONCAT44(local_78._4_4_,
                                 (uint)(*(byte *)(*(long *)(lVar4 + 0x1eb0) +
                                                  *(long *)(lVar4 + 0x1ea8) + 0x20) >> 1)) &
                       0xffffffff00000007);
            iVar2 = (uint)local_78;
            if ((((uVar11 & 1) == 0) && (*(long *)(lVar4 + 0x1ec8) != 0)) &&
               (puVar13 = *(undefined8 **)(*(long *)(lVar4 + 0x1ec8) + 8),
               puVar13 != (undefined8 *)0x0)) {
              (**(code **)*puVar13)();
            }
            if (iVar2 == 2) goto LAB_02b08684;
          }
          local_13c = 1;
          goto LAB_02b08688;
        }
      }
LAB_02b08684:
      local_13c = 0;
LAB_02b08688:
      local_130 = "CurtainLightToON";
      local_120 = "CurtainLightON";
      local_100 = "CurtainLightOFF";
      local_b8 = &DAT_04aa1698;
      local_110 = "CurtainLightToOFF";
      local_98 = &DAT_04aa16c0;
      lStack_b0 = param_1;
      lStack_90 = param_1;
      FUN_02b556e0(param_1 + 0x12e8,&local_150);
      return;
    }
    if (uVar6 != 0xffffffff) {
      return;
    }
  }
  if ((ulong)uVar11 == 0) {
    return;
  }
  lVar14 = (long)puVar17 - (ulong)uVar11;
  if (lVar14 == 0) {
    return;
  }
  lVar4 = 0xc;
  if (*(char *)(lVar14 + 10) != '\0') {
    lVar4 = 0x1c;
  }
  if (lVar4 + lVar14 == 0) {
    return;
  }
  uVar12 = (ulong)*(ushort *)(lVar14 + 8);
  *(undefined4 *)(puVar8 + 0x1c) = 0xfffffffe;
  if (uVar12 == 0) {
    return;
  }
  piVar16 = (int *)(lVar4 + lVar14 + 4);
  while (piVar16[-1] != -0x61e636b4) {
    piVar16 = piVar16 + 2;
    uVar12 = uVar12 - 1;
    if (uVar12 == 0) {
      return;
    }
  }
  iVar2 = 0;
  if (*piVar16 != -1) {
    iVar2 = *piVar16;
  }
  *(int *)(puVar8 + 0x1c) = iVar2;
  uVar11 = *puVar17;
  if (uVar11 == 0) {
    return;
  }
  goto LAB_02b08404;
}



undefined8 FUN_0123bbf0(undefined4 param_1,undefined2 *param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ushort uVar4;
  short sVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined2 uVar9;
  uint uVar10;
  uint uVar11;
  void *pvVar12;
  long lVar13;
  ulong uVar14;
  char cVar15;
  long lVar16;
  char cVar17;
  uint *puVar18;
  short sVar19;
  int iVar20;
  int *piVar21;
  char cVar22;
  uint *puVar23;
  undefined4 local_808;
  undefined4 uStack_804;
  undefined *local_800;
  undefined1 auStack_7f8 [1876];
  uint local_a4;
  uint local_a0;
  uint local_9c;
  int local_98;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 *puStack_80;
  
  local_800 = PTR_DAT_04bbfe60 + 0x10;
  local_8c = param_1;
  memset(auStack_7f8,0,0x754);
  uVar10 = nn::os::GetSystemTick();
  local_a4 = (uVar10 ^ uVar10 >> 0x1e) * 0x6c078965 + 1;
  local_a0 = (local_a4 ^ local_a4 >> 0x1e) * 0x6c078965 + 2;
  local_9c = (local_a0 ^ local_a0 >> 0x1e) * 0x6c078965 + 3;
  local_98 = (local_9c ^ local_9c >> 0x1e) * 0x6c078965 + 4;
  pvVar12 = (void *)FUN_01a451fc(&local_800);
  memset(pvVar12,0,0x754);
  pvVar12 = (void *)(**(code **)(local_800 + 0x18))(&local_800);
  memset(pvVar12,0,0x754);
  puStack_80 = &local_8c;
  local_88 = &PTR_FUN_049ff4e8;
  FUN_008a1ba0(&local_800,&local_88);
  lVar13 = (**(code **)(local_800 + 0x20))(&local_800);
  lVar16 = 0;
  uVar10 = 0;
  do {
    puVar18 = (uint *)(lVar13 + lVar16);
    lVar16 = lVar16 + 4;
    uVar11 = *puVar18 - (*puVar18 >> 1 & 0x55555555);
    uVar11 = (uVar11 >> 2 & 0x33333333) + (uVar11 & 0x33333333);
    uVar11 = uVar11 + (uVar11 >> 4) & 0xf0f0f0f;
    uVar11 = uVar11 + (uVar11 >> 8);
    uVar10 = (uVar11 + (uVar11 >> 0x10) & 0x3f) + uVar10;
  } while (lVar16 != 0x754);
  local_88 = (undefined **)0xa42;
  FUN_0277d4ac(&local_88);
  if (uVar10 == 0) {
    uVar9 = FUN_0277d6c4(&local_88);
    *param_2 = uVar9;
  }
  else {
    uVar11 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
    DAT_05582b70 = DAT_05582b74;
    DAT_05582b74 = DAT_05582b78;
    uVar11 = uVar11 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar11 ^ DAT_05582b7c;
    DAT_05582b78 = DAT_05582b7c;
    DAT_05582b7c = uVar11;
    FUN_00889f80(&local_808,&local_800,(int)((ulong)uVar11 * (ulong)uVar10 >> 0x20) + 1);
    local_88 = (undefined **)CONCAT44(uStack_804,local_808);
    lVar16 = (**(code **)(local_800 + 0x18))(&local_800);
    uVar11 = FUN_0277d6c4(&local_88);
    if ((uVar11 >> 3 & 0x1fff) < 0x753) {
      lVar13 = (ulong)((uVar11 & 0xffff) >> 5) * 4;
      *(uint *)(lVar16 + lVar13) =
           *(uint *)(lVar16 + lVar13) & (1 << (ulong)(uVar11 & 0x1f) ^ 0xffffffffU);
    }
    uVar9 = FUN_0277d6c4(&local_88);
    *param_2 = uVar9;
    if (uVar10 - 1 != 0) {
      uVar11 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
      DAT_05582b70 = DAT_05582b74;
      DAT_05582b74 = DAT_05582b78;
      uVar11 = uVar11 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar11 ^ DAT_05582b7c;
      DAT_05582b78 = DAT_05582b7c;
      DAT_05582b7c = uVar11;
      FUN_00889f80(&local_808,&local_800,(int)((ulong)uVar11 * (ulong)(uVar10 - 1) >> 0x20) + 1);
      local_88 = (undefined **)CONCAT44(uStack_804,local_808);
      lVar16 = (**(code **)(local_800 + 0x18))(&local_800);
      uVar11 = FUN_0277d6c4(&local_88);
      if ((uVar11 >> 3 & 0x1fff) < 0x753) {
        lVar13 = (ulong)((uVar11 & 0xffff) >> 5) * 4;
        *(uint *)(lVar16 + lVar13) =
             *(uint *)(lVar16 + lVar13) & (1 << (ulong)(uVar11 & 0x1f) ^ 0xffffffffU);
      }
      uVar9 = FUN_0277d6c4(&local_88);
      param_2[1] = uVar9;
      if (uVar10 - 2 != 0) {
        uVar11 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
        DAT_05582b70 = DAT_05582b74;
        DAT_05582b74 = DAT_05582b78;
        uVar11 = uVar11 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar11 ^ DAT_05582b7c;
        DAT_05582b78 = DAT_05582b7c;
        DAT_05582b7c = uVar11;
        FUN_00889f80(&local_808,&local_800,(int)((ulong)uVar11 * (ulong)(uVar10 - 2) >> 0x20) + 1);
        local_88 = (undefined **)CONCAT44(uStack_804,local_808);
        lVar16 = (**(code **)(local_800 + 0x18))(&local_800);
        uVar10 = FUN_0277d6c4(&local_88);
        if ((uVar10 >> 3 & 0x1fff) < 0x753) {
          lVar13 = (ulong)((uVar10 & 0xffff) >> 5) * 4;
          *(uint *)(lVar16 + lVar13) =
               *(uint *)(lVar16 + lVar13) & (1 << (ulong)(uVar10 & 0x1f) ^ 0xffffffffU);
        }
      }
      goto LAB_0123bf38;
    }
  }
  uVar9 = FUN_0277d6c4(&local_88);
  param_2[1] = uVar9;
LAB_0123bf38:
  uVar9 = FUN_0277d6c4(&local_88);
  puVar8 = PTR_DAT_04bbbc78;
  lVar16 = 0;
  param_2[2] = uVar9;
LAB_0123bf64:
  if (((DAT_05150358 != 0) && (*(long *)(DAT_05150358 + 0xb0) != 0)) &&
     (puVar18 = *(uint **)(*(long *)(DAT_05150358 + 0xb0) + 8), puVar18 != (uint *)0x0)) {
    sVar5 = param_2[lVar16];
    uVar10 = *(uint *)(DAT_05150358 + 0x1c0);
    if ((0 < (int)uVar10) || (uVar10 = *puVar18, uVar10 != 0)) {
      uVar11 = 0;
      lVar13 = DAT_05150358;
      do {
        if ((int)*(uint *)(lVar13 + 0x1c0) < 1) {
          if ((((*(long *)(lVar13 + 0xb0) != 0) &&
               (puVar18 = *(uint **)(*(long *)(lVar13 + 0xb0) + 8), puVar18 != (uint *)0x0)) &&
              ((*(uint *)(lVar13 + 200) <= uVar11 ||
               (*(char *)(*(long *)(lVar13 + 0xd0) + (long)(int)uVar11) != '\0')))) &&
             (((uVar11 < *puVar18 && (puVar18[1] != 0)) && ((ushort)puVar18[2] != 0)))) {
            iVar20 = 0xc;
            if (*(char *)((long)puVar18 + 10) != '\0') {
              iVar20 = 0x1c;
            }
            puVar18 = (uint *)((ulong)(puVar18[1] * uVar11 + (uint)(ushort)puVar18[2] * 8 + iVar20)
                              + (long)puVar18);
            goto joined_r0x0123c138;
          }
        }
        else if (uVar11 < *(uint *)(lVar13 + 0x1c0)) {
          uVar1 = uVar11;
          if (*(uint *)(lVar13 + 0x1b0) <= uVar11) {
            uVar1 = 0;
          }
          puVar18 = *(uint **)(*(long *)(lVar13 + 0x1b8) + (ulong)uVar1 * 8);
joined_r0x0123c138:
          if ((puVar18 != (uint *)0x0) &&
             (uVar14 = FUN_012375e0(puVar18), lVar13 = DAT_05150358, (uVar14 & 1) != 0)) {
            if (*puVar18 != 0) {
              cVar17 = DAT_051513c0;
              while (puVar7 = PTR_DAT_04bbbc70, cVar17 == '\0') {
                cVar17 = '\x01';
                *(undefined8 *)puVar8 = 0xffffffffffffffff;
                *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
                *(undefined4 *)(puVar8 + 0x60) = 0xffffffff;
                *puVar7 = 1;
                *(undefined8 *)(puVar8 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar8 + 0x18) = 0xffffffffffffffff;
                *(undefined8 *)(puVar8 + 0x20) = 0xffffffffffffffff;
                *(undefined8 *)(puVar8 + 0x28) = 0xffffffffffffffff;
                *(undefined8 *)(puVar8 + 0x30) = 0xffffffffffffffff;
                *(undefined8 *)(puVar8 + 0x38) = 0xffffffffffffffff;
                *(undefined8 *)(puVar8 + 0x40) = 0xffffffffffffffff;
                *(undefined8 *)(puVar8 + 0x48) = 0xffffffffffffffff;
                *(undefined8 *)(puVar8 + 0x50) = 0xffffffffffffffff;
                *(undefined8 *)(puVar8 + 0x58) = 0xffffffffffffffff;
LAB_0123c040:
                puVar23 = (uint *)(ulong)*puVar18;
                sVar19 = -2;
                if ((*puVar18 == 0) || (puVar18 == puVar23)) goto LAB_0123c14c;
                lVar3 = 0xc;
                if (*(char *)((long)puVar18 + (10 - (long)puVar23)) != '\0') {
                  lVar3 = 0x1c;
                }
                lVar3 = (long)puVar18 + (lVar3 - (long)puVar23);
                if (lVar3 == 0) goto LAB_0123c158;
                uVar14 = (ulong)*(ushort *)((long)puVar18 + (8 - (long)puVar23));
                *(undefined4 *)(puVar8 + 0x10) = 0xfffffffe;
                if (uVar14 == 0) goto LAB_0123c158;
                piVar21 = (int *)(lVar3 + 4);
                while (piVar21[-1] != 0x6ac5a6df) {
                  piVar21 = piVar21 + 2;
                  uVar14 = uVar14 - 1;
                  if (uVar14 == 0) goto LAB_0123c158;
                }
                iVar20 = 0;
                if (*piVar21 != -1) {
                  iVar20 = *piVar21;
                }
                *(int *)(puVar8 + 0x10) = iVar20;
                if (*puVar18 == 0) goto LAB_0123c158;
              }
              uVar1 = *(uint *)(puVar8 + 0x10);
              if ((int)uVar1 < 0) {
                if (uVar1 == 0xffffffff) goto LAB_0123c040;
              }
              else if ((short *)((ulong)uVar1 + (long)puVar18) != (short *)0x0) {
                sVar19 = *(short *)((ulong)uVar1 + (long)puVar18);
LAB_0123c14c:
                if (sVar19 != sVar5) goto LAB_0123bfa0;
                goto LAB_0123c164;
              }
            }
LAB_0123c158:
            if (sVar5 == -2) {
LAB_0123c164:
              if (*puVar18 != 0) {
                cVar17 = *PTR_DAT_04bbbc70;
                goto LAB_0123c194;
              }
              uVar10 = 0;
              goto LAB_0123c2a8;
            }
          }
        }
LAB_0123bfa0:
        uVar11 = uVar11 + 1;
      } while (uVar11 != uVar10);
    }
  }
  uVar10 = 0xa42;
  goto LAB_0123c264;
LAB_0123c194:
  puVar7 = PTR_DAT_04bbbc70;
  if (cVar17 == '\0') {
    cVar17 = '\x01';
    *(undefined8 *)puVar8 = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
    *(undefined4 *)(puVar8 + 0x60) = 0xffffffff;
    *puVar7 = 1;
    *(undefined8 *)(puVar8 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x18) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x20) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x28) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x30) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x38) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x40) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x48) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x50) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x58) = 0xffffffffffffffff;
  }
  else {
    uVar10 = *(uint *)(puVar8 + 0x40);
    if (-1 < (int)uVar10) {
      if ((ushort *)((ulong)uVar10 + (long)puVar18) != (ushort *)0x0) {
        uVar10 = (uint)*(ushort *)((ulong)uVar10 + (long)puVar18);
        goto LAB_0123c2a8;
      }
LAB_0123c2a4:
      uVar10 = 0;
LAB_0123c2a8:
      uVar4 = *(ushort *)(lVar13 + 0x1f8);
      uVar1 = uVar10 - uVar4;
      uVar11 = *(uint *)(lVar13 + 0x1d8);
      if (uVar1 < uVar11) {
        lVar13 = *(long *)(lVar13 + 0x1e0);
        puVar18 = *(uint **)(lVar13 + (long)(int)uVar1 * 8);
        if (puVar18 != (uint *)0x0) {
          cVar17 = DAT_051513c0;
          cVar15 = DAT_051513c0;
          do {
            uVar10 = *puVar18;
            puVar6 = PTR_DAT_04bbbc70;
            cVar22 = cVar17;
            while (PTR_DAT_04bbbc70 = puVar6, uVar10 != 0) {
              if (cVar22 != '\0') {
                uVar10 = *(uint *)(puVar8 + 0x4c);
                if ((int)uVar10 < 0) {
                  if (uVar10 == 0xffffffff) goto LAB_0123c338;
                }
                else if (((char *)((ulong)uVar10 + (long)puVar18) != (char *)0x0) &&
                        (*(char *)((ulong)uVar10 + (long)puVar18) == '\x03')) {
                  if (*puVar18 != 0) goto LAB_0123c4e4;
                  goto LAB_0123c5b8;
                }
LAB_0123c3d0:
                cVar22 = cVar17;
                if (*puVar18 != 0) goto LAB_0123c3dc;
                break;
              }
              cVar15 = '\x01';
              *(undefined8 *)puVar8 = 0xffffffffffffffff;
              *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
              cVar22 = '\x01';
              *(undefined8 *)(puVar8 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(puVar8 + 0x18) = 0xffffffffffffffff;
              *(undefined4 *)(puVar8 + 0x60) = 0xffffffff;
              *puVar6 = 1;
              cVar17 = '\x01';
              *(undefined8 *)(puVar8 + 0x20) = 0xffffffffffffffff;
              *(undefined8 *)(puVar8 + 0x28) = 0xffffffffffffffff;
              *(undefined8 *)(puVar8 + 0x30) = 0xffffffffffffffff;
              *(undefined8 *)(puVar8 + 0x38) = 0xffffffffffffffff;
              *(undefined8 *)(puVar8 + 0x40) = 0xffffffffffffffff;
              *(undefined8 *)(puVar8 + 0x48) = 0xffffffffffffffff;
              *(undefined8 *)(puVar8 + 0x50) = 0xffffffffffffffff;
              *(undefined8 *)(puVar8 + 0x58) = 0xffffffffffffffff;
LAB_0123c338:
              lVar3 = (long)puVar18 - (ulong)*puVar18;
              if ((*puVar18 == 0) || (lVar3 == 0)) goto LAB_0123c3d0;
              lVar2 = 0xc;
              if (*(char *)(lVar3 + 10) != '\0') {
                lVar2 = 0x1c;
              }
              if (lVar2 + lVar3 == 0) goto LAB_0123c3d0;
              uVar14 = (ulong)*(ushort *)(lVar3 + 8);
              *(undefined4 *)(puVar8 + 0x4c) = 0xfffffffe;
              if (uVar14 == 0) goto LAB_0123c3d0;
              piVar21 = (int *)(lVar2 + lVar3 + 4);
              while (piVar21[-1] != -0xa58ccc9) {
                piVar21 = piVar21 + 2;
                uVar14 = uVar14 - 1;
                if (uVar14 == 0) goto LAB_0123c3d0;
              }
              iVar20 = 0;
              if (*piVar21 != -1) {
                iVar20 = *piVar21;
              }
              *(int *)(puVar8 + 0x4c) = iVar20;
              puVar6 = PTR_DAT_04bbbc70;
              uVar10 = *puVar18;
            }
LAB_0123c4c0:
            uVar10 = 0xfffe;
LAB_0123c4c4:
            uVar1 = uVar10 - uVar4;
          } while ((uVar1 < uVar11) &&
                  (puVar18 = *(uint **)(lVar13 + (long)(int)uVar1 * 8), puVar18 != (uint *)0x0));
        }
      }
      goto LAB_0123c264;
    }
    if (uVar10 != 0xffffffff) goto LAB_0123c2a4;
  }
  puVar23 = (uint *)(ulong)*puVar18;
  uVar10 = 0;
  if ((*puVar18 == 0) || (puVar18 == puVar23)) goto LAB_0123c2a8;
  lVar3 = 0xc;
  if (*(char *)((long)puVar18 + (10 - (long)puVar23)) != '\0') {
    lVar3 = 0x1c;
  }
  lVar3 = (long)puVar18 + (lVar3 - (long)puVar23);
  if (lVar3 == 0) goto LAB_0123c2a4;
  uVar14 = (ulong)*(ushort *)((long)puVar18 + (8 - (long)puVar23));
  *(undefined4 *)(puVar8 + 0x40) = 0xfffffffe;
  if (uVar14 == 0) goto LAB_0123c2a4;
  piVar21 = (int *)(lVar3 + 4);
  while (piVar21[-1] != 0x54706054) {
    piVar21 = piVar21 + 2;
    uVar14 = uVar14 - 1;
    if (uVar14 == 0) goto LAB_0123c2a4;
  }
  iVar20 = 0;
  if (*piVar21 != -1) {
    iVar20 = *piVar21;
  }
  *(int *)(puVar8 + 0x40) = iVar20;
  if (*puVar18 == 0) goto LAB_0123c2a4;
  goto LAB_0123c194;
LAB_0123c4e4:
  puVar7 = PTR_DAT_04bbbc70;
  if (cVar15 == '\0') {
    cVar15 = '\x01';
    *(undefined8 *)puVar8 = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
    *(undefined4 *)(puVar8 + 0x60) = 0xffffffff;
    *puVar7 = 1;
    *(undefined8 *)(puVar8 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x18) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x20) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x28) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x30) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x38) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x40) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x48) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x50) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x58) = 0xffffffffffffffff;
  }
  else {
    uVar10 = *(uint *)(puVar8 + 0x40);
    if (-1 < (int)uVar10) {
      if ((ushort *)((ulong)uVar10 + (long)puVar18) == (ushort *)0x0) {
        uVar10 = 0;
      }
      else {
        uVar10 = (uint)*(ushort *)((ulong)uVar10 + (long)puVar18);
      }
      goto LAB_0123c264;
    }
    if (uVar10 != 0xffffffff) goto LAB_0123c5b8;
  }
  puVar23 = (uint *)(ulong)*puVar18;
  uVar10 = 0;
  if ((*puVar18 == 0) || (puVar18 == puVar23)) goto LAB_0123c264;
  lVar13 = 0xc;
  if (*(char *)((long)puVar18 + (10 - (long)puVar23)) != '\0') {
    lVar13 = 0x1c;
  }
  lVar13 = (long)puVar18 + (lVar13 - (long)puVar23);
  if (lVar13 == 0) goto LAB_0123c5b8;
  uVar14 = (ulong)*(ushort *)((long)puVar18 + (8 - (long)puVar23));
  *(undefined4 *)(puVar8 + 0x40) = 0xfffffffe;
  if (uVar14 == 0) goto LAB_0123c5b8;
  piVar21 = (int *)(lVar13 + 4);
  while (piVar21[-1] != 0x54706054) {
    uVar10 = 0;
    piVar21 = piVar21 + 2;
    uVar14 = uVar14 - 1;
    if (uVar14 == 0) goto LAB_0123c264;
  }
  uVar10 = 0;
  iVar20 = 0;
  if (*piVar21 != -1) {
    iVar20 = *piVar21;
  }
  *(int *)(puVar8 + 0x40) = iVar20;
  if (*puVar18 == 0) goto LAB_0123c264;
  goto LAB_0123c4e4;
LAB_0123c5b8:
  uVar10 = 0;
LAB_0123c264:
  param_2[lVar16] = (short)uVar10;
  lVar16 = lVar16 + 1;
  if (lVar16 == 3) {
    return 0;
  }
  goto LAB_0123bf64;
LAB_0123c3dc:
  puVar7 = PTR_DAT_04bbbc70;
  if (cVar22 == '\0') {
    cVar15 = '\x01';
    cVar22 = '\x01';
    *(undefined8 *)puVar8 = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x18) = 0xffffffffffffffff;
    *(undefined4 *)(puVar8 + 0x60) = 0xffffffff;
    *puVar7 = 1;
    cVar17 = '\x01';
    *(undefined8 *)(puVar8 + 0x20) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x28) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x30) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x38) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x40) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x48) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x50) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x58) = 0xffffffffffffffff;
  }
  else {
    uVar10 = *(uint *)(puVar8 + 0x2c);
    if (-1 < (int)uVar10) {
      if ((ushort *)((ulong)uVar10 + (long)puVar18) == (ushort *)0x0) goto LAB_0123c4c0;
      uVar10 = (uint)*(ushort *)((ulong)uVar10 + (long)puVar18);
      goto LAB_0123c4c4;
    }
    if (uVar10 != 0xffffffff) goto LAB_0123c4c0;
  }
  puVar23 = (uint *)(ulong)*puVar18;
  uVar10 = 0xfffe;
  if ((*puVar18 == 0) || (puVar18 == puVar23)) goto LAB_0123c4c4;
  lVar3 = 0xc;
  if (*(char *)((long)puVar18 + (10 - (long)puVar23)) != '\0') {
    lVar3 = 0x1c;
  }
  lVar3 = (long)puVar18 + (lVar3 - (long)puVar23);
  if (lVar3 == 0) goto LAB_0123c4c0;
  uVar14 = (ulong)*(ushort *)((long)puVar18 + (8 - (long)puVar23));
  *(undefined4 *)(puVar8 + 0x2c) = 0xfffffffe;
  if (uVar14 == 0) goto LAB_0123c4c0;
  piVar21 = (int *)(lVar3 + 4);
  while (piVar21[-1] != 0x2c6a189e) {
    piVar21 = piVar21 + 2;
    uVar14 = uVar14 - 1;
    if (uVar14 == 0) goto LAB_0123c4c0;
  }
  iVar20 = 0;
  if (*piVar21 != -1) {
    iVar20 = *piVar21;
  }
  *(int *)(puVar8 + 0x2c) = iVar20;
  uVar10 = 0xfffe;
  if (*puVar18 == 0) goto LAB_0123c4c4;
  goto LAB_0123c3dc;
}


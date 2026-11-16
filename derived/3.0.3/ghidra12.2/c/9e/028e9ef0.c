
void FUN_028e9ef0(undefined8 *param_1,uint *param_2)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  byte bVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 *puVar8;
  int iVar9;
  char cVar10;
  uint *puVar11;
  char cVar12;
  int iVar13;
  uint *puVar14;
  char cVar15;
  ushort uVar16;
  int *piVar17;
  ulong uVar18;
  uint uVar19;
  char *pcVar20;
  char cVar21;
  uint uVar22;
  long lVar23;
  char cVar24;
  int iVar25;
  undefined8 local_90;
  uint local_88;
  uint uStack_84;
  uint local_7c;
  uint local_78;
  uint uStack_74;
  uint local_70;
  char local_6c;
  bool local_6b;
  undefined1 local_6a;
  uint local_68;
  uint local_64;
  
  puVar6 = PTR_DAT_04bc3968;
  puVar5 = PTR_DAT_04bc3960;
  lVar23 = *(long *)PTR_DAT_04bb4960;
  if (((lVar23 == 0) ||
      (uVar22 = (*param_2 & 0xffff) - (uint)*(ushort *)(lVar23 + 0x1f8),
      *(uint *)(lVar23 + 0x1d8) <= uVar22)) ||
     (puVar11 = *(uint **)(*(long *)(lVar23 + 0x1e0) + (long)(int)uVar22 * 8),
     puVar11 == (uint *)0x0)) {
    return;
  }
  local_6c = '\0';
  if (*puVar11 != 0) {
    cVar10 = *PTR_DAT_04bc3960;
    do {
      if (cVar10 != '\0') {
        uVar22 = *(uint *)(puVar6 + 0x1c);
        if ((int)uVar22 < 0) {
          if (uVar22 == 0xffffffff) goto LAB_028e9fb0;
        }
        else if ((char *)((ulong)uVar22 + (long)puVar11) != (char *)0x0) {
          local_6b = *(char *)((ulong)uVar22 + (long)puVar11) != '\0';
          goto LAB_028ea04c;
        }
LAB_028ea048:
        local_6b = false;
LAB_028ea04c:
        uVar22 = *puVar11;
        if (uVar22 == 0) goto LAB_028ea104;
        uVar19 = *(uint *)(puVar6 + 0x20);
        goto LAB_028ea070;
      }
      cVar10 = '\x01';
      *puVar5 = 1;
      *(undefined8 *)puVar6 = 0xffffffffffffffff;
      *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
      *(undefined4 *)(puVar6 + 0x20) = 0xffffffff;
      *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
      *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
LAB_028e9fb0:
      puVar14 = (uint *)(ulong)*puVar11;
      local_6b = false;
      if ((*puVar11 == 0) || (puVar11 == puVar14)) goto LAB_028ea04c;
      lVar7 = 0xc;
      if (*(char *)((long)puVar11 + (10 - (long)puVar14)) != '\0') {
        lVar7 = 0x1c;
      }
      lVar7 = (long)puVar11 + (lVar7 - (long)puVar14);
      if (lVar7 == 0) goto LAB_028ea048;
      uVar18 = (ulong)*(ushort *)((long)puVar11 + (8 - (long)puVar14));
      *(undefined4 *)(puVar6 + 0x1c) = 0xfffffffe;
      local_6b = false;
      if (uVar18 == 0) goto LAB_028ea04c;
      piVar17 = (int *)(lVar7 + 4);
      while (piVar17[-1] != -0x4fb53614) {
        piVar17 = piVar17 + 2;
        uVar18 = uVar18 - 1;
        if (uVar18 == 0) {
          local_6b = false;
          goto LAB_028ea04c;
        }
      }
      iVar13 = 0;
      if (*piVar17 != -1) {
        iVar13 = *piVar17;
      }
      *(int *)(puVar6 + 0x1c) = iVar13;
    } while (*puVar11 != 0);
  }
  local_6a = false;
  local_6b = false;
LAB_028ea108:
  lVar7 = FUN_03776680(*param_2);
  if (lVar7 == 0) {
    uVar16 = 0;
  }
  else if ((*(long **)(lVar7 + 0x28) == (long *)0x0) ||
          (puVar8 = (undefined8 *)**(long **)(lVar7 + 0x28), puVar8 == (undefined8 *)0x0)) {
    uVar16 = *(ushort *)(*(long *)(lVar7 + 0x10) + *(long *)(lVar7 + 8)) >> 1 & 1;
  }
  else {
    uVar18 = (**(code **)*puVar8)();
    uVar16 = *(ushort *)(*(long *)(lVar7 + 0x10) + *(long *)(lVar7 + 8)) >> 1 & 1;
    if ((((uVar18 & 1) != 0) && (*(long *)(lVar7 + 0x28) != 0)) &&
       (puVar8 = *(undefined8 **)(*(long *)(lVar7 + 0x28) + 8), puVar8 != (undefined8 *)0x0)) {
      (**(code **)*puVar8)();
    }
  }
  puVar5 = PTR_DAT_04bc3980;
  uVar22 = 0;
  pcVar20 = PTR_DAT_04bc3978;
LAB_028ea214:
  if (uVar16 == 0) {
    uVar18 = (ulong)uVar22;
    if (2 < uVar22) {
      uVar18 = 0;
    }
    if ((&local_6c)[uVar18] == '\0') goto LAB_028ea220;
    goto LAB_028ea208;
  }
LAB_028ea220:
  local_88 = 0;
  local_90 = 0;
  switch(*param_2) {
  case 0:
    uVar19 = 1;
    goto LAB_028ea2a0;
  case 1:
    local_90 = 0x300000002;
    local_88 = 4;
    break;
  case 2:
    local_90 = 0x600000005;
    local_88 = 10;
    break;
  case 3:
    local_90 = 0x900000007;
    break;
  case 4:
    uVar19 = 8;
LAB_028ea2a0:
    local_90 = (ulong)uVar19;
  }
  uVar18 = (ulong)uVar22;
  if (2 < uVar22) {
    uVar18 = 0;
  }
  local_64 = *(uint *)((long)&local_90 + uVar18 * 4);
  uVar19 = (local_64 & 0xffff) - (uint)*(ushort *)(lVar23 + 0x7f8);
  if ((uVar19 < *(uint *)(lVar23 + 0x7d8)) &&
     (puVar11 = *(uint **)(*(long *)(lVar23 + 0x7e0) + (long)(int)uVar19 * 8),
     puVar11 != (uint *)0x0)) {
    local_68 = 0;
    uVar19 = *puVar11;
    if (uVar19 != 0 && puVar11 != (uint *)(ulong)uVar19) {
      puVar14 = (uint *)((long)puVar11 - (long)(ulong)uVar19);
      local_68 = 0;
      if (*puVar14 != 0) {
        uVar19 = puVar14[1];
        if ((uVar19 != 0) && ((ulong)(ushort)puVar14[2] != 0)) {
          lVar7 = 0xc;
          if (*(char *)((long)puVar14 + 10) != '\0') {
            lVar7 = 0x1c;
          }
          lVar7 = (long)puVar14 + lVar7 + (ulong)(ushort)puVar14[2] * 8;
          if (lVar7 != 0) {
            uVar3 = 0;
            if ((ulong)uVar19 != 0) {
              uVar3 = (uint)((ulong)((long)puVar11 - lVar7) / (ulong)uVar19);
            }
            if (*puVar14 <= uVar3) {
              uVar3 = 0xffffffff;
            }
            if ((uVar3 < *(uint *)PTR_DAT_04bc3970) &&
               (local_68 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc3970 + 8) + (long)(int)uVar3 * 2)
               , local_68 < 0x15)) goto LAB_028ea374;
          }
        }
        local_68 = 0;
      }
    }
LAB_028ea374:
    if (*puVar11 != 0) {
      cVar10 = *pcVar20;
      do {
        if (cVar10 != '\0') {
          uVar19 = *(uint *)(puVar5 + 0x30);
          if ((int)uVar19 < 0) {
            if (uVar19 == 0xffffffff) goto LAB_028ea3bc;
LAB_028ea444:
            cVar12 = '\0';
          }
          else {
            cVar12 = '\0';
            if ((char *)((ulong)uVar19 + (long)puVar11) != (char *)0x0) {
              cVar12 = *(char *)((ulong)uVar19 + (long)puVar11);
            }
          }
LAB_028ea458:
          uVar19 = *puVar11;
          iVar13 = (int)cVar12;
          uStack_74 = 0;
          if (uVar19 == 0) goto LAB_028ea4f4;
          uVar18 = (ulong)*(uint *)(puVar5 + 0x24);
          goto LAB_028ea468;
        }
        cVar10 = '\x01';
        *pcVar20 = '\x01';
        *(undefined8 *)puVar5 = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x38) = 0xffffffffffffffff;
LAB_028ea3bc:
        puVar14 = (uint *)(ulong)*puVar11;
        cVar12 = '\0';
        if ((*puVar11 == 0) || (puVar11 == puVar14)) goto LAB_028ea458;
        lVar7 = 0xc;
        if (*(char *)((long)puVar11 + (10 - (long)puVar14)) != '\0') {
          lVar7 = 0x1c;
        }
        lVar7 = (long)puVar11 + (lVar7 - (long)puVar14);
        if (lVar7 == 0) goto LAB_028ea444;
        uVar18 = (ulong)*(ushort *)((long)puVar11 + (8 - (long)puVar14));
        *(undefined4 *)(puVar5 + 0x30) = 0xfffffffe;
        cVar12 = '\0';
        if (uVar18 == 0) goto LAB_028ea458;
        piVar17 = (int *)(lVar7 + 4);
        while (piVar17[-1] != 0x56ccf3fd) {
          piVar17 = piVar17 + 2;
          uVar18 = uVar18 - 1;
          if (uVar18 == 0) {
            cVar12 = '\0';
            goto LAB_028ea458;
          }
        }
        iVar13 = 0;
        if (*piVar17 != -1) {
          iVar13 = *piVar17;
        }
        *(int *)(puVar5 + 0x30) = iVar13;
      } while (*puVar11 != 0);
    }
    cVar12 = '\0';
    iVar13 = 0;
LAB_028ea43c:
    uStack_74 = 0;
    goto LAB_028ea4f4;
  }
  goto LAB_028ea208;
LAB_028ea070:
  if (-1 < (int)uVar19) {
    if ((char *)((long)puVar11 + (ulong)uVar19) == (char *)0x0) {
LAB_028ea104:
      local_6a = false;
    }
    else {
      local_6a = *(char *)((long)puVar11 + (ulong)uVar19) != '\0';
    }
    goto LAB_028ea108;
  }
  if (uVar19 != 0xffffffff) goto LAB_028ea104;
  lVar7 = (long)puVar11 - (ulong)uVar22;
  local_6a = false;
  if (lVar7 == 0) goto LAB_028ea108;
  lVar2 = 0xc;
  if (*(char *)(lVar7 + 10) != '\0') {
    lVar2 = 0x1c;
  }
  if (lVar2 + lVar7 == 0) goto LAB_028ea104;
  uVar18 = (ulong)*(ushort *)(lVar7 + 8);
  *(undefined4 *)(puVar6 + 0x20) = 0xfffffffe;
  local_6a = false;
  if (uVar18 == 0) goto LAB_028ea108;
  puVar14 = (uint *)(lVar2 + lVar7 + 4);
  while (puVar14[-1] != 0xcc2bec37) {
    puVar14 = puVar14 + 2;
    uVar18 = uVar18 - 1;
    if (uVar18 == 0) {
      local_6a = false;
      goto LAB_028ea108;
    }
  }
  local_6a = false;
  uVar19 = 0;
  if (*puVar14 != 0xffffffff) {
    uVar19 = *puVar14;
  }
  *(uint *)(puVar6 + 0x20) = uVar19;
  uVar22 = *puVar11;
  if (uVar22 == 0) goto LAB_028ea108;
  goto LAB_028ea070;
  while( true ) {
    if (uVar18 != 0xffffffff) goto LAB_028ea43c;
    lVar7 = (long)puVar11 - (ulong)uVar19;
    uStack_74 = 0;
    if (lVar7 == 0) goto LAB_028ea4f4;
    lVar2 = 0xc;
    if (*(char *)(lVar7 + 10) != '\0') {
      lVar2 = 0x1c;
    }
    if (lVar2 + lVar7 == 0) goto LAB_028ea43c;
    uVar18 = (ulong)*(ushort *)(lVar7 + 8);
    *(undefined4 *)(puVar5 + 0x24) = 0xfffffffe;
    uStack_74 = 0;
    if (uVar18 == 0) goto LAB_028ea4f4;
    puVar14 = (uint *)(lVar2 + lVar7 + 4);
    while (puVar14[-1] != 0x3297a85e) {
      puVar14 = puVar14 + 2;
      uVar18 = uVar18 - 1;
      if (uVar18 == 0) {
        uStack_74 = 0;
        goto LAB_028ea4f4;
      }
    }
    uVar18 = 0;
    if (*puVar14 != 0xffffffff) {
      uVar18 = (ulong)*puVar14;
    }
    *(int *)(puVar5 + 0x24) = (int)uVar18;
    uVar19 = *puVar11;
    if (uVar19 == 0) break;
LAB_028ea468:
    if (-1 < (int)uVar18) {
      uStack_74 = 0;
      if (((byte *)(uVar18 + (long)puVar11) == (byte *)0x0) ||
         (bVar4 = *(byte *)(uVar18 + (long)puVar11), uStack_74 = (uint)bVar4, bVar4 < 0x15))
      goto LAB_028ea4f4;
      goto LAB_028ea43c;
    }
  }
  uStack_74 = 0;
LAB_028ea4f4:
  if (*puVar11 == 0) {
    iVar9 = 0;
    cVar10 = '\0';
    local_78 = 0;
  }
  else {
    cVar24 = *pcVar20;
    do {
      if (cVar24 != '\0') {
        uVar19 = *(uint *)(puVar5 + 0x34);
        if ((int)uVar19 < 0) {
          if (uVar19 == 0xffffffff) goto LAB_028ea53c;
        }
        else if ((char *)((ulong)uVar19 + (long)puVar11) != (char *)0x0) {
          cVar10 = *(char *)((ulong)uVar19 + (long)puVar11);
          goto LAB_028ea5e4;
        }
        goto LAB_028ea5e0;
      }
      cVar24 = '\x01';
      *pcVar20 = '\x01';
      *(undefined8 *)puVar5 = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 0x30) = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 0x38) = 0xffffffffffffffff;
LAB_028ea53c:
      puVar14 = (uint *)(ulong)*puVar11;
      cVar10 = '\0';
      if ((*puVar11 == 0) || (puVar11 == puVar14)) {
LAB_028ea5e4:
        uVar19 = *puVar11;
        iVar9 = (int)cVar10;
        local_78 = 0;
        if (uVar19 == 0) goto LAB_028ea690;
        uVar18 = (ulong)*(uint *)(puVar5 + 0x28);
        goto LAB_028ea5f4;
      }
      lVar7 = 0xc;
      if (*(char *)((long)puVar11 + (10 - (long)puVar14)) != '\0') {
        lVar7 = 0x1c;
      }
      lVar7 = (long)puVar11 + (lVar7 - (long)puVar14);
      if (lVar7 == 0) {
LAB_028ea5e0:
        cVar10 = '\0';
        goto LAB_028ea5e4;
      }
      uVar18 = (ulong)*(ushort *)((long)puVar11 + (8 - (long)puVar14));
      *(undefined4 *)(puVar5 + 0x34) = 0xfffffffe;
      if (uVar18 == 0) goto LAB_028ea5e0;
      piVar17 = (int *)(lVar7 + 4);
      while (piVar17[-1] != -0x118f6b68) {
        piVar17 = piVar17 + 2;
        uVar18 = uVar18 - 1;
        if (uVar18 == 0) goto LAB_028ea5e0;
      }
      iVar9 = 0;
      if (*piVar17 != -1) {
        iVar9 = *piVar17;
      }
      *(int *)(puVar5 + 0x34) = iVar9;
    } while (*puVar11 != 0);
    iVar9 = 0;
    cVar10 = '\0';
LAB_028ea684:
    local_78 = 0;
  }
LAB_028ea690:
  if (*puVar11 == 0) {
    iVar25 = 0;
    cVar24 = '\0';
    local_7c = 0;
  }
  else {
    cVar15 = *pcVar20;
    do {
      if (cVar15 != '\0') {
        uVar19 = *(uint *)(puVar5 + 0x38);
        if ((int)uVar19 < 0) {
          if (uVar19 == 0xffffffff) goto LAB_028ea6dc;
        }
        else if ((char *)((ulong)uVar19 + (long)puVar11) != (char *)0x0) {
          cVar24 = *(char *)((ulong)uVar19 + (long)puVar11);
          goto LAB_028ea784;
        }
        goto LAB_028ea780;
      }
      cVar15 = '\x01';
      *pcVar20 = '\x01';
      *(undefined8 *)puVar5 = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 0x30) = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 0x38) = 0xffffffffffffffff;
LAB_028ea6dc:
      puVar14 = (uint *)(ulong)*puVar11;
      cVar24 = '\0';
      if ((*puVar11 == 0) || (puVar11 == puVar14)) {
LAB_028ea784:
        uVar19 = *puVar11;
        iVar25 = (int)cVar24;
        local_7c = 0;
        if (uVar19 == 0) goto LAB_028ea830;
        uVar18 = (ulong)*(uint *)(puVar5 + 0x2c);
        goto LAB_028ea794;
      }
      lVar7 = 0xc;
      if (*(char *)((long)puVar11 + (10 - (long)puVar14)) != '\0') {
        lVar7 = 0x1c;
      }
      lVar7 = (long)puVar11 + (lVar7 - (long)puVar14);
      if (lVar7 == 0) {
LAB_028ea780:
        cVar24 = '\0';
        goto LAB_028ea784;
      }
      uVar18 = (ulong)*(ushort *)((long)puVar11 + (8 - (long)puVar14));
      *(undefined4 *)(puVar5 + 0x38) = 0xfffffffe;
      if (uVar18 == 0) goto LAB_028ea780;
      piVar17 = (int *)(lVar7 + 4);
      while (piVar17[-1] != -0x33ac48a) {
        piVar17 = piVar17 + 2;
        uVar18 = uVar18 - 1;
        if (uVar18 == 0) goto LAB_028ea780;
      }
      iVar25 = 0;
      if (*piVar17 != -1) {
        iVar25 = *piVar17;
      }
      *(int *)(puVar5 + 0x38) = iVar25;
    } while (*puVar11 != 0);
    iVar25 = 0;
    cVar24 = '\0';
LAB_028ea824:
    local_7c = 0;
  }
LAB_028ea830:
  if (*puVar11 != 0) {
    cVar15 = *pcVar20;
    do {
      if (cVar15 == '\0') {
        cVar15 = '\x01';
        *pcVar20 = '\x01';
        *(undefined8 *)puVar5 = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x38) = 0xffffffffffffffff;
      }
      else {
        uVar19 = *(uint *)(puVar5 + 0x3c);
        if (-1 < (int)uVar19) {
          if ((char *)((ulong)uVar19 + (long)puVar11) != (char *)0x0) {
            cVar21 = *(char *)((ulong)uVar19 + (long)puVar11);
            goto LAB_028ea914;
          }
          break;
        }
        if (uVar19 != 0xffffffff) break;
      }
      puVar14 = (uint *)(ulong)*puVar11;
      cVar21 = '\0';
      if ((*puVar11 == 0) || (puVar11 == puVar14)) goto LAB_028ea914;
      lVar7 = 0xc;
      if (*(char *)((long)puVar11 + (10 - (long)puVar14)) != '\0') {
        lVar7 = 0x1c;
      }
      lVar7 = (long)puVar11 + (lVar7 - (long)puVar14);
      if (lVar7 == 0) break;
      uVar18 = (ulong)*(ushort *)((long)puVar11 + (8 - (long)puVar14));
      *(undefined4 *)(puVar5 + 0x3c) = 0xfffffffe;
      pcVar20 = PTR_DAT_04bc3978;
      if (uVar18 == 0) break;
      piVar17 = (int *)(lVar7 + 4);
      while (piVar17[-1] != 0x44795c13) {
        piVar17 = piVar17 + 2;
        uVar18 = uVar18 - 1;
        if (uVar18 == 0) goto LAB_028ea910;
      }
      iVar1 = 0;
      if (*piVar17 != -1) {
        iVar1 = *piVar17;
      }
      *(int *)(puVar5 + 0x3c) = iVar1;
      if (*puVar11 == 0) break;
    } while( true );
  }
LAB_028ea910:
  cVar21 = '\0';
LAB_028ea914:
  local_70 = uVar22;
  if ((local_68 != 0) && ('\0' < cVar12)) {
    local_90 = CONCAT44(iVar13,local_68);
    local_88 = *param_2;
    uStack_84 = uVar22;
    (**(code **)*param_1)(param_1,&local_90);
  }
  if ((uStack_74 != 0) && ('\0' < cVar10)) {
    local_90 = CONCAT44(iVar9,uStack_74);
    local_88 = *param_2;
    uStack_84 = local_70;
    (**(code **)*param_1)(param_1,&local_90);
  }
  if ((local_78 != 0) && ('\0' < cVar24)) {
    local_90 = CONCAT44(iVar25,local_78);
    local_88 = *param_2;
    uStack_84 = local_70;
    (**(code **)*param_1)(param_1,&local_90);
  }
  if ((local_7c != 0) && (0 < cVar21)) {
    local_90 = CONCAT44((int)cVar21,local_7c);
    local_88 = *param_2;
    uStack_84 = local_70;
    (**(code **)*param_1)(param_1,&local_90);
  }
  pcVar20 = PTR_DAT_04bc3978;
LAB_028ea208:
  uVar22 = uVar22 + 1;
  if (uVar22 == 3) {
    return;
  }
  goto LAB_028ea214;
  while( true ) {
    if (uVar18 != 0xffffffff) goto LAB_028ea684;
    lVar7 = (long)puVar11 - (ulong)uVar19;
    local_78 = 0;
    if (lVar7 == 0) goto LAB_028ea690;
    lVar2 = 0xc;
    if (*(char *)(lVar7 + 10) != '\0') {
      lVar2 = 0x1c;
    }
    if (lVar2 + lVar7 == 0) goto LAB_028ea684;
    uVar18 = (ulong)*(ushort *)(lVar7 + 8);
    *(undefined4 *)(puVar5 + 0x28) = 0xfffffffe;
    local_78 = 0;
    if (uVar18 == 0) goto LAB_028ea690;
    puVar14 = (uint *)(lVar2 + lVar7 + 4);
    while (puVar14[-1] != 0x202207b0) {
      puVar14 = puVar14 + 2;
      uVar18 = uVar18 - 1;
      if (uVar18 == 0) {
        local_78 = 0;
        goto LAB_028ea690;
      }
    }
    uVar18 = 0;
    if (*puVar14 != 0xffffffff) {
      uVar18 = (ulong)*puVar14;
    }
    *(int *)(puVar5 + 0x28) = (int)uVar18;
    uVar19 = *puVar11;
    if (uVar19 == 0) break;
LAB_028ea5f4:
    if (-1 < (int)uVar18) {
      local_78 = 0;
      if (((byte *)(uVar18 + (long)puVar11) == (byte *)0x0) ||
         (bVar4 = *(byte *)(uVar18 + (long)puVar11), local_78 = (uint)bVar4, bVar4 < 0x15))
      goto LAB_028ea690;
      goto LAB_028ea684;
    }
  }
  local_78 = 0;
  goto LAB_028ea690;
  while( true ) {
    if (uVar18 != 0xffffffff) goto LAB_028ea824;
    lVar7 = (long)puVar11 - (ulong)uVar19;
    local_7c = 0;
    if (lVar7 == 0) goto LAB_028ea830;
    lVar2 = 0xc;
    if (*(char *)(lVar7 + 10) != '\0') {
      lVar2 = 0x1c;
    }
    if (lVar2 + lVar7 == 0) goto LAB_028ea824;
    uVar18 = (ulong)*(ushort *)(lVar7 + 8);
    *(undefined4 *)(puVar5 + 0x2c) = 0xfffffffe;
    local_7c = 0;
    if (uVar18 == 0) goto LAB_028ea830;
    puVar14 = (uint *)(lVar2 + lVar7 + 4);
    while (puVar14[-1] != 0x989e60d5) {
      puVar14 = puVar14 + 2;
      uVar18 = uVar18 - 1;
      if (uVar18 == 0) {
        local_7c = 0;
        goto LAB_028ea830;
      }
    }
    uVar18 = 0;
    if (*puVar14 != 0xffffffff) {
      uVar18 = (ulong)*puVar14;
    }
    *(int *)(puVar5 + 0x2c) = (int)uVar18;
    uVar19 = *puVar11;
    if (uVar19 == 0) break;
LAB_028ea794:
    if (-1 < (int)uVar18) {
      local_7c = 0;
      if (((byte *)(uVar18 + (long)puVar11) == (byte *)0x0) ||
         (bVar4 = *(byte *)(uVar18 + (long)puVar11), local_7c = (uint)bVar4, bVar4 < 0x15))
      goto LAB_028ea830;
      goto LAB_028ea824;
    }
  }
  local_7c = 0;
  goto LAB_028ea830;
}


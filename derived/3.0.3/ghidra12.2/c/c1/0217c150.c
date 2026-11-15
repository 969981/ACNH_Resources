
int FUN_0217c150(long param_1,undefined8 param_2,uint param_3)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  byte bVar6;
  byte bVar7;
  undefined *puVar8;
  bool bVar9;
  bool bVar10;
  uint uVar11;
  uint *puVar12;
  int *piVar13;
  ulong uVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  char cVar19;
  uint uVar20;
  uint *puVar21;
  
  if ((int)*(uint *)(param_1 + 0x1c0) < 1) {
    if (*(long *)(param_1 + 0xb0) == 0) {
      return -1;
    }
    puVar21 = *(uint **)(*(long *)(param_1 + 0xb0) + 8);
    if (puVar21 == (uint *)0x0) {
      return -1;
    }
    if ((param_3 < *(uint *)(param_1 + 200)) &&
       (*(char *)(*(long *)(param_1 + 0xd0) + (long)(int)param_3) == '\0')) {
      return -1;
    }
    if (*puVar21 <= param_3) {
      return -1;
    }
    if (puVar21[1] == 0) {
      return -1;
    }
    if ((ushort)puVar21[2] == 0) {
      return -1;
    }
    iVar17 = 0xc;
    if (*(char *)((long)puVar21 + 10) != '\0') {
      iVar17 = 0x1c;
    }
    puVar21 = (uint *)((ulong)(puVar21[1] * param_3 + (uint)(ushort)puVar21[2] * 8 + iVar17) +
                      (long)puVar21);
  }
  else {
    if (*(uint *)(param_1 + 0x1c0) <= param_3) {
      return -1;
    }
    if (*(uint *)(param_1 + 0x1b0) <= param_3) {
      param_3 = 0;
    }
    puVar21 = *(uint **)(*(long *)(param_1 + 0x1b8) + (ulong)param_3 * 8);
  }
  if (puVar21 == (uint *)0x0) {
    return -1;
  }
  uVar11 = nn::os::GetSystemTick();
  puVar8 = PTR_DAT_04bc2ac0;
  uVar18 = *puVar21;
  uVar20 = (uVar11 ^ uVar11 >> 0x1e) * 0x6c078965 + 1;
  uVar11 = uVar20 ^ uVar20 * 0x800;
  uVar20 = (uVar20 ^ uVar20 >> 0x1e) * 0x6c078965 + 2;
  uVar20 = (uVar20 ^ uVar20 >> 0x1e) * 0x6c078965 + 3;
  uVar20 = (uVar20 ^ uVar20 >> 0x1e) * 0x6c078965 + 4;
  uVar11 = (uint)((ulong)(uVar11 >> 8 ^ uVar20 >> 0x13 ^ uVar11 ^ uVar20) * 100 >> 0x20);
  if (uVar18 == 0) {
    bVar1 = false;
    uVar18 = 0;
    uVar20 = 0;
    bVar2 = true;
    iVar17 = -1;
  }
  else {
    iVar17 = -1;
    cVar19 = DAT_053f6370;
    do {
      puVar12 = (uint *)(ulong)uVar18;
      if (cVar19 != '\0') {
        uVar18 = *(uint *)(puVar8 + 0x28);
        if ((int)uVar18 < 0) {
          if (uVar18 == 0xffffffff) {
            uVar18 = 0;
            if (puVar12 != (uint *)0x0) goto LAB_0217c26c;
          }
          else {
LAB_0217c380:
            uVar18 = 0;
          }
        }
        else {
          if ((byte *)((ulong)uVar18 + (long)puVar21) == (byte *)0x0) goto LAB_0217c380;
          uVar18 = (uint)*(byte *)((ulong)uVar18 + (long)puVar21);
        }
LAB_0217c384:
        uVar20 = *puVar21;
        bVar9 = uVar11 <= uVar18;
        bVar10 = uVar18 == uVar11;
        bVar1 = bVar9 && !bVar10;
        bVar2 = !bVar9 || bVar10;
        iVar17 = -(uint)(!bVar9 || bVar10);
        if (uVar20 == 0) goto LAB_0217c424;
        uVar15 = *(uint *)(puVar8 + 0x2c);
        goto LAB_0217c3b4;
      }
      cVar19 = '\x01';
      *(undefined8 *)puVar8 = 0xffffffffffffffff;
      *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
      DAT_053f6370 = '\x01';
      *(undefined8 *)(puVar8 + 0x40) = 0xffffffffffffffff;
      *(undefined8 *)(puVar8 + 0x10) = 0xffffffffffffffff;
      *(undefined8 *)(puVar8 + 0x18) = 0xffffffffffffffff;
      *(undefined8 *)(puVar8 + 0x20) = 0xffffffffffffffff;
      *(undefined8 *)(puVar8 + 0x28) = 0xffffffffffffffff;
      *(undefined8 *)(puVar8 + 0x30) = 0xffffffffffffffff;
      *(undefined8 *)(puVar8 + 0x38) = 0xffffffffffffffff;
      puVar12 = (uint *)(ulong)*puVar21;
      uVar18 = 0;
      if (puVar12 == (uint *)0x0) goto LAB_0217c384;
LAB_0217c26c:
      uVar18 = 0;
      if (puVar21 == puVar12) goto LAB_0217c384;
      lVar5 = 0xc;
      if (*(char *)((long)puVar21 + (10 - (long)puVar12)) != '\0') {
        lVar5 = 0x1c;
      }
      lVar5 = (long)puVar21 + (lVar5 - (long)puVar12);
      if (lVar5 == 0) goto LAB_0217c380;
      uVar14 = (ulong)*(ushort *)((long)puVar21 + (8 - (long)puVar12));
      *(undefined4 *)(puVar8 + 0x28) = 0xfffffffe;
      uVar18 = 0;
      if (uVar14 == 0) goto LAB_0217c384;
      piVar13 = (int *)(lVar5 + 4);
      while (piVar13[-1] != -0x6beec8a0) {
        piVar13 = piVar13 + 2;
        uVar14 = uVar14 - 1;
        if (uVar14 == 0) {
          uVar18 = 0;
          goto LAB_0217c384;
        }
      }
      iVar16 = 0;
      if (*piVar13 != -1) {
        iVar16 = *piVar13;
      }
      *(int *)(puVar8 + 0x28) = iVar16;
      uVar18 = *puVar21;
    } while (uVar18 != 0);
    bVar1 = false;
    uVar18 = 0;
    uVar20 = 0;
    bVar2 = true;
  }
LAB_0217c428:
  uVar15 = *puVar21;
  bVar2 = (bool)(bVar2 & uVar11 < uVar18 + uVar20);
  if (bVar2) {
    iVar17 = 1;
  }
  bVar7 = bVar1 | bVar2;
  if (uVar15 != 0) {
    cVar19 = DAT_053f6370;
    do {
      if (cVar19 == '\0') {
        cVar19 = '\x01';
        *(undefined8 *)puVar8 = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
        DAT_053f6370 = '\x01';
        *(undefined8 *)(puVar8 + 0x40) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x38) = 0xffffffffffffffff;
        uVar15 = *puVar21;
      }
      else {
        uVar4 = *(uint *)(puVar8 + 0x30);
        if (-1 < (int)uVar4) {
          if ((byte *)((ulong)uVar4 + (long)puVar21) != (byte *)0x0) {
            uVar15 = (uint)*(byte *)((ulong)uVar4 + (long)puVar21);
            goto LAB_0217c52c;
          }
          break;
        }
        if (uVar4 != 0xffffffff) break;
      }
      puVar12 = (uint *)(ulong)uVar15;
      uVar15 = 0;
      if ((puVar12 == (uint *)0x0) || (uVar15 = 0, puVar21 == puVar12)) goto LAB_0217c52c;
      lVar5 = 0xc;
      if (*(char *)((long)puVar21 + (10 - (long)puVar12)) != '\0') {
        lVar5 = 0x1c;
      }
      lVar5 = (long)puVar21 + (lVar5 - (long)puVar12);
      uVar15 = 0;
      if (lVar5 == 0) goto LAB_0217c52c;
      uVar14 = (ulong)*(ushort *)((long)puVar21 + (8 - (long)puVar12));
      *(undefined4 *)(puVar8 + 0x30) = 0xfffffffe;
      if (uVar14 == 0) break;
      piVar13 = (int *)(lVar5 + 4);
      while (piVar13[-1] != 0x3e18ffeb) {
        piVar13 = piVar13 + 2;
        uVar14 = uVar14 - 1;
        if (uVar14 == 0) goto LAB_0217c528;
      }
      iVar16 = 0;
      if (*piVar13 != -1) {
        iVar16 = *piVar13;
      }
      *(int *)(puVar8 + 0x30) = iVar16;
      uVar15 = *puVar21;
      if (uVar15 == 0) break;
    } while( true );
  }
LAB_0217c528:
  uVar15 = 0;
LAB_0217c52c:
  uVar15 = uVar18 + uVar20 + uVar15;
  uVar18 = *puVar21;
  bVar6 = uVar11 < uVar15 | bVar7;
  iVar16 = 2;
  if (!(bool)(uVar11 < uVar15 & (bVar7 ^ 1))) {
    iVar16 = iVar17;
  }
  if (uVar18 != 0) {
    cVar19 = DAT_053f6370;
    do {
      if (cVar19 == '\0') {
        cVar19 = '\x01';
        *(undefined8 *)puVar8 = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
        DAT_053f6370 = '\x01';
        *(undefined8 *)(puVar8 + 0x40) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x38) = 0xffffffffffffffff;
        uVar18 = *puVar21;
      }
      else {
        uVar20 = *(uint *)(puVar8 + 0x34);
        if (-1 < (int)uVar20) {
          if ((byte *)((ulong)uVar20 + (long)puVar21) != (byte *)0x0) {
            uVar18 = (uint)*(byte *)((ulong)uVar20 + (long)puVar21);
            goto LAB_0217c62c;
          }
          break;
        }
        if (uVar20 != 0xffffffff) break;
      }
      puVar12 = (uint *)(ulong)uVar18;
      uVar18 = 0;
      if ((puVar12 == (uint *)0x0) || (uVar18 = 0, puVar21 == puVar12)) goto LAB_0217c62c;
      lVar5 = 0xc;
      if (*(char *)((long)puVar21 + (10 - (long)puVar12)) != '\0') {
        lVar5 = 0x1c;
      }
      lVar5 = (long)puVar21 + (lVar5 - (long)puVar12);
      uVar18 = 0;
      if (lVar5 == 0) goto LAB_0217c62c;
      uVar14 = (ulong)*(ushort *)((long)puVar21 + (8 - (long)puVar12));
      *(undefined4 *)(puVar8 + 0x34) = 0xfffffffe;
      if (uVar14 == 0) break;
      piVar13 = (int *)(lVar5 + 4);
      while (piVar13[-1] != -0x5c3038ae) {
        piVar13 = piVar13 + 2;
        uVar14 = uVar14 - 1;
        if (uVar14 == 0) goto LAB_0217c628;
      }
      iVar17 = 0;
      if (*piVar13 != -1) {
        iVar17 = *piVar13;
      }
      *(int *)(puVar8 + 0x34) = iVar17;
      uVar18 = *puVar21;
      if (uVar18 == 0) break;
    } while( true );
  }
LAB_0217c628:
  uVar18 = 0;
LAB_0217c62c:
  uVar15 = uVar15 + uVar18;
  uVar18 = *puVar21;
  bVar7 = uVar11 < uVar15 | bVar6;
  iVar17 = 3;
  if (!(bool)(uVar11 < uVar15 & (bVar6 ^ 1))) {
    iVar17 = iVar16;
  }
  if (uVar18 != 0) {
    cVar19 = DAT_053f6370;
    do {
      if (cVar19 == '\0') {
        cVar19 = '\x01';
        *(undefined8 *)puVar8 = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
        DAT_053f6370 = '\x01';
        *(undefined8 *)(puVar8 + 0x40) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x38) = 0xffffffffffffffff;
        uVar18 = *puVar21;
      }
      else {
        uVar20 = *(uint *)(puVar8 + 0x38);
        if (-1 < (int)uVar20) {
          if ((byte *)((ulong)uVar20 + (long)puVar21) != (byte *)0x0) {
            uVar18 = (uint)*(byte *)((ulong)uVar20 + (long)puVar21);
            goto LAB_0217c72c;
          }
          break;
        }
        if (uVar20 != 0xffffffff) break;
      }
      puVar12 = (uint *)(ulong)uVar18;
      uVar18 = 0;
      if ((puVar12 == (uint *)0x0) || (uVar18 = 0, puVar21 == puVar12)) goto LAB_0217c72c;
      lVar5 = 0xc;
      if (*(char *)((long)puVar21 + (10 - (long)puVar12)) != '\0') {
        lVar5 = 0x1c;
      }
      lVar5 = (long)puVar21 + (lVar5 - (long)puVar12);
      uVar18 = 0;
      if (lVar5 == 0) goto LAB_0217c72c;
      uVar14 = (ulong)*(ushort *)((long)puVar21 + (8 - (long)puVar12));
      *(undefined4 *)(puVar8 + 0x38) = 0xfffffffe;
      if (uVar14 == 0) break;
      piVar13 = (int *)(lVar5 + 4);
      while (piVar13[-1] != 0x1b73a037) {
        piVar13 = piVar13 + 2;
        uVar14 = uVar14 - 1;
        if (uVar14 == 0) goto LAB_0217c728;
      }
      iVar16 = 0;
      if (*piVar13 != -1) {
        iVar16 = *piVar13;
      }
      *(int *)(puVar8 + 0x38) = iVar16;
      uVar18 = *puVar21;
      if (uVar18 == 0) break;
    } while( true );
  }
LAB_0217c728:
  uVar18 = 0;
LAB_0217c72c:
  uVar15 = uVar15 + uVar18;
  uVar18 = *puVar21;
  bVar6 = uVar11 < uVar15 | bVar7;
  iVar16 = 4;
  if (!(bool)(uVar11 < uVar15 & (bVar7 ^ 1))) {
    iVar16 = iVar17;
  }
  if (uVar18 != 0) {
    cVar19 = DAT_053f6370;
    do {
      if (cVar19 == '\0') {
        cVar19 = '\x01';
        *(undefined8 *)puVar8 = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
        DAT_053f6370 = '\x01';
        *(undefined8 *)(puVar8 + 0x40) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x38) = 0xffffffffffffffff;
        uVar18 = *puVar21;
      }
      else {
        uVar20 = *(uint *)(puVar8 + 0x3c);
        if (-1 < (int)uVar20) {
          if ((byte *)((ulong)uVar20 + (long)puVar21) != (byte *)0x0) {
            uVar18 = (uint)*(byte *)((ulong)uVar20 + (long)puVar21);
            goto LAB_0217c82c;
          }
          break;
        }
        if (uVar20 != 0xffffffff) break;
      }
      puVar12 = (uint *)(ulong)uVar18;
      uVar18 = 0;
      if ((puVar12 == (uint *)0x0) || (uVar18 = 0, puVar21 == puVar12)) goto LAB_0217c82c;
      lVar5 = 0xc;
      if (*(char *)((long)puVar21 + (10 - (long)puVar12)) != '\0') {
        lVar5 = 0x1c;
      }
      lVar5 = (long)puVar21 + (lVar5 - (long)puVar12);
      uVar18 = 0;
      if (lVar5 == 0) goto LAB_0217c82c;
      uVar14 = (ulong)*(ushort *)((long)puVar21 + (8 - (long)puVar12));
      *(undefined4 *)(puVar8 + 0x3c) = 0xfffffffe;
      if (uVar14 == 0) break;
      piVar13 = (int *)(lVar5 + 4);
      while (piVar13[-1] != 0x9c60fd9) {
        piVar13 = piVar13 + 2;
        uVar14 = uVar14 - 1;
        if (uVar14 == 0) goto LAB_0217c828;
      }
      iVar17 = 0;
      if (*piVar13 != -1) {
        iVar17 = *piVar13;
      }
      *(int *)(puVar8 + 0x3c) = iVar17;
      uVar18 = *puVar21;
      if (uVar18 == 0) break;
    } while( true );
  }
LAB_0217c828:
  uVar18 = 0;
LAB_0217c82c:
  uVar15 = uVar15 + uVar18;
  uVar18 = *puVar21;
  bVar1 = (bool)(uVar11 < uVar15 | bVar6);
  iVar17 = 5;
  if (!(bool)(uVar11 < uVar15 & (bVar6 ^ 1))) {
    iVar17 = iVar16;
  }
  if (uVar18 != 0) {
    cVar19 = DAT_053f6370;
    do {
      if (cVar19 == '\0') {
        cVar19 = '\x01';
        *(undefined8 *)puVar8 = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
        DAT_053f6370 = '\x01';
        *(undefined8 *)(puVar8 + 0x40) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x38) = 0xffffffffffffffff;
        uVar18 = *puVar21;
      }
      else {
        uVar20 = *(uint *)(puVar8 + 0x40);
        if (-1 < (int)uVar20) {
          if ((byte *)((ulong)uVar20 + (long)puVar21) != (byte *)0x0) {
            uVar18 = (uint)*(byte *)((ulong)uVar20 + (long)puVar21);
            goto LAB_0217c92c;
          }
          break;
        }
        if (uVar20 != 0xffffffff) break;
      }
      puVar12 = (uint *)(ulong)uVar18;
      uVar18 = 0;
      if ((puVar12 == (uint *)0x0) || (uVar18 = 0, puVar21 == puVar12)) goto LAB_0217c92c;
      lVar5 = 0xc;
      if (*(char *)((long)puVar21 + (10 - (long)puVar12)) != '\0') {
        lVar5 = 0x1c;
      }
      lVar5 = (long)puVar21 + (lVar5 - (long)puVar12);
      uVar18 = 0;
      if (lVar5 == 0) goto LAB_0217c92c;
      uVar14 = (ulong)*(ushort *)((long)puVar21 + (8 - (long)puVar12));
      *(undefined4 *)(puVar8 + 0x40) = 0xfffffffe;
      if (uVar14 == 0) break;
      piVar13 = (int *)(lVar5 + 4);
      while (piVar13[-1] != -0x4e859744) {
        piVar13 = piVar13 + 2;
        uVar14 = uVar14 - 1;
        if (uVar14 == 0) goto LAB_0217c928;
      }
      iVar16 = 0;
      if (*piVar13 != -1) {
        iVar16 = *piVar13;
      }
      *(int *)(puVar8 + 0x40) = iVar16;
      uVar18 = *puVar21;
      if (uVar18 == 0) break;
    } while( true );
  }
LAB_0217c928:
  uVar18 = 0;
LAB_0217c92c:
  uVar18 = uVar18 + uVar15;
  uVar20 = *puVar21;
  iVar16 = 6;
  if (!(bool)(uVar11 < uVar18 & (bVar1 ^ 1U))) {
    iVar16 = iVar17;
  }
  if (uVar20 == 0) {
LAB_0217ca28:
    uVar20 = 0;
LAB_0217ca2c:
    if ((uVar11 >= uVar18 && !bVar1) && uVar11 < uVar20 + uVar18) {
      iVar16 = 7;
    }
    if (iVar16 < 0) {
      return -1;
    }
    FUN_0217ca90(param_2,puVar21,iVar16);
    return iVar16;
  }
  cVar19 = DAT_053f6370;
  do {
    if (cVar19 == '\0') {
      cVar19 = '\x01';
      *(undefined8 *)puVar8 = 0xffffffffffffffff;
      *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
      DAT_053f6370 = '\x01';
      *(undefined8 *)(puVar8 + 0x40) = 0xffffffffffffffff;
      *(undefined8 *)(puVar8 + 0x10) = 0xffffffffffffffff;
      *(undefined8 *)(puVar8 + 0x18) = 0xffffffffffffffff;
      *(undefined8 *)(puVar8 + 0x20) = 0xffffffffffffffff;
      *(undefined8 *)(puVar8 + 0x28) = 0xffffffffffffffff;
      *(undefined8 *)(puVar8 + 0x30) = 0xffffffffffffffff;
      *(undefined8 *)(puVar8 + 0x38) = 0xffffffffffffffff;
      uVar20 = *puVar21;
    }
    else {
      uVar15 = *(uint *)(puVar8 + 0x44);
      if (-1 < (int)uVar15) {
        if ((byte *)((ulong)uVar15 + (long)puVar21) != (byte *)0x0) {
          uVar20 = (uint)*(byte *)((ulong)uVar15 + (long)puVar21);
          goto LAB_0217ca2c;
        }
        goto LAB_0217ca28;
      }
      if (uVar15 != 0xffffffff) goto LAB_0217ca28;
    }
    puVar12 = (uint *)(ulong)uVar20;
    uVar20 = 0;
    if ((puVar12 == (uint *)0x0) || (uVar20 = 0, puVar21 == puVar12)) goto LAB_0217ca2c;
    lVar5 = 0xc;
    if (*(char *)((long)puVar21 + (10 - (long)puVar12)) != '\0') {
      lVar5 = 0x1c;
    }
    lVar5 = (long)puVar21 + (lVar5 - (long)puVar12);
    uVar20 = 0;
    if (lVar5 == 0) goto LAB_0217ca2c;
    uVar14 = (ulong)*(ushort *)((long)puVar21 + (8 - (long)puVar12));
    *(undefined4 *)(puVar8 + 0x44) = 0xfffffffe;
    if (uVar14 == 0) goto LAB_0217ca28;
    piVar13 = (int *)(lVar5 + 4);
    while (piVar13[-1] != -0x16e68716) {
      piVar13 = piVar13 + 2;
      uVar14 = uVar14 - 1;
      if (uVar14 == 0) goto LAB_0217ca28;
    }
    iVar17 = 0;
    if (*piVar13 != -1) {
      iVar17 = *piVar13;
    }
    *(int *)(puVar8 + 0x44) = iVar17;
    uVar20 = *puVar21;
    if (uVar20 == 0) goto LAB_0217ca28;
  } while( true );
LAB_0217c3b4:
  if (-1 < (int)uVar15) {
    uVar20 = 0;
    if ((byte *)((long)puVar21 + (ulong)uVar15) != (byte *)0x0) {
      uVar20 = (uint)*(byte *)((long)puVar21 + (ulong)uVar15);
    }
    goto LAB_0217c428;
  }
  if ((uVar15 != 0xffffffff) || (lVar5 = (long)puVar21 - (ulong)uVar20, lVar5 == 0))
  goto LAB_0217c424;
  lVar3 = 0xc;
  if (*(char *)(lVar5 + 10) != '\0') {
    lVar3 = 0x1c;
  }
  if (lVar3 + lVar5 == 0) goto LAB_0217c424;
  uVar14 = (ulong)*(ushort *)(lVar5 + 8);
  *(undefined4 *)(puVar8 + 0x2c) = 0xfffffffe;
  if (uVar14 == 0) goto LAB_0217c424;
  puVar12 = (uint *)(lVar3 + lVar5 + 4);
  while (puVar12[-1] != 0x86a4988e) {
    puVar12 = puVar12 + 2;
    uVar14 = uVar14 - 1;
    if (uVar14 == 0) goto LAB_0217c424;
  }
  uVar15 = 0;
  if (*puVar12 != 0xffffffff) {
    uVar15 = *puVar12;
  }
  *(uint *)(puVar8 + 0x2c) = uVar15;
  uVar20 = *puVar21;
  if (uVar20 == 0) goto LAB_0217c424;
  goto LAB_0217c3b4;
LAB_0217c424:
  uVar20 = 0;
  goto LAB_0217c428;
}


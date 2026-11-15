
void FUN_01ff4740(long param_1,short *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  bool bVar9;
  int iVar10;
  char cVar11;
  long lVar12;
  ushort uVar13;
  ulong uVar14;
  uint *puVar15;
  int *piVar16;
  uint *puVar17;
  undefined4 local_80;
  undefined4 uStack_7c;
  uint local_78;
  uint auStack_74 [4];
  undefined4 uStack_64;
  uint local_60;
  undefined4 local_5c;
  uint local_58;
  undefined4 local_54;
  uint local_38;
  uint local_34;
  
  puVar8 = PTR_DAT_04bc2470;
  puVar7 = PTR_DAT_04bc2468;
  puVar6 = PTR_DAT_04bb37e0;
  uVar5 = *(uint *)(param_1 + 0xe744);
  lVar12 = *(long *)PTR_DAT_04bb4978;
  if ((int)*(uint *)(lVar12 + 0x948) < 1) {
    if ((((*(long *)(lVar12 + 0x838) == 0) ||
         (puVar17 = *(uint **)(*(long *)(lVar12 + 0x838) + 8), puVar17 == (uint *)0x0)) ||
        ((uVar5 < *(uint *)(lVar12 + 0x850) &&
         (*(char *)(*(long *)(lVar12 + 0x858) + (long)(int)uVar5) == '\0')))) ||
       (((*puVar17 <= uVar5 || (puVar17[1] == 0)) || ((ushort)puVar17[2] == 0)))) goto LAB_01ff48e4;
    iVar10 = 0xc;
    if (*(char *)((long)puVar17 + 10) != '\0') {
      iVar10 = 0x1c;
    }
    puVar17 = (uint *)((ulong)(puVar17[1] * uVar5 + (uint)(ushort)puVar17[2] * 8 + iVar10) +
                      (long)puVar17);
  }
  else {
    if (*(uint *)(lVar12 + 0x948) <= uVar5) goto LAB_01ff48e4;
    if (*(uint *)(lVar12 + 0x938) <= uVar5) {
      uVar5 = 0;
    }
    puVar17 = *(uint **)(*(long *)(lVar12 + 0x940) + (ulong)uVar5 * 8);
  }
  if (puVar17 != (uint *)0x0) {
    if (*puVar17 != 0) {
      cVar11 = *PTR_DAT_04bc2468;
      do {
        if (cVar11 == '\0') {
          cVar11 = '\x01';
          *(undefined8 *)puVar8 = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
          *puVar7 = 1;
          *(undefined8 *)(puVar8 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x18) = 0xffffffffffffffff;
        }
        else {
          uVar5 = *(uint *)(puVar8 + 0x10);
          if (-1 < (int)uVar5) {
            if ((ushort *)((ulong)uVar5 + (long)puVar17) != (ushort *)0x0) {
              uVar13 = *(ushort *)((ulong)uVar5 + (long)puVar17);
              goto LAB_01ff493c;
            }
            break;
          }
          if (uVar5 != 0xffffffff) break;
        }
        puVar15 = (uint *)(ulong)*puVar17;
        uVar13 = 0xfffe;
        if ((*puVar17 == 0) || (puVar17 == puVar15)) goto LAB_01ff493c;
        lVar12 = 0xc;
        if (*(char *)((long)puVar17 + (10 - (long)puVar15)) != '\0') {
          lVar12 = 0x1c;
        }
        lVar12 = (long)puVar17 + (lVar12 - (long)puVar15);
        if (lVar12 == 0) break;
        uVar14 = (ulong)*(ushort *)((long)puVar17 + (8 - (long)puVar15));
        *(undefined4 *)(puVar8 + 0x10) = 0xfffffffe;
        if (uVar14 == 0) break;
        piVar16 = (int *)(lVar12 + 4);
        while (piVar16[-1] != -0x32a6bb8e) {
          piVar16 = piVar16 + 2;
          uVar14 = uVar14 - 1;
          if (uVar14 == 0) goto LAB_01ff4938;
        }
        iVar10 = 0;
        if (*piVar16 != -1) {
          iVar10 = *piVar16;
        }
        *(int *)(puVar8 + 0x10) = iVar10;
        if (*puVar17 == 0) break;
      } while( true );
    }
LAB_01ff4938:
    uVar13 = 0xfffe;
LAB_01ff493c:
    local_38 = (uint)uVar13;
    local_34 = 0;
    FUN_0277d4ac(&local_38);
    if (*puVar17 != 0) {
      cVar11 = *puVar7;
      do {
        if (cVar11 == '\0') {
          cVar11 = '\x01';
          *(undefined8 *)puVar8 = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
          *puVar7 = 1;
          *(undefined8 *)(puVar8 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x18) = 0xffffffffffffffff;
        }
        else {
          uVar5 = *(uint *)(puVar8 + 0x14);
          if (-1 < (int)uVar5) {
            if ((ushort *)((ulong)uVar5 + (long)puVar17) != (ushort *)0x0) {
              uVar13 = *(ushort *)((ulong)uVar5 + (long)puVar17);
              goto LAB_01ff4a2c;
            }
            break;
          }
          if (uVar5 != 0xffffffff) break;
        }
        puVar15 = (uint *)(ulong)*puVar17;
        uVar13 = 0xfffe;
        if ((*puVar17 == 0) || (puVar17 == puVar15)) goto LAB_01ff4a2c;
        lVar12 = 0xc;
        if (*(char *)((long)puVar17 + (10 - (long)puVar15)) != '\0') {
          lVar12 = 0x1c;
        }
        lVar12 = (long)puVar17 + (lVar12 - (long)puVar15);
        if (lVar12 == 0) break;
        uVar14 = (ulong)*(ushort *)((long)puVar17 + (8 - (long)puVar15));
        *(undefined4 *)(puVar8 + 0x14) = 0xfffffffe;
        if (uVar14 == 0) break;
        piVar16 = (int *)(lVar12 + 4);
        while (piVar16[-1] != -0x7506c15e) {
          piVar16 = piVar16 + 2;
          uVar14 = uVar14 - 1;
          if (uVar14 == 0) goto LAB_01ff4a28;
        }
        iVar10 = 0;
        if (*piVar16 != -1) {
          iVar10 = *piVar16;
        }
        *(int *)(puVar8 + 0x14) = iVar10;
        if (*puVar17 == 0) break;
      } while( true );
    }
LAB_01ff4a28:
    uVar13 = 0xfffe;
LAB_01ff4a2c:
    local_58 = (uint)uVar13;
    local_54 = 0;
    FUN_0277d4ac(&local_58);
    if (*puVar17 == 0) {
LAB_01ff4b18:
      uVar13 = 0xfffe;
LAB_01ff4b1c:
      local_60 = (uint)uVar13;
      local_5c = 0;
      FUN_0277d4ac(&local_60);
      local_78 = local_38;
      auStack_74[0] = local_34;
      auStack_74[1] = local_58;
      auStack_74[2] = local_54;
      auStack_74[3] = local_60;
      uStack_64 = local_5c;
      puVar17 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
      uVar5 = *puVar17 ^ *puVar17 << 0xb;
      uVar4 = puVar17[3];
      *puVar17 = puVar17[1];
      puVar17[1] = puVar17[2];
      uVar3 = uVar5 ^ uVar4;
      puVar17[2] = uVar4;
      puVar17[3] = uVar5 >> 8 ^ uVar4 >> 0x13 ^ uVar3;
      uVar3 = uVar3 >> 0x1e;
      puVar17 = auStack_74 + (ulong)uVar3 * 2 + -1;
      bVar9 = uVar3 != 3;
      puVar15 = (uint *)PTR_DAT_04bb37e0;
      if (bVar9) {
        puVar15 = puVar17;
      }
      uVar5 = *puVar15;
      puVar2 = PTR_DAT_04bb37e0 + 2;
      if (bVar9) {
        puVar2 = (undefined1 *)((ulong)puVar17 | 2);
      }
      puVar1 = PTR_DAT_04bb37e0 + 3;
      puVar15 = (uint *)(PTR_DAT_04bb37e0 + 4);
      *param_2 = (short)uVar5;
      *(undefined1 *)(param_2 + 1) = *puVar2;
      if (bVar9) {
        puVar15 = auStack_74 + (ulong)uVar3 * 2;
        puVar1 = (undefined1 *)((ulong)puVar17 | 3);
      }
      *(undefined1 *)((long)param_2 + 3) = *puVar1;
      *(uint *)(param_2 + 2) = *puVar15;
      if ((short)uVar5 == -2) {
        return;
      }
      iVar10 = FUN_0277d6c4(param_2);
      if (iVar10 == 0x3928) {
        FUN_021ea4a0(&local_80,*(undefined8 *)(param_1 + 8));
      }
      else {
        iVar10 = FUN_0277d6c4(param_2);
        if (iVar10 == 0x392e) {
          FUN_021ea1d0(&local_80,*(undefined8 *)(param_1 + 8));
        }
        else {
          iVar10 = FUN_0277d6c4(param_2);
          if (iVar10 != 0x39c6) {
            return;
          }
          FUN_021ea080(&local_80,*(undefined8 *)(param_1 + 8));
        }
      }
      *(undefined4 *)param_2 = local_80;
      *(undefined4 *)(param_2 + 2) = uStack_7c;
      return;
    }
    cVar11 = *puVar7;
    do {
      if (cVar11 == '\0') {
        cVar11 = '\x01';
        *(undefined8 *)puVar8 = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
        *puVar7 = 1;
        *(undefined8 *)(puVar8 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x18) = 0xffffffffffffffff;
      }
      else {
        uVar5 = *(uint *)(puVar8 + 0x18);
        if (-1 < (int)uVar5) {
          if ((ushort *)((ulong)uVar5 + (long)puVar17) != (ushort *)0x0) {
            uVar13 = *(ushort *)((ulong)uVar5 + (long)puVar17);
            goto LAB_01ff4b1c;
          }
          goto LAB_01ff4b18;
        }
        if (uVar5 != 0xffffffff) goto LAB_01ff4b18;
      }
      puVar15 = (uint *)(ulong)*puVar17;
      uVar13 = 0xfffe;
      if ((*puVar17 == 0) || (puVar17 == puVar15)) goto LAB_01ff4b1c;
      lVar12 = 0xc;
      if (*(char *)((long)puVar17 + (10 - (long)puVar15)) != '\0') {
        lVar12 = 0x1c;
      }
      lVar12 = (long)puVar17 + (lVar12 - (long)puVar15);
      if (lVar12 == 0) goto LAB_01ff4b18;
      uVar14 = (ulong)*(ushort *)((long)puVar17 + (8 - (long)puVar15));
      *(undefined4 *)(puVar8 + 0x18) = 0xfffffffe;
      if (uVar14 == 0) goto LAB_01ff4b18;
      piVar16 = (int *)(lVar12 + 4);
      while (piVar16[-1] != -0x4866e8ee) {
        piVar16 = piVar16 + 2;
        uVar14 = uVar14 - 1;
        if (uVar14 == 0) goto LAB_01ff4b18;
      }
      iVar10 = 0;
      if (*piVar16 != -1) {
        iVar10 = *piVar16;
      }
      *(int *)(puVar8 + 0x18) = iVar10;
      if (*puVar17 == 0) goto LAB_01ff4b18;
    } while( true );
  }
LAB_01ff48e4:
  *param_2 = *(short *)PTR_DAT_04bb37e0;
  *(undefined *)(param_2 + 1) = puVar6[2];
  *(undefined *)((long)param_2 + 3) = puVar6[3];
  *(undefined4 *)(param_2 + 2) = *(undefined4 *)(puVar6 + 4);
  return;
}


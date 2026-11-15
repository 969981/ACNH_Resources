
bool FUN_021de8e0(uint *param_1,int *param_2,int *param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  uint uVar5;
  ulong uVar6;
  byte bVar7;
  long lVar8;
  int iVar9;
  char cVar10;
  byte bVar11;
  int *piVar12;
  uint *puVar13;
  uint *puVar14;
  
  if (0x1a < (int)*param_1) {
    return false;
  }
  lVar8 = *(long *)PTR_DAT_04bb3968;
  if (lVar8 == 0) {
LAB_021de9c4:
    puVar14 = (uint *)PTR_DAT_04bc2828;
  }
  else {
    uVar5 = *param_1;
    if ((int)*(uint *)(lVar8 + 0x16ac8) < 1) {
      if ((((*(long *)(lVar8 + 0x169b8) != 0) &&
           (puVar14 = *(uint **)(*(long *)(lVar8 + 0x169b8) + 8), puVar14 != (uint *)0x0)) &&
          ((*(uint *)(lVar8 + 0x169d0) <= uVar5 ||
           (*(char *)(*(long *)(lVar8 + 0x169d8) + (long)(int)uVar5) != '\0')))) &&
         (((uVar5 < *puVar14 && (puVar14[1] != 0)) && ((ushort)puVar14[2] != 0)))) {
        iVar9 = 0xc;
        if (*(char *)((long)puVar14 + 10) != '\0') {
          iVar9 = 0x1c;
        }
        puVar14 = (uint *)((ulong)(puVar14[1] * uVar5 + (uint)(ushort)puVar14[2] * 8 + iVar9) +
                          (long)puVar14);
        if (puVar14 != (uint *)0x0) goto LAB_021de9cc;
      }
      goto LAB_021de9c4;
    }
    if (*(uint *)(lVar8 + 0x16ac8) <= uVar5) goto LAB_021de9c4;
    if (*(uint *)(lVar8 + 0x16ab8) <= uVar5) {
      uVar5 = 0;
    }
    puVar14 = *(uint **)(*(long *)(lVar8 + 0x16ac0) + (ulong)uVar5 * 8);
    if (puVar14 == (uint *)0x0) goto LAB_021de9c4;
  }
LAB_021de9cc:
  if ((0 < *param_2) &&
     (uVar5 = FUN_00a86724(*(undefined8 *)PTR_DAT_04bb30a0), puVar3 = PTR_DAT_04bc1568,
     puVar2 = PTR_DAT_04bc1560, (uVar5 & 0xfffffffe) == 4)) {
    if (*puVar14 != 0) {
      cVar10 = *PTR_DAT_04bc1560;
      do {
        if (cVar10 == '\0') {
          cVar10 = '\x01';
          *(undefined8 *)puVar3 = 0xffffffffffffffff;
          *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
          *puVar2 = 1;
          *(undefined8 *)(puVar3 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar3 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar3 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar3 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar3 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar3 + 0x38) = 0xffffffffffffffff;
          *(undefined8 *)(puVar3 + 0x40) = 0xffffffffffffffff;
          *(undefined8 *)(puVar3 + 0x48) = 0xffffffffffffffff;
          *(undefined8 *)(puVar3 + 0x50) = 0xffffffffffffffff;
          *(undefined8 *)(puVar3 + 0x58) = 0xffffffffffffffff;
          *(undefined8 *)(puVar3 + 0x60) = 0xffffffffffffffff;
          *(undefined8 *)(puVar3 + 0x68) = 0xffffffffffffffff;
          *(undefined8 *)(puVar3 + 0x70) = 0xffffffffffffffff;
          *(undefined8 *)(puVar3 + 0x78) = 0xffffffffffffffff;
          *(undefined8 *)(puVar3 + 0x80) = 0xffffffffffffffff;
          *(undefined8 *)(puVar3 + 0x88) = 0xffffffffffffffff;
          *(undefined8 *)(puVar3 + 0x90) = 0xffffffffffffffff;
          *(undefined8 *)(puVar3 + 0x98) = 0xffffffffffffffff;
        }
        else {
          uVar5 = *(uint *)(puVar3 + 0x50);
          if (-1 < (int)uVar5) {
            if ((byte *)((ulong)uVar5 + (long)puVar14) != (byte *)0x0) {
              bVar11 = *(byte *)((ulong)uVar5 + (long)puVar14);
              goto LAB_021deafc;
            }
            break;
          }
          if (uVar5 != 0xffffffff) break;
        }
        puVar13 = (uint *)(ulong)*puVar14;
        bVar11 = 2;
        if ((*puVar14 == 0) || (puVar14 == puVar13)) goto LAB_021deafc;
        lVar8 = 0xc;
        if (*(char *)((long)puVar14 + (10 - (long)puVar13)) != '\0') {
          lVar8 = 0x1c;
        }
        lVar8 = (long)puVar14 + (lVar8 - (long)puVar13);
        if (lVar8 == 0) break;
        uVar6 = (ulong)*(ushort *)((long)puVar14 + (8 - (long)puVar13));
        *(undefined4 *)(puVar3 + 0x50) = 0xfffffffe;
        if (uVar6 == 0) break;
        piVar12 = (int *)(lVar8 + 4);
        while (piVar12[-1] != 0x67850558) {
          piVar12 = piVar12 + 2;
          uVar6 = uVar6 - 1;
          if (uVar6 == 0) goto LAB_021deaf8;
        }
        iVar9 = 0;
        if (*piVar12 != -1) {
          iVar9 = *piVar12;
        }
        *(int *)(puVar3 + 0x50) = iVar9;
        if (*puVar14 == 0) break;
      } while( true );
    }
LAB_021deaf8:
    bVar11 = 2;
LAB_021deafc:
    if (1 < bVar11) {
      bVar11 = 2;
    }
    if (((bVar11 == 1) && (uVar6 = FUN_021ded20(), (uVar6 & 1) == 0)) && (*param_3 != 3)) {
      return true;
    }
  }
  puVar3 = PTR_DAT_04bc1568;
  puVar2 = PTR_DAT_04bc1560;
  if (*puVar14 != 0) {
    cVar10 = *PTR_DAT_04bc1560;
    do {
      if (cVar10 == '\0') {
        cVar10 = '\x01';
        *(undefined8 *)puVar3 = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
        *puVar2 = 1;
        *(undefined8 *)(puVar3 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x38) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x40) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x48) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x50) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x58) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x60) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x68) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x70) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x78) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x80) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x88) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x90) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x98) = 0xffffffffffffffff;
      }
      else {
        uVar5 = *(uint *)(puVar3 + 0x4c);
        if (-1 < (int)uVar5) {
          if ((byte *)((ulong)uVar5 + (long)puVar14) != (byte *)0x0) {
            bVar11 = *(byte *)((ulong)uVar5 + (long)puVar14);
            goto LAB_021dec30;
          }
          break;
        }
        if (uVar5 != 0xffffffff) break;
      }
      puVar13 = (uint *)(ulong)*puVar14;
      bVar11 = 2;
      if ((*puVar14 == 0) || (puVar14 == puVar13)) goto LAB_021dec30;
      lVar8 = 0xc;
      if (*(char *)((long)puVar14 + (10 - (long)puVar13)) != '\0') {
        lVar8 = 0x1c;
      }
      lVar8 = (long)puVar14 + (lVar8 - (long)puVar13);
      if (lVar8 == 0) break;
      uVar6 = (ulong)*(ushort *)((long)puVar14 + (8 - (long)puVar13));
      *(undefined4 *)(puVar3 + 0x4c) = 0xfffffffe;
      if (uVar6 == 0) break;
      piVar12 = (int *)(lVar8 + 4);
      while (piVar12[-1] != -0x5621fc7c) {
        piVar12 = piVar12 + 2;
        uVar6 = uVar6 - 1;
        if (uVar6 == 0) goto LAB_021dec2c;
      }
      iVar9 = 0;
      if (*piVar12 != -1) {
        iVar9 = *piVar12;
      }
      *(int *)(puVar3 + 0x4c) = iVar9;
      if (*puVar14 == 0) break;
    } while( true );
  }
LAB_021dec2c:
  bVar11 = 2;
LAB_021dec30:
  iVar9 = *param_2;
  bVar7 = bVar11;
  if (1 < bVar11) {
    bVar7 = 2;
  }
  if (iVar9 == 2) {
    if (bVar7 != 0) {
      return true;
    }
  }
  else {
    if (iVar9 != 1) {
      if (iVar9 != 0) {
        return false;
      }
      puVar14 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
      uVar5 = *puVar14 ^ *puVar14 << 0xb;
      uVar1 = puVar14[3];
      *puVar14 = puVar14[1];
      puVar14[1] = puVar14[2];
      uVar5 = uVar5 >> 8 ^ uVar1 >> 0x13 ^ uVar5 ^ uVar1;
      puVar14[2] = uVar1;
      puVar14[3] = uVar5;
      bVar4 = 0x31 < (uint)((ulong)uVar5 * 100 >> 0x20);
      goto LAB_021decf0;
    }
    if (bVar7 != 1) {
      return 1 < bVar11;
    }
  }
  puVar14 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
  uVar5 = *puVar14 ^ *puVar14 << 0xb;
  uVar1 = puVar14[3];
  *puVar14 = puVar14[1];
  puVar14[1] = puVar14[2];
  uVar5 = uVar5 >> 8 ^ uVar1 >> 0x13 ^ uVar5 ^ uVar1;
  puVar14[2] = uVar1;
  puVar14[3] = uVar5;
  bVar4 = 0x45 < (uint)((ulong)uVar5 * 100 >> 0x20);
LAB_021decf0:
  return !bVar4;
}



/* WARNING: Removing unreachable block (ram,0x01318cb8) */
/* WARNING: Removing unreachable block (ram,0x01318cc8) */
/* WARNING: Removing unreachable block (ram,0x01318cd4) */

bool FUN_01318c80(long param_1,int param_2,uint param_3)

{
  ushort *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  uint *puVar12;
  uint uVar13;
  char cVar14;
  uint *puVar15;
  ulong uVar16;
  int *piVar17;
  undefined8 *puVar18;
  ushort local_44 [8];
  uint local_34;
  
  puVar5 = PTR_DAT_04bb27a8;
  local_44[0] = 0;
  local_44[1] = 0;
  lVar10 = *(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
  if (lVar10 == 0) {
    return false;
  }
  lVar9 = *(long *)(lVar10 + 0xa8);
  if (lVar9 == 0) {
    return false;
  }
  iVar8 = *(int *)(param_1 + 8);
  if (iVar8 < *(int *)(lVar9 + 0x18) || *(int *)(lVar9 + 0x28) < iVar8) {
    return false;
  }
  iVar3 = *(int *)(param_1 + 0xc);
  if (iVar3 < *(int *)(lVar9 + 0x1c)) {
    return false;
  }
  if (*(int *)(lVar9 + 0x2c) < iVar3) {
    return false;
  }
  lVar10 = *(long *)(lVar10 + 0xb0);
  if (lVar10 == 0) goto LAB_01318dc0;
  uVar13 = iVar8 - *(int *)(lVar10 + 0x28);
  uVar2 = *(uint *)(lVar10 + 0x18);
  uVar4 = iVar3 - *(int *)(lVar10 + 0x2c);
  if ((uVar13 < uVar2 && uVar4 <= *(uint *)(lVar10 + 0x1c)) &&
      (uVar2 <= uVar13 || *(uint *)(lVar10 + 0x1c) != uVar4)) {
    uVar13 = uVar13 + uVar2 * uVar4;
LAB_01318d88:
    if (*(uint *)(lVar10 + 0x30) <= uVar13) {
      uVar13 = 0;
    }
    puVar11 = (undefined8 *)(*(long *)(lVar10 + 0x38) + (long)(int)uVar13 * 0x68);
  }
  else {
    if (*(char *)(lVar10 + 0x88) != '\0') {
      uVar2 = iVar8 - *(int *)(lVar10 + 0x98);
      uVar4 = iVar3 - *(int *)(lVar10 + 0x9c);
      uVar13 = *(uint *)(lVar10 + 0xa0);
      if ((uVar2 < uVar13 && uVar4 <= *(uint *)(lVar10 + 0xa4)) &&
          (uVar13 <= uVar2 || *(uint *)(lVar10 + 0xa4) != uVar4)) {
        uVar13 = uVar2 + uVar13 * uVar4 + *(int *)(lVar10 + 0x8c);
        goto LAB_01318d88;
      }
    }
    puVar11 = &DAT_051a50f0;
  }
  if ((*(byte *)((long)puVar11 + 0xd) & 1) == 0) {
    return false;
  }
LAB_01318dc0:
  FUN_01309ec4(local_44);
  puVar7 = PTR_DAT_04bbbde0;
  puVar6 = PTR_DAT_04bbbdd8;
  local_34 = param_3;
  puVar1 = local_44 + (ulong)param_3 * 3;
  if (1 < param_3) {
    puVar1 = local_44;
  }
  lVar10 = *(long *)puVar5;
  uVar13 = (uint)*puVar1 - (uint)*(ushort *)(lVar10 + 0x408);
  if ((uVar13 < *(uint *)(lVar10 + 1000)) &&
     (puVar12 = *(uint **)(*(long *)(lVar10 + 0x3f0) + (long)(int)uVar13 * 8),
     puVar12 != (uint *)0x0)) {
    uVar13 = *puVar12;
    if (uVar13 != 0) {
      cVar14 = *PTR_DAT_04bbbdd8;
      do {
        if (cVar14 == '\0') {
          cVar14 = '\x01';
          *(undefined8 *)puVar7 = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
          *puVar6 = 1;
          *(undefined8 *)(puVar7 + 0xa0) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x38) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x40) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x48) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x50) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x58) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x60) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x68) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x70) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x78) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x80) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x88) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x90) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x98) = 0xffffffffffffffff;
          uVar13 = *puVar12;
        }
        else {
          uVar2 = *(uint *)(puVar7 + 0xa4);
          if (-1 < (int)uVar2) {
            puVar18 = (undefined8 *)((ulong)uVar2 + (long)puVar12);
            goto LAB_01318f00;
          }
          if (uVar2 != 0xffffffff) break;
        }
        puVar15 = (uint *)(ulong)uVar13;
        puVar18 = (undefined8 *)0x0;
        if ((puVar15 == (uint *)0x0) || (puVar12 == puVar15)) goto LAB_01318f00;
        lVar10 = 0xc;
        if (*(char *)((long)puVar12 + (10 - (long)puVar15)) != '\0') {
          lVar10 = 0x1c;
        }
        lVar10 = (long)puVar12 + (lVar10 - (long)puVar15);
        puVar18 = (undefined8 *)0x0;
        if (lVar10 == 0) goto LAB_01318f00;
        uVar16 = (ulong)*(ushort *)((long)puVar12 + (8 - (long)puVar15));
        *(undefined4 *)(puVar7 + 0xa4) = 0xfffffffe;
        if (uVar16 == 0) break;
        piVar17 = (int *)(lVar10 + 4);
        while (piVar17[-1] != 0x39b5a93d) {
          piVar17 = piVar17 + 2;
          uVar16 = uVar16 - 1;
          if (uVar16 == 0) goto LAB_01318efc;
        }
        iVar8 = 0;
        if (*piVar17 != -1) {
          iVar8 = *piVar17;
        }
        *(int *)(puVar7 + 0xa4) = iVar8;
        uVar13 = *puVar12;
        if (uVar13 == 0) break;
      } while( true );
    }
LAB_01318efc:
    puVar18 = (undefined8 *)0x0;
LAB_01318f00:
    puVar11 = *(undefined8 **)PTR_PTR_04bbc340;
    if (puVar18 != (undefined8 *)0x0) {
      puVar11 = puVar18;
    }
  }
  else {
    puVar11 = &DAT_0407ebb1;
  }
  iVar8 = FUN_006bd550(puVar11,0);
  return iVar8 == param_2;
}


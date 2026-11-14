
byte FUN_01b07660(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  ushort *puVar7;
  ulong uVar8;
  long lVar9;
  uint *puVar10;
  uint *puVar11;
  char cVar12;
  int *piVar13;
  long lVar14;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined **local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  long local_28;
  
  iVar5 = FUN_01afcfa0();
  if ((((iVar5 != 0) && (puVar7 = (ushort *)FUN_01afd600(param_1), puVar7 != (ushort *)0x0)) &&
      ((*puVar7 & 0x18) == 0x10)) || (uVar8 = FUN_01b085e0(param_1), (uVar8 & 1) == 0))
  goto LAB_01b079bc;
  uVar8 = FUN_01b032d0(param_1);
  if ((((uVar8 & 1) != 0) && (uVar8 = FUN_01b032d0(param_1), (uVar8 & 1) != 0)) &&
     ((*(byte *)(param_1 + 0xb) & 3) != 0)) {
    FUN_01b079ec(&local_40,param_1);
    puVar2 = PTR_DAT_04bb43c0;
    local_28 = 0;
    local_38 = &PTR_FUN_04a36b50;
    local_30 = local_40;
    uStack_2c = uStack_3c;
    lVar14 = *(long *)PTR_DAT_04bb43c0;
    uVar6 = FUN_0277d6c4(&local_30);
    lVar9 = DAT_0532a768;
    if (*(long *)puVar2 != 0) {
      lVar14 = *(long *)(lVar14 + 0x57e58);
      uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
      if ((uVar6 < *(uint *)(lVar14 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
        uVar6 = FUN_0277d6c4(&local_40);
        uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
        if ((uVar6 < *(uint *)(lVar9 + 0x1d8)) &&
           (lVar9 = *(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar6 * 8), lVar9 != 0)) {
          local_28 = lVar9;
        }
      }
    }
    bVar4 = FUN_01b07660(&local_38);
    goto LAB_01b079c0;
  }
  puVar3 = PTR_DAT_04bbfeb8;
  puVar2 = PTR_DAT_04bbfeb0;
  puVar10 = *(uint **)(param_1 + 0x10);
  if (puVar10 == (uint *)0x0) {
    uVar6 = 0xbc;
  }
  else {
    uVar1 = *puVar10;
    uVar6 = 0;
    if ((uVar1 != 0) && (puVar10 != (uint *)(ulong)uVar1)) {
      puVar11 = (uint *)((long)puVar10 - (long)(ulong)uVar1);
      uVar6 = 0;
      if (*puVar11 != 0) {
        uVar6 = puVar11[1];
        if ((uVar6 != 0) && ((ulong)(ushort)puVar11[2] != 0)) {
          lVar9 = 0xc;
          if (*(char *)((long)puVar11 + 10) != '\0') {
            lVar9 = 0x1c;
          }
          lVar9 = (long)puVar11 + lVar9 + (ulong)(ushort)puVar11[2] * 8;
          if (lVar9 != 0) {
            uVar1 = 0;
            if ((ulong)uVar6 != 0) {
              uVar1 = (uint)((ulong)((long)puVar10 - lVar9) / (ulong)uVar6);
            }
            if (*puVar11 <= uVar1) {
              uVar1 = 0xffffffff;
            }
            if ((uVar1 < *(uint *)PTR_DAT_04bc00c8) &&
               (uVar6 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar1 * 2),
               uVar6 < 0xbd)) goto LAB_01b0781c;
          }
        }
        uVar6 = 0;
      }
    }
  }
LAB_01b0781c:
  if ((int)*(uint *)(DAT_0532a778 + 0x1c0) < 1) {
    if ((((*(long *)(DAT_0532a778 + 0xb0) != 0) &&
         (puVar10 = *(uint **)(*(long *)(DAT_0532a778 + 0xb0) + 8), puVar10 != (uint *)0x0)) &&
        ((*(uint *)(DAT_0532a778 + 200) <= uVar6 ||
         (*(char *)(*(long *)(DAT_0532a778 + 0xd0) + (long)(int)uVar6) != '\0')))) &&
       (((uVar6 < *puVar10 && (puVar10[1] != 0)) && ((ushort)puVar10[2] != 0)))) {
      iVar5 = 0xc;
      if (*(char *)((long)puVar10 + 10) != '\0') {
        iVar5 = 0x1c;
      }
      puVar10 = (uint *)((ulong)(puVar10[1] * uVar6 + (uint)(ushort)puVar10[2] * 8 + iVar5) +
                        (long)puVar10);
      goto joined_r0x01b079b8;
    }
  }
  else if (uVar6 < *(uint *)(DAT_0532a778 + 0x1c0)) {
    if (*(uint *)(DAT_0532a778 + 0x1b0) <= uVar6) {
      uVar6 = 0;
    }
    puVar10 = *(uint **)(*(long *)(DAT_0532a778 + 0x1b8) + (ulong)uVar6 * 8);
joined_r0x01b079b8:
    if ((puVar10 != (uint *)0x0) && (*puVar10 != 0)) {
      cVar12 = *PTR_DAT_04bbfeb0;
      do {
        if (cVar12 == '\0') {
          cVar12 = '\x01';
          *(undefined8 *)puVar3 = 0xffffffffffffffff;
          *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
          *puVar2 = 1;
          *(undefined8 *)(puVar3 + 0x70) = 0xffffffffffffffff;
          *(undefined4 *)(puVar3 + 0x78) = 0xffffffff;
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
        }
        else {
          uVar6 = *(uint *)(puVar3 + 0x38);
          if (-1 < (int)uVar6) {
            if ((char *)((ulong)uVar6 + (long)puVar10) == (char *)0x0) break;
            bVar4 = *(char *)((ulong)uVar6 + (long)puVar10) != '\0';
            goto LAB_01b079c0;
          }
          if (uVar6 != 0xffffffff) break;
        }
        puVar11 = (uint *)(ulong)*puVar10;
        bVar4 = 0;
        if ((*puVar10 == 0) || (puVar10 == puVar11)) goto LAB_01b079c0;
        lVar9 = 0xc;
        if (*(char *)((long)puVar10 + (10 - (long)puVar11)) != '\0') {
          lVar9 = 0x1c;
        }
        lVar9 = (long)puVar10 + (lVar9 - (long)puVar11);
        if (lVar9 == 0) break;
        uVar8 = (ulong)*(ushort *)((long)puVar10 + (8 - (long)puVar11));
        *(undefined4 *)(puVar3 + 0x38) = 0xfffffffe;
        if (uVar8 == 0) break;
        piVar13 = (int *)(lVar9 + 4);
        while (piVar13[-1] != 0x732bb98) {
          bVar4 = 0;
          piVar13 = piVar13 + 2;
          uVar8 = uVar8 - 1;
          if (uVar8 == 0) goto LAB_01b079c0;
        }
        bVar4 = 0;
        iVar5 = 0;
        if (*piVar13 != -1) {
          iVar5 = *piVar13;
        }
        *(int *)(puVar3 + 0x38) = iVar5;
        if (*puVar10 == 0) goto LAB_01b079c0;
      } while( true );
    }
  }
LAB_01b079bc:
  bVar4 = 0;
LAB_01b079c0:
  return bVar4 & 1;
}


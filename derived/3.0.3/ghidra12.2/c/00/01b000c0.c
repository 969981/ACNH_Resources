
void FUN_01b000c0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  ushort *puVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  char cVar10;
  ulong uVar11;
  long lVar12;
  int *piVar13;
  long lVar14;
  undefined4 local_48;
  undefined4 uStack_44;
  
  if (*(long *)(param_1 + 0x10) == 0) {
    return;
  }
  iVar3 = FUN_01ad7260();
  puVar2 = PTR_DAT_04bbfeb8;
  puVar1 = PTR_DAT_04bbfeb0;
  if (iVar3 == 0) {
    return;
  }
  puVar8 = *(uint **)(param_1 + 0x10);
  if (puVar8 == (uint *)0x0) {
    uVar7 = 0xbc;
  }
  else {
    uVar5 = *puVar8;
    uVar7 = 0;
    if ((uVar5 != 0) && (puVar8 != (uint *)(ulong)uVar5)) {
      puVar9 = (uint *)((long)puVar8 - (long)(ulong)uVar5);
      uVar7 = 0;
      if (*puVar9 != 0) {
        uVar7 = puVar9[1];
        if ((uVar7 != 0) && ((ulong)(ushort)puVar9[2] != 0)) {
          lVar12 = 0xc;
          if (*(char *)((long)puVar9 + 10) != '\0') {
            lVar12 = 0x1c;
          }
          lVar12 = (long)puVar9 + lVar12 + (ulong)(ushort)puVar9[2] * 8;
          if (lVar12 != 0) {
            uVar5 = 0;
            if ((ulong)uVar7 != 0) {
              uVar5 = (uint)((ulong)((long)puVar8 - lVar12) / (ulong)uVar7);
            }
            if (*puVar9 <= uVar5) {
              uVar5 = 0xffffffff;
            }
            if ((uVar5 < *(uint *)PTR_DAT_04bc00c8) &&
               (uVar7 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar5 * 2),
               uVar7 < 0xbd)) goto LAB_01b0018c;
          }
        }
        uVar7 = 0;
      }
    }
  }
LAB_01b0018c:
  if ((int)*(uint *)(DAT_0532a778 + 0x1c0) < 1) {
    if ((((*(long *)(DAT_0532a778 + 0xb0) != 0) &&
         (puVar8 = *(uint **)(*(long *)(DAT_0532a778 + 0xb0) + 8), puVar8 != (uint *)0x0)) &&
        ((*(uint *)(DAT_0532a778 + 200) <= uVar7 ||
         (*(char *)(*(long *)(DAT_0532a778 + 0xd0) + (long)(int)uVar7) != '\0')))) &&
       (((uVar7 < *puVar8 && (puVar8[1] != 0)) && ((ushort)puVar8[2] != 0)))) {
      iVar3 = 0xc;
      if (*(char *)((long)puVar8 + 10) != '\0') {
        iVar3 = 0x1c;
      }
      puVar8 = (uint *)((ulong)(puVar8[1] * uVar7 + (uint)(ushort)puVar8[2] * 8 + iVar3) +
                       (long)puVar8);
      goto joined_r0x01b00338;
    }
  }
  else if (uVar7 < *(uint *)(DAT_0532a778 + 0x1c0)) {
    if (*(uint *)(DAT_0532a778 + 0x1b0) <= uVar7) {
      uVar7 = 0;
    }
    puVar8 = *(uint **)(*(long *)(DAT_0532a778 + 0x1b8) + (ulong)uVar7 * 8);
joined_r0x01b00338:
    if (puVar8 != (uint *)0x0) {
      if (*puVar8 != 0) {
        cVar10 = *PTR_DAT_04bbfeb0;
        do {
          if (cVar10 == '\0') {
            cVar10 = '\x01';
            *(undefined8 *)puVar2 = 0xffffffffffffffff;
            *(undefined8 *)(puVar2 + 8) = 0xffffffffffffffff;
            *puVar1 = 1;
            *(undefined8 *)(puVar2 + 0x70) = 0xffffffffffffffff;
            *(undefined4 *)(puVar2 + 0x78) = 0xffffffff;
            *(undefined8 *)(puVar2 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar2 + 0x18) = 0xffffffffffffffff;
            *(undefined8 *)(puVar2 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar2 + 0x28) = 0xffffffffffffffff;
            *(undefined8 *)(puVar2 + 0x30) = 0xffffffffffffffff;
            *(undefined8 *)(puVar2 + 0x38) = 0xffffffffffffffff;
            *(undefined8 *)(puVar2 + 0x40) = 0xffffffffffffffff;
            *(undefined8 *)(puVar2 + 0x48) = 0xffffffffffffffff;
            *(undefined8 *)(puVar2 + 0x50) = 0xffffffffffffffff;
            *(undefined8 *)(puVar2 + 0x58) = 0xffffffffffffffff;
            *(undefined8 *)(puVar2 + 0x60) = 0xffffffffffffffff;
            *(undefined8 *)(puVar2 + 0x68) = 0xffffffffffffffff;
          }
          else {
            uVar7 = *(uint *)(puVar2 + 0x70);
            if (-1 < (int)uVar7) {
              lVar12 = (ulong)uVar7 + (long)puVar8;
              goto LAB_01b002b8;
            }
            if (uVar7 != 0xffffffff) break;
          }
          puVar9 = (uint *)(ulong)*puVar8;
          lVar12 = 0;
          if ((*puVar8 == 0) || (puVar8 == puVar9)) goto LAB_01b002b8;
          lVar12 = 0xc;
          if (*(char *)((long)puVar8 + (10 - (long)puVar9)) != '\0') {
            lVar12 = 0x1c;
          }
          lVar14 = (long)puVar8 + (lVar12 - (long)puVar9);
          if (lVar14 == 0) break;
          uVar11 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar9));
          *(undefined4 *)(puVar2 + 0x70) = 0xfffffffe;
          lVar12 = 0;
          if (uVar11 == 0) goto LAB_01b002b8;
          piVar13 = (int *)(lVar14 + 4);
          while (piVar13[-1] != -0x7840ff18) {
            piVar13 = piVar13 + 2;
            uVar11 = uVar11 - 1;
            if (uVar11 == 0) {
              lVar12 = 0;
              goto LAB_01b002b8;
            }
          }
          iVar3 = 0;
          if (*piVar13 != -1) {
            iVar3 = *piVar13;
          }
          *(int *)(puVar2 + 0x70) = iVar3;
        } while (*puVar8 != 0);
      }
      lVar12 = 0;
LAB_01b002b8:
      lVar14 = *(long *)PTR_PTR_04bbfea8;
      if (lVar12 != 0) {
        lVar14 = lVar12;
      }
      goto LAB_01b00348;
    }
  }
  lVar14 = *(long *)(PTR_PTR_04bb2238 + 8);
LAB_01b00348:
  local_48 = *(undefined4 *)(param_1 + 8);
  uStack_44 = *(undefined4 *)(param_1 + 0xc);
  uVar4 = FUN_0277d6c4(&local_48);
  iVar3 = FUN_01ad7260(param_1);
  if ((iVar3 == 0) || (puVar6 = (ushort *)FUN_01afd600(param_1), puVar6 == (ushort *)0x0)) {
    uVar7 = 0;
  }
  else {
    uVar7 = *puVar6 & 7;
    uVar5 = FUN_01ad7260(param_1);
    if (uVar5 <= uVar7) {
      uVar7 = 0;
    }
  }
  FUN_038d1270(param_2,"%s_%05d_%d",lVar14,uVar4,uVar7);
  return;
}



ushort FUN_0088aaf0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  uint *puVar7;
  ulong uVar8;
  char cVar9;
  uint *puVar10;
  int *piVar11;
  long lVar12;
  long lVar13;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 local_28;
  undefined4 uStack_24;
  
  FUN_0088a148(&local_28);
  puVar4 = PTR_DAT_04bb43c0;
  lVar13 = *(long *)PTR_DAT_04bb43c0;
  uVar6 = FUN_0277d6c4(&local_28);
  lVar12 = *(long *)puVar4;
  if (lVar12 == 0) goto switchD_0088abfc_default;
  lVar13 = *(long *)(lVar13 + 0x57e58);
  uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
  if (*(uint *)(lVar13 + 0x1d8) <= uVar6) goto switchD_0088abfc_default;
  if (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar6 * 8) == 0) {
    return 0;
  }
  local_48 = 0;
  local_50 = local_28;
  uStack_4c = uStack_24;
  uVar6 = FUN_0277d6c4(&local_50);
  if (*(long *)puVar4 != 0) {
    lVar12 = *(long *)(lVar12 + 0x57e58);
    uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
    if ((uVar6 < *(uint *)(lVar12 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
      FUN_0277d6c4(&local_28);
    }
  }
  puVar7 = (uint *)FUN_0088a2d0(param_1,&local_28);
  puVar5 = PTR_DAT_04bb57b8;
  puVar4 = PTR_DAT_04bb57b0;
  if (puVar7 == (uint *)0x0) goto switchD_0088abfc_default;
  switch(param_3) {
  case 0:
    uVar6 = *puVar7;
    if (uVar6 == 0) {
      return 0;
    }
    if (puVar7 == (uint *)(ulong)uVar6) {
      return 0;
    }
    puVar10 = (uint *)((long)puVar7 - (long)(ulong)uVar6);
    if (*puVar10 == 0) {
      return 0;
    }
    uVar6 = puVar10[1];
    if ((uVar6 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
      lVar12 = 0xc;
      if (*(char *)((long)puVar10 + 10) != '\0') {
        lVar12 = 0x1c;
      }
      lVar12 = (long)puVar10 + lVar12 + (ulong)(ushort)puVar10[2] * 8;
      if (lVar12 != 0) {
        uVar2 = 0;
        if ((ulong)uVar6 != 0) {
          uVar2 = (uint)((ulong)((long)puVar7 - lVar12) / (ulong)uVar6);
        }
        if (*puVar10 <= uVar2) {
          uVar2 = 0xffffffff;
        }
        if (uVar2 < DAT_04ce9838) {
          uVar3 = *(ushort *)(DAT_04ce9840 + (long)(int)uVar2 * 2);
          goto LAB_0088afe8;
        }
      }
    }
  default:
switchD_0088abfc_default:
    break;
  case 1:
    if (*puVar7 != 0) {
      cVar9 = *PTR_DAT_04bb57b0;
      do {
        if (cVar9 == '\0') {
          cVar9 = '\x01';
          *(undefined8 *)puVar5 = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
          *puVar4 = 1;
          *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
        }
        else {
          uVar6 = *(uint *)(puVar5 + 8);
          uVar8 = (ulong)uVar6;
          if (-1 < (int)uVar6) goto LAB_0088afdc;
          if (uVar6 != 0xffffffff) goto switchD_0088abfc_default;
        }
        puVar10 = (uint *)(ulong)*puVar7;
        if (*puVar7 == 0) {
          return 0;
        }
        if (puVar7 == puVar10) {
          return 0;
        }
        lVar12 = 0xc;
        if (*(char *)((long)puVar7 + (10 - (long)puVar10)) != '\0') {
          lVar12 = 0x1c;
        }
        lVar12 = (long)puVar7 + (lVar12 - (long)puVar10);
        if (lVar12 == 0) goto switchD_0088abfc_default;
        uVar8 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar10));
        *(undefined4 *)(puVar5 + 8) = 0xfffffffe;
        if (uVar8 == 0) {
          return 0;
        }
        piVar11 = (int *)(lVar12 + 4);
        while (piVar11[-1] != -0x50d9fd33) {
          piVar11 = piVar11 + 2;
          uVar8 = uVar8 - 1;
          if (uVar8 == 0) {
            return 0;
          }
        }
        iVar1 = 0;
        if (*piVar11 != -1) {
          iVar1 = *piVar11;
        }
        *(int *)(puVar5 + 8) = iVar1;
      } while (*puVar7 != 0);
    }
    break;
  case 2:
    if (*puVar7 != 0) {
      cVar9 = *PTR_DAT_04bb57b0;
      do {
        if (cVar9 == '\0') {
          cVar9 = '\x01';
          *(undefined8 *)puVar5 = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
          *puVar4 = 1;
          *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
        }
        else {
          uVar6 = *(uint *)(puVar5 + 0xc);
          uVar8 = (ulong)uVar6;
          if (-1 < (int)uVar6) goto LAB_0088afdc;
          if (uVar6 != 0xffffffff) goto switchD_0088abfc_default;
        }
        puVar10 = (uint *)(ulong)*puVar7;
        if (*puVar7 == 0) {
          return 0;
        }
        if (puVar7 == puVar10) {
          return 0;
        }
        lVar12 = 0xc;
        if (*(char *)((long)puVar7 + (10 - (long)puVar10)) != '\0') {
          lVar12 = 0x1c;
        }
        lVar12 = (long)puVar7 + (lVar12 - (long)puVar10);
        if (lVar12 == 0) goto switchD_0088abfc_default;
        uVar8 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar10));
        *(undefined4 *)(puVar5 + 0xc) = 0xfffffffe;
        if (uVar8 == 0) {
          return 0;
        }
        piVar11 = (int *)(lVar12 + 4);
        while (piVar11[-1] != -0x6db9d483) {
          piVar11 = piVar11 + 2;
          uVar8 = uVar8 - 1;
          if (uVar8 == 0) {
            return 0;
          }
        }
        iVar1 = 0;
        if (*piVar11 != -1) {
          iVar1 = *piVar11;
        }
        *(int *)(puVar5 + 0xc) = iVar1;
      } while (*puVar7 != 0);
    }
    break;
  case 3:
    if (*puVar7 != 0) {
      cVar9 = *PTR_DAT_04bb57b0;
      do {
        if (cVar9 == '\0') {
          cVar9 = '\x01';
          *(undefined8 *)puVar5 = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
          *puVar4 = 1;
          *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
        }
        else {
          uVar6 = *(uint *)(puVar5 + 0x10);
          uVar8 = (ulong)uVar6;
          if (-1 < (int)uVar6) goto LAB_0088afdc;
          if (uVar6 != 0xffffffff) goto switchD_0088abfc_default;
        }
        puVar10 = (uint *)(ulong)*puVar7;
        if (*puVar7 == 0) {
          return 0;
        }
        if (puVar7 == puVar10) {
          return 0;
        }
        lVar12 = 0xc;
        if (*(char *)((long)puVar7 + (10 - (long)puVar10)) != '\0') {
          lVar12 = 0x1c;
        }
        lVar12 = (long)puVar7 + (lVar12 - (long)puVar10);
        if (lVar12 == 0) goto switchD_0088abfc_default;
        uVar8 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar10));
        *(undefined4 *)(puVar5 + 0x10) = 0xfffffffe;
        if (uVar8 == 0) {
          return 0;
        }
        piVar11 = (int *)(lVar12 + 4);
        while (piVar11[-1] != 0x2066f76d) {
          piVar11 = piVar11 + 2;
          uVar8 = uVar8 - 1;
          if (uVar8 == 0) {
            return 0;
          }
        }
        iVar1 = 0;
        if (*piVar11 != -1) {
          iVar1 = *piVar11;
        }
        *(int *)(puVar5 + 0x10) = iVar1;
      } while (*puVar7 != 0);
    }
    break;
  case 4:
    if (*puVar7 != 0) {
      cVar9 = *PTR_DAT_04bb57b0;
      do {
        if (cVar9 == '\0') {
          cVar9 = '\x01';
          *(undefined8 *)puVar5 = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
          *puVar4 = 1;
          *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
        }
        else {
          uVar6 = *(uint *)(puVar5 + 0x14);
          uVar8 = (ulong)uVar6;
          if (-1 < (int)uVar6) goto LAB_0088afdc;
          if (uVar6 != 0xffffffff) goto switchD_0088abfc_default;
        }
        puVar10 = (uint *)(ulong)*puVar7;
        if (*puVar7 == 0) {
          return 0;
        }
        if (puVar7 == puVar10) {
          return 0;
        }
        lVar12 = 0xc;
        if (*(char *)((long)puVar7 + (10 - (long)puVar10)) != '\0') {
          lVar12 = 0x1c;
        }
        lVar12 = (long)puVar7 + (lVar12 - (long)puVar10);
        if (lVar12 == 0) goto switchD_0088abfc_default;
        uVar8 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar10));
        *(undefined4 *)(puVar5 + 0x14) = 0xfffffffe;
        if (uVar8 == 0) {
          return 0;
        }
        piVar11 = (int *)(lVar12 + 4);
        while (piVar11[-1] != 0x1d06dedd) {
          piVar11 = piVar11 + 2;
          uVar8 = uVar8 - 1;
          if (uVar8 == 0) {
            return 0;
          }
        }
        iVar1 = 0;
        if (*piVar11 != -1) {
          iVar1 = *piVar11;
        }
        *(int *)(puVar5 + 0x14) = iVar1;
      } while (*puVar7 != 0);
    }
  }
  return 0;
LAB_0088afdc:
  if ((ushort *)(uVar8 + (long)puVar7) == (ushort *)0x0) {
    return 0;
  }
  uVar3 = *(ushort *)(uVar8 + (long)puVar7);
LAB_0088afe8:
  if (uVar3 < 0x14) {
    return uVar3;
  }
  goto switchD_0088abfc_default;
}


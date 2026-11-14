
ushort FUN_017c0c70(long param_1,uint param_2)

{
  long lVar1;
  uint uVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint *puVar6;
  int iVar7;
  uint *puVar8;
  char cVar9;
  uint uVar10;
  ulong uVar11;
  int *piVar12;
  
  puVar5 = PTR_DAT_04bbe400;
  puVar4 = PTR_DAT_04bbe3f8;
  if ((int)*(uint *)(param_1 + 0x3c8) < 1) {
    if (*(long *)(param_1 + 0x2b8) == 0) {
      return 0;
    }
    puVar6 = *(uint **)(*(long *)(param_1 + 0x2b8) + 8);
    if (puVar6 == (uint *)0x0) {
      return 0;
    }
    if ((param_2 < *(uint *)(param_1 + 0x2d0)) &&
       (*(char *)(*(long *)(param_1 + 0x2d8) + (long)(int)param_2) == '\0')) {
      return 0;
    }
    if (*puVar6 <= param_2) {
      return 0;
    }
    if (puVar6[1] == 0) {
      return 0;
    }
    if ((ushort)puVar6[2] == 0) {
      return 0;
    }
    iVar7 = 0xc;
    if (*(char *)((long)puVar6 + 10) != '\0') {
      iVar7 = 0x1c;
    }
    puVar6 = (uint *)((ulong)(puVar6[1] * param_2 + (uint)(ushort)puVar6[2] * 8 + iVar7) +
                     (long)puVar6);
  }
  else {
    if (*(uint *)(param_1 + 0x3c8) <= param_2) {
      return 0;
    }
    if (*(uint *)(param_1 + 0x3b8) <= param_2) {
      param_2 = 0;
    }
    puVar6 = *(uint **)(*(long *)(param_1 + 0x3c0) + (ulong)param_2 * 8);
  }
  if (puVar6 != (uint *)0x0) {
    if (*puVar6 == 0) {
LAB_017c0df8:
      uVar10 = 0;
    }
    else {
      cVar9 = *PTR_DAT_04bbe3f8;
      do {
        if (cVar9 == '\0') {
          cVar9 = '\x01';
          *(undefined8 *)puVar5 = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
          *puVar4 = 1;
          *(undefined8 *)(puVar5 + 0x30) = 0xffffffffffffffff;
          *(undefined4 *)(puVar5 + 0x38) = 0xffffffff;
          *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
        }
        else {
          uVar10 = *(uint *)(puVar5 + 0x28);
          if (-1 < (int)uVar10) {
            if ((ushort *)((ulong)uVar10 + (long)puVar6) == (ushort *)0x0) goto LAB_017c0df8;
            uVar10 = (uint)*(ushort *)((ulong)uVar10 + (long)puVar6);
            goto LAB_017c0dfc;
          }
          if (uVar10 != 0xffffffff) goto LAB_017c0df8;
        }
        puVar8 = (uint *)(ulong)*puVar6;
        uVar10 = 0;
        if ((*puVar6 == 0) || (puVar6 == puVar8)) goto LAB_017c0dfc;
        lVar1 = 0xc;
        if (*(char *)((long)puVar6 + (10 - (long)puVar8)) != '\0') {
          lVar1 = 0x1c;
        }
        lVar1 = (long)puVar6 + (lVar1 - (long)puVar8);
        if (lVar1 == 0) goto LAB_017c0df8;
        uVar11 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar8));
        *(undefined4 *)(puVar5 + 0x28) = 0xfffffffe;
        uVar10 = 0;
        if (uVar11 == 0) goto LAB_017c0dfc;
        piVar12 = (int *)(lVar1 + 4);
        while (piVar12[-1] != -0x1c5d79ea) {
          piVar12 = piVar12 + 2;
          uVar11 = uVar11 - 1;
          if (uVar11 == 0) {
            uVar10 = 0;
            goto LAB_017c0dfc;
          }
        }
        iVar7 = 0;
        if (*piVar12 != -1) {
          iVar7 = *piVar12;
        }
        *(int *)(puVar5 + 0x28) = iVar7;
      } while (*puVar6 != 0);
      uVar10 = 0;
    }
LAB_017c0dfc:
    uVar10 = uVar10 - *(ushort *)(param_1 + 0x600);
    if (((uVar10 < *(uint *)(param_1 + 0x5e0)) &&
        (puVar6 = *(uint **)(*(long *)(param_1 + 0x5e8) + (long)(int)uVar10 * 8),
        puVar6 != (uint *)0x0)) &&
       (uVar10 = *puVar6, uVar10 != 0 && puVar6 != (uint *)(ulong)uVar10)) {
      puVar8 = (uint *)((long)puVar6 - (long)(ulong)uVar10);
      if (((*puVar8 != 0) && (uVar10 = puVar8[1], uVar10 != 0)) && ((ulong)(ushort)puVar8[2] != 0))
      {
        lVar1 = 0xc;
        if (*(char *)((long)puVar8 + 10) != '\0') {
          lVar1 = 0x1c;
        }
        lVar1 = (long)puVar8 + lVar1 + (ulong)(ushort)puVar8[2] * 8;
        if (lVar1 != 0) {
          uVar2 = 0;
          if ((ulong)uVar10 != 0) {
            uVar2 = (uint)((ulong)((long)puVar6 - lVar1) / (ulong)uVar10);
          }
          if (*puVar8 <= uVar2) {
            uVar2 = 0xffffffff;
          }
          if ((uVar2 < DAT_05292ff8) &&
             (uVar3 = *(ushort *)(DAT_05293000 + (long)(int)uVar2 * 2), uVar3 < 4)) {
            return uVar3;
          }
        }
      }
    }
  }
  return 0;
}


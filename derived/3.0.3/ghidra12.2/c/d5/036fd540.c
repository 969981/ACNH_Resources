
undefined8 FUN_036fd540(long param_1,uint *param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint *puVar4;
  undefined *puVar5;
  int iVar6;
  char cVar7;
  uint uVar8;
  ulong uVar9;
  uint *puVar10;
  int *piVar11;
  
  puVar3 = PTR_DAT_04bc2340;
  puVar2 = PTR_DAT_04bc2338;
  uVar8 = *param_2;
  if (uVar8 == 0xffffffff || 0xf < (int)uVar8) {
    return 0;
  }
  puVar5 = &DAT_0545b240 + (ulong)uVar8 * 0x118;
  if (0xf < uVar8) {
    puVar5 = &DAT_0545b240;
  }
  if (puVar5[0x8c] != '\0') {
    uVar8 = *(uint *)(puVar5 + 0xa8);
    if ((int)*(uint *)(param_1 + 0x1c0) < 1) {
      if (*(long *)(param_1 + 0xb0) == 0) {
        return 0;
      }
      puVar4 = *(uint **)(*(long *)(param_1 + 0xb0) + 8);
      if (puVar4 == (uint *)0x0) {
        return 0;
      }
      if ((uVar8 < *(uint *)(param_1 + 200)) &&
         (*(char *)(*(long *)(param_1 + 0xd0) + (long)(int)uVar8) == '\0')) {
        return 0;
      }
      if (*puVar4 <= uVar8) {
        return 0;
      }
      if (puVar4[1] == 0) {
        return 0;
      }
      if ((ushort)puVar4[2] == 0) {
        return 0;
      }
      iVar6 = 0xc;
      if (*(char *)((long)puVar4 + 10) != '\0') {
        iVar6 = 0x1c;
      }
      puVar4 = (uint *)((ulong)(puVar4[1] * uVar8 + (uint)(ushort)puVar4[2] * 8 + iVar6) +
                       (long)puVar4);
    }
    else {
      if (*(uint *)(param_1 + 0x1c0) <= uVar8) {
        return 0;
      }
      if (*(uint *)(param_1 + 0x1b0) <= uVar8) {
        uVar8 = 0;
      }
      puVar4 = *(uint **)(*(long *)(param_1 + 0x1b8) + (ulong)uVar8 * 8);
    }
    if (puVar4 != (uint *)0x0) {
      if (*puVar4 == 0) {
LAB_036fd718:
        uVar8 = 0;
      }
      else {
        cVar7 = *PTR_DAT_04bc2338;
        do {
          if (cVar7 == '\0') {
            cVar7 = '\x01';
            *(undefined8 *)puVar3 = 0xffffffffffffffff;
            *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
            *puVar2 = 1;
            *(undefined8 *)(puVar3 + 0x30) = 0xffffffffffffffff;
            *(undefined4 *)(puVar3 + 0x38) = 0xffffffff;
            *(undefined8 *)(puVar3 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar3 + 0x18) = 0xffffffffffffffff;
            *(undefined8 *)(puVar3 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar3 + 0x28) = 0xffffffffffffffff;
          }
          else {
            uVar8 = *(uint *)(puVar3 + 0xc);
            if (-1 < (int)uVar8) {
              if ((ushort *)((ulong)uVar8 + (long)puVar4) == (ushort *)0x0) goto LAB_036fd718;
              uVar8 = (uint)*(ushort *)((ulong)uVar8 + (long)puVar4);
              goto LAB_036fd71c;
            }
            if (uVar8 != 0xffffffff) goto LAB_036fd718;
          }
          puVar10 = (uint *)(ulong)*puVar4;
          uVar8 = 0;
          if ((*puVar4 == 0) || (puVar4 == puVar10)) goto LAB_036fd71c;
          lVar1 = 0xc;
          if (*(char *)((long)puVar4 + (10 - (long)puVar10)) != '\0') {
            lVar1 = 0x1c;
          }
          lVar1 = (long)puVar4 + (lVar1 - (long)puVar10);
          if (lVar1 == 0) goto LAB_036fd718;
          uVar9 = (ulong)*(ushort *)((long)puVar4 + (8 - (long)puVar10));
          *(undefined4 *)(puVar3 + 0xc) = 0xfffffffe;
          uVar8 = 0;
          if (uVar9 == 0) goto LAB_036fd71c;
          piVar11 = (int *)(lVar1 + 4);
          while (piVar11[-1] != 0x3e4510fa) {
            piVar11 = piVar11 + 2;
            uVar9 = uVar9 - 1;
            if (uVar9 == 0) {
              uVar8 = 0;
              goto LAB_036fd71c;
            }
          }
          iVar6 = 0;
          if (*piVar11 != -1) {
            iVar6 = *piVar11;
          }
          *(int *)(puVar3 + 0xc) = iVar6;
        } while (*puVar4 != 0);
        uVar8 = 0;
      }
LAB_036fd71c:
      uVar8 = uVar8 - *(ushort *)(param_1 + 0x3d0);
      if (uVar8 < *(uint *)(param_1 + 0x3b0)) {
        return *(undefined8 *)(*(long *)(param_1 + 0x3b8) + (long)(int)uVar8 * 8);
      }
    }
  }
  return 0;
}


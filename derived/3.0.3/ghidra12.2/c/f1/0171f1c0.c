
undefined2 FUN_0171f1c0(long param_1)

{
  undefined2 *puVar1;
  uint uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  uint uVar9;
  ulong uVar10;
  uint *puVar11;
  undefined4 *puVar12;
  long lVar13;
  char cVar14;
  uint *puVar15;
  
  lVar13 = DAT_0524a598;
  uVar10 = (ulong)**(byte **)(param_1 + 8);
  if (**(byte **)(param_1 + 8) != 0) {
    if (DAT_0524a598 == 0) goto LAB_0171f388;
    uVar6 = FUN_0171f4d0(DAT_0524a598,param_1);
    uVar9 = *(uint *)(lVar13 + 0x1c0);
    if ((int)uVar9 < 1) {
      lVar13 = *(long *)(lVar13 + 0xb0);
      uVar9 = 0;
      if (lVar13 != 0) {
        puVar11 = *(uint **)(lVar13 + 8);
        uVar9 = 0;
        if (puVar11 != (uint *)0x0) {
          uVar9 = *puVar11;
        }
      }
    }
    uVar2 = uVar6 & 0xffff;
    if (uVar9 <= uVar6) {
      uVar2 = 0;
    }
    uVar10 = (ulong)uVar2;
  }
  puVar5 = PTR_DAT_04bbde90;
  puVar4 = PTR_DAT_04bbde88;
  if (DAT_0524a598 != 0) {
    uVar9 = (uint)uVar10;
    if ((int)*(uint *)(DAT_0524a598 + 0x1c0) < 1) {
      if ((((*(long *)(DAT_0524a598 + 0xb0) == 0) ||
           (puVar11 = *(uint **)(*(long *)(DAT_0524a598 + 0xb0) + 8), puVar11 == (uint *)0x0)) ||
          ((uVar9 < *(uint *)(DAT_0524a598 + 200) &&
           (*(char *)(*(long *)(DAT_0524a598 + 0xd0) + uVar10) == '\0')))) ||
         (((*puVar11 <= uVar9 || (puVar11[1] == 0)) || ((ushort)puVar11[2] == 0))))
      goto LAB_0171f388;
      iVar7 = 0xc;
      if (*(char *)((long)puVar11 + 10) != '\0') {
        iVar7 = 0x1c;
      }
      puVar11 = (uint *)((ulong)(puVar11[1] * uVar9 + (uint)(ushort)puVar11[2] * 8 + iVar7) +
                        (long)puVar11);
    }
    else {
      if (*(uint *)(DAT_0524a598 + 0x1c0) <= uVar9) goto LAB_0171f388;
      if (*(uint *)(DAT_0524a598 + 0x1b0) <= uVar9) {
        uVar9 = 0;
      }
      puVar11 = *(uint **)(*(long *)(DAT_0524a598 + 0x1b8) + (ulong)uVar9 * 8);
    }
    if (puVar11 != (uint *)0x0) {
      if (*puVar11 == 0) {
        return 0xffff;
      }
      cVar14 = *PTR_DAT_04bbde88;
      do {
        if (cVar14 == '\0') {
          cVar14 = '\x01';
          *(undefined8 *)puVar5 = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
          *puVar4 = 1;
          *(undefined8 *)(puVar5 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
        }
        else {
          uVar9 = *(uint *)(puVar5 + 8);
          if (-1 < (int)uVar9) {
            puVar1 = (undefined2 *)((ulong)uVar9 + (long)puVar11);
            goto joined_r0x0171f4a4;
          }
          if (uVar9 != 0xffffffff) {
            return 0xffff;
          }
        }
        puVar15 = (uint *)(ulong)*puVar11;
        if (*puVar11 == 0) {
          return 0xffff;
        }
        if (puVar11 == puVar15) {
          return 0xffff;
        }
        lVar13 = 0xc;
        if (*(char *)((long)puVar11 + (10 - (long)puVar15)) != '\0') {
          lVar13 = 0x1c;
        }
        lVar13 = (long)puVar11 + (lVar13 - (long)puVar15);
        if (lVar13 == 0) {
          return 0xffff;
        }
        uVar10 = (ulong)*(ushort *)((long)puVar11 + (8 - (long)puVar15));
        *(undefined4 *)(puVar5 + 8) = 0xfffffffe;
        if (uVar10 == 0) {
          return 0xffff;
        }
        piVar8 = (int *)(lVar13 + 4);
        while (piVar8[-1] != 0x2b68ef71) {
          piVar8 = piVar8 + 2;
          uVar10 = uVar10 - 1;
          if (uVar10 == 0) {
            return 0xffff;
          }
        }
        iVar7 = 0;
        if (*piVar8 != -1) {
          iVar7 = *piVar8;
        }
        *(int *)(puVar5 + 8) = iVar7;
        if (*puVar11 == 0) {
          return 0xffff;
        }
      } while( true );
    }
  }
LAB_0171f388:
  if (((DAT_0524a5a8 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_0524a5a8), iVar7 != 0)) {
    DAT_0524a5a0 = 0;
    __cxa_guard_release(&DAT_0524a5a8);
  }
  puVar5 = PTR_DAT_04bbde90;
  puVar4 = PTR_DAT_04bbde88;
  puVar12 = (undefined4 *)(ulong)DAT_0524a5a0;
  if (DAT_0524a5a0 != 0) {
    cVar14 = *PTR_DAT_04bbde88;
    lVar13 = -(long)puVar12;
    if (cVar14 == '\0') goto LAB_0171f404;
    while (uVar10 = (ulong)*(uint *)(puVar5 + 8), (int)*(uint *)(puVar5 + 8) < 0) {
      while( true ) {
        if ((int)uVar10 != -1 || puVar12 == &DAT_0524a5a0) {
          return 0xffff;
        }
        lVar3 = 0xc;
        if (*(char *)(lVar13 + 0x524a5aa) != '\0') {
          lVar3 = 0x1c;
        }
        lVar3 = (long)&DAT_0524a5a0 + lVar3 + lVar13;
        if (lVar3 == 0) {
          return 0xffff;
        }
        uVar10 = (ulong)*(ushort *)(&DAT_0524a5a8 + lVar13);
        *(undefined4 *)(puVar5 + 8) = 0xfffffffe;
        if (uVar10 == 0) {
          return 0xffff;
        }
        piVar8 = (int *)(lVar3 + 4);
        while (piVar8[-1] != 0x2b68ef71) {
          piVar8 = piVar8 + 2;
          uVar10 = uVar10 - 1;
          if (uVar10 == 0) {
            return 0xffff;
          }
        }
        iVar7 = 0;
        if (*piVar8 != -1) {
          iVar7 = *piVar8;
        }
        *(int *)(puVar5 + 8) = iVar7;
        if (cVar14 != '\0') break;
LAB_0171f404:
        cVar14 = '\x01';
        *(undefined8 *)puVar5 = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
        uVar10 = 0xffffffff;
        *puVar4 = 1;
        *(undefined8 *)(puVar5 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
      }
    }
    puVar1 = (undefined2 *)((long)&DAT_0524a5a0 + uVar10);
joined_r0x0171f4a4:
    if (puVar1 != (undefined2 *)0x0) {
      return *puVar1;
    }
  }
  return 0xffff;
}


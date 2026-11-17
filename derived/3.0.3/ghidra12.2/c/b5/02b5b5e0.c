
void FUN_02b5b5e0(long *param_1,uint param_2)

{
  ushort uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  long lVar8;
  long *plVar9;
  uint *puVar10;
  long lVar11;
  uint *puVar12;
  int iVar13;
  char cVar14;
  ulong uVar15;
  undefined4 local_28;
  uint local_24;
  
  puVar4 = PTR_DAT_04bc4628;
  puVar3 = PTR_DAT_04bc4620;
  puVar2 = PTR_DAT_04bb5008;
  if (param_2 == 0) goto LAB_02b5b74c;
  lVar8 = *(long *)PTR_DAT_04bb5008;
  if (param_2 == 0) {
LAB_02b5b7d8:
    lVar11 = 0xb - (ulong)*(ushort *)(lVar8 + 0x7f0);
    if ((((uint)lVar11 < *(uint *)(lVar8 + 2000)) &&
        (puVar10 = *(uint **)(*(long *)(lVar8 + 0x7d8) + lVar11 * 8), puVar10 != (uint *)0x0)) &&
       (uVar6 = *puVar10, uVar6 != 0)) {
      cVar14 = *PTR_DAT_04bc4620;
      do {
        if (cVar14 == '\0') {
          cVar14 = '\x01';
          *(undefined8 *)puVar4 = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
          *puVar3 = 1;
          *(undefined4 *)(puVar4 + 0x20) = 0xffffffff;
          *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
          uVar6 = *puVar10;
        }
        else {
          uVar5 = *(uint *)(puVar4 + 0x10);
          if (-1 < (int)uVar5) {
            if ((ushort *)((ulong)uVar5 + (long)puVar10) == (ushort *)0x0) break;
            uVar5 = (uint)*(ushort *)((ulong)uVar5 + (long)puVar10);
            goto LAB_02b5b8f0;
          }
          if (uVar5 != 0xffffffff) break;
        }
        puVar12 = (uint *)(ulong)uVar6;
        uVar5 = 0;
        if ((puVar12 == (uint *)0x0) || (uVar5 = 0, puVar10 == puVar12)) goto LAB_02b5b8f0;
        lVar11 = 0xc;
        if (*(char *)((long)puVar10 + (10 - (long)puVar12)) != '\0') {
          lVar11 = 0x1c;
        }
        lVar11 = (long)puVar10 + (lVar11 - (long)puVar12);
        uVar5 = 0;
        if (lVar11 == 0) goto LAB_02b5b8f0;
        uVar15 = (ulong)*(ushort *)((long)puVar10 + (8 - (long)puVar12));
        *(undefined4 *)(puVar4 + 0x10) = 0xfffffffe;
        if (uVar15 == 0) break;
        piVar7 = (int *)(lVar11 + 4);
        while (piVar7[-1] != -0x278d8283) {
          piVar7 = piVar7 + 2;
          uVar15 = uVar15 - 1;
          if (uVar15 == 0) goto LAB_02b5b8ec;
        }
        uVar5 = 0;
        iVar13 = 0;
        if (*piVar7 != -1) {
          iVar13 = *piVar7;
        }
        *(int *)(puVar4 + 0x10) = iVar13;
        uVar6 = *puVar10;
        if (uVar6 == 0) goto LAB_02b5b8f0;
      } while( true );
    }
LAB_02b5b8ec:
    uVar5 = 0;
LAB_02b5b8f0:
    puVar3 = PTR_DAT_04bb5be8;
    puVar2 = PTR_DAT_04bb5be0;
    uVar5 = uVar5 - *(ushort *)(lVar8 + 0x9f0);
    if ((*(uint *)(lVar8 + 0x9d0) <= uVar5) ||
       (puVar10 = *(uint **)(*(long *)(lVar8 + 0x9d8) + (long)(int)uVar5 * 8),
       puVar10 == (uint *)0x0)) {
LAB_02b5bd50:
      plVar9 = (long *)PTR_PTR_04bc48e0;
LAB_02b5bd58:
      lVar11 = *plVar9;
      goto LAB_02b5bd5c;
    }
    uVar6 = *puVar10;
    if (uVar6 != 0) {
      cVar14 = *PTR_DAT_04bb5be0;
      do {
        if (cVar14 == '\0') {
          cVar14 = '\x01';
          *(undefined8 *)puVar3 = 0xffffffffffffffff;
          *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
          *puVar2 = 1;
          *(undefined4 *)(puVar3 + 0x20) = 0xffffffff;
          *(undefined8 *)(puVar3 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar3 + 0x18) = 0xffffffffffffffff;
          uVar6 = *puVar10;
        }
        else {
          uVar5 = *(uint *)(puVar3 + 0x18);
          if (-1 < (int)uVar5) goto LAB_02b5bd7c;
          if (uVar5 != 0xffffffff) break;
        }
        puVar12 = (uint *)(ulong)uVar6;
        lVar8 = 0;
        if ((puVar12 == (uint *)0x0) || (lVar8 = 0, puVar10 == puVar12)) goto LAB_02b5b9ec;
        lVar8 = 0xc;
        if (*(char *)((long)puVar10 + (10 - (long)puVar12)) != '\0') {
          lVar8 = 0x1c;
        }
        lVar11 = (long)puVar10 + (lVar8 - (long)puVar12);
        lVar8 = 0;
        if (lVar11 == 0) goto LAB_02b5b9ec;
        uVar15 = (ulong)*(ushort *)((long)puVar10 + (8 - (long)puVar12));
        *(undefined4 *)(puVar3 + 0x18) = 0xfffffffe;
        if (uVar15 == 0) break;
        piVar7 = (int *)(lVar11 + 4);
        while (piVar7[-1] != 0x39b5a93d) {
          piVar7 = piVar7 + 2;
          uVar15 = uVar15 - 1;
          if (uVar15 == 0) goto LAB_02b5b9e8;
        }
        iVar13 = 0;
        if (*piVar7 != -1) {
          iVar13 = *piVar7;
        }
        *(int *)(puVar3 + 0x18) = iVar13;
        uVar6 = *puVar10;
        if (uVar6 == 0) break;
      } while( true );
    }
LAB_02b5b9e8:
    lVar8 = 0;
    goto LAB_02b5b9ec;
  }
  if ((int)*(uint *)(lVar8 + 0x1e0) < 1) {
    if ((((*(long *)(lVar8 + 0xd0) != 0) &&
         (puVar10 = *(uint **)(*(long *)(lVar8 + 0xd0) + 8), puVar10 != (uint *)0x0)) &&
        ((*(uint *)(lVar8 + 0xe8) <= param_2 ||
         (*(char *)(*(long *)(lVar8 + 0xf0) + (long)(int)param_2) != '\0')))) &&
       (((param_2 < *puVar10 && (puVar10[1] != 0)) && ((ushort)puVar10[2] != 0)))) {
      iVar13 = 0xc;
      if (*(char *)((long)puVar10 + 10) != '\0') {
        iVar13 = 0x1c;
      }
      puVar10 = (uint *)((ulong)(puVar10[1] * param_2 + (uint)(ushort)puVar10[2] * 8 + iVar13) +
                        (long)puVar10);
      if (puVar10 != (uint *)0x0) goto LAB_02b5b644;
    }
    goto LAB_02b5b7d8;
  }
  if (*(uint *)(lVar8 + 0x1e0) <= param_2) goto LAB_02b5b7d8;
  uVar6 = param_2;
  if (*(uint *)(lVar8 + 0x1d0) <= param_2) {
    uVar6 = 0;
  }
  puVar10 = *(uint **)(*(long *)(lVar8 + 0x1d8) + (ulong)uVar6 * 8);
  if (puVar10 == (uint *)0x0) goto LAB_02b5b7d8;
LAB_02b5b644:
  uVar6 = *puVar10;
  if (uVar6 == 0 || puVar10 == (uint *)(ulong)uVar6) goto LAB_02b5b7d8;
  puVar12 = (uint *)((long)puVar10 - (long)(ulong)uVar6);
  if (*puVar12 == 0) goto LAB_02b5b7d8;
  uVar6 = puVar12[1];
  if ((uVar6 == 0) || ((ulong)(ushort)puVar12[2] == 0)) {
LAB_02b5b6d4:
    if (((*puVar12 == 0) || (uVar6 = puVar12[1], uVar6 == 0)) || ((ulong)(ushort)puVar12[2] == 0))
    goto LAB_02b5b7d8;
    lVar11 = 0xc;
    if (*(char *)((long)puVar12 + 10) != '\0') {
      lVar11 = 0x1c;
    }
    lVar11 = (long)puVar12 + lVar11 + (ulong)(ushort)puVar12[2] * 8;
    if (lVar11 == 0) goto LAB_02b5b7d8;
    uVar5 = 0;
    if ((ulong)uVar6 != 0) {
      uVar5 = (uint)((ulong)((long)puVar10 - lVar11) / (ulong)uVar6);
    }
    if (*puVar12 <= uVar5) {
      uVar5 = 0xffffffff;
    }
    if (*(uint *)PTR_DAT_04bc46a0 <= uVar5) goto LAB_02b5b7d8;
    uVar1 = *(ushort *)(*(long *)(PTR_DAT_04bc46a0 + 8) + (long)(int)uVar5 * 2);
    if (1 < uVar1) goto LAB_02b5b7d8;
    if (uVar1 != 1) {
      if (uVar1 != 0) {
LAB_02b5b74c:
        lVar8 = *(long *)(PTR_PTR_04bb2238 + 8);
        *param_1 = (long)(PTR_DAT_04bb2020 + 0x10);
        param_1[1] = lVar8;
        return;
      }
      goto LAB_02b5b7d8;
    }
    lVar11 = 0xc - (ulong)*(ushort *)(lVar8 + 0x7f0);
    if ((((uint)lVar11 < *(uint *)(lVar8 + 2000)) &&
        (puVar10 = *(uint **)(*(long *)(lVar8 + 0x7d8) + lVar11 * 8), puVar10 != (uint *)0x0)) &&
       (uVar6 = *puVar10, uVar6 != 0)) {
      cVar14 = *PTR_DAT_04bc4620;
      do {
        if (cVar14 == '\0') {
          cVar14 = '\x01';
          *(undefined8 *)puVar4 = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
          *puVar3 = 1;
          *(undefined4 *)(puVar4 + 0x20) = 0xffffffff;
          *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
          uVar6 = *puVar10;
        }
        else {
          uVar5 = *(uint *)(puVar4 + 0x10);
          if (-1 < (int)uVar5) {
            if ((ushort *)((ulong)uVar5 + (long)puVar10) == (ushort *)0x0) break;
            uVar5 = (uint)*(ushort *)((ulong)uVar5 + (long)puVar10);
            goto LAB_02b5bc5c;
          }
          if (uVar5 != 0xffffffff) break;
        }
        puVar12 = (uint *)(ulong)uVar6;
        uVar5 = 0;
        if ((puVar12 == (uint *)0x0) || (puVar10 == puVar12)) goto LAB_02b5bc5c;
        lVar11 = 0xc;
        if (*(char *)((long)puVar10 + (10 - (long)puVar12)) != '\0') {
          lVar11 = 0x1c;
        }
        lVar11 = (long)puVar10 + (lVar11 - (long)puVar12);
        uVar5 = 0;
        if (lVar11 == 0) goto LAB_02b5bc5c;
        uVar15 = (ulong)*(ushort *)((long)puVar10 + (8 - (long)puVar12));
        *(undefined4 *)(puVar4 + 0x10) = 0xfffffffe;
        if (uVar15 == 0) break;
        piVar7 = (int *)(lVar11 + 4);
        while (piVar7[-1] != -0x278d8283) {
          piVar7 = piVar7 + 2;
          uVar15 = uVar15 - 1;
          if (uVar15 == 0) goto LAB_02b5bc58;
        }
        uVar5 = 0;
        iVar13 = 0;
        if (*piVar7 != -1) {
          iVar13 = *piVar7;
        }
        *(int *)(puVar4 + 0x10) = iVar13;
        uVar6 = *puVar10;
        if (uVar6 == 0) goto LAB_02b5bc5c;
      } while( true );
    }
LAB_02b5bc58:
    uVar5 = 0;
LAB_02b5bc5c:
    puVar3 = PTR_DAT_04bb5be8;
    puVar2 = PTR_DAT_04bb5be0;
    uVar5 = uVar5 - *(ushort *)(lVar8 + 0x9f0);
    if ((uVar5 < *(uint *)(lVar8 + 0x9d0)) &&
       (puVar10 = *(uint **)(*(long *)(lVar8 + 0x9d8) + (long)(int)uVar5 * 8),
       puVar10 != (uint *)0x0)) {
      uVar6 = *puVar10;
      if (uVar6 != 0) {
        cVar14 = *PTR_DAT_04bb5be0;
        do {
          if (cVar14 == '\0') {
            cVar14 = '\x01';
            *(undefined8 *)puVar3 = 0xffffffffffffffff;
            *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
            *puVar2 = 1;
            *(undefined4 *)(puVar3 + 0x20) = 0xffffffff;
            *(undefined8 *)(puVar3 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar3 + 0x18) = 0xffffffffffffffff;
            uVar6 = *puVar10;
          }
          else {
            uVar5 = *(uint *)(puVar3 + 0x18);
            if (-1 < (int)uVar5) goto LAB_02b5bd7c;
            if (uVar5 != 0xffffffff) break;
          }
          puVar12 = (uint *)(ulong)uVar6;
          lVar8 = 0;
          if ((puVar12 == (uint *)0x0) || (puVar10 == puVar12)) goto LAB_02b5b9ec;
          lVar8 = 0xc;
          if (*(char *)((long)puVar10 + (10 - (long)puVar12)) != '\0') {
            lVar8 = 0x1c;
          }
          lVar11 = (long)puVar10 + (lVar8 - (long)puVar12);
          lVar8 = 0;
          if (lVar11 == 0) goto LAB_02b5b9ec;
          uVar15 = (ulong)*(ushort *)((long)puVar10 + (8 - (long)puVar12));
          *(undefined4 *)(puVar3 + 0x18) = 0xfffffffe;
          if (uVar15 == 0) break;
          piVar7 = (int *)(lVar11 + 4);
          while (piVar7[-1] != 0x39b5a93d) {
            piVar7 = piVar7 + 2;
            uVar15 = uVar15 - 1;
            if (uVar15 == 0) goto LAB_02b5b9e8;
          }
          iVar13 = 0;
          if (*piVar7 != -1) {
            iVar13 = *piVar7;
          }
          *(int *)(puVar3 + 0x18) = iVar13;
          uVar6 = *puVar10;
          if (uVar6 == 0) break;
        } while( true );
      }
      goto LAB_02b5b9e8;
    }
    goto LAB_02b5bd50;
  }
  lVar11 = 0xc;
  if (*(char *)((long)puVar12 + 10) != '\0') {
    lVar11 = 0x1c;
  }
  lVar11 = (long)puVar12 + lVar11 + (ulong)(ushort)puVar12[2] * 8;
  if (lVar11 == 0) goto LAB_02b5b6d4;
  uVar5 = 0;
  if ((ulong)uVar6 != 0) {
    uVar5 = (uint)((ulong)((long)puVar10 - lVar11) / (ulong)uVar6);
  }
  if (*puVar12 <= uVar5) {
    uVar5 = 0xffffffff;
  }
  if ((*(uint *)PTR_DAT_04bc46a8 <= uVar5) ||
     (uVar1 = *(ushort *)(*(long *)(PTR_DAT_04bc46a8 + 8) + (long)(int)uVar5 * 2), 4 < uVar1))
  goto LAB_02b5b6d4;
  if (uVar1 != 1) {
    if (uVar1 != 0) goto LAB_02b5b74c;
    goto LAB_02b5b6d4;
  }
  local_28 = 0;
  local_24 = param_2;
  uVar15 = FUN_02b677c0(&local_28,param_2);
  if ((uVar15 & 1) == 0) {
    lVar11 = *(long *)(PTR_PTR_04bb2238 + 8);
    goto LAB_02b5bd5c;
  }
  uVar6 = FUN_02b5bd90(local_28);
  puVar4 = PTR_DAT_04bb5bd0;
  puVar3 = PTR_DAT_04bb5bc8;
  lVar8 = *(long *)puVar2;
  uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x5f0);
  if ((*(uint *)(lVar8 + 0x5d0) <= uVar6) ||
     (puVar10 = *(uint **)(*(long *)(lVar8 + 0x5d8) + (long)(int)uVar6 * 8), puVar10 == (uint *)0x0)
     ) {
    plVar9 = (long *)PTR_PTR_04bc4768;
    goto LAB_02b5bd58;
  }
  uVar6 = *puVar10;
  if (uVar6 != 0) {
    cVar14 = *PTR_DAT_04bb5bc8;
    do {
      if (cVar14 == '\0') {
        cVar14 = '\x01';
        *(undefined8 *)puVar4 = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
        *puVar3 = 1;
        *(undefined8 *)(puVar4 + 0x40) = 0xffffffffffffffff;
        *(undefined4 *)(puVar4 + 0x48) = 0xffffffff;
        *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x38) = 0xffffffffffffffff;
        uVar6 = *puVar10;
      }
      else {
        uVar5 = *(uint *)(puVar4 + 0x40);
        if (-1 < (int)uVar5) {
          lVar8 = (ulong)uVar5 + (long)puVar10;
          goto LAB_02b5bb24;
        }
        if (uVar5 != 0xffffffff) break;
      }
      puVar12 = (uint *)(ulong)uVar6;
      lVar8 = 0;
      if ((puVar12 == (uint *)0x0) || (puVar10 == puVar12)) goto LAB_02b5bb24;
      lVar8 = 0xc;
      if (*(char *)((long)puVar10 + (10 - (long)puVar12)) != '\0') {
        lVar8 = 0x1c;
      }
      lVar11 = (long)puVar10 + (lVar8 - (long)puVar12);
      lVar8 = 0;
      if (lVar11 == 0) goto LAB_02b5bb24;
      uVar15 = (ulong)*(ushort *)((long)puVar10 + (8 - (long)puVar12));
      *(undefined4 *)(puVar4 + 0x40) = 0xfffffffe;
      if (uVar15 == 0) break;
      piVar7 = (int *)(lVar11 + 4);
      while (piVar7[-1] != 0x39b5a93d) {
        piVar7 = piVar7 + 2;
        uVar15 = uVar15 - 1;
        if (uVar15 == 0) goto LAB_02b5bb20;
      }
      iVar13 = 0;
      if (*piVar7 != -1) {
        iVar13 = *piVar7;
      }
      *(int *)(puVar4 + 0x40) = iVar13;
      uVar6 = *puVar10;
      if (uVar6 == 0) break;
    } while( true );
  }
LAB_02b5bb20:
  lVar8 = 0;
LAB_02b5bb24:
  plVar9 = (long *)PTR_PTR_04bb5bc0;
  goto LAB_02b5b9f4;
LAB_02b5bd7c:
  lVar8 = (ulong)uVar5 + (long)puVar10;
LAB_02b5b9ec:
  plVar9 = (long *)PTR_PTR_04bb5bd8;
LAB_02b5b9f4:
  lVar11 = *plVar9;
  if (lVar8 != 0) {
    lVar11 = lVar8;
  }
LAB_02b5bd5c:
  *param_1 = (long)(PTR_DAT_04bb2020 + 0x10);
  param_1[1] = lVar11;
  return;
}



undefined8 FUN_01af6610(long param_1,long param_2)

{
  uint uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  long lVar8;
  uint uVar9;
  uint *puVar10;
  long lVar11;
  int *piVar12;
  uint *puVar13;
  char cVar14;
  ulong uVar15;
  undefined *local_70;
  char *pcStack_68;
  
  if (((DAT_0532ab58 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_0532ab58), iVar7 != 0)) {
    local_70 = PTR_DAT_04bb2020 + 0x10;
    pcStack_68 = "ClosetIcon";
    FUN_00772610(&DAT_0532ab20,&local_70);
    __cxa_guard_release(&DAT_0532ab58);
  }
  puVar4 = PTR_DAT_04bbfeb8;
  puVar3 = PTR_DAT_04bbfeb0;
  puVar10 = *(uint **)(param_1 + 0x10);
  if (puVar10 == (uint *)0x0) {
    uVar9 = 0xbc;
  }
  else {
    uVar9 = *puVar10;
    if (uVar9 != 0 && puVar10 != (uint *)(ulong)uVar9) {
      puVar13 = (uint *)((long)puVar10 - (long)(ulong)uVar9);
      if (((*puVar13 != 0) && (uVar9 = puVar13[1], uVar9 != 0)) && ((ulong)(ushort)puVar13[2] != 0))
      {
        lVar8 = 0xc;
        if (*(char *)((long)puVar13 + 10) != '\0') {
          lVar8 = 0x1c;
        }
        lVar8 = (long)puVar13 + lVar8 + (ulong)(ushort)puVar13[2] * 8;
        if (lVar8 != 0) {
          uVar1 = 0;
          if ((ulong)uVar9 != 0) {
            uVar1 = (uint)((ulong)((long)puVar10 - lVar8) / (ulong)uVar9);
          }
          if (*puVar13 <= uVar1) {
            uVar1 = 0xffffffff;
          }
          if ((uVar1 < *(uint *)PTR_DAT_04bc00c8) &&
             (uVar2 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar1 * 2),
             uVar9 = (uint)uVar2, uVar2 < 0xbd)) goto LAB_01af66e0;
        }
      }
    }
    uVar9 = 0;
  }
LAB_01af66e0:
  local_70 = (undefined *)CONCAT44(local_70._4_4_,uVar9);
  if ((int)*(uint *)(DAT_0532a778 + 0x1c0) < 1) {
    if ((((*(long *)(DAT_0532a778 + 0xb0) == 0) ||
         (puVar10 = *(uint **)(*(long *)(DAT_0532a778 + 0xb0) + 8), puVar10 == (uint *)0x0)) ||
        ((uVar9 < *(uint *)(DAT_0532a778 + 200) &&
         (*(char *)(*(long *)(DAT_0532a778 + 0xd0) + (long)(int)uVar9) == '\0')))) ||
       (((*puVar10 <= uVar9 || (puVar10[1] == 0)) || ((ushort)puVar10[2] == 0)))) goto LAB_01af6874;
    iVar7 = 0xc;
    if (*(char *)((long)puVar10 + 10) != '\0') {
      iVar7 = 0x1c;
    }
    puVar10 = (uint *)((ulong)(puVar10[1] * uVar9 + (uint)(ushort)puVar10[2] * 8 + iVar7) +
                      (long)puVar10);
  }
  else {
    if (*(uint *)(DAT_0532a778 + 0x1c0) <= uVar9) goto LAB_01af6874;
    if (*(uint *)(DAT_0532a778 + 0x1b0) <= uVar9) {
      uVar9 = 0;
    }
    puVar10 = *(uint **)(*(long *)(DAT_0532a778 + 0x1b8) + (ulong)uVar9 * 8);
  }
  if ((puVar10 != (uint *)0x0) && (*puVar10 != 0)) {
    cVar14 = *PTR_DAT_04bbfeb0;
    do {
      if (cVar14 == '\0') {
        cVar14 = '\x01';
        *(undefined8 *)puVar4 = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
        *puVar3 = 1;
        *(undefined8 *)(puVar4 + 0x70) = 0xffffffffffffffff;
        *(undefined4 *)(puVar4 + 0x78) = 0xffffffff;
        *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x38) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x40) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x48) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x50) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x58) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x60) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x68) = 0xffffffffffffffff;
      }
      else {
        uVar9 = *(uint *)(puVar4 + 0x54);
        if (-1 < (int)uVar9) {
          if (((char *)((ulong)uVar9 + (long)puVar10) != (char *)0x0) &&
             (*(char *)((ulong)uVar9 + (long)puVar10) != '\0')) {
            (**(code **)(DAT_0532a990 + 0x18))(&DAT_0532a990);
            uVar5 = DAT_0532a998;
            (**(code **)(DAT_0532ab20 + 0x18))(&DAT_0532ab20);
            uVar6 = DAT_0532ab28;
            puVar4 = PTR_DAT_04bbfe90;
            puVar3 = PTR_DAT_04bbfe88;
            puVar10 = *(uint **)(param_1 + 0x10);
            if (puVar10 == (uint *)0x0) {
              lVar8 = *(long *)(PTR_PTR_04bb2238 + 8);
              goto LAB_01af69f4;
            }
            if (*puVar10 == 0) goto LAB_01af69cc;
            cVar14 = *PTR_DAT_04bbfe88;
            goto LAB_01af6924;
          }
          break;
        }
        if (uVar9 != 0xffffffff) break;
      }
      lVar8 = (long)puVar10 - (ulong)*puVar10;
      if ((*puVar10 == 0) || (lVar8 == 0)) break;
      lVar11 = 0xc;
      if (*(char *)(lVar8 + 10) != '\0') {
        lVar11 = 0x1c;
      }
      if (lVar11 + lVar8 == 0) break;
      uVar15 = (ulong)*(ushort *)(lVar8 + 8);
      *(undefined4 *)(puVar4 + 0x54) = 0xfffffffe;
      if (uVar15 == 0) break;
      piVar12 = (int *)(lVar11 + lVar8 + 4);
      while (piVar12[-1] != 0x1bcd4858) {
        piVar12 = piVar12 + 2;
        uVar15 = uVar15 - 1;
        if (uVar15 == 0) goto LAB_01af6874;
      }
      iVar7 = 0;
      if (*piVar12 != -1) {
        iVar7 = *piVar12;
      }
      *(int *)(puVar4 + 0x54) = iVar7;
      if (*puVar10 == 0) break;
    } while( true );
  }
LAB_01af6874:
  **(undefined1 **)(param_2 + 8) = 0;
  return 0;
  while( true ) {
    puVar13 = (uint *)(ulong)*puVar10;
    lVar11 = 0;
    if ((*puVar10 == 0) || (puVar10 == puVar13)) goto LAB_01af69d0;
    lVar8 = 0xc;
    if (*(char *)((long)puVar10 + (10 - (long)puVar13)) != '\0') {
      lVar8 = 0x1c;
    }
    lVar8 = (long)puVar10 + (lVar8 - (long)puVar13);
    if (lVar8 == 0) break;
    uVar15 = (ulong)*(ushort *)((long)puVar10 + (8 - (long)puVar13));
    *(undefined4 *)(puVar4 + 0x18c) = 0xfffffffe;
    lVar11 = 0;
    if (uVar15 == 0) goto LAB_01af69d0;
    piVar12 = (int *)(lVar8 + 4);
    while (piVar12[-1] != 0x3febc642) {
      piVar12 = piVar12 + 2;
      uVar15 = uVar15 - 1;
      if (uVar15 == 0) {
        lVar11 = 0;
        goto LAB_01af69d0;
      }
    }
    iVar7 = 0;
    if (*piVar12 != -1) {
      iVar7 = *piVar12;
    }
    *(int *)(puVar4 + 0x18c) = iVar7;
    if (*puVar10 == 0) break;
LAB_01af6924:
    if (cVar14 == '\0') {
      cVar14 = '\x01';
      *puVar3 = 1;
      memset(puVar4,0xff,0x1ac);
    }
    else {
      uVar9 = *(uint *)(puVar4 + 0x18c);
      if (-1 < (int)uVar9) {
        lVar11 = (ulong)uVar9 + (long)puVar10;
        goto LAB_01af69d0;
      }
      if (uVar9 != 0xffffffff) break;
    }
  }
LAB_01af69cc:
  lVar11 = 0;
LAB_01af69d0:
  lVar8 = *(long *)PTR_PTR_04bc0008;
  if (lVar11 != 0) {
    lVar8 = lVar11;
  }
LAB_01af69f4:
  FUN_038d1270(param_2,uVar5,uVar6,lVar8);
  return 1;
}


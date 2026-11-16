
/* WARNING: Removing unreachable block (ram,0x02532414) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_025320d0(byte *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  short *psVar6;
  uint uVar7;
  ulong uVar8;
  uint *puVar9;
  uint *puVar10;
  int *piVar11;
  long lVar12;
  char cVar13;
  
  if ((DAT_054f5738 == 0) || (uVar8 = (ulong)*param_1, 7 < uVar8)) {
    if ((DAT_054f0c70 & 1) == 0) {
      iVar4 = __cxa_guard_acquire(&DAT_054f0c70);
      if (iVar4 != 0) {
        DAT_054f0c6c = '\0';
        _DAT_054f0c44 = 0;
        DAT_054f0c1c._0_4_ = 0;
        DAT_054f0c1c._4_4_ = 0;
        DAT_054f0c24._0_4_ = 0;
        DAT_054f0c24._4_4_ = 0;
        DAT_054f0c2c._0_4_ = 0;
        DAT_054f0c2c._4_4_ = 0;
        DAT_054f0c34._0_4_ = 0;
        DAT_054f0c34._4_4_ = 0;
        DAT_054f0c3c._0_4_ = 0;
        DAT_054f0c3c._4_4_ = 0;
        _DAT_054f0c08 = 0;
        _DAT_054f0c10 = 1;
        DAT_054f0c14._0_4_ = 0;
        DAT_054f0c14._4_4_ = 0;
        DAT_054f0c68 = 1;
        DAT_054f0c48 = 0;
        DAT_054f0c50 = 0;
        DAT_054f0c58 = 0;
        DAT_054f0c60 = 0;
        __cxa_guard_release(&DAT_054f0c70);
      }
      psVar6 = &DAT_054f0c08;
      cVar13 = DAT_054f0c6c;
      goto joined_r0x025324f4;
    }
    psVar6 = &DAT_054f0c08;
    if (DAT_054f0c6c != '\0') goto LAB_02532144;
LAB_02532168:
    uVar7 = 0;
  }
  else {
    lVar5 = DAT_054f5738 + uVar8 * 0xd0 +
            (ulong)(*(uint *)(DAT_054f5738 + uVar8 * 4 + 0xd68) & 1) * 0x68;
    psVar6 = (short *)(lVar5 + 0x6e8);
    cVar13 = *(char *)(lVar5 + 0x74c);
joined_r0x025324f4:
    if (cVar13 == '\0') goto LAB_02532168;
LAB_02532144:
    if ((*psVar6 != *(short *)PTR_DAT_04bb6298) || (uVar7 = *(uint *)(psVar6 + 2), 0x148 < uVar7))
    goto LAB_02532168;
  }
  if (((DAT_054f0b68 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_054f0b68), iVar4 != 0)) {
    DAT_054f0b60 = 0;
    __cxa_guard_release(&DAT_054f0b68);
  }
  lVar5 = DAT_054f5738;
  puVar3 = PTR_DAT_04bc2fe8;
  puVar2 = PTR_DAT_04bc2fe0;
  if (DAT_054f5738 == 0) {
    puVar9 = &DAT_054f0b60;
    goto LAB_025322a0;
  }
  if ((int)*(uint *)(DAT_054f5738 + 0x1e0) < 1) {
    lVar12 = *(long *)(DAT_054f5738 + 0xd0);
    if (lVar12 == 0) {
LAB_02532294:
      puVar10 = (uint *)0x0;
    }
    else {
      puVar9 = *(uint **)(lVar12 + 8);
      if ((puVar9 != (uint *)0x0) &&
         ((((*(uint *)(DAT_054f5738 + 0xe8) <= uVar7 ||
            (*(char *)(*(long *)(DAT_054f5738 + 0xf0) + (ulong)uVar7) != '\0')) && (uVar7 < *puVar9)
           ) && ((puVar9[1] != 0 && ((ushort)puVar9[2] != 0)))))) {
        iVar4 = 0xc;
        if (*(char *)((long)puVar9 + 10) != '\0') {
          iVar4 = 0x1c;
        }
        puVar9 = (uint *)((ulong)(puVar9[1] * uVar7 + (uint)(ushort)puVar9[2] * 8 + iVar4) +
                         (long)puVar9);
        if (puVar9 != (uint *)0x0) goto LAB_025322a0;
      }
      piVar11 = *(int **)(lVar12 + 8);
      puVar10 = (uint *)0x0;
      if (piVar11 != (int *)0x0) {
        if (((*(int *)(DAT_054f5738 + 0xe8) != 0) && (**(char **)(DAT_054f5738 + 0xf0) == '\0')) ||
           ((*piVar11 == 0 || ((piVar11[1] == 0 || ((ulong)*(ushort *)(piVar11 + 2) == 0))))))
        goto LAB_02532294;
        lVar12 = 0xc;
        if (*(char *)((long)piVar11 + 10) != '\0') {
          lVar12 = 0x1c;
        }
        puVar10 = (uint *)((long)piVar11 + lVar12 + (ulong)*(ushort *)(piVar11 + 2) * 8);
      }
    }
  }
  else if (uVar7 < *(uint *)(DAT_054f5738 + 0x1e0)) {
    if (*(uint *)(DAT_054f5738 + 0x1d0) <= uVar7) {
      uVar7 = 0;
    }
    puVar9 = (uint *)(*(undefined8 **)(DAT_054f5738 + 0x1d8))[uVar7];
    if (puVar9 != (uint *)0x0) goto LAB_025322a0;
    puVar10 = (uint *)**(undefined8 **)(DAT_054f5738 + 0x1d8);
  }
  else {
    puVar10 = (uint *)**(undefined8 **)(DAT_054f5738 + 0x1d8);
  }
  puVar9 = &DAT_054f0b60;
  if (puVar10 != (uint *)0x0) {
    puVar9 = puVar10;
  }
LAB_025322a0:
  if (*puVar9 == 0) {
LAB_025323b4:
    if (lVar5 == 0) {
      if ((DAT_054f0960 & 1) == 0) {
        iVar4 = __cxa_guard_acquire(&DAT_054f0960);
        puVar9 = (uint *)&DAT_054f0958;
        if (iVar4 != 0) {
          DAT_054f0958 = 0;
          __cxa_guard_release(&DAT_054f0960);
          puVar9 = (uint *)&DAT_054f0958;
        }
      }
      else {
        puVar9 = (uint *)&DAT_054f0958;
      }
    }
    else {
      puVar9 = (uint *)(lVar5 + 0x204);
      if ((ulong)*param_1 < 8) {
        puVar9 = puVar9 + (ulong)*param_1 * 2;
      }
    }
    return *puVar9 >> 0x16 & 1;
  }
  cVar13 = *PTR_DAT_04bc2fe0;
  do {
    if (cVar13 == '\0') {
      cVar13 = '\x01';
      *(undefined8 *)puVar3 = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
      *puVar2 = 1;
      *(undefined8 *)(puVar3 + 0xa0) = 0xffffffffffffffff;
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
      uVar7 = *(uint *)(puVar3 + 0x74);
      if (-1 < (int)uVar7) {
        if (((char *)((ulong)uVar7 + (long)puVar9) != (char *)0x0) &&
           (*(char *)((ulong)uVar7 + (long)puVar9) != '\0')) {
          return 1;
        }
        goto LAB_025323b4;
      }
      if (uVar7 != 0xffffffff) goto LAB_025323b4;
    }
    lVar12 = (long)puVar9 - (ulong)*puVar9;
    if ((*puVar9 == 0) || (lVar12 == 0)) goto LAB_025323b4;
    lVar1 = 0xc;
    if (*(char *)(lVar12 + 10) != '\0') {
      lVar1 = 0x1c;
    }
    if (lVar1 + lVar12 == 0) goto LAB_025323b4;
    uVar8 = (ulong)*(ushort *)(lVar12 + 8);
    *(undefined4 *)(puVar3 + 0x74) = 0xfffffffe;
    if (uVar8 == 0) goto LAB_025323b4;
    piVar11 = (int *)(lVar1 + lVar12 + 4);
    while (piVar11[-1] != -0x5e4f8b23) {
      piVar11 = piVar11 + 2;
      uVar8 = uVar8 - 1;
      if (uVar8 == 0) goto LAB_025323b4;
    }
    iVar4 = 0;
    if (*piVar11 != -1) {
      iVar4 = *piVar11;
    }
    *(int *)(puVar3 + 0x74) = iVar4;
    if (*puVar9 == 0) goto LAB_025323b4;
  } while( true );
}


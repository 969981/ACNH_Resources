
void FUN_02558820(byte *param_1)

{
  undefined8 *__s1;
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  uint uVar4;
  byte bVar5;
  undefined *puVar6;
  undefined *puVar7;
  bool bVar8;
  int iVar9;
  uint *puVar10;
  ushort uVar11;
  uint uVar12;
  long *plVar13;
  uint *puVar14;
  int *piVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  char cVar19;
  ulong uVar20;
  
  uVar12 = (uint)*(ushort *)(param_1 + 3);
  puVar10 = (uint *)FUN_0251d928(uVar12);
  uVar4 = *puVar10;
  if (uVar4 == 0 || puVar10 == (uint *)(ulong)uVar4) {
LAB_0255885c:
    uVar11 = 0;
  }
  else {
    puVar14 = (uint *)((long)puVar10 - (long)(ulong)uVar4);
    uVar11 = 0;
    if (*puVar14 != 0) {
      uVar4 = puVar14[1];
      if ((uVar4 != 0) && ((ulong)(ushort)puVar14[2] != 0)) {
        lVar1 = 0xc;
        if (*(char *)((long)puVar14 + 10) != '\0') {
          lVar1 = 0x1c;
        }
        lVar1 = (long)puVar14 + lVar1 + (ulong)(ushort)puVar14[2] * 8;
        if (lVar1 != 0) {
          uVar2 = 0;
          if ((ulong)uVar4 != 0) {
            uVar2 = (uint)((ulong)((long)puVar10 - lVar1) / (ulong)uVar4);
          }
          if (*puVar14 <= uVar2) {
            uVar2 = 0xffffffff;
          }
          if ((uVar2 < *(uint *)PTR_DAT_04bc2ff8) &&
             (uVar11 = *(ushort *)(*(long *)(PTR_DAT_04bc2ff8 + 8) + (long)(int)uVar2 * 2),
             uVar11 < 2)) goto LAB_02558860;
        }
      }
      goto LAB_0255885c;
    }
  }
LAB_02558860:
  if (((DAT_054f0b68 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_054f0b68), iVar9 != 0)) {
    DAT_054f0b60 = 0;
    __cxa_guard_release(&DAT_054f0b68);
  }
  lVar1 = DAT_054f5738;
  puVar7 = PTR_DAT_04bc2fe8;
  puVar6 = PTR_DAT_04bc2fe0;
  if (DAT_054f5738 == 0) {
    puVar10 = &DAT_054f0b60;
    goto LAB_02558a18;
  }
  if ((int)*(uint *)(DAT_054f5738 + 0x1e0) < 1) {
    lVar16 = *(long *)(DAT_054f5738 + 0xd0);
    if (lVar16 == 0) {
LAB_02558a0c:
      puVar14 = (uint *)0x0;
    }
    else {
      puVar10 = *(uint **)(lVar16 + 8);
      if ((puVar10 != (uint *)0x0) &&
         ((((*(uint *)(DAT_054f5738 + 0xe8) <= uVar12 ||
            (*(char *)(*(long *)(DAT_054f5738 + 0xf0) + (long)(int)uVar12) != '\0')) &&
           (uVar12 < *puVar10)) && ((puVar10[1] != 0 && ((ushort)puVar10[2] != 0)))))) {
        iVar9 = 0xc;
        if (*(char *)((long)puVar10 + 10) != '\0') {
          iVar9 = 0x1c;
        }
        puVar10 = (uint *)((ulong)(puVar10[1] * uVar12 + (uint)(ushort)puVar10[2] * 8 + iVar9) +
                          (long)puVar10);
        if (puVar10 != (uint *)0x0) goto LAB_02558a18;
      }
      piVar15 = *(int **)(lVar16 + 8);
      puVar14 = (uint *)0x0;
      if (piVar15 != (int *)0x0) {
        if (((*(int *)(DAT_054f5738 + 0xe8) != 0) && (**(char **)(DAT_054f5738 + 0xf0) == '\0')) ||
           ((*piVar15 == 0 || ((piVar15[1] == 0 || ((ulong)*(ushort *)(piVar15 + 2) == 0))))))
        goto LAB_02558a0c;
        lVar16 = 0xc;
        if (*(char *)((long)piVar15 + 10) != '\0') {
          lVar16 = 0x1c;
        }
        puVar14 = (uint *)((long)piVar15 + lVar16 + (ulong)*(ushort *)(piVar15 + 2) * 8);
      }
    }
  }
  else if (uVar12 < *(uint *)(DAT_054f5738 + 0x1e0)) {
    if (*(uint *)(DAT_054f5738 + 0x1d0) <= uVar12) {
      uVar12 = 0;
    }
    puVar10 = (uint *)(*(undefined8 **)(DAT_054f5738 + 0x1d8))[uVar12];
    if (puVar10 != (uint *)0x0) goto LAB_02558a18;
    puVar14 = (uint *)**(undefined8 **)(DAT_054f5738 + 0x1d8);
  }
  else {
    puVar14 = (uint *)**(undefined8 **)(DAT_054f5738 + 0x1d8);
  }
  puVar10 = &DAT_054f0b60;
  if (puVar14 != (uint *)0x0) {
    puVar10 = puVar14;
  }
LAB_02558a18:
  if (*puVar10 == 0) {
LAB_02558b24:
    bVar8 = false;
  }
  else {
    cVar19 = *PTR_DAT_04bc2fe0;
    do {
      if (cVar19 == '\0') {
        cVar19 = '\x01';
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
      }
      else {
        uVar12 = *(uint *)(puVar7 + 0x40);
        if (-1 < (int)uVar12) {
          if ((char *)((ulong)uVar12 + (long)puVar10) == (char *)0x0) goto LAB_02558b24;
          bVar8 = *(char *)((ulong)uVar12 + (long)puVar10) != '\0';
          goto LAB_02558b28;
        }
        if (uVar12 != 0xffffffff) goto LAB_02558b24;
      }
      puVar14 = (uint *)(ulong)*puVar10;
      bVar8 = false;
      if ((*puVar10 == 0) || (puVar10 == puVar14)) goto LAB_02558b28;
      lVar16 = 0xc;
      if (*(char *)((long)puVar10 + (10 - (long)puVar14)) != '\0') {
        lVar16 = 0x1c;
      }
      lVar16 = (long)puVar10 + (lVar16 - (long)puVar14);
      if (lVar16 == 0) goto LAB_02558b24;
      uVar20 = (ulong)*(ushort *)((long)puVar10 + (8 - (long)puVar14));
      *(undefined4 *)(puVar7 + 0x40) = 0xfffffffe;
      bVar8 = false;
      if (uVar20 == 0) goto LAB_02558b28;
      piVar15 = (int *)(lVar16 + 4);
      while (piVar15[-1] != 0x16e483f0) {
        piVar15 = piVar15 + 2;
        uVar20 = uVar20 - 1;
        if (uVar20 == 0) {
          bVar8 = false;
          goto LAB_02558b28;
        }
      }
      iVar9 = 0;
      if (*piVar15 != -1) {
        iVar9 = *piVar15;
      }
      *(int *)(puVar7 + 0x40) = iVar9;
    } while (*puVar10 != 0);
    bVar8 = false;
  }
LAB_02558b28:
  if ((bVar8) || (uVar11 != 1)) {
    bVar5 = *param_1;
    if (8 < (byte)(bVar5 + 1)) {
      bVar5 = 0xff;
    }
    if (bVar5 < 8) {
      uVar20 = (ulong)bVar5;
      uVar3 = *(undefined8 *)param_1;
      uVar17 = *(undefined8 *)(param_1 + 8);
      uVar18 = *(undefined8 *)(param_1 + 0x10);
      lVar1 = lVar1 + uVar20 * 0x80;
      *(undefined8 *)(lVar1 + 0x300) = *(undefined8 *)(param_1 + 0x18);
      *(undefined8 *)(lVar1 + 0x2f8) = uVar18;
      *(undefined8 *)(lVar1 + 0x2f0) = uVar17;
      *(undefined8 *)(lVar1 + 0x2e8) = uVar3;
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      uVar17 = *(undefined8 *)(param_1 + 0x28);
      uVar18 = *(undefined8 *)(param_1 + 0x30);
      *(undefined8 *)(lVar1 + 800) = *(undefined8 *)(param_1 + 0x38);
      *(undefined8 *)(lVar1 + 0x318) = uVar18;
      *(undefined8 *)(lVar1 + 0x310) = uVar17;
      *(undefined8 *)(lVar1 + 0x308) = uVar3;
      uVar3 = *(undefined8 *)(param_1 + 0x40);
      uVar17 = *(undefined8 *)(param_1 + 0x48);
      uVar18 = *(undefined8 *)(param_1 + 0x50);
      *(undefined8 *)(lVar1 + 0x340) = *(undefined8 *)(param_1 + 0x58);
      *(undefined8 *)(lVar1 + 0x338) = uVar18;
      *(undefined8 *)(lVar1 + 0x330) = uVar17;
      *(undefined8 *)(lVar1 + 0x328) = uVar3;
      uVar3 = *(undefined8 *)(param_1 + 0x60);
      uVar18 = *(undefined8 *)(param_1 + 0x68);
      uVar17 = *(undefined8 *)(param_1 + 0x70);
      *(undefined2 *)(lVar1 + 0x360) = *(undefined2 *)(param_1 + 0x78);
      *(undefined8 *)(lVar1 + 0x358) = uVar17;
      *(undefined8 *)(lVar1 + 0x350) = uVar18;
      *(undefined8 *)(lVar1 + 0x348) = uVar3;
      puVar6 = PTR_DAT_04bc31b0;
      plVar13 = (long *)(PTR_DAT_04bc31b0 + uVar20 * 0x30 + 8);
      if (((*plVar13 != *(long *)param_1 ||
           *(long *)(PTR_DAT_04bc31b0 + uVar20 * 0x30 + 0x10) != *(long *)(param_1 + 8)) ||
          *(long *)(PTR_DAT_04bc31b0 + uVar20 * 0x30 + 0x18) != *(long *)(param_1 + 0x10)) ||
          *(int *)(PTR_DAT_04bc31b0 + uVar20 * 0x30 + 0x20) != *(int *)(param_1 + 0x18)) {
        lVar1 = *(long *)param_1;
        uVar3 = *(undefined8 *)(param_1 + 8);
        uVar18 = *(undefined8 *)(param_1 + 0x10);
        *(undefined4 *)(PTR_DAT_04bc31b0 + uVar20 * 0x30 + 0x20) = *(undefined4 *)(param_1 + 0x18);
        *plVar13 = lVar1;
        *(undefined8 *)(puVar6 + uVar20 * 0x30 + 0x10) = uVar3;
        *(undefined8 *)(puVar6 + uVar20 * 0x30 + 0x18) = uVar18;
      }
      puVar6 = PTR_DAT_04bc31b8;
      __s1 = (undefined8 *)(PTR_DAT_04bc31b8 + uVar20 * 0x70 + 8);
      iVar9 = memcmp(__s1,param_1 + 0x20,0x58);
      if (iVar9 != 0) {
        uVar3 = *(undefined8 *)(param_1 + 0x20);
        uVar18 = *(undefined8 *)(param_1 + 0x30);
        *(undefined8 *)(puVar6 + uVar20 * 0x70 + 0x10) = *(undefined8 *)(param_1 + 0x28);
        *(undefined8 *)(puVar6 + uVar20 * 0x70 + 0x18) = uVar18;
        *__s1 = uVar3;
        uVar3 = *(undefined8 *)(param_1 + 0x38);
        uVar18 = *(undefined8 *)(param_1 + 0x40);
        uVar17 = *(undefined8 *)(param_1 + 0x50);
        *(undefined8 *)(puVar6 + uVar20 * 0x70 + 0x30) = *(undefined8 *)(param_1 + 0x48);
        *(undefined8 *)(puVar6 + uVar20 * 0x70 + 0x38) = uVar17;
        *(undefined8 *)(puVar6 + uVar20 * 0x70 + 0x20) = uVar3;
        *(undefined8 *)(puVar6 + uVar20 * 0x70 + 0x28) = uVar18;
        uVar3 = *(undefined8 *)(param_1 + 0x58);
        uVar18 = *(undefined8 *)(param_1 + 0x60);
        uVar17 = *(undefined8 *)(param_1 + 0x70);
        *(undefined8 *)(puVar6 + uVar20 * 0x70 + 0x50) = *(undefined8 *)(param_1 + 0x68);
        *(undefined8 *)(puVar6 + uVar20 * 0x70 + 0x58) = uVar17;
        *(undefined8 *)(puVar6 + uVar20 * 0x70 + 0x40) = uVar3;
        *(undefined8 *)(puVar6 + uVar20 * 0x70 + 0x48) = uVar18;
      }
      if (*(short *)(PTR_DAT_04bc30f8 + uVar20 * 0x18 + 8) != *(short *)(param_1 + 0x78)) {
        *(short *)(PTR_DAT_04bc30f8 + uVar20 * 0x18 + 8) = *(short *)(param_1 + 0x78);
      }
    }
  }
  return;
}


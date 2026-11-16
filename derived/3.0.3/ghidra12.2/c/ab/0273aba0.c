
void FUN_0273aba0(undefined1 *param_1)

{
  uint uVar1;
  long lVar2;
  ushort uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  undefined1 uVar8;
  uint *puVar9;
  char cVar10;
  uint uVar11;
  undefined1 *puVar12;
  ulong uVar13;
  uint *puVar14;
  int *piVar15;
  long lVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  
  puVar6 = PTR_DAT_04bb6488;
  puVar5 = PTR_DAT_04bb6480;
  lVar16 = *(long *)PTR_DAT_04bb2208;
  uVar17 = *(uint *)(lVar16 + 0x23a0);
  if (((int)uVar17 < 1) &&
     (((*(long *)(lVar16 + 0x2290) == 0 ||
       (puVar9 = *(uint **)(*(long *)(lVar16 + 0x2290) + 8), puVar9 == (uint *)0x0)) ||
      (uVar17 = *puVar9, uVar17 == 0)))) {
    return;
  }
  uVar18 = 0;
LAB_0273ac0c:
  if ((int)*(uint *)(lVar16 + 0x23a0) < 1) {
    if (((((*(long *)(lVar16 + 0x2290) == 0) ||
          (puVar9 = *(uint **)(*(long *)(lVar16 + 0x2290) + 8), puVar9 == (uint *)0x0)) ||
         ((uVar18 < *(uint *)(lVar16 + 0x22a8) &&
          (*(char *)(*(long *)(lVar16 + 0x22b0) + (long)(int)uVar18) == '\0')))) ||
        ((*puVar9 <= uVar18 || (puVar9[1] == 0)))) || ((ushort)puVar9[2] == 0)) goto LAB_0273ac00;
    iVar19 = 0xc;
    if (*(char *)((long)puVar9 + 10) != '\0') {
      iVar19 = 0x1c;
    }
    puVar9 = (uint *)((ulong)(puVar9[1] * uVar18 + (uint)(ushort)puVar9[2] * 8 + iVar19) +
                     (long)puVar9);
    if (puVar9 == (uint *)0x0) goto LAB_0273ac00;
LAB_0273ac38:
    uVar1 = *puVar9;
    if (uVar1 != 0) {
      cVar10 = *puVar5;
      do {
        if (cVar10 == '\0') {
          cVar10 = '\x01';
          *(undefined8 *)puVar6 = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
          *puVar5 = 1;
          *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
          uVar1 = *puVar9;
        }
        else {
          uVar13 = (ulong)*(uint *)puVar6;
          if (-1 < (int)*(uint *)puVar6) {
            if (((ushort *)(uVar13 + (long)puVar9) == (ushort *)0x0) ||
               (*(ushort *)(uVar13 + (long)puVar9) < 0x100)) goto LAB_0273ad5c;
            goto LAB_0273ac00;
          }
          if (uVar13 != 0xffffffff) goto LAB_0273ad5c;
        }
        lVar4 = (long)puVar9 - (ulong)uVar1;
        uVar13 = 0xffffffff;
        if (((ulong)uVar1 == 0) || (lVar4 == 0)) goto LAB_0273ad5c;
        lVar2 = 0xc;
        if (*(char *)(lVar4 + 10) != '\0') {
          lVar2 = 0x1c;
        }
        if (lVar2 + lVar4 == 0) {
          uVar13 = 0xffffffff;
          goto LAB_0273ad5c;
        }
        uVar13 = (ulong)*(ushort *)(lVar4 + 8);
        *(undefined4 *)puVar6 = 0xfffffffe;
        if (uVar13 == 0) {
          uVar13 = 0xfffffffe;
          goto LAB_0273ad5c;
        }
        piVar15 = (int *)(lVar2 + lVar4 + 4);
        while (piVar15[-1] != 0x54706054) {
          piVar15 = piVar15 + 2;
          uVar13 = uVar13 - 1;
          if (uVar13 == 0) {
            uVar13 = 0xfffffffe;
            goto LAB_0273ad5c;
          }
        }
        iVar19 = 0;
        if (*piVar15 != -1) {
          iVar19 = *piVar15;
        }
        *(int *)puVar6 = iVar19;
        uVar1 = *puVar9;
      } while (uVar1 != 0);
    }
LAB_0273abf4:
    uVar8 = 0;
    goto LAB_0273abf8;
  }
  if (uVar18 < *(uint *)(lVar16 + 0x23a0)) {
    uVar1 = uVar18;
    if (*(uint *)(lVar16 + 0x2390) <= uVar18) {
      uVar1 = 0;
    }
    puVar9 = *(uint **)(*(long *)(lVar16 + 0x2398) + (ulong)uVar1 * 8);
    if (puVar9 != (uint *)0x0) goto LAB_0273ac38;
  }
  goto LAB_0273ac00;
LAB_0273ad5c:
  if (*puVar9 == 0) goto LAB_0273abf4;
  if (-1 < (int)uVar13) {
    if ((ushort *)(uVar13 + (long)puVar9) == (ushort *)0x0) goto LAB_0273ae18;
    uVar3 = *(ushort *)(uVar13 + (long)puVar9);
    uVar11 = (uint)uVar3;
    uVar1 = *puVar9;
    uVar7 = (uint)uVar3;
    if (uVar1 == 0) goto LAB_0273aea8;
LAB_0273ae20:
    uVar11 = uVar7;
    uVar13 = (ulong)*(uint *)(puVar6 + 4);
    goto LAB_0273ae24;
  }
  if ((uVar13 != 0xffffffff) || (lVar4 = (long)puVar9 - (ulong)*puVar9, lVar4 == 0)) {
LAB_0273ae18:
    uVar1 = *puVar9;
joined_r0x0273aea4:
    uVar11 = 0;
    uVar7 = 0;
    if (uVar1 != 0) goto LAB_0273ae20;
    goto LAB_0273aea8;
  }
  lVar2 = 0xc;
  if (*(char *)(lVar4 + 10) != '\0') {
    lVar2 = 0x1c;
  }
  if (lVar2 + lVar4 == 0) {
    uVar1 = *puVar9;
    goto joined_r0x0273aea4;
  }
  uVar13 = (ulong)*(ushort *)(lVar4 + 8);
  *(undefined4 *)puVar6 = 0xfffffffe;
  if (uVar13 == 0) goto LAB_0273ae18;
  puVar14 = (uint *)(lVar2 + lVar4 + 4);
  while (puVar14[-1] != 0x54706054) {
    puVar14 = puVar14 + 2;
    uVar13 = uVar13 - 1;
    if (uVar13 == 0) goto LAB_0273ae18;
  }
  uVar13 = 0;
  if (*puVar14 != 0xffffffff) {
    uVar13 = (ulong)*puVar14;
  }
  *(int *)puVar6 = (int)uVar13;
  goto LAB_0273ad5c;
LAB_0273ae24:
  if (-1 < (int)uVar13) {
    uVar8 = 0;
    if ((undefined1 *)(uVar13 + (long)puVar9) != (undefined1 *)0x0) {
      uVar8 = *(undefined1 *)(uVar13 + (long)puVar9);
    }
    goto LAB_0273aeac;
  }
  if ((uVar13 != 0xffffffff) || (lVar4 = (long)puVar9 - (ulong)uVar1, lVar4 == 0))
  goto LAB_0273aea8;
  lVar2 = 0xc;
  if (*(char *)(lVar4 + 10) != '\0') {
    lVar2 = 0x1c;
  }
  if (lVar2 + lVar4 == 0) goto LAB_0273aea8;
  uVar13 = (ulong)*(ushort *)(lVar4 + 8);
  *(undefined4 *)(puVar6 + 4) = 0xfffffffe;
  if (uVar13 == 0) goto LAB_0273aea8;
  puVar14 = (uint *)(lVar2 + lVar4 + 4);
  while (puVar14[-1] != 0xd55938bd) {
    puVar14 = puVar14 + 2;
    uVar13 = uVar13 - 1;
    if (uVar13 == 0) goto LAB_0273aea8;
  }
  uVar13 = 0;
  if (*puVar14 != 0xffffffff) {
    uVar13 = (ulong)*puVar14;
  }
  *(int *)(puVar6 + 4) = (int)uVar13;
  uVar1 = *puVar9;
  if (uVar1 == 0) goto LAB_0273aea8;
  goto LAB_0273ae24;
LAB_0273aea8:
  uVar8 = 0;
LAB_0273aeac:
  if (uVar11 < 0x100) {
    puVar12 = param_1 + uVar11;
  }
  else {
LAB_0273abf8:
    puVar12 = param_1;
  }
  *puVar12 = uVar8;
LAB_0273ac00:
  uVar18 = uVar18 + 1;
  if (uVar18 == uVar17) {
    return;
  }
  goto LAB_0273ac0c;
}


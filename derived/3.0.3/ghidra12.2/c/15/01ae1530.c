
void FUN_01ae1530(long param_1,undefined8 param_2)

{
  long lVar1;
  uint uVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined *puVar5;
  int *piVar6;
  undefined2 uVar7;
  uint uVar8;
  uint *puVar9;
  int iVar10;
  uint *puVar11;
  char cVar12;
  ulong uVar13;
  
  puVar5 = PTR_DAT_04bbff90;
  puVar4 = PTR_DAT_04bbff88;
  puVar9 = *(uint **)(param_1 + 0x10);
  uVar8 = 0;
  if (puVar9 != (uint *)0x0) {
    uVar8 = *puVar9;
    if (uVar8 != 0 && puVar9 != (uint *)(ulong)uVar8) {
      puVar11 = (uint *)((long)puVar9 - (long)(ulong)uVar8);
      if (((*puVar11 != 0) && (uVar8 = puVar11[1], uVar8 != 0)) && ((ulong)(ushort)puVar11[2] != 0))
      {
        lVar1 = 0xc;
        if (*(char *)((long)puVar11 + 10) != '\0') {
          lVar1 = 0x1c;
        }
        lVar1 = (long)puVar11 + lVar1 + (ulong)(ushort)puVar11[2] * 8;
        if (lVar1 != 0) {
          uVar2 = 0;
          if ((ulong)uVar8 != 0) {
            uVar2 = (uint)((ulong)((long)puVar9 - lVar1) / (ulong)uVar8);
          }
          if (*puVar11 <= uVar2) {
            uVar2 = 0xffffffff;
          }
          if ((uVar2 < *(uint *)PTR_DAT_04bc0020) &&
             (uVar3 = *(ushort *)(*(long *)(PTR_DAT_04bc0020 + 8) + (long)(int)uVar2 * 2),
             uVar8 = (uint)uVar3, uVar3 < 0x5b6)) goto LAB_01ae15c4;
        }
      }
    }
    uVar8 = 0;
  }
LAB_01ae15c4:
  if ((int)*(uint *)(DAT_0532a7e8 + 0x1c0) < 1) {
    if ((((*(long *)(DAT_0532a7e8 + 0xb0) == 0) ||
         (puVar9 = *(uint **)(*(long *)(DAT_0532a7e8 + 0xb0) + 8), puVar9 == (uint *)0x0)) ||
        ((uVar8 < *(uint *)(DAT_0532a7e8 + 200) &&
         (*(char *)(*(long *)(DAT_0532a7e8 + 0xd0) + (long)(int)uVar8) == '\0')))) ||
       (((*puVar9 <= uVar8 || (puVar9[1] == 0)) || ((ushort)puVar9[2] == 0)))) goto LAB_01ae1758;
    iVar10 = 0xc;
    if (*(char *)((long)puVar9 + 10) != '\0') {
      iVar10 = 0x1c;
    }
    puVar9 = (uint *)((ulong)(puVar9[1] * uVar8 + (uint)(ushort)puVar9[2] * 8 + iVar10) +
                     (long)puVar9);
  }
  else {
    if (*(uint *)(DAT_0532a7e8 + 0x1c0) <= uVar8) goto LAB_01ae1758;
    if (*(uint *)(DAT_0532a7e8 + 0x1b0) <= uVar8) {
      uVar8 = 0;
    }
    puVar9 = *(uint **)(*(long *)(DAT_0532a7e8 + 0x1b8) + (ulong)uVar8 * 8);
  }
  if ((puVar9 != (uint *)0x0) && (*puVar9 != 0)) {
    cVar12 = *PTR_DAT_04bbff88;
    do {
      if (cVar12 == '\0') {
        cVar12 = '\x01';
        *(undefined8 *)puVar5 = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
        *puVar4 = 1;
        *(undefined8 *)(puVar5 + 0x40) = 0xffffffffffffffff;
        *(undefined4 *)(puVar5 + 0x48) = 0xffffffff;
        *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x38) = 0xffffffffffffffff;
      }
      else {
        uVar8 = *(uint *)(puVar5 + 0xc);
        if (-1 < (int)uVar8) {
          if ((undefined2 *)((ulong)uVar8 + (long)puVar9) == (undefined2 *)0x0) break;
          uVar7 = *(undefined2 *)((ulong)uVar8 + (long)puVar9);
          goto LAB_01ae175c;
        }
        if (uVar8 != 0xffffffff) break;
      }
      puVar11 = (uint *)(ulong)*puVar9;
      uVar7 = 0;
      if ((*puVar9 == 0) || (puVar9 == puVar11)) goto LAB_01ae175c;
      lVar1 = 0xc;
      if (*(char *)((long)puVar9 + (10 - (long)puVar11)) != '\0') {
        lVar1 = 0x1c;
      }
      lVar1 = (long)puVar9 + (lVar1 - (long)puVar11);
      if (lVar1 == 0) break;
      uVar13 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar11));
      *(undefined4 *)(puVar5 + 0xc) = 0xfffffffe;
      if (uVar13 == 0) break;
      piVar6 = (int *)(lVar1 + 4);
      while (piVar6[-1] != 0x54706054) {
        piVar6 = piVar6 + 2;
        uVar13 = uVar13 - 1;
        if (uVar13 == 0) goto LAB_01ae1758;
      }
      uVar7 = 0;
      iVar10 = 0;
      if (*piVar6 != -1) {
        iVar10 = *piVar6;
      }
      *(int *)(puVar5 + 0xc) = iVar10;
      if (*puVar9 == 0) goto LAB_01ae175c;
    } while( true );
  }
LAB_01ae1758:
  uVar7 = 0;
LAB_01ae175c:
  FUN_038d1270(param_2,&DAT_0405bf91,uVar7);
  return;
}


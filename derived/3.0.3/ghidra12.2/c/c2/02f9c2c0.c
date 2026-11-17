
void FUN_02f9c2c0(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined *puVar8;
  undefined *puVar9;
  bool bVar10;
  bool bVar11;
  int iVar12;
  ulong uVar13;
  long *plVar14;
  long lVar15;
  undefined8 *puVar16;
  uint uVar17;
  
  uVar4 = *(uint *)(param_1 + 0x8a350);
  if (uVar4 != 0) {
    uVar13 = 0;
    do {
      lVar15 = *(long *)(*(long *)(param_1 + 0x210) + 0x580);
      iVar12 = (int)uVar13;
      if (((lVar15 == 0) || (iVar12 < 0)) || (*(int *)(lVar15 + 0x3cc) <= iVar12)) {
        plVar14 = *(long **)(param_1 + 0x8a358);
      }
      else {
        plVar14 = (long *)(*(long *)(param_1 + 0x8a358) + uVar13 * 8);
      }
      lVar15 = (long)iVar12;
      bVar10 = *(uint *)(param_1 + 600) <= uVar13;
      uVar13 = uVar13 + 1;
      if (bVar10) {
        lVar15 = 0;
      }
      *(bool *)(*(long *)(param_1 + 0x260) + lVar15) =
           *(short *)(*plVar14 + 8) != -2 && *(char *)(*plVar14 + 0x27) != '\0';
    } while (uVar13 != uVar4);
  }
  puVar9 = PTR_DAT_04bc4d98;
  puVar8 = PTR_DAT_04bc4d90;
  lVar15 = *(long *)(*(long *)(param_1 + 0x210) + 0x580);
  if ((lVar15 != 0) && (uVar4 = *(uint *)(param_1 + 600), 0 < (int)uVar4)) {
    uVar17 = 0;
    puVar1 = PTR_DAT_04bc4da0 + 0x10;
    do {
      if ((int)uVar17 < *(int *)(lVar15 + 0x3d4)) {
        iVar12 = *(int *)(lVar15 + 0x430) - *(int *)(lVar15 + 0x438);
        if ((*(byte *)(lVar15 + 1000) >> 1 & 1) != 0) {
          uVar5 = *(uint *)(lVar15 + 0x434);
          uVar2 = 0;
          if ((int)uVar5 < iVar12) {
            uVar2 = ~uVar5;
          }
          if (iVar12 < 0) {
            uVar2 = uVar5 + 1;
          }
          iVar12 = uVar2 + iVar12;
        }
        iVar6 = *(int *)(lVar15 + 0x2e8);
        iVar7 = 0;
        if (iVar6 != 0) {
          iVar7 = (int)uVar17 / iVar6;
        }
        uVar5 = *(uint *)(lVar15 + 0x208);
        uVar2 = uVar17 + ((iVar7 - iVar12) * iVar6 - iVar7 * iVar6);
        bVar11 = (int)uVar2 < 0;
        bVar10 = (int)uVar5 <= (int)uVar2;
        if (bVar11 || bVar10) {
          uVar2 = 0xffffffff;
        }
        if ((((bVar11 || bVar10) || (int)uVar5 <= (int)uVar2) || uVar5 < uVar2) ||
            ((!bVar11 && !bVar10) && (int)uVar2 < (int)uVar5) && uVar5 == uVar2) goto LAB_02f9c42c;
        puVar16 = *(undefined8 **)(*(long *)(lVar15 + 0x210) + (ulong)uVar2 * 8);
        bVar3 = *puVar9;
      }
      else {
LAB_02f9c42c:
        puVar16 = (undefined8 *)0x0;
        bVar3 = *puVar9;
      }
      if (((bVar3 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar9), iVar12 != 0)) {
        *(undefined **)puVar8 = puVar1;
        __cxa_guard_release(puVar9);
      }
      if ((puVar16 != (undefined8 *)0x0) &&
         (uVar13 = (**(code **)*puVar16)(puVar16,puVar8), (uVar13 & 1) != 0)) {
        uVar2 = uVar17;
        if (*(uint *)(param_1 + 600) <= uVar17) {
          uVar2 = 0;
        }
        FUN_030bfe80(puVar16,*(undefined1 *)(*(long *)(param_1 + 0x260) + (ulong)uVar2));
      }
      uVar17 = uVar17 + 1;
    } while (uVar4 != uVar17);
  }
  return;
}


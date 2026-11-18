
bool FUN_03782f00(void)

{
  uint uVar1;
  uint *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  uint *puVar8;
  char cVar9;
  int *piVar10;
  uint uVar11;
  undefined8 *puVar12;
  long lVar13;
  
  lVar7 = *(long *)PTR_DAT_04bb2720;
  if (lVar7 == 0) {
    puVar12 = &DAT_055c04a0;
  }
  else {
    puVar12 = &DAT_055c04a0;
    if (*(long *)(lVar7 + 0x330) != 0) {
      puVar12 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar7 + 0x338));
      iVar5 = FUN_006bd550(*puVar12,0);
      puVar12 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar5 != 0x758f7eaf) {
        puVar12 = &DAT_055c04a0;
      }
    }
  }
  if (*(int *)(puVar12 + 7) != -0x17df00c3) {
    return false;
  }
  lVar7 = *(long *)PTR_DAT_04bb27f8;
  if ((((*(ushort **)PTR_DAT_04bc3a48 != (ushort *)0x0) &&
       ((**(ushort **)PTR_DAT_04bc3a48 & 1) != 0)) || ((*(byte *)(lVar7 + 0x1a71) >> 2 & 1) != 0))
     && ((*(long *)PTR_DAT_04bc1530 != 0 &&
         (lVar13 = *(long *)(*(long *)PTR_DAT_04bc1530 + 8), lVar13 != 0)))) {
    if ((*(long **)(lVar13 + 0x1790) != (long *)0x0) &&
       (puVar12 = (undefined8 *)**(long **)(lVar13 + 0x1790), puVar12 != (undefined8 *)0x0)) {
      uVar6 = (**(code **)*puVar12)();
      uVar11 = (uint)*(ushort *)(*(long *)(lVar13 + 0x1778) + *(long *)(lVar13 + 6000) + 2);
      if ((((uVar6 & 1) != 0) && (*(long *)(lVar13 + 0x1790) != 0)) &&
         (puVar12 = *(undefined8 **)(*(long *)(lVar13 + 0x1790) + 8), puVar12 != (undefined8 *)0x0))
      {
        (**(code **)*puVar12)();
      }
      goto LAB_03783034;
    }
    lVar7 = *(long *)(lVar13 + 0x1778) + *(long *)(lVar13 + 6000);
  }
  uVar11 = (uint)*(ushort *)(lVar7 + 2);
LAB_03783034:
  puVar4 = PTR_DAT_04bcad00;
  puVar3 = PTR_DAT_04bcacf8;
  if (((DAT_05abc358 <= uVar11 - DAT_05abc378) ||
      (puVar8 = *(uint **)(DAT_05abc360 + (long)(int)(uVar11 - DAT_05abc378) * 8),
      puVar8 == (uint *)0x0)) || (uVar11 = *puVar8, uVar11 == 0)) {
    return false;
  }
  cVar9 = *PTR_DAT_04bcacf8;
  while( true ) {
    if (cVar9 == '\0') {
      cVar9 = '\x01';
      *(undefined8 *)puVar4 = 0xffffffffffffffff;
      *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
      *puVar3 = 1;
      *(undefined8 *)(puVar4 + 0x70) = 0xffffffffffffffff;
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
      uVar11 = *puVar8;
    }
    else {
      uVar1 = *(uint *)(puVar4 + 0x74);
      if (-1 < (int)uVar1) {
        if ((char *)((ulong)uVar1 + (long)puVar8) == (char *)0x0) {
          return false;
        }
        return *(char *)((ulong)uVar1 + (long)puVar8) != '\0';
      }
      if (uVar1 != 0xffffffff) {
        return false;
      }
    }
    puVar2 = (uint *)(ulong)uVar11;
    if (puVar2 == (uint *)0x0) {
      return false;
    }
    if (puVar8 == puVar2) break;
    lVar7 = 0xc;
    if (*(char *)((long)puVar8 + (10 - (long)puVar2)) != '\0') {
      lVar7 = 0x1c;
    }
    lVar7 = (long)puVar8 + (lVar7 - (long)puVar2);
    if (lVar7 == 0) {
      return false;
    }
    uVar6 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar2));
    *(undefined4 *)(puVar4 + 0x74) = 0xfffffffe;
    if (uVar6 == 0) {
      return false;
    }
    piVar10 = (int *)(lVar7 + 4);
    while (piVar10[-1] != 0x1222490a) {
      piVar10 = piVar10 + 2;
      uVar6 = uVar6 - 1;
      if (uVar6 == 0) {
        return false;
      }
    }
    iVar5 = 0;
    if (*piVar10 != -1) {
      iVar5 = *piVar10;
    }
    *(int *)(puVar4 + 0x74) = iVar5;
    uVar11 = *puVar8;
    if (uVar11 == 0) {
      return false;
    }
  }
  return false;
}



void FUN_037836b0(long *param_1)

{
  uint *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  int *piVar6;
  long lVar7;
  uint *puVar8;
  char cVar9;
  uint uVar10;
  uint uVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined *local_40;
  undefined8 local_38;
  
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
      iVar4 = FUN_006bd550(*puVar12,0);
      puVar12 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar4 != 0x758f7eaf) {
        puVar12 = &DAT_055c04a0;
      }
    }
  }
  if (*(int *)(puVar12 + 7) != -0x17df00c3) {
    lVar7 = *(long *)(PTR_PTR_04bb2238 + 8);
    goto LAB_03783980;
  }
  lVar7 = *(long *)PTR_DAT_04bb27f8;
  if ((((*(ushort **)PTR_DAT_04bc3a48 == (ushort *)0x0) ||
       ((**(ushort **)PTR_DAT_04bc3a48 & 1) == 0)) && ((*(byte *)(lVar7 + 0x1a71) >> 2 & 1) == 0))
     || ((*(long *)PTR_DAT_04bc1530 == 0 ||
         (lVar13 = *(long *)(*(long *)PTR_DAT_04bc1530 + 8), lVar13 == 0)))) {
LAB_037837fc:
    uVar11 = (uint)*(ushort *)(lVar7 + 2);
  }
  else {
    if ((*(long **)(lVar13 + 0x1790) == (long *)0x0) ||
       (puVar12 = (undefined8 *)**(long **)(lVar13 + 0x1790), puVar12 == (undefined8 *)0x0)) {
      lVar7 = *(long *)(lVar13 + 0x1778) + *(long *)(lVar13 + 6000);
      goto LAB_037837fc;
    }
    uVar5 = (**(code **)*puVar12)();
    uVar11 = (uint)*(ushort *)(*(long *)(lVar13 + 0x1778) + *(long *)(lVar13 + 6000) + 2);
    if ((((uVar5 & 1) != 0) && (*(long *)(lVar13 + 0x1790) != 0)) &&
       (puVar12 = *(undefined8 **)(*(long *)(lVar13 + 0x1790) + 8), puVar12 != (undefined8 *)0x0)) {
      (**(code **)*puVar12)();
    }
  }
  puVar3 = PTR_DAT_04bcad00;
  puVar2 = PTR_DAT_04bcacf8;
  if (((uVar11 - DAT_05abc378 < DAT_05abc358) &&
      (puVar8 = *(uint **)(DAT_05abc360 + (long)(int)(uVar11 - DAT_05abc378) * 8),
      puVar8 != (uint *)0x0)) && (uVar11 = *puVar8, uVar11 != 0)) {
    cVar9 = *PTR_DAT_04bcacf8;
    do {
      if (cVar9 == '\0') {
        cVar9 = '\x01';
        *(undefined8 *)puVar3 = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
        *puVar2 = 1;
        *(undefined8 *)(puVar3 + 0x70) = 0xffffffffffffffff;
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
        uVar11 = *puVar8;
      }
      else {
        uVar10 = *(uint *)(puVar3 + 0x18);
        if (-1 < (int)uVar10) {
          if ((ushort *)((ulong)uVar10 + (long)puVar8) == (ushort *)0x0) break;
          uVar10 = (uint)*(ushort *)((ulong)uVar10 + (long)puVar8);
          goto LAB_03783934;
        }
        if (uVar10 != 0xffffffff) break;
      }
      puVar1 = (uint *)(ulong)uVar11;
      uVar10 = 0;
      if ((puVar1 == (uint *)0x0) || (uVar10 = 0, puVar8 == puVar1)) goto LAB_03783934;
      lVar7 = 0xc;
      if (*(char *)((long)puVar8 + (10 - (long)puVar1)) != '\0') {
        lVar7 = 0x1c;
      }
      lVar7 = (long)puVar8 + (lVar7 - (long)puVar1);
      uVar10 = 0;
      if (lVar7 == 0) goto LAB_03783934;
      uVar5 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar1));
      *(undefined4 *)(puVar3 + 0x18) = 0xfffffffe;
      if (uVar5 == 0) break;
      piVar6 = (int *)(lVar7 + 4);
      while (piVar6[-1] != 0x352c163e) {
        piVar6 = piVar6 + 2;
        uVar5 = uVar5 - 1;
        if (uVar5 == 0) goto LAB_03783930;
      }
      uVar10 = 0;
      iVar4 = 0;
      if (*piVar6 != -1) {
        iVar4 = *piVar6;
      }
      *(int *)(puVar3 + 0x18) = iVar4;
      uVar11 = *puVar8;
      if (uVar11 == 0) goto LAB_03783934;
    } while( true );
  }
LAB_03783930:
  uVar10 = 0;
LAB_03783934:
  local_40 = PTR_DAT_04bcace8 + 0x10;
  if (uVar10 - DAT_05abc0d8 < DAT_05abc0b8) {
    local_38 = *(undefined8 *)(DAT_05abc0c0 + (long)(int)(uVar10 - DAT_05abc0d8) * 8);
  }
  else {
    local_38 = 0;
  }
  lVar7 = FUN_0373f820(&local_40);
LAB_03783980:
  *param_1 = (long)(PTR_DAT_04bb2020 + 0x10);
  param_1[1] = lVar7;
  return;
}


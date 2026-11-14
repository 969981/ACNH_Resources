
undefined * FUN_017c16b0(long param_1,uint param_2)

{
  long lVar1;
  undefined *puVar2;
  int *piVar3;
  undefined *puVar4;
  uint *puVar5;
  int iVar6;
  char cVar7;
  uint uVar8;
  uint *puVar9;
  ulong uVar10;
  
  puVar2 = PTR_DAT_04bbe400;
  puVar4 = PTR_DAT_04bbe3f8;
  if ((int)*(uint *)(param_1 + 0x3c8) < 1) {
    if (*(long *)(param_1 + 0x2b8) == 0) {
      return (undefined *)0x0;
    }
    puVar5 = *(uint **)(*(long *)(param_1 + 0x2b8) + 8);
    if (puVar5 == (uint *)0x0) {
      return (undefined *)0x0;
    }
    if ((param_2 < *(uint *)(param_1 + 0x2d0)) &&
       (*(char *)(*(long *)(param_1 + 0x2d8) + (long)(int)param_2) == '\0')) {
      return (undefined *)0x0;
    }
    if (*puVar5 <= param_2) {
      return (undefined *)0x0;
    }
    if (puVar5[1] == 0) {
      return (undefined *)0x0;
    }
    if ((ushort)puVar5[2] == 0) {
      return (undefined *)0x0;
    }
    iVar6 = 0xc;
    if (*(char *)((long)puVar5 + 10) != '\0') {
      iVar6 = 0x1c;
    }
    puVar5 = (uint *)((ulong)(puVar5[1] * param_2 + (uint)(ushort)puVar5[2] * 8 + iVar6) +
                     (long)puVar5);
  }
  else {
    if (*(uint *)(param_1 + 0x3c8) <= param_2) {
      return (undefined *)0x0;
    }
    if (*(uint *)(param_1 + 0x3b8) <= param_2) {
      param_2 = 0;
    }
    puVar5 = *(uint **)(*(long *)(param_1 + 0x3c0) + (ulong)param_2 * 8);
  }
  if (puVar5 != (uint *)0x0) {
    if (*puVar5 == 0) {
LAB_017c1838:
      uVar8 = 0;
    }
    else {
      cVar7 = *PTR_DAT_04bbe3f8;
      do {
        if (cVar7 == '\0') {
          cVar7 = '\x01';
          *(undefined8 *)puVar2 = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 8) = 0xffffffffffffffff;
          *puVar4 = 1;
          *(undefined8 *)(puVar2 + 0x30) = 0xffffffffffffffff;
          *(undefined4 *)(puVar2 + 0x38) = 0xffffffff;
          *(undefined8 *)(puVar2 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x28) = 0xffffffffffffffff;
        }
        else {
          uVar8 = *(uint *)(puVar2 + 0x10);
          if (-1 < (int)uVar8) {
            if ((ushort *)((ulong)uVar8 + (long)puVar5) == (ushort *)0x0) goto LAB_017c1838;
            uVar8 = (uint)*(ushort *)((ulong)uVar8 + (long)puVar5);
            goto LAB_017c183c;
          }
          if (uVar8 != 0xffffffff) goto LAB_017c1838;
        }
        puVar9 = (uint *)(ulong)*puVar5;
        uVar8 = 0;
        if ((*puVar5 == 0) || (puVar5 == puVar9)) goto LAB_017c183c;
        lVar1 = 0xc;
        if (*(char *)((long)puVar5 + (10 - (long)puVar9)) != '\0') {
          lVar1 = 0x1c;
        }
        lVar1 = (long)puVar5 + (lVar1 - (long)puVar9);
        if (lVar1 == 0) goto LAB_017c1838;
        uVar10 = (ulong)*(ushort *)((long)puVar5 + (8 - (long)puVar9));
        *(undefined4 *)(puVar2 + 0x10) = 0xfffffffe;
        uVar8 = 0;
        if (uVar10 == 0) goto LAB_017c183c;
        piVar3 = (int *)(lVar1 + 4);
        while (piVar3[-1] != 0x499e42f9) {
          piVar3 = piVar3 + 2;
          uVar10 = uVar10 - 1;
          if (uVar10 == 0) {
            uVar8 = 0;
            goto LAB_017c183c;
          }
        }
        iVar6 = 0;
        if (*piVar3 != -1) {
          iVar6 = *piVar3;
        }
        *(int *)(puVar2 + 0x10) = iVar6;
      } while (*puVar5 != 0);
      uVar8 = 0;
    }
LAB_017c183c:
    uVar8 = uVar8 - *(ushort *)(param_1 + 0xc00);
    if ((uVar8 < *(uint *)(param_1 + 0xbe0)) &&
       (puVar5 = *(uint **)(*(long *)(param_1 + 0xbe8) + (long)(int)uVar8 * 8),
       puVar5 != (uint *)0x0)) {
      uVar8 = *puVar5;
      if (uVar8 == 0) {
LAB_017c1934:
        puVar4 = (undefined *)0x0;
LAB_017c1938:
        puVar2 = PTR_DAT_04c48400;
        if (puVar4 != (undefined *)0x0) {
          puVar2 = puVar4;
        }
        return puVar2;
      }
      cVar7 = DAT_05292f98;
      do {
        if (cVar7 == '\0') {
          DAT_05292f9c = -1;
          cVar7 = '\x01';
          uVar8 = *puVar5;
          DAT_05292f98 = '\x01';
        }
        else {
          if (-1 < DAT_05292f9c) {
            puVar4 = (undefined *)((ulong)DAT_05292f9c._4_4_ + (long)puVar5);
            goto LAB_017c1938;
          }
          if (DAT_05292f9c._4_4_ != 0xffffffff) goto LAB_017c1934;
        }
        puVar9 = (uint *)(ulong)uVar8;
        puVar4 = (undefined *)0x0;
        if ((puVar9 == (uint *)0x0) || (puVar4 = (undefined *)0x0, puVar5 == puVar9))
        goto LAB_017c1938;
        lVar1 = 0xc;
        if (*(char *)((long)puVar5 + (10 - (long)puVar9)) != '\0') {
          lVar1 = 0x1c;
        }
        lVar1 = (long)puVar5 + (lVar1 - (long)puVar9);
        puVar4 = (undefined *)0x0;
        if (lVar1 == 0) goto LAB_017c1938;
        uVar10 = (ulong)*(ushort *)((long)puVar5 + (8 - (long)puVar9));
        DAT_05292f9c = CONCAT44(0xfffffffe,(undefined4)DAT_05292f9c);
        if (uVar10 == 0) goto LAB_017c1934;
        piVar3 = (int *)(lVar1 + 4);
        while (piVar3[-1] != 0x4b9c4229) {
          piVar3 = piVar3 + 2;
          uVar10 = uVar10 - 1;
          if (uVar10 == 0) goto LAB_017c1934;
        }
        iVar6 = 0;
        if (*piVar3 != -1) {
          iVar6 = *piVar3;
        }
        DAT_05292f9c = CONCAT44(iVar6,(undefined4)DAT_05292f9c);
        uVar8 = *puVar5;
        if (uVar8 == 0) goto LAB_017c1934;
      } while( true );
    }
  }
  return (undefined *)0x0;
}


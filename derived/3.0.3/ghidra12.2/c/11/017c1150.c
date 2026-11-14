
undefined * FUN_017c1150(long param_1,uint param_2)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  uint *puVar5;
  int iVar6;
  char cVar7;
  uint uVar8;
  uint *puVar9;
  int *piVar10;
  
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
LAB_017c12d8:
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
          uVar8 = *(uint *)(puVar2 + 0x1c);
          if (-1 < (int)uVar8) {
            if ((ushort *)((ulong)uVar8 + (long)puVar5) == (ushort *)0x0) goto LAB_017c12d8;
            uVar8 = (uint)*(ushort *)((ulong)uVar8 + (long)puVar5);
            goto LAB_017c12dc;
          }
          if (uVar8 != 0xffffffff) goto LAB_017c12d8;
        }
        puVar9 = (uint *)(ulong)*puVar5;
        uVar8 = 0;
        if ((*puVar5 == 0) || (puVar5 == puVar9)) goto LAB_017c12dc;
        lVar1 = 0xc;
        if (*(char *)((long)puVar5 + (10 - (long)puVar9)) != '\0') {
          lVar1 = 0x1c;
        }
        lVar1 = (long)puVar5 + (lVar1 - (long)puVar9);
        if (lVar1 == 0) goto LAB_017c12d8;
        uVar3 = (ulong)*(ushort *)((long)puVar5 + (8 - (long)puVar9));
        *(undefined4 *)(puVar2 + 0x1c) = 0xfffffffe;
        uVar8 = 0;
        if (uVar3 == 0) goto LAB_017c12dc;
        piVar10 = (int *)(lVar1 + 4);
        while (piVar10[-1] != -0x5f1a9624) {
          piVar10 = piVar10 + 2;
          uVar3 = uVar3 - 1;
          if (uVar3 == 0) {
            uVar8 = 0;
            goto LAB_017c12dc;
          }
        }
        iVar6 = 0;
        if (*piVar10 != -1) {
          iVar6 = *piVar10;
        }
        *(int *)(puVar2 + 0x1c) = iVar6;
      } while (*puVar5 != 0);
      uVar8 = 0;
    }
LAB_017c12dc:
    uVar8 = uVar8 - *(ushort *)(param_1 + 0x800);
    if ((uVar8 < *(uint *)(param_1 + 0x7e0)) &&
       (puVar5 = *(uint **)(*(long *)(param_1 + 0x7e8) + (long)(int)uVar8 * 8),
       puVar5 != (uint *)0x0)) {
      uVar8 = *puVar5;
      if (uVar8 == 0) {
LAB_017c13d4:
        puVar4 = (undefined *)0x0;
LAB_017c13d8:
        puVar2 = PTR_DAT_04c483f0;
        if (puVar4 != (undefined *)0x0) {
          puVar2 = puVar4;
        }
        return puVar2;
      }
      cVar7 = DAT_05292f78;
      do {
        if (cVar7 == '\0') {
          DAT_05292f7c = 0xffffffffffffffff;
          cVar7 = '\x01';
          DAT_05292f84 = 0xffffffff;
          uVar8 = *puVar5;
          DAT_05292f78 = '\x01';
        }
        else {
          if (-1 < (int)DAT_05292f84) {
            puVar4 = (undefined *)((ulong)DAT_05292f84 + (long)puVar5);
            goto LAB_017c13d8;
          }
          if (DAT_05292f84 != 0xffffffff) goto LAB_017c13d4;
        }
        puVar9 = (uint *)(ulong)uVar8;
        puVar4 = (undefined *)0x0;
        if ((puVar9 == (uint *)0x0) || (puVar4 = (undefined *)0x0, puVar5 == puVar9))
        goto LAB_017c13d8;
        lVar1 = 0xc;
        if (*(char *)((long)puVar5 + (10 - (long)puVar9)) != '\0') {
          lVar1 = 0x1c;
        }
        lVar1 = (long)puVar5 + (lVar1 - (long)puVar9);
        puVar4 = (undefined *)0x0;
        if (lVar1 == 0) goto LAB_017c13d8;
        uVar3 = (ulong)*(ushort *)((long)puVar5 + (8 - (long)puVar9));
        DAT_05292f84 = 0xfffffffe;
        if (uVar3 == 0) goto LAB_017c13d4;
        puVar9 = (uint *)(lVar1 + 4);
        while (puVar9[-1] != 0x4b9c4229) {
          puVar9 = puVar9 + 2;
          uVar3 = uVar3 - 1;
          if (uVar3 == 0) goto LAB_017c13d4;
        }
        DAT_05292f84 = 0;
        if (*puVar9 != 0xffffffff) {
          DAT_05292f84 = *puVar9;
        }
        uVar8 = *puVar5;
        if (uVar8 == 0) goto LAB_017c13d4;
      } while( true );
    }
  }
  return (undefined *)0x0;
}


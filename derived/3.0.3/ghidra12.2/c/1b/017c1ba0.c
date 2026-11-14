
ushort FUN_017c1ba0(long param_1,uint param_2)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  ushort uVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint *puVar7;
  uint *puVar8;
  char cVar9;
  uint uVar10;
  ulong uVar11;
  int *piVar12;
  
  puVar6 = PTR_DAT_04bbe400;
  puVar5 = PTR_DAT_04bbe3f8;
  uVar10 = (param_2 & 0xffff) - (uint)*(ushort *)(param_1 + 0x400);
  if ((uVar10 < *(uint *)(param_1 + 0x3e0)) &&
     (puVar7 = *(uint **)(*(long *)(param_1 + 1000) + (long)(int)uVar10 * 8), puVar7 != (uint *)0x0)
     ) {
    if (*puVar7 == 0) {
LAB_017c1cb8:
      uVar10 = 0;
    }
    else {
      cVar9 = *PTR_DAT_04bbe3f8;
      do {
        if (cVar9 == '\0') {
          cVar9 = '\x01';
          *(undefined8 *)puVar6 = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
          *puVar5 = 1;
          *(undefined8 *)(puVar6 + 0x30) = 0xffffffffffffffff;
          *(undefined4 *)(puVar6 + 0x38) = 0xffffffff;
          *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x28) = 0xffffffffffffffff;
        }
        else {
          uVar10 = *(uint *)(puVar6 + 0x28);
          if (-1 < (int)uVar10) {
            if ((ushort *)((ulong)uVar10 + (long)puVar7) == (ushort *)0x0) goto LAB_017c1cb8;
            uVar10 = (uint)*(ushort *)((ulong)uVar10 + (long)puVar7);
            goto LAB_017c1cbc;
          }
          if (uVar10 != 0xffffffff) goto LAB_017c1cb8;
        }
        puVar8 = (uint *)(ulong)*puVar7;
        uVar10 = 0;
        if ((*puVar7 == 0) || (puVar7 == puVar8)) goto LAB_017c1cbc;
        lVar2 = 0xc;
        if (*(char *)((long)puVar7 + (10 - (long)puVar8)) != '\0') {
          lVar2 = 0x1c;
        }
        lVar2 = (long)puVar7 + (lVar2 - (long)puVar8);
        if (lVar2 == 0) goto LAB_017c1cb8;
        uVar11 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar8));
        *(undefined4 *)(puVar6 + 0x28) = 0xfffffffe;
        uVar10 = 0;
        if (uVar11 == 0) goto LAB_017c1cbc;
        piVar12 = (int *)(lVar2 + 4);
        while (piVar12[-1] != -0x1c5d79ea) {
          piVar12 = piVar12 + 2;
          uVar11 = uVar11 - 1;
          if (uVar11 == 0) {
            uVar10 = 0;
            goto LAB_017c1cbc;
          }
        }
        iVar1 = 0;
        if (*piVar12 != -1) {
          iVar1 = *piVar12;
        }
        *(int *)(puVar6 + 0x28) = iVar1;
      } while (*puVar7 != 0);
      uVar10 = 0;
    }
LAB_017c1cbc:
    uVar10 = uVar10 - *(ushort *)(param_1 + 0x600);
    if (((uVar10 < *(uint *)(param_1 + 0x5e0)) &&
        (puVar7 = *(uint **)(*(long *)(param_1 + 0x5e8) + (long)(int)uVar10 * 8),
        puVar7 != (uint *)0x0)) &&
       (uVar10 = *puVar7, uVar10 != 0 && puVar7 != (uint *)(ulong)uVar10)) {
      puVar8 = (uint *)((long)puVar7 - (long)(ulong)uVar10);
      if (((*puVar8 != 0) && (uVar10 = puVar8[1], uVar10 != 0)) && ((ulong)(ushort)puVar8[2] != 0))
      {
        lVar2 = 0xc;
        if (*(char *)((long)puVar8 + 10) != '\0') {
          lVar2 = 0x1c;
        }
        lVar2 = (long)puVar8 + lVar2 + (ulong)(ushort)puVar8[2] * 8;
        if (lVar2 != 0) {
          uVar3 = 0;
          if ((ulong)uVar10 != 0) {
            uVar3 = (uint)((ulong)((long)puVar7 - lVar2) / (ulong)uVar10);
          }
          if (*puVar8 <= uVar3) {
            uVar3 = 0xffffffff;
          }
          if ((uVar3 < DAT_05292ff8) &&
             (uVar4 = *(ushort *)(DAT_05293000 + (long)(int)uVar3 * 2), uVar4 < 4)) {
            return uVar4;
          }
        }
      }
    }
  }
  return 0;
}


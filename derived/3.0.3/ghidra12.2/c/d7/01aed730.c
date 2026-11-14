
int FUN_01aed730(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *__s;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  int iVar7;
  uint *puVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  int *piVar12;
  uint *puVar13;
  char cVar14;
  undefined2 local_68;
  undefined2 local_66;
  undefined4 local_64;
  
  uVar5 = FUN_01af0020();
  if ((uVar5 & 1) == 0) {
    iVar3 = 1;
    puVar8 = *(uint **)(param_1 + 0x10);
  }
  else {
    iVar3 = FUN_01af02d0(param_1);
    puVar8 = *(uint **)(param_1 + 0x10);
  }
  if (puVar8 == (uint *)0x0) {
    return 0;
  }
  uVar4 = *puVar8;
  uVar5 = 0;
  if ((uVar4 == 0) || (puVar8 == (uint *)(ulong)uVar4)) goto LAB_01aed84c;
  puVar13 = (uint *)((long)puVar8 - (long)(ulong)uVar4);
  if ((*puVar13 != 0) && ((uVar4 = puVar13[1], uVar4 != 0 && ((ulong)(ushort)puVar13[2] != 0)))) {
    lVar9 = 0xc;
    if (*(char *)((long)puVar13 + 10) != '\0') {
      lVar9 = 0x1c;
    }
    lVar9 = (long)puVar13 + lVar9 + (ulong)(ushort)puVar13[2] * 8;
    if (lVar9 != 0) {
      uVar1 = 0;
      if ((ulong)uVar4 != 0) {
        uVar1 = (uint)((ulong)((long)puVar8 - lVar9) / (ulong)uVar4);
      }
      if (*puVar13 <= uVar1) {
        uVar1 = 0xffffffff;
      }
      if ((uVar1 < *(uint *)PTR_DAT_04bc00c8) &&
         (*(short *)(*(long *)((long)PTR_DAT_04bc00c8 + 8) + (long)(int)uVar1 * 2) == 0x57)) {
        lVar9 = *(long *)PTR_DAT_04bb46b0;
        if (lVar9 == 0) {
LAB_01aed9b8:
          lVar9 = 0;
        }
        else {
          puVar10 = *(undefined8 **)(lVar9 + 0x10);
          if ((*(byte *)(lVar9 + 0x453) & 1) == 0) {
            lVar6 = (**(code **)(*(long *)*puVar10 + 0x38))();
            lVar9 = 0;
            if (lVar6 != 0) {
              lVar9 = lVar6 + 0x70;
            }
          }
          else {
            if (puVar10 == (undefined8 *)0x0) goto LAB_01aed9b8;
            lVar9 = 0;
            if ((long *)puVar10[0x26] != (long *)0x0) {
              lVar9 = (**(code **)(*(long *)puVar10[0x26] + 0x38))();
            }
          }
        }
        if ((*(long **)(lVar9 + 0x1c24e8) == (long *)0x0) ||
           (puVar10 = (undefined8 *)**(long **)(lVar9 + 0x1c24e8), puVar10 == (undefined8 *)0x0)) {
          uVar4 = 1;
        }
        else {
          uVar4 = (**(code **)*puVar10)();
          uVar4 = uVar4 ^ 1;
        }
        local_66 = 0;
        local_64 = 0;
        local_68 = *(undefined2 *)
                    (*(long *)(lVar9 + 0x1c24d0) + *(long *)(lVar9 + 0x1c24c8) + 0x900);
        FUN_0277d4ac(&local_68);
        uVar5 = FUN_0277d7b4(&local_68,param_1 + 8);
        uVar5 = uVar5 & 0xffffffff;
        if ((((uVar4 & 1) == 0) && (*(long *)(lVar9 + 0x1c24e8) != 0)) &&
           (puVar10 = *(undefined8 **)(*(long *)(lVar9 + 0x1c24e8) + 8),
           puVar10 != (undefined8 *)0x0)) {
          (**(code **)*puVar10)();
        }
        goto LAB_01aed84c;
      }
    }
  }
  uVar5 = 0;
LAB_01aed84c:
  __s = PTR_DAT_04bbfe90;
  puVar2 = PTR_DAT_04bbfe88;
  puVar8 = *(uint **)(param_1 + 0x10);
  if ((puVar8 == (uint *)0x0) || (*puVar8 == 0)) {
LAB_01aed954:
    iVar7 = 0;
joined_r0x01aed948:
    if ((uVar5 & 1) == 0) {
      iVar7 = iVar7 * iVar3;
    }
    else {
      iVar7 = (iVar7 * iVar3) / 5;
    }
    return iVar7;
  }
  cVar14 = *PTR_DAT_04bbfe88;
  do {
    if (cVar14 == '\0') {
      cVar14 = '\x01';
      *puVar2 = 1;
      memset(__s,0xff,0x1ac);
      uVar4 = *puVar8;
    }
    else {
      uVar4 = *(uint *)(__s + 0xec);
      if (-1 < (int)uVar4) {
        if ((int *)((ulong)uVar4 + (long)puVar8) != (int *)0x0) {
          iVar7 = *(int *)((ulong)uVar4 + (long)puVar8);
          goto joined_r0x01aed948;
        }
        goto LAB_01aed954;
      }
      if (uVar4 != 0xffffffff) goto LAB_01aed954;
      uVar4 = *puVar8;
    }
    if ((uVar4 == 0) || (puVar13 = (uint *)(ulong)uVar4, puVar8 == puVar13)) goto LAB_01aed954;
    lVar9 = 0xc;
    if (*(char *)((long)puVar8 + (10 - (long)puVar13)) != '\0') {
      lVar9 = 0x1c;
    }
    lVar9 = (long)puVar8 + (lVar9 - (long)puVar13);
    if (lVar9 == 0) goto LAB_01aed954;
    uVar11 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar13));
    *(undefined4 *)(__s + 0xec) = 0xfffffffe;
    if (uVar11 == 0) goto LAB_01aed954;
    piVar12 = (int *)(lVar9 + 4);
    while (piVar12[-1] != 0x718b024d) {
      piVar12 = piVar12 + 2;
      uVar11 = uVar11 - 1;
      if (uVar11 == 0) goto LAB_01aed954;
    }
    iVar7 = 0;
    if (*piVar12 != -1) {
      iVar7 = *piVar12;
    }
    *(int *)(__s + 0xec) = iVar7;
    if (*puVar8 == 0) goto LAB_01aed954;
  } while( true );
}


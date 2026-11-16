
bool FUN_0279d2d0(long param_1,uint *param_2,byte *param_3)

{
  short *psVar1;
  short *psVar2;
  long lVar3;
  uint uVar4;
  short sVar5;
  ushort uVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  uint uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  int *piVar13;
  char cVar14;
  long lVar15;
  byte local_38 [4];
  byte local_34 [4];
  
  if (param_2 == (uint *)0x0) {
    return false;
  }
  local_38[0] = *param_3;
  if (7 < local_38[0]) {
    local_38[0] = 0xff;
  }
  uVar11 = FUN_02669430(local_38);
  puVar8 = PTR_DAT_04bb6448;
  puVar7 = PTR_DAT_04bb6440;
  if ((uVar11 & 1) == 0) {
LAB_0279d41c:
    puVar8 = PTR_DAT_04bb6448;
    puVar7 = PTR_DAT_04bb6440;
    if (*param_2 != 0) {
      cVar14 = *PTR_DAT_04bb6440;
      do {
        if (cVar14 != '\0') {
          uVar4 = *(uint *)(puVar8 + 4);
          if ((int)uVar4 < 0) {
            if (uVar4 == 0xffffffff) goto LAB_0279d488;
          }
          else if ((uint *)((ulong)uVar4 + (long)param_2) != (uint *)0x0) {
            uVar4 = *(uint *)((ulong)uVar4 + (long)param_2);
            if (-1 < (int)uVar4) {
              local_34[0] = *param_3;
              if (7 < local_34[0]) {
                local_34[0] = 0xff;
              }
              lVar15 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_34,1);
              if (lVar15 != 0) {
                if ((*(long **)(lVar15 + 0x18320) == (long *)0x0) ||
                   (puVar12 = (undefined8 *)**(long **)(lVar15 + 0x18320),
                   puVar12 == (undefined8 *)0x0)) {
                  uVar10 = 1;
                }
                else {
                  uVar10 = (**(code **)*puVar12)();
                  uVar10 = uVar10 ^ 1;
                }
                psVar1 = (short *)(*(long *)(lVar15 + 0x18308) + *(long *)(lVar15 + 0x18300));
                psVar2 = psVar1 + uVar4;
                if (0x7ff < uVar4) {
                  psVar2 = psVar1;
                }
                sVar5 = *psVar2;
                if ((((uVar10 & 1) == 0) && (*(long *)(lVar15 + 0x18320) != 0)) &&
                   (puVar12 = *(undefined8 **)(*(long *)(lVar15 + 0x18320) + 8),
                   puVar12 != (undefined8 *)0x0)) {
                  (**(code **)*puVar12)();
                }
                if (sVar5 != 0) {
                  return true;
                }
              }
            }
          }
LAB_0279d5b0:
          if (*param_2 != 0) {
            cVar14 = *puVar7;
            goto LAB_0279d5d0;
          }
          break;
        }
        cVar14 = '\x01';
        *(undefined8 *)puVar8 = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
        *puVar7 = 1;
        *(undefined4 *)(puVar8 + 0x50) = 0xffffffff;
        *(undefined8 *)(puVar8 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x38) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x40) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x48) = 0xffffffffffffffff;
LAB_0279d488:
        lVar15 = (long)param_2 - (ulong)*param_2;
        if ((*param_2 == 0) || (lVar15 == 0)) goto LAB_0279d5b0;
        lVar3 = 0xc;
        if (*(char *)(lVar15 + 10) != '\0') {
          lVar3 = 0x1c;
        }
        if (lVar3 + lVar15 == 0) goto LAB_0279d5b0;
        uVar11 = (ulong)*(ushort *)(lVar15 + 8);
        *(undefined4 *)(puVar8 + 4) = 0xfffffffe;
        if (uVar11 == 0) goto LAB_0279d5b0;
        piVar13 = (int *)(lVar3 + lVar15 + 4);
        while (piVar13[-1] != 0x4171a41d) {
          piVar13 = piVar13 + 2;
          uVar11 = uVar11 - 1;
          if (uVar11 == 0) goto LAB_0279d5b0;
        }
        iVar9 = 0;
        if (*piVar13 != -1) {
          iVar9 = *piVar13;
        }
        *(int *)(puVar8 + 4) = iVar9;
      } while (*param_2 != 0);
    }
  }
  else {
    uVar4 = *param_2;
    if (uVar4 != 0) {
      cVar14 = *PTR_DAT_04bb6440;
      do {
        if (cVar14 == '\0') {
          cVar14 = '\x01';
          *(undefined8 *)puVar8 = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
          *puVar7 = 1;
          *(undefined4 *)(puVar8 + 0x50) = 0xffffffff;
          *(undefined8 *)(puVar8 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x38) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x40) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x48) = 0xffffffffffffffff;
          uVar4 = *param_2;
        }
        else {
          uVar10 = *(uint *)puVar8;
          if (-1 < (int)uVar10) {
            if ((((int *)((ulong)uVar10 + (long)param_2) != (int *)0x0) &&
                (-1 < *(int *)((ulong)uVar10 + (long)param_2))) &&
               (iVar9 = FUN_02740318(), 0 < iVar9)) {
              return true;
            }
            goto LAB_0279d41c;
          }
          if (uVar10 != 0xffffffff) goto LAB_0279d41c;
        }
        if (((ulong)uVar4 == 0) || (lVar15 = (long)param_2 - (ulong)uVar4, lVar15 == 0))
        goto LAB_0279d41c;
        lVar3 = 0xc;
        if (*(char *)(lVar15 + 10) != '\0') {
          lVar3 = 0x1c;
        }
        if (lVar3 + lVar15 == 0) goto LAB_0279d41c;
        uVar11 = (ulong)*(ushort *)(lVar15 + 8);
        *(undefined4 *)puVar8 = 0xfffffffe;
        if (uVar11 == 0) goto LAB_0279d41c;
        piVar13 = (int *)(lVar3 + lVar15 + 4);
        while (piVar13[-1] != 0x3fe43170) {
          piVar13 = piVar13 + 2;
          uVar11 = uVar11 - 1;
          if (uVar11 == 0) goto LAB_0279d41c;
        }
        iVar9 = 0;
        if (*piVar13 != -1) {
          iVar9 = *piVar13;
        }
        *(int *)puVar8 = iVar9;
        uVar4 = *param_2;
      } while (uVar4 != 0);
    }
  }
LAB_0279d69c:
  piVar13 = (int *)(param_1 + 0xe98);
LAB_0279d6a0:
  return 0 < *piVar13;
LAB_0279d5d0:
  if (cVar14 == '\0') {
    cVar14 = '\x01';
    *(undefined8 *)puVar8 = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
    *puVar7 = 1;
    *(undefined4 *)(puVar8 + 0x50) = 0xffffffff;
    *(undefined8 *)(puVar8 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x18) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x20) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x28) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x30) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x38) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x40) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x48) = 0xffffffffffffffff;
  }
  else {
    uVar4 = *(uint *)(puVar8 + 0x3c);
    if (-1 < (int)uVar4) {
      if ((ushort *)((ulong)uVar4 + (long)param_2) != (ushort *)0x0) {
        uVar6 = *(ushort *)((ulong)uVar4 + (long)param_2);
        piVar13 = (int *)(param_1 + 0xe98);
        if (uVar6 < 0x200) {
          piVar13 = piVar13 + uVar6;
        }
        goto LAB_0279d6a0;
      }
      goto LAB_0279d69c;
    }
    if (uVar4 != 0xffffffff) goto LAB_0279d69c;
  }
  lVar15 = (long)param_2 - (ulong)*param_2;
  if ((*param_2 == 0) || (lVar15 == 0)) goto LAB_0279d69c;
  lVar3 = 0xc;
  if (*(char *)(lVar15 + 10) != '\0') {
    lVar3 = 0x1c;
  }
  if (lVar3 + lVar15 == 0) goto LAB_0279d69c;
  uVar11 = (ulong)*(ushort *)(lVar15 + 8);
  *(undefined4 *)(puVar8 + 0x3c) = 0xfffffffe;
  if (uVar11 == 0) goto LAB_0279d69c;
  piVar13 = (int *)(lVar3 + lVar15 + 4);
  while (piVar13[-1] != 0x54706054) {
    piVar13 = piVar13 + 2;
    uVar11 = uVar11 - 1;
    if (uVar11 == 0) goto LAB_0279d69c;
  }
  iVar9 = 0;
  if (*piVar13 != -1) {
    iVar9 = *piVar13;
  }
  *(int *)(puVar8 + 0x3c) = iVar9;
  if (*param_2 == 0) goto LAB_0279d69c;
  goto LAB_0279d5d0;
}


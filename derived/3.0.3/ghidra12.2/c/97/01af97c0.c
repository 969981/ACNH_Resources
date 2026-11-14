
void FUN_01af97c0(undefined4 *param_1,undefined8 param_2)

{
  long lVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  char cVar8;
  undefined2 uVar9;
  ulong uVar10;
  uint *puVar11;
  int *piVar12;
  
  iVar5 = FUN_01af93e8();
  if (iVar5 != 0) {
    uVar6 = FUN_01af93e8(param_2);
    puVar4 = PTR_DAT_04bbfee8;
    puVar3 = PTR_DAT_04bbfee0;
    if ((int)*(uint *)(DAT_0532a790 + 0x1c0) < 1) {
      if ((((*(long *)(DAT_0532a790 + 0xb0) == 0) ||
           (puVar7 = *(uint **)(*(long *)(DAT_0532a790 + 0xb0) + 8), puVar7 == (uint *)0x0)) ||
          ((uVar6 < *(uint *)(DAT_0532a790 + 200) &&
           (*(char *)(*(long *)(DAT_0532a790 + 0xd0) + (long)(int)uVar6) == '\0')))) ||
         (((*puVar7 <= uVar6 || (puVar7[1] == 0)) || ((ushort)puVar7[2] == 0)))) goto LAB_01af9964;
      iVar5 = 0xc;
      if (*(char *)((long)puVar7 + 10) != '\0') {
        iVar5 = 0x1c;
      }
      puVar7 = (uint *)((ulong)(puVar7[1] * uVar6 + (uint)(ushort)puVar7[2] * 8 + iVar5) +
                       (long)puVar7);
    }
    else {
      if (*(uint *)(DAT_0532a790 + 0x1c0) <= uVar6) goto LAB_01af9964;
      if (*(uint *)(DAT_0532a790 + 0x1b0) <= uVar6) {
        uVar6 = 0;
      }
      puVar7 = *(uint **)(*(long *)(DAT_0532a790 + 0x1b8) + (ulong)uVar6 * 8);
    }
    if (puVar7 != (uint *)0x0) {
      if (*puVar7 == 0) {
LAB_01af9994:
        uVar9 = 0xfffe;
LAB_01af9998:
        *(undefined2 *)param_1 = uVar9;
        *(undefined2 *)((long)param_1 + 2) = 0;
        param_1[1] = 0;
        FUN_0277d4ac(param_1);
        return;
      }
      cVar8 = *PTR_DAT_04bbfee0;
      do {
        if (cVar8 == '\0') {
          cVar8 = '\x01';
          *(undefined8 *)puVar4 = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
          *puVar3 = 1;
          *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
        }
        else {
          uVar6 = *(uint *)(puVar4 + 4);
          if (-1 < (int)uVar6) {
            if ((undefined2 *)((ulong)uVar6 + (long)puVar7) != (undefined2 *)0x0) {
              uVar9 = *(undefined2 *)((ulong)uVar6 + (long)puVar7);
              goto LAB_01af9998;
            }
            goto LAB_01af9994;
          }
          if (uVar6 != 0xffffffff) goto LAB_01af9994;
        }
        puVar11 = (uint *)(ulong)*puVar7;
        uVar9 = 0xfffe;
        if ((*puVar7 == 0) || (puVar7 == puVar11)) goto LAB_01af9998;
        lVar1 = 0xc;
        if (*(char *)((long)puVar7 + (10 - (long)puVar11)) != '\0') {
          lVar1 = 0x1c;
        }
        lVar1 = (long)puVar7 + (lVar1 - (long)puVar11);
        if (lVar1 == 0) goto LAB_01af9994;
        uVar10 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar11));
        *(undefined4 *)(puVar4 + 4) = 0xfffffffe;
        if (uVar10 == 0) goto LAB_01af9994;
        piVar12 = (int *)(lVar1 + 4);
        while (piVar12[-1] != -0x379ecc6) {
          piVar12 = piVar12 + 2;
          uVar10 = uVar10 - 1;
          if (uVar10 == 0) goto LAB_01af9994;
        }
        iVar5 = 0;
        if (*piVar12 != -1) {
          iVar5 = *piVar12;
        }
        *(int *)(puVar4 + 4) = iVar5;
        if (*puVar7 == 0) goto LAB_01af9994;
      } while( true );
    }
  }
LAB_01af9964:
  uVar2 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
  *param_1 = *(undefined4 *)PTR_DAT_04bb37e0;
  param_1[1] = uVar2;
  return;
}


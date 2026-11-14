
void FUN_01b88620(long *param_1,long param_2,uint param_3)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  long lVar11;
  char cVar12;
  undefined2 uVar13;
  ulong uVar14;
  uint *puVar15;
  int *piVar16;
  
  uVar3 = (param_3 ^ param_3 >> 0x1e) * 0x6c078965 + 1;
  uVar9 = 0;
  uVar4 = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 2;
  uVar4 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 3;
  uVar14 = 0;
  do {
    uVar1 = (uint)uVar14 & 6;
    uVar8 = (uint)uVar14 + 2;
    bVar2 = *(byte *)(param_2 + (uVar14 >> 3));
    uVar9 = (bVar2 >> (ulong)(uVar1 | 1) & 1) + (bVar2 >> (ulong)uVar1 & 1) + uVar9;
    uVar14 = (ulong)uVar8;
  } while (uVar8 != 0x80);
  if ((int)uVar9 < 1) {
    *(undefined2 *)(param_1 + 1) = 0;
    *param_1 = (long)&PTR_LAB_04a392c8;
    return;
  }
  uVar3 = uVar3 ^ uVar3 * 0x800;
  uVar4 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 4;
  uVar8 = 0;
  iVar10 = 0;
  do {
    if ((*(byte *)(param_2 + (ulong)(uVar8 >> 3)) >> (ulong)(uVar8 & 7) & 1) != 0) {
      if (iVar10 == (int)((ulong)uVar9 * (ulong)(uVar3 >> 8 ^ uVar4 >> 0x13 ^ uVar3 ^ uVar4) >> 0x20
                         )) goto LAB_01b88708;
      iVar10 = iVar10 + 1;
    }
    uVar8 = uVar8 + 1;
  } while (uVar8 != 0x80);
  uVar8 = 0xffffffff;
LAB_01b88708:
  if ((int)*(uint *)(DAT_05336138 + 0x1c0) < 1) {
    lVar11 = *(long *)(DAT_05336138 + 0xb0);
    if (lVar11 != 0) {
      uVar9 = 0;
      if (*(uint **)(lVar11 + 8) != (uint *)0x0) {
        uVar9 = **(uint **)(lVar11 + 8);
      }
      uVar8 = uVar8 & ((int)uVar8 >> 0x1f ^ 0xffffffffU);
      if (uVar9 <= uVar8) {
        uVar8 = 0;
      }
      puVar7 = *(uint **)(lVar11 + 8);
      if ((puVar7 != (uint *)0x0) &&
         ((((*(uint *)(DAT_05336138 + 200) <= uVar8 ||
            (*(char *)(*(long *)(DAT_05336138 + 0xd0) + (ulong)uVar8) != '\0')) && (uVar8 < *puVar7)
           ) && ((puVar7[1] != 0 && ((ushort)puVar7[2] != 0)))))) {
        iVar10 = 0xc;
        if (*(char *)((long)puVar7 + 10) != '\0') {
          iVar10 = 0x1c;
        }
        puVar7 = (uint *)((ulong)(puVar7[1] * uVar8 + (uint)(ushort)puVar7[2] * 8 + iVar10) +
                         (long)puVar7);
        goto LAB_01b84c10;
      }
    }
    puVar7 = (uint *)0x0;
  }
  else {
    uVar8 = uVar8 & ((int)uVar8 >> 0x1f ^ 0xffffffffU);
    if (*(uint *)(DAT_05336138 + 0x1c0) <= uVar8) {
      uVar8 = 0;
    }
    if (*(uint *)(DAT_05336138 + 0x1b0) <= uVar8) {
      uVar8 = 0;
    }
    puVar7 = *(uint **)(*(long *)(DAT_05336138 + 0x1b8) + (ulong)uVar8 * 8);
  }
LAB_01b84c10:
  *(undefined2 *)(param_1 + 1) = 0;
  *param_1 = (long)(PTR_DAT_04bc06f0 + 0x10);
  puVar6 = PTR_DAT_04bc06e8;
  puVar5 = PTR_DAT_04bc06e0;
  if (puVar7 != (uint *)0x0) {
    if (*puVar7 == 0) {
LAB_01b84d1c:
      uVar13 = 0;
    }
    else {
      cVar12 = *PTR_DAT_04bc06e0;
      do {
        if (cVar12 == '\0') {
          cVar12 = '\x01';
          *(undefined8 *)puVar6 = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
          *puVar5 = 1;
          *(undefined4 *)(puVar6 + 0x50) = 0xffffffff;
          *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x38) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x40) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x48) = 0xffffffffffffffff;
        }
        else {
          uVar9 = *(uint *)(puVar6 + 0x40);
          if (-1 < (int)uVar9) {
            if ((undefined2 *)((ulong)uVar9 + (long)puVar7) == (undefined2 *)0x0) goto LAB_01b84d1c;
            uVar13 = *(undefined2 *)((ulong)uVar9 + (long)puVar7);
            goto LAB_01b84d20;
          }
          if (uVar9 != 0xffffffff) goto LAB_01b84d1c;
        }
        puVar15 = (uint *)(ulong)*puVar7;
        uVar13 = 0;
        if ((*puVar7 == 0) || (puVar7 == puVar15)) goto LAB_01b84d20;
        lVar11 = 0xc;
        if (*(char *)((long)puVar7 + (10 - (long)puVar15)) != '\0') {
          lVar11 = 0x1c;
        }
        lVar11 = (long)puVar7 + (lVar11 - (long)puVar15);
        if (lVar11 == 0) goto LAB_01b84d1c;
        uVar14 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar15));
        *(undefined4 *)(puVar6 + 0x40) = 0xfffffffe;
        uVar13 = 0;
        if (uVar14 == 0) goto LAB_01b84d20;
        piVar16 = (int *)(lVar11 + 4);
        while (piVar16[-1] != 0x54706054) {
          piVar16 = piVar16 + 2;
          uVar14 = uVar14 - 1;
          if (uVar14 == 0) {
            uVar13 = 0;
            goto LAB_01b84d20;
          }
        }
        iVar10 = 0;
        if (*piVar16 != -1) {
          iVar10 = *piVar16;
        }
        *(int *)(puVar6 + 0x40) = iVar10;
      } while (*puVar7 != 0);
      uVar13 = 0;
    }
LAB_01b84d20:
    *(undefined2 *)(param_1 + 1) = uVar13;
  }
  return;
}


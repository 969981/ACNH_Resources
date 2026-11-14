
void FUN_01b884f0(long *param_1,long param_2,uint param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  char cVar8;
  undefined2 uVar9;
  ulong uVar10;
  uint *puVar11;
  int *piVar12;
  
  if (param_3 < 0x7fffffff) {
    uVar4 = 0;
    uVar5 = 0;
    do {
      if ((*(byte *)(param_2 + (ulong)(uVar4 >> 3)) >> (ulong)(uVar4 & 7) & 1) != 0) {
        if (uVar5 == param_3) goto LAB_01b88558;
        uVar5 = uVar5 + 1;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 != 0x80);
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = 0xffffffff;
  }
LAB_01b88558:
  if ((int)*(uint *)(DAT_05336138 + 0x1c0) < 1) {
    lVar7 = *(long *)(DAT_05336138 + 0xb0);
    if (lVar7 != 0) {
      uVar5 = 0;
      if (*(uint **)(lVar7 + 8) != (uint *)0x0) {
        uVar5 = **(uint **)(lVar7 + 8);
      }
      uVar4 = uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU);
      if (uVar5 <= uVar4) {
        uVar4 = 0;
      }
      puVar3 = *(uint **)(lVar7 + 8);
      if ((puVar3 != (uint *)0x0) &&
         ((((*(uint *)(DAT_05336138 + 200) <= uVar4 ||
            (*(char *)(*(long *)(DAT_05336138 + 0xd0) + (ulong)uVar4) != '\0')) && (uVar4 < *puVar3)
           ) && ((puVar3[1] != 0 && ((ushort)puVar3[2] != 0)))))) {
        iVar6 = 0xc;
        if (*(char *)((long)puVar3 + 10) != '\0') {
          iVar6 = 0x1c;
        }
        puVar3 = (uint *)((ulong)(puVar3[1] * uVar4 + (uint)(ushort)puVar3[2] * 8 + iVar6) +
                         (long)puVar3);
        goto LAB_01b84c10;
      }
    }
    puVar3 = (uint *)0x0;
  }
  else {
    uVar4 = uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU);
    if (*(uint *)(DAT_05336138 + 0x1c0) <= uVar4) {
      uVar4 = 0;
    }
    if (*(uint *)(DAT_05336138 + 0x1b0) <= uVar4) {
      uVar4 = 0;
    }
    puVar3 = *(uint **)(*(long *)(DAT_05336138 + 0x1b8) + (ulong)uVar4 * 8);
  }
LAB_01b84c10:
  *(undefined2 *)(param_1 + 1) = 0;
  *param_1 = (long)(PTR_DAT_04bc06f0 + 0x10);
  puVar2 = PTR_DAT_04bc06e8;
  puVar1 = PTR_DAT_04bc06e0;
  if (puVar3 != (uint *)0x0) {
    if (*puVar3 == 0) {
LAB_01b84d1c:
      uVar9 = 0;
    }
    else {
      cVar8 = *PTR_DAT_04bc06e0;
      do {
        if (cVar8 == '\0') {
          cVar8 = '\x01';
          *(undefined8 *)puVar2 = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 8) = 0xffffffffffffffff;
          *puVar1 = 1;
          *(undefined4 *)(puVar2 + 0x50) = 0xffffffff;
          *(undefined8 *)(puVar2 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x38) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x40) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x48) = 0xffffffffffffffff;
        }
        else {
          uVar5 = *(uint *)(puVar2 + 0x40);
          if (-1 < (int)uVar5) {
            if ((undefined2 *)((ulong)uVar5 + (long)puVar3) == (undefined2 *)0x0) goto LAB_01b84d1c;
            uVar9 = *(undefined2 *)((ulong)uVar5 + (long)puVar3);
            goto LAB_01b84d20;
          }
          if (uVar5 != 0xffffffff) goto LAB_01b84d1c;
        }
        puVar11 = (uint *)(ulong)*puVar3;
        uVar9 = 0;
        if ((*puVar3 == 0) || (puVar3 == puVar11)) goto LAB_01b84d20;
        lVar7 = 0xc;
        if (*(char *)((long)puVar3 + (10 - (long)puVar11)) != '\0') {
          lVar7 = 0x1c;
        }
        lVar7 = (long)puVar3 + (lVar7 - (long)puVar11);
        if (lVar7 == 0) goto LAB_01b84d1c;
        uVar10 = (ulong)*(ushort *)((long)puVar3 + (8 - (long)puVar11));
        *(undefined4 *)(puVar2 + 0x40) = 0xfffffffe;
        uVar9 = 0;
        if (uVar10 == 0) goto LAB_01b84d20;
        piVar12 = (int *)(lVar7 + 4);
        while (piVar12[-1] != 0x54706054) {
          piVar12 = piVar12 + 2;
          uVar10 = uVar10 - 1;
          if (uVar10 == 0) {
            uVar9 = 0;
            goto LAB_01b84d20;
          }
        }
        iVar6 = 0;
        if (*piVar12 != -1) {
          iVar6 = *piVar12;
        }
        *(int *)(puVar2 + 0x40) = iVar6;
      } while (*puVar3 != 0);
      uVar9 = 0;
    }
LAB_01b84d20:
    *(undefined2 *)(param_1 + 1) = uVar9;
  }
  return;
}



void FUN_01c505e0(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  ushort uVar5;
  uint uVar6;
  undefined *puVar7;
  undefined *puVar8;
  byte bVar9;
  uint *puVar10;
  int *piVar11;
  undefined8 *puVar12;
  uint *puVar13;
  undefined8 uVar14;
  char cVar15;
  ulong uVar16;
  undefined *local_30;
  uint *local_28;
  
  local_30 = PTR_DAT_04bc0e80 + 0x10;
  uVar6 = (uint)*(ushort *)(*(long *)PTR_DAT_04bb4928 + 8) - (uint)DAT_0534f428;
  if (uVar6 < DAT_0534f408) {
    local_28 = *(uint **)(DAT_0534f410 + (long)(int)uVar6 * 8);
    *(undefined4 *)(param_1 + 0x218) = *(undefined4 *)(param_1 + 0x200);
    *(undefined4 *)(param_1 + 0x21c) = *(undefined4 *)(param_1 + 0x204);
    puVar8 = PTR_DAT_04bc0e90;
    puVar7 = PTR_DAT_04bc0e88;
    if ((local_28 != (uint *)0x0) && (uVar6 = *local_28, uVar6 != 0)) {
      cVar15 = *PTR_DAT_04bc0e88;
      do {
        if (cVar15 == '\0') {
          cVar15 = '\x01';
          *(undefined8 *)puVar8 = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
          *puVar7 = 1;
          *(undefined8 *)(puVar8 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x38) = 0xffffffffffffffff;
          uVar6 = *local_28;
        }
        else {
          uVar4 = *(uint *)(puVar8 + 0xc);
          if (-1 < (int)uVar4) {
            if (((ushort *)((ulong)uVar4 + (long)local_28) != (ushort *)0x0) &&
               (uVar5 = *(ushort *)((ulong)uVar4 + (long)local_28), -1 < (short)uVar5)) {
              puVar13 = *(uint **)(*(long *)(param_1 + 0x1e0) +
                                  (long)(int)((uint)uVar5 - (uint)*(ushort *)(param_1 + 0x1f8)) * 8)
              ;
              puVar12 = *(undefined8 **)(param_1 + 0x228);
              *(uint **)(param_1 + 0x220) = puVar13;
              uVar6 = *puVar13;
              if (uVar6 == 0) goto LAB_01c50880;
              cVar15 = DAT_0534de88;
              goto LAB_01c507a4;
            }
            break;
          }
          if (uVar4 != 0xffffffff) break;
        }
        puVar13 = (uint *)(ulong)uVar6;
        if ((puVar13 == (uint *)0x0) || (local_28 == puVar13)) break;
        lVar3 = 0xc;
        if (*(char *)((long)local_28 + (10 - (long)puVar13)) != '\0') {
          lVar3 = 0x1c;
        }
        lVar3 = (long)local_28 + (lVar3 - (long)puVar13);
        if (lVar3 == 0) break;
        uVar16 = (ulong)*(ushort *)((long)local_28 + (8 - (long)puVar13));
        *(undefined4 *)(puVar8 + 0xc) = 0xfffffffe;
        if (uVar16 == 0) break;
        piVar11 = (int *)(lVar3 + 4);
        while (piVar11[-1] != -0x1dc39bad) {
          piVar11 = piVar11 + 2;
          uVar16 = uVar16 - 1;
          if (uVar16 == 0) goto LAB_01c50838;
        }
        iVar2 = 0;
        if (*piVar11 != -1) {
          iVar2 = *piVar11;
        }
        *(int *)(puVar8 + 0xc) = iVar2;
        uVar6 = *local_28;
        if (uVar6 == 0) break;
      } while( true );
    }
LAB_01c50838:
    *(undefined8 *)(param_1 + 0x220) = 0;
  }
  else {
    local_28 = (uint *)0x0;
    *(undefined8 *)(param_1 + 0x220) = 0;
    *(undefined4 *)(param_1 + 0x218) = *(undefined4 *)(param_1 + 0x200);
    *(undefined4 *)(param_1 + 0x21c) = *(undefined4 *)(param_1 + 0x204);
  }
LAB_01c5083c:
  bVar9 = FUN_01c5fa60(&local_30,0);
  *(byte *)(param_1 + 0x230) = (bVar9 ^ 0xff) & 1;
  return;
LAB_01c507a4:
  if (cVar15 == '\0') {
    DAT_0534de8c = -1;
    cVar15 = '\x01';
    uVar6 = *puVar13;
    DAT_0534de88 = '\x01';
  }
  else {
    if (-1 < DAT_0534de8c) {
      puVar1 = (undefined8 *)((ulong)DAT_0534de8c._4_4_ + (long)puVar13);
      if (puVar1 != (undefined8 *)0x0) {
        uVar14 = *puVar1;
        *(undefined4 *)(puVar12 + 1) = *(undefined4 *)(puVar1 + 1);
        *puVar12 = uVar14;
        goto LAB_01c5083c;
      }
LAB_01c50880:
      *(undefined4 *)(puVar12 + 1) = 0;
      *puVar12 = 0;
      goto LAB_01c5083c;
    }
    if (DAT_0534de8c._4_4_ != 0xffffffff) goto LAB_01c50880;
  }
  puVar10 = (uint *)(ulong)uVar6;
  if ((puVar10 == (uint *)0x0) || (puVar13 == puVar10)) goto LAB_01c50880;
  lVar3 = 0xc;
  if (*(char *)((long)puVar13 + (10 - (long)puVar10)) != '\0') {
    lVar3 = 0x1c;
  }
  lVar3 = (long)puVar13 + (lVar3 - (long)puVar10);
  if (lVar3 == 0) goto LAB_01c50880;
  uVar16 = (ulong)*(ushort *)((long)puVar13 + (8 - (long)puVar10));
  DAT_0534de8c = CONCAT44(0xfffffffe,(undefined4)DAT_0534de8c);
  if (uVar16 == 0) goto LAB_01c50880;
  piVar11 = (int *)(lVar3 + 4);
  while (piVar11[-1] != -0x2f795ad8) {
    piVar11 = piVar11 + 2;
    uVar16 = uVar16 - 1;
    if (uVar16 == 0) goto LAB_01c50880;
  }
  iVar2 = 0;
  if (*piVar11 != -1) {
    iVar2 = *piVar11;
  }
  DAT_0534de8c = CONCAT44(iVar2,(undefined4)DAT_0534de8c);
  uVar6 = *puVar13;
  if (uVar6 == 0) goto LAB_01c50880;
  goto LAB_01c507a4;
}


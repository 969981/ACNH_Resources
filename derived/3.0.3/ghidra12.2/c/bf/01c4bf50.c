
void FUN_01c4bf50(long param_1)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  ushort uVar4;
  uint uVar5;
  undefined *puVar6;
  undefined *puVar7;
  byte bVar8;
  uint *puVar9;
  undefined2 uVar10;
  int *piVar11;
  uint *puVar12;
  char cVar13;
  ulong uVar14;
  undefined *local_30;
  uint *local_28;
  
  local_30 = PTR_DAT_04bc0e80 + 0x10;
  uVar5 = (uint)*(ushort *)(*(long *)PTR_DAT_04bb4928 + 8) - (uint)DAT_0534f428;
  if (uVar5 < DAT_0534f408) {
    local_28 = *(uint **)(DAT_0534f410 + (long)(int)uVar5 * 8);
    *(undefined4 *)(param_1 + 0x210) = *(undefined4 *)(param_1 + 0x204);
    *(undefined4 *)(param_1 + 0x214) = *(undefined4 *)(param_1 + 0x208);
    puVar7 = PTR_DAT_04bc0e90;
    puVar6 = PTR_DAT_04bc0e88;
    if ((local_28 != (uint *)0x0) && (uVar5 = *local_28, uVar5 != 0)) {
      cVar13 = *PTR_DAT_04bc0e88;
      do {
        if (cVar13 == '\0') {
          cVar13 = '\x01';
          *(undefined8 *)puVar7 = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
          *puVar6 = 1;
          *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x38) = 0xffffffffffffffff;
          uVar5 = *local_28;
        }
        else {
          uVar3 = *(uint *)(puVar7 + 8);
          if (-1 < (int)uVar3) {
            if (((ushort *)((ulong)uVar3 + (long)local_28) != (ushort *)0x0) &&
               (uVar4 = *(ushort *)((ulong)uVar3 + (long)local_28), -1 < (short)uVar4)) {
              puVar12 = *(uint **)(*(long *)(param_1 + 0x1e0) +
                                  (long)(int)((uint)uVar4 - (uint)*(ushort *)(param_1 + 0x1f8)) * 8)
              ;
              *(uint **)(param_1 + 0x218) = puVar12;
              uVar5 = *puVar12;
              if (uVar5 == 0) goto LAB_01c4c1e8;
              cVar13 = DAT_0534d2d0;
              goto LAB_01c4c114;
            }
            break;
          }
          if (uVar3 != 0xffffffff) break;
        }
        puVar12 = (uint *)(ulong)uVar5;
        if ((puVar12 == (uint *)0x0) || (local_28 == puVar12)) break;
        lVar2 = 0xc;
        if (*(char *)((long)local_28 + (10 - (long)puVar12)) != '\0') {
          lVar2 = 0x1c;
        }
        lVar2 = (long)local_28 + (lVar2 - (long)puVar12);
        if (lVar2 == 0) break;
        uVar14 = (ulong)*(ushort *)((long)local_28 + (8 - (long)puVar12));
        *(undefined4 *)(puVar7 + 8) = 0xfffffffe;
        if (uVar14 == 0) break;
        piVar11 = (int *)(lVar2 + 4);
        while (piVar11[-1] != -0x4e0c7b24) {
          piVar11 = piVar11 + 2;
          uVar14 = uVar14 - 1;
          if (uVar14 == 0) goto LAB_01c4c1ac;
        }
        iVar1 = 0;
        if (*piVar11 != -1) {
          iVar1 = *piVar11;
        }
        *(int *)(puVar7 + 8) = iVar1;
        uVar5 = *local_28;
        if (uVar5 == 0) break;
      } while( true );
    }
LAB_01c4c1ac:
    *(undefined8 *)(param_1 + 0x218) = 0;
  }
  else {
    local_28 = (uint *)0x0;
    *(undefined8 *)(param_1 + 0x218) = 0;
    *(undefined4 *)(param_1 + 0x210) = *(undefined4 *)(param_1 + 0x204);
    *(undefined4 *)(param_1 + 0x214) = *(undefined4 *)(param_1 + 0x208);
  }
LAB_01c4c1b0:
  bVar8 = FUN_01c5fa60(&local_30,1);
  *(byte *)(param_1 + 0x228) = (bVar8 ^ 0xff) & 1;
  return;
LAB_01c4c114:
  if (cVar13 == '\0') {
    DAT_0534d2d4 = -1;
    cVar13 = '\x01';
    uVar5 = *puVar12;
    DAT_0534d2d0 = '\x01';
  }
  else {
    if (-1 < DAT_0534d2d4) {
      if ((undefined2 *)((ulong)DAT_0534d2d4._4_4_ + (long)puVar12) != (undefined2 *)0x0) {
        uVar10 = *(undefined2 *)((ulong)DAT_0534d2d4._4_4_ + (long)puVar12);
        goto LAB_01c4c1ec;
      }
LAB_01c4c1e8:
      uVar10 = 0;
LAB_01c4c1ec:
      **(undefined2 **)(param_1 + 0x220) = uVar10;
      goto LAB_01c4c1b0;
    }
    if (DAT_0534d2d4._4_4_ != 0xffffffff) goto LAB_01c4c1e8;
  }
  puVar9 = (uint *)(ulong)uVar5;
  uVar10 = 0;
  if ((puVar9 == (uint *)0x0) || (puVar12 == puVar9)) goto LAB_01c4c1ec;
  lVar2 = 0xc;
  if (*(char *)((long)puVar12 + (10 - (long)puVar9)) != '\0') {
    lVar2 = 0x1c;
  }
  lVar2 = (long)puVar12 + (lVar2 - (long)puVar9);
  uVar10 = 0;
  if (lVar2 == 0) goto LAB_01c4c1ec;
  uVar14 = (ulong)*(ushort *)((long)puVar12 + (8 - (long)puVar9));
  DAT_0534d2d4 = CONCAT44(0xfffffffe,(undefined4)DAT_0534d2d4);
  if (uVar14 == 0) goto LAB_01c4c1e8;
  piVar11 = (int *)(lVar2 + 4);
  while (piVar11[-1] != -0x3ca08713) {
    piVar11 = piVar11 + 2;
    uVar14 = uVar14 - 1;
    if (uVar14 == 0) goto LAB_01c4c1e8;
  }
  iVar1 = 0;
  if (*piVar11 != -1) {
    iVar1 = *piVar11;
  }
  DAT_0534d2d4 = CONCAT44(iVar1,(undefined4)DAT_0534d2d4);
  uVar5 = *puVar12;
  if (uVar5 == 0) goto LAB_01c4c1e8;
  goto LAB_01c4c114;
}


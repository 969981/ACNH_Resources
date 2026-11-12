
undefined8 FUN_00961ad0(int *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  char *pcVar8;
  long lVar9;
  undefined8 uVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  uint uVar14;
  int iVar15;
  ulong uVar16;
  ulong uVar17;
  
  lVar2 = *(long *)(param_1 + 2);
  lVar3 = *(long *)(param_1 + 4);
  if (*param_1 == 1) {
    uVar13 = (ulong)*(uint *)(lVar3 + 0x3c) / 3;
    uVar14 = (*(uint *)(lVar3 + 0x3c) << 1) / 3;
  }
  else if (*param_1 == 0) {
    uVar13 = 0;
    uVar14 = *(uint *)(lVar3 + 0x3c) / 3;
  }
  else {
    uVar14 = *(uint *)(lVar3 + 0x3c);
    uVar13 = (ulong)(uVar14 << 1) / 3;
  }
  uVar11 = (uint)uVar13;
  uVar16 = (ulong)(*(int *)(lVar3 + 0x38) * uVar11);
  uVar17 = (ulong)(*(int *)(lVar3 + 0x38) * (uVar14 - uVar11));
  memcpy((void *)(*(long *)(lVar2 + 0x50) + uVar16 * 0x34),
         (void *)(*(long *)(lVar3 + 0x50) + uVar16 * 0x34),uVar17 * 0x34);
  memcpy((void *)(uVar16 * 4 + *(long *)(lVar2 + 0x70)),
         (void *)(uVar16 * 4 + *(long *)(lVar3 + 0x70)),uVar17 << 2);
  if ((uVar11 < uVar14) && (*(int *)(lVar2 + 0x38) != 0)) {
    uVar11 = 1;
    do {
      uVar12 = (uint)uVar13;
      if (uVar11 != 0) {
        iVar15 = (int)uVar16;
        lVar5 = (long)iVar15 * 0x34;
        uVar4 = 0;
        do {
          puVar1 = (undefined8 *)(*(long *)(lVar2 + 0x50) + lVar5);
          if (*(uint *)(lVar2 + 0x48) <= iVar15 + uVar4) {
            puVar1 = (undefined8 *)0x0;
          }
          if (((uVar4 < *(uint *)(lVar3 + 0x38) && uVar12 < *(uint *)(lVar3 + 0x3c)) &&
              (lVar6 = *(long *)(lVar3 + 0x60), lVar6 != 0)) &&
             (uVar11 = uVar4 + uVar12 * *(uint *)(lVar3 + 0x38), uVar11 < *(uint *)(lVar3 + 0x58)))
          {
            pcVar8 = (char *)(lVar6 + (long)(int)uVar11 * 0x34 + 0x30);
            if (*pcVar8 != '\a') {
              puVar7 = (undefined8 *)(lVar6 + (long)(int)uVar11 * 0x34);
              uVar10 = *puVar7;
              *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar7 + 1);
              *puVar1 = uVar10;
              *(char *)(puVar1 + 6) = *pcVar8;
            }
            pcVar8 = (char *)(lVar6 + (long)(int)uVar11 * 0x34 + 0x31);
            if (*pcVar8 != '\a') {
              lVar9 = lVar6 + (long)(int)uVar11 * 0x34;
              uVar10 = *(undefined8 *)(lVar9 + 0xc);
              *(undefined4 *)((long)puVar1 + 0x14) = *(undefined4 *)(lVar9 + 0x14);
              *(undefined8 *)((long)puVar1 + 0xc) = uVar10;
              *(char *)((long)puVar1 + 0x31) = *pcVar8;
            }
            pcVar8 = (char *)(lVar6 + (long)(int)uVar11 * 0x34 + 0x32);
            if (*pcVar8 != '\a') {
              lVar9 = lVar6 + (long)(int)uVar11 * 0x34;
              uVar10 = *(undefined8 *)(lVar9 + 0x18);
              *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(lVar9 + 0x20);
              puVar1[3] = uVar10;
              *(char *)((long)puVar1 + 0x32) = *pcVar8;
            }
            pcVar8 = (char *)(lVar6 + (long)(int)uVar11 * 0x34 + 0x33);
            if (*pcVar8 != '\a') {
              lVar6 = lVar6 + (long)(int)uVar11 * 0x34;
              uVar10 = *(undefined8 *)(lVar6 + 0x24);
              *(undefined4 *)((long)puVar1 + 0x2c) = *(undefined4 *)(lVar6 + 0x2c);
              *(undefined8 *)((long)puVar1 + 0x24) = uVar10;
              *(char *)((long)puVar1 + 0x33) = *pcVar8;
            }
          }
          uVar11 = *(uint *)(lVar2 + 0x38);
          uVar4 = uVar4 + 1;
          lVar5 = lVar5 + 0x34;
        } while (uVar4 < uVar11);
        uVar16 = (ulong)(iVar15 + uVar4);
      }
      uVar13 = (ulong)(uVar12 + 1);
    } while (uVar12 + 1 != uVar14);
  }
  return 1;
}


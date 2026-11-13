
bool FUN_01240010(void)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  char cVar9;
  ulong uVar10;
  int *piVar11;
  
  lVar2 = DAT_05150358;
  uVar6 = FUN_0277d6c4();
  puVar5 = PTR_DAT_04bbbc78;
  puVar4 = PTR_DAT_04bbbc70;
  uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar2 + 0x1f8);
  if (((uVar6 < *(uint *)(lVar2 + 0x1d8)) &&
      (puVar7 = *(uint **)(*(long *)(lVar2 + 0x1e0) + (long)(int)uVar6 * 8), puVar7 != (uint *)0x0))
     && (uVar6 = *puVar7, uVar6 != 0 && puVar7 != (uint *)(ulong)uVar6)) {
    puVar8 = (uint *)((long)puVar7 - (long)(ulong)uVar6);
    if (((*puVar8 != 0) && (uVar6 = puVar8[1], uVar6 != 0)) && ((ulong)(ushort)puVar8[2] != 0)) {
      lVar2 = 0xc;
      if (*(char *)((long)puVar8 + 10) != '\0') {
        lVar2 = 0x1c;
      }
      lVar2 = (long)puVar8 + lVar2 + (ulong)(ushort)puVar8[2] * 8;
      if (lVar2 != 0) {
        uVar3 = 0;
        if ((ulong)uVar6 != 0) {
          uVar3 = (uint)((ulong)((long)puVar7 - lVar2) / (ulong)uVar6);
        }
        if (*puVar8 <= uVar3) {
          uVar3 = 0xffffffff;
        }
        if ((uVar3 < DAT_051503b8) && (*(short *)(DAT_051503c0 + (long)(int)uVar3 * 2) == 0x2d)) {
          if (*puVar7 == 0) {
            return true;
          }
          cVar9 = *PTR_DAT_04bbbc70;
          while( true ) {
            if (cVar9 == '\0') {
              cVar9 = '\x01';
              *(undefined8 *)puVar5 = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
              *puVar4 = 1;
              *(undefined4 *)(puVar5 + 0x60) = 0xffffffff;
              *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x30) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x38) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x40) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x48) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x50) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x58) = 0xffffffffffffffff;
            }
            else {
              uVar6 = *(uint *)(puVar5 + 0x5c);
              if (-1 < (int)uVar6) {
                if ((byte *)((ulong)uVar6 + (long)puVar7) == (byte *)0x0) {
                  return true;
                }
                return (*(byte *)((ulong)uVar6 + (long)puVar7) >> 3 & 1) == 0;
              }
              if (uVar6 != 0xffffffff) {
                return true;
              }
            }
            puVar8 = (uint *)(ulong)*puVar7;
            if (*puVar7 == 0) {
              return true;
            }
            if (puVar7 == puVar8) break;
            lVar2 = 0xc;
            if (*(char *)((long)puVar7 + (10 - (long)puVar8)) != '\0') {
              lVar2 = 0x1c;
            }
            lVar2 = (long)puVar7 + (lVar2 - (long)puVar8);
            if (lVar2 == 0) {
              return true;
            }
            uVar10 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar8));
            *(undefined4 *)(puVar5 + 0x5c) = 0xfffffffe;
            if (uVar10 == 0) {
              return true;
            }
            piVar11 = (int *)(lVar2 + 4);
            while (piVar11[-1] != -0x5b4d2993) {
              piVar11 = piVar11 + 2;
              uVar10 = uVar10 - 1;
              if (uVar10 == 0) {
                return true;
              }
            }
            iVar1 = 0;
            if (*piVar11 != -1) {
              iVar1 = *piVar11;
            }
            *(int *)(puVar5 + 0x5c) = iVar1;
            if (*puVar7 == 0) {
              return true;
            }
          }
          return true;
        }
      }
    }
  }
  return false;
}


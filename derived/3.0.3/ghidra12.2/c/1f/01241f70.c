
bool FUN_01241f70(void)

{
  int iVar1;
  char *pcVar2;
  long lVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  uint *puVar8;
  ushort uVar9;
  uint *puVar10;
  char cVar11;
  char *pcVar12;
  ulong uVar13;
  int *piVar14;
  
  lVar3 = DAT_05150358;
  if (((DAT_05150358 != 0) && (*(long *)(DAT_05150358 + 0xb0) != 0)) &&
     (*(long *)(*(long *)(DAT_05150358 + 0xb0) + 8) != 0)) {
    uVar7 = FUN_0277d6c4();
    puVar6 = PTR_DAT_04bbbc78;
    puVar5 = PTR_DAT_04bbbc70;
    uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar3 + 0x1f8);
    if ((uVar7 < *(uint *)(lVar3 + 0x1d8)) &&
       (puVar8 = *(uint **)(*(long *)(lVar3 + 0x1e0) + (long)(int)uVar7 * 8), puVar8 != (uint *)0x0)
       ) {
      if (*puVar8 != 0) {
        cVar11 = *PTR_DAT_04bbbc70;
        do {
          if (cVar11 == '\0') {
            cVar11 = '\x01';
            *(undefined8 *)puVar6 = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
            *puVar5 = 1;
            *(undefined4 *)(puVar6 + 0x60) = 0xffffffff;
            *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 0x28) = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 0x30) = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 0x38) = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 0x40) = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 0x48) = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 0x50) = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 0x58) = 0xffffffffffffffff;
          }
          else {
            uVar7 = *(uint *)(puVar6 + 0x60);
            if (-1 < (int)uVar7) {
              pcVar12 = (char *)((ulong)uVar7 + (long)puVar8);
              goto LAB_012420a8;
            }
            if (uVar7 != 0xffffffff) break;
          }
          puVar10 = (uint *)(ulong)*puVar8;
          pcVar12 = (char *)0x0;
          if ((*puVar8 == 0) || (puVar8 == puVar10)) goto LAB_012420a8;
          lVar3 = 0xc;
          if (*(char *)((long)puVar8 + (10 - (long)puVar10)) != '\0') {
            lVar3 = 0x1c;
          }
          lVar3 = (long)puVar8 + (lVar3 - (long)puVar10);
          if (lVar3 == 0) break;
          uVar13 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar10));
          *(undefined4 *)(puVar6 + 0x60) = 0xfffffffe;
          pcVar12 = (char *)0x0;
          if (uVar13 == 0) goto LAB_012420a8;
          piVar14 = (int *)(lVar3 + 4);
          while (piVar14[-1] != 0x48ef0398) {
            piVar14 = piVar14 + 2;
            uVar13 = uVar13 - 1;
            if (uVar13 == 0) {
              pcVar12 = (char *)0x0;
              goto LAB_012420a8;
            }
          }
          iVar1 = 0;
          if (*piVar14 != -1) {
            iVar1 = *piVar14;
          }
          *(int *)(puVar6 + 0x60) = iVar1;
        } while (*puVar8 != 0);
      }
      pcVar12 = (char *)0x0;
LAB_012420a8:
      pcVar2 = *(char **)PTR_PTR_04bbbc90;
      if (pcVar12 != (char *)0x0) {
        pcVar2 = pcVar12;
      }
      if (*pcVar2 != '\0') {
        if (*puVar8 != 0) {
          cVar11 = *puVar5;
          do {
            if (cVar11 == '\0') {
              cVar11 = '\x01';
              *(undefined8 *)puVar6 = 0xffffffffffffffff;
              *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
              *puVar5 = 1;
              *(undefined4 *)(puVar6 + 0x60) = 0xffffffff;
              *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
              *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
              *(undefined8 *)(puVar6 + 0x28) = 0xffffffffffffffff;
              *(undefined8 *)(puVar6 + 0x30) = 0xffffffffffffffff;
              *(undefined8 *)(puVar6 + 0x38) = 0xffffffffffffffff;
              *(undefined8 *)(puVar6 + 0x40) = 0xffffffffffffffff;
              *(undefined8 *)(puVar6 + 0x48) = 0xffffffffffffffff;
              *(undefined8 *)(puVar6 + 0x50) = 0xffffffffffffffff;
              *(undefined8 *)(puVar6 + 0x58) = 0xffffffffffffffff;
            }
            else {
              uVar7 = *(uint *)(puVar6 + 0x54);
              if (-1 < (int)uVar7) {
                pcVar12 = (char *)((ulong)uVar7 + (long)puVar8);
                goto LAB_01242198;
              }
              if (uVar7 != 0xffffffff) break;
            }
            puVar10 = (uint *)(ulong)*puVar8;
            pcVar12 = (char *)0x0;
            if ((*puVar8 == 0) || (puVar8 == puVar10)) goto LAB_01242198;
            lVar3 = 0xc;
            if (*(char *)((long)puVar8 + (10 - (long)puVar10)) != '\0') {
              lVar3 = 0x1c;
            }
            lVar3 = (long)puVar8 + (lVar3 - (long)puVar10);
            if (lVar3 == 0) break;
            uVar13 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar10));
            *(undefined4 *)(puVar6 + 0x54) = 0xfffffffe;
            pcVar12 = (char *)0x0;
            if (uVar13 == 0) goto LAB_01242198;
            piVar14 = (int *)(lVar3 + 4);
            while (piVar14[-1] != 0x39b5a93d) {
              piVar14 = piVar14 + 2;
              uVar13 = uVar13 - 1;
              if (uVar13 == 0) {
                pcVar12 = (char *)0x0;
                goto LAB_01242198;
              }
            }
            iVar1 = 0;
            if (*piVar14 != -1) {
              iVar1 = *piVar14;
            }
            *(int *)(puVar6 + 0x54) = iVar1;
          } while (*puVar8 != 0);
        }
        pcVar12 = (char *)0x0;
LAB_01242198:
        pcVar2 = PTR_DAT_04c47fb0;
        if (pcVar12 != (char *)0x0) {
          pcVar2 = pcVar12;
        }
        if (*pcVar2 != '\0') {
          uVar7 = *puVar8;
          uVar9 = 0;
          if ((uVar7 != 0) && (puVar8 != (uint *)(ulong)uVar7)) {
            puVar10 = (uint *)((long)puVar8 - (long)(ulong)uVar7);
            uVar9 = 0;
            if (*puVar10 != 0) {
              uVar7 = puVar10[1];
              if ((uVar7 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
                lVar3 = 0xc;
                if (*(char *)((long)puVar10 + 10) != '\0') {
                  lVar3 = 0x1c;
                }
                lVar3 = (long)puVar10 + lVar3 + (ulong)(ushort)puVar10[2] * 8;
                if (lVar3 != 0) {
                  uVar4 = 0;
                  if ((ulong)uVar7 != 0) {
                    uVar4 = (uint)((ulong)((long)puVar8 - lVar3) / (ulong)uVar7);
                  }
                  if (*puVar10 <= uVar4) {
                    uVar4 = 0xffffffff;
                  }
                  if ((uVar4 < DAT_051503b8) &&
                     (uVar9 = *(ushort *)(DAT_051503c0 + (long)(int)uVar4 * 2), uVar9 < 0x2f))
                  goto LAB_0124223c;
                }
              }
              uVar9 = 0;
            }
          }
LAB_0124223c:
          return uVar9 != 0x2d && (uVar9 & 0xfffd) != 0x2c;
        }
      }
    }
  }
  return false;
}


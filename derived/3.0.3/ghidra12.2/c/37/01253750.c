
bool FUN_01253750(long param_1,short *param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  char cVar8;
  uint *puVar9;
  ulong uVar10;
  int *piVar11;
  long lVar12;
  
  puVar2 = PTR_DAT_04bb43c0;
  if (*(long *)(param_1 + 0x10) == 0 || *param_2 == -2) {
    return false;
  }
  lVar12 = *(long *)PTR_DAT_04bb43c0;
  uVar5 = FUN_0277d6c4(param_2);
  puVar4 = PTR_DAT_04bbbc78;
  puVar3 = PTR_DAT_04bbbc70;
  if (*(long *)puVar2 != 0) {
    lVar12 = *(long *)(lVar12 + 0x57e58);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
    if ((uVar5 < *(uint *)(lVar12 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
      puVar7 = *(uint **)(param_1 + 0x10);
      if (*puVar7 != 0) {
        cVar8 = *PTR_DAT_04bbbc70;
        uVar5 = 0xfffe;
        do {
          if (cVar8 == '\0') {
            cVar8 = '\x01';
            *(undefined8 *)puVar4 = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
            *puVar3 = 1;
            *(undefined4 *)(puVar4 + 0x60) = 0xffffffff;
            *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x30) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x38) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x40) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x48) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x50) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x58) = 0xffffffffffffffff;
            uVar6 = *puVar7;
          }
          else {
            uVar6 = *(uint *)(puVar4 + 0x10);
            if (-1 < (int)uVar6) {
              if ((ushort *)((ulong)uVar6 + (long)puVar7) != (ushort *)0x0) {
                uVar5 = (uint)*(ushort *)((ulong)uVar6 + (long)puVar7);
                goto LAB_012538f0;
              }
              break;
            }
            if (uVar6 != 0xffffffff) break;
            uVar6 = *puVar7;
          }
          if ((uVar6 == 0) || (puVar9 = (uint *)(ulong)uVar6, puVar7 == puVar9)) goto LAB_012538f0;
          lVar12 = 0xc;
          if (*(char *)((long)puVar7 + (10 - (long)puVar9)) != '\0') {
            lVar12 = 0x1c;
          }
          lVar12 = (long)puVar7 + (lVar12 - (long)puVar9);
          if (lVar12 == 0) break;
          uVar10 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar9));
          *(undefined4 *)(puVar4 + 0x10) = 0xfffffffe;
          if (uVar10 == 0) break;
          piVar11 = (int *)(lVar12 + 4);
          while (piVar11[-1] != 0x6ac5a6df) {
            piVar11 = piVar11 + 2;
            uVar10 = uVar10 - 1;
            if (uVar10 == 0) goto LAB_012538ec;
          }
          iVar1 = 0;
          if (*piVar11 != -1) {
            iVar1 = *piVar11;
          }
          *(int *)(puVar4 + 0x10) = iVar1;
          if (*puVar7 == 0) break;
        } while( true );
      }
LAB_012538ec:
      uVar5 = 0xfffe;
LAB_012538f0:
      uVar6 = FUN_0277d6c4(param_2);
      puVar3 = PTR_DAT_04bbbc78;
      puVar2 = PTR_DAT_04bbbc70;
      if (uVar6 != uVar5) {
        puVar7 = *(uint **)(param_1 + 0x10);
        if (*puVar7 != 0) {
          cVar8 = *PTR_DAT_04bbbc70;
          uVar5 = 0xfffe;
          do {
            if (cVar8 == '\0') {
              cVar8 = '\x01';
              *(undefined8 *)puVar3 = 0xffffffffffffffff;
              *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
              *puVar2 = 1;
              *(undefined4 *)(puVar3 + 0x60) = 0xffffffff;
              *(undefined8 *)(puVar3 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(puVar3 + 0x18) = 0xffffffffffffffff;
              *(undefined8 *)(puVar3 + 0x20) = 0xffffffffffffffff;
              *(undefined8 *)(puVar3 + 0x28) = 0xffffffffffffffff;
              *(undefined8 *)(puVar3 + 0x30) = 0xffffffffffffffff;
              *(undefined8 *)(puVar3 + 0x38) = 0xffffffffffffffff;
              *(undefined8 *)(puVar3 + 0x40) = 0xffffffffffffffff;
              *(undefined8 *)(puVar3 + 0x48) = 0xffffffffffffffff;
              *(undefined8 *)(puVar3 + 0x50) = 0xffffffffffffffff;
              *(undefined8 *)(puVar3 + 0x58) = 0xffffffffffffffff;
            }
            else {
              uVar6 = *(uint *)(puVar3 + 0x14);
              if (-1 < (int)uVar6) {
                if ((ushort *)((ulong)uVar6 + (long)puVar7) != (ushort *)0x0) {
                  uVar5 = (uint)*(ushort *)((ulong)uVar6 + (long)puVar7);
                  goto LAB_012539fc;
                }
                break;
              }
              if (uVar6 != 0xffffffff) break;
            }
            puVar9 = (uint *)(ulong)*puVar7;
            if ((*puVar7 == 0) || (puVar7 == puVar9)) goto LAB_012539fc;
            lVar12 = 0xc;
            if (*(char *)((long)puVar7 + (10 - (long)puVar9)) != '\0') {
              lVar12 = 0x1c;
            }
            lVar12 = (long)puVar7 + (lVar12 - (long)puVar9);
            if (lVar12 == 0) break;
            uVar10 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar9));
            *(undefined4 *)(puVar3 + 0x14) = 0xfffffffe;
            if (uVar10 == 0) break;
            piVar11 = (int *)(lVar12 + 4);
            while (piVar11[-1] != -0x2a6007a2) {
              piVar11 = piVar11 + 2;
              uVar10 = uVar10 - 1;
              if (uVar10 == 0) goto LAB_012539f8;
            }
            iVar1 = 0;
            if (*piVar11 != -1) {
              iVar1 = *piVar11;
            }
            *(int *)(puVar3 + 0x14) = iVar1;
            if (*puVar7 == 0) break;
          } while( true );
        }
LAB_012539f8:
        uVar5 = 0xfffe;
LAB_012539fc:
        uVar6 = FUN_0277d6c4(param_2);
        puVar3 = PTR_DAT_04bbbc78;
        puVar2 = PTR_DAT_04bbbc70;
        if (uVar6 != uVar5) {
          puVar7 = *(uint **)(param_1 + 0x10);
          if (*puVar7 == 0) {
LAB_01253b0c:
            uVar5 = 0xfffe;
LAB_01253b10:
            uVar6 = FUN_0277d6c4(param_2);
            return uVar6 == uVar5;
          }
          cVar8 = *PTR_DAT_04bbbc70;
          uVar5 = 0xfffe;
          do {
            if (cVar8 == '\0') {
              cVar8 = '\x01';
              *(undefined8 *)puVar3 = 0xffffffffffffffff;
              *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
              *puVar2 = 1;
              *(undefined4 *)(puVar3 + 0x60) = 0xffffffff;
              *(undefined8 *)(puVar3 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(puVar3 + 0x18) = 0xffffffffffffffff;
              *(undefined8 *)(puVar3 + 0x20) = 0xffffffffffffffff;
              *(undefined8 *)(puVar3 + 0x28) = 0xffffffffffffffff;
              *(undefined8 *)(puVar3 + 0x30) = 0xffffffffffffffff;
              *(undefined8 *)(puVar3 + 0x38) = 0xffffffffffffffff;
              *(undefined8 *)(puVar3 + 0x40) = 0xffffffffffffffff;
              *(undefined8 *)(puVar3 + 0x48) = 0xffffffffffffffff;
              *(undefined8 *)(puVar3 + 0x50) = 0xffffffffffffffff;
              *(undefined8 *)(puVar3 + 0x58) = 0xffffffffffffffff;
            }
            else {
              uVar6 = *(uint *)(puVar3 + 0x18);
              if (-1 < (int)uVar6) {
                if ((ushort *)((ulong)uVar6 + (long)puVar7) != (ushort *)0x0) {
                  uVar5 = (uint)*(ushort *)((ulong)uVar6 + (long)puVar7);
                  goto LAB_01253b10;
                }
                goto LAB_01253b0c;
              }
              if (uVar6 != 0xffffffff) goto LAB_01253b0c;
            }
            puVar9 = (uint *)(ulong)*puVar7;
            if ((*puVar7 == 0) || (puVar7 == puVar9)) goto LAB_01253b10;
            lVar12 = 0xc;
            if (*(char *)((long)puVar7 + (10 - (long)puVar9)) != '\0') {
              lVar12 = 0x1c;
            }
            lVar12 = (long)puVar7 + (lVar12 - (long)puVar9);
            if (lVar12 == 0) goto LAB_01253b0c;
            uVar10 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar9));
            *(undefined4 *)(puVar3 + 0x18) = 0xfffffffe;
            if (uVar10 == 0) goto LAB_01253b0c;
            piVar11 = (int *)(lVar12 + 4);
            while (piVar11[-1] != -0x17002e12) {
              piVar11 = piVar11 + 2;
              uVar10 = uVar10 - 1;
              if (uVar10 == 0) goto LAB_01253b0c;
            }
            iVar1 = 0;
            if (*piVar11 != -1) {
              iVar1 = *piVar11;
            }
            *(int *)(puVar3 + 0x18) = iVar1;
            if (*puVar7 == 0) goto LAB_01253b0c;
          } while( true );
        }
      }
      return true;
    }
  }
  return false;
}


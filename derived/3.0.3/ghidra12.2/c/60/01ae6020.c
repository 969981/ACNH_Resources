
bool FUN_01ae6020(long param_1)

{
  long lVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  uint uVar8;
  uint *puVar9;
  uint *puVar10;
  char cVar11;
  int *piVar12;
  
  uVar7 = FUN_01ae59b0();
  if (((uVar7 & 1) == 0) ||
     (iVar6 = FUN_01ae7550(param_1), puVar4 = PTR_DAT_04bbfef8, puVar3 = PTR_DAT_04bbfef0,
     iVar6 == 0xd)) {
LAB_01ae6060:
    bVar5 = false;
  }
  else {
    puVar9 = *(uint **)(param_1 + 0x10);
    if (puVar9 == (uint *)0x0) {
LAB_01ae60f8:
      uVar8 = 0;
    }
    else {
      uVar2 = *puVar9;
      uVar8 = 0;
      if ((uVar2 != 0) && (puVar9 != (uint *)(ulong)uVar2)) {
        puVar10 = (uint *)((long)puVar9 - (long)(ulong)uVar2);
        uVar8 = 0;
        if (*puVar10 != 0) {
          uVar8 = puVar10[1];
          if ((uVar8 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
            lVar1 = 0xc;
            if (*(char *)((long)puVar10 + 10) != '\0') {
              lVar1 = 0x1c;
            }
            lVar1 = (long)puVar10 + lVar1 + (ulong)(ushort)puVar10[2] * 8;
            if (lVar1 != 0) {
              uVar2 = 0;
              if ((ulong)uVar8 != 0) {
                uVar2 = (uint)((ulong)((long)puVar9 - lVar1) / (ulong)uVar8);
              }
              if (*puVar10 <= uVar2) {
                uVar2 = 0xffffffff;
              }
              if ((uVar2 < *(uint *)PTR_DAT_04bc0048) &&
                 (uVar8 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc0048 + 8) + (long)(int)uVar2 * 2),
                 uVar8 < 0x52)) goto LAB_01ae60fc;
            }
          }
          goto LAB_01ae60f8;
        }
      }
    }
LAB_01ae60fc:
    if ((int)*(uint *)(DAT_0532a788 + 0x1c0) < 1) {
      if ((((*(long *)(DAT_0532a788 + 0xb0) != 0) &&
           (puVar9 = *(uint **)(*(long *)(DAT_0532a788 + 0xb0) + 8), puVar9 != (uint *)0x0)) &&
          ((*(uint *)(DAT_0532a788 + 200) <= uVar8 ||
           (*(char *)(*(long *)(DAT_0532a788 + 0xd0) + (long)(int)uVar8) != '\0')))) &&
         (((uVar8 < *puVar9 && (puVar9[1] != 0)) && ((ushort)puVar9[2] != 0)))) {
        iVar6 = 0xc;
        if (*(char *)((long)puVar9 + 10) != '\0') {
          iVar6 = 0x1c;
        }
        puVar9 = (uint *)((ulong)(puVar9[1] * uVar8 + (uint)(ushort)puVar9[2] * 8 + iVar6) +
                         (long)puVar9);
        goto joined_r0x01ae627c;
      }
    }
    else if (uVar8 < *(uint *)(DAT_0532a788 + 0x1c0)) {
      if (*(uint *)(DAT_0532a788 + 0x1b0) <= uVar8) {
        uVar8 = 0;
      }
      puVar9 = *(uint **)(*(long *)(DAT_0532a788 + 0x1b8) + (ulong)uVar8 * 8);
joined_r0x01ae627c:
      if (puVar9 != (uint *)0x0) {
        if (*puVar9 != 0) {
          cVar11 = *PTR_DAT_04bbfef0;
          do {
            if (cVar11 == '\0') {
              cVar11 = '\x01';
              *(undefined8 *)puVar4 = 0xffffffffffffffff;
              *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
              *puVar3 = 1;
              *(undefined4 *)(puVar4 + 0x20) = 0xffffffff;
              *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
            }
            else {
              uVar8 = *(uint *)(puVar4 + 0x10);
              if (-1 < (int)uVar8) {
                if ((char *)((ulong)uVar8 + (long)puVar9) != (char *)0x0) {
                  return *(char *)((ulong)uVar8 + (long)puVar9) != '\0';
                }
                break;
              }
              if (uVar8 != 0xffffffff) break;
            }
            puVar10 = (uint *)(ulong)*puVar9;
            if (*puVar9 == 0) {
              return false;
            }
            if (puVar9 == puVar10) {
              return false;
            }
            lVar1 = 0xc;
            if (*(char *)((long)puVar9 + (10 - (long)puVar10)) != '\0') {
              lVar1 = 0x1c;
            }
            lVar1 = (long)puVar9 + (lVar1 - (long)puVar10);
            if (lVar1 == 0) break;
            uVar7 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar10));
            *(undefined4 *)(puVar4 + 0x10) = 0xfffffffe;
            if (uVar7 == 0) break;
            piVar12 = (int *)(lVar1 + 4);
            while (piVar12[-1] != 0x31cb6b0a) {
              piVar12 = piVar12 + 2;
              uVar7 = uVar7 - 1;
              if (uVar7 == 0) {
                return false;
              }
            }
            iVar6 = 0;
            if (*piVar12 != -1) {
              iVar6 = *piVar12;
            }
            *(int *)(puVar4 + 0x10) = iVar6;
            if (*puVar9 == 0) {
              return false;
            }
          } while( true );
        }
        goto LAB_01ae6060;
      }
    }
    bVar5 = true;
  }
  return bVar5;
}


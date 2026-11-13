
undefined2 FUN_0123cd20(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  char cVar4;
  long lVar5;
  int *piVar6;
  int iVar7;
  uint *puVar8;
  ulong uVar9;
  uint uVar10;
  uint *puVar11;
  uint uVar12;
  uint uVar13;
  
  puVar2 = PTR_DAT_04bbbc78;
  uVar10 = *(uint *)(DAT_05150358 + 0x1c0);
  if ((0 < (int)uVar10) ||
     (((*(long *)(DAT_05150358 + 0xb0) != 0 &&
       (puVar11 = *(uint **)(*(long *)(DAT_05150358 + 0xb0) + 8), puVar11 != (uint *)0x0)) &&
      (uVar10 = *puVar11, uVar10 != 0)))) {
    uVar12 = 0;
    lVar5 = DAT_05150358;
    do {
      if ((int)*(uint *)(lVar5 + 0x1c0) < 1) {
        if (((((*(long *)(lVar5 + 0xb0) != 0) &&
              (puVar11 = *(uint **)(*(long *)(lVar5 + 0xb0) + 8), puVar11 != (uint *)0x0)) &&
             ((*(uint *)(lVar5 + 200) <= uVar12 ||
              (*(char *)(*(long *)(lVar5 + 0xd0) + (long)(int)uVar12) != '\0')))) &&
            ((uVar12 < *puVar11 && (puVar11[1] != 0)))) && ((ushort)puVar11[2] != 0)) {
          iVar7 = 0xc;
          if (*(char *)((long)puVar11 + 10) != '\0') {
            iVar7 = 0x1c;
          }
          puVar11 = (uint *)((ulong)(puVar11[1] * uVar12 + (uint)(ushort)puVar11[2] * 8 + iVar7) +
                            (long)puVar11);
          goto joined_r0x0123cef4;
        }
      }
      else if (uVar12 < *(uint *)(lVar5 + 0x1c0)) {
        uVar13 = uVar12;
        if (*(uint *)(lVar5 + 0x1b0) <= uVar12) {
          uVar13 = 0;
        }
        puVar11 = *(uint **)(*(long *)(lVar5 + 0x1b8) + (ulong)uVar13 * 8);
joined_r0x0123cef4:
        if (puVar11 != (uint *)0x0) {
          if (*puVar11 != 0) {
            cVar4 = DAT_051513c0;
            do {
              puVar1 = PTR_DAT_04bbbc70;
              if (cVar4 == '\0') {
                cVar4 = '\x01';
                *(undefined8 *)puVar2 = 0xffffffffffffffff;
                *(undefined8 *)(puVar2 + 8) = 0xffffffffffffffff;
                *(undefined4 *)(puVar2 + 0x60) = 0xffffffff;
                *puVar1 = 1;
                *(undefined8 *)(puVar2 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar2 + 0x18) = 0xffffffffffffffff;
                *(undefined8 *)(puVar2 + 0x20) = 0xffffffffffffffff;
                *(undefined8 *)(puVar2 + 0x28) = 0xffffffffffffffff;
                *(undefined8 *)(puVar2 + 0x30) = 0xffffffffffffffff;
                *(undefined8 *)(puVar2 + 0x38) = 0xffffffffffffffff;
                *(undefined8 *)(puVar2 + 0x40) = 0xffffffffffffffff;
                *(undefined8 *)(puVar2 + 0x48) = 0xffffffffffffffff;
                *(undefined8 *)(puVar2 + 0x50) = 0xffffffffffffffff;
                *(undefined8 *)(puVar2 + 0x58) = 0xffffffffffffffff;
              }
              else {
                uVar13 = *(uint *)(puVar2 + 0x34);
                if (-1 < (int)uVar13) {
                  if ((ushort *)((ulong)uVar13 + (long)puVar11) != (ushort *)0x0) {
                    uVar13 = (uint)*(ushort *)((ulong)uVar13 + (long)puVar11);
                    goto LAB_0123cf10;
                  }
                  break;
                }
                if (uVar13 != 0xffffffff) break;
              }
              puVar8 = (uint *)(ulong)*puVar11;
              uVar13 = 0xfffe;
              if ((*puVar11 == 0) || (puVar11 == puVar8)) goto LAB_0123cf10;
              lVar5 = 0xc;
              if (*(char *)((long)puVar11 + (10 - (long)puVar8)) != '\0') {
                lVar5 = 0x1c;
              }
              lVar5 = (long)puVar11 + (lVar5 - (long)puVar8);
              if (lVar5 == 0) goto LAB_0123cf10;
              uVar9 = (ulong)*(ushort *)((long)puVar11 + (8 - (long)puVar8));
              *(undefined4 *)(puVar2 + 0x34) = 0xfffffffe;
              if (uVar9 == 0) goto LAB_0123cf10;
              piVar6 = (int *)(lVar5 + 4);
              while (piVar6[-1] != -0x485b96aa) {
                piVar6 = piVar6 + 2;
                uVar9 = uVar9 - 1;
                if (uVar9 == 0) goto LAB_0123cf0c;
              }
              iVar7 = 0;
              if (*piVar6 != -1) {
                iVar7 = *piVar6;
              }
              *(int *)(puVar2 + 0x34) = iVar7;
              if (*puVar11 == 0) break;
            } while( true );
          }
LAB_0123cf0c:
          uVar13 = 0xfffe;
LAB_0123cf10:
          uVar3 = FUN_0277d6c4(param_1);
          if (uVar3 == uVar13) {
            if (*puVar11 == 0) {
              return 0;
            }
            cVar4 = *PTR_DAT_04bbbc70;
            while( true ) {
              puVar1 = PTR_DAT_04bbbc70;
              if (cVar4 == '\0') {
                cVar4 = '\x01';
                *(undefined8 *)puVar2 = 0xffffffffffffffff;
                *(undefined8 *)(puVar2 + 8) = 0xffffffffffffffff;
                *(undefined4 *)(puVar2 + 0x60) = 0xffffffff;
                *puVar1 = 1;
                *(undefined8 *)(puVar2 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar2 + 0x18) = 0xffffffffffffffff;
                *(undefined8 *)(puVar2 + 0x20) = 0xffffffffffffffff;
                *(undefined8 *)(puVar2 + 0x28) = 0xffffffffffffffff;
                *(undefined8 *)(puVar2 + 0x30) = 0xffffffffffffffff;
                *(undefined8 *)(puVar2 + 0x38) = 0xffffffffffffffff;
                *(undefined8 *)(puVar2 + 0x40) = 0xffffffffffffffff;
                *(undefined8 *)(puVar2 + 0x48) = 0xffffffffffffffff;
                *(undefined8 *)(puVar2 + 0x50) = 0xffffffffffffffff;
                *(undefined8 *)(puVar2 + 0x58) = 0xffffffffffffffff;
              }
              else {
                uVar10 = *(uint *)(puVar2 + 0x40);
                if (-1 < (int)uVar10) {
                  if ((undefined2 *)((ulong)uVar10 + (long)puVar11) == (undefined2 *)0x0) {
                    return 0;
                  }
                  return *(undefined2 *)((ulong)uVar10 + (long)puVar11);
                }
                if (uVar10 != 0xffffffff) {
                  return 0;
                }
              }
              puVar8 = (uint *)(ulong)*puVar11;
              if (*puVar11 == 0) {
                return 0;
              }
              if (puVar11 == puVar8) break;
              lVar5 = 0xc;
              if (*(char *)((long)puVar11 + (10 - (long)puVar8)) != '\0') {
                lVar5 = 0x1c;
              }
              lVar5 = (long)puVar11 + (lVar5 - (long)puVar8);
              if (lVar5 == 0) {
                return 0;
              }
              uVar9 = (ulong)*(ushort *)((long)puVar11 + (8 - (long)puVar8));
              *(undefined4 *)(puVar2 + 0x40) = 0xfffffffe;
              if (uVar9 == 0) {
                return 0;
              }
              piVar6 = (int *)(lVar5 + 4);
              while (piVar6[-1] != 0x54706054) {
                piVar6 = piVar6 + 2;
                uVar9 = uVar9 - 1;
                if (uVar9 == 0) {
                  return 0;
                }
              }
              iVar7 = 0;
              if (*piVar6 != -1) {
                iVar7 = *piVar6;
              }
              *(int *)(puVar2 + 0x40) = iVar7;
              if (*puVar11 == 0) {
                return 0;
              }
            }
            return 0;
          }
          lVar5 = DAT_05150358;
        }
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 != uVar10);
  }
  return 0xfffe;
}


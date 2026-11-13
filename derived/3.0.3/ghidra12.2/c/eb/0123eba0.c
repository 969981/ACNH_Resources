
uint FUN_0123eba0(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  char cVar6;
  long lVar7;
  uint uVar8;
  int *piVar9;
  int iVar10;
  uint *puVar11;
  uint *puVar12;
  uint uVar13;
  uint uVar14;
  undefined8 local_68;
  
  local_68 = 0xfffe;
  FUN_0277d4ac(&local_68);
  uVar5 = FUN_0123ef30(&local_68,param_1);
  puVar2 = PTR_DAT_04bbbc78;
  if ((uVar5 & 1) == 0) {
    uVar13 = *(uint *)(DAT_05150358 + 0x1c0);
    if (((int)uVar13 < 1) &&
       (((*(long *)(DAT_05150358 + 0xb0) == 0 ||
         (puVar12 = *(uint **)(*(long *)(DAT_05150358 + 0xb0) + 8), puVar12 == (uint *)0x0)) ||
        (uVar13 = *puVar12, uVar13 == 0)))) {
      uVar3 = 0xecc2;
    }
    else {
      uVar14 = 0;
      uVar3 = 0xecc2;
      lVar7 = DAT_05150358;
      do {
        if ((int)*(uint *)(lVar7 + 0x1c0) < 1) {
          if (((((*(long *)(lVar7 + 0xb0) != 0) &&
                (puVar12 = *(uint **)(*(long *)(lVar7 + 0xb0) + 8), puVar12 != (uint *)0x0)) &&
               ((*(uint *)(lVar7 + 200) <= uVar14 ||
                (*(char *)(*(long *)(lVar7 + 0xd0) + (long)(int)uVar14) != '\0')))) &&
              ((uVar14 < *puVar12 && (puVar12[1] != 0)))) && ((ushort)puVar12[2] != 0)) {
            iVar10 = 0xc;
            if (*(char *)((long)puVar12 + 10) != '\0') {
              iVar10 = 0x1c;
            }
            puVar12 = (uint *)((ulong)(puVar12[1] * uVar14 + (uint)(ushort)puVar12[2] * 8 + iVar10)
                              + (long)puVar12);
            goto joined_r0x0123edb4;
          }
        }
        else if (uVar14 < *(uint *)(lVar7 + 0x1c0)) {
          uVar4 = uVar14;
          if (*(uint *)(lVar7 + 0x1b0) <= uVar14) {
            uVar4 = 0;
          }
          puVar12 = *(uint **)(*(long *)(lVar7 + 0x1b8) + (ulong)uVar4 * 8);
joined_r0x0123edb4:
          if (puVar12 != (uint *)0x0) {
            uVar4 = FUN_0277d6c4(param_1);
            if (*puVar12 != 0) {
              cVar6 = DAT_051513c0;
              do {
                puVar1 = PTR_DAT_04bbbc70;
                if (cVar6 == '\0') {
                  cVar6 = '\x01';
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
                  uVar8 = *(uint *)(puVar2 + 0x34);
                  if (-1 < (int)uVar8) {
                    if ((ushort *)((ulong)uVar8 + (long)puVar12) != (ushort *)0x0) {
                      uVar8 = (uint)*(ushort *)((ulong)uVar8 + (long)puVar12);
                      goto LAB_0123edd0;
                    }
                    break;
                  }
                  if (uVar8 != 0xffffffff) break;
                }
                puVar11 = (uint *)(ulong)*puVar12;
                uVar8 = 0xfffe;
                if ((*puVar12 == 0) || (puVar12 == puVar11)) goto LAB_0123edd0;
                lVar7 = 0xc;
                if (*(char *)((long)puVar12 + (10 - (long)puVar11)) != '\0') {
                  lVar7 = 0x1c;
                }
                lVar7 = (long)puVar12 + (lVar7 - (long)puVar11);
                if (lVar7 == 0) break;
                uVar5 = (ulong)*(ushort *)((long)puVar12 + (8 - (long)puVar11));
                *(undefined4 *)(puVar2 + 0x34) = 0xfffffffe;
                if (uVar5 == 0) break;
                piVar9 = (int *)(lVar7 + 4);
                while (piVar9[-1] != -0x485b96aa) {
                  piVar9 = piVar9 + 2;
                  uVar5 = uVar5 - 1;
                  if (uVar5 == 0) goto LAB_0123edcc;
                }
                iVar10 = 0;
                if (*piVar9 != -1) {
                  iVar10 = *piVar9;
                }
                *(int *)(puVar2 + 0x34) = iVar10;
                if (*puVar12 == 0) break;
              } while( true );
            }
LAB_0123edcc:
            uVar8 = 0xfffe;
LAB_0123edd0:
            if (uVar4 == uVar8) {
              if (*puVar12 == 0) {
                return 0;
              }
              cVar6 = *PTR_DAT_04bbbc70;
              while( true ) {
                puVar1 = PTR_DAT_04bbbc70;
                if (cVar6 == '\0') {
                  cVar6 = '\x01';
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
                  uVar13 = *(uint *)(puVar2 + 0x40);
                  if (-1 < (int)uVar13) {
                    if ((ushort *)((ulong)uVar13 + (long)puVar12) == (ushort *)0x0) {
                      return 0;
                    }
                    return (uint)*(ushort *)((ulong)uVar13 + (long)puVar12);
                  }
                  if (uVar13 != 0xffffffff) {
                    return 0;
                  }
                }
                puVar11 = (uint *)(ulong)*puVar12;
                if (*puVar12 == 0) {
                  return 0;
                }
                if (puVar12 == puVar11) break;
                lVar7 = 0xc;
                if (*(char *)((long)puVar12 + (10 - (long)puVar11)) != '\0') {
                  lVar7 = 0x1c;
                }
                lVar7 = (long)puVar12 + (lVar7 - (long)puVar11);
                if (lVar7 == 0) {
                  return 0;
                }
                uVar5 = (ulong)*(ushort *)((long)puVar12 + (8 - (long)puVar11));
                *(undefined4 *)(puVar2 + 0x40) = 0xfffffffe;
                if (uVar5 == 0) {
                  return 0;
                }
                piVar9 = (int *)(lVar7 + 4);
                while (piVar9[-1] != 0x54706054) {
                  piVar9 = piVar9 + 2;
                  uVar5 = uVar5 - 1;
                  if (uVar5 == 0) {
                    return 0;
                  }
                }
                iVar10 = 0;
                if (*piVar9 != -1) {
                  iVar10 = *piVar9;
                }
                *(int *)(puVar2 + 0x40) = iVar10;
                if (*puVar12 == 0) {
                  return 0;
                }
              }
              return 0;
            }
            lVar7 = DAT_05150358;
          }
        }
        uVar14 = uVar14 + 1;
      } while (uVar14 != uVar13);
    }
  }
  else {
    uVar3 = FUN_0277d6c4(&local_68);
  }
  return uVar3;
}


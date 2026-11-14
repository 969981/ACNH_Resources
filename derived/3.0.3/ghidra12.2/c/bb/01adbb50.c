
bool FUN_01adbb50(long param_1)

{
  long lVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  uint *puVar8;
  char cVar9;
  ulong uVar10;
  int *piVar11;
  byte local_30 [16];
  
  local_30[0] = 0;
  local_30[1] = 0;
  FUN_01adab50(param_1,local_30);
  puVar4 = PTR_DAT_04bbff08;
  puVar3 = PTR_DAT_04bbff00;
  uVar5 = 0;
  do {
    if ((uVar5 != 0) && (uVar5 < 0xe)) {
      uVar2 = uVar5 + 7;
      if (-1 < (int)uVar5) {
        uVar2 = uVar5;
      }
      if (((uint)((int)uVar2 >> 3) < 2) &&
         ((local_30[(uint)((int)uVar2 >> 3)] >> (ulong)(uVar5 & 7) & 1) != 0)) {
        if (uVar5 != 9) {
          return false;
        }
        puVar6 = *(uint **)(param_1 + 0x10);
        if (puVar6 == (uint *)0x0) {
          uVar5 = 0x21;
        }
        else {
          uVar2 = *puVar6;
          uVar5 = 0;
          if ((uVar2 != 0) && (puVar6 != (uint *)(ulong)uVar2)) {
            puVar8 = (uint *)((long)puVar6 - (long)(ulong)uVar2);
            uVar5 = 0;
            if (*puVar8 != 0) {
              uVar5 = puVar8[1];
              if ((uVar5 != 0) && ((ulong)(ushort)puVar8[2] != 0)) {
                lVar1 = 0xc;
                if (*(char *)((long)puVar8 + 10) != '\0') {
                  lVar1 = 0x1c;
                }
                lVar1 = (long)puVar8 + lVar1 + (ulong)(ushort)puVar8[2] * 8;
                if (lVar1 != 0) {
                  uVar2 = 0;
                  if ((ulong)uVar5 != 0) {
                    uVar2 = (uint)((ulong)((long)puVar6 - lVar1) / (ulong)uVar5);
                  }
                  if (*puVar8 <= uVar2) {
                    uVar2 = 0xffffffff;
                  }
                  if ((uVar2 < *(uint *)PTR_DAT_04bc0148) &&
                     (uVar5 = (uint)*(ushort *)
                                     (*(long *)(PTR_DAT_04bc0148 + 8) + (long)(int)uVar2 * 2),
                     uVar5 < 0xa2)) goto LAB_01adbc84;
                }
              }
              uVar5 = 0;
            }
          }
        }
LAB_01adbc84:
        if ((int)*(uint *)(DAT_0532a7a0 + 0x1c0) < 1) {
          if (*(long *)(DAT_0532a7a0 + 0xb0) == 0) {
            return false;
          }
          puVar6 = *(uint **)(*(long *)(DAT_0532a7a0 + 0xb0) + 8);
          if (puVar6 == (uint *)0x0) {
            return false;
          }
          if ((uVar5 < *(uint *)(DAT_0532a7a0 + 200)) &&
             (*(char *)(*(long *)(DAT_0532a7a0 + 0xd0) + (long)(int)uVar5) == '\0')) {
            return false;
          }
          if (*puVar6 <= uVar5) {
            return false;
          }
          if (puVar6[1] == 0) {
            return false;
          }
          if ((ushort)puVar6[2] == 0) {
            return false;
          }
          iVar7 = 0xc;
          if (*(char *)((long)puVar6 + 10) != '\0') {
            iVar7 = 0x1c;
          }
          puVar6 = (uint *)((ulong)(puVar6[1] * uVar5 + (uint)(ushort)puVar6[2] * 8 + iVar7) +
                           (long)puVar6);
        }
        else {
          if (*(uint *)(DAT_0532a7a0 + 0x1c0) <= uVar5) {
            return false;
          }
          if (*(uint *)(DAT_0532a7a0 + 0x1b0) <= uVar5) {
            uVar5 = 0;
          }
          puVar6 = *(uint **)(*(long *)(DAT_0532a7a0 + 0x1b8) + (ulong)uVar5 * 8);
        }
        if (puVar6 == (uint *)0x0) {
          return false;
        }
        if (*puVar6 == 0) {
          return false;
        }
        cVar9 = *PTR_DAT_04bbff00;
        while( true ) {
          if (cVar9 == '\0') {
            cVar9 = '\x01';
            *(undefined8 *)puVar4 = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
            *puVar3 = 1;
            *(undefined4 *)(puVar4 + 0x40) = 0xffffffff;
            *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x30) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x38) = 0xffffffffffffffff;
          }
          else {
            uVar5 = *(uint *)(puVar4 + 0x3c);
            if (-1 < (int)uVar5) {
              if ((char *)((ulong)uVar5 + (long)puVar6) == (char *)0x0) {
                return false;
              }
              return *(char *)((ulong)uVar5 + (long)puVar6) != '\0';
            }
            if (uVar5 != 0xffffffff) {
              return false;
            }
          }
          puVar8 = (uint *)(ulong)*puVar6;
          if (*puVar6 == 0) {
            return false;
          }
          if (puVar6 == puVar8) break;
          lVar1 = 0xc;
          if (*(char *)((long)puVar6 + (10 - (long)puVar8)) != '\0') {
            lVar1 = 0x1c;
          }
          lVar1 = (long)puVar6 + (lVar1 - (long)puVar8);
          if (lVar1 == 0) {
            return false;
          }
          uVar10 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar8));
          *(undefined4 *)(puVar4 + 0x3c) = 0xfffffffe;
          if (uVar10 == 0) {
            return false;
          }
          piVar11 = (int *)(lVar1 + 4);
          while (piVar11[-1] != -0x4187dcba) {
            piVar11 = piVar11 + 2;
            uVar10 = uVar10 - 1;
            if (uVar10 == 0) {
              return false;
            }
          }
          iVar7 = 0;
          if (*piVar11 != -1) {
            iVar7 = *piVar11;
          }
          *(int *)(puVar4 + 0x3c) = iVar7;
          if (*puVar6 == 0) {
            return false;
          }
        }
        return false;
      }
    }
    uVar5 = uVar5 + 1;
    if (uVar5 == 0xe) {
      return false;
    }
  } while( true );
}


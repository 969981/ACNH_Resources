
void FUN_035a81f0(ushort *param_1,int param_2,int param_3,undefined8 *param_4)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  ushort *puVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  int iVar10;
  byte *pbVar11;
  int iVar12;
  ulong uVar13;
  uint uVar14;
  long lVar15;
  char *pcVar16;
  ushort *puVar17;
  long lVar18;
  
  uVar2 = *param_1;
  iVar10 = *(int *)(param_1 + 6);
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  uVar13 = *(ulong *)(param_1 + 0xc);
  uVar7 = (uint)param_1[1];
  if (uVar13 != 0) {
    uVar9 = 0;
    uVar14 = (uint)uVar2;
    do {
      iVar3 = uVar14 - *param_1;
      if ((((-1 < iVar3) && (iVar3 < *(int *)(param_1 + 6))) &&
          (iVar8 = uVar7 - param_1[1], -1 < iVar8)) &&
         ((iVar8 < *(int *)(param_1 + 8) && (lVar15 = *(long *)(param_1 + 0x10), lVar15 != 0)))) {
        iVar3 = iVar3 + *(int *)(param_1 + 6) * iVar8;
        pcVar16 = (char *)(lVar15 + (long)iVar3 * 0x28 + 6);
        if (*pcVar16 != '\x03') {
          lVar15 = lVar15 + (long)iVar3 * 0x28;
          *pcVar16 = '\0';
          *(undefined8 *)(lVar15 + 0x18) = 0;
          *(undefined8 *)(lVar15 + 8) = 0;
          *(undefined8 *)(lVar15 + 0x10) = 0;
          uVar13 = *(ulong *)(param_1 + 0xc);
        }
      }
      uVar9 = uVar9 + 1;
      bVar4 = uVar14 + 1 == iVar10 + (uint)uVar2;
      if (bVar4) {
        uVar7 = uVar7 + 1;
      }
      uVar5 = (uint)uVar2;
      if (!bVar4) {
        uVar5 = uVar14 + 1;
      }
      uVar14 = uVar5;
    } while (uVar9 < uVar13);
    uVar2 = *param_1;
    uVar7 = (uint)param_1[1];
    iVar10 = *(int *)(param_1 + 6);
  }
  iVar3 = *(int *)(param_1 + 8);
  iVar8 = param_2 - (uint)uVar2;
  if (((iVar8 < 0) || (iVar10 <= iVar8)) ||
     ((iVar12 = param_3 - uVar7, iVar12 < 0 || (iVar3 <= iVar12)))) {
    iVar12 = uVar7 + iVar3 + -1;
    iVar8 = param_3;
    if (iVar12 <= param_3) {
      iVar8 = iVar12;
    }
    iVar12 = 0;
    if ((int)uVar7 <= param_3) {
      iVar12 = iVar8 - uVar7;
    }
    if (param_2 < (int)(uint)uVar2) {
      iVar8 = 0;
    }
    else {
      iVar8 = (uint)uVar2 + iVar10 + -1;
      if (iVar8 <= param_2) {
        param_2 = iVar8;
      }
      iVar8 = param_2 - (uint)uVar2;
      if (iVar8 < 0) {
        return;
      }
    }
  }
  if ((((iVar8 < iVar10) && (-1 < iVar12)) && (iVar12 < iVar3)) &&
     (lVar15 = *(long *)(param_1 + 0x10), lVar15 != 0)) {
    lVar18 = *(long *)(param_1 + 0x20);
    iVar8 = iVar8 + iVar12 * iVar10;
    memset(*(void **)(lVar18 + 0x10),0,(long)*(int *)(lVar18 + 0xc) << 2);
    *(undefined4 *)(lVar18 + 0x18) = 0;
    if (*(char *)(lVar15 + (long)iVar8 * 0x28 + 4) != '\0') {
      lVar18 = lVar15 + (long)iVar8 * 0x28;
      *(undefined8 *)(lVar18 + 0x18) = *(undefined8 *)(param_1 + 0x18);
      *(long *)(param_1 + 0x18) = lVar15 + (long)iVar8 * 0x28;
      *(undefined1 *)(lVar18 + 6) = 1;
      if (*(ushort **)(param_1 + 0x18) != (ushort *)0x0) {
        bVar4 = true;
        puVar17 = *(ushort **)(param_1 + 0x18);
        do {
          puVar6 = *(ushort **)(puVar17 + 0xc);
          *(ushort **)(param_1 + 0x18) = puVar6;
          if (((bVar4) || ((char)param_1[0x24] == '\0')) ||
             ((((byte)puVar17[2] >> 4 & 1) != 0 ||
              (((*puVar17 != *param_1 && (puVar17[1] != param_1[1])) &&
               ((*(byte *)((long)puVar17 + 5) >> 4 & 1) == 0)))))) {
            if ((param_4 == (undefined8 *)0x0) ||
               (uVar13 = (**(code **)*param_4)(param_4,puVar17), (uVar13 & 1) != 0)) {
              lVar15 = *(long *)(param_1 + 0x20);
              uVar7 = (*(int *)(lVar15 + 0x1c) * ((uint)puVar17[1] - (uint)param_1[1]) -
                      (uint)*param_1) + (uint)*puVar17;
              uVar5 = 1 << (ulong)(uVar7 & 0x1f);
              uVar14 = *(uint *)(*(long *)(lVar15 + 0x10) + (long)((int)uVar7 >> 5) * 4);
              if ((uVar5 & uVar14) != 0) goto LAB_035a847c;
              *(uint *)(*(long *)(lVar15 + 0x10) + ((long)((ulong)uVar7 << 0x20) >> 0x25) * 4) =
                   uVar5 | uVar14;
              *(int *)(lVar15 + 0x18) = *(int *)(lVar15 + 0x18) + 1;
              bVar1 = (byte)puVar17[2];
            }
            else {
LAB_035a847c:
              bVar1 = (byte)puVar17[2];
            }
            uVar7 = (uint)bVar1;
            if ((((((bVar1 & 1) != 0) &&
                  (iVar10 = (*puVar17 - 1 & 0xffff) - (uint)*param_1, -1 < iVar10)) &&
                 (iVar10 < *(int *)(param_1 + 6))) &&
                ((iVar3 = (uint)puVar17[1] - (uint)param_1[1], -1 < iVar3 &&
                 (iVar3 < *(int *)(param_1 + 8))))) &&
               (lVar15 = *(long *)(param_1 + 0x10), lVar15 != 0)) {
              iVar10 = iVar10 + *(int *)(param_1 + 6) * iVar3;
              pbVar11 = (byte *)(lVar15 + (long)iVar10 * 0x28 + 6);
              if (1 < *pbVar11 - 1) {
                *(undefined8 *)(lVar15 + (long)iVar10 * 0x28 + 0x18) =
                     *(undefined8 *)(param_1 + 0x18);
                *(long *)(param_1 + 0x18) = lVar15 + (long)iVar10 * 0x28;
                *pbVar11 = 1;
                uVar7 = (uint)(byte)puVar17[2];
              }
            }
            if ((((uVar7 >> 1 & 1) != 0) &&
                (iVar10 = (*puVar17 + 1 & 0xffff) - (uint)*param_1, -1 < iVar10)) &&
               ((iVar10 < *(int *)(param_1 + 6) &&
                (((iVar3 = (uint)puVar17[1] - (uint)param_1[1], -1 < iVar3 &&
                  (iVar3 < *(int *)(param_1 + 8))) &&
                 (lVar15 = *(long *)(param_1 + 0x10), lVar15 != 0)))))) {
              iVar10 = iVar10 + *(int *)(param_1 + 6) * iVar3;
              pbVar11 = (byte *)(lVar15 + (long)iVar10 * 0x28 + 6);
              if (1 < *pbVar11 - 1) {
                *(undefined8 *)(lVar15 + (long)iVar10 * 0x28 + 0x18) =
                     *(undefined8 *)(param_1 + 0x18);
                *(long *)(param_1 + 0x18) = lVar15 + (long)iVar10 * 0x28;
                *pbVar11 = 1;
                uVar7 = (uint)(byte)puVar17[2];
              }
            }
            if (((((uVar7 >> 2 & 1) != 0) && (iVar10 = (uint)*puVar17 - (uint)*param_1, -1 < iVar10)
                 ) && ((iVar10 < *(int *)(param_1 + 6) &&
                       ((iVar3 = (puVar17[1] - 1 & 0xffff) - (uint)param_1[1], -1 < iVar3 &&
                        (iVar3 < *(int *)(param_1 + 8))))))) &&
               (lVar15 = *(long *)(param_1 + 0x10), lVar15 != 0)) {
              iVar10 = iVar10 + *(int *)(param_1 + 6) * iVar3;
              pbVar11 = (byte *)(lVar15 + (long)iVar10 * 0x28 + 6);
              if (1 < *pbVar11 - 1) {
                *(undefined8 *)(lVar15 + (long)iVar10 * 0x28 + 0x18) =
                     *(undefined8 *)(param_1 + 0x18);
                *(long *)(param_1 + 0x18) = lVar15 + (long)iVar10 * 0x28;
                *pbVar11 = 1;
                uVar7 = (uint)(byte)puVar17[2];
              }
            }
            if ((((((uVar7 >> 3 & 1) != 0) &&
                  (iVar10 = (uint)*puVar17 - (uint)*param_1, -1 < iVar10)) &&
                 (iVar10 < *(int *)(param_1 + 6))) &&
                ((iVar3 = (puVar17[1] + 1 & 0xffff) - (uint)param_1[1], -1 < iVar3 &&
                 (iVar3 < *(int *)(param_1 + 8))))) &&
               (lVar15 = *(long *)(param_1 + 0x10), lVar15 != 0)) {
              iVar10 = iVar10 + *(int *)(param_1 + 6) * iVar3;
              pbVar11 = (byte *)(lVar15 + (long)iVar10 * 0x28 + 6);
              if (1 < *pbVar11 - 1) {
                *(undefined8 *)(lVar15 + (long)iVar10 * 0x28 + 0x18) =
                     *(undefined8 *)(param_1 + 0x18);
                *(long *)(param_1 + 0x18) = lVar15 + (long)iVar10 * 0x28;
                *pbVar11 = 1;
                uVar7 = (uint)(byte)puVar17[2];
              }
            }
            if ((((uVar7 >> 4 & 1) != 0) &&
                (iVar10 = (*puVar17 - 1 & 0xffff) - (uint)*param_1, -1 < iVar10)) &&
               ((iVar10 < *(int *)(param_1 + 6) &&
                (((iVar3 = (puVar17[1] - 1 & 0xffff) - (uint)param_1[1], -1 < iVar3 &&
                  (iVar3 < *(int *)(param_1 + 8))) &&
                 (lVar15 = *(long *)(param_1 + 0x10), lVar15 != 0)))))) {
              iVar10 = iVar10 + *(int *)(param_1 + 6) * iVar3;
              pbVar11 = (byte *)(lVar15 + (long)iVar10 * 0x28 + 6);
              if (1 < *pbVar11 - 1) {
                *(undefined8 *)(lVar15 + (long)iVar10 * 0x28 + 0x18) =
                     *(undefined8 *)(param_1 + 0x18);
                *(long *)(param_1 + 0x18) = lVar15 + (long)iVar10 * 0x28;
                *pbVar11 = 1;
                uVar7 = (uint)(byte)puVar17[2];
              }
            }
            if ((((uVar7 >> 5 & 1) != 0) &&
                (iVar10 = (*puVar17 + 1 & 0xffff) - (uint)*param_1, -1 < iVar10)) &&
               (((iVar10 < *(int *)(param_1 + 6) &&
                 ((iVar3 = (puVar17[1] + 1 & 0xffff) - (uint)param_1[1], -1 < iVar3 &&
                  (iVar3 < *(int *)(param_1 + 8))))) &&
                (lVar15 = *(long *)(param_1 + 0x10), lVar15 != 0)))) {
              iVar10 = iVar10 + *(int *)(param_1 + 6) * iVar3;
              pbVar11 = (byte *)(lVar15 + (long)iVar10 * 0x28 + 6);
              if (1 < *pbVar11 - 1) {
                *(undefined8 *)(lVar15 + (long)iVar10 * 0x28 + 0x18) =
                     *(undefined8 *)(param_1 + 0x18);
                *(long *)(param_1 + 0x18) = lVar15 + (long)iVar10 * 0x28;
                *pbVar11 = 1;
                uVar7 = (uint)(byte)puVar17[2];
              }
            }
            if ((((((uVar7 >> 6 & 1) != 0) &&
                  (iVar10 = (*puVar17 + 1 & 0xffff) - (uint)*param_1, -1 < iVar10)) &&
                 (iVar10 < *(int *)(param_1 + 6))) &&
                ((iVar3 = (puVar17[1] - 1 & 0xffff) - (uint)param_1[1], -1 < iVar3 &&
                 (iVar3 < *(int *)(param_1 + 8))))) &&
               (lVar15 = *(long *)(param_1 + 0x10), lVar15 != 0)) {
              iVar10 = iVar10 + *(int *)(param_1 + 6) * iVar3;
              pbVar11 = (byte *)(lVar15 + (long)iVar10 * 0x28 + 6);
              if (1 < *pbVar11 - 1) {
                *(undefined8 *)(lVar15 + (long)iVar10 * 0x28 + 0x18) =
                     *(undefined8 *)(param_1 + 0x18);
                *(long *)(param_1 + 0x18) = lVar15 + (long)iVar10 * 0x28;
                *pbVar11 = 1;
                uVar7 = (uint)(byte)puVar17[2];
              }
            }
            if (((uVar7 >> 7 != 0) &&
                (iVar10 = (*puVar17 - 1 & 0xffff) - (uint)*param_1, -1 < iVar10)) &&
               ((iVar10 < *(int *)(param_1 + 6) &&
                (((iVar3 = (puVar17[1] + 1 & 0xffff) - (uint)param_1[1], -1 < iVar3 &&
                  (iVar3 < *(int *)(param_1 + 8))) &&
                 (lVar15 = *(long *)(param_1 + 0x10), lVar15 != 0)))))) {
              iVar10 = iVar10 + *(int *)(param_1 + 6) * iVar3;
              pbVar11 = (byte *)(lVar15 + (long)iVar10 * 0x28 + 6);
              if (1 < *pbVar11 - 1) {
                *(undefined8 *)(lVar15 + (long)iVar10 * 0x28 + 0x18) =
                     *(undefined8 *)(param_1 + 0x18);
                *(long *)(param_1 + 0x18) = lVar15 + (long)iVar10 * 0x28;
                *pbVar11 = 1;
              }
            }
            *(undefined1 *)(puVar17 + 3) = 2;
            puVar6 = *(ushort **)(param_1 + 0x18);
          }
          bVar4 = false;
          puVar17 = puVar6;
        } while (puVar6 != (ushort *)0x0);
      }
    }
  }
  return;
}


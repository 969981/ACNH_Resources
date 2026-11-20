
void FUN_03f85710(long param_1,int param_2)

{
  int *piVar1;
  ushort *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  undefined2 *puVar6;
  ushort uVar7;
  byte bVar8;
  char cVar9;
  bool bVar10;
  short sVar11;
  uint uVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  uint uVar16;
  undefined2 *__s;
  int iVar17;
  int iVar18;
  
  piVar1 = (int *)(param_1 + 0x105d0);
  *(int *)(param_1 + 0x1003c) = *(int *)(param_1 + 0x1003c) + param_2;
  puVar2 = (ushort *)(param_1 + 0x10040);
  __s = (undefined2 *)(*(long *)(param_1 + 0x10) + (ulong)*puVar2 * 2);
  do {
    cVar9 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar10) {
      *puVar2 = *puVar2 + *(short *)(param_1 + 0x1003e) * 2;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
  if ((short)*puVar2 < 0) {
    do {
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar10) {
        *puVar2 = *puVar2 + 0x8000;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    uVar7 = *(ushort *)(param_1 + 0x10040) >> 1;
    uVar16 = (uint)uVar7;
    *(ushort *)(param_1 + 0x1003e) = *(short *)(param_1 + 0x1003e) - uVar7;
  }
  else {
    uVar16 = 0;
  }
  uVar7 = *(ushort *)(param_1 + 0x10044);
  puVar3 = (undefined8 *)(param_1 + 0x10048);
  uVar13 = ((uint)*(ushort *)(param_1 + 0x10040) - (uint)uVar7) + 0x8000;
  uVar12 = uVar13 & 0x7fff;
  uVar13 = -uVar13;
  if (-1 < (int)uVar13) {
    uVar12 = -(uVar13 & 0x7fff);
  }
  if (uVar12 < 0x4001) {
    uVar7 = *(ushort *)(param_1 + 0x10040);
  }
  *(ushort *)(param_1 + 0x10044) = uVar7;
  lVar5 = param_1 + 0x10058;
  uVar13 = (uint)*(ushort *)(param_1 + 0x1003e);
  while( true ) {
    lVar14 = (long)(int)(-(uVar13 >> 0xf) & 0xfffe0000 | uVar13 << 1);
    if (*(char *)(param_1 + 0x105e8) == '\0') {
      puVar6 = __s + lVar14;
      sVar11 = (short)uVar13;
      if (*(char *)(param_1 + 0x100bd) == '\0') {
        if (*(char *)(param_1 + 0x100bc) == '\0') {
          if (0 < sVar11) {
            do {
              *puVar3 = 0;
              *(undefined8 *)(param_1 + 0x10050) = 0;
              FUN_03f860a0(param_1);
              iVar17 = *(int *)(param_1 + 0x10050);
              iVar18 = *(int *)(param_1 + 0x10048);
              *(undefined2 *)(lVar5 + (ulong)*(ushort *)(param_1 + 0x10098) * 2) =
                   **(undefined2 **)(param_1 + 0x100a8);
              iVar17 = (iVar18 + iVar17) * *piVar1 +
                       (int)*(char *)(param_1 + 0x1055f) *
                       (int)*(short *)(lVar5 + (ulong)(*(ushort *)(param_1 + 0x10098) + 2 & 0xf) * 2
                                      ) * *(int *)(param_1 + 0x105d8) + 0x2000 >> 0xe;
              if (0x7ffe < iVar17) {
                iVar17 = 0x7fff;
              }
              if (iVar17 < -0x7fff) {
                iVar17 = -0x8000;
              }
              *__s = (short)iVar17;
              lVar14 = *(long *)(param_1 + 0x100a8);
              iVar17 = *(int *)(param_1 + 0x10054);
              iVar18 = *(int *)(param_1 + 0x1004c);
              *(long *)(param_1 + 0x100a8) = lVar14 + 2;
              uVar7 = *(short *)(param_1 + 0x10098) + 1;
              *(ushort *)(param_1 + 0x10098) = uVar7;
              *(undefined2 *)(lVar5 + (ulong)uVar7 * 2) = *(undefined2 *)(lVar14 + 2);
              iVar17 = (iVar18 + iVar17) * *(int *)(param_1 + 0x105d4) +
                       (int)*(char *)(param_1 + 0x1055f) *
                       (int)*(short *)(lVar5 + (ulong)(*(ushort *)(param_1 + 0x10098) + 2 & 0xf) * 2
                                      ) * *(int *)(param_1 + 0x105dc) + 0x2000 >> 0xe;
              if (0x7ffe < iVar17) {
                iVar17 = 0x7fff;
              }
              if (iVar17 < -0x7fff) {
                iVar17 = -0x8000;
              }
              __s[1] = (short)iVar17;
              uVar4 = *(long *)(param_1 + 0x100a8) + 2;
              *(ulong *)(param_1 + 0x100a8) = uVar4;
              if (*(ulong *)(param_1 + 0x100b0) <= uVar4) {
                *(undefined8 *)(param_1 + 0x100a8) = *(undefined8 *)(param_1 + 0x100a0);
              }
              __s = __s + 2;
              *(ushort *)(param_1 + 0x10098) = *(short *)(param_1 + 0x10098) + 1U & 0xf;
            } while (__s < puVar6);
          }
        }
        else if (0 < sVar11) {
          do {
            *puVar3 = 0;
            *(undefined8 *)(param_1 + 0x10050) = 0;
            FUN_03f860a0(param_1);
            lVar14 = param_1 + 0x10058;
            *(undefined2 *)(lVar14 + (ulong)*(ushort *)(param_1 + 0x10098) * 2) =
                 **(undefined2 **)(param_1 + 0x100a8);
            uVar7 = *(ushort *)(param_1 + 0x10098);
            uVar13 = (uint)uVar7;
            iVar17 = (*(int *)(param_1 + 0x10048) + *(int *)(param_1 + 0x10050)) * *piVar1 +
                     *(int *)(param_1 + 0x105d8) *
                     ((int)*(char *)(param_1 + 0x1055f) *
                      (int)*(short *)(lVar14 + ((ulong)(uVar7 + 2) & 0xf) * 2) +
                      (int)*(char *)(param_1 + 0x1056f) *
                      (int)*(short *)(lVar14 + ((ulong)(uVar7 + 4) & 0xf) * 2) +
                      (int)*(char *)(param_1 + 0x1057f) *
                      (int)*(short *)(lVar14 + ((ulong)(uVar13 + 6) & 0xf) * 2) +
                      (int)*(char *)(param_1 + 0x1058f) *
                      (int)*(short *)(lVar14 + ((ulong)(uVar13 + 8) & 0xf) * 2) +
                      (int)*(char *)(param_1 + 0x1059f) *
                      (int)*(short *)(lVar14 + ((ulong)(uVar13 + 10) & 0xf) * 2) +
                      (int)*(char *)(param_1 + 0x105af) *
                      (int)*(short *)(lVar14 + ((ulong)(uVar13 + 0xc) & 0xf) * 2) +
                      (int)*(char *)(param_1 + 0x105bf) *
                      (int)*(short *)(lVar14 + ((ulong)(uVar7 + 0xe) & 0xf) * 2) +
                     (int)*(char *)(param_1 + 0x105cf) *
                     (int)*(short *)(lVar14 + (ulong)(uint)uVar7 * 2)) + 0x2000 >> 0xe;
            if (0x7ffe < iVar17) {
              iVar17 = 0x7fff;
            }
            if (iVar17 < -0x7fff) {
              iVar17 = -0x8000;
            }
            *__s = (short)iVar17;
            lVar15 = *(long *)(param_1 + 0x100a8);
            *(long *)(param_1 + 0x100a8) = lVar15 + 2;
            uVar7 = *(short *)(param_1 + 0x10098) + 1;
            *(ushort *)(param_1 + 0x10098) = uVar7;
            *(undefined2 *)(lVar14 + (ulong)uVar7 * 2) = *(undefined2 *)(lVar15 + 2);
            uVar7 = *(ushort *)(param_1 + 0x10098);
            uVar13 = (uint)uVar7;
            iVar17 = (*(int *)(param_1 + 0x1004c) + *(int *)(param_1 + 0x10054)) *
                     *(int *)(param_1 + 0x105d4) +
                     *(int *)(param_1 + 0x105dc) *
                     ((int)*(char *)(param_1 + 0x1055f) *
                      (int)*(short *)(lVar14 + ((ulong)(uVar7 + 2) & 0xf) * 2) +
                      (int)*(char *)(param_1 + 0x1056f) *
                      (int)*(short *)(lVar14 + ((ulong)(uVar7 + 4) & 0xf) * 2) +
                      (int)*(char *)(param_1 + 0x1057f) *
                      (int)*(short *)(lVar14 + ((ulong)(uVar13 + 6) & 0xf) * 2) +
                      (int)*(char *)(param_1 + 0x1058f) *
                      (int)*(short *)(lVar14 + ((ulong)(uVar13 + 8) & 0xf) * 2) +
                      (int)*(char *)(param_1 + 0x1059f) *
                      (int)*(short *)(lVar14 + ((ulong)(uVar13 + 10) & 0xf) * 2) +
                      (int)*(char *)(param_1 + 0x105af) *
                      (int)*(short *)(lVar14 + ((ulong)(uVar13 + 0xc) & 0xf) * 2) +
                      (int)*(char *)(param_1 + 0x105bf) *
                      (int)*(short *)(lVar14 + ((ulong)(uVar7 + 0xe) & 0xf) * 2) +
                     (int)*(char *)(param_1 + 0x105cf) *
                     (int)*(short *)(lVar14 + (ulong)(uint)uVar7 * 2)) + 0x2000 >> 0xe;
            if (0x7ffe < iVar17) {
              iVar17 = 0x7fff;
            }
            if (iVar17 < -0x7fff) {
              iVar17 = -0x8000;
            }
            __s[1] = (short)iVar17;
            uVar4 = *(long *)(param_1 + 0x100a8) + 2;
            *(ulong *)(param_1 + 0x100a8) = uVar4;
            if (*(ulong *)(param_1 + 0x100b0) <= uVar4) {
              *(undefined8 *)(param_1 + 0x100a8) = *(undefined8 *)(param_1 + 0x100a0);
            }
            __s = __s + 2;
            *(ushort *)(param_1 + 0x10098) = *(short *)(param_1 + 0x10098) + 1U & 0xf;
          } while (__s < puVar6);
        }
      }
      else if (*(char *)(param_1 + 0x100bc) == '\0') {
        if (0 < sVar11) {
          do {
            *puVar3 = 0;
            *(undefined8 *)(param_1 + 0x10050) = 0;
            FUN_03f860a0(param_1);
            lVar14 = param_1 + 0x10058;
            iVar17 = *(int *)(param_1 + 0x10050);
            *(undefined2 *)(lVar14 + (ulong)*(ushort *)(param_1 + 0x10098) * 2) =
                 **(undefined2 **)(param_1 + 0x100a8);
            bVar8 = *(byte *)(param_1 + 0x1055d);
            uVar13 = bVar8 | 0xffffff00;
            if (-1 < (char)bVar8) {
              uVar13 = (uint)bVar8;
            }
            iVar18 = (int)*(char *)(param_1 + 0x1055f) *
                     (int)*(short *)(lVar14 + (ulong)(*(ushort *)(param_1 + 0x10098) + 2 & 0xf) * 2)
            ;
            iVar17 = iVar17 + ((int)(uVar13 * iVar18 + 0x2000) >> 0xe);
            if (0x7ffe < iVar17) {
              iVar17 = 0x7fff;
            }
            if (iVar17 < -0x7fff) {
              iVar17 = -0x8000;
            }
            **(undefined2 **)(param_1 + 0x100a8) = (short)iVar17;
            iVar17 = (*(int *)(param_1 + 0x10048) + *(int *)(param_1 + 0x10050)) * *piVar1 +
                     *(int *)(param_1 + 0x105d8) * iVar18 + 0x2000 >> 0xe;
            if (0x7ffe < iVar17) {
              iVar17 = 0x7fff;
            }
            if (iVar17 < -0x7fff) {
              iVar17 = -0x8000;
            }
            *__s = (short)iVar17;
            lVar15 = *(long *)(param_1 + 0x100a8);
            *(long *)(param_1 + 0x100a8) = lVar15 + 2;
            uVar7 = *(short *)(param_1 + 0x10098) + 1;
            *(ushort *)(param_1 + 0x10098) = uVar7;
            *(undefined2 *)(lVar14 + (ulong)uVar7 * 2) = *(undefined2 *)(lVar15 + 2);
            bVar8 = *(byte *)(param_1 + 0x1055d);
            uVar13 = bVar8 | 0xffffff00;
            if (-1 < (char)bVar8) {
              uVar13 = (uint)bVar8;
            }
            iVar18 = (int)*(char *)(param_1 + 0x1055f) *
                     (int)*(short *)(lVar14 + (ulong)(*(ushort *)(param_1 + 0x10098) + 2 & 0xf) * 2)
            ;
            iVar17 = *(int *)(param_1 + 0x10054) + ((int)(uVar13 * iVar18 + 0x2000) >> 0xe);
            if (0x7ffe < iVar17) {
              iVar17 = 0x7fff;
            }
            if (iVar17 < -0x7fff) {
              iVar17 = -0x8000;
            }
            **(undefined2 **)(param_1 + 0x100a8) = (short)iVar17;
            iVar17 = (*(int *)(param_1 + 0x1004c) + *(int *)(param_1 + 0x10054)) *
                     *(int *)(param_1 + 0x105d4) + *(int *)(param_1 + 0x105dc) * iVar18 + 0x2000 >>
                     0xe;
            if (0x7ffe < iVar17) {
              iVar17 = 0x7fff;
            }
            if (iVar17 < -0x7fff) {
              iVar17 = -0x8000;
            }
            __s[1] = (short)iVar17;
            uVar4 = *(long *)(param_1 + 0x100a8) + 2;
            *(ulong *)(param_1 + 0x100a8) = uVar4;
            if (*(ulong *)(param_1 + 0x100b0) <= uVar4) {
              *(undefined8 *)(param_1 + 0x100a8) = *(undefined8 *)(param_1 + 0x100a0);
            }
            __s = __s + 2;
            *(ushort *)(param_1 + 0x10098) = *(short *)(param_1 + 0x10098) + 1U & 0xf;
          } while (__s < puVar6);
        }
      }
      else if (0 < sVar11) {
        do {
          *puVar3 = 0;
          *(undefined8 *)(param_1 + 0x10050) = 0;
          FUN_03f860a0(param_1);
          lVar14 = param_1 + 0x10058;
          *(undefined2 *)(lVar14 + (ulong)*(ushort *)(param_1 + 0x10098) * 2) =
               **(undefined2 **)(param_1 + 0x100a8);
          uVar7 = *(ushort *)(param_1 + 0x10098);
          uVar12 = (uint)uVar7;
          bVar8 = *(byte *)(param_1 + 0x1055d);
          uVar13 = bVar8 | 0xffffff00;
          if (-1 < (char)bVar8) {
            uVar13 = (uint)bVar8;
          }
          iVar18 = (int)*(char *)(param_1 + 0x1055f) *
                   (int)*(short *)(lVar14 + ((ulong)(uVar7 + 2) & 0xf) * 2) +
                   (int)*(char *)(param_1 + 0x1056f) *
                   (int)*(short *)(lVar14 + ((ulong)(uVar7 + 4) & 0xf) * 2) +
                   (int)*(char *)(param_1 + 0x1057f) *
                   (int)*(short *)(lVar14 + ((ulong)(uVar12 + 6) & 0xf) * 2) +
                   (int)*(char *)(param_1 + 0x1058f) *
                   (int)*(short *)(lVar14 + ((ulong)(uVar12 + 8) & 0xf) * 2) +
                   (int)*(char *)(param_1 + 0x1059f) *
                   (int)*(short *)(lVar14 + ((ulong)(uVar12 + 10) & 0xf) * 2) +
                   (int)*(char *)(param_1 + 0x105af) *
                   (int)*(short *)(lVar14 + ((ulong)(uVar12 + 0xc) & 0xf) * 2) +
                   (int)*(char *)(param_1 + 0x105bf) *
                   (int)*(short *)(lVar14 + ((ulong)(uVar7 + 0xe) & 0xf) * 2) +
                   (int)*(char *)(param_1 + 0x105cf) *
                   (int)*(short *)(lVar14 + (ulong)(uint)uVar7 * 2);
          iVar17 = *(int *)(param_1 + 0x10050) + ((int)(uVar13 * iVar18 + 0x2000) >> 0xe);
          if (0x7ffe < iVar17) {
            iVar17 = 0x7fff;
          }
          if (iVar17 < -0x7fff) {
            iVar17 = -0x8000;
          }
          **(undefined2 **)(param_1 + 0x100a8) = (short)iVar17;
          iVar17 = (*(int *)(param_1 + 0x10048) + *(int *)(param_1 + 0x10050)) * *piVar1 +
                   *(int *)(param_1 + 0x105d8) * iVar18 + 0x2000 >> 0xe;
          if (0x7ffe < iVar17) {
            iVar17 = 0x7fff;
          }
          if (iVar17 < -0x7fff) {
            iVar17 = -0x8000;
          }
          *__s = (short)iVar17;
          lVar15 = *(long *)(param_1 + 0x100a8);
          *(long *)(param_1 + 0x100a8) = lVar15 + 2;
          uVar7 = *(short *)(param_1 + 0x10098) + 1;
          *(ushort *)(param_1 + 0x10098) = uVar7;
          *(undefined2 *)(lVar14 + (ulong)uVar7 * 2) = *(undefined2 *)(lVar15 + 2);
          uVar7 = *(ushort *)(param_1 + 0x10098);
          uVar13 = (uint)uVar7;
          bVar8 = *(byte *)(param_1 + 0x1055d);
          iVar17 = (int)*(char *)(param_1 + 0x1055f) *
                   (int)*(short *)(lVar14 + ((ulong)(uVar7 + 2) & 0xf) * 2) +
                   (int)*(char *)(param_1 + 0x1056f) *
                   (int)*(short *)(lVar14 + ((ulong)(uVar7 + 4) & 0xf) * 2) +
                   (int)*(char *)(param_1 + 0x1057f) *
                   (int)*(short *)(lVar14 + ((ulong)(uVar13 + 6) & 0xf) * 2) +
                   (int)*(char *)(param_1 + 0x1058f) *
                   (int)*(short *)(lVar14 + ((ulong)(uVar13 + 8) & 0xf) * 2) +
                   (int)*(char *)(param_1 + 0x1059f) *
                   (int)*(short *)(lVar14 + ((ulong)(uVar13 + 10) & 0xf) * 2) +
                   (int)*(char *)(param_1 + 0x105af) *
                   (int)*(short *)(lVar14 + ((ulong)(uVar13 + 0xc) & 0xf) * 2) +
                   (int)*(char *)(param_1 + 0x105bf) *
                   (int)*(short *)(lVar14 + ((ulong)(uVar7 + 0xe) & 0xf) * 2) +
                   (int)*(char *)(param_1 + 0x105cf) *
                   (int)*(short *)(lVar14 + (ulong)(uint)uVar7 * 2);
          uVar13 = bVar8 | 0xffffff00;
          if (-1 < (char)bVar8) {
            uVar13 = (uint)bVar8;
          }
          iVar18 = *(int *)(param_1 + 0x10054) + ((int)(uVar13 * iVar17 + 0x2000) >> 0xe);
          if (0x7ffe < iVar18) {
            iVar18 = 0x7fff;
          }
          if (iVar18 < -0x7fff) {
            iVar18 = -0x8000;
          }
          **(undefined2 **)(param_1 + 0x100a8) = (short)iVar18;
          iVar17 = (*(int *)(param_1 + 0x1004c) + *(int *)(param_1 + 0x10054)) *
                   *(int *)(param_1 + 0x105d4) + *(int *)(param_1 + 0x105dc) * iVar17 + 0x2000 >>
                   0xe;
          if (0x7ffe < iVar17) {
            iVar17 = 0x7fff;
          }
          if (iVar17 < -0x7fff) {
            iVar17 = -0x8000;
          }
          __s[1] = (short)iVar17;
          uVar4 = *(long *)(param_1 + 0x100a8) + 2;
          *(ulong *)(param_1 + 0x100a8) = uVar4;
          if (*(ulong *)(param_1 + 0x100b0) <= uVar4) {
            *(undefined8 *)(param_1 + 0x100a8) = *(undefined8 *)(param_1 + 0x100a0);
          }
          __s = __s + 2;
          *(ushort *)(param_1 + 0x10098) = *(short *)(param_1 + 0x10098) + 1U & 0xf;
        } while (__s < puVar6);
      }
    }
    else {
      memset(__s,0,lVar14 << 1);
      FUN_03f860a0(param_1);
    }
    if (uVar16 == 0) break;
    __s = *(undefined2 **)(param_1 + 0x10);
    *(short *)(param_1 + 0x1003e) = (short)uVar16;
    uVar13 = uVar16;
    uVar16 = 0;
  }
  if ((*(char *)(param_1 + 0x105e6) != '\0') &&
     (iVar17 = *(int *)(param_1 + 0x105e0) - *(int *)(*(long *)(param_1 + 0x105f0) + 0x28),
     *(int *)(param_1 + 0x105e0) = iVar17,
     *(int *)(*(long *)(param_1 + 0x105f0) + 0x30) * 0x3f < **(int **)(param_1 + 8) - iVar17)) {
    *(undefined1 *)(param_1 + 0x105e6) = 0;
  }
  *(undefined2 *)(param_1 + 0x1003e) = 0;
  return;
}


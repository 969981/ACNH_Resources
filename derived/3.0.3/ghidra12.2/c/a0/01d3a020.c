
int FUN_01d3a020(long *param_1)

{
  uint uVar1;
  long lVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  ulong uVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  byte bVar12;
  int iVar13;
  long *plVar14;
  void *__s;
  int iVar15;
  int iVar16;
  ulong uVar17;
  int iVar18;
  
  uVar17 = (ulong)(int)param_1[1];
  if ((int)param_1[1] < *(int *)((long)param_1 + 0xc)) {
    while (bVar12 = *(byte *)(*param_1 + uVar17),
          bVar12 < 0x21 && (1L << ((ulong)bVar12 & 0x3f) & 0x100002600U) != 0) {
      uVar17 = uVar17 + 1;
      if (*(int *)((long)param_1 + 0xc) == (int)uVar17) {
        return -1;
      }
    }
    if ((-1 < (int)uVar17) && (*(char *)(*param_1 + (uVar17 & 0xffffffff)) == '\"')) {
      plVar14 = (long *)param_1[2];
      (**(code **)(*plVar14 + 0x18))(plVar14);
      __s = (void *)plVar14[1];
      iVar6 = *(int *)(param_1[2] + 0x10);
      memset(__s,0,(long)iVar6);
      iVar9 = *(int *)((long)param_1 + 0xc);
      uVar1 = (int)uVar17 + 1;
      if ((int)uVar1 < iVar9) {
        iVar8 = 0;
        iVar6 = iVar6 + -1;
        do {
          uVar7 = (ulong)uVar1;
          lVar11 = *param_1;
          bVar12 = *(byte *)(lVar11 + (int)uVar1);
          if (bVar12 == 0) {
            return -1;
          }
          iVar15 = (int)uVar17;
          if (bVar12 == 0x22) {
            return iVar15 + 2;
          }
          if (iVar6 <= iVar8) {
            return -1;
          }
          if (bVar12 != 0x5c) {
            uVar17 = (ulong)(iVar8 + 1);
            goto LAB_01d3a174;
          }
          uVar7 = (long)iVar15 + 2;
          if (iVar9 <= (int)uVar7) {
            return -1;
          }
          switch(*(undefined1 *)(lVar11 + uVar7)) {
          case 0x22:
            uVar17 = (ulong)(iVar8 + 1);
            bVar12 = 0x22;
            break;
          default:
            goto switchD_01d3a160_caseD_23;
          case 0x2f:
            uVar17 = (ulong)(iVar8 + 1);
            bVar12 = 0x2f;
            break;
          case 0x5c:
            uVar17 = (ulong)(iVar8 + 1);
            bVar12 = 0x5c;
            break;
          case 0x62:
            uVar17 = (ulong)(iVar8 + 1);
            bVar12 = 8;
            break;
          case 0x66:
            uVar17 = (ulong)(iVar8 + 1);
            bVar12 = 0xc;
            break;
          case 0x6e:
            uVar17 = (ulong)(iVar8 + 1);
            bVar12 = 10;
            break;
          case 0x72:
            uVar17 = (ulong)(iVar8 + 1);
            bVar12 = 0xd;
            break;
          case 0x74:
            uVar17 = (ulong)(iVar8 + 1);
            bVar12 = 9;
            break;
          case 0x75:
            if (iVar9 <= iVar15 + 6) {
              return -1;
            }
            lVar10 = (long)iVar8;
            uVar17 = lVar10 + 1;
            iVar9 = (int)uVar17;
            if (iVar6 <= iVar9) {
              return -1;
            }
            lVar2 = uVar7 + lVar11;
            bVar12 = *(byte *)(lVar2 + 1);
            iVar13 = 0xffd0;
            if (((9 < bVar12 - 0x30) && (iVar13 = 0xffa9, 5 < bVar12 - 0x61)) &&
               (iVar13 = 0xffc9, 5 < bVar12 - 0x41)) {
              return -1;
            }
            bVar3 = *(byte *)(lVar2 + 2);
            iVar16 = 0xffd0;
            if (((9 < bVar3 - 0x30) && (iVar16 = 0xffa9, 5 < bVar3 - 0x61)) &&
               (iVar16 = 0xffc9, 5 < bVar3 - 0x41)) {
              return -1;
            }
            bVar4 = *(byte *)(lVar2 + 3);
            iVar18 = 0xffd0;
            if (((9 < bVar4 - 0x30) && (iVar18 = 0xffa9, 5 < bVar4 - 0x61)) &&
               (iVar18 = 0xffc9, 5 < bVar4 - 0x41)) {
              return -1;
            }
            uVar7 = (long)iVar15 + 6;
            bVar5 = *(byte *)(lVar11 + uVar7);
            iVar15 = 0xffd0;
            if (((9 < bVar5 - 0x30) && (iVar15 = 0xffa9, 5 < bVar5 - 0x61)) &&
               (iVar15 = 0xffc9, 5 < bVar5 - 0x41)) {
              return -1;
            }
            uVar1 = (uint)bVar5 +
                    ((uint)bVar4 + ((uint)bVar3 + (iVar13 + (uint)bVar12) * 0x10 + iVar16) * 0x10 +
                    iVar18) * 0x10 + iVar15;
            bVar12 = (byte)uVar1;
            if ((uVar1 & 0xffff) < 0x80) {
            }
            else if ((uVar1 & 0xffff) < 0x800) {
              bVar12 = bVar12 & 0x1f | 0x80;
              *(byte *)((long)__s + lVar10) = (byte)(uVar1 >> 6) | 0xc0;
              uVar17 = (ulong)(iVar8 + 2);
              iVar8 = iVar9;
            }
            else {
              if (iVar6 <= iVar8 + 2) {
                return -1;
              }
              bVar12 = bVar12 & 0x3f | 0x80;
              *(byte *)((long)__s + lVar10) = (byte)(uVar1 >> 0xc) & 0xf | 0xe0;
              *(byte *)((long)__s + uVar17) = (byte)(uVar1 >> 6) & 0x3f | 0x80;
              uVar17 = (ulong)(iVar8 + 3);
              iVar8 = iVar8 + 2;
            }
          }
LAB_01d3a174:
          *(byte *)((long)__s + (long)iVar8) = bVar12;
          iVar8 = (int)uVar17;
          iVar9 = *(int *)((long)param_1 + 0xc);
switchD_01d3a160_caseD_23:
          uVar17 = uVar7 & 0xffffffff;
          uVar1 = (int)uVar7 + 1;
          if (iVar9 <= (int)uVar1) {
            return -1;
          }
        } while( true );
      }
    }
  }
  return -1;
}


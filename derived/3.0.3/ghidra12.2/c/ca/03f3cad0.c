
undefined8 FUN_03f3cad0(long param_1,int *param_2,long *param_3)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  undefined1 uVar6;
  uint uVar7;
  byte *pbVar8;
  uint uVar9;
  byte *pbVar10;
  byte *pbVar11;
  long lVar12;
  uint uVar13;
  uint uVar14;
  ulong uVar15;
  int iVar16;
  
  (**(code **)(*param_3 + 0x18))(param_3);
  pbVar10 = (byte *)param_3[1];
  uVar7 = (uint)*pbVar10;
  if (*pbVar10 == 0) {
    uVar9 = 0;
    cVar5 = *(char *)(param_1 + 8);
    if (cVar5 != '\0') goto LAB_03f3cb38;
LAB_03f3cba4:
    uVar7 = *(uint *)(param_1 + 0x48);
    if (uVar7 != 0) {
      lVar12 = *(long *)(param_1 + 0x50);
      if ((int)uVar7 < 2) {
        uVar15 = 0;
      }
      else {
        uVar15 = 0;
        iVar16 = uVar7 - 1;
        do {
          uVar13 = (uint)uVar15;
          iVar1 = iVar16 + uVar13;
          if (iVar1 < 0 != SCARRY4(iVar16,uVar13)) {
            iVar1 = iVar1 + 1;
          }
          uVar14 = iVar1 >> 1;
          uVar15 = (ulong)uVar14;
          uVar3 = *(uint *)(lVar12 + (-(ulong)(uVar14 >> 0x1f) & 0xfffffff800000000 | uVar15 << 3));
          if (uVar3 == uVar9) goto joined_r0x03f3cc74;
          if (uVar3 < uVar9) {
            uVar13 = uVar14 + 1;
          }
          else {
            iVar16 = uVar14 - 1;
          }
          uVar15 = (ulong)uVar13;
        } while ((int)uVar13 < iVar16);
      }
      if (*(uint *)(lVar12 + (-(uVar15 >> 0x1f) & 0xfffffff800000000 | uVar15 << 3)) == uVar9) {
        uVar14 = (uint)uVar15;
joined_r0x03f3cc74:
        if (0 < (int)uVar14) {
          lVar12 = lVar12 + uVar15 * 8;
          if (uVar7 <= (uint)uVar15) {
            lVar12 = 0;
          }
          if (-1 < *(int *)(lVar12 + 4)) {
            uVar6 = 0;
            *param_2 = *(int *)(lVar12 + 4);
LAB_03f3cc94:
            *(undefined1 *)(param_2 + 1) = uVar6;
            return 1;
          }
        }
      }
LAB_03f3cca0:
      if (cVar5 != '\0') goto LAB_03f3cca4;
    }
    iVar16 = *(int *)(param_1 + 0x58);
    if (iVar16 != 0) {
      uVar7 = 0;
      if (1 < iVar16) {
        iVar16 = iVar16 + -1;
LAB_03f3ce00:
        do {
          iVar1 = iVar16 + uVar7;
          if (iVar1 < 0 != SCARRY4(iVar16,uVar7)) {
            iVar1 = iVar1 + 1;
          }
          uVar9 = iVar1 >> 1;
          pbVar10 = (byte *)(*(long *)(param_1 + 0x60) + (long)(int)uVar9 * 0x84);
          (**(code **)(*param_3 + 0x18))(param_3);
          if ((byte *)param_3[1] != pbVar10) {
            pbVar8 = (byte *)param_3[1];
            pbVar11 = pbVar10;
            lVar12 = 0x7ffff;
            do {
              bVar4 = *pbVar11;
              if (bVar4 != *pbVar8) {
                if (*pbVar8 <= bVar4) {
                  iVar16 = uVar9 - 1;
                  if ((int)uVar7 < iVar16) goto LAB_03f3ce00;
                  goto LAB_03f3ced4;
                }
                break;
              }
              if (bVar4 == 0) break;
              bVar2 = lVar12 != 0;
              pbVar8 = pbVar8 + 1;
              pbVar11 = pbVar11 + 1;
              lVar12 = lVar12 + -1;
            } while (bVar2);
          }
          (**(code **)(*param_3 + 0x18))(param_3);
          if ((byte *)param_3[1] == pbVar10) goto LAB_03f3d004;
          pbVar8 = (byte *)param_3[1];
          lVar12 = 0x7ffff;
          while( true ) {
            bVar4 = *pbVar10;
            if (bVar4 != *pbVar8) break;
            if (bVar4 == 0) goto LAB_03f3d004;
            bVar2 = lVar12 == 0;
            pbVar8 = pbVar8 + 1;
            lVar12 = lVar12 + -1;
            pbVar10 = pbVar10 + 1;
            if (bVar2) goto LAB_03f3d004;
          }
          if (*pbVar8 <= bVar4) goto LAB_03f3d004;
          uVar7 = uVar9 + 1;
        } while ((int)uVar7 < iVar16);
      }
LAB_03f3ced4:
      pbVar10 = (byte *)(*(long *)(param_1 + 0x60) + (long)(int)uVar7 * 0x84);
      (**(code **)(*param_3 + 0x18))(param_3);
      if ((byte *)param_3[1] != pbVar10) {
        pbVar8 = (byte *)param_3[1];
        pbVar11 = pbVar10;
        lVar12 = 0x7ffff;
        do {
          bVar4 = *pbVar11;
          if (bVar4 != *pbVar8) {
            if (*pbVar8 <= bVar4) {
              return 0;
            }
            break;
          }
          if (bVar4 == 0) break;
          bVar2 = lVar12 != 0;
          pbVar8 = pbVar8 + 1;
          pbVar11 = pbVar11 + 1;
          lVar12 = lVar12 + -1;
        } while (bVar2);
      }
      (**(code **)(*param_3 + 0x18))(param_3);
      uVar9 = uVar7;
      if ((byte *)param_3[1] != pbVar10) {
        pbVar8 = (byte *)param_3[1];
        lVar12 = 0x7ffff;
        do {
          bVar4 = *pbVar10;
          if (bVar4 != *pbVar8) {
            if (bVar4 < *pbVar8) {
              return 0;
            }
            break;
          }
          if (bVar4 == 0) break;
          bVar2 = lVar12 != 0;
          pbVar8 = pbVar8 + 1;
          lVar12 = lVar12 + -1;
          pbVar10 = pbVar10 + 1;
        } while (bVar2);
      }
LAB_03f3d004:
      if (0 < (int)uVar9) {
        lVar12 = *(long *)(param_1 + 0x60) + (ulong)uVar9 * 0x84;
        if (*(uint *)(param_1 + 0x58) <= uVar9) {
          lVar12 = 0;
        }
        if (-1 < *(int *)(lVar12 + 0x80)) {
          *param_2 = *(int *)(lVar12 + 0x80);
          *(undefined1 *)(param_2 + 1) = 0;
          return 1;
        }
      }
    }
  }
  else {
    uVar9 = 0xffffffff;
    do {
      pbVar10 = pbVar10 + 1;
      uVar9 = crc32b(uVar9,uVar7,0x4c11db7);
      uVar7 = (uint)*pbVar10;
    } while (uVar7 != 0);
    uVar9 = ~uVar9;
    cVar5 = *(char *)(param_1 + 8);
    if (cVar5 == '\0') goto LAB_03f3cba4;
LAB_03f3cb38:
    uVar7 = *(uint *)(param_1 + 0x68);
    if (uVar7 != 0) {
      lVar12 = *(long *)(param_1 + 0x70);
      if ((int)uVar7 < 2) {
        uVar13 = 0;
      }
      else {
        uVar13 = 0;
        iVar16 = uVar7 - 1;
        do {
          iVar1 = iVar16 + uVar13;
          if (iVar1 < 0 != SCARRY4(iVar16,uVar13)) {
            iVar1 = iVar1 + 1;
          }
          uVar14 = iVar1 >> 1;
          uVar3 = *(uint *)(lVar12 + (long)(int)uVar14 * 0xc);
          if (uVar3 == uVar9) goto joined_r0x03f3cc14;
          if (uVar3 < uVar9) {
            uVar13 = uVar14 + 1;
          }
          else {
            iVar16 = uVar14 - 1;
          }
        } while ((int)uVar13 < iVar16);
      }
      uVar14 = uVar13;
      if (*(uint *)(lVar12 + (long)(int)uVar13 * 0xc) == uVar9) {
joined_r0x03f3cc14:
        if (0 < (int)uVar14) {
          lVar12 = lVar12 + (ulong)uVar14 * 0xc;
          if (uVar7 <= uVar14) {
            lVar12 = 0;
          }
          if (-1 < *(int *)(lVar12 + 4)) {
            *param_2 = *(int *)(lVar12 + 4);
            uVar6 = *(undefined1 *)(lVar12 + 8);
            goto LAB_03f3cc94;
          }
        }
      }
      goto LAB_03f3cca0;
    }
LAB_03f3cca4:
    iVar16 = *(int *)(param_1 + 0x78);
    if (iVar16 != 0) {
      uVar7 = 0;
      if (1 < iVar16) {
        iVar16 = iVar16 + -1;
LAB_03f3ccc0:
        do {
          iVar1 = iVar16 + uVar7;
          if (iVar1 < 0 != SCARRY4(iVar16,uVar7)) {
            iVar1 = iVar1 + 1;
          }
          uVar9 = iVar1 >> 1;
          pbVar10 = (byte *)(*(long *)(param_1 + 0x80) + (long)(int)uVar9 * 0x88);
          (**(code **)(*param_3 + 0x18))(param_3);
          if ((byte *)param_3[1] != pbVar10) {
            pbVar8 = (byte *)param_3[1];
            pbVar11 = pbVar10;
            lVar12 = 0x7ffff;
            do {
              bVar4 = *pbVar11;
              if (bVar4 != *pbVar8) {
                if (*pbVar8 <= bVar4) {
                  iVar16 = uVar9 - 1;
                  if ((int)uVar7 < iVar16) goto LAB_03f3ccc0;
                  goto LAB_03f3cd94;
                }
                break;
              }
              if (bVar4 == 0) break;
              bVar2 = lVar12 != 0;
              pbVar8 = pbVar8 + 1;
              pbVar11 = pbVar11 + 1;
              lVar12 = lVar12 + -1;
            } while (bVar2);
          }
          (**(code **)(*param_3 + 0x18))(param_3);
          uVar7 = uVar9;
          if ((byte *)param_3[1] == pbVar10) goto LAB_03f3cf74;
          pbVar8 = (byte *)param_3[1];
          lVar12 = 0x7ffff;
          while( true ) {
            bVar4 = *pbVar10;
            if (bVar4 != *pbVar8) break;
            if (bVar4 == 0) goto LAB_03f3cf74;
            bVar2 = lVar12 == 0;
            pbVar8 = pbVar8 + 1;
            lVar12 = lVar12 + -1;
            pbVar10 = pbVar10 + 1;
            if (bVar2) goto LAB_03f3cf74;
          }
          if (*pbVar8 <= bVar4) goto LAB_03f3cf74;
          uVar7 = uVar9 + 1;
        } while ((int)uVar7 < iVar16);
      }
LAB_03f3cd94:
      pbVar10 = (byte *)(*(long *)(param_1 + 0x80) + (long)(int)uVar7 * 0x88);
      (**(code **)(*param_3 + 0x18))(param_3);
      if ((byte *)param_3[1] != pbVar10) {
        pbVar8 = (byte *)param_3[1];
        pbVar11 = pbVar10;
        lVar12 = 0x7ffff;
        do {
          bVar4 = *pbVar11;
          if (bVar4 != *pbVar8) {
            if (*pbVar8 <= bVar4) {
              return 0;
            }
            break;
          }
          if (bVar4 == 0) break;
          bVar2 = lVar12 != 0;
          pbVar8 = pbVar8 + 1;
          pbVar11 = pbVar11 + 1;
          lVar12 = lVar12 + -1;
        } while (bVar2);
      }
      (**(code **)(*param_3 + 0x18))(param_3);
      if ((byte *)param_3[1] != pbVar10) {
        pbVar8 = (byte *)param_3[1];
        lVar12 = 0x7ffff;
        do {
          bVar4 = *pbVar10;
          if (bVar4 != *pbVar8) {
            if (bVar4 < *pbVar8) {
              return 0;
            }
            goto LAB_03f3cf74;
          }
          if (bVar4 == 0) break;
          bVar2 = lVar12 != 0;
          pbVar8 = pbVar8 + 1;
          lVar12 = lVar12 + -1;
          pbVar10 = pbVar10 + 1;
        } while (bVar2);
      }
LAB_03f3cf74:
      if (0 < (int)uVar7) {
        lVar12 = *(long *)(param_1 + 0x80) + (ulong)uVar7 * 0x88;
        if (*(uint *)(param_1 + 0x78) <= uVar7) {
          lVar12 = 0;
        }
        if (-1 < *(int *)(lVar12 + 0x80)) {
          iVar16 = *(int *)(lVar12 + 0x80);
          *(undefined1 *)(param_2 + 1) = *(undefined1 *)(lVar12 + 0x84);
          *param_2 = iVar16;
          return 1;
        }
      }
    }
  }
  return 0;
}


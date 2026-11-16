
undefined8 FUN_029ba7e0(long param_1,int *param_2,long *param_3)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  byte bVar5;
  uint uVar6;
  byte *pbVar7;
  long lVar8;
  uint uVar9;
  byte *pbVar10;
  byte *pbVar11;
  uint uVar12;
  int iVar13;
  
  (**(code **)(*param_3 + 0x18))(param_3);
  pbVar10 = (byte *)param_3[1];
  uVar6 = (uint)*pbVar10;
  if (*pbVar10 == 0) {
    uVar9 = 0;
    uVar6 = *(uint *)(param_1 + 0x28);
  }
  else {
    uVar9 = 0xffffffff;
    do {
      pbVar10 = pbVar10 + 1;
      uVar9 = crc32b(uVar9,uVar6,0x4c11db7);
      uVar6 = (uint)*pbVar10;
    } while (uVar6 != 0);
    uVar9 = ~uVar9;
    uVar6 = *(uint *)(param_1 + 0x28);
  }
  if (uVar6 != 0) {
    lVar8 = *(long *)(param_1 + 0x30);
    if ((int)uVar6 < 2) {
      uVar12 = 0;
    }
    else {
      uVar12 = 0;
      iVar13 = uVar6 - 1;
      do {
        iVar1 = iVar13 + uVar12;
        if (iVar1 < 0 != SCARRY4(iVar13,uVar12)) {
          iVar1 = iVar1 + 1;
        }
        uVar2 = iVar1 >> 1;
        uVar4 = *(uint *)(lVar8 + (long)(int)uVar2 * 0x10 + 0xc);
        if (uVar4 == uVar9) goto joined_r0x029ba8e4;
        if (uVar4 < uVar9) {
          uVar12 = uVar2 + 1;
        }
        else {
          iVar13 = uVar2 - 1;
        }
      } while ((int)uVar12 < iVar13);
    }
    uVar2 = uVar12;
    if (*(uint *)(lVar8 + (long)(int)uVar12 * 0x10 + 0xc) == uVar9) {
joined_r0x029ba8e4:
      if (-1 < (int)uVar2) {
        if (uVar6 <= uVar2) {
          uVar2 = 0;
        }
        iVar13 = *(int *)(lVar8 + (ulong)uVar2 * 0x10 + 4);
        if (iVar13 < 1) {
          return 0;
        }
        lVar8 = lVar8 + (ulong)uVar2 * 0x10;
        goto LAB_029baaa0;
      }
    }
  }
  iVar13 = *(int *)(param_1 + 0x38);
  if (iVar13 != 0) {
    uVar6 = 0;
    if (1 < iVar13) {
      iVar13 = iVar13 + -1;
LAB_029ba904:
      do {
        iVar1 = iVar13 + uVar6;
        if (iVar1 < 0 != SCARRY4(iVar13,uVar6)) {
          iVar1 = iVar1 + 1;
        }
        uVar9 = iVar1 >> 1;
        pbVar10 = (byte *)(*(long *)(param_1 + 0x40) + (long)(int)uVar9 * 0x4c + 0xc);
        (**(code **)(*param_3 + 0x18))(param_3);
        if (pbVar10 != (byte *)param_3[1]) {
          pbVar7 = (byte *)param_3[1];
          pbVar11 = pbVar10;
          lVar8 = 0x7ffff;
          do {
            bVar5 = *pbVar11;
            if (bVar5 != *pbVar7) {
              if (*pbVar7 <= bVar5) {
                iVar13 = uVar9 - 1;
                if (iVar13 <= (int)uVar6) goto LAB_029ba9d4;
                goto LAB_029ba904;
              }
              break;
            }
            if (bVar5 == 0) break;
            bVar3 = lVar8 != 0;
            pbVar7 = pbVar7 + 1;
            pbVar11 = pbVar11 + 1;
            lVar8 = lVar8 + -1;
          } while (bVar3);
        }
        (**(code **)(*param_3 + 0x18))(param_3);
        if (pbVar10 == (byte *)param_3[1]) goto LAB_029baa74;
        pbVar7 = (byte *)param_3[1];
        lVar8 = 0x7ffff;
        while( true ) {
          bVar5 = *pbVar10;
          if (bVar5 != *pbVar7) break;
          if (bVar5 == 0) goto LAB_029baa74;
          bVar3 = lVar8 == 0;
          pbVar7 = pbVar7 + 1;
          lVar8 = lVar8 + -1;
          pbVar10 = pbVar10 + 1;
          if (bVar3) goto LAB_029baa74;
        }
        if (*pbVar7 <= bVar5) goto LAB_029baa74;
        uVar6 = uVar9 + 1;
      } while ((int)uVar6 < iVar13);
    }
LAB_029ba9d4:
    pbVar10 = (byte *)(*(long *)(param_1 + 0x40) + (long)(int)uVar6 * 0x4c + 0xc);
    (**(code **)(*param_3 + 0x18))(param_3);
    if (pbVar10 != (byte *)param_3[1]) {
      pbVar7 = (byte *)param_3[1];
      pbVar11 = pbVar10;
      lVar8 = 0x7ffff;
      do {
        bVar5 = *pbVar11;
        if (bVar5 != *pbVar7) {
          if (*pbVar7 <= bVar5) {
            return 0;
          }
          break;
        }
        if (bVar5 == 0) break;
        bVar3 = lVar8 != 0;
        pbVar7 = pbVar7 + 1;
        pbVar11 = pbVar11 + 1;
        lVar8 = lVar8 + -1;
      } while (bVar3);
    }
    (**(code **)(*param_3 + 0x18))(param_3);
    uVar9 = uVar6;
    if (pbVar10 != (byte *)param_3[1]) {
      pbVar7 = (byte *)param_3[1];
      lVar8 = 0x7ffff;
      do {
        bVar5 = *pbVar10;
        if (bVar5 != *pbVar7) {
          if (bVar5 < *pbVar7) {
            return 0;
          }
          break;
        }
        if (bVar5 == 0) break;
        bVar3 = lVar8 != 0;
        pbVar7 = pbVar7 + 1;
        lVar8 = lVar8 + -1;
        pbVar10 = pbVar10 + 1;
      } while (bVar3);
    }
LAB_029baa74:
    if (-1 < (int)uVar9) {
      if (*(uint *)(param_1 + 0x38) <= uVar9) {
        uVar9 = 0;
      }
      iVar13 = *(int *)(*(long *)(param_1 + 0x40) + (ulong)uVar9 * 0x4c + 4);
      if (0 < iVar13) {
        lVar8 = *(long *)(param_1 + 0x40) + (ulong)uVar9 * 0x4c;
LAB_029baaa0:
        iVar1 = *(int *)(lVar8 + 8);
        *param_2 = iVar13;
        *(long *)(param_2 + 2) = lVar8 + iVar1;
        return 1;
      }
    }
  }
  return 0;
}



undefined8 FUN_02733bf0(long param_1,undefined8 *param_2)

{
  int iVar1;
  int *piVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  byte bVar8;
  
  piVar2 = (int *)*param_2;
  iVar1 = 0;
  do {
    pbVar3 = (byte *)(param_1 + (long)iVar1 * 10);
    *piVar2 = 0;
    bVar8 = *pbVar3;
    if (bVar8 == 0) {
      piVar2 = (int *)*param_2;
      iVar6 = 0;
      iVar4 = *piVar2;
    }
    else {
      iVar4 = 0;
      pbVar5 = pbVar3;
      iVar6 = 0;
LAB_02733c30:
      do {
        if ((bVar8 & 0xc0) == 0x80) {
          iVar7 = iVar6 + -1;
          if (iVar6 < 1) {
            return 1;
          }
        }
        else {
          if (iVar6 != 0) {
            return 1;
          }
          iVar4 = iVar4 + 1;
          *piVar2 = iVar4;
          bVar8 = *pbVar5;
          if (-1 < (char)bVar8) {
            pbVar5 = pbVar5 + 1;
            bVar8 = *pbVar5;
            iVar6 = 0;
            if (bVar8 == 0) goto LAB_02733ca4;
            goto LAB_02733c30;
          }
          if ((bVar8 & 0xe0) == 0xc0) {
            iVar7 = 1;
          }
          else {
            if ((bVar8 & 0xf0) != 0xe0) {
              return 1;
            }
            iVar7 = 2;
          }
        }
        pbVar5 = pbVar5 + 1;
        bVar8 = *pbVar5;
        iVar6 = iVar7;
      } while (bVar8 != 0);
      if (iVar7 != 0) {
        return 1;
      }
LAB_02733ca4:
      piVar2 = (int *)*param_2;
      iVar4 = *piVar2;
      if (*pbVar3 == 0) {
        iVar6 = 0;
      }
      else if (pbVar3[1] == 0) {
        iVar6 = 1;
      }
      else if (pbVar3[2] == 0) {
        iVar6 = 2;
      }
      else if (pbVar3[3] == 0) {
        iVar6 = 3;
      }
      else if (pbVar3[4] == 0) {
        iVar6 = 4;
      }
      else if (pbVar3[5] == 0) {
        iVar6 = 5;
      }
      else if (pbVar3[6] == 0) {
        iVar6 = 6;
      }
      else if (pbVar3[7] == 0) {
        iVar6 = 7;
      }
      else if (pbVar3[8] == 0) {
        iVar6 = 8;
      }
      else {
        iVar6 = 9;
        if (pbVar3[9] != 0) {
          iVar6 = -1;
        }
      }
    }
    iVar7 = 0;
    if (iVar6 != -1) {
      iVar7 = iVar6;
    }
    if (iVar7 != iVar4) {
      return 1;
    }
    iVar1 = iVar1 + 1;
    if (iVar1 == 10) {
      return 0;
    }
  } while( true );
}


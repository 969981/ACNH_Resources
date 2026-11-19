
undefined8 FUN_03c8c510(long *param_1,long *param_2)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  ulong uVar5;
  undefined8 uVar6;
  uint uVar7;
  code *pcVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  byte *pbVar12;
  uint uVar13;
  uint uVar14;
  bool bVar15;
  
  (**(code **)(*param_2 + 0x18))(param_2);
  pbVar12 = (byte *)param_2[1];
  bVar1 = *pbVar12;
  if (bVar1 != 0) {
    bVar2 = false;
    bVar3 = false;
    bVar4 = false;
    bVar15 = false;
    uVar10 = 0;
    uVar7 = 0;
    uVar13 = 0;
    uVar14 = 0;
    lVar11 = 0;
    do {
      uVar9 = (uint)bVar1;
      if (uVar9 < 0x20) {
        return 0;
      }
      if (uVar9 == 0x5d) {
        if (!bVar2) {
          return 0;
        }
        uVar9 = uVar14;
        if (!bVar4) {
          uVar9 = uVar13;
        }
        if (-1 < (int)(uVar9 - uVar7)) {
          if (bVar3) {
            pcVar8 = *(code **)(*param_1 + 0x18);
          }
          else {
            pcVar8 = *(code **)(*param_1 + 8);
          }
          uVar5 = (*pcVar8)(param_1,pbVar12 + uVar7,uVar9 - uVar7,lVar11,uVar10);
          if ((uVar5 & 1) == 0) {
            return 0;
          }
        }
        bVar2 = false;
        uVar7 = uVar13 + 1;
      }
      else if (uVar9 == 0x5b) {
        if (bVar2) {
          return 0;
        }
        if (0 < (int)(uVar13 - uVar7)) {
          if (bVar3) {
            pcVar8 = (code *)((undefined8 *)*param_1)[2];
          }
          else {
            pcVar8 = *(code **)*param_1;
          }
          uVar5 = (*pcVar8)(param_1,pbVar12 + uVar7);
          if ((uVar5 & 1) == 0) {
            return 0;
          }
        }
        lVar11 = 0;
        uVar10 = 0;
        bVar15 = false;
        bVar4 = false;
        uVar7 = uVar13 + 1;
        bVar2 = true;
      }
      else if (uVar9 == 0x40) {
        if ((bool)(bVar2 | bVar3)) {
          return 0;
        }
        if ((0 < (int)(uVar13 - uVar7)) &&
           (uVar5 = (**(code **)*param_1)(param_1,pbVar12 + uVar7), (uVar5 & 1) == 0)) {
          return 0;
        }
        bVar2 = false;
        uVar7 = uVar13 + 1;
        bVar3 = true;
      }
      else if (bVar2) {
        if (uVar9 == 0x3a) {
          if (bVar4) {
            return 0;
          }
          bVar4 = true;
          bVar2 = true;
          uVar14 = uVar13;
        }
        else if (bVar4) {
          uVar6 = 0;
          if (bVar15) {
            if (9 < uVar9 - 0x30) {
              return 0;
            }
            if (lVar11 == 0) {
              return 0;
            }
            uVar10 = (uVar9 + uVar10 * 10) - 0x30;
            if (10 < uVar10) {
              return 0;
            }
            bVar15 = true;
            bVar4 = true;
            bVar2 = true;
          }
          else {
            lVar11 = 0;
            bVar15 = true;
            bVar4 = true;
            bVar2 = true;
            switch(uVar9) {
            case 0x44:
            case 100:
              lVar11 = 1;
              break;
            default:
              goto switchD_03c8c728_caseD_45;
            case 0x53:
            case 0x73:
              break;
            case 0x58:
              lVar11 = 2;
              break;
            case 0x78:
              lVar11 = 3;
            }
          }
        }
        else {
          bVar4 = false;
          bVar2 = true;
        }
      }
      else {
        bVar2 = false;
      }
      uVar13 = uVar13 + 1;
      bVar1 = pbVar12[uVar13];
    } while (bVar1 != 0);
    if (bVar2) {
      return 0;
    }
    if (0 < (int)(uVar13 - uVar7)) {
      if (bVar3) {
        pcVar8 = (code *)((undefined8 *)*param_1)[2];
      }
      else {
        pcVar8 = *(code **)*param_1;
      }
      uVar5 = (*pcVar8)(param_1,pbVar12 + uVar7);
      if ((uVar5 & 1) == 0) {
        return 0;
      }
    }
  }
  uVar6 = 1;
switchD_03c8c728_caseD_45:
  return uVar6;
}


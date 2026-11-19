
undefined8 FUN_038d52a0(float *param_1,long *param_2)

{
  byte *pbVar1;
  int iVar2;
  undefined *puVar3;
  char *pcVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  bool bVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  (**(code **)(*param_2 + 0x18))(param_2);
  puVar3 = PTR_DAT_04bb2120;
  pcVar4 = (char *)param_2[1];
  lVar6 = 0;
  do {
    if (pcVar4[lVar6] == '\0') {
LAB_038d5328:
      if ((int)lVar6 < 0) {
        pcVar4 = PTR_DAT_04bb2120;
      }
      break;
    }
    if (pcVar4[lVar6 + 1] == '\0') {
      lVar6 = lVar6 + 1;
      goto LAB_038d5328;
    }
    if (pcVar4[lVar6 + 2] == '\0') {
      lVar6 = lVar6 + 2;
      goto LAB_038d5328;
    }
    lVar6 = lVar6 + 3;
  } while (lVar6 != 0x80001);
  if (*pcVar4 == '+') {
    uVar7 = 1;
    uVar9 = 1;
  }
  else {
    if (*pcVar4 == '-') {
      fVar11 = 0.0;
      fVar10 = -1.0;
      bVar8 = false;
      uVar7 = 1;
      do {
        (**(code **)(*param_2 + 0x18))(param_2);
        lVar5 = param_2[1];
        lVar6 = 0;
        do {
          if (*(char *)(lVar5 + lVar6) == '\0') goto LAB_038d53e4;
          if (*(char *)(lVar5 + lVar6 + 1) == '\0') {
            lVar6 = lVar6 + 1;
            goto LAB_038d53e4;
          }
          if (*(char *)(lVar5 + lVar6 + 2) == '\0') {
            lVar6 = lVar6 + 2;
            goto LAB_038d53e4;
          }
          lVar6 = lVar6 + 3;
        } while (lVar6 != 0x80001);
        lVar6 = 0;
LAB_038d53e4:
        pbVar1 = puVar3;
        if ((int)uVar7 <= (int)lVar6 && -1 < (int)uVar7) {
          pbVar1 = (byte *)(lVar5 + (ulong)uVar7);
        }
        iVar2 = *pbVar1 - 0x30;
        if (0x39 < *pbVar1) {
          iVar2 = -1;
        }
        if (iVar2 < 0) goto LAB_038d5560;
        if (fVar11 < -3.4028235e+37) {
          return 0;
        }
        if (3.4028235e+37 < fVar11) {
          return 0;
        }
        if (fVar11 * 10.0 < (float)iVar2 + -3.4028235e+38) {
          return 0;
        }
        uVar7 = uVar7 + 1;
        bVar8 = true;
        fVar11 = fVar11 * 10.0 + (float)-iVar2;
      } while( true );
    }
    uVar7 = 0;
    uVar9 = 0;
  }
  fVar11 = 0.0;
  fVar10 = 1.0;
  bVar8 = false;
  do {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar5 = param_2[1];
    lVar6 = 0;
    do {
      if (*(char *)(lVar5 + lVar6) == '\0') goto LAB_038d54f4;
      if (*(char *)(lVar5 + lVar6 + 1) == '\0') {
        lVar6 = lVar6 + 1;
        goto LAB_038d54f4;
      }
      if (*(char *)(lVar5 + lVar6 + 2) == '\0') {
        lVar6 = lVar6 + 2;
        goto LAB_038d54f4;
      }
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
    lVar6 = 0;
LAB_038d54f4:
    pbVar1 = puVar3;
    if ((int)uVar9 <= (int)lVar6 && -1 < (int)uVar9) {
      pbVar1 = (byte *)(lVar5 + (ulong)uVar9);
    }
    iVar2 = *pbVar1 - 0x30;
    if (0x39 < *pbVar1) {
      iVar2 = -1;
    }
    if (iVar2 < 0) break;
    if (fVar11 < -3.4028235e+37) {
      return 0;
    }
    if (3.4028235e+37 < fVar11) {
      return 0;
    }
    if (3.4028235e+38 - (float)iVar2 < fVar11 * 10.0) {
      return 0;
    }
    uVar7 = uVar7 + 1;
    fVar11 = fVar11 * 10.0 + (float)iVar2;
    bVar8 = true;
    uVar9 = uVar7;
  } while( true );
LAB_038d5560:
  if (!bVar8) {
    return 0;
  }
  if (param_1 != (float *)0x0) {
    *param_1 = fVar11;
  }
  (**(code **)(*param_2 + 0x18))(param_2);
  puVar3 = PTR_DAT_04bb2120;
  lVar5 = param_2[1];
  lVar6 = 0;
  do {
    if (*(char *)(lVar5 + lVar6) == '\0') goto LAB_038d55c8;
    if (*(char *)(lVar5 + lVar6 + 1) == '\0') {
      lVar6 = lVar6 + 1;
      goto LAB_038d55c8;
    }
    if (*(char *)(lVar5 + lVar6 + 2) == '\0') {
      lVar6 = lVar6 + 2;
      goto LAB_038d55c8;
    }
    lVar6 = lVar6 + 3;
  } while (lVar6 != 0x80001);
  lVar6 = 0;
LAB_038d55c8:
  pcVar4 = PTR_DAT_04bb2120;
  if ((int)uVar7 <= (int)lVar6 && -1 < (int)uVar7) {
    pcVar4 = (char *)(lVar5 + (ulong)uVar7);
  }
  if (*pcVar4 != '.') {
    return 1;
  }
  fVar11 = *param_1;
  fVar12 = 0.0;
  fVar13 = 1.0;
  do {
    uVar7 = uVar7 + 1;
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar5 = param_2[1];
    lVar6 = 0;
    do {
      if (*(char *)(lVar5 + lVar6) == '\0') goto LAB_038d5664;
      if (*(char *)(lVar5 + lVar6 + 1) == '\0') {
        lVar6 = lVar6 + 1;
        goto LAB_038d5664;
      }
      if (*(char *)(lVar5 + lVar6 + 2) == '\0') {
        lVar6 = lVar6 + 2;
        goto LAB_038d5664;
      }
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
    lVar6 = 0;
LAB_038d5664:
    pbVar1 = puVar3;
    if ((int)uVar7 <= (int)lVar6 && -1 < (int)uVar7) {
      pbVar1 = (byte *)(lVar5 + (ulong)uVar7);
    }
    iVar2 = *pbVar1 - 0x30;
    if (0x39 < *pbVar1) {
      iVar2 = -1;
    }
    if (iVar2 < 0) {
      if (fVar13 == 1.0) {
        return 1;
      }
      *param_1 = fVar11 + fVar12 / fVar13;
      return 1;
    }
    fVar13 = fVar13 * 10.0;
    fVar12 = fVar12 * 10.0 + (float)iVar2 * fVar10;
  } while( true );
}


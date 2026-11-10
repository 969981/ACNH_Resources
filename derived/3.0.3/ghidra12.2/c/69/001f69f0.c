
long FUN_001f69f0(byte *param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  byte *pbVar5;
  undefined8 uVar6;
  byte *pbVar7;
  uint uVar8;
  byte *pbVar9;
  byte bVar10;
  byte *pbVar11;
  ulong __n;
  ulong uVar12;
  size_t sVar13;
  long lVar14;
  
  lVar3 = -300;
  if (4 < *(int *)(param_1 + 0x1030) - 3U) {
    return -300;
  }
  switch(*(int *)(param_1 + 0x1030)) {
  case 3:
    pbVar5 = *(byte **)(param_1 + 0x1008);
    pbVar7 = *(byte **)(param_1 + 0x1000);
    __n = (long)pbVar5 - (long)pbVar7;
    uVar12 = *(ulong *)(param_1 + 0x1038);
    if (__n < uVar12) {
      if (pbVar7 != param_1) {
        memmove(param_1,pbVar7,__n);
        pbVar5 = param_1 + __n;
        *(byte **)(param_1 + 0x1000) = param_1;
        *(byte **)(param_1 + 0x1008) = pbVar5;
      }
      lVar3 = (**(code **)(param_1 + 0x1088))
                        (pbVar5,param_1 + (0x1000 - (long)pbVar5),0,
                         *(undefined8 *)(param_1 + 0x1098));
      if (lVar3 < 1) {
        return -100;
      }
      pbVar7 = *(byte **)(param_1 + 0x1000);
      uVar12 = *(ulong *)(param_1 + 0x1038);
      __n = (*(long *)(param_1 + 0x1008) + lVar3) - (long)pbVar7;
      *(long *)(param_1 + 0x1008) = *(long *)(param_1 + 0x1008) + lVar3;
    }
    if (__n < uVar12) {
      return -100;
    }
    bVar10 = *pbVar7;
    param_1[0x1010] = bVar10 >> 7;
    param_1[0x1011] = bVar10 & 0xf;
    param_1[0x1012] = bVar10 >> 4 & 7;
    *(byte **)(param_1 + 0x1000) = pbVar7 + 1;
    bVar2 = pbVar7[1];
    param_1[0x1028] = (byte)((uint)(int)(char)bVar2 >> 7) & 1;
    bVar1 = pbVar7[1];
    *(byte **)(param_1 + 0x1000) = pbVar7 + 2;
    uVar8 = (uint)((ulong)bVar1 & 0x7f);
    if ((bVar10 >> 3 & 1) != 0) {
      if (-1 < (char)bVar10) {
        return -200;
      }
      if (0x7d < uVar8) {
        return -200;
      }
    }
    if (uVar8 == 0x7e) {
      uVar6 = 2;
    }
    else {
      if (uVar8 != 0x7f) {
        *(ulong *)(param_1 + 0x1018) = (ulong)bVar1 & 0x7f;
        param_1[0x1020] = 0;
        param_1[0x1021] = 0;
        param_1[0x1022] = 0;
        param_1[0x1023] = 0;
        param_1[0x1024] = 0;
        param_1[0x1025] = 0;
        param_1[0x1026] = 0;
        param_1[0x1027] = 0;
        if ((char)bVar2 < 0) {
          param_1[0x1030] = 6;
          param_1[0x1031] = 0;
          param_1[0x1032] = 0;
          param_1[0x1033] = 0;
          param_1[0x1038] = 4;
          param_1[0x1039] = 0;
          param_1[0x103a] = 0;
          param_1[0x103b] = 0;
          param_1[0x103c] = 0;
          param_1[0x103d] = 0;
          param_1[0x103e] = 0;
          param_1[0x103f] = 0;
          goto switchD_001f6a34_caseD_6;
        }
        param_1[0x1030] = 7;
        param_1[0x1031] = 0;
        param_1[0x1032] = 0;
        param_1[0x1033] = 0;
        goto switchD_001f6a34_caseD_7;
      }
      uVar6 = 8;
    }
    *(undefined8 *)(param_1 + 0x1038) = uVar6;
    param_1[0x1030] = 5;
    param_1[0x1031] = 0;
    param_1[0x1032] = 0;
    param_1[0x1033] = 0;
  case 5:
    pbVar5 = *(byte **)(param_1 + 0x1008);
    pbVar7 = *(byte **)(param_1 + 0x1000);
    uVar12 = (long)pbVar5 - (long)pbVar7;
    sVar13 = *(size_t *)(param_1 + 0x1038);
    if (uVar12 < sVar13) {
      if (pbVar7 != param_1) {
        memmove(param_1,pbVar7,uVar12);
        pbVar5 = param_1 + uVar12;
        *(byte **)(param_1 + 0x1000) = param_1;
        *(byte **)(param_1 + 0x1008) = pbVar5;
      }
      lVar3 = (**(code **)(param_1 + 0x1088))
                        (pbVar5,param_1 + (0x1000 - (long)pbVar5),0,
                         *(undefined8 *)(param_1 + 0x1098));
      if (lVar3 < 1) {
        return -100;
      }
      lVar14 = *(long *)(param_1 + 0x1008);
      pbVar7 = *(byte **)(param_1 + 0x1000);
      sVar13 = *(size_t *)(param_1 + 0x1038);
      *(long *)(param_1 + 0x1008) = lVar14 + lVar3;
      if ((ulong)((lVar14 + lVar3) - (long)pbVar7) < sVar13) {
        return -100;
      }
    }
    param_1[0x1018] = 0;
    param_1[0x1019] = 0;
    param_1[0x101a] = 0;
    param_1[0x101b] = 0;
    param_1[0x101c] = 0;
    param_1[0x101d] = 0;
    param_1[0x101e] = 0;
    param_1[0x101f] = 0;
    param_1[0x1020] = 0;
    param_1[0x1021] = 0;
    param_1[0x1022] = 0;
    param_1[0x1023] = 0;
    param_1[0x1024] = 0;
    param_1[0x1025] = 0;
    param_1[0x1026] = 0;
    param_1[0x1027] = 0;
    memcpy(param_1 + (0x1020 - sVar13),pbVar7,sVar13);
    uVar12 = FUN_001f6e90(*(undefined8 *)(param_1 + 0x1018));
    *(ulong *)(param_1 + 0x1018) = uVar12;
    pbVar5 = (byte *)(*(long *)(param_1 + 0x1000) + *(long *)(param_1 + 0x1038));
    *(byte **)(param_1 + 0x1000) = pbVar5;
    if (*(long *)(param_1 + 0x1038) == 8) {
      if ((long)uVar12 < 0x10000) {
        return -200;
      }
    }
    else if (uVar12 < 0x7e) {
      return -200;
    }
    if (param_1[0x1028] != 0) {
      param_1[0x1030] = 6;
      param_1[0x1031] = 0;
      param_1[0x1032] = 0;
      param_1[0x1033] = 0;
      param_1[0x1038] = 4;
      param_1[0x1039] = 0;
      param_1[0x103a] = 0;
      param_1[0x103b] = 0;
      param_1[0x103c] = 0;
      param_1[0x103d] = 0;
      param_1[0x103e] = 0;
      param_1[0x103f] = 0;
      pbVar7 = *(byte **)(param_1 + 0x1008);
      sVar13 = (long)pbVar7 - (long)pbVar5;
      if (sVar13 < 4) {
LAB_001f6c94:
        if (pbVar5 != param_1) {
          memmove(param_1,pbVar5,sVar13);
          pbVar7 = param_1 + sVar13;
          *(byte **)(param_1 + 0x1000) = param_1;
          *(byte **)(param_1 + 0x1008) = pbVar7;
        }
        lVar3 = (**(code **)(param_1 + 0x1088))
                          (pbVar7,param_1 + (0x1000 - (long)pbVar7),0,
                           *(undefined8 *)(param_1 + 0x1098));
        if (lVar3 < 1) {
          return -100;
        }
        lVar14 = *(long *)(param_1 + 0x1008);
        pbVar5 = *(byte **)(param_1 + 0x1000);
        *(long *)(param_1 + 0x1008) = lVar14 + lVar3;
        if ((ulong)((lVar14 + lVar3) - (long)pbVar5) < *(ulong *)(param_1 + 0x1038)) {
          return -100;
        }
      }
LAB_001f6cf4:
      memcpy(param_1 + 0x1029,pbVar5,4);
      pbVar5 = (byte *)(*(long *)(param_1 + 0x1000) + 4);
      *(byte **)(param_1 + 0x1000) = pbVar5;
    }
    param_1[0x1030] = 7;
    param_1[0x1031] = 0;
    param_1[0x1032] = 0;
    param_1[0x1033] = 0;
    pbVar7 = *(byte **)(param_1 + 0x1008);
    lVar3 = *(long *)(param_1 + 0x1018);
    lVar14 = *(long *)(param_1 + 0x1020);
    if (pbVar7 == pbVar5) {
LAB_001f6d2c:
      if (lVar3 != lVar14) {
        if (pbVar5 != param_1) {
          memmove(param_1,pbVar5,0);
          *(byte **)(param_1 + 0x1008) = param_1;
          *(byte **)(param_1 + 0x1000) = param_1;
        }
        lVar4 = (**(code **)(param_1 + 0x1088))(param_1,0x1000,0,*(undefined8 *)(param_1 + 0x1098));
        if (lVar4 < 1) {
          return -100;
        }
        pbVar7 = (byte *)(*(long *)(param_1 + 0x1008) + lVar4);
        pbVar5 = *(byte **)(param_1 + 0x1000);
        *(byte **)(param_1 + 0x1008) = pbVar7;
      }
    }
    break;
  case 4:
    goto switchD_001f6a34_caseD_4;
  case 6:
switchD_001f6a34_caseD_6:
    pbVar5 = *(byte **)(param_1 + 0x1000);
    pbVar7 = *(byte **)(param_1 + 0x1008);
    sVar13 = (long)pbVar7 - (long)pbVar5;
    if (sVar13 < *(ulong *)(param_1 + 0x1038)) goto LAB_001f6c94;
    goto LAB_001f6cf4;
  case 7:
switchD_001f6a34_caseD_7:
    pbVar5 = *(byte **)(param_1 + 0x1000);
    pbVar7 = *(byte **)(param_1 + 0x1008);
    lVar3 = *(long *)(param_1 + 0x1018);
    lVar14 = *(long *)(param_1 + 0x1020);
    if (pbVar7 == pbVar5) goto LAB_001f6d2c;
  }
  bVar10 = param_1[0x1028];
  if ((ulong)(lVar3 - lVar14) <= (ulong)((long)pbVar7 - (long)pbVar5)) {
    pbVar7 = pbVar5 + (lVar3 - lVar14);
  }
  if (bVar10 == 0) {
    *(byte **)(param_1 + 0x1000) = pbVar7;
    pbVar9 = pbVar7 + (*(long *)(param_1 + 0x1020) - (long)pbVar5);
    *(byte **)(param_1 + 0x1020) = pbVar9;
  }
  else {
    pbVar9 = *(byte **)(param_1 + 0x1020);
    if (pbVar5 == pbVar7) {
      pbVar7 = pbVar5;
    }
    else {
      pbVar11 = pbVar5;
      do {
        *pbVar11 = *pbVar11 ^ param_1[((ulong)pbVar9 & 3) + 0x1029];
        pbVar11 = (byte *)(*(long *)(param_1 + 0x1000) + 1);
        *(byte **)(param_1 + 0x1000) = pbVar11;
        pbVar9 = (byte *)(*(long *)(param_1 + 0x1020) + 1);
        *(byte **)(param_1 + 0x1020) = pbVar9;
      } while (pbVar11 != pbVar7);
      bVar10 = param_1[0x1028];
    }
  }
  bVar1 = param_1[0x1010];
  lVar3 = (long)pbVar7 - (long)pbVar5;
  param_2[0x10] = bVar10;
  bVar10 = param_1[0x1011];
  *(byte **)(param_2 + 0x18) = pbVar5;
  *(long *)(param_2 + 0x20) = lVar3;
  *param_2 = bVar1;
  bVar1 = param_1[0x1012];
  param_2[2] = bVar10;
  param_2[1] = bVar1;
  pbVar5 = *(byte **)(param_1 + 0x1018);
  *(byte **)(param_2 + 8) = pbVar5;
  if (pbVar5 == pbVar9) {
    param_1[0x1030] = 3;
    param_1[0x1031] = 0;
    param_1[0x1032] = 0;
    param_1[0x1033] = 0;
    param_1[0x1038] = 2;
    param_1[0x1039] = 0;
    param_1[0x103a] = 0;
    param_1[0x103b] = 0;
    param_1[0x103c] = 0;
    param_1[0x103d] = 0;
    param_1[0x103e] = 0;
    param_1[0x103f] = 0;
    return lVar3;
  }
switchD_001f6a34_caseD_4:
  return lVar3;
}


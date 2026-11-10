
ulong FUN_001694dc(long *param_1,long *param_2,uint *param_3,byte *param_4,long param_5,int param_6)

{
  byte bVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  bool bVar5;
  long lVar6;
  ulong uVar7;
  undefined4 uVar8;
  long lVar9;
  undefined4 uVar10;
  long *plVar11;
  byte *pbVar12;
  ulong uVar13;
  byte *pbVar14;
  long lVar15;
  int local_64;
  
  local_64 = 0;
  if (*(char *)((long)param_1 + 0x3c) != '\0') {
    return 0xfffffffffffffdf5;
  }
  lVar15 = param_1[4];
  FUN_0016b194(param_1[0x16]);
  FUN_0016b194(param_1[0x15]);
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *param_3 = 0;
  pbVar14 = param_4;
  if (param_5 == 0) {
LAB_00169964:
    if (param_6 != 0) {
      if (1 < *(int *)((long)param_1 + 0xe4) - 1U) {
LAB_00169a44:
        uVar13 = 0xfffffffffffffdf5;
LAB_00169a48:
        *(undefined1 *)((long)param_1 + 0x3c) = 1;
        return uVar13;
      }
      *param_3 = *param_3 | 1;
    }
    return (long)pbVar14 - (long)param_4;
  }
  pbVar14 = param_4 + param_5;
  pbVar12 = param_4;
LAB_00169574:
  switch(*(int *)((long)param_1 + 0xe4)) {
  case 0:
    if ((*pbVar12 & 0xe0) == 0x20) {
LAB_001695c4:
      lVar6 = 0x300000001;
LAB_001695cc:
      param_1[0x1c] = lVar6;
      goto LAB_00169944;
    }
    goto LAB_00169a44;
  case 1:
  case 2:
    bVar1 = *pbVar12;
    if ((bVar1 & 0xe0) == 0x20) {
      if (*(int *)((long)param_1 + 0xe4) != 2) goto LAB_001695c4;
      goto LAB_00169a44;
    }
    if ((char)bVar1 < '\0') {
      lVar6 = 0x400000001;
      goto LAB_001695cc;
    }
    uVar8 = 2;
    if ((bVar1 == 0) || (bVar1 == 0x10)) {
      lVar6 = 1;
      uVar10 = 5;
    }
    else {
      lVar6 = 1;
      uVar10 = 5;
      if (bVar1 != 0x40) {
        lVar6 = 0;
        uVar10 = 4;
        uVar8 = 3;
      }
    }
    *(undefined4 *)(param_1 + 0x1c) = uVar8;
    *(undefined4 *)((long)param_1 + 0xe4) = uVar10;
    *(byte *)((long)param_1 + 0xe9) = *pbVar12 >> 6 & 1;
    bVar1 = *pbVar12;
    pbVar12 = pbVar12 + lVar6;
    *(bool *)((long)param_1 + 0xea) = (bVar1 & 0xf0) == 0x10;
LAB_00169944:
    bVar5 = false;
    param_1[0x17] = 0;
    param_1[0x1b] = 0;
LAB_00169950:
    if ((pbVar12 != pbVar14) || (bVar5)) goto LAB_00169574;
    goto LAB_00169964;
  case 3:
    local_64 = 0;
    uVar13 = param_1[0x1a];
    if ((ulong)param_1[0x19] <= (ulong)param_1[0x1a]) {
      uVar13 = param_1[0x19];
    }
    uVar13 = FUN_00169b0c(param_1,&local_64,pbVar12,pbVar14,5,uVar13);
    if (-1 < (long)uVar13) {
      pbVar12 = pbVar12 + uVar13;
      if (local_64 == 0) break;
      param_1[0x1a] = 0xffffffff;
      param_1[6] = param_1[0x17];
      FUN_00168d10(param_1,0);
      bVar5 = false;
      *(undefined4 *)((long)param_1 + 0xe4) = 1;
      goto LAB_00169950;
    }
    goto LAB_00169a48;
  case 4:
    if ((int)param_1[0x1c] == 1) {
      uVar4 = 7;
    }
    else {
      uVar4 = 4;
      if (*(char *)((long)param_1 + 0xe9) != '\0') {
        uVar4 = 6;
      }
    }
    local_64 = 0;
    uVar13 = FUN_00169b0c(param_1,&local_64,pbVar12,pbVar14,uVar4,param_1[3] + 0x3d);
    if ((long)uVar13 < 0) goto LAB_00169a48;
    pbVar12 = pbVar12 + uVar13;
    if (local_64 != 0) {
      lVar6 = param_1[0x17];
      if (lVar6 != 0) {
        uVar13 = lVar6 - 1;
        param_1[0x18] = uVar13;
        if ((int)param_1[0x1c] == 1) {
          if (uVar13 < 0x3d) {
            lVar15 = uVar13 * 0x80;
            lVar6 = lVar15 + 0x4836828;
            uVar13 = (ulong)*(uint *)(&DAT_048368a0 + lVar15);
            lVar15 = lVar15 + 0x4836850;
          }
          else {
            plVar11 = *(long **)(*param_1 + ((lVar6 + param_1[2]) - 0x3eU & param_1[1]) * 8);
            lVar6 = *plVar11;
            lVar15 = plVar11[1];
            uVar13 = plVar11[2];
          }
          param_2[2] = uVar13;
          *param_2 = lVar6;
          param_2[1] = lVar15;
          *(undefined4 *)((long)param_1 + 0xe4) = 2;
          *param_3 = *param_3 | 2;
          goto LAB_00169b04;
        }
LAB_001698fc:
        bVar5 = false;
        *(undefined4 *)((long)param_1 + 0xe4) = 9;
        goto LAB_00169950;
      }
      goto LAB_00169a44;
    }
    break;
  case 5:
    bVar1 = *pbVar12;
    param_1[0x17] = 0;
    param_1[0x1b] = 0;
    *(byte *)(param_1 + 0x1d) = bVar1 >> 7;
    *(undefined4 *)((long)param_1 + 0xe4) = 6;
  case 6:
    local_64 = 0;
    uVar13 = FUN_00169b0c(param_1,&local_64,pbVar12,pbVar14,7,0x10000);
    if (-1 < (long)uVar13) {
      pbVar12 = pbVar12 + uVar13;
      if (local_64 == 0) break;
      if ((char)param_1[0x1d] == '\0') {
        *(undefined4 *)((long)param_1 + 0xe4) = 8;
        uVar13 = param_1[0x17] + 1;
      }
      else {
        FUN_0016bb04(param_1 + 8);
        *(undefined4 *)((long)param_1 + 0xe4) = 7;
        uVar13 = param_1[0x17] << 1 | 1;
      }
      iVar2 = FUN_0016b098(param_1 + 0x13,uVar13,lVar15);
      if (iVar2 == 0) {
        lVar6 = param_1[0x13];
        FUN_0016b2ac(param_1 + 9,*(undefined8 *)(lVar6 + 0x10),*(undefined8 *)(lVar6 + 0x18));
switchD_00169594_default:
        bVar5 = false;
        goto LAB_00169950;
      }
LAB_00169ae8:
      uVar13 = (ulong)iVar2;
    }
    goto LAB_00169a48;
  case 7:
    uVar13 = FUN_00169b84(param_1,param_1 + 9,pbVar12,pbVar14);
    if ((long)uVar13 < 0) goto LAB_00169a48;
    pbVar12 = pbVar12 + uVar13;
    if (param_1[0x17] == 0) {
      *(undefined1 *)param_1[0xc] = 0;
      lVar6 = param_1[0xb];
      lVar9 = param_1[0xc];
LAB_00169770:
      *(long *)(param_1[0x13] + 0x18) = lVar9 - lVar6;
      goto LAB_001698fc;
    }
    break;
  case 8:
    uVar13 = (long)pbVar14 - (long)pbVar12;
    if ((ulong)param_1[0x17] <= (ulong)((long)pbVar14 - (long)pbVar12)) {
      uVar13 = param_1[0x17];
    }
    puVar3 = (undefined1 *)FUN_00168980(param_1[0xc],pbVar12,uVar13);
    uVar7 = param_1[0x17];
    param_1[0xc] = (long)puVar3;
    param_1[0x17] = uVar7 - uVar13;
    if ((long)uVar13 < 0) goto LAB_00169a48;
    pbVar12 = pbVar12 + uVar13;
    if (uVar7 == uVar13) {
      *puVar3 = 0;
      lVar6 = param_1[0xb];
      lVar9 = param_1[0xc];
      goto LAB_00169770;
    }
    break;
  case 9:
    bVar1 = *pbVar12;
    param_1[0x17] = 0;
    param_1[0x1b] = 0;
    *(byte *)(param_1 + 0x1d) = bVar1 >> 7;
    *(undefined4 *)((long)param_1 + 0xe4) = 10;
  case 10:
    local_64 = 0;
    uVar13 = FUN_00169b0c(param_1,&local_64,pbVar12,pbVar14,7,0x10000);
    if (-1 < (long)uVar13) {
      pbVar12 = pbVar12 + uVar13;
      if (local_64 == 0) break;
      if ((char)param_1[0x1d] == '\0') {
        *(undefined4 *)((long)param_1 + 0xe4) = 0xc;
        uVar13 = param_1[0x17] + 1;
      }
      else {
        FUN_0016bb04(param_1 + 8);
        *(undefined4 *)((long)param_1 + 0xe4) = 0xb;
        uVar13 = param_1[0x17] << 1 | 1;
      }
      iVar2 = FUN_0016b098(param_1 + 0x14,uVar13,lVar15);
      if (iVar2 != 0) goto LAB_00169ae8;
      lVar6 = param_1[0x14];
      FUN_0016b2ac(param_1 + 0xe,*(undefined8 *)(lVar6 + 0x10),*(undefined8 *)(lVar6 + 0x18));
      bVar5 = true;
      goto LAB_00169950;
    }
    goto LAB_00169a48;
  case 0xb:
    uVar13 = FUN_00169b84(param_1,param_1 + 0xe,pbVar12,pbVar14);
    if (-1 < (long)uVar13) {
      pbVar12 = pbVar12 + uVar13;
      if (param_1[0x17] != 0) break;
      *(undefined1 *)param_1[0x11] = 0;
LAB_00169a0c:
      *(long *)(param_1[0x14] + 0x18) = param_1[0x11] - param_1[0x10];
      if ((int)param_1[0x1c] == 2) {
        iVar2 = FUN_00169bd4(param_1,param_2);
      }
      else {
        iVar2 = FUN_00169c78(param_1,param_2);
      }
      if (iVar2 == 0) {
        *(undefined4 *)((long)param_1 + 0xe4) = 2;
        *param_3 = *param_3 | 2;
        goto LAB_00169b04;
      }
      goto LAB_00169ae8;
    }
    goto LAB_00169a48;
  case 0xc:
    uVar13 = (long)pbVar14 - (long)pbVar12;
    if ((ulong)param_1[0x17] <= (ulong)((long)pbVar14 - (long)pbVar12)) {
      uVar13 = param_1[0x17];
    }
    puVar3 = (undefined1 *)FUN_00168980(param_1[0x11],pbVar12,uVar13);
    uVar7 = param_1[0x17];
    param_1[0x11] = (long)puVar3;
    param_1[0x17] = uVar7 - uVar13;
    if ((long)uVar13 < 0) goto LAB_00169a48;
    pbVar12 = pbVar12 + uVar13;
    if (uVar7 == uVar13) {
      *puVar3 = 0;
      goto LAB_00169a0c;
    }
    break;
  default:
    goto switchD_00169594_default;
  }
  if (param_6 == 0) {
LAB_00169b04:
    return (long)pbVar12 - (long)param_4;
  }
  goto LAB_00169a44;
}


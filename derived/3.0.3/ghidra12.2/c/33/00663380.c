
undefined8 FUN_00663380(ulong *param_1,int *param_2)

{
  ushort uVar1;
  int iVar2;
  long lVar3;
  undefined4 *puVar4;
  long lVar5;
  uint uVar6;
  undefined8 uVar7;
  uint uVar8;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  short local_40 [8];
  
  if ((long)(param_1[1] - (long)*param_1) < 0xe) {
    lVar3 = FUN_0049e700(param_1,local_40,0xe);
    if (lVar3 == 0xe) goto LAB_0066342c;
    if (DAT_04c7e780 == '\0') {
      return 0x80040200;
    }
    FUN_00444bc0(&local_88,&DAT_04c7e730,1);
    lVar3 = FUN_004446b0(&local_88,"Failed to read header data.",&DAT_0413df78);
    uVar7 = 0x13a;
LAB_006635fc:
    *(char **)(lVar3 + 0x28) =
         "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/ImageUtilities/FileFormats/hkBmpFileFormat.cpp"
    ;
    *(undefined8 *)(lVar3 + 0x30) = uVar7;
    puVar4 = &local_88;
    goto LAB_00663604;
  }
  memcpy(local_40,(void *)*param_1,0xe);
  *param_1 = *param_1 + 0xe;
LAB_0066342c:
  if (local_40[0] != 0x4d42) {
    if (DAT_04c7e780 == '\0') {
      return 0x80040200;
    }
    FUN_00444bc0(&local_88,&DAT_04c7e730,1);
    lVar3 = FUN_004446b0(&local_88,
                         "The file is not a BMP file. Expected magic number {:x}, got {:x}.",
                         &DAT_048e8b88,&DAT_041476da,local_40);
    uVar7 = 0x141;
    goto LAB_006635fc;
  }
  if ((long)(param_1[1] - (long)*param_1) < 0x28) {
    lVar3 = FUN_0049e700(param_1,param_2);
    if (lVar3 != 0x28) {
      if (DAT_04c7e780 == '\0') {
        return 0x80040200;
      }
      FUN_00444bc0(&local_88,&DAT_04c7e730,1);
      lVar3 = FUN_004446b0(&local_88,"Failed to read header data (V3).",&DAT_0413df78);
      uVar7 = 0x149;
      goto LAB_006635fc;
    }
  }
  else {
    memcpy(param_2,(void *)*param_1,0x28);
    *param_1 = *param_1 + 0x28;
  }
  iVar2 = *param_2;
  uVar6 = iVar2 - 0x28;
  if ((int)uVar6 < 0) {
    if (DAT_04c7e780 == '\0') {
      return 0x80040200;
    }
    FUN_00444bc0(&local_88,&DAT_04c7e730,1);
    lVar3 = FUN_004446b0(&local_88,"The file header was shorter than expected.",&DAT_0413df78);
    uVar7 = 0x152;
    goto LAB_006635fc;
  }
  if (0x43 < uVar6) {
    if (0x43 < (long)(param_1[1] - (long)*param_1)) {
      memcpy(&local_88,(void *)*param_1,0x44);
      *param_1 = *param_1 + 0x44;
LAB_0066363c:
      uVar6 = iVar2 - 0x6c;
      uVar8 = 4;
      goto LAB_00663644;
    }
    lVar3 = FUN_0049e700(param_1,&local_88);
    if (lVar3 == 0x44) goto LAB_0066363c;
    if (DAT_04c7e780 == '\0') {
      return 0x80040200;
    }
    FUN_00444bc0(&local_c8,&DAT_04c7e730,1);
    lVar3 = FUN_004446b0(&local_c8,"Failed to read header data (V4).",&DAT_0413df78);
    uVar7 = 0x15d;
    goto LAB_00663970;
  }
  uVar8 = 3;
LAB_00663644:
  lVar3 = (long)(int)uVar6;
  if (param_1[1] < *param_1 + lVar3) {
    lVar5 = FUN_0049e6e0(param_1,lVar3);
    if (lVar5 != lVar3) {
      if (DAT_04c7e780 == '\0') {
        return 0x80040200;
      }
      FUN_00444bc0(&local_c8,&DAT_04c7e730,1);
      lVar3 = FUN_004446b0(&local_c8,"Failed to skip remaining header data.",&DAT_0413df78);
      uVar7 = 0x166;
      goto LAB_00663970;
    }
  }
  else {
    *param_1 = *param_1 + lVar3;
  }
  uVar1 = *(ushort *)((long)param_2 + 0xe);
  param_2[0xb] = (uint)uVar1;
  param_2[0xc] = 0;
  *(undefined2 *)(param_2 + 10) = 0;
  switch(param_2[4]) {
  case 0:
    iVar2 = 0x5e;
    switch(uVar1) {
    case 1:
    case 4:
    case 8:
      *(undefined1 *)(param_2 + 10) = 1;
    case 0x20:
switchD_00663714_caseD_20:
      iVar2 = 0x5c;
    case 0x18:
      param_2[0xc] = iVar2;
      break;
    default:
      goto switchD_006636ec_default;
    }
    goto LAB_00663748;
  case 1:
    if (uVar1 == 8) {
LAB_00663738:
      *(undefined2 *)(param_2 + 10) = 0x101;
      goto switchD_00663714_caseD_20;
    }
    break;
  case 2:
    if (uVar1 == 4) goto LAB_00663738;
    break;
  case 3:
    if ((uVar1 != 0x20) && (uVar1 != 0x10)) break;
    if (uVar8 < 4) {
      if ((long)(param_1[1] - (long)*param_1) < 0xc) {
        lVar3 = FUN_0049e700(param_1,&local_c8,0xc);
        if (lVar3 != 0xc) {
          return 0x80040200;
        }
      }
      else {
        memcpy(&local_c8,(void *)*param_1,0xc);
        *param_1 = *param_1 + 0xc;
      }
      iVar2 = FUN_0065b2c0(local_c8,uStack_c4,local_c0,0,param_2[0xb]);
      param_2[0xc] = iVar2;
    }
    else {
      iVar2 = FUN_0065b2c0(local_88,uStack_84,local_80,uStack_7c);
      param_2[0xc] = iVar2;
    }
    if (iVar2 == 0) break;
LAB_00663748:
    if ((uint)param_2[1] < 0x10001) {
      if ((uint)param_2[2] < 0x10001) {
        uVar6 = param_2[5];
        param_2[0xd] = uVar6;
        if (uVar6 < 0x40000001) {
          uVar8 = param_2[0xb] * param_2[1] + 0x1fU >> 3 & 0x1ffffffc;
          param_2[0xe] = uVar8;
          if (uVar6 != 0) {
            return 0;
          }
          if (param_2[4] == 0) {
            param_2[0xd] = uVar8 * param_2[2];
            return 0;
          }
          if (DAT_04c7e780 == '\0') {
            return 0x80040200;
          }
          FUN_00444bc0(&local_c8,&DAT_04c7e730,1);
          lVar3 = FUN_004446b0(&local_c8,"The data size wasn\'t specified in the header.",
                               &DAT_0413df78);
          uVar7 = 0x1e9;
        }
        else {
          if (DAT_04c7e780 == '\0') {
            return 0x80040200;
          }
          FUN_00444bc0(&local_c8,&DAT_04c7e730,1);
          lVar3 = FUN_004446b0(&local_c8,"Image specifies data size > 1GiB. Header corrupted?",
                               &DAT_0413df78);
          uVar7 = 0x1df;
        }
      }
      else {
        if (DAT_04c7e780 == '\0') {
          return 0x80040200;
        }
        FUN_00444bc0(&local_c8,&DAT_04c7e730,1);
        lVar3 = FUN_004446b0(&local_c8,"Image specifies height > 65536. Header corrupted?",
                             &DAT_0413df78);
        uVar7 = 0x1d7;
      }
    }
    else {
      if (DAT_04c7e780 == '\0') {
        return 0x80040200;
      }
      FUN_00444bc0(&local_c8,&DAT_04c7e730,1);
      lVar3 = FUN_004446b0(&local_c8,"Image specifies width > 65536. Header corrupted?",
                           &DAT_0413df78);
      uVar7 = 0x1cf;
    }
    goto LAB_00663970;
  }
switchD_006636ec_default:
  if (DAT_04c7e780 != '\0') {
    FUN_00444bc0(&local_c8,&DAT_04c7e730,1);
    lVar3 = FUN_004446b0(&local_c8,"Unknown or unsupported BMP encoding.",&DAT_0413df78);
    uVar7 = 0x1c7;
LAB_00663970:
    *(char **)(lVar3 + 0x28) =
         "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/ImageUtilities/FileFormats/hkBmpFileFormat.cpp"
    ;
    *(undefined8 *)(lVar3 + 0x30) = uVar7;
    puVar4 = &local_c8;
LAB_00663604:
    FUN_00444c00(puVar4);
  }
  return 0x80040200;
}


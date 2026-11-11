
undefined8 FUN_00664a00(long *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  int local_a8;
  undefined1 local_a4;
  int local_9c;
  undefined1 auStack_90 [64];
  
  if (param_1[1] - *param_1 < 0x80) {
    lVar4 = FUN_0049e700(param_1,param_2,0x80);
    if (lVar4 != 0x80) {
      if (DAT_04c7e7e8 == '\0') {
        return 0x80040200;
      }
      FUN_00444bc0(auStack_90,&DAT_04c7e798,1);
      lVar4 = FUN_004446b0(auStack_90,"Failed to read file header.",&DAT_0413df78);
      uVar5 = 0xf7;
      goto LAB_00665074;
    }
  }
  else {
    memcpy(param_2,(void *)*param_1,0x80);
    *param_1 = *param_1 + 0x80;
  }
  if (*param_2 != 0x20534444) {
    if (DAT_04c7e7e8 == '\0') {
      return 0x80040200;
    }
    FUN_00444bc0(auStack_90,&DAT_04c7e798,1);
    lVar4 = FUN_004446b0(auStack_90,"The file is not a recognized DDS file.",&DAT_0413df78);
    uVar5 = 0xfd;
    goto LAB_00665074;
  }
  if (param_2[1] != 0x7c) {
    if (DAT_04c7e7e8 == '\0') {
      return 0x80040200;
    }
    FUN_00444bc0(auStack_90,&DAT_04c7e798,1);
    lVar4 = FUN_004446b0(auStack_90,
                         "The file header size {} doesn\'t match the expected size of 124.",
                         &DAT_048e8c18,param_2 + 1);
    uVar5 = 0x103;
    goto LAB_00665074;
  }
  *(byte *)(param_2 + 0x20) = (byte)((uint)param_2[2] >> 3) & 1;
  if (param_2[0x13] != 0x20) {
    if (DAT_04c7e7e8 == '\0') {
      return 0x80040200;
    }
    FUN_00444bc0(auStack_90,&DAT_04c7e798,1);
    lVar4 = FUN_004446b0(auStack_90,
                         "The pixel format size {} doesn\'t match the expected value of 32.",
                         &DAT_048e8c18,param_2 + 0x13);
    uVar5 = 0x10b;
    goto LAB_00665074;
  }
  if (((uint)param_2[0x14] >> 2 & 1) == 0) {
    if ((param_2[0x14] & 0x20043U) == 0) {
      if (DAT_04c7e7e8 == '\0') {
        return 0x80040200;
      }
      FUN_00444bc0(auStack_90,&DAT_04c7e798,1);
      lVar4 = FUN_004446b0(auStack_90,
                           "The image format is neither specified as a pixel mask nor as a FourCC code."
                           ,&DAT_0413df78);
      uVar5 = 0x14b;
      goto LAB_00665074;
    }
    iVar3 = FUN_0065b2c0(param_2[0x17],param_2[0x18],param_2[0x19],param_2[0x1a],param_2[0x16]);
    if (iVar3 == 0) {
      if (DAT_04c7e7e8 == '\0') {
        return 0x80040200;
      }
      FUN_00444bc0(auStack_90,&DAT_04c7e798,1);
      lVar4 = FUN_004446b0(auStack_90,
                           "The pixel mask specified was not recognized (R: 0x{%08x}, G: 0x{%08x}, B: 0x{%08x}, A: 0x{%08x}, BPP: {})."
                           ,&DAT_048e8c28,param_2 + 0x17,param_2 + 0x18,param_2 + 0x19,
                           param_2 + 0x1a,param_2 + 0x16);
      uVar5 = 0x145;
      goto LAB_00665074;
    }
    local_9c = 0;
  }
  else {
    iVar3 = param_2[0x15];
    if (iVar3 < 0x32495441) {
      if (iVar3 < 0x30315844) {
        switch(iVar3) {
        case 0x6f:
          local_9c = 0;
          iVar3 = 0x46;
          break;
        case 0x70:
          local_9c = 0;
          iVar3 = 0x3c;
          break;
        case 0x71:
          local_9c = 0;
          iVar3 = 0x32;
          break;
        case 0x72:
          local_9c = 0;
          iVar3 = 0x28;
          break;
        case 0x73:
          local_9c = 0;
          iVar3 = 0x1e;
          break;
        case 0x74:
          local_9c = 0;
          iVar3 = 10;
          break;
        default:
          if (iVar3 != 0x24) goto LAB_00664f58;
          local_9c = 0;
          iVar3 = 0x35;
        }
      }
      else if (iVar3 == 0x30315844) {
        if (param_1[1] - *param_1 < 0x14) {
          lVar4 = FUN_0049e700(param_1,&local_a8);
          if (lVar4 != 0x14) {
            if (DAT_04c7e7e8 == '\0') {
              return 0x80040200;
            }
            FUN_00444bc0(auStack_90,&DAT_04c7e798,1);
            lVar4 = FUN_004446b0(auStack_90,"Failed to read file header.",&DAT_0413df78);
            uVar5 = 0x11a;
            goto LAB_00665074;
          }
        }
        else {
          memcpy(&local_a8,(void *)*param_1,0x14);
          *param_1 = *param_1 + 0x14;
        }
        iVar3 = FUN_0065b3c0(local_a8);
        if (iVar3 == 0) {
          if (DAT_04c7e7e8 == '\0') {
            return 0x80040200;
          }
          FUN_00444bc0(auStack_90,&DAT_04c7e798,1);
          lVar4 = FUN_004446b0(auStack_90,"The DXGI format {} has no equivalent image format.",
                               &DAT_048e8c18,&local_a8);
          uVar5 = 0x122;
          goto LAB_00665074;
        }
      }
      else if (iVar3 == 0x31495441) {
LAB_00664e6c:
        local_9c = 0;
        iVar3 = 0x96;
      }
      else {
        if (iVar3 != 0x31545844) goto LAB_00664f58;
        local_9c = 0;
        iVar3 = 0x78;
      }
    }
    else if (iVar3 < 0x35545844) {
      if (iVar3 < 0x33545844) {
        if (iVar3 == 0x32495441) goto LAB_00664e60;
        if (iVar3 != 0x32545844) goto LAB_00664f58;
      }
      else if (iVar3 != 0x33545844) {
        if (iVar3 != 0x34545844) {
LAB_00664f58:
          local_a4 = 0;
          if (DAT_04c7e7e8 != '\0') {
            local_a8 = iVar3;
            FUN_00444bc0(auStack_90,&DAT_04c7e798,1);
            lVar4 = FUN_004446b0(auStack_90,"The FourCC code \'{}\' was not recognized.",
                                 &DAT_04866950,&local_a8);
            *(char **)(lVar4 + 0x28) =
                 "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/ImageUtilities/FileFormats/hkDdsFileFormat.cpp"
            ;
            *(undefined8 *)(lVar4 + 0x30) = 0x135;
            FUN_00444c00(auStack_90);
          }
          return 0x80040200;
        }
        goto LAB_00664e54;
      }
      local_9c = 0;
      iVar3 = 0x82;
    }
    else if (iVar3 < 0x53354342) {
      if (iVar3 == 0x35545844) {
LAB_00664e54:
        local_9c = 0;
        iVar3 = 0x8c;
      }
      else {
        if (iVar3 != 0x53344342) goto LAB_00664f58;
        local_9c = 0;
        iVar3 = 0x97;
      }
    }
    else if (iVar3 == 0x53354342) {
      local_9c = 0;
      iVar3 = 0xa1;
    }
    else {
      if (iVar3 == 0x55344342) goto LAB_00664e6c;
      if (iVar3 != 0x55354342) goto LAB_00664f58;
LAB_00664e60:
      local_9c = 0;
      iVar3 = 0xa0;
    }
  }
  uVar1 = param_2[0x1c];
  uVar2 = uVar1 >> 9 & 1;
  *(byte *)(param_2 + 0x22) = *(byte *)(param_2 + 0x1b) >> 3 & 1;
  param_2[0x21] = iVar3;
  *(char *)((long)param_2 + 0x89) = (char)uVar2;
  *(byte *)((long)param_2 + 0x8a) = (byte)(uVar1 >> 0x15) & 1;
  if (((uVar1 >> 0x15 & 1) == 0) || (uVar2 == 0)) {
    if (local_9c < 2) {
      local_9c = 1;
    }
    param_2[0x23] = local_9c;
    return 0;
  }
  if (DAT_04c7e7e8 == '\0') {
    return 0x80040200;
  }
  FUN_00444bc0(auStack_90,&DAT_04c7e798,1);
  lVar4 = FUN_004446b0(auStack_90,"The header specifies both the VOLUME and CUBEMAP flags.",
                       &DAT_0413df78);
  uVar5 = 0x158;
LAB_00665074:
  *(char **)(lVar4 + 0x28) =
       "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/ImageUtilities/FileFormats/hkDdsFileFormat.cpp"
  ;
  *(undefined8 *)(lVar4 + 0x30) = uVar5;
  FUN_00444c00(auStack_90);
  return 0x80040200;
}


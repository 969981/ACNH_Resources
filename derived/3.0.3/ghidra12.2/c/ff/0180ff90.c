
uint FUN_0180ff90(int param_1,char *param_2,long param_3,char *param_4,long param_5,char *param_6,
                 long param_7,char *param_8,long param_9)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  float fVar5;
  float fVar6;
  undefined8 local_a4;
  undefined8 local_9c;
  undefined8 local_94;
  undefined1 uStack_89;
  undefined *local_88;
  undefined *puStack_80;
  undefined8 local_78;
  undefined *local_70;
  undefined8 local_68;
  
  *param_8 = '\0';
  *param_6 = '\0';
  *param_4 = '\0';
  *param_2 = '\0';
  uVar4 = FUN_017f37d0();
  if ((uVar4 & 1) != 0) goto LAB_0180ffe8;
  if (param_1 < 0xe716ff8) {
    if (param_1 < -0x11f68f68) {
      if (param_1 < -0x4772f804) {
        if ((param_1 != -0x7b521843) && (param_1 != -0x74337aab)) {
          iVar2 = -0x66cc4d79;
LAB_0181019c:
          if (param_1 != iVar2) goto LAB_018102f0;
        }
      }
      else if ((param_1 != -0x4772f804) && (param_1 != -0x4701dc58)) {
        iVar2 = -0x196792d8;
        goto LAB_0181019c;
      }
    }
    else if (param_1 < 0x1ac1236) {
      if ((param_1 != -0x11f68f68) && (param_1 != -0xbf1cc08)) {
        iVar2 = 0x5f6c88;
        goto LAB_0181019c;
      }
    }
    else {
      if (0x80e20d7 < param_1) {
        if (param_1 != 0x80e20d8) {
          iVar2 = 0xb6a5301;
          goto LAB_018102e8;
        }
        goto LAB_0180ffe8;
      }
      if (param_1 != 0x1ac1236) {
        iVar2 = 0x427dece;
        goto LAB_0181019c;
      }
    }
LAB_018101a4:
    iVar2 = FUN_017e4f94(param_1);
    if (iVar2 != -1) {
      iVar2 = FUN_017f3600(param_1);
      if (iVar2 == 1) {
LAB_018101c4:
        local_78 = 0;
        local_88 = PTR_DAT_04bbc1a0 + 0x10;
        puStack_80 = PTR_DAT_04bb2010 + 0x10;
        local_68 = 0;
        local_70 = puStack_80;
        FUN_017ba710(param_1,&local_88);
        uVar3 = 1;
        *param_6 = '\x01';
        fVar6 = (float)local_68._4_4_ * 5.0 + 5.0;
        fVar5 = ((float)(int)local_78 * 5.0 + (float)(int)local_68 * 5.0 + 5.0) * 0.5 + -10.0;
        iVar2 = (int)((float)(int)fVar5 / 5.0) - (uint)(fVar5 < 0.0);
        iVar1 = (int)((float)(int)fVar6 / 5.0) - (uint)(fVar6 < 0.0);
        *(int *)(param_7 + 0x10) = iVar2;
        *(int *)(param_7 + 0x14) = iVar1;
        *(int *)(param_7 + 0x20) = iVar2 + 3;
        *(int *)(param_7 + 0x24) = iVar1 + 3;
        goto LAB_0181054c;
      }
      goto LAB_018102f0;
    }
  }
  else {
    if (0x4d702d54 < param_1) {
      if (param_1 < 0x72a13146) {
        if (param_1 != 0x4d702d55) {
          if (param_1 == 0x51b9e069) goto LAB_0180ffe8;
          iVar2 = 0x60c2c4f0;
          goto LAB_0181019c;
        }
      }
      else if (param_1 < 0x7a616e2f) {
        if (param_1 != 0x72a13146) {
          iVar2 = 0x77870a84;
          goto LAB_0181019c;
        }
      }
      else if (param_1 != 0x7c939885) {
        iVar2 = 0x7a616e2f;
        goto LAB_018102e8;
      }
      goto LAB_018101a4;
    }
    if (param_1 < 0x1d096e7d) {
      if (param_1 == 0xe716ff8) goto LAB_018101a4;
      if (param_1 != 0x1490248c) {
        iVar2 = 0x16f2dadc;
        goto LAB_0181019c;
      }
LAB_0180ffe8:
      iVar2 = FUN_017f34c0(param_1);
      if (iVar2 != 1) goto LAB_018102f0;
      goto LAB_018101c4;
    }
    if ((param_1 == 0x1d096e7d) || (param_1 == 0x28c45759)) goto LAB_018101a4;
    iVar2 = 0x2922957e;
LAB_018102e8:
    if (param_1 == iVar2) goto LAB_0180ffe8;
LAB_018102f0:
    local_78 = 0xff7fffffff7fffff;
    local_94 = 0xff7fffffff7fffff;
    local_a4 = 0x7f7fffff7f7fffff;
    local_9c = 0xff7fffff7f7fffff;
    local_88 = (undefined *)0x7f7fffff7f7fffff;
    puStack_80 = (undefined *)0xff7fffff7f7fffff;
    uVar4 = FUN_0180e7f0(param_1,2,&uStack_89,&local_88,param_2,&local_a4);
    if ((uVar4 & 1) != 0) {
      if (*param_2 != '\0') {
        iVar2 = (int)((float)(int)(float)local_a4 / 5.0) - (uint)((float)local_a4 < 0.0);
        iVar1 = (int)((float)(int)(local_94._4_4_ + -20.0) / 5.0) -
                (uint)(local_94._4_4_ + -20.0 < 0.0);
        *(int *)(param_3 + 0x10) = iVar2;
        *(int *)(param_3 + 0x14) = iVar1;
        *(int *)(param_3 + 0x20) = iVar2 + 3;
        *(int *)(param_3 + 0x24) = iVar1 + 3;
      }
      local_a4 = 0x7f7fffff7f7fffff;
      local_9c = 0xff7fffff7f7fffff;
      local_94 = 0xff7fffffff7fffff;
      uVar4 = FUN_0180e7f0(param_1,3,&uStack_89,&local_88,param_4,&local_a4);
      if ((uVar4 & 1) != 0) {
        if (*param_4 != '\0') {
          iVar2 = (int)((float)(int)(local_9c._4_4_ + -20.0) / 5.0) -
                  (uint)(local_9c._4_4_ + -20.0 < 0.0);
          iVar1 = (int)((float)(int)(float)local_9c / 5.0) - (uint)((float)local_9c < 0.0);
          *(int *)(param_5 + 0x10) = iVar2;
          *(int *)(param_5 + 0x14) = iVar1;
          *(int *)(param_5 + 0x20) = iVar2 + 3;
          *(int *)(param_5 + 0x24) = iVar1 + 3;
        }
        local_a4 = 0x7f7fffff7f7fffff;
        local_9c = 0xff7fffff7f7fffff;
        local_94 = 0xff7fffffff7fffff;
        uVar4 = FUN_0180e7f0(param_1,4,&uStack_89,&local_88,param_6,&local_a4);
        if ((uVar4 & 1) != 0) {
          if (*param_6 != '\0') {
            iVar2 = (int)((float)(int)(float)local_a4 / 5.0) - (uint)((float)local_a4 < 0.0);
            iVar1 = (int)((float)(int)local_94._4_4_ / 5.0) - (uint)(local_94._4_4_ < 0.0);
            *(int *)(param_7 + 0x10) = iVar2;
            *(int *)(param_7 + 0x14) = iVar1;
            *(int *)(param_7 + 0x20) = iVar2 + 3;
            *(int *)(param_7 + 0x24) = iVar1 + 3;
          }
          local_a4 = 0x7f7fffff7f7fffff;
          local_9c = 0xff7fffff7f7fffff;
          local_94 = 0xff7fffffff7fffff;
          uVar3 = FUN_0180e7f0(param_1,5,&uStack_89,&local_88,param_8,&local_a4);
          if (((uVar3 & 1) != 0) && (*param_8 != '\0')) {
            iVar2 = (int)((float)(int)local_9c._4_4_ / 5.0) - (uint)(local_9c._4_4_ < 0.0);
            iVar1 = (int)((float)(int)(float)local_9c / 5.0) - (uint)((float)local_9c < 0.0);
            *(int *)(param_9 + 0x10) = iVar2;
            *(int *)(param_9 + 0x14) = iVar1;
            *(int *)(param_9 + 0x20) = iVar2 + 3;
            *(int *)(param_9 + 0x24) = iVar1 + 3;
          }
          goto LAB_0181054c;
        }
      }
    }
  }
  uVar3 = 0;
LAB_0181054c:
  return uVar3 & 1;
}


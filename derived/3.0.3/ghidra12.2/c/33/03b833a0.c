
long * FUN_03b833a0(long *param_1,undefined8 param_2,uint param_3,long *param_4)

{
  undefined *puVar1;
  uint uVar2;
  char cVar3;
  byte bVar4;
  ulong uVar5;
  long lVar6;
  long *__s;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  long *plVar10;
  float fVar11;
  long lVar12;
  undefined1 auVar13 [16];
  float fVar14;
  undefined4 local_88;
  float fStack_84;
  undefined8 local_80;
  char *pcStack_78;
  float local_68;
  char local_64;
  
  local_80 = PTR_DAT_04bb2020 + 0x10;
  pcStack_78 = "Limiter";
  uVar5 = FUN_03b80d00(param_4,&local_80);
  lVar12 = DAT_05ae7600;
  if ((uVar5 & 1) == 0) {
    return (long *)0x0;
  }
  if (DAT_05ae7600 == 0) {
    __s = malloc(0x340);
  }
  else {
    if (param_1 == (long *)0x0) {
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      param_1 = (long *)(lVar12 + 8);
      if (lVar6 != 0) {
        param_1 = (long *)(lVar6 + 0xa8);
      }
      param_1 = (long *)*param_1;
    }
    __s = (long *)(**(code **)(*param_1 + 0x30))(param_1,0x340,8);
  }
  memset(__s,0,0x340);
  puVar1 = PTR_DAT_04bd1f48;
  *(undefined4 *)((long)__s + 0xc) = 0xffffffff;
  *(undefined1 *)(__s + 5) = 1;
  __s[2] = 0;
  __s[3] = 0;
  __s[6] = 0;
  __s[7] = 0;
  __s[8] = 0;
  *(undefined4 *)(__s + 9) = 0;
  *(undefined1 *)((long)__s + 0x59) = 0;
  *(undefined4 *)(__s + 0xc) = 0;
  *__s = (long)(puVar1 + 0x10);
  *(undefined4 *)(__s + 0xe) = 0;
  nn::os::InitializeMutex((MutexType *)(__s + 0xb),true,0);
  *(undefined1 *)(__s + 10) = 1;
  *(undefined1 *)(__s + 5) = 1;
  *(undefined1 *)((long)__s + 0xb4) = 0;
  __s[0xf] = 0;
  __s[0x10] = 0;
  __s[0x11] = 0;
  __s[0x12] = 0;
  *(undefined4 *)(__s + 0x16) = 0x40;
  *(undefined1 *)((long)__s + 0xf3) = 0;
  puVar1 = PTR_DAT_04bb2bc0 + 0x10;
  *(undefined1 *)(__s + 0x1f) = 0;
  __s[0x14] = (long)puVar1;
  __s[0x15] = (long)__s + 0xb4;
  __s[0x24] = (long)__s + 300;
  *(undefined4 *)(__s + 0x25) = 0x20;
  __s[0x20] = 0;
  __s[0x21] = 0;
  puVar1 = PTR_DAT_04bb2028 + 0x10;
  *(undefined1 *)((long)__s + 0x14b) = 0;
  *(undefined1 *)((long)__s + 300) = 0;
  *(undefined1 *)(__s + 0x2d) = 0;
  __s[0x2a] = 0;
  __s[0x2b] = 0;
  __s[0x2c] = 0;
  __s[0x22] = 0;
  __s[0x23] = (long)puVar1;
  __s[0x2e] = 0;
  __s[0x2f] = 0;
  __s[0x30] = 0;
  __s[0x31] = 0;
  __s[0x32] = 0;
  __s[0x33] = 0;
  __s[0x34] = 0;
  __s[0x35] = 0;
  *(undefined4 *)(__s + 0x37) = 0;
  __s[0x38] = 0x60000bb80;
  *(undefined4 *)(__s + 0x39) = 0xf0;
  __s[0x4a] = 0;
  *(undefined1 *)((long)__s + 0x1bc) = 0;
  __s[0x3e] = 0;
  __s[0x42] = 0;
  __s[0x41] = 0;
  *(undefined2 *)(__s + 0x45) = 0;
  __s[100] = 0;
  __s[0x65] = 0;
  __s[99] = 0;
  __s[0x62] = 0;
  __s[0x61] = 0;
  __s[0x60] = 0;
  __s[0x5f] = 0;
  __s[0x5e] = 0;
  __s[0x5d] = 0;
  __s[0x5c] = 0;
  __s[0x5b] = 0;
  __s[0x5a] = 0;
  __s[0x59] = 0;
  __s[0x58] = 0;
  __s[0x57] = 0;
  __s[0x56] = 0;
  __s[0x55] = 0;
  __s[0x54] = 0;
  __s[0x53] = 0;
  __s[0x52] = 0;
  *(undefined4 *)(__s + 0x66) = 0;
  __s[0x3f] = 0;
  __s[0x40] = 0x400000008;
  *(undefined8 *)((long)__s + 0x22c) = 0x3e99999a473b8000;
  *(undefined8 *)((long)__s + 0x234) = 0x3f34fdf43c23d70a;
  *(undefined1 **)((long)__s + 0x23c) = &DAT_3f8000003f800000;
  *(undefined8 *)((long)__s + 0x244) = 0;
  plVar10 = __s + 0x13;
  *plVar10 = (long)&PTR_LAB_04b785d8;
  *__s = (long)&PTR_LAB_04b78500;
  __s[0x36] = (long)&PTR_LAB_04b78628;
  __s[0x44] = (long)&PTR_LAB_04b78650;
  local_80 = (undefined *)((ulong)local_80 & 0xffffff0000000000);
  __s[0x3a] = 0;
  __s[0x3b] = 0;
  __s[0x4d] = 0;
  __s[0x4c] = 0;
  lVar12 = NEON_fmov(0x3f800000,4);
  __s[0x4e] = lVar12;
  auVar13 = NEON_fmov(0x3f800000,4);
  __s[0x3c] = 0;
  __s[0x3d] = 0;
  __s[0x51] = auVar13._8_8_;
  __s[0x50] = auVar13._0_8_;
  bVar4 = FUN_03b36b40(param_4,&local_80,"SampleRate");
  cVar3 = local_80._4_1_;
  iVar9 = (uint)local_80;
  local_80 = (undefined *)((ulong)local_80 & 0xffffff0000000000);
  if ((bVar4 & cVar3 == -0x2f) == 0) {
    iVar9 = 48000;
  }
  bVar4 = FUN_03b36b40(param_4,&local_80,"Channel");
  cVar3 = local_80._4_1_;
  uVar7 = (uint)local_80;
  local_80 = (undefined *)((ulong)local_80 & 0xffffff0000000000);
  if ((bVar4 & cVar3 == -0x2f) == 0) {
    uVar7 = 6;
  }
  bVar4 = FUN_03b36b40(6,param_4,&local_80,"FrameCount");
  cVar3 = local_80._4_1_;
  uVar8 = (uint)local_80;
  local_80 = (undefined *)((ulong)local_80 & 0xffffff0000000000);
  if ((bVar4 & cVar3 == -0x2f) == 0) {
    uVar8 = 5;
  }
  bVar4 = FUN_03b36b40(5,param_4,&local_80,"MaxLookAheadTime");
  cVar3 = local_80._4_1_;
  local_88 = (uint)local_80;
  local_80 = (undefined *)((ulong)local_80 & 0xffffff0000000000);
  if ((bVar4 & cVar3 == -0x2e) == 0) {
    local_88 = 0x40a00000;
  }
  uVar5 = FUN_03b36b40(param_4,&local_80,"ProcessChannels");
  if (((uVar5 & 1) == 0) || (local_80._4_1_ != -0x2f)) {
    FUN_03ba14c0(__s,param_2,param_3 & 1,1,iVar9,uVar7,uVar8);
    fStack_84 = (float)iVar9;
    FUN_03b70080(__s + 0x44,&local_88,param_2,0);
    uVar7 = 0;
  }
  else {
    uVar2 = (uint)local_80;
    lVar12 = (long)(int)(uint)local_80;
    FUN_03ba14c0(__s,param_2,param_3 & 1,1,iVar9,uVar7,uVar8);
    fStack_84 = (float)iVar9;
    FUN_03b70080(__s + 0x44,&local_88,param_2,0);
    if ((6 < uVar2) || ((0x55U >> (ulong)(uVar2 & 0x1f) & 1) == 0)) goto LAB_03b8381c;
    uVar7 = *(undefined4 *)(&DAT_041e816c + lVar12 * 4);
  }
  *(undefined4 *)(__s + 0x66) = uVar7;
LAB_03b8381c:
  local_80 = (undefined *)((ulong)local_80 & 0xffffff0000000000);
  uVar5 = FUN_03b36b40(param_4,&local_80,"Params");
  if ((uVar5 & 1) != 0) {
    if (local_80._4_1_ - 0xc0 < 2) {
      pcStack_78 = (char *)(*param_4 + ((ulong)local_80 & 0xffffffff));
      local_80 = (undefined *)*param_4;
    }
    else {
      if (local_80._4_1_ != 0xff) {
        return plVar10;
      }
      pcStack_78 = (char *)0x0;
      local_80 = (undefined *)*param_4;
    }
    if (local_80 != (undefined *)0x0) {
      local_68 = 0.0;
      local_64 = '\0';
      uVar5 = FUN_03b36b40(&local_80,&local_68,"Threshold");
      fVar14 = local_68;
      if (((uVar5 & 1) != 0) && (local_64 == -0x2e)) {
        fVar11 = powf(10.0,local_68 / 20.0);
        *(float *)(__s + 0x47) = fVar11;
        __s[99] = CONCAT44(fVar11,fVar11);
        __s[0x62] = CONCAT44(fVar11,fVar11);
        __s[0x59] = CONCAT44(fVar11,fVar11);
        if ((float *)__s[100] != (float *)0x0) {
          *(float *)__s[100] = fVar14;
        }
      }
      local_68 = 0.0;
      local_64 = '\0';
      uVar5 = FUN_03b36b40(&local_80,&local_68,"AttackTime");
      if (((uVar5 & 1) != 0) && (local_64 == -0x2e)) {
        fVar14 = 0.0;
        if (0.0 <= local_68) {
          fVar14 = local_68;
        }
        if (fVar14 <= 0.0) {
          fVar11 = 1.0;
        }
        else {
          fVar11 = expf((-1.0 / *(float *)((long)__s + 0x22c)) / (fVar14 / 1000.0));
          fVar11 = 1.0 - fVar11;
        }
        *(float *)(__s + 0x46) = fVar11;
        __s[0x5f] = CONCAT44(fVar11,fVar11);
        __s[0x5e] = CONCAT44(fVar11,fVar11);
        __s[0x57] = CONCAT44(fVar11,fVar11);
        if (__s[100] != 0) {
          *(float *)(__s[100] + 4) = fVar14;
        }
      }
      local_68 = 0.0;
      local_64 = '\0';
      uVar5 = FUN_03b36b40(&local_80,&local_68,"ReleaseTime");
      if (((uVar5 & 1) != 0) && (local_64 == -0x2e)) {
        fVar14 = 0.0;
        if (0.0 <= local_68) {
          fVar14 = local_68;
        }
        if (fVar14 <= 0.0) {
          fVar11 = 1.0;
        }
        else {
          fVar11 = expf((-1.0 / *(float *)((long)__s + 0x22c)) / (fVar14 / 1000.0));
          fVar11 = 1.0 - fVar11;
        }
        *(float *)((long)__s + 0x234) = fVar11;
        __s[0x61] = CONCAT44(fVar11,fVar11);
        __s[0x60] = CONCAT44(fVar11,fVar11);
        __s[0x58] = CONCAT44(fVar11,fVar11);
        if (__s[100] != 0) {
          *(float *)(__s[100] + 8) = fVar14;
        }
      }
      local_68 = 0.0;
      local_64 = '\0';
      uVar5 = FUN_03b36b40(&local_80,&local_68,"LookAheadTime");
      if (((uVar5 & 1) != 0) && (local_64 == -0x2e)) {
        iVar9 = (int)((local_68 / 1000.0) * *(float *)((long)__s + 0x22c));
        if (iVar9 < 2) {
          iVar9 = 1;
        }
        if (iVar9 <= (int)__s[0x49]) {
          *(int *)((long)__s + 0x244) = iVar9;
          if (__s[100] != 0) {
            *(float *)(__s[100] + 0xc) = local_68;
          }
        }
      }
      local_68 = 0.0;
      local_64 = '\0';
      uVar5 = FUN_03b36b40(&local_80,&local_68,"InputGain");
      fVar14 = local_68;
      if (((uVar5 & 1) != 0) && (local_64 == -0x2e)) {
        fVar11 = 0.0;
        if (-90.309 <= local_68) {
          fVar11 = powf(10.0,local_68 * 0.05);
        }
        *(float *)((long)__s + 0x23c) = fVar11;
        __s[0x5b] = CONCAT44(fVar11,fVar11);
        __s[0x5a] = CONCAT44(fVar11,fVar11);
        __s[0x55] = CONCAT44(fVar11,fVar11);
        if (__s[100] != 0) {
          *(float *)(__s[100] + 0x14) = fVar14;
        }
      }
      local_68 = 0.0;
      local_64 = '\0';
      uVar5 = FUN_03b36b40(&local_80,&local_68,"OutputGain");
      fVar14 = local_68;
      if (((uVar5 & 1) != 0) && (local_64 == -0x2e)) {
        fVar11 = 0.0;
        if (-90.309 <= local_68) {
          fVar11 = powf(10.0,local_68 * 0.05);
        }
        *(float *)(__s + 0x48) = fVar11;
        __s[0x5d] = CONCAT44(fVar11,fVar11);
        __s[0x5c] = CONCAT44(fVar11,fVar11);
        __s[0x56] = CONCAT44(fVar11,fVar11);
        if (__s[100] != 0) {
          *(float *)(__s[100] + 0x18) = fVar14;
        }
      }
      local_68 = 0.0;
      local_64 = '\0';
      uVar5 = FUN_03b36b40(&local_80,&local_68,&DAT_040cc7fc);
      if (((uVar5 & 1) != 0) && (local_64 == -0x30)) {
        *(bool *)((long)__s + 0x229) = local_68 != 0.0;
      }
    }
  }
  return plVar10;
}


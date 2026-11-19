
long * FUN_03b81470(long *param_1,undefined8 param_2,uint param_3,long *param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  char cVar4;
  byte bVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  long *plVar13;
  float fVar14;
  undefined4 local_80;
  float fStack_7c;
  undefined8 local_78;
  char *pcStack_70;
  float local_68;
  char local_64;
  
  local_78 = PTR_DAT_04bb2020 + 0x10;
  pcStack_70 = "Chorus";
  uVar6 = FUN_03b80d00(param_4,&local_78);
  lVar3 = DAT_05ae7600;
  if ((uVar6 & 1) == 0) {
    return (long *)0x0;
  }
  if (DAT_05ae7600 == 0) {
    plVar8 = malloc(0xa70);
  }
  else {
    if (param_1 == (long *)0x0) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      puVar2 = (undefined8 *)(lVar3 + 8);
      if (lVar7 != 0) {
        puVar2 = (undefined8 *)(lVar7 + 0xa8);
      }
      param_1 = (long *)*puVar2;
      plVar8 = (long *)0x0;
      if (param_1 == (long *)0x0) goto LAB_03b8153c;
    }
    plVar8 = (long *)(**(code **)(*param_1 + 0x30))(param_1,0xa70,8);
  }
LAB_03b8153c:
  memset(plVar8 + 1,0,0xa68);
  puVar1 = PTR_DAT_04bd1f48;
  *(undefined4 *)((long)plVar8 + 0xc) = 0xffffffff;
  *(undefined1 *)(plVar8 + 5) = 1;
  plVar8[2] = 0;
  plVar8[3] = 0;
  plVar8[6] = 0;
  plVar8[7] = 0;
  plVar8[8] = 0;
  *(undefined4 *)(plVar8 + 9) = 0;
  *(undefined1 *)((long)plVar8 + 0x59) = 0;
  *(undefined4 *)(plVar8 + 0xc) = 0;
  *plVar8 = (long)(puVar1 + 0x10);
  *(undefined4 *)(plVar8 + 0xe) = 0;
  nn::os::InitializeMutex((MutexType *)(plVar8 + 0xb),true,0);
  *(undefined1 *)(plVar8 + 10) = 1;
  *(undefined1 *)(plVar8 + 5) = 1;
  plVar8[0xf] = 0;
  plVar8[0x10] = 0;
  plVar8[0x11] = 0;
  plVar8[0x12] = 0;
  *(undefined1 *)((long)plVar8 + 0xb4) = 0;
  *(undefined4 *)(plVar8 + 0x16) = 0x40;
  *(undefined1 *)((long)plVar8 + 0xf3) = 0;
  puVar1 = PTR_DAT_04bb2bc0 + 0x10;
  *(undefined1 *)(plVar8 + 0x1f) = 0;
  *(undefined1 *)((long)plVar8 + 0x14b) = 0;
  plVar8[0x14] = (long)puVar1;
  plVar8[0x15] = (long)plVar8 + 0xb4;
  plVar8[0x24] = (long)plVar8 + 300;
  *(undefined4 *)(plVar8 + 0x25) = 0x20;
  plVar8[0x20] = 0;
  plVar8[0x21] = 0;
  puVar1 = PTR_DAT_04bb2028 + 0x10;
  *(undefined1 *)((long)plVar8 + 300) = 0;
  *(undefined1 *)(plVar8 + 0x2d) = 0;
  plVar8[0x2a] = 0;
  plVar8[0x2b] = 0;
  plVar8[0x2c] = 0;
  plVar8[0x2e] = 0;
  plVar8[0x2f] = 0;
  plVar8[0x22] = 0;
  plVar8[0x23] = (long)puVar1;
  plVar8[0x30] = 0;
  plVar8[0x31] = 0;
  plVar8[0x32] = 0;
  plVar8[0x33] = 0;
  plVar8[0x34] = 0;
  plVar8[0x35] = 0;
  *(undefined4 *)(plVar8 + 0x37) = 0;
  plVar8[0x38] = 0x60000bb80;
  *(undefined4 *)(plVar8 + 0x39) = 0xf0;
  *(undefined1 *)((long)plVar8 + 0x1bc) = 0;
  plVar8[0x3e] = 0;
  plVar8[0x42] = 0;
  plVar8[0x41] = 0;
  *(undefined2 *)(plVar8 + 0x44) = 0;
  *(undefined1 *)((long)plVar8 + 0x244) = 1;
  plVar8[0x49] = 0;
  plVar8[0x4a] = 0;
  plVar8[0x4b] = 0;
  plVar8[0x4c] = 0;
  *(undefined4 *)(plVar8 + 0x4d) = 0;
  plVar8[0x3f] = 0;
  plVar8[0x40] = 0x400000008;
  plVar13 = plVar8 + 0x13;
  *plVar13 = (long)&PTR_LAB_04b78448;
  *(undefined8 *)((long)plVar8 + 0x224) = 0x42480000473b8000;
  *(undefined8 *)((long)plVar8 + 0x22c) = 0x3f33333340000000;
  *(undefined8 *)((long)plVar8 + 0x234) = 0x3dcccccd3f000000;
  *(undefined8 *)((long)plVar8 + 0x23c) = 0x3f0000003e99999a;
  *plVar8 = (long)&PTR_LAB_04b78378;
  plVar8[0x36] = (long)&PTR_LAB_04b78498;
  plVar8[0x43] = (long)&PTR_LAB_04b784c0;
  local_78 = (undefined *)((ulong)local_78 & 0xffffff0000000000);
  plVar8[0x3a] = 0;
  plVar8[0x3b] = 0;
  plVar8[0x3c] = 0;
  plVar8[0x3d] = 0;
  bVar5 = FUN_03b36b40(param_4,&local_78,"SampleRate");
  cVar4 = local_78._4_1_;
  iVar9 = (int)local_78;
  local_78 = (undefined *)((ulong)local_78 & 0xffffff0000000000);
  if ((bVar5 & cVar4 == -0x2f) == 0) {
    iVar9 = 48000;
  }
  bVar5 = FUN_03b36b40(param_4,&local_78,"Channel");
  cVar4 = local_78._4_1_;
  uVar10 = (int)local_78;
  local_78 = (undefined *)((ulong)local_78 & 0xffffff0000000000);
  if ((bVar5 & cVar4 == -0x2f) == 0) {
    uVar10 = 6;
  }
  bVar5 = FUN_03b36b40(6,param_4,&local_78,"FrameCount");
  cVar4 = local_78._4_1_;
  uVar11 = (int)local_78;
  local_78 = (undefined *)((ulong)local_78 & 0xffffff0000000000);
  if ((bVar5 & cVar4 == -0x2f) == 0) {
    uVar11 = 5;
  }
  bVar5 = FUN_03b36b40(5,param_4,&local_78,"MaxDelayTime");
  local_80 = (int)local_78;
  if ((bVar5 & local_78._4_1_ == -0x2e) == 0) {
    local_80 = 0x42480000;
  }
  FUN_03ba14c0(plVar8,param_2,param_3 & 1,1,iVar9,uVar10,uVar11);
  fStack_7c = (float)iVar9;
  FUN_03b82920(plVar8 + 0x43,&local_80,param_2);
  local_78 = (undefined *)((ulong)local_78 & 0xffffff0000000000);
  uVar6 = FUN_03b36b40(param_4,&local_78,"Params");
  if ((uVar6 & 1) != 0) {
    if (local_78._4_1_ - 0xc0 < 2) {
      pcStack_70 = (char *)(*param_4 + ((ulong)local_78 & 0xffffffff));
      local_78 = (undefined *)*param_4;
    }
    else {
      if (local_78._4_1_ != 0xff) {
        return plVar13;
      }
      pcStack_70 = (char *)0x0;
      local_78 = (undefined *)*param_4;
    }
    if (local_78 != (undefined *)0x0) {
      local_68 = 0.0;
      local_64 = '\0';
      uVar6 = FUN_03b36b40(&local_78,&local_68,"DelayTime");
      if (((((uVar6 & 1) != 0) && (local_64 == -0x2e)) && (0.0 <= local_68)) &&
         (local_68 <= *(float *)(plVar8 + 0x45))) {
        *(float *)((long)plVar8 + 0x22c) = local_68;
        iVar12 = (int)((local_68 * *(float *)((long)plVar8 + 0x224)) / 1000.0);
        iVar9 = (int)plVar8[0x4b] - iVar12;
        *(int *)((long)plVar8 + 0x254) = iVar12;
        fVar14 = (float)iVar9;
        *(float *)((long)plVar8 + 0x25c) = fVar14;
        if (iVar9 < 0) {
          *(float *)((long)plVar8 + 0x25c) = fVar14 + (float)(int)plVar8[0x4a];
        }
        *(float *)(plVar8 + 0x4d) = *(float *)(plVar8 + 0x46) * (float)iVar12;
      }
      local_68 = 0.0;
      local_64 = '\0';
      uVar6 = FUN_03b36b40(&local_78,&local_68,"Depth");
      if ((((uVar6 & 1) != 0) && (local_64 == -0x2e)) && ((0.0 <= local_68 && (local_68 <= 1.0)))) {
        *(float *)(plVar8 + 0x46) = local_68;
        *(float *)(plVar8 + 0x4d) = local_68 * (float)*(int *)((long)plVar8 + 0x254);
      }
      local_68 = 0.0;
      local_64 = '\0';
      uVar6 = FUN_03b36b40(&local_78,&local_68,&DAT_0407bfe5);
      if ((((uVar6 & 1) != 0) && (local_64 == -0x2e)) && (0.0 <= local_68)) {
        *(float *)((long)plVar8 + 0x234) = local_68;
        *(int *)((long)plVar8 + 0x264) =
             (int)(local_68 * (4.2949673e+09 / *(float *)((long)plVar8 + 0x224)));
      }
      local_68 = 0.0;
      local_64 = '\0';
      uVar6 = FUN_03b36b40(&local_78,&local_68,"FeedbackGain");
      if (((((uVar6 & 1) != 0) && (local_64 == -0x2e)) && (0.0 <= local_68)) && (local_68 < 1.0)) {
        *(float *)(plVar8 + 0x47) = local_68;
      }
      local_68 = 0.0;
      local_64 = '\0';
      uVar6 = FUN_03b36b40(&local_78,&local_68,"CrossFeedbackGain");
      if ((((uVar6 & 1) != 0) && (local_64 == -0x2e)) && ((0.0 <= local_68 && (local_68 < 1.0)))) {
        *(float *)((long)plVar8 + 0x23c) = local_68;
      }
      local_68 = 0.0;
      local_64 = '\0';
      uVar6 = FUN_03b36b40(&local_78,&local_68,"FlipLfoPhaseEnabled");
      if (((uVar6 & 1) != 0) && (local_64 == -0x30)) {
        *(bool *)((long)plVar8 + 0x244) = local_68 != 0.0;
      }
    }
  }
  return plVar13;
}


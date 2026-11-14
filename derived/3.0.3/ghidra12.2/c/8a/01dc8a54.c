
void FUN_01dc8a54(void *param_1,undefined8 param_2,ulong *param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  uint uVar4;
  ulong uVar5;
  CalendarTime *pCVar7;
  long lVar6;
  void *__s;
  long lVar8;
  byte bVar9;
  float fVar10;
  float fVar11;
  undefined **local_7c0;
  undefined1 auStack_7b8 [1876];
  uint local_64;
  uint local_60;
  uint local_5c;
  int local_58;
  ulong local_38;
  
  lVar8 = DAT_04da6480;
  pCVar7 = (CalendarTime *)&local_7c0;
  local_38 = *param_3;
  if ((local_38 & 0xffff) == 0) {
    *(ulong *)(DAT_04da6480 + 0x4060) = local_38;
LAB_01dc8b40:
    local_7c0 = (undefined **)CONCAT17(local_7c0._7_1_,0x10107d0);
  }
  else {
    lVar8 = *(long *)(*(long *)PTR_DAT_04bb47c8 + 0x188);
    if (*(char *)(*(long *)PTR_DAT_04bb47c8 + 0x1a1) == '\0') {
      lVar8 = -1;
    }
    fVar10 = (float)(long)(lVar8 - param_3[2]) / 1000.0;
    fVar11 = 0.5;
    if (fVar10 < 0.0) {
      fVar11 = -0.5;
    }
    lVar8 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_38);
    local_7c0 = (undefined **)(lVar8 + (int)(fVar10 + fVar11));
    local_38 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_7c0);
    lVar8 = *(long *)PTR_DAT_04bb32e8;
    *(ulong *)(lVar8 + 0x4060) = local_38;
    if (((local_38 & 0xffff) == 0) ||
       (uVar5 = nn::time::IsValidDate
                          ((int)(short)local_38,((int)local_38 << 8) >> 0x18,(int)local_38 >> 0x18),
       (uVar5 & 1) == 0)) goto LAB_01dc8b40;
    pCVar7 = (CalendarTime *)(lVar8 + 0x4060);
  }
  lVar6 = nn::time::ToPosixTimeFromUtc(pCVar7);
  *(long *)(lVar8 + 0x18) = lVar6;
  *(long *)(lVar8 + 0x30) =
       (lVar6 - *(long *)(lVar8 + 8)) * 1000000000 -
       (*(long *)(lVar8 + 0x20) + *(long *)(lVar8 + 0x28));
  *(ulong *)(lVar8 + 0x4068) = param_3[1];
  *(int *)((long)param_1 + 600) = (int)param_3[3];
  lVar8 = DAT_052c21a0;
  if (*(short *)(DAT_052c21a0 + 0x78) != *(short *)((long)param_3 + 0x1c)) {
    *(undefined2 *)(DAT_052c21a0 + 0x78) = *(undefined2 *)((long)param_3 + 0x1c);
    *(undefined1 *)(lVar8 + 0x7a) = 1;
  }
  memcpy(param_1,(void *)((long)param_3 + 0x96c),0xd8);
  uVar5 = param_3[5];
  lVar8 = *(long *)PTR_DAT_04bb27b8;
  *(ulong *)(lVar8 + 0x40) = param_3[4];
  *(ulong *)(lVar8 + 0x48) = uVar5;
  bVar9 = (byte)param_3[6];
  if (7 < bVar9) {
    bVar9 = 0xff;
  }
  *(byte *)(lVar8 + 0x50) = bVar9;
  *(undefined2 *)(lVar8 + 0x51) = *(undefined2 *)((long)param_3 + 0x31);
  lVar8 = DAT_053cfba8;
  DAT_05407620 = *(undefined4 *)((long)param_3 + 0x34);
  DAT_05407634 = (undefined4)param_3[8];
  DAT_05407624 = (undefined4)param_3[7];
  DAT_05407628 = *(undefined4 *)((long)param_3 + 0x3c);
  DAT_05453f78 = *(undefined4 *)((long)param_3 + 0x44);
  DAT_05453f7c = (undefined4)param_3[9];
  DAT_053fee48 = *(undefined4 *)((long)param_3 + 0x4c);
  DAT_053ff9e8 = (undefined4)param_3[10];
  DAT_05400588 = *(undefined4 *)((long)param_3 + 0x54);
  DAT_05401128 = (undefined4)param_3[0xb];
  DAT_05401cc8 = *(undefined4 *)((long)param_3 + 0x5c);
  DAT_05402868 = (undefined4)param_3[0xc];
  DAT_05403408 = *(undefined4 *)((long)param_3 + 100);
  DAT_05403fa8 = (undefined4)param_3[0xd];
  DAT_05404b48 = *(undefined4 *)((long)param_3 + 0x6c);
  DAT_054056e8 = (undefined4)param_3[0xe];
  DAT_0545404c = 0;
  DAT_05453f80 = 0x400000000;
  DAT_0545403c = 0;
  DAT_05454044 = 0;
  DAT_0545402c = 0;
  DAT_05454034 = 0;
  DAT_0545401c = 0;
  DAT_05454024 = 0;
  DAT_0545400c = 0;
  DAT_05454014 = 0;
  DAT_05453ffc = 0;
  DAT_05454004 = 0;
  DAT_05453f88 = 0xffffffff;
  DAT_05453fd8 = 0;
  DAT_05453fe0 = 0;
  DAT_05453fe8 = 0;
  DAT_05453fc8 = 0;
  DAT_05453fd0 = 0;
  DAT_05453f92 = 0x101;
  DAT_05453fb8 = 0;
  DAT_05453fc0 = 0;
  DAT_05453f90 = 0;
  DAT_05453fa8 = 0;
  DAT_05453fb0 = 0;
  DAT_05453f96 = 0;
  DAT_05453f98 = 0;
  DAT_05453fa0 = 0;
  DAT_05454050 = 0;
  DAT_05454054 = 0;
  DAT_05453ff4 = *(undefined4 *)((long)param_3 + 0x7c);
  DAT_05453ff8 = (undefined4)param_3[0x10];
  DAT_05454550._0_4_ = *(undefined4 *)((long)param_3 + 0x84);
  DAT_05454828 = (undefined4)param_3[0x11];
  DAT_05454b00 = *(undefined4 *)((long)param_3 + 0x8c);
  DAT_05454dd8 = (undefined4)param_3[0x12];
  DAT_054550b0 = *(undefined4 *)((long)param_3 + 0x94);
  DAT_05455388 = (undefined4)param_3[0x13];
  DAT_05455660 = *(undefined4 *)((long)param_3 + 0x9c);
  DAT_05455938 = (undefined4)param_3[0x14];
  DAT_05455c10 = *(undefined4 *)((long)param_3 + 0xa4);
  DAT_05455ee8 = (undefined4)param_3[0x15];
  DAT_054561c0 = *(undefined4 *)((long)param_3 + 0xac);
  DAT_05456498 = (undefined4)param_3[0x16];
  DAT_05456770 = *(undefined4 *)((long)param_3 + 0xb4);
  DAT_05456a48 = (undefined4)param_3[0x17];
  DAT_05456d20 = *(undefined4 *)((long)param_3 + 0xbc);
  DAT_05456ff8 = (undefined4)param_3[0x18];
  DAT_054572d0 = *(undefined4 *)((long)param_3 + 0xc4);
  DAT_05454134 = *(undefined4 *)((long)param_3 + 0x74);
  DAT_05454138 = (undefined2)param_3[0xf];
  if (DAT_053cfba8 != 0) {
    FUN_0205b138(DAT_053cfba8);
    FUN_0205ba20(lVar8,param_3 + 0x19,0);
    FUN_0205ba20(lVar8,(long)param_3 + 0xe4,1);
    FUN_0205ba20(lVar8,param_3 + 0x20,2);
    FUN_0205ba20(lVar8,(long)param_3 + 0x11c,3);
    FUN_0205ba20(lVar8,param_3 + 0x27,4);
    FUN_0205ba20(lVar8,(long)param_3 + 0x154,5);
    FUN_0205ba20(lVar8,param_3 + 0x2e,6);
    FUN_0205ba20(lVar8,(long)param_3 + 0x18c,7);
    FUN_0205ba20(lVar8,param_3 + 0x35,8);
    FUN_0205ba20(lVar8,(long)param_3 + 0x1c4,9);
  }
  if ((*(int *)(PTR_DAT_04bc3a80 + 0x38) != -0x3f5c743d) &&
     ((*(int *)(PTR_DAT_04bc3a80 + 0x38) != -0x2f1ac06c || (*(int *)(DAT_05351250 + 0xb0) == 0)))) {
    if (DAT_04c487d4 == -1) goto LAB_01dc9020;
    local_7c0 = (undefined **)CONCAT44(local_7c0._4_4_,0x20);
    puVar1 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8;
    if (0xff < (uint)(int)DAT_04c487d4) {
      puVar1 = PTR_DAT_04bc39f8;
    }
    if ((*(uint *)(puVar1 + 4) & 1) == 0) goto LAB_01dc9020;
  }
  lVar8 = *(long *)PTR_DAT_04bb5da0;
  local_7c0 = &PTR_LAB_049ff3a8;
  memset(auStack_7b8,0,0x754);
  uVar4 = nn::os::GetSystemTick();
  local_64 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 1;
  local_60 = (local_64 ^ local_64 >> 0x1e) * 0x6c078965 + 2;
  local_5c = (local_60 ^ local_60 >> 0x1e) * 0x6c078965 + 3;
  local_58 = (local_5c ^ local_5c >> 0x1e) * 0x6c078965 + 4;
  __s = (void *)FUN_01a451fc(&local_7c0);
  memset(__s,0,0x754);
  memcpy(auStack_7b8,param_3 + 0x3d,0x754);
  uVar5 = param_3[0x3c];
  uVar3 = *(undefined4 *)((long)param_3 + 0x1e4);
  memmove((void *)(lVar8 + 8),param_3 + 0x3d,0x754);
  *(int *)(lVar8 + 0x770) = (int)uVar5;
  *(undefined4 *)(lVar8 + 0x774) = uVar3;
  FUN_013fd900(*(undefined8 *)PTR_DAT_04bb3d80);
LAB_01dc9020:
  uVar2 = *(undefined8 *)((long)param_3 + 0x944);
  lVar8 = *(long *)PTR_DAT_04bb4910;
  *(undefined8 *)(lVar8 + 0x1c) = *(undefined8 *)((long)param_3 + 0x93c);
  *(undefined8 *)(lVar8 + 0x24) = uVar2;
  DAT_05454144 = *(undefined1 *)((long)param_3 + 0x94c);
  DAT_05454145 = *(undefined1 *)((long)param_3 + 0x94d);
  DAT_05454146 = FUN_020fd7d8((long)param_3 + 0x94c);
  DAT_05454148 = (undefined4)param_3[0x12a];
  DAT_0545415c = *(undefined1 *)((long)param_3 + 0x964);
  DAT_0545414c = *(undefined1 *)((long)param_3 + 0x954);
  DAT_0545414d = *(undefined1 *)((long)param_3 + 0x955);
  DAT_0545414e = FUN_020fd7d8((long)param_3 + 0x954);
  DAT_05454150 = (undefined4)param_3[299];
  DAT_0545415d = *(undefined1 *)((long)param_3 + 0x965);
  DAT_05454154 = *(undefined1 *)((long)param_3 + 0x95c);
  DAT_05454155 = *(undefined1 *)((long)param_3 + 0x95d);
  DAT_05454156 = FUN_020fd7d8((long)param_3 + 0x95c);
  DAT_05454158 = (undefined4)param_3[300];
  DAT_0545415e = *(undefined1 *)((long)param_3 + 0x966);
  *(int *)(*(long *)PTR_DAT_04bb4408 + 0x4034) = (int)param_3[0x12d];
  return;
}



undefined8
FUN_01cf5450(undefined8 *param_1,undefined4 *param_2,long param_3,undefined4 *param_4,byte *param_5)

{
  uint *puVar1;
  undefined4 uVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  byte *pbVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 uVar12;
  byte bVar13;
  byte local_7c [4];
  uint local_78 [6];
  undefined8 local_60;
  bool local_54 [4];
  
  local_78[0] = (uint)*(byte *)(param_3 + 0x8a5);
  if (local_78[0] < 3) {
    uVar12 = 0;
  }
  else {
    uVar12 = 99;
    if ((local_78[0] + 0x61 & 0xff) != 4) {
      uVar12 = (char)(local_78[0] + 0x61);
    }
  }
  bVar13 = *param_5;
  if (*param_5 < 8) goto LAB_01cf55a0;
  bVar13 = DAT_0548e140;
  if (DAT_04cd19d8 == 0) {
joined_r0x01cf552c:
    if (bVar13 < 8) goto LAB_01cf55a0;
  }
  else {
    pbVar8 = PTR_DAT_04bb32e0;
    if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
      pbVar8 = (byte *)(DAT_04cd19d8 + 0x158);
    }
    bVar13 = *pbVar8;
    if (*pbVar8 < 8) goto LAB_01cf55a0;
    if ((*(int *)(DAT_04cd19d8 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
      bVar13 = *(byte *)(DAT_054f5738 + 0x11a5);
      goto joined_r0x01cf552c;
    }
  }
  if (DAT_0537d558 != (long *)0x0) {
    lVar9 = *DAT_0537d558;
    bVar13 = *(byte *)(lVar9 + 0x473);
    pbVar8 = PTR_DAT_04bb5038;
    if ((long)(char)bVar13 != 0xffffffffffffffff) {
      puVar1 = (uint *)(lVar9 + 0x48) + ((long)(char)bVar13 & 0xffffffffU) * 0x20;
      if (7 < bVar13) {
        puVar1 = (uint *)(lVar9 + 0x48);
      }
      if ((*puVar1 & 8) != 0) {
        pbVar8 = (byte *)(lVar9 + 0x471);
      }
    }
    bVar13 = *pbVar8;
    if (*pbVar8 < 8) goto LAB_01cf55a0;
  }
  bVar13 = DAT_0548e168;
  if (7 < DAT_0548e168) {
    bVar13 = 0xff;
  }
LAB_01cf55a0:
  *(undefined1 *)(param_1 + 1) = 1;
  *param_1 = 0x2200000902;
  FUN_01cfe950(param_1,param_2,param_3 + 8);
  param_1[0xd] = 0;
  *(undefined1 *)((long)param_1 + 0x67) = uVar12;
  *(undefined1 *)((long)param_1 + 0x74) = 1;
  *(undefined4 *)(param_1 + 0xe) = 0;
  if (bVar13 < 8) {
    local_7c[0] = bVar13;
    uVar6 = FUN_007b39a4(local_78,local_7c);
    if ((uVar6 & 1) != 0) {
      local_54[0] = false;
      iVar5 = nn::account::IsNetworkServiceAccountAvailable(local_54,(UserHandle *)local_78);
      if (((iVar5 == 0) && (local_54[0] != false)) &&
         (iVar5 = nn::account::GetNetworkServiceAccountId
                            ((NetworkServiceAccountId *)&local_60,(UserHandle *)local_78),
         iVar5 == 0)) {
        param_1[0xf] = local_60;
        uVar7 = nn::oe::GetDesiredLanguage();
        param_1[0x10] = 0;
        *(char *)((long)param_1 + 0x86) = (char)((ulong)uVar7 >> 0x30);
        *(int *)(param_1 + 0x10) = (int)uVar7;
        *(short *)((long)param_1 + 0x84) = (short)((ulong)uVar7 >> 0x20);
        *(undefined4 *)(param_1 + 0xd) = *param_4;
        *(undefined4 *)((long)param_1 + 0x6c) = param_4[1];
        *(undefined4 *)(param_1 + 0xe) = param_4[2];
        memset(param_1 + 0x11,0,0x408);
        *param_2 = *(undefined4 *)param_1;
        param_2[1] = *(undefined4 *)((long)param_1 + 4);
        uVar12 = *(undefined1 *)(param_1 + 1);
        *(undefined8 *)(param_2 + 8) = 0;
        *(undefined8 *)((long)param_2 + 0x19) = 0;
        *(undefined8 *)((long)param_2 + 0x11) = 0;
        *(undefined8 *)((long)param_2 + 9) = 0;
        *(undefined1 *)(param_2 + 2) = uVar12;
        uVar7 = *(undefined8 *)((long)param_1 + 0x11);
        uVar10 = *(undefined8 *)((long)param_1 + 0x19);
        uVar11 = *(undefined8 *)((long)param_1 + 0x1f);
        *(undefined8 *)((long)param_2 + 9) = *(undefined8 *)((long)param_1 + 9);
        *(undefined8 *)((long)param_2 + 0x1f) = uVar11;
        *(undefined8 *)((long)param_2 + 0x19) = uVar10;
        *(undefined8 *)((long)param_2 + 0x11) = uVar7;
        *(undefined1 *)(param_2 + 10) = *(undefined1 *)(param_1 + 5);
        uVar12 = *(undefined1 *)((long)param_1 + 0x29);
        *(undefined8 *)((long)param_2 + 0x5f) = 0;
        *(undefined8 *)((long)param_2 + 0x5a) = 0;
        *(undefined8 *)((long)param_2 + 0x52) = 0;
        *(undefined8 *)((long)param_2 + 0x4a) = 0;
        *(undefined8 *)((long)param_2 + 0x42) = 0;
        *(undefined8 *)((long)param_2 + 0x3a) = 0;
        *(undefined8 *)((long)param_2 + 0x32) = 0;
        *(undefined8 *)((long)param_2 + 0x2a) = 0;
        *(undefined1 *)((long)param_2 + 0x29) = uVar12;
        uVar7 = *(undefined8 *)((long)param_1 + 0x32);
        uVar10 = *(undefined8 *)((long)param_1 + 0x3a);
        uVar11 = *(undefined8 *)((long)param_1 + 0x42);
        *(undefined8 *)((long)param_2 + 0x2a) = *(undefined8 *)((long)param_1 + 0x2a);
        *(undefined8 *)((long)param_2 + 0x42) = uVar11;
        *(undefined8 *)((long)param_2 + 0x3a) = uVar10;
        *(undefined8 *)((long)param_2 + 0x32) = uVar7;
        uVar7 = *(undefined8 *)((long)param_1 + 0x52);
        uVar10 = *(undefined8 *)((long)param_1 + 0x5a);
        uVar2 = *(undefined4 *)((long)param_1 + 0x62);
        *(undefined8 *)((long)param_2 + 0x4a) = *(undefined8 *)((long)param_1 + 0x4a);
        *(undefined4 *)((long)param_2 + 0x62) = uVar2;
        *(undefined8 *)((long)param_2 + 0x5a) = uVar10;
        *(undefined8 *)((long)param_2 + 0x52) = uVar7;
        *(undefined1 *)((long)param_2 + 0x67) = *(undefined1 *)((long)param_1 + 0x67);
        uVar7 = param_1[0xd];
        param_2[0x1c] = *(undefined4 *)(param_1 + 0xe);
        *(undefined8 *)(param_2 + 0x1a) = uVar7;
        *(undefined1 *)(param_2 + 0x1d) = *(undefined1 *)((long)param_1 + 0x74);
        *(undefined8 *)(param_2 + 0x1e) = param_1[0xf];
        *(undefined8 *)(param_2 + 0x20) = 0;
        uVar2 = *(undefined4 *)((long)param_1 + 0x83);
        param_2[0x20] = *(undefined4 *)(param_1 + 0x10);
        *(undefined4 *)((long)param_2 + 0x83) = uVar2;
        *(undefined8 *)(param_2 + 0x22) = param_1[0x11];
        memset(param_2 + 0x24,0,0x400);
        memcpy(param_2 + 0x24,param_1 + 0x12,0x3ff);
        param_2[0x124] =
             (uint)*(byte *)(param_3 + 0x79) << 0x10 | (uint)*(byte *)(param_3 + 0x78) << 0x18 |
             (uint)*(byte *)(param_3 + 0x7a) << 8 | 0xff;
        param_2[0x125] =
             (uint)*(byte *)(param_3 + 0x7c) << 0x10 | (uint)*(byte *)(param_3 + 0x7b) << 0x18 |
             (uint)*(byte *)(param_3 + 0x7d) << 8 | 0xff;
        param_2[0x126] =
             (uint)*(byte *)(param_3 + 0x7f) << 0x10 | (uint)*(byte *)(param_3 + 0x7e) << 0x18 |
             (uint)*(byte *)(param_3 + 0x80) << 8 | 0xff;
        param_2[0x127] =
             (uint)*(byte *)(param_3 + 0x82) << 0x10 | (uint)*(byte *)(param_3 + 0x81) << 0x18 |
             (uint)*(byte *)(param_3 + 0x83) << 8 | 0xff;
        param_2[0x128] =
             (uint)*(byte *)(param_3 + 0x85) << 0x10 | (uint)*(byte *)(param_3 + 0x84) << 0x18 |
             (uint)*(byte *)(param_3 + 0x86) << 8 | 0xff;
        param_2[0x129] =
             (uint)*(byte *)(param_3 + 0x88) << 0x10 | (uint)*(byte *)(param_3 + 0x87) << 0x18 |
             (uint)*(byte *)(param_3 + 0x89) << 8 | 0xff;
        param_2[0x12a] =
             (uint)*(byte *)(param_3 + 0x8b) << 0x10 | (uint)*(byte *)(param_3 + 0x8a) << 0x18 |
             (uint)*(byte *)(param_3 + 0x8c) << 8 | 0xff;
        param_2[299] = (uint)*(byte *)(param_3 + 0x8e) << 0x10 |
                       (uint)*(byte *)(param_3 + 0x8d) << 0x18 |
                       (uint)*(byte *)(param_3 + 0x8f) << 8 | 0xff;
        param_2[300] = (uint)*(byte *)(param_3 + 0x91) << 0x10 |
                       (uint)*(byte *)(param_3 + 0x90) << 0x18 |
                       (uint)*(byte *)(param_3 + 0x92) << 8 | 0xff;
        param_2[0x12d] =
             (uint)*(byte *)(param_3 + 0x94) << 0x10 | (uint)*(byte *)(param_3 + 0x93) << 0x18 |
             (uint)*(byte *)(param_3 + 0x95) << 8 | 0xff;
        param_2[0x12e] =
             (uint)*(byte *)(param_3 + 0x97) << 0x10 | (uint)*(byte *)(param_3 + 0x96) << 0x18 |
             (uint)*(byte *)(param_3 + 0x98) << 8 | 0xff;
        param_2[0x12f] =
             (uint)*(byte *)(param_3 + 0x9a) << 0x10 | (uint)*(byte *)(param_3 + 0x99) << 0x18 |
             (uint)*(byte *)(param_3 + 0x9b) << 8 | 0xff;
        param_2[0x130] =
             (uint)*(byte *)(param_3 + 0x9d) << 0x10 | (uint)*(byte *)(param_3 + 0x9c) << 0x18 |
             (uint)*(byte *)(param_3 + 0x9e) << 8 | 0xff;
        param_2[0x131] =
             (uint)*(byte *)(param_3 + 0xa0) << 0x10 | (uint)*(byte *)(param_3 + 0x9f) << 0x18 |
             (uint)*(byte *)(param_3 + 0xa1) << 8 | 0xff;
        bVar13 = *(byte *)(param_3 + 0xa3);
        bVar3 = *(byte *)(param_3 + 0xa2);
        bVar4 = *(byte *)(param_3 + 0xa4);
        param_2[0x33c] = 4;
        param_2[0x132] = (uint)bVar13 << 0x10 | (uint)bVar3 << 0x18 | (uint)bVar4 << 8 | 0xff;
        memset(param_2 + 0x136,0,0x200);
        *(undefined8 *)(param_2 + 0x134) = 0x200;
        memcpy(param_2 + 0x136,(void *)(param_3 + 0xa5),0x200);
        memset(param_2 + 0x1b8,0,0x200);
        *(undefined8 *)(param_2 + 0x1b6) = 0x200;
        memcpy(param_2 + 0x1b8,(void *)(param_3 + 0x2a5),0x200);
        memset(param_2 + 0x23a,0,0x200);
        *(undefined8 *)(param_2 + 0x238) = 0x200;
        memcpy(param_2 + 0x23a,(void *)(param_3 + 0x4a5),0x200);
        memset(param_2 + 700,0,0x200);
        *(undefined8 *)(param_2 + 0x2ba) = 0x200;
        memcpy(param_2 + 700,(void *)(param_3 + 0x6a5),0x200);
        return 1;
      }
    }
  }
  return 0;
}


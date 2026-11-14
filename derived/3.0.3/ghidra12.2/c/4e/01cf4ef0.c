
undefined8
FUN_01cf4ef0(undefined8 *param_1,undefined4 *param_2,long param_3,char param_4,undefined4 *param_5,
            byte *param_6)

{
  char cVar1;
  uint *puVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  ulong uVar8;
  undefined8 uVar9;
  byte *pbVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  byte bVar14;
  UserHandle aUStack_70 [24];
  undefined8 local_58;
  byte local_38 [4];
  bool local_34 [4];
  
  if (param_4 == '\0') {
    return 0;
  }
  cVar1 = 'c';
  if (param_4 != '\x04') {
    cVar1 = param_4;
  }
  bVar14 = *param_6;
  if (*param_6 < 8) goto LAB_01cf501c;
  if (DAT_04cd19d8 == 0) {
    bVar14 = DAT_0548e140;
LAB_01cf4fa4:
    if (bVar14 < 8) goto LAB_01cf501c;
  }
  else {
    pbVar10 = PTR_DAT_04bb32e0;
    if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
      pbVar10 = (byte *)(DAT_04cd19d8 + 0x158);
    }
    bVar14 = *pbVar10;
    if (*pbVar10 < 8) goto LAB_01cf501c;
    if ((*(int *)(DAT_04cd19d8 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
      bVar14 = *(byte *)(DAT_054f5738 + 0x11a5);
      goto LAB_01cf4fa4;
    }
  }
  if (DAT_0537d558 != (long *)0x0) {
    lVar11 = *DAT_0537d558;
    bVar14 = *(byte *)(lVar11 + 0x473);
    pbVar10 = PTR_DAT_04bb5038;
    if ((long)(char)bVar14 != 0xffffffffffffffff) {
      puVar2 = (uint *)(lVar11 + 0x48) + ((long)(char)bVar14 & 0xffffffffU) * 0x20;
      if (7 < bVar14) {
        puVar2 = (uint *)(lVar11 + 0x48);
      }
      if ((*puVar2 & 8) != 0) {
        pbVar10 = (byte *)(lVar11 + 0x471);
      }
    }
    bVar14 = *pbVar10;
    if (*pbVar10 < 8) goto LAB_01cf501c;
  }
  bVar14 = DAT_0548e168;
  if (7 < DAT_0548e168) {
    bVar14 = 0xff;
  }
LAB_01cf501c:
  *param_1 = 0x2200000902;
  *(undefined1 *)(param_1 + 1) = 1;
  FUN_01cfe950(param_1,param_2,param_3 + 8);
  param_1[0xd] = 0;
  *(char *)((long)param_1 + 0x67) = cVar1;
  *(undefined8 *)((long)param_1 + 0x6d) = 0;
  if (bVar14 < 8) {
    local_38[0] = bVar14;
    uVar8 = FUN_007b39a4(aUStack_70,local_38);
    if ((uVar8 & 1) != 0) {
      local_34[0] = false;
      iVar7 = nn::account::IsNetworkServiceAccountAvailable(local_34,aUStack_70);
      if (((iVar7 == 0) && (local_34[0] != false)) &&
         (iVar7 = nn::account::GetNetworkServiceAccountId
                            ((NetworkServiceAccountId *)&local_58,aUStack_70), iVar7 == 0)) {
        param_1[0xf] = local_58;
        uVar9 = nn::oe::GetDesiredLanguage();
        param_1[0x10] = 0;
        *(char *)((long)param_1 + 0x86) = (char)((ulong)uVar9 >> 0x30);
        *(int *)(param_1 + 0x10) = (int)uVar9;
        *(short *)((long)param_1 + 0x84) = (short)((ulong)uVar9 >> 0x20);
        *(undefined4 *)(param_1 + 0xd) = *param_5;
        *(undefined4 *)((long)param_1 + 0x6c) = param_5[1];
        *(undefined4 *)(param_1 + 0xe) = param_5[2];
        memset(param_1 + 0x11,0,0x408);
        *param_2 = *(undefined4 *)param_1;
        param_2[1] = *(undefined4 *)((long)param_1 + 4);
        uVar4 = *(undefined1 *)(param_1 + 1);
        *(undefined8 *)(param_2 + 8) = 0;
        *(undefined8 *)((long)param_2 + 0x19) = 0;
        *(undefined8 *)((long)param_2 + 0x11) = 0;
        *(undefined8 *)((long)param_2 + 9) = 0;
        *(undefined1 *)(param_2 + 2) = uVar4;
        uVar9 = *(undefined8 *)((long)param_1 + 0x11);
        uVar12 = *(undefined8 *)((long)param_1 + 0x19);
        uVar13 = *(undefined8 *)((long)param_1 + 0x1f);
        *(undefined8 *)((long)param_2 + 9) = *(undefined8 *)((long)param_1 + 9);
        *(undefined8 *)((long)param_2 + 0x1f) = uVar13;
        *(undefined8 *)((long)param_2 + 0x19) = uVar12;
        *(undefined8 *)((long)param_2 + 0x11) = uVar9;
        *(undefined1 *)(param_2 + 10) = *(undefined1 *)(param_1 + 5);
        uVar4 = *(undefined1 *)((long)param_1 + 0x29);
        *(undefined8 *)((long)param_2 + 0x5f) = 0;
        *(undefined8 *)((long)param_2 + 0x5a) = 0;
        *(undefined8 *)((long)param_2 + 0x52) = 0;
        *(undefined8 *)((long)param_2 + 0x4a) = 0;
        *(undefined8 *)((long)param_2 + 0x42) = 0;
        *(undefined8 *)((long)param_2 + 0x3a) = 0;
        *(undefined8 *)((long)param_2 + 0x32) = 0;
        *(undefined8 *)((long)param_2 + 0x2a) = 0;
        *(undefined1 *)((long)param_2 + 0x29) = uVar4;
        uVar9 = *(undefined8 *)((long)param_1 + 0x32);
        uVar12 = *(undefined8 *)((long)param_1 + 0x3a);
        uVar13 = *(undefined8 *)((long)param_1 + 0x42);
        *(undefined8 *)((long)param_2 + 0x2a) = *(undefined8 *)((long)param_1 + 0x2a);
        *(undefined8 *)((long)param_2 + 0x42) = uVar13;
        *(undefined8 *)((long)param_2 + 0x3a) = uVar12;
        *(undefined8 *)((long)param_2 + 0x32) = uVar9;
        uVar9 = *(undefined8 *)((long)param_1 + 0x52);
        uVar12 = *(undefined8 *)((long)param_1 + 0x5a);
        uVar3 = *(undefined4 *)((long)param_1 + 0x62);
        *(undefined8 *)((long)param_2 + 0x4a) = *(undefined8 *)((long)param_1 + 0x4a);
        *(undefined4 *)((long)param_2 + 0x62) = uVar3;
        *(undefined8 *)((long)param_2 + 0x5a) = uVar12;
        *(undefined8 *)((long)param_2 + 0x52) = uVar9;
        *(undefined1 *)((long)param_2 + 0x67) = *(undefined1 *)((long)param_1 + 0x67);
        uVar9 = param_1[0xd];
        param_2[0x1c] = *(undefined4 *)(param_1 + 0xe);
        *(undefined8 *)(param_2 + 0x1a) = uVar9;
        *(undefined1 *)(param_2 + 0x1d) = *(undefined1 *)((long)param_1 + 0x74);
        *(undefined8 *)(param_2 + 0x1e) = param_1[0xf];
        *(undefined8 *)(param_2 + 0x20) = 0;
        uVar3 = *(undefined4 *)((long)param_1 + 0x83);
        param_2[0x20] = *(undefined4 *)(param_1 + 0x10);
        *(undefined4 *)((long)param_2 + 0x83) = uVar3;
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
        bVar14 = *(byte *)(param_3 + 0xa3);
        bVar5 = *(byte *)(param_3 + 0xa2);
        bVar6 = *(byte *)(param_3 + 0xa4);
        param_2[0x33c] = 1;
        param_2[0x132] = (uint)bVar14 << 0x10 | (uint)bVar5 << 0x18 | (uint)bVar6 << 8 | 0xff;
        memset(param_2 + 0x136,0,0x200);
        *(undefined8 *)(param_2 + 0x134) = 0x200;
        memcpy(param_2 + 0x136,(void *)(param_3 + 0xa5),0x200);
        return 1;
      }
    }
  }
  return 0;
}


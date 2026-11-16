
void FUN_0269b0e0(byte *param_1)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  ulong uVar5;
  uint uVar6;
  uint *puVar7;
  undefined *local_30;
  char *pcStack_28;
  
  local_30 = PTR_DAT_04bb2020 + 0x10;
  pcStack_28 = "HouseReset";
  iVar4 = FUN_02749340(param_1 + 0x1267c,&local_30);
  if ((((iVar4 == 0) && (uVar5 = (ulong)*param_1, uVar5 < 0x23)) &&
      (param_1[1] <= (byte)PTR_DAT_04bc27f0[uVar5])) &&
     (((uint)(&DAT_053e6eb8)[uVar5] >> (ulong)(param_1[1] & 0x1f) & 1) != 0)) {
    cVar3 = FUN_020fd7d8(param_1);
    if (cVar3 == '\a') {
      puVar7 = &DAT_0417b3e4;
    }
    else {
      if (cVar3 != '\x01') {
        return;
      }
      puVar7 = &DAT_0417b418;
    }
    local_30 = (undefined *)0x0;
    pbVar1 = param_1 + 0x13156;
    bVar2 = *pbVar1;
    if (((bVar2 & 1) != 0) && (uVar6 = *puVar7, uVar6 < 0x24)) {
      uVar5 = (ulong)(uVar6 >> 3) & 0x1ffffffc;
      *(uint *)((long)&local_30 + uVar5) =
           *(uint *)((long)&local_30 + uVar5) | 1 << (ulong)(uVar6 & 0x1f);
    }
    if (((bVar2 >> 1 & 1) != 0) && (uVar6 = puVar7[1], uVar6 < 0x24)) {
      uVar5 = (ulong)(uVar6 >> 3) & 0x1ffffffc;
      *(uint *)((long)&local_30 + uVar5) =
           *(uint *)((long)&local_30 + uVar5) | 1 << (ulong)(uVar6 & 0x1f);
    }
    if (((bVar2 >> 2 & 1) != 0) && (uVar6 = puVar7[2], uVar6 < 0x24)) {
      uVar5 = (ulong)(uVar6 >> 3) & 0x1ffffffc;
      *(uint *)((long)&local_30 + uVar5) =
           *(uint *)((long)&local_30 + uVar5) | 1 << (ulong)(uVar6 & 0x1f);
    }
    if (((bVar2 >> 3 & 1) != 0) && (uVar6 = puVar7[3], uVar6 < 0x24)) {
      uVar5 = (ulong)(uVar6 >> 3) & 0x1ffffffc;
      *(uint *)((long)&local_30 + uVar5) =
           *(uint *)((long)&local_30 + uVar5) | 1 << (ulong)(uVar6 & 0x1f);
    }
    if (((bVar2 >> 4 & 1) != 0) && (uVar6 = puVar7[4], uVar6 < 0x24)) {
      uVar5 = (ulong)(uVar6 >> 3) & 0x1ffffffc;
      *(uint *)((long)&local_30 + uVar5) =
           *(uint *)((long)&local_30 + uVar5) | 1 << (ulong)(uVar6 & 0x1f);
    }
    if (((bVar2 >> 5 & 1) != 0) && (uVar6 = puVar7[5], uVar6 < 0x24)) {
      uVar5 = (ulong)(uVar6 >> 3) & 0x1ffffffc;
      *(uint *)((long)&local_30 + uVar5) =
           *(uint *)((long)&local_30 + uVar5) | 1 << (ulong)(uVar6 & 0x1f);
    }
    if (((bVar2 >> 6 & 1) != 0) && (uVar6 = puVar7[6], uVar6 < 0x24)) {
      uVar5 = (ulong)(uVar6 >> 3) & 0x1ffffffc;
      *(uint *)((long)&local_30 + uVar5) =
           *(uint *)((long)&local_30 + uVar5) | 1 << (ulong)(uVar6 & 0x1f);
    }
    if (((char)bVar2 < '\0') && (uVar6 = puVar7[7], uVar6 < 0x24)) {
      uVar5 = (ulong)(uVar6 >> 3) & 0x1ffffffc;
      *(uint *)((long)&local_30 + uVar5) =
           *(uint *)((long)&local_30 + uVar5) | 1 << (ulong)(uVar6 & 0x1f);
    }
    bVar2 = param_1[0x13157];
    if (((bVar2 & 1) != 0) && (uVar6 = puVar7[8], uVar6 < 0x24)) {
      uVar5 = (ulong)(uVar6 >> 3) & 0x1ffffffc;
      *(uint *)((long)&local_30 + uVar5) =
           *(uint *)((long)&local_30 + uVar5) | 1 << (ulong)(uVar6 & 0x1f);
    }
    if (((bVar2 >> 1 & 1) != 0) && (uVar6 = puVar7[9], uVar6 < 0x24)) {
      uVar5 = (ulong)(uVar6 >> 3) & 0x1ffffffc;
      *(uint *)((long)&local_30 + uVar5) =
           *(uint *)((long)&local_30 + uVar5) | 1 << (ulong)(uVar6 & 0x1f);
    }
    if (((bVar2 >> 2 & 1) != 0) && (uVar6 = puVar7[10], uVar6 < 0x24)) {
      uVar5 = (ulong)(uVar6 >> 3) & 0x1ffffffc;
      *(uint *)((long)&local_30 + uVar5) =
           *(uint *)((long)&local_30 + uVar5) | 1 << (ulong)(uVar6 & 0x1f);
    }
    if (((bVar2 >> 3 & 1) != 0) && (uVar6 = puVar7[0xb], uVar6 < 0x24)) {
      uVar5 = (ulong)(uVar6 >> 3) & 0x1ffffffc;
      *(uint *)((long)&local_30 + uVar5) =
           *(uint *)((long)&local_30 + uVar5) | 1 << (ulong)(uVar6 & 0x1f);
    }
    if (((bVar2 >> 4 & 1) != 0) && (uVar6 = puVar7[0xc], uVar6 < 0x24)) {
      uVar5 = (ulong)(uVar6 >> 3) & 0x1ffffffc;
      *(uint *)((long)&local_30 + uVar5) =
           *(uint *)((long)&local_30 + uVar5) | 1 << (ulong)(uVar6 & 0x1f);
    }
    uVar6 = 0;
    param_1[0x1315a] = 0;
    pbVar1[0] = 0;
    pbVar1[1] = 0;
    pbVar1[2] = 0;
    pbVar1[3] = 0;
    do {
      if ((*(uint *)((long)&local_30 + (ulong)(uVar6 >> 5) * 4) >> (ulong)(uVar6 & 0x1f) & 1) != 0)
      {
        pbVar1[uVar6 >> 3] = pbVar1[uVar6 >> 3] | (byte)(1 << (ulong)(uVar6 & 7));
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 != 0x24);
  }
  return;
}


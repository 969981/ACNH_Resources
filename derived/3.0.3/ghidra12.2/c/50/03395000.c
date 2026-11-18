
bool FUN_03395000(byte *param_1,ulong param_2)

{
  uint *puVar1;
  uint uVar2;
  undefined *puVar3;
  ulong uVar4;
  byte *pbVar5;
  byte bVar6;
  uint *puVar7;
  long lVar8;
  undefined1 local_3c [12];
  
  puVar3 = PTR_DAT_04bc7368;
  lVar8 = *(long *)PTR_DAT_04bc7368;
  FUN_02507c6c(local_3c,1,1,1,0);
  pbVar5 = (byte *)(lVar8 + 0xc);
  if (*pbVar5 < 8) {
    bVar6 = *param_1;
    if (7 < bVar6) {
      bVar6 = 0xff;
    }
    if (*pbVar5 != bVar6) goto LAB_03395068;
LAB_033950e0:
    puVar1 = (uint *)(pbVar5 + 4);
  }
  else {
LAB_03395068:
    pbVar5 = (byte *)(lVar8 + 0x14);
    if (*pbVar5 < 8) {
      bVar6 = *param_1;
      if (7 < bVar6) {
        bVar6 = 0xff;
      }
      if (*pbVar5 == bVar6) goto LAB_033950e0;
    }
    pbVar5 = (byte *)(lVar8 + 0x1c);
    if (*pbVar5 < 8) {
      bVar6 = *param_1;
      if (7 < bVar6) {
        bVar6 = 0xff;
      }
      if (*pbVar5 == bVar6) goto LAB_033950e0;
    }
    pbVar5 = (byte *)(lVar8 + 0x24);
    if (*pbVar5 < 8) {
      bVar6 = *param_1;
      if (7 < bVar6) {
        bVar6 = 0xff;
      }
      if (*pbVar5 == bVar6) goto LAB_033950e0;
    }
    puVar1 = (uint *)(lVar8 + 0x30);
  }
  if ((param_2 & 1) == 0) {
    uVar4 = FUN_03394720(param_1);
    if ((uVar4 & 1) == 0) {
      return false;
    }
    goto LAB_033951ec;
  }
  lVar8 = *(long *)puVar3;
  FUN_02507c6c(local_3c,1,1,1,0);
  pbVar5 = (byte *)(lVar8 + 0xc);
  if (*pbVar5 < 8) {
    bVar6 = *param_1;
    if (7 < bVar6) {
      bVar6 = 0xff;
    }
    if (*pbVar5 != bVar6) goto LAB_0339512c;
LAB_033951a4:
    puVar7 = (uint *)(pbVar5 + 4);
  }
  else {
LAB_0339512c:
    pbVar5 = (byte *)(lVar8 + 0x14);
    if (*pbVar5 < 8) {
      bVar6 = *param_1;
      if (7 < bVar6) {
        bVar6 = 0xff;
      }
      if (*pbVar5 == bVar6) goto LAB_033951a4;
    }
    pbVar5 = (byte *)(lVar8 + 0x1c);
    if (*pbVar5 < 8) {
      bVar6 = *param_1;
      if (7 < bVar6) {
        bVar6 = 0xff;
      }
      if (*pbVar5 == bVar6) goto LAB_033951a4;
    }
    pbVar5 = (byte *)(lVar8 + 0x24);
    if (*pbVar5 < 8) {
      bVar6 = *param_1;
      if (7 < bVar6) {
        bVar6 = 0xff;
      }
      if (*pbVar5 == bVar6) goto LAB_033951a4;
    }
    puVar7 = (uint *)(lVar8 + 0x30);
  }
  uVar4 = FUN_03394720(param_1);
  if ((uVar4 & 1) == 0) {
    return false;
  }
  if ((*puVar7 >> 3 & 1) != 0) {
    return false;
  }
LAB_033951ec:
  uVar2 = *puVar1;
  if ((((uVar2 >> 10 & 1) == 0) || ((uVar2 >> 7 & 1) != 0)) || ((uVar2 >> 9 & 1) != 0)) {
    return false;
  }
  return (uVar2 >> 0xc & 1) == 0;
}


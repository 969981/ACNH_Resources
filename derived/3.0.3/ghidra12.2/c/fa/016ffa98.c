
undefined8 FUN_016ffa98(long *param_1,long *param_2,uint *param_3)

{
  uint *puVar1;
  byte bVar2;
  char cVar3;
  short sVar4;
  uint uVar5;
  short *psVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  short *local_58;
  long lStack_50;
  short *local_48;
  long local_40;
  uint local_38;
  byte local_34;
  
  psVar6 = (short *)(**(code **)(*param_1 + 0x568))();
  if (psVar6 == (short *)0x0) {
    return 0;
  }
  local_40 = 0;
  local_48 = psVar6;
  uVar7 = FUN_03b36f10();
  if ((uVar7 & 1) == 0) {
    return 0;
  }
  uVar9 = *(uint *)(psVar6 + 6);
  uVar8 = (uVar9 & 0xff00ff00) >> 8 | (uVar9 & 0xff00ff) << 8;
  uVar8 = uVar8 >> 0x10 | uVar8 << 0x10;
  if (*psVar6 != 0x5942) {
    uVar8 = uVar9;
  }
  if (uVar8 != 0) {
    local_40 = (long)psVar6 + (ulong)uVar8;
  }
  (**(code **)(*param_2 + 0x18))(param_2);
  local_38 = 0;
  local_34 = 0;
  uVar7 = FUN_03b36b40(&local_48,&local_38,param_2[1]);
  if ((uVar7 & 1) == 0) {
    return 0;
  }
  if (local_34 - 0xc0 < 2) {
    lStack_50 = (long)psVar6 + (ulong)local_38;
  }
  else {
    if (local_34 != 0xff) {
      return 0;
    }
    lStack_50 = 0;
  }
  local_38 = 0;
  local_34 = 0;
  local_58 = psVar6;
  uVar7 = FUN_03b36b40(&local_58,&local_38,"scale");
  if ((uVar7 & 1) == 0) {
    return 0;
  }
  if (1 < local_34 - 0xc0) {
    if (local_34 == 0xff) {
      return 1;
    }
    return 0;
  }
  puVar1 = (uint *)((long)psVar6 + (ulong)local_38);
  bVar2 = (byte)*puVar1;
  uVar8 = (uint)bVar2;
  if (bVar2 == 0xc1) {
    sVar4 = *psVar6;
    uVar8 = *puVar1;
    uVar9 = uVar8 >> 8;
    if (sVar4 == 0x5942) {
      uVar9 = uVar9 & 0xff00 | uVar8 >> 0x18 | (uVar9 & 0xff) << 0x10;
    }
    if (uVar9 != 0) {
      cVar3 = *(char *)((long)puVar1 + 7);
      uVar9 = puVar1[2];
LAB_016ffc38:
      uVar5 = (uVar9 & 0xff00ff00) >> 8 | (uVar9 & 0xff00ff) << 8;
      uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
      if (sVar4 != 0x5942) {
        uVar5 = uVar9;
      }
      if (cVar3 == -0x2e) {
        *param_3 = uVar5;
        uVar8 = (uint)(byte)*puVar1;
      }
    }
  }
  else if (bVar2 == 0xc0) {
    sVar4 = *psVar6;
    uVar8 = *puVar1;
    uVar9 = uVar8 >> 8;
    if (sVar4 == 0x5942) {
      uVar9 = uVar9 & 0xff00 | uVar8 >> 0x18 | (uVar9 & 0xff) << 0x10;
      if (uVar9 != 0) {
LAB_016ffc24:
        cVar3 = (char)puVar1[1];
        uVar9 = *(uint *)((long)puVar1 + (ulong)(uVar9 + 3 & 0x1fffffc) + 4);
        goto LAB_016ffc38;
      }
    }
    else if (0xff < uVar8) goto LAB_016ffc24;
  }
  if ((uVar8 & 0xff) == 0xc1) {
    sVar4 = *psVar6;
    uVar8 = *puVar1;
    uVar9 = uVar8 >> 8;
    if (sVar4 == 0x5942) {
      uVar9 = uVar9 & 0xff00 | uVar8 >> 0x18 | (uVar9 & 0xff) << 0x10;
    }
    if (uVar9 == 0) goto LAB_016ffd08;
    cVar3 = *(char *)((long)puVar1 + 0xf);
    uVar9 = puVar1[4];
  }
  else {
    if ((uVar8 & 0xff) != 0xc0) goto LAB_016ffd08;
    sVar4 = *psVar6;
    uVar8 = *puVar1;
    uVar9 = uVar8 >> 8;
    if (sVar4 == 0x5942) {
      uVar9 = uVar9 & 0xff00 | uVar8 >> 0x18 | (uVar9 & 0xff) << 0x10;
      if (uVar9 < 2) goto LAB_016ffd08;
    }
    else if (uVar8 < 0x200) goto LAB_016ffd08;
    cVar3 = *(char *)((long)puVar1 + 5);
    uVar9 = *(uint *)((long)puVar1 + (ulong)((uVar9 + 3 & 0x1fffffc) + 4) + 4);
  }
  uVar5 = (uVar9 & 0xff00ff00) >> 8 | (uVar9 & 0xff00ff) << 8;
  uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
  if (sVar4 != 0x5942) {
    uVar5 = uVar9;
  }
  if (cVar3 == -0x2e) {
    param_3[1] = uVar5;
    uVar8 = (uint)(byte)*puVar1;
  }
LAB_016ffd08:
  if ((uVar8 & 0xff) == 0xc1) {
    sVar4 = *psVar6;
    uVar8 = *puVar1 >> 8;
    if (sVar4 == 0x5942) {
      uVar8 = uVar8 & 0xff00 | *puVar1 >> 0x18 | (uVar8 & 0xff) << 0x10;
    }
    if (uVar8 == 0) {
      return 1;
    }
    cVar3 = *(char *)((long)puVar1 + 0x17);
    uVar8 = puVar1[6];
  }
  else {
    if ((uVar8 & 0xff) != 0xc0) {
      return 1;
    }
    sVar4 = *psVar6;
    uVar9 = *puVar1;
    uVar8 = uVar9 >> 8;
    if (sVar4 == 0x5942) {
      uVar8 = uVar8 & 0xff00 | uVar9 >> 0x18 | (uVar8 & 0xff) << 0x10;
      if (uVar8 < 3) {
        return 1;
      }
    }
    else if (uVar9 < 0x300) {
      return 1;
    }
    cVar3 = *(char *)((long)puVar1 + 6);
    uVar8 = *(uint *)((long)puVar1 + (ulong)((uVar8 + 3 & 0x1fffffc) + 4) + 8);
  }
  uVar9 = (uVar8 & 0xff00ff00) >> 8 | (uVar8 & 0xff00ff) << 8;
  uVar9 = uVar9 >> 0x10 | uVar9 << 0x10;
  if (sVar4 != 0x5942) {
    uVar9 = uVar8;
  }
  if (cVar3 == -0x2e) {
    param_3[2] = uVar9;
  }
  return 1;
}


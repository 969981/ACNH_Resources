
void FUN_022c4c20(int *param_1)

{
  byte *pbVar1;
  int *piVar2;
  byte bVar3;
  byte bVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  int *piVar8;
  uint local_20;
  byte local_14 [4];
  
  bVar4 = *(byte *)((long)param_1 + 0x17);
  uVar6 = (long)(char)bVar4 & 0xffffffff;
  pbVar1 = PTR_DAT_04bb5038 + uVar6;
  if (7 < bVar4) {
    pbVar1 = PTR_DAT_04bb32e0;
  }
  if ((*param_1 == 0) || (local_20 = DAT_0547b48c, (int)DAT_0547b490 < (int)DAT_0547b48c)) {
LAB_022c4c78:
    if ((**(char **)(PTR_DAT_04bc3a88 + 8) == '\0') &&
       ((uVar7 = (uint)*(byte *)(param_1 + 8), (int)DAT_0547b48c <= (int)uVar7 &&
        ((int)uVar7 <= (int)DAT_0547b490)))) {
      if (7 < bVar4) {
        uVar6 = 0;
      }
      (&DAT_0547b46c)[uVar6] = (&DAT_0547b46c)[uVar6] | 1 << (ulong)(uVar7 & 0x1f);
    }
    return;
  }
  bVar3 = *pbVar1;
  local_14[0] = bVar3;
  if (7 < bVar3) {
    local_14[0] = 0xff;
  }
  do {
    uVar5 = (ulong)local_20;
    if (local_20 == 0) {
LAB_022c4d54:
      piVar8 = &DAT_0547b494 + uVar5 * 10;
    }
    else {
      if (local_20 == 0xd) {
        uVar5 = 1;
        goto LAB_022c4d54;
      }
      if (((int)local_20 < (int)DAT_0547b48c) || ((int)DAT_0547b490 < (int)local_20)) {
        uVar5 = 0;
        goto LAB_022c4d54;
      }
      uVar7 = (local_20 - DAT_0547b48c) + 2;
      uVar5 = (ulong)uVar7;
      piVar8 = &DAT_0547b494;
      if (uVar7 < 0xe) goto LAB_022c4d54;
    }
    piVar2 = piVar8 + ((long)(char)local_14[0] & 0xffffffff);
    if (7 < bVar3) {
      piVar2 = piVar8;
    }
    if (*piVar2 == *param_1) {
      if (local_20 != 0) {
        FUN_022c4210(local_14);
        return;
      }
      goto LAB_022c4c78;
    }
    if ((local_20 == DAT_0547b490) || (local_20 = local_20 + 1, (int)DAT_0547b490 < (int)local_20))
    goto LAB_022c4c78;
  } while( true );
}


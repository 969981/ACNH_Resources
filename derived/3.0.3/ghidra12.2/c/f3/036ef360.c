
/* WARNING: Removing unreachable block (ram,0x036ef560) */
/* WARNING: Removing unreachable block (ram,0x036ef550) */
/* WARNING: Removing unreachable block (ram,0x036ef558) */
/* WARNING: Removing unreachable block (ram,0x036ef580) */

void FUN_036ef360(ushort *param_1)

{
  uint *puVar1;
  byte bVar2;
  short sVar3;
  undefined *puVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  byte *pbVar8;
  long lVar9;
  undefined *local_38;
  char *pcStack_30;
  byte local_24 [4];
  
  sVar3 = *(short *)PTR_DAT_04bb6298;
  if (sVar3 == -1) goto LAB_036ef4f4;
  local_38 = (undefined *)CONCAT44(local_38._4_4_,0x1a);
  puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar3 * 8);
  if (0xff < (uint)(int)sVar3) {
    puVar1 = (uint *)PTR_DAT_04bc39f8;
  }
  if ((*puVar1 >> 0x1a & 1) == 0) goto LAB_036ef4f4;
  lVar9 = *(long *)PTR_DAT_04bb39b0;
  pbVar8 = PTR_DAT_04bb32e0;
  if (lVar9 == 0) {
LAB_036ef424:
    if (*pbVar8 < 8) goto LAB_036ef49c;
LAB_036ef430:
    if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_036ef494:
      pbVar8 = PTR_DAT_04bb5038;
      goto LAB_036ef49c;
    }
    lVar9 = **(long **)PTR_DAT_04bb27d0;
    bVar2 = *(byte *)(lVar9 + 0x473);
    pbVar8 = PTR_DAT_04bb5038;
    if ((long)(char)bVar2 != 0xffffffffffffffff) {
      puVar1 = (uint *)(lVar9 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x20;
      if (7 < bVar2) {
        puVar1 = (uint *)(lVar9 + 0x48);
      }
      if ((*puVar1 & 8) != 0) {
        pbVar8 = (byte *)(lVar9 + 0x471);
      }
    }
    local_24[0] = *pbVar8;
    if (7 < local_24[0]) goto LAB_036ef494;
  }
  else {
    if (*(int *)(lVar9 + 0x15c) != 0) {
      pbVar8 = (byte *)(lVar9 + 0x158);
    }
    if (7 < *pbVar8) {
      if ((*(int *)(lVar9 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar8 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_036ef424;
      }
      goto LAB_036ef430;
    }
LAB_036ef49c:
    local_24[0] = *pbVar8;
    if (7 < local_24[0]) {
      local_24[0] = 0xff;
    }
  }
  local_38 = PTR_DAT_04bb2020 + 0x10;
  pcStack_30 = "WHEREAREN_ResortPlanner_InspectHouse";
  iVar5 = FUN_02753180(local_24,&local_38);
  if (iVar5 != 0) {
    if ((*param_1 & 1) == 0) {
      *param_1 = *param_1 | 1;
      FUN_036ef5fc(param_1);
      return;
    }
    return;
  }
LAB_036ef4f4:
  uVar6 = FUN_0290d828();
  puVar4 = PTR_DAT_04bb30a0;
  if ((((uVar6 & 1) == 0) || (*(int *)(PTR_DAT_04bc3a80 + 0x38) == 0x41c7d05)) &&
     ((*param_1 & 1) != 0)) {
    *param_1 = *param_1 & 0xfffe;
    lVar9 = *(long *)puVar4;
    *(undefined4 *)(lVar9 + 0x65446) = 0x1ffffff;
    local_38 = (undefined *)((ulong)local_38 & 0xffffffff00000000);
    uVar6 = FUN_03784bd0();
    if ((uVar6 & 1) == 0) {
      lVar7 = lVar9 + 0x65454;
    }
    else {
      lVar7 = lVar9 + 0x655a0;
    }
    FUN_00930750(lVar9 + 0x651f0,lVar7);
    *param_1 = *param_1 & 0xfff9;
    lVar9 = *(long *)PTR_DAT_04bb4e28;
    if (lVar9 != 0) {
      *(uint *)(&DAT_00001230 + lVar9) = *(uint *)(&DAT_00001230 + lVar9) | 2;
    }
    lVar9 = *(long *)PTR_DAT_04bb7bc0;
    if (*(char *)(lVar9 + 0x2b0) != '\0') {
      FUN_0081686c(*(undefined8 *)PTR_DAT_04bb3448);
      *(undefined1 *)(lVar9 + 0x2b0) = 0;
    }
  }
  return;
}


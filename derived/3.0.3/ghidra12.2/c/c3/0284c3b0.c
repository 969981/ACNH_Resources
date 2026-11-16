
void FUN_0284c3b0(undefined8 *param_1)

{
  undefined *puVar1;
  uint *puVar2;
  ushort uVar3;
  char cVar4;
  byte bVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  byte *pbVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  ushort *puVar13;
  undefined8 local_60;
  char *pcStack_58;
  byte local_38 [4];
  undefined4 local_34;
  
  cVar4 = *(char *)((long)param_1 + 0x2c);
  iVar10 = (int)cVar4;
  if (cVar4 != -1) {
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    pcStack_58 = "TalkedDuringSick";
    local_60 = puVar1;
    FUN_0265d830((int)cVar4,0,&local_60,0,1);
    iVar11 = (int)cVar4;
    pcStack_58 = "TalkSickCured";
    local_60 = puVar1;
    FUN_0265d830(iVar10,0,&local_60,0,1);
    pcStack_58 = "TalkedDuringSick";
    local_60 = puVar1;
    FUN_0265d830(iVar11,1,&local_60,0,1);
    pcStack_58 = "TalkSickCured";
    local_60 = puVar1;
    FUN_0265d830(iVar11,1,&local_60,0,1);
    pcStack_58 = "TalkedDuringSick";
    local_60 = puVar1;
    FUN_0265d830(iVar11,2,&local_60,0,1);
    iVar11 = (int)cVar4;
    pcStack_58 = "TalkSickCured";
    local_60 = puVar1;
    FUN_0265d830(iVar10,2,&local_60,0,1);
    pcStack_58 = "TalkedDuringSick";
    local_60 = puVar1;
    FUN_0265d830(iVar11,3,&local_60,0,1);
    pcStack_58 = "TalkSickCured";
    local_60 = puVar1;
    FUN_0265d830(iVar11,3,&local_60,0,1);
    pcStack_58 = "TalkedDuringSick";
    local_60 = puVar1;
    FUN_0265d830(iVar11,4,&local_60,0,1);
    pcStack_58 = "TalkSickCured";
    local_60 = puVar1;
    FUN_0265d830(iVar11,4,&local_60,0,1);
    pcStack_58 = "TalkedDuringSick";
    local_60 = puVar1;
    FUN_0265d830(iVar11,5,&local_60,0,1);
    pcStack_58 = "TalkSickCured";
    local_60 = puVar1;
    FUN_0265d830(iVar11,5,&local_60,0,1);
    pcStack_58 = "TalkedDuringSick";
    local_60 = puVar1;
    FUN_0265d830(iVar11,6,&local_60,0,1);
    uVar12 = (uint)cVar4;
    pcStack_58 = "TalkSickCured";
    local_60 = puVar1;
    FUN_0265d830(iVar10,6,&local_60,0,1);
    pcStack_58 = "TalkedDuringSick";
    local_60 = puVar1;
    FUN_0265d830(uVar12,7,&local_60,0,1);
    pcStack_58 = "TalkSickCured";
    local_60 = puVar1;
    FUN_0265d830(uVar12,7,&local_60,0,1);
    iVar10 = 0;
    do {
      pcStack_58 = "TalkedDuringSick";
      local_60 = puVar1;
      FUN_0265d830(uVar12,iVar10,&local_60,0,0);
      pcStack_58 = "TalkSickCured";
      local_60 = puVar1;
      FUN_0265d830(uVar12,iVar10,&local_60,0,0);
      iVar10 = iVar10 + 1;
    } while (iVar10 != 0xa0);
    if ((uVar12 < 10) && ((&DAT_053fee41)[(ulong)uVar12 * 0xba0] != '\0')) {
      lVar6 = (ulong)uVar12 * 0xba0;
      FUN_0214e5b0(&DAT_053febf8 + lVar6,uVar12);
      (&DAT_053fe830)[(ulong)uVar12 * 0x2e8] = 0;
      *(undefined4 *)(&DAT_053fe836 + lVar6) = 0x101;
      *(undefined2 *)(&DAT_053fe834 + lVar6) = 0;
      *(undefined4 *)(&DAT_053febe0 + lVar6) = 0xffffffff;
      (&DAT_053fe83a)[lVar6] = 0;
      (&DAT_053fe83c)[lVar6] = 0;
      (&DAT_053febe4)[lVar6] = 0xff;
      FUN_0219be30(&DAT_053fe348 + lVar6);
      local_38[0] = (&DAT_053fee40)[lVar6];
      local_38[1] = 0;
      local_34 = 0;
      uVar8 = (ulong)local_60 >> 0x30;
      local_60 = (undefined *)CONCAT26((ushort)uVar8 & 0xff00,0xff0000000000);
      if (-1 < DAT_053d0d10) {
        FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_053d0d10,&local_60,local_38,8,0);
      }
    }
  }
  lVar6 = FUN_0265c2a0((long)*(char *)((long)param_1 + 0x2c));
  if (lVar6 == 0) {
    puVar13 = (ushort *)PTR_DAT_04bb9cf0;
  }
  else if ((*(long **)(lVar6 + 0x28) == (long *)0x0) ||
          (puVar7 = (undefined8 *)**(long **)(lVar6 + 0x28), puVar7 == (undefined8 *)0x0)) {
    puVar13 = (ushort *)(*(long *)(lVar6 + 0x10) + *(long *)(lVar6 + 8));
  }
  else {
    uVar8 = (**(code **)*puVar7)();
    puVar13 = (ushort *)(*(long *)(lVar6 + 0x10) + *(long *)(lVar6 + 8));
    if ((uVar8 & 1) != 0) {
      if (*(long *)(lVar6 + 0x28) != 0) {
        puVar7 = *(undefined8 **)(*(long *)(lVar6 + 0x28) + 8);
        if (puVar7 != (undefined8 *)0x0) {
          (**(code **)*puVar7)();
        }
      }
    }
  }
  uVar3 = *puVar13;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined1 **)((long)param_1 + 0x24) = &LAB_01010000;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined2 *)(param_1 + 4) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined2 *)((long)param_1 + 0x1e) = 0x101;
  *(undefined1 *)((long)param_1 + 0x22) = 0;
  *(undefined1 *)((long)param_1 + 0x2c) = 0xff;
  *(undefined1 *)((long)param_1 + 0x2e) = 0;
  local_60 = (undefined *)((ulong)local_60 & 0xffffffff00000000);
  *(ushort *)(param_1 + 7) = uVar3 >> 8 | uVar3 << 8;
  *(undefined1 *)((long)param_1 + 0x2f) = 0;
  lVar6 = *(long *)PTR_DAT_04bb39b0;
  *(undefined4 *)((long)param_1 + 0x34) = 0;
  *(undefined1 *)((long)param_1 + 0x3a) = 0;
  pbVar9 = PTR_DAT_04bb32e0;
  if (lVar6 == 0) {
LAB_0284c7dc:
    if (7 < *pbVar9) {
LAB_0284c7e8:
      if (*(long **)PTR_DAT_04bb27d0 != (long *)0x0) {
        lVar6 = **(long **)PTR_DAT_04bb27d0;
        bVar5 = *(byte *)(lVar6 + 0x473);
        pbVar9 = PTR_DAT_04bb5038;
        if ((long)(char)bVar5 != 0xffffffffffffffff) {
          puVar2 = (uint *)(lVar6 + 0x48) + ((long)(char)bVar5 & 0xffffffffU) * 0x20;
          if (7 < bVar5) {
            puVar2 = (uint *)(lVar6 + 0x48);
          }
          if ((*puVar2 & 8) != 0) {
            pbVar9 = (byte *)(lVar6 + 0x471);
          }
        }
        local_38[0] = *pbVar9;
        if (local_38[0] < 8) goto LAB_0284c870;
      }
      pbVar9 = PTR_DAT_04bb5038;
    }
  }
  else {
    if (*(int *)(lVar6 + 0x15c) != 0) {
      pbVar9 = (byte *)(lVar6 + 0x158);
    }
    if (7 < *pbVar9) {
      if ((*(int *)(lVar6 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar9 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_0284c7dc;
      }
      goto LAB_0284c7e8;
    }
  }
  local_38[0] = *pbVar9;
  if (7 < local_38[0]) {
    return;
  }
LAB_0284c870:
  if (*(byte *)(**(long **)PTR_DAT_04bb27d0 + 0x476) < 2) {
    iVar10 = FUN_02582d8c(local_38,2);
    if (iVar10 < 0) {
      return;
    }
  }
  else {
    local_60 = (undefined *)CONCAT71(local_60._1_7_,local_38[0]);
    uVar8 = FUN_01d3e2d0(**(long **)PTR_DAT_04bb27d0 + 8,&local_60);
    if ((uVar8 & 1) == 0) {
      return;
    }
  }
  local_60 = PTR_DAT_04bb2020 + 0x10;
  pcStack_58 = "SickQuestGossip";
  FUN_027533a8(local_38,&local_60,0);
  return;
}


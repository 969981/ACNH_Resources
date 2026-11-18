
undefined8 FUN_034567d8(long param_1,long *param_2,byte *param_3,undefined4 *param_4)

{
  uint *puVar1;
  short sVar2;
  undefined *puVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  undefined4 uVar8;
  byte *pbVar9;
  byte bVar10;
  long lVar11;
  undefined *local_88;
  undefined *local_80;
  long local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  byte local_60;
  undefined4 local_5c;
  undefined *local_58;
  char *pcStack_50;
  int local_44;
  
  uVar7 = FUN_03422cc0(param_2);
  if (((uVar7 & 1) == 0) && (uVar7 = FUN_03422a60(param_2,param_3), (uVar7 & 1) == 0)) {
    *(undefined4 *)(param_1 + 0x48) = 2;
    return 0;
  }
  puVar3 = PTR_DAT_04bb43c0;
  local_78 = 0;
  local_88 = PTR_DAT_04bc0510 + 0x10;
  local_80 = (undefined *)*param_2;
  lVar11 = *(long *)PTR_DAT_04bb43c0;
  uVar5 = FUN_0277d6c4(&local_80);
  if (*(long *)puVar3 != 0) {
    lVar11 = *(long *)(lVar11 + 0x57e58);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
    if ((uVar5 < *(uint *)(lVar11 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
      lVar11 = *(long *)PTR_DAT_04bc0428;
      uVar5 = FUN_0277d6c4(param_2);
      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
      if (uVar5 < *(uint *)(lVar11 + 0x1d8)) {
        lVar11 = *(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar5 * 8);
        if (lVar11 != 0) {
          local_78 = lVar11;
        }
      }
    }
  }
  local_58 = (undefined *)CONCAT44(local_58._4_4_,0xe);
  local_44 = FUN_01ae7550(&local_88);
  puVar3 = PTR_DAT_04bb32e0;
  if (local_44 == (int)local_58) {
    lVar11 = *(long *)PTR_DAT_04bb39b0;
    pbVar9 = PTR_DAT_04bb32e0;
    if (lVar11 == 0) {
      if (7 < (byte)*PTR_DAT_04bb32e0) goto LAB_0345696c;
LAB_034569d8:
      bVar10 = *pbVar9;
      if (7 < bVar10) {
        bVar10 = 0xff;
      }
      local_44 = CONCAT31(local_44._1_3_,bVar10);
    }
    else {
      if (*(int *)(lVar11 + 0x15c) != 0) {
        pbVar9 = (byte *)(lVar11 + 0x158);
      }
      if ((*pbVar9 < 8) ||
         (((*(int *)(lVar11 + 0x15c) != 0 && (*(long *)PTR_DAT_04bb4718 != 0)) &&
          (pbVar9 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5), *pbVar9 < 8)))) goto LAB_034569d8;
LAB_0345696c:
      if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_034569d0:
        pbVar9 = PTR_DAT_04bb5038;
        goto LAB_034569d8;
      }
      lVar11 = **(long **)PTR_DAT_04bb27d0;
      bVar10 = *(byte *)(lVar11 + 0x473);
      pbVar9 = PTR_DAT_04bb5038;
      if ((long)(char)bVar10 != 0xffffffffffffffff) {
        puVar1 = (uint *)(lVar11 + 0x48) + ((long)(char)bVar10 & 0xffffffffU) * 0x20;
        if (7 < bVar10) {
          puVar1 = (uint *)(lVar11 + 0x48);
        }
        if ((*puVar1 & 8) != 0) {
          pbVar9 = (byte *)(lVar11 + 0x471);
        }
      }
      bVar10 = *pbVar9;
      bVar4 = 7 < bVar10;
      if (bVar4) {
        bVar10 = 0xff;
      }
      local_44._1_3_ = (undefined3)((uint)local_44 >> 8);
      local_44 = CONCAT31(local_44._1_3_,bVar10);
      if (bVar4) goto LAB_034569d0;
    }
    local_58 = PTR_DAT_04bb2020 + 0x10;
    pcStack_50 = "UnlockInterior_CeilingFurniture";
    iVar6 = FUN_0274bce0(&local_44,&local_58);
    if (iVar6 == 0) {
      uVar8 = 0x6b;
      goto LAB_03456b5c;
    }
  }
  local_60 = *puVar3;
  local_70 = 0;
  uStack_68 = 0;
  local_5c = 0;
  local_80 = PTR_DAT_04bb2010 + 0x10;
  local_78 = 0;
  local_88 = *(undefined **)PTR_DAT_04bb37e0;
  if (7 < local_60) {
    local_60 = 0xff;
  }
  local_44 = FUN_014e5418(&local_88,param_2,0,0);
  if (local_44 == 1) {
    uVar8 = 0xd;
  }
  else {
    if (local_44 == 9) {
      *(undefined4 *)(param_1 + 0x48) = 3;
      *(short *)(param_1 + 0x70) = (short)*param_2;
      *(undefined1 *)(param_1 + 0x72) = *(undefined1 *)((long)param_2 + 2);
      *(undefined1 *)(param_1 + 0x73) = *(undefined1 *)((long)param_2 + 3);
      *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)((long)param_2 + 4);
      bVar10 = *param_3;
      if (7 < bVar10) {
        bVar10 = 0xff;
      }
      *(byte *)(param_1 + 0x78) = bVar10;
      *(undefined4 *)(param_1 + 0x7c) = *param_4;
      *(undefined4 *)(param_1 + 0x80) = 7;
      FUN_03ebb160(param_1,5);
      return 1;
    }
    if (local_44 == 2) {
      sVar2 = *(short *)PTR_DAT_04bb6298;
      if (sVar2 == -1) {
        uVar8 = 2;
      }
      else {
        local_58 = (undefined *)CONCAT44(local_58._4_4_,1);
        puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar2 * 8);
        if (0xff < (uint)(int)sVar2) {
          puVar1 = (uint *)PTR_DAT_04bc39f8;
        }
        uVar8 = 2;
        if ((*puVar1 & 2) != 0) {
          uVar8 = 3;
        }
      }
    }
    else {
      uVar8 = 1;
    }
  }
LAB_03456b5c:
  *(undefined4 *)(param_1 + 0x84) = uVar8;
  *(undefined4 *)(param_1 + 0x48) = 3;
  FUN_03ebb160(param_1,8);
  return 0;
}



ulong FUN_023266fc(long param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  undefined8 *puVar7;
  byte bVar8;
  byte bVar9;
  long lVar10;
  long lVar11;
  undefined **local_50;
  char *local_48;
  long local_40;
  undefined1 local_38 [8];
  
  pbVar1 = (byte *)(param_1 + 0x1ee8);
  FUN_0252d8f0(local_38,pbVar1);
  puVar3 = PTR_DAT_04bb43c0;
  lVar11 = *(long *)PTR_DAT_04bb43c0;
  uVar4 = FUN_0277d6c4(local_38);
  lVar10 = *(long *)puVar3;
  if (lVar10 != 0) {
    lVar11 = *(long *)(lVar11 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
    if ((uVar4 < *(uint *)(lVar11 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
      local_40 = 0;
      local_50 = &PTR_FUN_04a36b50;
      uVar4 = FUN_0277d6c4(&local_48);
      if (*(long *)puVar3 != 0) {
        lVar10 = *(long *)(lVar10 + 0x57e58);
        uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
        if ((uVar4 < *(uint *)(lVar10 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
          lVar10 = *(long *)PTR_DAT_04bc0428;
          uVar4 = FUN_0277d6c4(local_38);
          uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
          if ((uVar4 < *(uint *)(lVar10 + 0x1d8)) &&
             (lVar10 = *(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar4 * 8), lVar10 != 0)) {
            local_40 = lVar10;
          }
        }
      }
      iVar5 = FUN_01ad78cc(&local_50);
      if (iVar5 == 10) {
        if ((*(int *)(DAT_04cd19d8 + 0x15c) != 0) && (*(int *)(DAT_04cd19d8 + 0x15c) != 0)) {
          pbVar2 = PTR_DAT_04bb32e0;
          if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
            pbVar2 = (byte *)(DAT_04cd19d8 + 0x158);
          }
          bVar9 = *pbVar1;
          bVar8 = *pbVar2;
          if (7 < bVar8) {
            bVar8 = 0xff;
          }
          if (7 < bVar9) {
            bVar9 = 0xff;
          }
          if (bVar8 != bVar9) {
            return 0;
          }
        }
        puVar7 = &DAT_054eb548;
      }
      else {
        if (iVar5 != 0xb) goto LAB_023268fc;
        if ((*(int *)(DAT_04cd19d8 + 0x15c) != 0) && (*(int *)(DAT_04cd19d8 + 0x15c) != 0)) {
          pbVar2 = PTR_DAT_04bb32e0;
          if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
            pbVar2 = (byte *)(DAT_04cd19d8 + 0x158);
          }
          bVar9 = *pbVar1;
          bVar8 = *pbVar2;
          if (7 < bVar8) {
            bVar8 = 0xff;
          }
          if (7 < bVar9) {
            bVar9 = 0xff;
          }
          if (bVar8 != bVar9) {
            return 0;
          }
        }
        puVar7 = &DAT_054eb498;
      }
      uVar6 = FUN_02744114(pbVar1,puVar7);
      if ((uVar6 & 1) != 0) {
        return 0;
      }
    }
  }
LAB_023268fc:
  FUN_0252d8f0(&local_50,pbVar1);
  uVar6 = FUN_02557120(pbVar1,&local_50);
  if ((uint)uVar6 != 0) {
    local_50 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
    local_48 = "ForceToolBreakDemo";
    iVar5 = FUN_02753180(pbVar1,&local_50);
    if (iVar5 == 0) {
      FUN_0252d8f0(&local_50,pbVar1);
      uVar4 = FUN_025567f4(&local_50);
      uVar6 = (ulong)((uint)uVar6 <= uVar4);
    }
    else {
      uVar6 = 1;
    }
  }
  return uVar6;
}


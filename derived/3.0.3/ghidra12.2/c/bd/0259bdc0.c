
void FUN_0259bdc0(long param_1,long param_2)

{
  int iVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined2 *puVar5;
  undefined2 uVar6;
  long lVar7;
  uint *puVar8;
  uint uVar9;
  uint *puVar10;
  uint uVar11;
  undefined *local_50;
  char *pcStack_48;
  uint local_24;
  
  FUN_02602950(param_1,0x4c);
  puVar3 = PTR_DAT_04bb2020;
  iVar1 = *(int *)(param_2 + 8);
  local_50 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "IsSuccess";
  if (*(long *)(param_1 + 8) != 0) {
    FUN_026054d0(*(long *)(param_1 + 8),&local_50,iVar1 == 0);
  }
  if (iVar1 != 0) {
    local_24 = 0x16;
    uVar9 = 0;
    do {
      if ((uVar9 < 0x18) && ((*(uint *)(param_2 + 8) >> (ulong)(uVar9 & 0x1f) & 1) != 0)) {
        local_24 = uVar9;
        break;
      }
      uVar11 = 0x18;
      if ((int)uVar9 < 0x18) {
        uVar11 = uVar9 + 1;
      }
      uVar9 = uVar11;
    } while (uVar11 != 0x18);
    pcStack_48 = "FailureType";
    goto LAB_0259bfd0;
  }
  uVar2 = *(ushort *)(param_2 + 0xe);
  local_50 = puVar3 + 0x10;
  pcStack_48 = "BridgeUniqueID";
  if (*(long *)(param_1 + 8) != 0) {
    FUN_02605660(*(long *)(param_1 + 8),&local_50,uVar2);
  }
  puVar4 = PTR_DAT_04bb5008;
  lVar7 = *(long *)PTR_DAT_04bb5008;
  uVar9 = (uint)uVar2 - (uint)*(ushort *)(lVar7 + 0xff0);
  if ((uVar9 < *(uint *)(lVar7 + 0xfd0)) &&
     (lVar7 = *(long *)(*(long *)(lVar7 + 0xfd8) + (long)(int)uVar9 * 8), lVar7 != 0)) {
    puVar5 = (undefined2 *)FUN_02a7ea90(lVar7,1,0xee9ce68d,*(undefined8 *)PTR_DAT_04bc4588);
    if (puVar5 == (undefined2 *)0x0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *puVar5;
    }
  }
  else {
    uVar6 = 0xffff;
  }
  local_50 = puVar3 + 0x10;
  pcStack_48 = "BridgeTypeID";
  if (*(long *)(param_1 + 8) != 0) {
    FUN_02605660(*(long *)(param_1 + 8),&local_50,uVar6);
  }
  lVar7 = *(long *)puVar4;
  uVar9 = (uint)uVar2 - (uint)*(ushort *)(lVar7 + 0xff0);
  if (uVar9 < *(uint *)(lVar7 + 0xfd0)) {
    puVar8 = *(uint **)(*(long *)(lVar7 + 0xfd8) + (long)(int)uVar9 * 8);
    local_24 = 0;
    if (puVar8 != (uint *)0x0) {
      uVar9 = *puVar8;
      if (uVar9 != 0 && puVar8 != (uint *)(ulong)uVar9) {
        puVar10 = (uint *)((long)puVar8 - (long)(ulong)uVar9);
        if (((*puVar10 != 0) && (uVar9 = puVar10[1], uVar9 != 0)) &&
           ((ulong)(ushort)puVar10[2] != 0)) {
          lVar7 = 0xc;
          if (*(char *)((long)puVar10 + 10) != '\0') {
            lVar7 = 0x1c;
          }
          lVar7 = (long)puVar10 + lVar7 + (ulong)(ushort)puVar10[2] * 8;
          if (lVar7 != 0) {
            uVar11 = 0;
            if ((ulong)uVar9 != 0) {
              uVar11 = (uint)((ulong)((long)puVar8 - lVar7) / (ulong)uVar9);
            }
            if (*puVar10 <= uVar11) {
              uVar11 = 0xffffffff;
            }
            if ((uVar11 < *(uint *)PTR_DAT_04bc4590) &&
               (uVar2 = *(ushort *)(*(long *)(PTR_DAT_04bc4590 + 8) + (long)(int)uVar11 * 2),
               local_24 = (uint)uVar2, uVar2 < 6)) goto LAB_0259bfc0;
          }
        }
      }
      goto LAB_0259bfbc;
    }
  }
  else {
LAB_0259bfbc:
    local_24 = 0;
  }
LAB_0259bfc0:
  pcStack_48 = "BridgePattern";
LAB_0259bfd0:
  local_50 = puVar3 + 0x10;
  if (*(long *)(param_1 + 8) != 0) {
    FUN_02605660(*(long *)(param_1 + 8),&local_50,(long)(int)local_24);
  }
  local_50 = puVar3 + 0x10;
  pcStack_48 = "IsCloudIsland";
  if (*(long *)(param_1 + 8) != 0) {
    FUN_026054d0(*(long *)(param_1 + 8),&local_50,*(undefined1 *)(param_2 + 0x38));
  }
  return;
}


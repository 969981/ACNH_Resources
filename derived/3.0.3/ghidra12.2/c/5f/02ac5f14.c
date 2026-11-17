
uint FUN_02ac5f14(long param_1,int param_2)

{
  undefined *puVar1;
  byte *pbVar2;
  undefined4 uVar3;
  byte bVar4;
  short sVar5;
  undefined *puVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  int local_80;
  undefined8 local_7c;
  undefined4 local_74;
  undefined4 local_70;
  undefined2 local_6c;
  undefined1 local_6a;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined2 local_58;
  undefined1 auStack_54 [12];
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  undefined4 local_34;
  
  if (param_2 == 0) {
    uVar9 = 0;
    goto LAB_02ac60e0;
  }
  uVar3 = *(undefined4 *)(param_1 + 0x174);
  local_3c = 0;
  uVar10 = FUN_02b586d0(auStack_54,uVar3);
  uVar9 = 0;
  if ((uVar10 & 1) == 0) goto LAB_02ac60e0;
  lVar11 = *(long *)(param_1 + 0x2e0);
  if (((lVar11 == 0) || (*(int *)(lVar11 + 0x18) != 0)) || ((*(byte *)(lVar11 + 8) >> 1 & 1) == 0))
  {
    local_80 = FUN_02ac52d0(param_1);
  }
  else {
    local_80 = FUN_02a6cb24(param_1 + 0x298);
    if (local_80 == 0) {
      local_34 = 0;
      uVar10 = FUN_02b67620(&local_34,*(undefined4 *)(param_1 + 0x2a0));
      if (((uVar10 & 1) != 0) && (local_38 = FUN_02ac52d0(param_1), local_38 == 4)) {
        local_80 = 0x13;
        goto LAB_02ac5fcc;
      }
    }
    local_80 = 0;
  }
LAB_02ac5fcc:
  local_58 = 0xffff;
  local_6c = (undefined2)uVar3;
  local_70 = local_3c;
  local_74 = local_40;
  local_7c = local_48;
  iVar8 = FUN_02a6cb24(param_1 + 0x298);
  puVar6 = PTR_DAT_04bc3a80;
  local_6a = false;
  if ((iVar8 != 4) && (iVar8 != 1)) {
    if (iVar8 == 0) {
      local_34 = 0;
      uVar10 = FUN_02b673a0(&local_34,*(undefined4 *)(param_1 + 0x2a0));
      if ((uVar10 & 1) == 0) goto LAB_02ac6054;
      FUN_0252fe74(&local_38,param_2);
      uVar10 = FUN_0266cce0(local_34,&local_38);
      if ((uVar10 & 1) == 0) goto LAB_02ac6054;
    }
    else {
LAB_02ac6054:
      uVar9 = FUN_02ac52d0(param_1);
      if ((4 < uVar9) || ((1 << (ulong)(uVar9 & 0x1f) & 0x19U) == 0)) {
        if (*(int *)(puVar6 + 0x38) == -0x17df00c3) {
          if (((*(ushort **)PTR_DAT_04bc3a48 == (ushort *)0x0) ||
              ((**(ushort **)PTR_DAT_04bc3a48 & 1) == 0)) &&
             ((*(int *)(*(long *)PTR_DAT_04bb27f8 + 0x14) == 4 ||
              (*(int *)(*(long *)PTR_DAT_04bb27f8 + 0x14) == 5)))) goto LAB_02ac6078;
        }
        sVar5 = *(short *)PTR_DAT_04bb6298;
        if (sVar5 != -1) {
          local_34 = 0x20;
          puVar1 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar5 * 8;
          if (0xff < (uint)(int)sVar5) {
            puVar1 = PTR_DAT_04bc39f8;
          }
          if ((*(uint *)(puVar1 + 4) & 1) != 0) {
            plVar12 = *(long **)PTR_DAT_04bb27d0;
            if (plVar12 == (long *)0x0) {
LAB_02ac61cc:
              bVar7 = false;
            }
            else {
              lVar11 = *plVar12;
              bVar4 = *(byte *)(lVar11 + 0x473);
              if ((long)(char)bVar4 == 0xffffffffffffffff) goto LAB_02ac61cc;
              pbVar2 = (byte *)(lVar11 + 0x48) + ((long)(char)bVar4 & 0xffffffffU) * 0x80;
              if (7 < bVar4) {
                pbVar2 = (byte *)(lVar11 + 0x48);
              }
              if ((*pbVar2 >> 3 & 1) == 0) goto LAB_02ac61cc;
              bVar7 = *(byte *)(lVar11 + 0x472) != bVar4;
            }
            local_6a = false;
            if (plVar12 != (long *)0x0) {
              local_6a = bVar7;
            }
            goto LAB_02ac607c;
          }
        }
        local_6a = true;
        goto LAB_02ac607c;
      }
    }
LAB_02ac6078:
    local_6a = false;
  }
LAB_02ac607c:
  local_68 = *(undefined8 *)(*(long *)(param_1 + 0x68) + 0x278);
  local_60 = *(undefined4 *)(*(long *)(param_1 + 0x68) + 0x280);
  if ((*(int *)(puVar6 + 0x38) == -0x17df00c3) &&
     ((*(ushort **)PTR_DAT_04bc3a48 == (ushort *)0x0 || ((**(ushort **)PTR_DAT_04bc3a48 & 1) == 0)))
     ) {
    local_5c = 1;
  }
  else {
    local_5c = 0;
  }
  uVar9 = FUN_01736e70(param_2,&local_80,*(undefined4 *)PTR_DAT_04bb3238);
LAB_02ac60e0:
  return uVar9 & 1;
}


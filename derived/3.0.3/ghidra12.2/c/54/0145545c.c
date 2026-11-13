
void FUN_0145545c(long *param_1,byte *param_2)

{
  undefined *puVar1;
  uint *puVar2;
  ushort uVar3;
  short sVar4;
  undefined *puVar5;
  uint uVar6;
  ulong uVar7;
  undefined8 uVar8;
  byte bVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  uint uStack_5c;
  undefined *local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  long local_48;
  undefined4 local_28 [2];
  
  puVar5 = PTR_DAT_04bb6298;
  local_58._0_4_ = 7;
  if (((*(uint *)(param_1 + 0x58) >> 7 & 1) == 0) ||
     (uVar7 = (**(code **)(*param_1 + 0x288))(param_1), (uVar7 & 1) != 0)) {
    sVar4 = *(short *)puVar5;
    if (sVar4 != -1) {
      local_58._0_4_ = 0x20;
      puVar1 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar4 * 8;
      if (0xff < (uint)(int)sVar4) {
        puVar1 = PTR_DAT_04bc39f8;
      }
      if (((*(uint *)(puVar1 + 4) & 1) != 0) &&
         (uVar7 = (**(code **)(*param_1 + 800))(param_1), (uVar7 & 1) == 0)) goto LAB_0145555c;
    }
    uVar7 = (**(code **)(*param_1 + 0x328))(param_1,param_2);
    if ((uVar7 & 1) != 0) {
      if (7 < *(byte *)((long)param_1 + 0x2c4)) {
        return;
      }
      local_28[0] = 0;
      lVar11 = *(long *)(param_1[0x5d] + 0x70);
      if (lVar11 == 0) {
        iVar10 = -1;
      }
      else {
        iVar10 = *(int *)(lVar11 + 0x280);
      }
      local_58 = (undefined *)CONCAT44(local_58._4_4_,iVar10);
      if (iVar10 != 0) {
        return;
      }
      uVar3 = *(ushort *)(param_1[0x5d] + 0x284);
      if (999 < uVar3) {
        return;
      }
      if ((*(int *)PTR_DAT_04bb6260 < (int)(short)uVar3) ||
         (*(int *)(PTR_DAT_04bb6258 + ((long)(short)uVar3 & 0xffffffffU) * 0x10) == 0)) {
        uVar8 = 0xffffffffffffffff;
      }
      else {
        uVar8 = *(undefined8 *)(PTR_DAT_04bb6258 + (long)(short)uVar3 * 0x10 + 8);
      }
      uVar7 = FUN_00a77a10((long)param_1 + 0x2c4,uVar8);
      if ((uVar7 & 1) == 0) {
        return;
      }
      bVar9 = *(byte *)((long)param_1 + 0x2c4);
      if (7 < bVar9) {
        bVar9 = 0xff;
      }
      *(byte *)((long)param_1 + 0x3ac) = bVar9;
      return;
    }
  }
LAB_0145555c:
  uVar3 = *(ushort *)puVar5;
  if (*param_2 < 8) {
    if (uVar3 == 0xffff) {
      return;
    }
    local_58 = (undefined *)CONCAT44(local_58._4_4_,6);
    puVar2 = (uint *)(PTR_DAT_04bc39f8 + ((long)(short)uVar3 & 0xffffffffU) * 8);
    if (0xff < uVar3) {
      puVar2 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar2 >> 6 & 1) == 0) {
      return;
    }
    uVar7 = FUN_02915598(param_2);
    if ((uVar7 & 1) == 0) {
      return;
    }
  }
  else {
    if (uVar3 == 0xffff) {
      return;
    }
    puVar2 = (uint *)(PTR_DAT_04bc39f8 + ((long)(short)uVar3 & 0xffffffffU) * 8);
    if (0xff < uVar3) {
      puVar2 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar2 >> 6 & 1) == 0) {
      return;
    }
  }
  puVar5 = PTR_DAT_04bb43c0;
  lVar11 = param_1[0x5d];
  local_48 = 0;
  local_50 = *(undefined4 *)(lVar11 + 0x288);
  uStack_4c = *(undefined4 *)(lVar11 + 0x28c);
  local_58 = PTR_DAT_04bc0510 + 0x10;
  lVar12 = *(long *)PTR_DAT_04bb43c0;
  uVar6 = FUN_0277d6c4(&local_50);
  if (*(long *)puVar5 != 0) {
    lVar12 = *(long *)(lVar12 + 0x57e58);
    uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
    if ((uVar6 < *(uint *)(lVar12 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
      lVar12 = *(long *)PTR_DAT_04bc0428;
      uVar6 = FUN_0277d6c4(lVar11 + 0x288);
      uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
      if ((uVar6 < *(uint *)(lVar12 + 0x1d8)) &&
         (lVar11 = *(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar6 * 8), lVar11 != 0)) {
        local_48 = lVar11;
      }
    }
  }
  local_28[0] = CONCAT31(local_28[0]._1_3_,6);
  FUN_014719b0(param_1[0x5d],local_28);
  FUN_01b0a398(local_28,&local_58);
  uStack_5c = *(int *)(*(long *)(param_1[0x5d] + 0x68) + 0x2b4) + 0x20000000U >> 0x1e;
  local_60 = 0;
  local_68 = 2;
  uStack_64 = 2;
  FUN_0150dbd8(local_28,param_1[0x5d] + 0x2c0,&uStack_5c,&local_60,&uStack_64,&local_68);
  FUN_02648c90(param_2,local_28,0);
  return;
}


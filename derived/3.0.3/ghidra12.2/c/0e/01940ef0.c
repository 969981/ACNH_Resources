
undefined8 FUN_01940ef0(long param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  undefined8 *local_60;
  int local_58;
  int iStack_54;
  
  uVar2 = *(uint *)(param_1 + 700);
  local_60 = (undefined8 *)CONCAT44(local_60._4_4_,uVar2);
  if (uVar2 < 0x19) {
    if ((1 << (ulong)(uVar2 & 0x1f) & 0x180001aU) != 0) {
      fVar8 = *(float *)(*(long *)(param_1 + 0x68) + 0x278);
      local_60 = (undefined8 *)(PTR_DAT_04bb2010 + 0x10);
      fVar9 = *(float *)(*(long *)(param_1 + 0x68) + 0x280);
      local_58 = (int)((float)(int)fVar8 / 5.0) - (uint)(fVar8 < 0.0);
      iStack_54 = (int)((float)(int)fVar9 / 5.0) - (uint)(fVar9 < 0.0);
      uVar4 = FUN_02a7c208(param_2,&local_60);
      goto joined_r0x01941040;
    }
    if (uVar2 == 0) {
      lVar5 = *(long *)(param_1 + 0x2c8);
      uVar4 = FUN_02a7beb4(param_2,*(long *)(lVar5 + 0x300) + 0x278);
      if ((uVar4 & 1) != 0) {
        return 1;
      }
      iVar1 = *(int *)(lVar5 + 0x4ec) + 1;
      iVar6 = *(int *)(lVar5 + 0x4dc);
      if (iVar1 == iVar6) {
        return 0;
      }
      iVar3 = *(int *)(lVar5 + 0x4d8);
      iVar7 = iVar3;
      do {
        local_60 = &DAT_048f9750;
        local_58 = iVar7;
        iStack_54 = iVar6;
        uVar4 = FUN_02a7c074(param_2,&local_60);
        if ((uVar4 & 1) != 0) {
          return 1;
        }
        if (iVar7 < *(int *)(lVar5 + 0x4e8)) {
          iVar7 = iVar7 + 1;
        }
        else {
          iVar6 = iVar6 + 1;
          iVar7 = *(int *)(lVar5 + 0x4d8);
        }
      } while (iVar3 != iVar7 || iVar1 != iVar6);
      return 0;
    }
  }
  uVar4 = FUN_02a7beb4(param_2,*(long *)(param_1 + 0x68) + 0x278);
joined_r0x01941040:
  if ((uVar4 & 1) == 0) {
    return 0;
  }
  return 1;
}


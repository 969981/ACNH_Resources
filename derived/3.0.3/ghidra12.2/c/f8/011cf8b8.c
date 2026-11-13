
/* WARNING: Removing unreachable block (ram,0x011cfadc) */
/* WARNING: Removing unreachable block (ram,0x011cf9cc) */
/* WARNING: Removing unreachable block (ram,0x011cfbbc) */

void FUN_011cf8b8(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  float fStack_94;
  undefined8 local_90;
  undefined4 local_88;
  float fStack_84;
  undefined8 local_80;
  undefined4 uStack_78;
  float local_74;
  undefined1 *local_6c;
  undefined4 local_64;
  
  FUN_0124c030(&local_a0,param_1);
  iVar4 = FUN_0123db50(&local_98,local_90);
  puVar2 = PTR_DAT_04bb2200;
  puVar6 = (undefined8 *)(param_1 + 8);
  local_a0 = *puVar6;
  fVar7 = -2.5;
  fVar9 = 3.2;
  if (iVar4 != 5) {
    fVar7 = -6.0;
    fVar9 = 6.2;
  }
  fStack_94 = (float)((ulong)*(undefined8 *)(param_1 + 0x10) >> 0x20);
  local_90 = *(undefined8 *)(param_1 + 0x18);
  local_80 = *(undefined8 *)(param_1 + 0x28);
  lVar1 = param_1 + 0x70;
  fVar8 = 15.5;
  if (iVar4 != 5) {
    fVar8 = 16.8;
  }
  fStack_84 = (float)((ulong)*(undefined8 *)(param_1 + 0x20) >> 0x20);
  local_74 = (float)((ulong)*(undefined8 *)(param_1 + 0x30) >> 0x20);
  local_b0 = 0;
  local_a8 = 0x3f80000000000000;
  local_6c = &DAT_3f8000003f800000;
  local_64 = 0x3f800000;
  local_98 = (undefined4)*(undefined8 *)(param_1 + 0x10);
  _local_98 = CONCAT44(fVar7 + fStack_94,local_98);
  local_88 = (undefined4)*(undefined8 *)(param_1 + 0x20);
  _local_88 = CONCAT44(fVar8 + fStack_84,local_88);
  uStack_78 = (undefined4)*(undefined8 *)(param_1 + 0x30);
  _uStack_78 = CONCAT44(fVar9 + local_74,uStack_78);
  if (*(long *)(*(long *)PTR_DAT_04bb2200 + 0x58) == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = *(long *)(*(long *)PTR_DAT_04bb2200 + 0x58) + 0x138;
  }
  param_2 = param_2 + 0x11f0;
  FUN_0161c2a0(0x41300000,param_2,lVar1,&local_a0,&local_6c,&local_b0,lVar5,1);
  FUN_0124c030(&local_a0,param_1);
  iVar4 = FUN_0123db50(&local_98,local_90);
  bVar3 = iVar4 != 5;
  local_90 = *(undefined8 *)(param_1 + 0x18);
  fVar7 = 2.3;
  if (bVar3) {
    fVar7 = 6.9;
  }
  fVar9 = 16.3;
  if (bVar3) {
    fVar9 = 16.0;
  }
  local_a0 = *puVar6;
  local_b0 = 0;
  local_a8 = 0x3f80000000000000;
  local_6c = &DAT_3f8000003f800000;
  local_64 = 0x3f800000;
  fStack_94 = (float)((ulong)*(undefined8 *)(param_1 + 0x10) >> 0x20);
  local_80 = *(undefined8 *)(param_1 + 0x28);
  fVar8 = 2.6;
  if (bVar3) {
    fVar8 = 6.2;
  }
  fStack_84 = (float)((ulong)*(undefined8 *)(param_1 + 0x20) >> 0x20);
  local_74 = (float)((ulong)*(undefined8 *)(param_1 + 0x30) >> 0x20);
  lVar5 = *(long *)(*(long *)puVar2 + 0x58);
  local_98 = (undefined4)*(undefined8 *)(param_1 + 0x10);
  _local_98 = CONCAT44(fVar8 + fStack_94,local_98);
  local_88 = (undefined4)*(undefined8 *)(param_1 + 0x20);
  _local_88 = CONCAT44(fVar9 + fStack_84,local_88);
  uStack_78 = (undefined4)*(undefined8 *)(param_1 + 0x30);
  _uStack_78 = CONCAT44(fVar7 + local_74,uStack_78);
  if (lVar5 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = lVar5 + 0x138;
  }
  FUN_0161c2a0(0x41300000,param_2,lVar1,&local_a0,&local_6c,&local_b0,lVar5,1);
  FUN_0124c030(&local_a0,param_1);
  iVar4 = FUN_0123db50(&local_98,local_90);
  if (iVar4 != 5) {
    local_a0 = *puVar6;
    local_90 = *(undefined8 *)(param_1 + 0x18);
    fStack_94 = (float)((ulong)*(undefined8 *)(param_1 + 0x10) >> 0x20);
    local_80 = *(undefined8 *)(param_1 + 0x28);
    fStack_84 = (float)((ulong)*(undefined8 *)(param_1 + 0x20) >> 0x20);
    local_98 = (undefined4)*(undefined8 *)(param_1 + 0x10);
    _local_98 = CONCAT44(fStack_94 + 0.0,local_98);
    local_74 = (float)((ulong)*(undefined8 *)(param_1 + 0x30) >> 0x20);
    local_b0 = 0;
    local_a8 = 0x3f80000000000000;
    local_6c = &DAT_3f8000003f800000;
    local_64 = 0x3f800000;
    lVar5 = *(long *)(*(long *)puVar2 + 0x58);
    local_88 = (undefined4)*(undefined8 *)(param_1 + 0x20);
    _local_88 = CONCAT44(fStack_84 + 24.5,local_88);
    uStack_78 = (undefined4)*(undefined8 *)(param_1 + 0x30);
    _uStack_78 = CONCAT44(local_74 + 3.0,uStack_78);
    if (lVar5 == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = lVar5 + 0x138;
    }
    FUN_0161c2a0(0x41300000,param_2,lVar1,&local_a0,&local_6c,&local_b0,lVar5,1);
  }
  return;
}


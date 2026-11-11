
void FUN_0044da90(undefined8 *param_1,int param_2,undefined8 param_3,byte param_4,undefined8 param_5
                 ,int param_6,long *param_7)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  byte *local_2c8;
  byte *local_2c0;
  byte *local_2b8;
  undefined1 auStack_2b0 [112];
  ulong local_240;
  byte *local_1a0;
  undefined8 local_80;
  undefined *puStack_78;
  undefined8 local_70;
  
  FUN_00451ea0(auStack_2b0);
  FUN_00452260(auStack_2b0,&DAT_04c15320);
  local_240 = local_240 | 0x80000;
  local_1a0 = (byte *)0x0;
  iVar3 = FUN_00452730(auStack_2b0);
  iVar3 = iVar3 + param_2 * 0x10 + 0x40;
  iVar4 = FUN_00427030(param_3);
  iVar5 = FUN_00427030(param_3);
  uVar2 = (iVar4 + iVar3) - 1U & -iVar5;
  pbVar6 = (byte *)FUN_00438a70(param_5,uVar2 + param_6);
  *param_7 = (long)(pbVar6 + (int)uVar2);
  local_2c0 = pbVar6 + iVar3;
  local_2c8 = pbVar6 + 0x30;
  local_2b8 = pbVar6;
  if (local_2c0 < local_2c8) {
    local_70 = 0;
    local_80 = 0;
    puStack_78 = &DAT_0413df78;
    FUN_004223c0(0xdeadf11d,"../..\\Common/Base/Memory/Allocator/Linear/hkLinearBuffer.inl",0x1e,
                 "hkLinearBuffer exhausted",&local_80);
  }
  *(undefined8 *)(pbVar6 + 8) = param_3;
  *pbVar6 = param_4 & 1;
  *(int *)(pbVar6 + 0x10) = param_2;
  pbVar1 = local_2b8 + ((ulong)(local_2c8 + (7 - (long)local_2b8)) & 0xfffffffffffffff8);
  local_2c8 = pbVar1 + 0x10;
  if (local_2c0 < local_2c8) {
    local_70 = 0;
    local_80 = 0;
    puStack_78 = &DAT_0413df78;
    FUN_004223c0(0xdeadf11d,"../..\\Common/Base/Memory/Allocator/Linear/hkLinearBuffer.inl",0x2f,
                 "hkLinearBuffer exhausted",&local_80);
  }
  FUN_0043eef0(pbVar1);
  *(undefined ***)pbVar1 = &PTR_FUN_04861750;
  *(undefined8 *)(pbVar1 + 8) = param_5;
  local_240 = local_240 | 0x80000;
  local_1a0 = pbVar1;
  lVar7 = FUN_004533c0(auStack_2b0,&local_2c8);
  lVar10 = 7 - (long)local_2b8;
  lVar9 = (long)*(int *)(pbVar6 + 0x10) * 8;
  pbVar1 = local_2b8 + ((ulong)(local_2c8 + lVar10) & 0xfffffffffffffff8);
  local_2c8 = pbVar1 + lVar9;
  if (local_2c0 < local_2c8) {
    local_70 = 0;
    local_80 = 0;
    puStack_78 = &DAT_0413df78;
    FUN_004223c0(0xdeadf11d,"../..\\Common/Base/Memory/Allocator/Linear/hkLinearBuffer.inl",0x2f,
                 "hkLinearBuffer exhausted",&local_80);
    lVar9 = (long)*(int *)(pbVar6 + 0x10) << 3;
    lVar10 = 7 - (long)local_2b8;
  }
  *(byte **)(pbVar6 + 0x18) = pbVar1;
  pbVar1 = local_2b8 + ((ulong)(local_2c8 + lVar10) & 0xfffffffffffffff8);
  local_2c8 = pbVar1 + lVar9;
  if (local_2c0 < local_2c8) {
    local_70 = 0;
    local_80 = 0;
    puStack_78 = &DAT_0413df78;
    FUN_004223c0(0xdeadf11d,"../..\\Common/Base/Memory/Allocator/Linear/hkLinearBuffer.inl",0x2f,
                 "hkLinearBuffer exhausted",&local_80);
    *(byte **)(pbVar6 + 0x20) = pbVar1;
    pbVar6[0x28] = 0;
    pbVar6[0x29] = 0;
    pbVar6[0x2a] = 0;
    pbVar6[0x2b] = 0;
    pbVar6[0x2c] = 0;
    pbVar6[0x2d] = 0;
    pbVar6[0x2e] = 0;
    pbVar6[0x2f] = 0;
    *param_1 = pbVar6;
    param_1[1] = lVar7;
  }
  else {
    *(byte **)(pbVar6 + 0x20) = pbVar1;
    pbVar6[0x28] = 0;
    pbVar6[0x29] = 0;
    pbVar6[0x2a] = 0;
    pbVar6[0x2b] = 0;
    pbVar6[0x2c] = 0;
    pbVar6[0x2d] = 0;
    pbVar6[0x2e] = 0;
    pbVar6[0x2f] = 0;
    *param_1 = pbVar6;
    param_1[1] = lVar7;
  }
  if (lVar7 == 0) {
    param_1[2] = 0;
  }
  else {
    uVar8 = FUN_00428370(lVar7);
    param_1[2] = uVar8;
    if ((uVar8 & 1) != 0) {
      FUN_0043dd30(uVar8 & 0xfffffffffffffffe);
    }
  }
  FUN_00451fa0(auStack_2b0);
  return;
}



void FUN_035906b4(long param_1,undefined4 *param_2,uint param_3)

{
  int iVar1;
  byte bVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  ushort *puVar7;
  long lVar8;
  undefined1 auStack_5a [2];
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  long local_48;
  undefined2 local_28;
  undefined1 local_26;
  undefined1 local_25;
  undefined4 local_24;
  
  local_24 = *(undefined4 *)(param_1 + 0x1950);
  local_28 = *(undefined2 *)(param_1 + 0x194c);
  local_26 = *(undefined1 *)(param_1 + 0x194e);
  local_25 = *(undefined1 *)(param_1 + 0x194f);
  if (((param_3 & 1) != 0) && ((*(byte *)(param_1 + 0x195c) >> 4 & 1) != 0)) {
    uVar6 = FUN_03423b10(param_1 + 0x1f8);
    if (((uVar6 & 1) == 0) || (uVar6 = FUN_03423be0(param_1 + 0x1f8), (uVar6 & 1) == 0)) {
      local_58 = (undefined *)0x1515;
      FUN_0277d4ac(&local_58);
      local_28 = (undefined2)local_58;
    }
    else {
      local_28 = *(undefined2 *)(param_1 + 0x1954);
      local_58._2_1_ = *(undefined1 *)(param_1 + 0x1956);
      local_58._3_1_ = *(undefined1 *)(param_1 + 0x1957);
      local_58._4_4_ = *(undefined4 *)(param_1 + 0x1958);
    }
    local_26 = local_58._2_1_;
    local_25 = local_58._3_1_;
    local_24 = local_58._4_4_;
  }
  puVar3 = PTR_DAT_04bb43c0;
  local_50 = CONCAT13(local_25,CONCAT12(local_26,local_28));
  local_58 = PTR_DAT_04bc0510 + 0x10;
  local_48 = 0;
  lVar8 = *(long *)PTR_DAT_04bb43c0;
  local_4c = local_24;
  uVar4 = FUN_0277d6c4(&local_50);
  if (*(long *)puVar3 != 0) {
    lVar8 = *(long *)(lVar8 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
    if ((uVar4 < *(uint *)(lVar8 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
      lVar8 = *(long *)PTR_DAT_04bc0428;
      uVar4 = FUN_0277d6c4(&local_28);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
      if ((uVar4 < *(uint *)(lVar8 + 0x1d8)) &&
         (lVar8 = *(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar4 * 8), lVar8 != 0)) {
        local_48 = lVar8;
      }
    }
  }
  bVar2 = *(byte *)(param_1 + 0x195c);
  if ((bVar2 & 1) != 0) {
    iVar1 = *(int *)(param_1 + 0x1960);
    iVar5 = FUN_01ad7260(&local_58);
    if ((iVar5 != 0) &&
       (((iVar1 == 0 || (iVar5 = FUN_01ad7260(&local_58), iVar1 < iVar5)) &&
        (puVar7 = (ushort *)FUN_01afd600(&local_58), puVar7 != (ushort *)0x0)))) {
      *puVar7 = *puVar7 & 0xfff8 | (ushort)iVar1 & 7;
    }
    bVar2 = *(byte *)(param_1 + 0x195c);
  }
  if ((bVar2 >> 1 & 1) != 0) {
    if (*(int *)(param_1 + 0x1964) == 2) {
      FUN_007ef010(auStack_5a,param_1 + 0x196c);
      FUN_01afde50(&local_58,auStack_5a);
    }
    else if (*(int *)(param_1 + 0x1964) == 0) {
      FUN_01afdcc4(&local_58,*(undefined4 *)(param_1 + 0x1968));
    }
    else {
      FUN_01afdd70(&local_58,*(undefined4 *)(param_1 + 0x1968));
    }
  }
  *param_2 = local_50;
  param_2[1] = local_4c;
  return;
}


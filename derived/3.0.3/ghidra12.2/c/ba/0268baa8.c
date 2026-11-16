
void FUN_0268baa8(undefined4 *param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  ushort *puVar6;
  long lVar7;
  undefined *local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  long local_40;
  undefined8 local_38;
  
  local_38 = 0x598;
  FUN_0277d4ac(&local_38);
  puVar2 = PTR_DAT_04bb43c0;
  local_40 = 0;
  local_50 = PTR_DAT_04bc0510 + 0x10;
  local_48 = (undefined4)local_38;
  uStack_44 = local_38._4_4_;
  lVar7 = *(long *)PTR_DAT_04bb43c0;
  uVar4 = FUN_0277d6c4(&local_48);
  if (*(long *)puVar2 != 0) {
    lVar7 = *(long *)(lVar7 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
    if ((uVar4 < *(uint *)(lVar7 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
      lVar7 = *(long *)PTR_DAT_04bc0428;
      uVar4 = FUN_0277d6c4(&local_38);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
      if ((uVar4 < *(uint *)(lVar7 + 0x1d8)) &&
         (lVar7 = *(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar4 * 8), lVar7 != 0)) {
        local_40 = lVar7;
      }
    }
  }
  bVar3 = FUN_020fd7d8(param_2);
  iVar1 = *(int *)(&DAT_04058160 + (ulong)bVar3 * 4);
  iVar5 = FUN_01ad7260(&local_50);
  if ((iVar5 != 0) &&
     (((bVar3 == 2 || (iVar5 = FUN_01ad7260(&local_50), iVar1 < iVar5)) &&
      (puVar6 = (ushort *)FUN_01afd600(&local_50), puVar6 != (ushort *)0x0)))) {
    *puVar6 = *puVar6 & 0xfff8 | (ushort)iVar1 & 7;
  }
  *param_1 = local_48;
  param_1[1] = uStack_44;
  return;
}


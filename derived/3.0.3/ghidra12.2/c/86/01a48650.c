
bool FUN_01a48650(long param_1,undefined4 *param_2)

{
  int iVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  int iVar7;
  long lVar8;
  undefined *local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  long local_38;
  
  puVar2 = PTR_DAT_04bb43c0;
  local_38 = 0;
  local_48 = PTR_DAT_04bc0510 + 0x10;
  local_40 = *param_2;
  uStack_3c = param_2[1];
  lVar8 = *(long *)PTR_DAT_04bb43c0;
  uVar3 = FUN_0277d6c4(&local_40);
  if (*(long *)puVar2 != 0) {
    lVar8 = *(long *)(lVar8 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
    if ((uVar3 < *(uint *)(lVar8 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
      lVar8 = *(long *)PTR_DAT_04bc0428;
      uVar3 = FUN_0277d6c4(param_2);
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
      if ((uVar3 < *(uint *)(lVar8 + 0x1d8)) &&
         (lVar8 = *(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar3 * 8), lVar8 != 0)) {
        local_38 = lVar8;
      }
    }
  }
  iVar4 = FUN_01aed730(&local_48);
  uVar6 = (ulong)(long)(iVar4 * 0x5a) / 100;
  iVar7 = (int)((uVar6 & 0xffffffff) / 100);
  iVar1 = iVar7 * 100;
  iVar5 = (int)uVar6;
  iVar4 = iVar1 + 100;
  if ((uint)(iVar5 + iVar7 * -100) < 0x32) {
    iVar4 = iVar1;
  }
  iVar7 = (iVar5 / 10) * 10;
  iVar1 = iVar7 + 10;
  if (iVar5 % 10 < 5) {
    iVar1 = iVar7;
  }
  if (iVar5 < 1000) {
    iVar4 = iVar1;
  }
  return *(int *)(param_1 + 8) <= iVar4;
}


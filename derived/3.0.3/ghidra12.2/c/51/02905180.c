
bool FUN_02905180(undefined8 param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  int iVar7;
  long lVar8;
  undefined *local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  long local_38;
  
  puVar3 = PTR_DAT_04bb43c0;
  local_38 = 0;
  local_48 = PTR_DAT_04bc0510 + 0x10;
  local_40 = *param_2;
  uStack_3c = param_2[1];
  lVar8 = *(long *)PTR_DAT_04bb43c0;
  uVar4 = FUN_0277d6c4(&local_40);
  if (*(long *)puVar3 != 0) {
    lVar8 = *(long *)(lVar8 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
    if ((uVar4 < *(uint *)(lVar8 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
      lVar8 = *(long *)PTR_DAT_04bc0428;
      uVar4 = FUN_0277d6c4(param_2);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
      if ((uVar4 < *(uint *)(lVar8 + 0x1d8)) &&
         (lVar8 = *(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar4 * 8), lVar8 != 0)) {
        local_38 = lVar8;
      }
    }
  }
  iVar5 = FUN_01aed730(&local_48);
  uVar6 = (ulong)(long)(iVar5 * 0x5a) / 100;
  iVar7 = (int)((uVar6 & 0xffffffff) / 100);
  uVar2 = iVar7 * 100;
  iVar5 = (int)uVar6;
  uVar4 = uVar2 + 100;
  if ((uint)(iVar5 + iVar7 * -100) < 0x32) {
    uVar4 = uVar2;
  }
  uVar1 = (iVar5 / 10) * 10;
  uVar2 = uVar1 + 10;
  if (iVar5 % 10 < 5) {
    uVar2 = uVar1;
  }
  if (iVar5 < 1000) {
    uVar4 = uVar2;
  }
  return 999999 < uVar4;
}


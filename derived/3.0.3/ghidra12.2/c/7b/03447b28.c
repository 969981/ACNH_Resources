
int FUN_03447b28(long param_1)

{
  int iVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  int iVar7;
  long lVar8;
  undefined *local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  long local_48;
  undefined *local_40;
  char *pcStack_38;
  
  puVar2 = PTR_DAT_04bb43c0;
  local_48 = 0;
  local_58 = PTR_DAT_04bc0510 + 0x10;
  local_50 = *(undefined4 *)(param_1 + 0x50);
  uStack_4c = *(undefined4 *)(param_1 + 0x54);
  lVar8 = *(long *)PTR_DAT_04bb43c0;
  uVar3 = FUN_0277d6c4(&local_50);
  if (*(long *)puVar2 != 0) {
    lVar8 = *(long *)(lVar8 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
    if ((uVar3 < *(uint *)(lVar8 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
      lVar8 = *(long *)PTR_DAT_04bc0428;
      uVar3 = FUN_0277d6c4((undefined4 *)(param_1 + 0x50));
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
      if (uVar3 < *(uint *)(lVar8 + 0x1d8)) {
        lVar8 = *(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar3 * 8);
        if (lVar8 != 0) {
          local_48 = lVar8;
        }
      }
    }
  }
  iVar5 = *(int *)(param_1 + 0xb8);
  iVar4 = FUN_01aed730(&local_58);
  if (iVar5 == 1) {
    uVar6 = (ulong)(long)(iVar4 * 0x5a) / 100;
    iVar5 = (int)uVar6;
    if (iVar5 < 1000) {
      iVar1 = (iVar5 / 10) * 10;
      iVar4 = iVar1 + 10;
      if (iVar5 % 10 < 5) {
        iVar4 = iVar1;
      }
    }
    else {
      iVar7 = (int)((uVar6 & 0xffffffff) / 100);
      iVar1 = iVar7 * 100;
      iVar4 = iVar1 + 100;
      if ((uint)(iVar5 + iVar7 * -100) < 0x32) {
        iVar4 = iVar1;
      }
    }
  }
  else {
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = "RegulationType4";
    uVar6 = FUN_0273f0a0(&local_40);
    if ((uVar6 & 1) != 0) {
      iVar4 = (iVar4 * 0xc) / 10;
    }
  }
  return iVar4;
}


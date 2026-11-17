
void FUN_02bd74dc(long param_1,undefined4 *param_2)

{
  int iVar1;
  byte bVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  ushort *puVar6;
  long lVar7;
  undefined1 auStack_52 [2];
  undefined *local_50;
  undefined4 local_48;
  undefined4 local_44;
  long local_40;
  undefined2 local_38;
  undefined1 local_36;
  undefined1 local_35;
  undefined4 local_34;
  
  puVar3 = PTR_DAT_04bb43c0;
  local_36 = *(undefined1 *)(param_1 + 0x25e);
  local_35 = *(undefined1 *)(param_1 + 0x25f);
  local_50 = PTR_DAT_04bc0510 + 0x10;
  local_44 = *(undefined4 *)(param_1 + 0x260);
  local_38 = *(undefined2 *)(param_1 + 0x25c);
  local_48 = *(undefined4 *)(param_1 + 0x25c);
  local_40 = 0;
  lVar7 = *(long *)PTR_DAT_04bb43c0;
  local_34 = local_44;
  uVar4 = FUN_0277d6c4(&local_48);
  if (*(long *)puVar3 != 0) {
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
  bVar2 = *(byte *)(param_1 + 0x26c);
  if ((bVar2 & 1) != 0) {
    iVar1 = *(int *)(param_1 + 0x270);
    iVar5 = FUN_01ad7260(&local_50);
    if ((iVar5 != 0) &&
       (((iVar1 == 0 || (iVar5 = FUN_01ad7260(&local_50), iVar1 < iVar5)) &&
        (puVar6 = (ushort *)FUN_01afd600(&local_50), puVar6 != (ushort *)0x0)))) {
      *puVar6 = *puVar6 & 0xfff8 | (ushort)iVar1 & 7;
    }
    bVar2 = *(byte *)(param_1 + 0x26c);
  }
  if ((bVar2 >> 1 & 1) != 0) {
    if (*(int *)(param_1 + 0x274) == 2) {
      FUN_007ef010(auStack_52,param_1 + 0x27c);
      FUN_01afde50(&local_50,auStack_52);
    }
    else if (*(int *)(param_1 + 0x274) == 0) {
      FUN_01afdcc4(&local_50,*(undefined4 *)(param_1 + 0x278));
    }
    else {
      FUN_01afdd70(&local_50,*(undefined4 *)(param_1 + 0x278));
    }
  }
  *param_2 = local_48;
  param_2[1] = local_44;
  return;
}


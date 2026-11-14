
void FUN_017f1d4c(long param_1)

{
  short sVar1;
  undefined *puVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *local_50;
  undefined4 local_48;
  undefined4 local_44;
  long local_40;
  undefined8 local_38;
  
  puVar2 = PTR_DAT_04bb43c0;
  uVar5 = *(undefined8 *)PTR_DAT_04bb46d0;
  if (*(short *)(param_1 + 0xd8) != *(short *)PTR_DAT_04bb3170 || *(int *)(param_1 + 0x1f0) != -1) {
    uVar4 = 0x13e;
    goto LAB_017f1f1c;
  }
  sVar1 = *(short *)(param_1 + 0xd0);
  if (sVar1 == -2) {
    local_38 = 0x134b;
    FUN_0277d4ac(&local_38);
    puVar2 = PTR_DAT_04bb43c0;
    local_40 = 0;
    local_50 = PTR_DAT_04bc0510 + 0x10;
    local_48 = (undefined4)local_38;
    local_44 = local_38._4_4_;
    lVar6 = *(long *)PTR_DAT_04bb43c0;
    uVar3 = FUN_0277d6c4(&local_48);
    if (*(long *)puVar2 != 0) {
      lVar6 = *(long *)(lVar6 + 0x57e58);
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
      if ((uVar3 < *(uint *)(lVar6 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
        lVar6 = *(long *)PTR_DAT_04bc0428;
        uVar3 = FUN_0277d6c4(&local_38);
        uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
        if (uVar3 < *(uint *)(lVar6 + 0x1d8)) {
          lVar6 = *(long *)(lVar6 + 0x1e0);
LAB_017f1f04:
          lVar6 = *(long *)(lVar6 + (long)(int)uVar3 * 8);
          if (lVar6 != 0) {
            local_40 = lVar6;
          }
        }
      }
    }
  }
  else {
    local_40 = 0;
    local_48 = CONCAT22(*(undefined2 *)(param_1 + 0xd2),sVar1);
    local_44 = *(undefined4 *)(param_1 + 0xd4);
    local_50 = PTR_DAT_04bc0510 + 0x10;
    lVar6 = *(long *)PTR_DAT_04bb43c0;
    uVar3 = FUN_0277d6c4(&local_48);
    if (*(long *)puVar2 != 0) {
      lVar6 = *(long *)(lVar6 + 0x57e58);
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
      if ((uVar3 < *(uint *)(lVar6 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
        lVar6 = *(long *)PTR_DAT_04bc0428;
        uVar3 = FUN_0277d6c4((short *)(param_1 + 0xd0));
        uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
        if (uVar3 < *(uint *)(lVar6 + 0x1d8)) {
          lVar6 = *(long *)(lVar6 + 0x1e0);
          goto LAB_017f1f04;
        }
      }
    }
  }
  uVar4 = FUN_01b01f10(&local_50);
LAB_017f1f1c:
  FUN_017c1960(uVar5,uVar4);
  return;
}


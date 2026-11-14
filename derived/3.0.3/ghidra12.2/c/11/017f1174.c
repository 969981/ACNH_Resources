
undefined8 FUN_017f1174(long param_1)

{
  short sVar1;
  undefined *puVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *local_48;
  undefined4 local_40;
  undefined4 local_3c;
  long local_38;
  undefined8 local_18;
  
  puVar2 = PTR_DAT_04bb43c0;
  if (*(short *)(param_1 + 0xd8) != *(short *)PTR_DAT_04bb3170 || *(int *)(param_1 + 0x1f0) != -1) {
    return 0x13e;
  }
  sVar1 = *(short *)(param_1 + 0xd0);
  if (sVar1 == -2) {
    local_18 = 0x134b;
    FUN_0277d4ac(&local_18);
    puVar2 = PTR_DAT_04bb43c0;
    local_38 = 0;
    local_48 = PTR_DAT_04bc0510 + 0x10;
    local_40 = (undefined4)local_18;
    local_3c = local_18._4_4_;
    lVar5 = *(long *)PTR_DAT_04bb43c0;
    uVar3 = FUN_0277d6c4(&local_40);
    if (*(long *)puVar2 == 0) goto LAB_017f132c;
    lVar5 = *(long *)(lVar5 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
    if ((*(uint *)(lVar5 + 0x1d8) <= uVar3) ||
       (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar3 * 8) == 0)) goto LAB_017f132c;
    lVar5 = *(long *)PTR_DAT_04bc0428;
    uVar3 = FUN_0277d6c4(&local_18);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
    if (*(uint *)(lVar5 + 0x1d8) <= uVar3) goto LAB_017f132c;
    lVar5 = *(long *)(lVar5 + 0x1e0);
  }
  else {
    local_38 = 0;
    local_40 = CONCAT22(*(undefined2 *)(param_1 + 0xd2),sVar1);
    local_3c = *(undefined4 *)(param_1 + 0xd4);
    local_48 = PTR_DAT_04bc0510 + 0x10;
    lVar5 = *(long *)PTR_DAT_04bb43c0;
    uVar3 = FUN_0277d6c4(&local_40);
    if (*(long *)puVar2 == 0) goto LAB_017f132c;
    lVar5 = *(long *)(lVar5 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
    if ((*(uint *)(lVar5 + 0x1d8) <= uVar3) ||
       (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar3 * 8) == 0)) goto LAB_017f132c;
    lVar5 = *(long *)PTR_DAT_04bc0428;
    uVar3 = FUN_0277d6c4((short *)(param_1 + 0xd0));
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
    if (*(uint *)(lVar5 + 0x1d8) <= uVar3) goto LAB_017f132c;
    lVar5 = *(long *)(lVar5 + 0x1e0);
  }
  lVar5 = *(long *)(lVar5 + (long)(int)uVar3 * 8);
  if (lVar5 != 0) {
    local_38 = lVar5;
  }
LAB_017f132c:
  uVar4 = FUN_01b01f10(&local_48);
  return uVar4;
}


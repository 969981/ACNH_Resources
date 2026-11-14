
undefined8 FUN_017f1348(long param_1,int param_2)

{
  short sVar1;
  short sVar2;
  undefined *puVar3;
  uint uVar4;
  undefined8 uVar5;
  short *psVar6;
  long lVar7;
  undefined *local_48;
  undefined4 local_40;
  undefined4 local_3c;
  long local_38;
  undefined8 local_18;
  
  puVar3 = PTR_DAT_04bb43c0;
  if (*(char *)(param_1 + 0xfe) == '\0') {
    sVar2 = *(short *)(param_1 + 0xd8);
    sVar1 = *(short *)PTR_DAT_04bb3170;
LAB_017f13e0:
    if (sVar2 != sVar1 || *(int *)(param_1 + 0x1f0) != -1) {
      return 0x13e;
    }
    psVar6 = (short *)(param_1 + 0xd0);
    if (*psVar6 != -2) {
      local_40 = CONCAT22(*(undefined2 *)(param_1 + 0xd2),*psVar6);
      local_3c = *(undefined4 *)(param_1 + 0xd4);
      goto LAB_017f14dc;
    }
LAB_017f140c:
    local_18 = 0x134b;
    FUN_0277d4ac(&local_18);
    puVar3 = PTR_DAT_04bb43c0;
    local_38 = 0;
    local_48 = PTR_DAT_04bc0510 + 0x10;
    local_40 = (undefined4)local_18;
    local_3c = local_18._4_4_;
    lVar7 = *(long *)PTR_DAT_04bb43c0;
    uVar4 = FUN_0277d6c4(&local_40);
    if (*(long *)puVar3 == 0) goto LAB_017f1574;
    lVar7 = *(long *)(lVar7 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
    if ((*(uint *)(lVar7 + 0x1d8) <= uVar4) ||
       (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar4 * 8) == 0)) goto LAB_017f1574;
    lVar7 = *(long *)PTR_DAT_04bc0428;
    uVar4 = FUN_0277d6c4(&local_18);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
    if (*(uint *)(lVar7 + 0x1d8) <= uVar4) goto LAB_017f1574;
    lVar7 = *(long *)(lVar7 + 0x1e0);
  }
  else {
    sVar1 = *(short *)PTR_DAT_04bb3170;
    if (*(int *)(param_1 + 0x100) != param_2) {
      sVar2 = *(short *)(param_1 + 0xd8);
      goto LAB_017f13e0;
    }
    if (*(short *)(param_1 + 0xfc) != sVar1 || *(int *)(param_1 + 0x1fc) != -1) {
      return 0x13e;
    }
    psVar6 = (short *)(param_1 + 0xf4);
    if (*psVar6 == -2) goto LAB_017f140c;
    local_40 = CONCAT22(*(undefined2 *)(param_1 + 0xf6),*psVar6);
    local_3c = *(undefined4 *)(param_1 + 0xf8);
LAB_017f14dc:
    local_48 = PTR_DAT_04bc0510 + 0x10;
    local_38 = 0;
    lVar7 = *(long *)PTR_DAT_04bb43c0;
    uVar4 = FUN_0277d6c4(&local_40);
    if (*(long *)puVar3 == 0) goto LAB_017f1574;
    lVar7 = *(long *)(lVar7 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
    if ((*(uint *)(lVar7 + 0x1d8) <= uVar4) ||
       (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar4 * 8) == 0)) goto LAB_017f1574;
    lVar7 = *(long *)PTR_DAT_04bc0428;
    uVar4 = FUN_0277d6c4(psVar6);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
    if (*(uint *)(lVar7 + 0x1d8) <= uVar4) goto LAB_017f1574;
    lVar7 = *(long *)(lVar7 + 0x1e0);
  }
  lVar7 = *(long *)(lVar7 + (long)(int)uVar4 * 8);
  if (lVar7 != 0) {
    local_38 = lVar7;
  }
LAB_017f1574:
  uVar5 = FUN_01b01f10(&local_48);
  return uVar5;
}


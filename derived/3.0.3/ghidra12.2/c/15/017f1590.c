
undefined8 FUN_017f1590(long param_1,int param_2)

{
  short sVar1;
  short sVar2;
  undefined *puVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  short *psVar7;
  undefined *local_48;
  undefined4 local_40;
  undefined4 local_3c;
  long local_38;
  undefined8 local_18;
  
  puVar3 = PTR_DAT_04bb43c0;
  if (*(char *)(param_1 + 0xfe) == '\0') {
    sVar2 = *(short *)(param_1 + 0xd8);
    sVar1 = *(short *)PTR_DAT_04bb3170;
LAB_017f1688:
    if (sVar2 != sVar1 || *(int *)(param_1 + 0x1f0) != -1) {
      return 0x13e;
    }
    psVar7 = (short *)(param_1 + 0xe8);
    if (*psVar7 == -2) {
LAB_017f16b4:
      local_18 = 0x134b;
      FUN_0277d4ac(&local_18);
      puVar3 = PTR_DAT_04bb43c0;
      local_38 = 0;
      local_48 = PTR_DAT_04bc0510 + 0x10;
      local_40 = (undefined4)local_18;
      local_3c = local_18._4_4_;
      lVar6 = *(long *)PTR_DAT_04bb43c0;
      uVar4 = FUN_0277d6c4(&local_40);
      if (*(long *)puVar3 == 0) goto LAB_017f17f0;
      lVar6 = *(long *)(lVar6 + 0x57e58);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
      if ((*(uint *)(lVar6 + 0x1d8) <= uVar4) ||
         (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar4 * 8) == 0)) goto LAB_017f17f0;
      psVar7 = (short *)&local_18;
    }
    else {
      local_38 = 0;
      local_40 = CONCAT22(*(undefined2 *)(param_1 + 0xea),*psVar7);
      local_3c = *(undefined4 *)(param_1 + 0xec);
      local_48 = PTR_DAT_04bc0510 + 0x10;
      lVar6 = *(long *)PTR_DAT_04bb43c0;
      uVar4 = FUN_0277d6c4(&local_40);
      if (*(long *)puVar3 == 0) goto LAB_017f17f0;
      lVar6 = *(long *)(lVar6 + 0x57e58);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
      if ((*(uint *)(lVar6 + 0x1d8) <= uVar4) ||
         (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar4 * 8) == 0)) goto LAB_017f17f0;
    }
  }
  else {
    sVar1 = *(short *)PTR_DAT_04bb3170;
    if (*(int *)(param_1 + 0x100) != param_2) {
      sVar2 = *(short *)(param_1 + 0xd8);
      goto LAB_017f1688;
    }
    if (*(short *)(param_1 + 0xfc) != sVar1 || *(int *)(param_1 + 0x1fc) != -1) {
      return 0x13e;
    }
    if (*(short *)(param_1 + 0x114) == -2) goto LAB_017f16b4;
    local_38 = 0;
    local_40 = CONCAT22(*(undefined2 *)(param_1 + 0x116),*(short *)(param_1 + 0x114));
    local_3c = *(undefined4 *)(param_1 + 0x118);
    local_48 = PTR_DAT_04bc0510 + 0x10;
    lVar6 = *(long *)PTR_DAT_04bb43c0;
    uVar4 = FUN_0277d6c4(&local_40);
    if (*(long *)puVar3 == 0) goto LAB_017f17f0;
    lVar6 = *(long *)(lVar6 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
    if ((*(uint *)(lVar6 + 0x1d8) <= uVar4) ||
       (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar4 * 8) == 0)) goto LAB_017f17f0;
    psVar7 = (short *)(param_1 + 0x114);
  }
  lVar6 = *(long *)PTR_DAT_04bc0428;
  uVar4 = FUN_0277d6c4(psVar7);
  uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
  if (uVar4 < *(uint *)(lVar6 + 0x1d8)) {
    lVar6 = *(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar4 * 8);
    if (lVar6 != 0) {
      local_38 = lVar6;
    }
  }
LAB_017f17f0:
  uVar5 = FUN_01b01f10(&local_48);
  return uVar5;
}


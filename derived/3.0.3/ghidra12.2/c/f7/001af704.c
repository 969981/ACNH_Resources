
undefined4 FUN_001af704(void)

{
  undefined *puVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint *puVar5;
  long lVar6;
  long *plVar7;
  undefined *local_a8;
  undefined *puStack_a0;
  undefined1 local_98 [16];
  undefined1 *local_88;
  undefined8 uStack_80;
  undefined2 local_78;
  undefined *local_70;
  undefined1 local_68 [16];
  undefined1 *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38;
  
  puVar1 = PTR_DAT_04bcb900;
  plVar7 = (long *)(PTR_DAT_04bcb900 + 0x18);
  if (*PTR_DAT_04bcb908 != '\0') {
    puVar5 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    uVar2 = *puVar5;
    if (uVar2 != 0) {
      lVar6 = **(long **)(puVar1 + 0xa0);
      if ((ulong)((*(long **)(puVar1 + 0xa0))[1] - lVar6 >> 3) <= (ulong)uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h",
                     0x47,0xe0000003,0);
      }
      plVar7 = (long *)(*(long *)(lVar6 + (ulong)uVar2 * 8) + 0x10);
    }
  }
  if ((*plVar7 == 0) || (lVar6 = *(long *)(*plVar7 + 0x10), lVar6 == 0)) {
    lVar6 = 0;
  }
  else {
    lVar6 = *(long *)(lVar6 + 0xe8);
  }
  local_88 = local_98;
  local_98[0] = 0;
  uStack_80 = 0x10;
  local_a8 = PTR_DAT_04bcc2d8 + 0x10;
  puVar1 = PTR_DAT_04bc0ec8 + 0x10;
  puStack_a0 = puVar1;
  FUN_0018b070(&puStack_a0,*(undefined8 *)(lVar6 + 0x168),0xffffffffffffffff);
  local_78 = *(undefined2 *)(lVar6 + 0x178);
  local_58 = local_68;
  local_68[0] = 0;
  uStack_50 = 0x10;
  local_70 = puVar1;
  FUN_0018b070(&local_70,*(undefined8 *)(lVar6 + 0x198),0xffffffffffffffff);
  uStack_40 = *(undefined8 *)(lVar6 + 0x1b0);
  local_38 = *(undefined1 *)(lVar6 + 0x1b8);
  local_48._4_4_ = (int)((ulong)*(undefined8 *)(lVar6 + 0x1a8) >> 0x20);
  iVar4 = local_48._4_4_;
  local_48 = *(undefined8 *)(lVar6 + 0x1a8);
  FUN_001abf78(&local_a8);
  uVar3 = *(undefined4 *)PTR_DAT_04bcc450;
  if (iVar4 == 2) {
    uVar3 = 1;
  }
  return uVar3;
}


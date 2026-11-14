
void FUN_01da9600(void)

{
  uint *puVar1;
  int iVar2;
  byte bVar3;
  undefined *puVar4;
  byte *pbVar5;
  long lVar6;
  undefined8 local_78;
  char *pcStack_70;
  byte local_64 [4];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  ulong local_38;
  
  puVar4 = PTR_DAT_04bb27d0;
  local_50 = 0;
  uStack_48 = 0;
  local_38 = local_38 & 0xffffff0000000000;
  iVar2 = *(int *)(*(long *)(*(long *)PTR_DAT_04bb27d0 + 0x10) + 0xaa0);
  FUN_01dca358(*(undefined8 *)PTR_DAT_04bbaed0,&local_60);
  local_78 = (undefined *)((ulong)local_78._7_1_ << 0x38);
  local_78._0_6_ = 0xff0600000000;
  if (-1 < *(int *)(PTR_DAT_04bc14d0 + 8)) {
    FUN_01db1df0(**(long **)puVar4 + 0x480,*(int *)(PTR_DAT_04bc14d0 + 8),&local_78,&local_60,0x30,0
                );
  }
  if (iVar2 == 3) {
    return;
  }
  local_40 = 0xffffffffffffffff;
  local_38 = 0xffffffffffffffff;
  local_50 = 0xffffffffffffffff;
  uStack_48 = 0xffffffffffffffff;
  local_60 = 0xffffffffffffffff;
  uStack_58 = 0xffffffffffffffff;
  FUN_020d3300(&local_60);
  local_78._6_2_ = local_78._6_2_ & 0xff00;
  local_78 = (undefined *)CONCAT26(local_78._6_2_,0xff0100000000);
  if (-1 < DAT_053d0950) {
    FUN_01db1df0(**(long **)puVar4 + 0x480,DAT_053d0950,&local_78,&local_60,0x30,0);
  }
  DAT_05453f08 = 0;
  memset(&DAT_05407648,0,0x13230);
  FUN_0268abb0(&DAT_05407648);
  memset(&DAT_0541a878,0,0x13230);
  FUN_0268abb0(&DAT_0541a878);
  memset(&DAT_0542daa8,0,0x13230);
  FUN_0268abb0(&DAT_0542daa8);
  lVar6 = *(long *)PTR_DAT_04bb39b0;
  pbVar5 = PTR_DAT_04bb32e0;
  if (lVar6 == 0) {
LAB_01da97b4:
    if (7 < *pbVar5) {
LAB_01da97c0:
      if (*(long **)puVar4 != (long *)0x0) {
        lVar6 = **(long **)puVar4;
        bVar3 = *(byte *)(lVar6 + 0x473);
        pbVar5 = PTR_DAT_04bb5038;
        if ((long)(char)bVar3 != 0xffffffffffffffff) {
          puVar1 = (uint *)(lVar6 + 0x48) + ((long)(char)bVar3 & 0xffffffffU) * 0x20;
          if (7 < bVar3) {
            puVar1 = (uint *)(lVar6 + 0x48);
          }
          if ((*puVar1 & 8) != 0) {
            pbVar5 = (byte *)(lVar6 + 0x471);
          }
        }
        local_64[0] = *pbVar5;
        if (local_64[0] < 8) goto LAB_01da9838;
      }
      pbVar5 = PTR_DAT_04bb5038;
    }
  }
  else {
    if (*(int *)(lVar6 + 0x15c) != 0) {
      pbVar5 = (byte *)(lVar6 + 0x158);
    }
    if (7 < *pbVar5) {
      if ((*(int *)(lVar6 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar5 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_01da97b4;
      }
      goto LAB_01da97c0;
    }
  }
  local_64[0] = *pbVar5;
  if (7 < local_64[0]) {
    local_64[0] = 0xff;
  }
LAB_01da9838:
  local_78 = PTR_DAT_04bb2020 + 0x10;
  pcStack_70 = "InducedNpcNum";
  FUN_0274bfe8(local_64,&local_78,0);
  FUN_021c2ea8(&DAT_05453f20,&local_60);
  return;
}



void FUN_01dad160(void)

{
  int iVar1;
  undefined *puVar2;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulong local_30;
  undefined4 local_28;
  undefined2 local_24;
  undefined1 local_22;
  
  puVar2 = PTR_DAT_04bb27d0;
  local_48 = 0;
  uStack_40 = 0;
  local_30 = local_30 & 0xffffff0000000000;
  iVar1 = *(int *)(*(long *)(*(long *)PTR_DAT_04bb27d0 + 0x10) + 0xaa0);
  FUN_01dca358(*(undefined8 *)PTR_DAT_04bbaed0,&local_58);
  local_28 = 0;
  local_22 = 0;
  local_24 = 0xff00;
  if (-1 < *(int *)(PTR_DAT_04bc14d0 + 8)) {
    FUN_01db1df0(**(long **)puVar2 + 0x480,*(int *)(PTR_DAT_04bc14d0 + 8),&local_28,&local_58,0x30,0
                );
  }
  if (iVar1 != 3) {
    local_38 = 0xffffffffffffffff;
    local_30 = 0xffffffffffffffff;
    local_48 = 0xffffffffffffffff;
    uStack_40 = 0xffffffffffffffff;
    local_58 = 0xffffffffffffffff;
    uStack_50 = 0xffffffffffffffff;
    FUN_020d3300(&local_58);
    local_28 = 0;
    local_22 = 0;
    local_24 = 0xff01;
    if (-1 < DAT_053d0950) {
      FUN_01db1df0(**(long **)puVar2 + 0x480,DAT_053d0950,&local_28,&local_58,0x30,0);
    }
    DAT_05453f08 = 0;
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x025447f8) */

bool FUN_025446cc(byte *param_1)

{
  bool bVar1;
  uint uVar2;
  byte local_50 [4];
  undefined8 local_4c;
  undefined4 local_44;
  undefined2 local_40;
  byte local_3e;
  byte local_3d;
  undefined4 local_3c;
  undefined2 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined8 local_2c;
  undefined4 local_24;
  
  if ((((*param_1 < 8) && (uVar2 = FUN_02582d8c(param_1,1), uVar2 < 8)) &&
      (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar2 * 0x13f0 + 0x13d4) != '\0')) &&
     (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar2 * 0x13f0 + 0x13d6) != '\0')) {
    local_50[0] = *param_1;
    local_4c = *(undefined8 *)(param_1 + 4);
    local_44 = *(undefined4 *)(param_1 + 0xc);
    local_40 = *(undefined2 *)(param_1 + 0x10);
    local_3c = *(undefined4 *)(param_1 + 0x14);
    if (7 < local_50[0]) {
      local_50[0] = 0xff;
    }
    local_3d = param_1[0x13];
    local_3e = param_1[0x12];
    local_38 = *(undefined2 *)PTR_DAT_04bb6298;
    bVar1 = DAT_04d01598 != 0;
    if (DAT_04d01598 != 0) {
      local_34 = CONCAT13(local_3d,CONCAT12(local_3e,local_40));
      local_30 = local_3c;
      local_2c = local_4c;
      local_24 = local_44;
      FUN_009a6364(DAT_04d01598,&local_34,local_50);
    }
    local_34 = 0;
    uVar2 = (uint)local_30 >> 0x10;
    local_30 = CONCAT22((ushort)uVar2 & 0xff00,0xff00);
    if (-1 < *(int *)(PTR_DAT_04bc31c8 + 0x120)) {
      FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,*(int *)(PTR_DAT_04bc31c8 + 0x120),&local_34,
                   local_50,0x1c,0);
    }
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}


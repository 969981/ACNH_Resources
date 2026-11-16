
undefined8 FUN_028eb200(long param_1,undefined2 *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined *local_48;
  undefined1 *puStack_40;
  undefined4 local_38;
  undefined1 local_34 [7];
  undefined1 local_2d;
  uint local_28;
  undefined8 local_24;
  undefined4 local_1c;
  undefined1 local_18;
  uint local_14;
  
  if (-1 < *(int *)(param_2 + 8)) {
    iVar1 = 0;
    iVar2 = 0;
    do {
      uVar3 = (uint)*(byte *)(param_1 + (long)iVar2 * 0x1178 + 2);
      local_48 = (undefined *)CONCAT44(local_48._4_4_,uVar3);
      if (uVar3 == *(uint *)(param_2 + 2)) {
        local_28 = (uint)*(byte *)(param_1 + (long)iVar2 * 0x1178 + 4);
        if (2 < local_28) {
          local_28 = 0;
        }
        if (local_28 == *(uint *)(param_2 + 4)) {
          local_14 = (uint)*(ushort *)(param_1 + (long)iVar2 * 0x1178 + 6);
          if (0x14 < local_14) {
            local_14 = 0;
          }
          if (local_14 == *(uint *)(param_2 + 6)) {
            iVar1 = iVar1 + 1;
          }
        }
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 != 0x26);
    if (*(int *)(param_2 + 8) <= iVar1) {
      return 0;
    }
  }
  iVar2 = 0;
  do {
    if ((*(byte *)(param_1 + (long)iVar2 * 0x1178 + 3) & 1) == 0) {
      local_24 = *(undefined8 *)(param_2 + 2);
      local_28 = CONCAT22(local_28._2_2_,*param_2);
      local_1c = *(undefined4 *)(param_2 + 6);
      local_18 = *(undefined1 *)(param_2 + 10);
      FUN_028e414c(param_1 + (long)iVar2 * 0x1178,&local_28);
      local_2d = 0;
      local_38 = 8;
      puStack_40 = local_34;
      local_34[0] = 0;
      local_48 = PTR_DAT_04bb3768 + 0x10;
      FUN_0376b510(&local_48,(undefined2)local_28);
      return 1;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 != 0x26);
  return 0;
}


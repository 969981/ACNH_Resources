
void FUN_020fcb1c(long param_1,byte *param_2)

{
  ulong uVar1;
  uint local_48;
  uint local_44;
  undefined *local_40;
  undefined1 *puStack_38;
  undefined4 local_30;
  undefined1 local_2c [7];
  undefined1 local_25;
  
  uVar1 = (ulong)*param_2;
  if (((uVar1 < 0x23) && (param_2[1] <= (byte)(&DAT_053e6e93)[uVar1])) &&
     (((uint)(&DAT_053e6eb8)[uVar1] >> (ulong)(param_2[1] & 0x1f) & 1) != 0)) {
    local_25 = 0;
    local_30 = 8;
    local_2c[0] = 0;
    puStack_38 = local_2c;
    local_40 = PTR_DAT_04bb3768 + 0x10;
    FUN_038d1270(&local_40,"-----");
    if ((ulong)*param_2 < 0x23) {
      FUN_038d1270(&local_40,"%s%02d",*(undefined8 *)(PTR_DAT_04bb9e38 + (ulong)*param_2 * 8 + 0xb0)
                   ,param_2[1]);
    }
    local_44 = 0;
    uVar1 = FUN_020fc100(&local_44,&local_48,&local_40);
    if (((uVar1 & 1) != 0) && (uVar1 = (ulong)local_44, local_48 < 0x20)) {
      if (0x22 < local_44) {
        uVar1 = 0;
      }
      *(uint *)(param_1 + uVar1 * 4) =
           *(uint *)(param_1 + uVar1 * 4) & (1 << (ulong)(local_48 & 0x1f) ^ 0xffffffffU);
    }
  }
  return;
}


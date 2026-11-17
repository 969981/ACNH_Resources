
bool FUN_02a228a8(long *param_1,int param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined1 *local_170;
  undefined8 uStack_168;
  undefined1 local_160 [256];
  undefined8 local_60;
  long *local_58;
  undefined2 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined *puStack_30;
  undefined1 *local_28;
  
  local_160[0] = 0;
  local_170 = local_160;
  uStack_168 = 0x10000000000;
  uVar1 = param_2 - 1;
  if ((uVar1 < 7) && ((0x55U >> (ulong)(uVar1 & 0x1f) & 1) != 0)) {
    FUN_038d16fc(&local_170,(&PTR_s_BGM_KappeiSong_Way_A__02d_04a99ad8)[(int)uVar1]);
    local_60 = 0;
    local_58 = (long *)0x0;
    local_50 = 0xff;
    local_48 = 0;
    uStack_40 = 0;
    local_28 = local_170;
    puStack_30 = PTR_DAT_04bb2020 + 0x10;
    local_38 = 0;
    uVar2 = FUN_02a0c5d4(*(long *)PTR_DAT_04bb26a8 + 0xa5968,&local_60,&puStack_30);
    if ((uVar2 & 1) != 0) {
      if (local_58 != (long *)0x0) {
        if (*(uint *)(local_58 + 3) == 0) {
          local_58 = (long *)0x0;
        }
        else {
          local_58 = (long *)((ulong)*(uint *)(local_58 + 3) + (long)local_58);
          if (*local_58 != 0x101feff464e494d) {
            local_58 = (long *)0x0;
          }
        }
      }
      *param_1 = (long)local_58;
      return local_58 != (long *)0x0;
    }
  }
  return false;
}


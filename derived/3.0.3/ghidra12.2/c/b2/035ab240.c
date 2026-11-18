
bool FUN_035ab240(undefined4 param_1,undefined4 param_2,long param_3,undefined8 param_4)

{
  bool bVar1;
  ulong uVar2;
  undefined8 local_50;
  undefined8 local_48;
  undefined *local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  
  local_50 = 0;
  local_48 = 0;
  local_40 = PTR_DAT_04bb2010 + 0x10;
  local_38 = param_1;
  uStack_34 = param_2;
  uVar2 = FUN_009493f8(*(undefined8 *)(param_3 + 8),&local_40,&local_50,(ulong)&local_50 | 4,
                       &local_48,(long)&local_48 + 4);
  if ((((((uVar2 & 1) == 0) || (((uint)local_50 | 2) == 10)) || ((local_50._4_4_ | 2) == 10)) ||
      (((((uint)local_48 | 2) == 10 || ((local_48._4_4_ & 0xfffffffd) == 8)) ||
       ((uVar2 = FUN_035a99c0(&local_50,param_4), (uVar2 & 1) != 0 ||
        ((uVar2 = FUN_00975ae0(&local_50), (uVar2 & 1) != 0 ||
         (uVar2 = FUN_00975ae0((ulong)&local_50 | 4), (uVar2 & 1) != 0)))))))) ||
     (uVar2 = FUN_00975ae0(&local_48), (uVar2 & 1) != 0)) {
    bVar1 = true;
  }
  else {
    uVar2 = FUN_00975ae0((long)&local_48 + 4);
    bVar1 = true;
    if (((((uVar2 & 1) == 0) && ((uint)local_50 != 0x1c)) && (local_50._4_4_ != 0x1c)) &&
       ((uint)local_48 != 0x1c)) {
      bVar1 = local_48._4_4_ == 0x1c;
    }
  }
  return bVar1;
}



ulong FUN_00215ad0(long param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined4 local_3c;
  int local_38 [6];
  
  local_3c = 0x80680001;
  FUN_0018aa70(local_38,&local_3c);
  if (*(int *)(param_1 + 0x218) != local_38[0]) {
    local_3c = 0x80680010;
    FUN_0018aa70(local_38,&local_3c);
    if (*(int *)(param_1 + 0x218) == local_38[0]) {
      snprintf((char *)local_38,9,"2%03d%04d",*(uint *)(param_1 + 0x238) & 0x1ff,
               *(uint *)(param_1 + 0x238) >> 9 & 0x1fff);
      uVar1 = atoi((char *)local_38);
      return (ulong)uVar1;
    }
  }
  uVar2 = FUN_0018729c((int *)(param_1 + 0x218));
  return uVar2;
}


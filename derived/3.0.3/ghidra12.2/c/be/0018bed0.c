
ulong FUN_0018bed0(long param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  size_t sVar2;
  ulong uVar3;
  char *__s;
  ulong local_28;
  
  __s = *(char **)(param_1 + 0x18);
  sVar2 = strlen(__s);
  if (__s == (char *)0x0) {
    return 0xffffffff;
  }
  uVar1 = sVar2 + 1;
  local_28 = (sVar2 >> 2) * 3;
  if (1 < uVar1) {
    uVar3 = local_28 - sVar2;
    do {
      if (__s[sVar2 - 1] != '=') goto LAB_0018bf30;
      sVar2 = sVar2 - 1;
      local_28 = local_28 - 1;
    } while (sVar2 != 0);
    local_28 = uVar3;
  }
LAB_0018bf30:
  if (param_2 != 0) {
    if (local_28 <= param_3) {
      FUN_0018bcf0(__s,uVar1,param_2,&local_28);
      return local_28;
    }
    local_28 = 0xffffffff;
  }
  return local_28;
}


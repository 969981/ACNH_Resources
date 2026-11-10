
ulong FUN_0018619c(long param_1,char *param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined1 auStack_1e0 [128];
  char acStack_140 [256];
  
  uVar1 = vsnprintf(acStack_140,0x100,param_2,auStack_1e0 + 0x80);
  uVar2 = (ulong)uVar1;
  if (*(char **)(param_1 + 0x18) != acStack_140) {
    uVar2 = FUN_0018b070(param_1,acStack_140,0xffffffffffffffff);
  }
  return uVar2;
}


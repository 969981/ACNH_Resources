
ulong FUN_00471420(long *param_1,char *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar1 = FUN_00446800(param_2);
  uVar3 = *(uint *)((long)param_1 + 0xc);
  uVar6 = (ulong)(uVar3 & uVar1);
  lVar4 = *param_1;
  uVar5 = *(ulong *)(lVar4 + uVar6 * 0x18);
  if (uVar5 != 0xffffffffffffffff) {
    do {
      if (uVar5 == uVar1) {
        iVar2 = strcmp(param_2,*(char **)(lVar4 + uVar6 * 0x18 + 8));
        if (iVar2 == 0) {
          return uVar6;
        }
        uVar3 = *(uint *)((long)param_1 + 0xc);
        lVar4 = *param_1;
      }
      uVar6 = uVar6 + 1 & (long)(int)uVar3;
      uVar5 = *(ulong *)(lVar4 + uVar6 * 0x18);
    } while (uVar5 != 0xffffffffffffffff);
  }
  return (long)(int)(uVar3 + 1);
}


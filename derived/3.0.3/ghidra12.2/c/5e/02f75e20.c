
void FUN_02f75e20(long *param_1,long param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  undefined *local_78;
  undefined1 *puStack_70;
  undefined4 local_68;
  undefined1 local_64 [63];
  undefined1 local_25;
  undefined8 local_20;
  int local_18;
  uint local_14;
  
  lVar3 = *param_1;
  if ((lVar3 != 0) && (*(char *)(lVar3 + 0x2a0) != '\0')) {
    local_25 = 0;
    local_68 = 0x40;
    puStack_70 = local_64;
    local_64[0] = 0;
    local_78 = PTR_DAT_04bb2bc0 + 0x10;
    local_20 = 0;
    if (param_2 != 0) {
      if (*(uint *)(param_2 + 0x210) <= param_3) {
        param_3 = 0;
      }
      local_20 = *(undefined8 *)(*(long *)(param_2 + 0x218) + (long)(int)param_3 * 8);
    }
    iVar1 = *(int *)(lVar3 + 0x260);
    local_18 = **(int **)PTR_DAT_04bb3448;
    if (local_18 == 0xc) {
      iVar2 = iVar1 % 10;
      iVar1 = iVar1 % 100;
      if (iVar2 == 1 && iVar1 != 0xb) {
        local_14 = 1;
      }
      else if ((((iVar2 == 2) && (iVar1 != 0xc)) || ((iVar2 == 3 && (iVar1 != 0xd)))) ||
              ((local_14 = 3, iVar2 == 4 && (iVar1 != 0xe)))) {
        local_14 = 2;
      }
    }
    else {
      uVar4 = 3;
      if (iVar1 == 0) {
        uVar4 = 1;
      }
      local_14 = 2;
      if (iVar1 != 1) {
        local_14 = uVar4;
      }
    }
    lVar3 = *(long *)PTR_DAT_04bb28f8 + 0x29f8 + (ulong)local_14 * 0x128;
    if (0x50 < local_14) {
      lVar3 = *(long *)PTR_DAT_04bb28f8 + 0x29f8;
    }
    FUN_034632e0(&local_78,lVar3);
  }
  return;
}


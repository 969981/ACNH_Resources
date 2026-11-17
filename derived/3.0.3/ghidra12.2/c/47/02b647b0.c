
/* WARNING: Removing unreachable block (ram,0x02b648c4) */
/* WARNING: Removing unreachable block (ram,0x02b6487c) */
/* WARNING: Removing unreachable block (ram,0x02b64858) */
/* WARNING: Removing unreachable block (ram,0x02b648a0) */
/* WARNING: Removing unreachable block (ram,0x02b648e8) */

undefined8 FUN_02b647b0(undefined4 *param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_24;
  
  if (param_1 == (undefined4 *)0x0) {
    return 0;
  }
  uVar4 = FUN_02a8f648(param_2);
  if ((uVar4 & 1) == 0) {
    uVar4 = FUN_02a8ec10(param_2);
    if ((uVar4 & 1) == 0) {
      return 0;
    }
    iVar1 = *(int *)(param_2 + 0xc);
    if (iVar1 != 0x1e) {
      local_38 = (undefined *)CONCAT44(local_38._4_4_,iVar1);
      local_24 = 0;
      if ((((DAT_05641c34 != iVar1) && (local_24 = 1, DAT_05641c38 != iVar1)) &&
          (local_24 = 2, DAT_05641c3c != iVar1)) &&
         ((local_24 = 3, DAT_05641c40 != iVar1 && (local_24 = 4, DAT_05641c44 != iVar1)))) {
        local_38 = (undefined *)((ulong)local_38._4_4_ << 0x20);
        uVar5 = FUN_02b677c0(&local_38);
        uVar4 = (ulong)local_38 & 0xffffffff;
        if ((uVar5 & 1) == 0) {
          uVar4 = 0;
        }
        uVar2 = FUN_02b5afe0(uVar4);
        local_30 = 0;
        local_38 = PTR_DAT_04bc4760 + 0x10;
        lVar6 = *(long *)PTR_DAT_04bb5008;
        uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x5f0);
        if (uVar2 < *(uint *)(lVar6 + 0x5d0)) {
          local_30 = *(undefined8 *)(*(long *)(lVar6 + 0x5d8) + (long)(int)uVar2 * 8);
        }
        uVar3 = FUN_02ad16b0(&local_38);
        goto LAB_02b64920;
      }
    }
    FUN_02b72930(&local_38);
    uVar3 = FUN_02b72b80(&local_38);
  }
  else {
    uVar2 = FUN_02b58c80(*(undefined4 *)(param_2 + 0xc),*(byte *)(param_2 + 8) & 1);
    local_38 = PTR_DAT_04bc48d8 + 0x10;
    lVar6 = *(long *)PTR_DAT_04bb5008;
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x9f0);
    if (uVar2 < *(uint *)(lVar6 + 0x9d0)) {
      local_30 = *(undefined8 *)(*(long *)(lVar6 + 0x9d8) + (long)(int)uVar2 * 8);
    }
    else {
      local_30 = 0;
    }
    uVar3 = FUN_02b04890(&local_38);
  }
LAB_02b64920:
  *param_1 = uVar3;
  return 1;
}


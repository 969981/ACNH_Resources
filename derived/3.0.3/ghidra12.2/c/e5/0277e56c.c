
void FUN_0277e56c(undefined4 *param_1,uint param_2)

{
  uint uVar1;
  long lVar2;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_18;
  undefined4 uStack_14;
  
  lVar2 = *(long *)PTR_DAT_04bbbc68;
  if (((((lVar2 != 0) && (*(long *)(lVar2 + 0xb0) != 0)) &&
       (*(long *)(*(long *)(lVar2 + 0xb0) + 8) != 0)) &&
      ((*(long *)(lVar2 + 0x488) != 0 && (*(long *)(*(long *)(lVar2 + 0x488) + 8) != 0)))) &&
     ((*(long *)(lVar2 + 0x2b0) != 0 && (*(long *)(*(long *)(lVar2 + 0x2b0) + 8) != 0)))) {
    uVar1 = FUN_0277d6c4(param_1);
    uVar1 = (uVar1 & 0xffff) - (uint)*(ushort *)(lVar2 + 0x1f8);
    if ((uVar1 < *(uint *)(lVar2 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar2 + 0x1e0) + (long)(int)uVar1 * 8) != 0)) {
      local_38 = *param_1;
      uStack_34 = param_1[1];
      FUN_0124c1e8(&local_18,&local_38,param_2 & 1);
      goto LAB_0277e66c;
    }
  }
  lVar2 = *(long *)PTR_DAT_04bb43c0;
  uVar1 = FUN_0277d6c4(param_1);
  if (lVar2 == 0) {
    return;
  }
  lVar2 = *(long *)(lVar2 + 0x57e58);
  uVar1 = (uVar1 & 0xffff) - (uint)*(ushort *)(lVar2 + 0x1f8);
  if (*(uint *)(lVar2 + 0x1d8) <= uVar1) {
    return;
  }
  if (*(long *)(*(long *)(lVar2 + 0x1e0) + (long)(int)uVar1 * 8) == 0) {
    return;
  }
  local_40 = *param_1;
  uStack_3c = param_1[1];
  FUN_01b09000(&local_18,&local_40);
LAB_0277e66c:
  *param_1 = local_18;
  param_1[1] = uStack_14;
  return;
}


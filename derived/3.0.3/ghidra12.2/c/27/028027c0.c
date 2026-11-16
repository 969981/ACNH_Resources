
uint FUN_028027c0(long param_1,short *param_2)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  undefined *local_48;
  short local_40;
  short local_3e;
  undefined4 local_3c;
  long local_38;
  
  puVar1 = PTR_DAT_04bb43c0;
  local_40 = *param_2;
  if (local_40 == -2) {
    return 0;
  }
  local_3e = param_2[1];
  local_38 = 0;
  local_3c = *(undefined4 *)(param_2 + 2);
  local_48 = PTR_DAT_04bc0510 + 0x10;
  lVar5 = *(long *)PTR_DAT_04bb43c0;
  uVar2 = FUN_0277d6c4(&local_40);
  if (*(long *)puVar1 != 0) {
    lVar5 = *(long *)(lVar5 + 0x57e58);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
    if ((uVar2 < *(uint *)(lVar5 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
      lVar5 = *(long *)PTR_DAT_04bc0428;
      uVar2 = FUN_0277d6c4(param_2);
      uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
      if ((uVar2 < *(uint *)(lVar5 + 0x1d8)) &&
         (lVar5 = *(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar2 * 8), lVar5 != 0)) {
        local_38 = lVar5;
      }
    }
  }
  uVar3 = FUN_01af0020(&local_48);
  if ((uVar3 & 1) == 0) {
    uVar2 = *(uint *)(param_1 + 72000);
    if (8999 < uVar2) {
      uVar2 = 9000;
    }
    if (uVar2 != 0) {
      lVar5 = 0;
      iVar4 = 0;
      do {
        if (*(short *)(param_1 + lVar5) == -2) {
          uVar2 = 0;
          if (iVar4 == 1) goto LAB_02802900;
          uVar3 = FUN_0277e9e0(param_2);
          if ((uVar3 & 1) != 0) {
            uVar2 = FUN_026825d0(param_1,-iVar4,param_2,0);
            goto LAB_02802900;
          }
          break;
        }
        lVar5 = lVar5 + 8;
        iVar4 = iVar4 + -1;
      } while ((ulong)uVar2 * 8 != lVar5);
    }
  }
  uVar2 = 0;
LAB_02802900:
  return uVar2 & 1;
}


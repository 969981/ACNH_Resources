
uint FUN_027fd0ac(undefined8 param_1,short *param_2)

{
  undefined *puVar1;
  uint uVar2;
  undefined4 uVar3;
  ulong uVar4;
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
  uVar4 = FUN_01af0020(&local_48);
  if ((uVar4 & 1) == 0) {
    uVar3 = 1;
  }
  else {
    uVar3 = FUN_01af02d0(&local_48);
  }
  uVar2 = FUN_027fc900(param_1,param_2,uVar3);
  return uVar2 & 1;
}


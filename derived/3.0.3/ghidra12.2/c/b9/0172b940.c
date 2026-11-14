
void FUN_0172b940(long param_1,short *param_2)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  undefined4 uVar4;
  undefined *local_48;
  short local_40;
  undefined1 local_3e;
  undefined1 local_3d;
  undefined4 local_3c;
  long local_38;
  
  local_40 = *param_2;
  *(short *)(param_1 + 0x98) = local_40;
  local_3e = (undefined1)param_2[1];
  *(undefined1 *)(param_1 + 0x9a) = local_3e;
  local_3d = *(undefined1 *)((long)param_2 + 3);
  *(undefined1 *)(param_1 + 0x9b) = local_3d;
  local_3c = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)(param_1 + 0x9c) = local_3c;
  puVar1 = PTR_DAT_04bb43c0;
  if (local_40 == -2) {
    uVar4 = 0x3f800000;
  }
  else {
    local_48 = PTR_DAT_04bc0510 + 0x10;
    local_38 = 0;
    lVar3 = *(long *)PTR_DAT_04bb43c0;
    uVar2 = FUN_0277d6c4(&local_40);
    if (*(long *)puVar1 != 0) {
      lVar3 = *(long *)(lVar3 + 0x57e58);
      uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar3 + 0x1f8);
      if ((uVar2 < *(uint *)(lVar3 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar3 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
        lVar3 = *(long *)PTR_DAT_04bc0428;
        uVar2 = FUN_0277d6c4((short *)(param_1 + 0x98));
        uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar3 + 0x1f8);
        if ((uVar2 < *(uint *)(lVar3 + 0x1d8)) &&
           (lVar3 = *(long *)(*(long *)(lVar3 + 0x1e0) + (long)(int)uVar2 * 8), lVar3 != 0)) {
          local_38 = lVar3;
        }
      }
    }
    FUN_01af93e8(&local_48);
    uVar4 = FUN_01afa110(&local_48);
  }
  *(undefined4 *)(param_1 + 0x78) = uVar4;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02612588(undefined4 *param_1,ushort *param_2)

{
  ushort uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  uint uVar4;
  long lVar5;
  undefined *local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  long local_40;
  undefined8 local_38;
  
  uVar3 = DAT_0558600c;
  uVar1 = *param_2;
  if ((uVar1 < 0x800) &&
     ((*(byte *)(*(long *)PTR_DAT_04bb46f0 + (ulong)(uVar1 >> 3) + 0xe99e0) >> (ulong)(uVar1 & 7) &
      1) != 0)) {
    local_38 = 0x16a2;
    FUN_0277d4ac(&local_38);
    puVar2 = PTR_DAT_04bb43c0;
    local_40 = 0;
    local_50 = PTR_DAT_04bc0510 + 0x10;
    local_48 = (undefined4)local_38;
    uStack_44 = local_38._4_4_;
    lVar5 = *(long *)PTR_DAT_04bb43c0;
    uVar4 = FUN_0277d6c4(&local_48);
    if (*(long *)puVar2 != 0) {
      lVar5 = *(long *)(lVar5 + 0x57e58);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
      if ((uVar4 < *(uint *)(lVar5 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
        lVar5 = *(long *)PTR_DAT_04bc0428;
        uVar4 = FUN_0277d6c4(&local_38);
        uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
        if ((uVar4 < *(uint *)(lVar5 + 0x1d8)) &&
           (lVar5 = *(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar4 * 8), lVar5 != 0)) {
          local_40 = lVar5;
        }
      }
    }
    FUN_01b05d88(&local_50,*param_2);
    *param_1 = local_48;
    param_1[1] = uStack_44;
  }
  else {
    *param_1 = _DAT_05586008;
    param_1[1] = uVar3;
  }
  return;
}


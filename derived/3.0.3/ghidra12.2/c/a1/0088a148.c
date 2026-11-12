
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0088a148(undefined4 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined *local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  long local_38;
  
  puVar1 = PTR_DAT_04bb43c0;
  lVar5 = *(long *)PTR_DAT_04bb43c0;
  uVar2 = FUN_0277d6c4(param_3);
  uVar4 = DAT_0558600c;
  if (*(long *)puVar1 != 0) {
    lVar5 = *(long *)(lVar5 + 0x57e58);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
    if ((uVar2 < *(uint *)(lVar5 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
      uVar4 = param_3[1];
      *param_1 = *param_3;
      param_1[1] = uVar4;
      iVar3 = FUN_0277d6c4(param_3);
      if (iVar3 != 0x16a2) {
        return;
      }
      local_40 = *param_3;
      uStack_3c = param_3[1];
      lVar5 = *(long *)puVar1;
      local_38 = 0;
      local_48 = PTR_DAT_04bc0510 + 0x10;
      uVar2 = FUN_0277d6c4(&local_40);
      if (*(long *)puVar1 != 0) {
        lVar5 = *(long *)(lVar5 + 0x57e58);
        uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
        if ((uVar2 < *(uint *)(lVar5 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
          lVar5 = *(long *)PTR_DAT_04bc0428;
          uVar2 = FUN_0277d6c4(param_3);
          uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
          if ((uVar2 < *(uint *)(lVar5 + 0x1d8)) &&
             (lVar5 = *(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar2 * 8), lVar5 != 0)) {
            local_38 = lVar5;
          }
        }
      }
      lVar5 = *(long *)PTR_DAT_04bb46f0;
      uVar4 = FUN_01b0c3c8(&local_48);
      FUN_0262eb00(&local_50,lVar5,uVar4,lVar5 + 0xe98e0);
      *param_1 = local_50;
      param_1[1] = uStack_4c;
      return;
    }
  }
  *param_1 = _DAT_05586008;
  param_1[1] = uVar4;
  return;
}


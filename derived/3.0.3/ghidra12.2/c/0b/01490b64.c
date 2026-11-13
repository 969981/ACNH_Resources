
void FUN_01490b64(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,long param_4,
                 undefined4 *param_5,undefined4 *param_6,undefined4 *param_7)

{
  undefined *puVar1;
  uint uVar2;
  undefined4 uVar3;
  long lVar4;
  undefined *local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  long local_68;
  undefined4 local_48;
  undefined4 uStack_44;
  
  puVar1 = PTR_DAT_04bb43c0;
  local_68 = 0;
  local_78 = PTR_DAT_04bc0510 + 0x10;
  local_70 = *param_2;
  uStack_6c = param_2[1];
  lVar4 = *(long *)PTR_DAT_04bb43c0;
  uVar2 = FUN_0277d6c4(&local_70);
  if (*(long *)puVar1 != 0) {
    lVar4 = *(long *)(lVar4 + 0x57e58);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar4 + 0x1f8);
    if ((uVar2 < *(uint *)(lVar4 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar4 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
      lVar4 = *(long *)PTR_DAT_04bc0428;
      uVar2 = FUN_0277d6c4(param_2);
      uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar4 + 0x1f8);
      if ((uVar2 < *(uint *)(lVar4 + 0x1d8)) &&
         (lVar4 = *(long *)(*(long *)(lVar4 + 0x1e0) + (long)(int)uVar2 * 8), lVar4 != 0)) {
        local_68 = lVar4;
      }
    }
  }
  FUN_01afbaa4(&local_48,param_2,param_3);
  *param_1 = local_48;
  param_1[1] = uStack_44;
  param_1[4] = *(undefined4 *)(param_4 + 8);
  param_1[5] = *(undefined4 *)(param_4 + 0xc);
  param_1[6] = *param_3;
  uVar3 = FUN_01afb8e8(&local_78);
  param_1[7] = uVar3;
  param_1[8] = *param_5;
  param_1[9] = *param_6;
  param_1[0xb] = *param_7;
  return;
}


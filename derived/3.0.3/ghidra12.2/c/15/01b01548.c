
void FUN_01b01548(long param_1,undefined4 *param_2)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined **local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  long local_50;
  int local_48;
  int local_44;
  
  lVar1 = param_1 + 8;
  iVar3 = FUN_0277d6c4(lVar1);
  if ((((iVar3 == 0x1618) || (iVar3 = FUN_0277d6c4(lVar1), iVar3 == 0x315a)) ||
      (iVar3 = FUN_0277d6c4(lVar1), iVar3 == 0x3805)) &&
     (uVar5 = FUN_0277e294(param_2), puVar2 = PTR_DAT_04bb43c0, (uVar5 & 1) != 0)) {
    local_50 = 0;
    local_60 = &PTR_FUN_04a36b50;
    local_58 = *param_2;
    uStack_54 = param_2[1];
    lVar7 = *(long *)PTR_DAT_04bb43c0;
    uVar4 = FUN_0277d6c4(&local_58);
    lVar6 = DAT_0532a768;
    if (*(long *)puVar2 != 0) {
      lVar7 = *(long *)(lVar7 + 0x57e58);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
      if ((uVar4 < *(uint *)(lVar7 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
        uVar4 = FUN_0277d6c4(param_2);
        uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
        if ((uVar4 < *(uint *)(lVar6 + 0x1d8)) &&
           (lVar6 = *(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar4 * 8), lVar6 != 0)) {
          local_50 = lVar6;
        }
      }
    }
    uVar5 = FUN_01ae7a70(&local_60);
    if ((uVar5 & 1) == 0) {
      local_44 = 10;
      local_48 = FUN_01ae7550(&local_60);
      if (local_48 != local_44) {
        local_44 = 0xb;
        local_48 = FUN_01ae7550(&local_60);
        if (local_48 != local_44) {
          local_44 = 0xc;
          local_48 = FUN_01ae7550(&local_60);
          if (local_48 != local_44) {
            return;
          }
        }
      }
    }
    iVar3 = FUN_0277d6c4(lVar1);
    if (((iVar3 == 0x1618) || (iVar3 = FUN_0277d6c4(lVar1), iVar3 == 0x315a)) ||
       (iVar3 = FUN_0277d6c4(lVar1), iVar3 == 0x3805)) {
      FUN_01b01728(param_1 + 0xc,param_2);
    }
  }
  return;
}


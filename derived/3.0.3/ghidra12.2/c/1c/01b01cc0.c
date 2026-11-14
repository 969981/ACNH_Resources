
void FUN_01b01cc0(long param_1,undefined4 *param_2)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined **local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  long local_50;
  int local_48;
  int local_44;
  
  iVar2 = FUN_0277d6c4(param_1 + 8);
  if ((iVar2 == 0x342f) &&
     (uVar4 = FUN_0277e294(param_2), puVar1 = PTR_DAT_04bb43c0, (uVar4 & 1) != 0)) {
    local_50 = 0;
    local_60 = &PTR_FUN_04a36b50;
    local_58 = *param_2;
    uStack_54 = param_2[1];
    lVar6 = *(long *)PTR_DAT_04bb43c0;
    uVar3 = FUN_0277d6c4(&local_58);
    lVar5 = DAT_0532a768;
    if (*(long *)puVar1 != 0) {
      lVar6 = *(long *)(lVar6 + 0x57e58);
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
      if ((uVar3 < *(uint *)(lVar6 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
        uVar3 = FUN_0277d6c4(param_2);
        uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
        if ((uVar3 < *(uint *)(lVar5 + 0x1d8)) &&
           (lVar5 = *(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar3 * 8), lVar5 != 0)) {
          local_50 = lVar5;
        }
      }
    }
    local_44 = 0xe;
    local_48 = FUN_01ae7550(&local_60);
    if ((local_48 == local_44) && (iVar2 = FUN_0277d6c4(param_1 + 8), iVar2 == 0x342f)) {
      FUN_01b01728(param_1 + 0xc,param_2);
    }
  }
  return;
}


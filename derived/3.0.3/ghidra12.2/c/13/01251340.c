
undefined8 FUN_01251340(long param_1)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  undefined2 local_18;
  undefined2 local_16;
  undefined4 local_14;
  
  iVar2 = FUN_0277d6c4(param_1 + 8);
  if ((((iVar2 == 0xec9a) || (iVar2 = FUN_0277d6c4(param_1 + 8), iVar2 == 0xec97)) ||
      (uVar4 = FUN_012509c0(param_1,0), (uVar4 & 1) != 0)) && ((*(byte *)(param_1 + 0xe) & 1) != 0))
  {
    local_18 = FUN_01250cb0(param_1);
    local_16 = 0;
    local_14 = 0;
    FUN_0277d4ac(&local_18);
    puVar1 = PTR_DAT_04bb43c0;
    lVar5 = *(long *)PTR_DAT_04bb43c0;
    uVar3 = FUN_0277d6c4(&local_18);
    if (*(long *)puVar1 != 0) {
      lVar5 = *(long *)(lVar5 + 0x57e58);
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
      if ((uVar3 < *(uint *)(lVar5 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
        return 0;
      }
    }
    FUN_01250bf0(param_1);
  }
  return 1;
}


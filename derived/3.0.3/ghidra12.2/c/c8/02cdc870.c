
void FUN_02cdc870(short *param_1,undefined4 *param_2)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  undefined *local_16e0;
  undefined4 local_16d8;
  undefined4 uStack_16d4;
  long local_16d0;
  undefined1 auStack_26 [2];
  undefined1 auStack_24 [2];
  undefined1 auStack_22 [2];
  
  uVar3 = FUN_02665700(param_2);
  puVar1 = PTR_DAT_04bb43c0;
  if (((uVar3 & 1) != 0) && (*param_1 != DAT_04cb6038)) {
    local_16d0 = 0;
    local_16e0 = PTR_DAT_04bc0510 + 0x10;
    local_16d8 = *param_2;
    uStack_16d4 = param_2[1];
    lVar4 = *(long *)PTR_DAT_04bb43c0;
    uVar2 = FUN_0277d6c4(&local_16d8);
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
          local_16d0 = lVar4;
        }
      }
    }
    FUN_01b086f4(auStack_22,&local_16e0);
    FUN_007ef010(auStack_24,param_1);
    FUN_007e4920(&local_16e0,auStack_24);
    FUN_007ef010(auStack_26,auStack_22);
    FUN_007e90a0(&local_16e0,auStack_26);
  }
  return;
}


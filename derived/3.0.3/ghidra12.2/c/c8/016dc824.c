
bool FUN_016dc824(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined *local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  long local_38;
  undefined4 local_18;
  undefined4 uStack_14;
  
  if (param_1 != 0) {
    plVar4 = *(long **)(param_1 + 0x60);
    if (plVar4 == (long *)0x0) {
      if (((DAT_052461c0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_052461c0), iVar3 != 0)) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
        plVar4 = &DAT_05240280;
      }
      else {
        plVar4 = &DAT_05240280;
      }
    }
    (**(code **)(*plVar4 + 0x318))(&local_18);
    puVar1 = PTR_DAT_04bb43c0;
    lVar6 = *(long *)PTR_DAT_04bb43c0;
    uVar2 = FUN_0277d6c4(&local_18);
    lVar5 = *(long *)puVar1;
    if (lVar5 != 0) {
      lVar6 = *(long *)(lVar6 + 0x57e58);
      uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
      if ((uVar2 < *(uint *)(lVar6 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
        local_38 = 0;
        local_48 = PTR_DAT_04bc0510 + 0x10;
        local_40 = local_18;
        uStack_3c = uStack_14;
        uVar2 = FUN_0277d6c4(&local_40);
        if (*(long *)puVar1 != 0) {
          lVar5 = *(long *)(lVar5 + 0x57e58);
          uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
          if ((uVar2 < *(uint *)(lVar5 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
            lVar5 = *(long *)PTR_DAT_04bc0428;
            uVar2 = FUN_0277d6c4(&local_18);
            uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
            if ((uVar2 < *(uint *)(lVar5 + 0x1d8)) &&
               (lVar5 = *(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar2 * 8), lVar5 != 0)) {
              local_38 = lVar5;
            }
          }
        }
        iVar3 = FUN_01ad78cc(&local_48);
        return iVar3 == 0x43;
      }
    }
  }
  return false;
}


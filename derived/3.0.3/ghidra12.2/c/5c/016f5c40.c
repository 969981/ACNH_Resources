
undefined8 FUN_016f5c40(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  undefined *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  long local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  byte local_40 [4];
  uint local_3c;
  uint local_38;
  uint local_34;
  
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
  (**(code **)(*plVar4 + 0x370))(&local_48);
  puVar1 = PTR_DAT_04bb43c0;
  lVar8 = *(long *)PTR_DAT_04bb43c0;
  uVar2 = FUN_0277d6c4(&local_48);
  lVar7 = *(long *)puVar1;
  if (lVar7 != 0) {
    lVar8 = *(long *)(lVar8 + 0x57e58);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
    if ((uVar2 < *(uint *)(lVar8 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
      local_50 = 0;
      local_60 = PTR_DAT_04bc0510 + 0x10;
      local_58 = local_48;
      uStack_54 = uStack_44;
      uVar2 = FUN_0277d6c4(&local_58);
      if (*(long *)puVar1 != 0) {
        lVar7 = *(long *)(lVar7 + 0x57e58);
        uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
        if ((uVar2 < *(uint *)(lVar7 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
          lVar7 = *(long *)PTR_DAT_04bc0428;
          uVar2 = FUN_0277d6c4(&local_48);
          uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
          if ((uVar2 < *(uint *)(lVar7 + 0x1d8)) &&
             (lVar7 = *(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar2 * 8), lVar7 != 0)) {
            local_50 = lVar7;
          }
        }
      }
      local_40[0] = 0;
      local_40[1] = 0;
      FUN_01adab50(&local_60,local_40);
      local_3c = 0;
      do {
        if ((local_3c != 0) && (local_3c < 0xe)) {
          uVar2 = local_3c + 7;
          if (-1 < (int)local_3c) {
            uVar2 = local_3c;
          }
          if (((uint)((int)uVar2 >> 3) < 2) &&
             ((local_40[(uint)((int)uVar2 >> 3)] >> (ulong)(local_3c & 7) & 1) != 0)) {
            if (local_3c != 9) {
              return 0;
            }
            puVar6 = *(undefined8 **)(param_1 + 0x60);
            local_38 = local_3c;
            if (puVar6 == (undefined8 *)0x0) {
              if ((DAT_052461c0 & 1) == 0) {
                local_34 = local_3c;
                iVar3 = __cxa_guard_acquire(&DAT_052461c0);
                puVar6 = &DAT_05240280;
                if (iVar3 != 0) {
                  FUN_016fcf10(&DAT_05240280);
                  FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
                  __cxa_guard_release(&DAT_052461c0);
                }
              }
              else {
                puVar6 = &DAT_05240280;
              }
            }
            local_34 = 4;
            if ((*(uint *)((long)puVar6 + 0x15f4) >> 4 & 1) == 0) {
              uVar5 = FUN_01ad78cc(&local_60);
              return uVar5;
            }
            return 0;
          }
        }
        local_3c = local_3c + 1;
      } while (local_3c != 0xe);
    }
  }
  return 0;
}


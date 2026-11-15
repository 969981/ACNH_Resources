
/* WARNING: Removing unreachable block (ram,0x0243265c) */

void FUN_024325ec(long param_1)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  uint uVar5;
  undefined8 *puVar6;
  ulong local_40;
  undefined4 local_38;
  undefined1 local_34;
  
  puVar6 = *(undefined8 **)(param_1 + 0x60);
  if (puVar6 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
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
  if (puVar6[0x227] != 0) {
    local_40 = CONCAT44(local_40._4_4_,0x2d);
    uVar4 = FUN_03850890(puVar6[0x227],0x2d,0,*(uint *)(puVar6 + 0x2d3) >> 1 & 1);
    if ((uVar4 & 1) != 0) {
      *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) & 0xfffffffe;
      if (*(short *)(param_1 + 0x18e1) == *(short *)PTR_DAT_04bb6298) {
        uVar5 = (uint)*(byte *)(param_1 + 0x1ee8);
        bVar2 = 7 < uVar5;
        if (bVar2) {
          uVar5 = 0xff;
        }
        lVar1 = *(long *)PTR_DAT_04bb4f78 + 0x20 + (ulong)uVar5 * 0x740;
        if (bVar2) {
          lVar1 = *(long *)PTR_DAT_04bb4f78 + 0x20;
        }
        FUN_022bf390(lVar1 + 0xb0);
      }
    }
  }
  puVar6 = *(undefined8 **)(param_1 + 0x60);
  if (puVar6 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
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
  local_40 = local_40 & 0xffffffff00000000;
  if ((((puVar6[0x227] == 0) || (uVar4 = FUN_03850368(puVar6[0x227],0), (uVar4 & 1) != 0)) ||
      (puVar6[0x227] == 0)) ||
     ((uVar4 = FUN_03850368(puVar6[0x227],0), (uVar4 & 1) != 0 ||
      (uVar4 = FUN_0384fca4(puVar6[0x227],0), (uVar4 & 1) != 0)))) {
    if (*(int *)(param_1 + 0x178) != 0) {
      FUN_023164ec(param_1,6);
      return;
    }
    local_38 = 0;
    local_34 = 0;
    local_40 = 0x1000000000006;
    FUN_02374564(param_1,&local_40);
  }
  return;
}


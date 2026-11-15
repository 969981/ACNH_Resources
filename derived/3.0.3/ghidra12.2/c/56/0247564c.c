
void FUN_0247564c(long param_1)

{
  uint uVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined8 *puVar7;
  undefined4 uVar8;
  uint local_3c [2];
  byte local_34 [4];
  ulong local_30;
  undefined4 local_28;
  undefined2 local_24;
  undefined1 local_22;
  
  lVar4 = FUN_0251e98c(1);
  puVar5 = (undefined4 *)(**(code **)(*(long *)(lVar4 + 0x870) + 0xf0))(lVar4 + 0x870);
  uVar8 = *puVar5;
  *(undefined4 *)(param_1 + 0x184c) = 0;
  *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) | 0x100000;
  *(undefined4 *)(param_1 + 0x1850) = uVar8;
  plVar2 = &DAT_054e9a58;
  if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
    plVar2 = *(long **)(param_1 + 0x4c8);
  }
  piVar6 = (int *)(**(code **)(*plVar2 + 0x148))();
  uVar1 = *(uint *)(param_1 + 0x17cc) & 0xffefffff;
  if (*piVar6 != 0) {
    uVar1 = *(uint *)(param_1 + 0x17cc);
  }
  *(uint *)(param_1 + 0x17cc) = uVar1 & 0xfffffffe;
  if ((uVar1 & 1) != 0) {
    local_34[0] = *(byte *)(param_1 + 0x1ee8);
    if (7 < local_34[0]) {
      local_34[0] = 0xff;
    }
    local_3c[0] = (uint)*(byte *)(param_1 + 0x191f);
    if (2 < local_3c[0]) {
      local_3c[0] = 0;
    }
    if (local_3c[0] != 0) {
      local_30 = 0xfffe;
      FUN_0277d4ac(&local_30);
      local_30 = *(ulong *)(param_1 + 0x1917);
      FUN_02326130(local_34,&local_30,1);
    }
    if (local_3c[0] == 2) {
      lVar4 = *(long *)PTR_DAT_04bb4f78 + 0x20 + (ulong)(uint)local_34[0] * 0x740;
      if (7 < local_34[0]) {
        lVar4 = *(long *)PTR_DAT_04bb4f78 + 0x20;
      }
      if (*(short *)(param_1 + 0x18e1) == *(short *)PTR_DAT_04bb6298) {
        *(undefined4 *)(lVar4 + 0x24c) = 3;
        FUN_01393458(lVar4 + 0x2f0);
      }
      else {
        *(undefined4 *)(lVar4 + 0x24c) = 4;
      }
    }
    else if (local_3c[0] == 1) {
      lVar4 = *(long *)PTR_DAT_04bb4f78 + 0x20 + (ulong)(uint)local_34[0] * 0x740;
      if (7 < local_34[0]) {
        lVar4 = *(long *)PTR_DAT_04bb4f78 + 0x20;
      }
      if (*(short *)(param_1 + 0x18e1) == *(short *)PTR_DAT_04bb6298) {
        *(undefined4 *)(lVar4 + 0xc) = 3;
        FUN_01393458(lVar4 + 0xb0);
      }
      else {
        *(undefined4 *)(lVar4 + 0xc) = 4;
      }
    }
    local_28 = 6;
    local_30 = local_30 & 0xffffff0000000000;
    local_22 = 0;
    local_24 = 0;
    FUN_02321e44(local_3c,param_1,&local_30);
  }
  puVar7 = *(undefined8 **)(param_1 + 0x60);
  if (puVar7 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(&DAT_052461c0);
      puVar7 = &DAT_05240280;
      if (iVar3 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar7 = &DAT_05240280;
    }
  }
  *(undefined1 *)((long)puVar7 + 0x5e95) = 0;
  return;
}


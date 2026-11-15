
void FUN_024eb950(long param_1)

{
  byte *pbVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  byte bVar7;
  byte bVar8;
  uint uVar9;
  ulong uVar10;
  undefined4 local_40;
  undefined1 local_3c [4];
  byte local_38 [4];
  undefined4 local_34;
  undefined2 local_30;
  byte local_2c [4];
  undefined4 local_28;
  undefined2 local_24;
  
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
  (**(code **)(*plVar4 + 0x4e0))(0x3f800000);
  lVar6 = *(long *)PTR_DAT_04bb39b0;
  if (lVar6 != 0) {
    if (*(int *)(lVar6 + 0x15c) != 0) {
      bVar8 = *(byte *)(param_1 + 0x1ee8);
      pbVar1 = PTR_DAT_04bb32e0;
      if (*(int *)(lVar6 + 0x15c) != 0) {
        pbVar1 = (byte *)(lVar6 + 0x158);
      }
      bVar7 = *pbVar1;
      if (7 < bVar7) {
        bVar7 = 0xff;
      }
      if (7 < bVar8) {
        bVar8 = 0xff;
      }
      if (bVar7 != bVar8) {
        return;
      }
    }
    if (*(int *)(lVar6 + 0x15c) != 0) {
      local_40 = 1;
      FUN_02507c6c(local_2c,1,1,1,0);
      puVar2 = PTR_DAT_04bb5038;
      uVar9 = (uint)local_2c[0];
      local_34 = local_28;
      local_38[0] = 0xff;
      if (local_2c[0] < 8) {
        local_38[0] = local_2c[0];
      }
      local_30 = local_24;
      if (local_2c[0] < 8) {
        do {
          local_3c[0] = (undefined1)uVar9;
          FUN_0254becc(local_3c,&local_40);
          uVar10 = (ulong)uVar9;
          do {
            if (uVar10 == 7) {
              return;
            }
            uVar10 = uVar10 + 1;
            uVar5 = FUN_02507924(local_38,puVar2 + uVar10);
          } while ((uVar5 & 1) == 0);
          local_38[0] = puVar2[uVar10];
          uVar9 = (uint)local_38[0];
        } while (uVar9 < 8);
      }
    }
  }
  return;
}


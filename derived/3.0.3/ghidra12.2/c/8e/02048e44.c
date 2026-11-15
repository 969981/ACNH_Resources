
void FUN_02048e44(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined4 uVar11;
  undefined *local_68;
  undefined8 *puStack_60;
  undefined4 local_58;
  undefined8 local_54;
  undefined1 local_4c;
  undefined1 local_45;
  
  puVar4 = PTR_DAT_04bb3350;
  lVar9 = *(long *)(param_1 + 0x2b8);
  if (lVar9 == 0) {
    lVar10 = 1;
    iVar3 = *(int *)(param_1 + 0x2c0);
  }
  else {
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar10 = *(long *)(lVar5 + 0xa8);
    *(long *)(lVar5 + 0xa8) = lVar9;
    iVar3 = *(int *)(param_1 + 0x2c0);
  }
  if (iVar3 == 0) {
    local_45 = 0;
    local_58 = 0x10;
    local_4c = 0;
    local_54 = 0x65636e6172746e45;
    puStack_60 = &local_54;
    local_68 = PTR_DAT_04bb2ab0 + 0x10;
    lVar9 = FUN_02917a1c(&local_68);
    if (lVar9 != 0) {
      lVar5 = *(long *)PTR_DAT_04bb2698;
      if (lVar5 == 0) {
        plVar7 = malloc(0x1f0);
      }
      else {
        lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
        plVar7 = (long *)(lVar5 + 8);
        if (lVar6 != 0) {
          plVar7 = (long *)(lVar6 + 0xa8);
        }
        plVar7 = (long *)*plVar7;
        if (plVar7 == (long *)0x0) {
          plVar7 = (long *)0x0;
        }
        else {
          plVar7 = (long *)(**(code **)(*plVar7 + 0x30))(plVar7,0x1f0,8);
        }
      }
      *(undefined8 *)((long)plVar7 + 0x1d) = 0;
      plVar7[2] = 0;
      plVar7[3] = 0;
      puVar1 = PTR_DAT_04bb5cb0 + 0x10;
      plVar7[8] = 0;
      plVar7[9] = 0;
      puVar2 = PTR_DAT_04bb5bb8;
      *(undefined4 *)(plVar7 + 0xb) = 0;
      *plVar7 = (long)puVar1;
      plVar7[1] = 0;
      plVar7[10] = (long)(puVar2 + 0x10);
      puVar1 = PTR_DAT_04bb5ba8 + 0x10;
      plVar7[0x10] = 0;
      plVar7[0x11] = 0;
      plVar7[0x16] = 0;
      plVar7[0x17] = 0;
      plVar7[0x1c] = 0;
      plVar7[0x1d] = 0;
      plVar7[0x22] = 0;
      plVar7[0x23] = 0;
      plVar7[0x28] = 0;
      plVar7[0x29] = 0;
      plVar7[0x2e] = 0;
      plVar7[0x2f] = 0;
      plVar7[0x34] = 0;
      plVar7[0x35] = 0;
      plVar7[0xc] = (long)puVar1;
      plVar7[0xd] = 0;
      plVar7[0xe] = 0;
      plVar7[0xf] = (long)puVar1;
      plVar7[0x12] = (long)puVar1;
      plVar7[0x13] = 0;
      plVar7[0x14] = 0;
      plVar7[0x15] = (long)puVar1;
      plVar7[0x18] = (long)puVar1;
      plVar7[0x19] = 0;
      plVar7[0x1a] = 0;
      plVar7[0x1b] = (long)puVar1;
      plVar7[0x1e] = (long)puVar1;
      plVar7[0x1f] = 0;
      plVar7[0x20] = 0;
      plVar7[0x21] = (long)puVar1;
      plVar7[0x24] = (long)puVar1;
      plVar7[0x25] = 0;
      plVar7[0x26] = 0;
      plVar7[0x27] = (long)puVar1;
      plVar7[0x2a] = (long)puVar1;
      plVar7[0x2b] = 0;
      plVar7[0x2c] = 0;
      plVar7[0x2d] = (long)puVar1;
      plVar7[0x30] = (long)puVar1;
      plVar7[0x31] = 0;
      plVar7[0x32] = 0;
      plVar7[0x33] = (long)puVar1;
      *(undefined4 *)(plVar7 + 0x36) = 0;
      puVar1 = PTR_DAT_04bbc1a0 + 0x10;
      *(undefined1 *)(plVar7 + 0x37) = 0;
      puVar2 = PTR_DAT_04bb2010 + 0x10;
      plVar7[0x3a] = 0;
      *(undefined4 *)(plVar7 + 0x3d) = 0;
      *(undefined1 *)((long)plVar7 + 0x1ec) = 0;
      plVar7[7] = 0;
      plVar7[0x38] = (long)puVar1;
      plVar7[0x39] = (long)puVar2;
      plVar7[0x3b] = (long)puVar2;
      plVar7[0x3c] = 0;
      plVar7[5] = 0x41a0000041a00000;
      plVar7[6] = 0x41200000;
      *(undefined4 *)(plVar7 + 8) = *(undefined4 *)(lVar9 + 0xc);
      *(undefined4 *)((long)plVar7 + 0x44) = *(undefined4 *)(lVar9 + 0x10);
      uVar11 = *(undefined4 *)(lVar9 + 0x14);
      *(undefined4 *)((long)plVar7 + 0x1c) = 0x800;
      *(undefined4 *)(plVar7 + 0xb) = 0;
      *(undefined1 *)((long)plVar7 + 0x1ec) = 1;
      *(undefined4 *)((long)plVar7 + 0x4c) = 0x200000;
      *(undefined4 *)(plVar7 + 9) = uVar11;
      if (*(int *)(param_1 + 0x2c0) < *(int *)(param_1 + 0x2c4)) {
        *(long **)(*(long *)(param_1 + 0x2c8) + (long)*(int *)(param_1 + 0x2c0) * 8) = plVar7;
        *(int *)(param_1 + 0x2c0) = *(int *)(param_1 + 0x2c0) + 1;
      }
      lVar9 = *(long *)PTR_DAT_04bb27c8;
      if ((lVar9 != 0) && (plVar7[2] == 0 && plVar7[1] == 0)) {
        nn::os::LockMutex((MutexType *)(lVar9 + 0x50));
        plVar8 = (long *)(lVar9 + 0x70);
        lVar5 = *plVar8;
        plVar7 = (long *)((long)*(int *)(lVar9 + 0x84) + (long)plVar7);
        *plVar8 = (long)plVar7;
        *plVar7 = lVar5;
        plVar7[1] = (long)plVar8;
        if (lVar5 != 0) {
          *(long **)(lVar5 + 8) = plVar7;
        }
        *(int *)(lVar9 + 0x80) = *(int *)(lVar9 + 0x80) + 1;
        nn::os::UnlockMutex((MutexType *)(lVar9 + 0x50));
      }
    }
  }
  if (lVar10 != 1) {
    lVar9 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
    *(long *)(lVar9 + 0xa8) = lVar10;
  }
  return;
}


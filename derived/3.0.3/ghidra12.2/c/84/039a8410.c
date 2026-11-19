
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_039a8410(long *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  
  puVar5 = PTR_DAT_04bd0d40;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = (long)(puVar5 + 0x10);
  param_1[1] = 0;
  if (DAT_05ae7600 != 0) {
    lVar6 = FUN_038cb610(DAT_05ae7600,param_1);
    param_1[1] = lVar6;
    if (lVar6 != 0) {
      if ((*(uint *)(lVar6 + 0xd0) & 1) == 0) {
        lVar9 = 0;
      }
      else {
        lVar9 = lVar6 + 0x90;
        nn::os::LockMutex((MutexType *)(lVar6 + 0xb0));
      }
      plVar8 = (long *)(lVar6 + 0x70);
      lVar7 = *plVar8;
      plVar2 = (long *)((long)*(int *)(lVar6 + 0x84) + (long)param_1);
      *plVar8 = (long)plVar2;
      *plVar2 = lVar7;
      plVar2[1] = (long)plVar8;
      if (lVar7 != 0) {
        *(long **)(lVar7 + 8) = plVar2;
      }
      *(int *)(lVar6 + 0x80) = *(int *)(lVar6 + 0x80) + 1;
      if (lVar9 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar9 + 0x20));
      }
    }
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *param_1 = (long)&PTR_FUN_04b6a3c0;
  puVar1 = (undefined8 *)((long)param_1 + 0xbc);
  *(undefined4 *)(param_1 + 0x17) = 0x100;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[0x16] = (long)puVar1;
  *(undefined1 *)((long)param_1 + 0x1bb) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  if (puVar1 != &DAT_040648a2) {
    uVar3 = CONCAT17(DAT_040648a2._7_1_,(undefined7)DAT_040648a2);
    *(undefined1 *)((long)param_1 + 0xcb) = 0;
    *puVar1 = uVar3;
    *(ulong *)((long)param_1 + 0xc3) = CONCAT71(_UNK_040648aa,DAT_040648a2._7_1_);
  }
  param_1[0x3a] = -0x100000000;
  param_1[0x15] = (long)&PTR_LAB_048f9a70;
  param_1[0x38] = (long)(param_1 + 0x38);
  param_1[0x39] = (long)(param_1 + 0x38);
  FUN_038e18e4(param_1 + 0x3b);
  param_1[0x46] = 0;
  param_1[0x45] = 0;
  param_1[0x44] = 0;
  puVar5 = PTR_DAT_04bb2f80;
  lVar6 = *(long *)(PTR_DAT_04bb2f80 + 0x18);
  param_1[0x49] = *(long *)(PTR_DAT_04bb2f80 + 0x10);
  param_1[0x4a] = lVar6;
  lVar6 = *(long *)(puVar5 + 0x28);
  param_1[0x4b] = *(long *)(puVar5 + 0x20);
  param_1[0x4c] = lVar6;
  lVar6 = *(long *)puVar5;
  lVar9 = *(long *)(puVar5 + 8);
  param_1[0x43] = 0;
  *(undefined2 *)((long)param_1 + 0x284) = 0;
  param_1[0x52] = 0;
  *(undefined4 *)(param_1 + 0x53) = 0;
  param_1[0x48] = lVar9;
  uVar4 = DAT_0419b5a4;
  param_1[0x47] = lVar6;
  lVar6 = DAT_0419b59c;
  *(undefined4 *)(param_1 + 0x4e) = uVar4;
  *(undefined4 *)((long)param_1 + 0x27c) = uVar4;
  *(long *)((long)param_1 + 0x274) = lVar6;
  param_1[0x4d] = lVar6;
  *(undefined4 *)(param_1 + 0x50) = 0x10001;
  param_1[0x51] = 0x3f80000000000000;
  *(undefined8 *)((long)param_1 + 0x29c) = 0x7f7fffff;
  *(undefined4 *)((long)param_1 + 0x1d4) = 0x20;
  return;
}


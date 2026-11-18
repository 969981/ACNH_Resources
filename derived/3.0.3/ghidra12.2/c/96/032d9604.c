
void FUN_032d9604(undefined8 *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(undefined8 *)((long)param_1 + 0x106) = 0;
  *(undefined8 *)((long)param_1 + 0x156) = 0;
  *(undefined8 *)((long)param_1 + 0xb6) = 0;
  *(undefined2 *)(param_1 + 0x40) = 0;
  *(undefined4 *)((long)param_1 + 0x204) = 0;
  *(undefined1 *)(param_1 + 0x41) = 0;
  *(undefined8 *)((long)param_1 + 0x8e) = 0;
  param_1[0x43] = 0;
  param_1[0x42] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *(undefined8 *)((long)param_1 + 0x12e) = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  *(undefined8 *)((long)param_1 + 0x17e) = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  *(undefined8 *)((long)param_1 + 0x1a6) = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  *(undefined8 *)((long)param_1 + 0x1ce) = 0;
  *(undefined8 *)((long)param_1 + 0x1f6) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined8 *)((long)param_1 + 0xde) = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_038e18e4(param_1 + 0x44);
  param_1[0x4e] = 0;
  param_1[0x4d] = 0;
  puVar1 = param_1 + 0x51;
  param_1[0x4c] = 0;
  param_1[0x4f] = 0x3e8000003f333333;
  *(undefined1 *)(param_1 + 0x50) = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x5a] = PTR_DAT_04bb2020 + 0x10;
  param_1[0x5b] = &DAT_0407ebb1;
  param_1[0x59] = puVar1;
  param_1[0x52] = 0;
  param_1[0x51] = &PTR_FUN_04b64428;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  if (DAT_05ae7600 != 0) {
    lVar3 = FUN_038cb610(DAT_05ae7600,puVar1);
    param_1[0x52] = lVar3;
    if (lVar3 != 0) {
      if ((*(uint *)(lVar3 + 0xd0) & 1) == 0) {
        lVar6 = 0;
      }
      else {
        lVar6 = lVar3 + 0x90;
        nn::os::LockMutex((MutexType *)(lVar3 + 0xb0));
      }
      plVar5 = (long *)(lVar3 + 0x70);
      lVar4 = *plVar5;
      plVar2 = (long *)((long)*(int *)(lVar3 + 0x84) + (long)puVar1);
      *plVar5 = (long)plVar2;
      *plVar2 = lVar4;
      plVar2[1] = (long)plVar5;
      if (lVar4 != 0) {
        *(long **)(lVar4 + 8) = plVar2;
      }
      *(int *)(lVar3 + 0x80) = *(int *)(lVar3 + 0x80) + 1;
      if (lVar6 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar6 + 0x20));
      }
    }
  }
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[0x51] = &PTR_LAB_048f9e38;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  *(undefined4 *)((long)param_1 + 0x30c) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined1 *)((long)param_1 + 0x201) = 0;
  param_1[0x5c] = &PTR_LAB_048f9e68;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  return;
}


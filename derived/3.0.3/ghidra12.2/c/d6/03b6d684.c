
void FUN_03b6d684(long *param_1,long *param_2,long *param_3)

{
  undefined *puVar1;
  undefined4 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  *(int *)(param_1 + 3) = (int)param_2[1];
  lVar5 = *(long *)PTR_DAT_04bb2698;
  if (DAT_05aebc00 == '\0') {
    if (lVar5 == 0) {
      plVar4 = malloc(0x1b0);
    }
    else {
      plVar4 = param_3;
      if (param_3 == (long *)0x0) {
        lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar4 = (long *)(lVar5 + 8);
        if (lVar3 != 0) {
          plVar4 = (long *)(lVar3 + 0xa8);
        }
        plVar4 = (long *)*plVar4;
        if (plVar4 == (long *)0x0) {
          plVar4 = (long *)0x0;
          goto LAB_03b6d8bc;
        }
      }
      plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,0x1b0,8);
    }
LAB_03b6d8bc:
    lVar5 = param_2[1];
    uVar2 = *(undefined4 *)((long)param_2 + 0xc);
    FUN_003ddb18(plVar4);
    *(undefined4 *)(plVar4 + 0xe) = 0;
    puVar1 = PTR_DAT_04bd2070;
    *(undefined1 *)((long)plVar4 + 0x74) = 0;
    plVar4[0xf] = 0;
    *(undefined1 *)(plVar4 + 0x10) = 0;
    plVar4[0x11] = 0;
    plVar4[0x12] = 0;
    *(int *)(plVar4 + 0x17) = (int)lVar5;
    *(undefined4 *)((long)plVar4 + 0xbc) = uVar2;
    plVar4[0x1b] = 0;
    *(undefined1 *)(plVar4 + 0x1a) = 0;
    plVar4[0xd] = (long)(puVar1 + 0x80);
    *plVar4 = (long)(puVar1 + 0x10);
    plVar4[0x13] = 0;
    plVar4[0x14] = 0;
    plVar4[0x18] = 0;
    plVar4[0x19] = 0;
    plVar4[0x15] = 0;
    plVar4[0x16] = 0x46fa000000000060;
    FUN_038e1da0(plVar4 + 0x1c);
    *(undefined1 *)(plVar4 + 0x24) = 0;
    puVar1 = PTR_DAT_04bb2028;
    *(undefined4 *)(plVar4 + 0x29) = 0x20;
    *(undefined1 *)((long)plVar4 + 0x14c) = 0;
    plVar4[0x25] = 0;
    plVar4[0x26] = 0;
    *(undefined1 *)((long)plVar4 + 0x16b) = 0;
    plVar4[0x30] = 0;
    *(undefined1 *)(plVar4 + 0x31) = 0;
    plVar4[0x34] = 0;
    *(undefined2 *)(plVar4 + 0x35) = 0;
    plVar4[0x27] = (long)(puVar1 + 0x10);
    plVar4[0x28] = (long)plVar4 + 0x14c;
    plVar4[0x2e] = 0;
    plVar4[0x2f] = 0;
    plVar4[0x32] = 0;
    plVar4[0x33] = 0;
    goto LAB_03b6d960;
  }
  if (lVar5 == 0) {
    plVar4 = malloc(0x248);
  }
  else {
    plVar4 = param_3;
    if (param_3 == (long *)0x0) {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar4 = (long *)(lVar5 + 8);
      if (lVar3 != 0) {
        plVar4 = (long *)(lVar3 + 0xa8);
      }
      plVar4 = (long *)*plVar4;
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)0x0;
        goto LAB_03b6d770;
      }
    }
    plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,0x248,8);
  }
LAB_03b6d770:
  lVar5 = param_2[1];
  uVar2 = *(undefined4 *)((long)param_2 + 0xc);
  FUN_003ddb18(plVar4);
  *(undefined4 *)(plVar4 + 0xe) = 0;
  puVar1 = PTR_DAT_04bd2070;
  *(undefined1 *)((long)plVar4 + 0x74) = 0;
  plVar4[0xf] = 0;
  *(undefined1 *)(plVar4 + 0x10) = 0;
  plVar4[0x11] = 0;
  plVar4[0x12] = 0;
  *(int *)(plVar4 + 0x17) = (int)lVar5;
  *(undefined4 *)((long)plVar4 + 0xbc) = uVar2;
  plVar4[0x1b] = 0;
  *(undefined1 *)(plVar4 + 0x1a) = 0;
  plVar4[0xd] = (long)(puVar1 + 0x80);
  *plVar4 = (long)(puVar1 + 0x10);
  plVar4[0x13] = 0;
  plVar4[0x14] = 0;
  plVar4[0x18] = 0;
  plVar4[0x19] = 0;
  plVar4[0x15] = 0;
  plVar4[0x16] = 0x46fa000000000060;
  FUN_038e1da0(plVar4 + 0x1c);
  *(undefined1 *)(plVar4 + 0x24) = 0;
  plVar4[0x25] = 0;
  plVar4[0x26] = 0;
  *(undefined1 *)((long)plVar4 + 0x16b) = 0;
  *(undefined1 *)((long)plVar4 + 0x14c) = 0;
  puVar1 = PTR_DAT_04bb2028;
  *(undefined4 *)(plVar4 + 0x29) = 0x20;
  *(undefined2 *)(plVar4 + 0x37) = 0;
  plVar4[0x30] = 0;
  *(undefined1 *)(plVar4 + 0x31) = 0;
  plVar4[0x34] = 0;
  *(undefined2 *)(plVar4 + 0x35) = 0;
  plVar4[0x27] = (long)(puVar1 + 0x10);
  plVar4[0x28] = (long)plVar4 + 0x14c;
  *(undefined4 *)((long)plVar4 + 0x1bc) = 0xffffffff;
  plVar4[0x2e] = 0;
  plVar4[0x2f] = 0;
  plVar4[0x32] = 0;
  plVar4[0x33] = 0;
  plVar4[0x38] = 0;
  plVar4[0x39] = 0;
  puVar1 = PTR_DAT_04bd1f48 + 0x10;
  plVar4[0x3a] = 0;
  *(undefined1 *)(plVar4 + 0x3b) = 1;
  plVar4[0x36] = (long)puVar1;
  plVar4[0x3e] = 0;
  *(undefined4 *)(plVar4 + 0x3f) = 0;
  *(undefined2 *)(plVar4 + 0x41) = 0;
  *(undefined8 *)((long)plVar4 + 0x20c) = 0;
  plVar4[0x43] = 0;
  *(undefined4 *)(plVar4 + 0x44) = 0;
  plVar4[0x3c] = 0;
  plVar4[0x3d] = 0;
  nn::os::InitializeMutex((MutexType *)(plVar4 + 0x41),true,0);
  puVar1 = PTR_DAT_04bd2078;
  *(undefined1 *)(plVar4 + 0x40) = 1;
  *(undefined1 *)(plVar4 + 0x3b) = 1;
  plVar4[0x45] = 0;
  plVar4[0x46] = 0;
  plVar4[0x47] = 0;
  plVar4[0x48] = 0;
  *plVar4 = (long)(puVar1 + 0x10);
  plVar4[0xd] = (long)(puVar1 + 0x88);
  plVar4[0x36] = (long)(puVar1 + 0xb0);
LAB_03b6d960:
  param_1[5] = (long)plVar4;
  param_1[4] = *param_2;
  (**(code **)(*param_1 + 0x10))(param_1,param_2 + 2);
  FUN_03b6e000(param_1[5],param_2 + 4,param_1,param_3);
  return;
}


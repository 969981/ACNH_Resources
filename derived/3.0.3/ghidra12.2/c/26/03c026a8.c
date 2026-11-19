
void FUN_03c026a8(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  
  FUN_03c11314(param_1,param_2,"EnlTask");
  *(undefined1 *)(param_1 + 0x46) = 0;
  *param_1 = &PTR_LAB_04b7c4b8;
  param_1[0x45] = &PTR_LAB_04b7c590;
  puVar4 = (undefined8 *)((long)param_1 + 0x26c);
  *(undefined1 *)puVar4 = 0;
  param_1[0x4c] = puVar4;
  *(undefined4 *)(param_1 + 0x4d) = 0x10;
  *(undefined1 *)((long)param_1 + 0x27b) = 0;
  puVar1 = PTR_DAT_04bb21a0 + 0x10;
  *(undefined2 *)((long)param_1 + 0x294) = 0;
  param_1[0x51] = (undefined2 *)((long)param_1 + 0x294);
  param_1[0x4b] = puVar1;
  *(undefined4 *)(param_1 + 0x52) = 0x15;
  *(undefined2 *)((long)param_1 + 700) = 0;
  param_1[0x49] = 0;
  *(undefined4 *)(param_1 + 0x4a) = 0;
  param_1[0x50] = &DAT_04a5a568;
  param_1[0x47] = 0x78000000b00000;
  *(undefined4 *)(param_1 + 0x48) = 0x400;
  if (puVar4 != (undefined8 *)&UNK_0409e615) {
    *(undefined1 *)((long)param_1 + 0x274) = 0;
    *puVar4 = 0x3736353433323130;
  }
  param_1[0x5a] = 0x800000000;
  param_1[0x58] = 0;
  *(undefined4 *)(param_1 + 0x5b) = 0xffffffff;
  puVar4 = param_1 + 0x67;
  param_1[0x5c] = 6;
  param_1[0x59] = 0;
  param_1[0x5d] = 1;
  param_1[0x5f] = 0x854025;
  param_1[0x5e] = 0;
  param_1[0x61] = 0x100300000000;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  param_1[0x60] = 0x2000400000003;
  param_1[0x6d] = 0;
  *(undefined8 *)((long)param_1 + 0x314) = 0;
  param_1[0x6e] = 0;
  *(undefined4 *)(param_1 + 0x62) = 0xe2004;
  param_1[0x70] = &PTR_LAB_048f9770;
  param_1[0x71] = &DAT_0407ebb1;
  param_1[0x6f] = puVar4;
  param_1[0x6a] = 0;
  param_1[0x67] = &PTR_FUN_04b64428;
  param_1[0x69] = 0;
  param_1[0x68] = 0;
  if (DAT_05ae7600 != 0) {
    lVar3 = FUN_038cb610(DAT_05ae7600,puVar4);
    param_1[0x68] = lVar3;
    if (lVar3 != 0) {
      if ((*(uint *)(lVar3 + 0xd0) & 1) == 0) {
        lVar7 = 0;
      }
      else {
        lVar7 = lVar3 + 0x90;
        nn::os::LockMutex((MutexType *)(lVar3 + 0xb0));
      }
      plVar6 = (long *)(lVar3 + 0x70);
      lVar5 = *plVar6;
      plVar2 = (long *)((long)*(int *)(lVar3 + 0x84) + (long)puVar4);
      *plVar6 = (long)plVar2;
      *plVar2 = lVar5;
      plVar2[1] = (long)plVar6;
      if (lVar5 != 0) {
        *(long **)(lVar5 + 8) = plVar2;
      }
      *(int *)(lVar3 + 0x80) = *(int *)(lVar3 + 0x80) + 1;
      if (lVar7 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar7 + 0x20));
      }
    }
  }
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  param_1[0x76] = 0;
  *(undefined4 *)((long)param_1 + 0x3bc) = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  param_1[0x73] = param_1;
  param_1[0x75] = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  param_1[0x67] = &PTR_LAB_048f9e38;
  param_1[0x74] = FUN_03c0291c;
  param_1[0x72] = &PTR_LAB_04b7c5f8;
  param_1[0x71] = "EnlTask::calcAfterScene";
  return;
}


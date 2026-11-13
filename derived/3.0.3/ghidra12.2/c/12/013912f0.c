
void FUN_013912f0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined *local_30;
  char *pcStack_28;
  
  local_30 = PTR_DAT_04bb2020 + 0x10;
  pcStack_28 = "FieldActionHeap";
  uVar4 = FUN_038c6d48(0x200000,&local_30,param_2,8,1,0);
  puVar7 = (undefined8 *)(param_1 + 0x208);
  *(undefined8 *)(param_1 + 8) = uVar4;
  puVar2 = *(undefined8 **)(param_1 + 0x210);
  while (puVar2 != puVar7) {
    puVar8 = (undefined8 *)puVar2[1];
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2 = puVar8;
  }
  *(undefined4 *)(param_1 + 0x218) = 0;
  *(undefined8 **)(param_1 + 0x210) = puVar7;
  *(undefined8 **)(param_1 + 0x208) = puVar7;
  lVar3 = DAT_05ae7600;
  if (DAT_05ae7600 == 0) {
    puVar7 = malloc(0x2d8);
    puVar1 = PTR_DAT_04bbc6b8;
  }
  else {
    plVar5 = *(long **)(param_1 + 8);
    if (plVar5 == (long *)0x0) {
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar5 = (long *)(lVar3 + 8);
      if (lVar6 != 0) {
        plVar5 = (long *)(lVar6 + 0xa8);
      }
      plVar5 = (long *)*plVar5;
      if (plVar5 == (long *)0x0) goto LAB_01391500;
    }
    puVar7 = (undefined8 *)(**(code **)(*plVar5 + 0x30))(plVar5,0x2d8,8);
    puVar1 = PTR_DAT_04bbc6b8;
  }
  PTR_DAT_04bbc6b8 = puVar1;
  if (puVar7 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar7 + 2) = 0;
    *(undefined4 *)(puVar7 + 5) = 0;
    *puVar7 = 0x1e;
    puVar1 = puVar1 + 0x10;
    *(undefined4 *)(puVar7 + 8) = 0;
    *(undefined4 *)(puVar7 + 0xb) = 0;
    *(undefined4 *)(puVar7 + 0xe) = 0;
    *(undefined4 *)(puVar7 + 0x11) = 0;
    *(undefined4 *)(puVar7 + 0x14) = 0;
    *(undefined4 *)(puVar7 + 0x17) = 0;
    *(undefined4 *)(puVar7 + 0x1a) = 0;
    *(undefined4 *)(puVar7 + 0x1d) = 0;
    *(undefined4 *)(puVar7 + 0x20) = 0;
    *(undefined4 *)(puVar7 + 0x23) = 0;
    puVar7[1] = puVar1;
    *(undefined4 *)(puVar7 + 0x26) = 0;
    *(undefined4 *)(puVar7 + 0x29) = 0;
    *(undefined4 *)(puVar7 + 0x2c) = 0;
    *(undefined4 *)(puVar7 + 0x2f) = 0;
    *(undefined4 *)(puVar7 + 0x32) = 0;
    *(undefined4 *)(puVar7 + 0x35) = 0;
    *(undefined4 *)(puVar7 + 0x38) = 0;
    *(undefined4 *)(puVar7 + 0x3b) = 0;
    *(undefined4 *)(puVar7 + 0x3e) = 0;
    *(undefined4 *)(puVar7 + 0x41) = 0;
    puVar7[0x42] = 0;
    puVar7[0x43] = puVar1;
    *(undefined4 *)(puVar7 + 0x44) = 0;
    puVar7[0x45] = 0;
    puVar7[0x46] = puVar1;
    *(undefined4 *)(puVar7 + 0x47) = 0;
    puVar7[0x48] = 0;
    puVar7[0x49] = puVar1;
    *(undefined4 *)(puVar7 + 0x4a) = 0;
    puVar7[0x4b] = 0;
    puVar7[0x4c] = puVar1;
    *(undefined4 *)(puVar7 + 0x4d) = 0;
    puVar7[0x4e] = 0;
    puVar7[0x4f] = puVar1;
    *(undefined4 *)(puVar7 + 0x50) = 0;
    puVar7[0x51] = 0;
    puVar7[0x52] = puVar1;
    *(undefined4 *)(puVar7 + 0x53) = 0;
    puVar7[0x54] = 0;
    puVar7[0x55] = puVar1;
    *(undefined4 *)(puVar7 + 0x56) = 0;
    puVar7[0x57] = 0;
    puVar7[0x58] = puVar1;
    *(undefined4 *)(puVar7 + 0x59) = 0;
    puVar7[0x5a] = 0;
    puVar7[3] = 0;
    puVar7[4] = puVar1;
    puVar7[6] = 0;
    puVar7[7] = puVar1;
    puVar7[9] = 0;
    puVar7[10] = puVar1;
    puVar7[0xc] = 0;
    puVar7[0xd] = puVar1;
    puVar7[0xf] = 0;
    puVar7[0x10] = puVar1;
    puVar7[0x12] = 0;
    puVar7[0x13] = puVar1;
    puVar7[0x15] = 0;
    puVar7[0x16] = puVar1;
    puVar7[0x18] = 0;
    puVar7[0x19] = puVar1;
    puVar7[0x1b] = 0;
    puVar7[0x1c] = puVar1;
    puVar7[0x1e] = 0;
    puVar7[0x1f] = puVar1;
    puVar7[0x21] = 0;
    puVar7[0x22] = puVar1;
    puVar7[0x24] = 0;
    puVar7[0x25] = puVar1;
    puVar7[0x27] = 0;
    puVar7[0x28] = puVar1;
    puVar7[0x2a] = 0;
    puVar7[0x2b] = puVar1;
    puVar7[0x2d] = 0;
    puVar7[0x2e] = puVar1;
    puVar7[0x30] = 0;
    puVar7[0x31] = puVar1;
    puVar7[0x33] = 0;
    puVar7[0x34] = puVar1;
    puVar7[0x36] = 0;
    puVar7[0x37] = puVar1;
    puVar7[0x39] = 0;
    puVar7[0x3a] = puVar1;
    puVar7[0x3c] = 0;
    puVar7[0x3d] = puVar1;
    puVar7[0x3f] = 0;
    puVar7[0x40] = puVar1;
    *(undefined4 *)(param_1 + 0x10) = 0x1e;
    *(undefined8 **)(param_1 + 0x18) = puVar7 + 1;
  }
LAB_01391500:
  FUN_01398740(param_1);
  return;
}


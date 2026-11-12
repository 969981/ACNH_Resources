
void FUN_006b7f64(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_vtable_04bdf700;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[1] = puVar1 + 0x10;
  param_1[3] = param_1 + 10;
  nn::os::SdkConditionVariableType::Initialize();
  lVar2 = param_1[3];
  param_1[5] = 0;
  param_1[6] = lVar2;
  param_1[7] = param_1 + 1;
  *(long *)(lVar2 + 8) = lVar2 + 0x10;
  *(long *)(param_1[3] + 0x18) = param_1[3] + 0x20;
  *(long *)(param_1[3] + 0x28) = param_1[3] + 0x30;
  *(long *)(param_1[3] + 0x38) = param_1[3] + 0x40;
  *(long *)(param_1[3] + 0x48) = param_1[3] + 0x50;
  *(long *)(param_1[3] + 0x58) = param_1[3] + 0x60;
  *(long *)(param_1[3] + 0x68) = param_1[3] + 0x70;
  *(long *)(param_1[3] + 0x78) = param_1[3] + 0x80;
  *(long *)(param_1[3] + 0x88) = param_1[3] + 0x90;
  *(long *)(param_1[3] + 0x98) = param_1[3] + 0xa0;
  *(long *)(param_1[3] + 0xa8) = param_1[3] + 0xb0;
  *(long *)(param_1[3] + 0xb8) = param_1[3] + 0xc0;
  *(long *)(param_1[3] + 200) = param_1[3] + 0xd0;
  *(long *)(param_1[3] + 0xd8) = param_1[3] + 0xe0;
  *(long *)(param_1[3] + 0xe8) = param_1[3] + 0xf0;
  *(undefined8 *)(param_1[3] + 0xf8) = 0;
  param_1[8] = 0x10;
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x26) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  DAT_04c81d80 = nn::lmem::CreateExpHeap(&DAT_04c81db0,0x800,0);
  nn::os::InitializeMutex((MutexType *)&DAT_04c81d88,false,0);
  return;
}


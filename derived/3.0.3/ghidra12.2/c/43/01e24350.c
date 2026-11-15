
void FUN_01e24350(long param_1,uint *param_2)

{
  uint uVar1;
  
  *(undefined4 *)(param_1 + 0xd0) = 2;
  uVar1 = *param_2;
  *(undefined1 *)(param_1 + 200) = 0;
  *(uint *)(param_1 + 0xd4) = uVar1;
  if (*(DeviceHandle **)(param_1 + 0x80) != (DeviceHandle *)0x0) {
    nn::nfp::StopDetection(*(DeviceHandle **)(param_1 + 0x80));
    *(undefined8 *)(param_1 + 0x80) = 0;
  }
  if (((*param_2 & 0x3fe1ff) == 0x8073) || ((*param_2 & 0x3ff1ff) == 0xc073)) {
    *(undefined1 *)(param_1 + 0x191) = 1;
  }
  return;
}


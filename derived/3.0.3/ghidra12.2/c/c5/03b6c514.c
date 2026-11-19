
void FUN_03b6c514(long param_1,short *param_2,undefined8 param_3,undefined4 param_4,
                 undefined8 param_5,long param_6)

{
  int iVar1;
  short sVar2;
  ulong uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ulong uVar6;
  
  *(undefined2 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined2 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xbc) = 0;
  *(undefined2 *)(param_1 + 0xc4) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined2 *)(param_1 + 0xd0) = 0;
  *(undefined2 *)(param_1 + 0xdc) = 0;
  *(undefined8 *)(param_1 + 0xd4) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined2 *)(param_1 + 0xe8) = 0;
  *(undefined2 *)(param_1 + 0xf4) = 0;
  *(undefined8 *)(param_1 + 0xec) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  if ((*(int *)(param_1 + 0x9c) != 0) && (*(int *)(param_1 + 0x98) != 0)) goto LAB_03b6c664;
  sVar2 = *param_2;
  uVar4 = 6;
  if (sVar2 != 1) {
    uVar4 = 2;
  }
  uVar5 = *(undefined4 *)(param_2 + 4);
  if (param_6 == 0) {
    *(undefined4 *)(param_1 + 0x68) = uVar5;
    *(undefined4 *)(param_1 + 0x58) = uVar4;
    *(undefined4 *)(param_1 + 0x98) = 1;
    *(undefined1 *)(param_1 + 0x5c) = 0;
    *(undefined8 *)(param_1 + 0x60) = param_3;
    *(undefined ***)(param_1 + 0x50) = &PTR_LAB_04b77c70;
joined_r0x03b6c61c:
    if (sVar2 != 1) {
      *(undefined4 *)(param_1 + 0x9c) = 2;
      goto LAB_03b6c664;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x58) = uVar4;
    *(undefined4 *)(param_1 + 0x98) = 2;
    *(undefined1 *)(param_1 + 0x5c) = 0;
    *(undefined8 *)(param_1 + 0x60) = param_3;
    *(undefined ***)(param_1 + 0x50) = &PTR_LAB_04b77cb8;
    *(undefined4 *)(param_1 + 0x68) = uVar5;
    *(undefined4 *)(param_1 + 0x6c) = 0;
    *(long *)(param_1 + 0x70) = param_6;
    uVar6 = *(ulong *)(param_6 + 0x20);
    if (sVar2 != 1) {
      uVar3 = nn::audio::GetSampleByteSize(2);
      uVar4 = 0;
      if (uVar3 != 0) {
        uVar4 = (undefined4)(uVar6 / uVar3);
      }
      *(undefined4 *)(param_1 + 0x6c) = uVar4;
      goto joined_r0x03b6c61c;
    }
    *(int *)(param_1 + 0x6c) = (int)(uVar6 >> 3) * 0xe;
  }
  *(undefined8 *)(param_1 + 0xb0) = param_5;
  *(undefined1 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x9c) = 1;
  *(undefined ***)(param_1 + 0x78) = &PTR_LAB_04b77c48;
  *(short **)(param_1 + 0x88) = param_2;
  *(undefined8 *)(param_1 + 0x90) = param_3;
LAB_03b6c664:
  iVar1 = *(int *)(param_2 + 0x1e);
  *(undefined4 *)(param_1 + 0x18) = param_4;
  if (iVar1 == -1) {
    uVar4 = *(undefined4 *)(param_2 + 4);
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x1c) = uVar4;
  }
  else {
    uVar4 = *(undefined4 *)(param_2 + 0x1e);
    *(long *)(param_1 + 0x10) = param_1 + 0x20;
    *(undefined4 *)(param_1 + 0x1c) = uVar4;
    if ((ushort)param_2[0x1d] < (ushort)param_2[0x1c]) {
      uVar5 = *(undefined4 *)(param_2 + (ulong)(ushort)param_2[0x1d] * 6 + 0x20);
    }
    else {
      uVar5 = 0;
    }
    *(undefined4 *)(param_1 + 0x30) = uVar5;
    uVar5 = *(undefined4 *)(param_2 + 0x1e);
    *(long *)(param_1 + 0x28) = param_1 + 0x20;
    *(undefined4 *)(param_1 + 0x34) = uVar5;
  }
  *(long *)(param_1 + 0x38) = param_1 + 8;
  *(long *)(param_1 + 0x40) = param_1 + 8;
  if ((*(int *)(param_1 + 0x9c) != 0) && (*(int *)(param_1 + 0x98) != 0)) {
    *(undefined4 *)(param_1 + 0xa0) = param_4;
    *(undefined4 *)(param_1 + 0xa4) = uVar4;
    *(undefined4 *)(param_1 + 0xa8) = 0;
    *(undefined1 *)(param_1 + 0xac) = 1;
    if (*(int *)(param_1 + 0x98) - 1U < 2) {
                    /* WARNING: Could not recover jumptable at 0x03b6c724. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(param_1 + 0x50) + 0x18))((long *)(param_1 + 0x50),param_4);
      return;
    }
  }
  return;
}


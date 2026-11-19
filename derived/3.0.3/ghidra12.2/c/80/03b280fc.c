
void FUN_03b280fc(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined4 uVar3;
  
  param_1[2] = param_1 + 1;
  param_1[3] = 0;
  *param_1 = &PTR_LAB_04b743d0;
  param_1[1] = param_1 + 1;
  param_1[8] = 0;
  param_1[9] = 0x42c8000042c80000;
  *(undefined4 *)(param_1 + 10) = 0x42c80000;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)((long)param_1 + 0x54) = *(undefined4 *)(param_2 + 0x54);
  uVar3 = *(undefined4 *)(param_2 + 0x58);
  *(undefined8 *)((long)param_1 + 0x5c) = 0x41a00000;
  *(undefined4 *)((long)param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0xb) = uVar3;
  uVar3 = *(undefined4 *)(param_2 + 0x68);
  *(undefined1 *)((long)param_1 + 0x6c) = 1;
  param_1[4] = param_3;
  *(undefined4 *)(param_1 + 0xd) = uVar3;
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  lVar2 = *(long *)(*(long *)(param_2 + 0x28) + 0x60);
  uVar1 = FUN_03b185ec(param_3,lVar2 + (ulong)*(uint *)(lVar2 + 0xc),1);
  param_1[5] = uVar1;
  lVar2 = *(long *)(*(long *)(param_2 + 0x30) + 0x60);
  uVar1 = FUN_03b185ec(param_3,lVar2 + (ulong)*(uint *)(lVar2 + 0xc),1);
  param_1[6] = uVar1;
  *(byte *)(param_1[5] + 0x57) = *(byte *)(param_1[5] + 0x57) & 0xdf;
  *(byte *)(param_1[6] + 0x57) = *(byte *)(param_1[6] + 0x57) & 0xdf;
  if (*(long *)(param_2 + 0x38) != 0) {
    lVar2 = *(long *)(*(long *)(param_2 + 0x38) + 0x60);
    lVar2 = FUN_03b185ec(param_3,lVar2 + (ulong)*(uint *)(lVar2 + 0xc),1);
    param_1[7] = lVar2;
    *(byte *)(lVar2 + 0x57) = *(byte *)(lVar2 + 0x57) & 0xdf;
  }
  if (*(long *)(param_2 + 0x40) != 0) {
    lVar2 = *(long *)(*(long *)(param_2 + 0x40) + 0x60);
    lVar2 = FUN_03b185ec(param_3,lVar2 + (ulong)*(uint *)(lVar2 + 0xc),1);
    param_1[8] = lVar2;
    *(byte *)(lVar2 + 0x57) = *(byte *)(lVar2 + 0x57) & 0xdf;
  }
  return;
}


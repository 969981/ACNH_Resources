
void FUN_03af4c6c(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  uVar1 = (uint)param_2;
  FUN_03af8c88(param_1,param_2,0xffffffff);
  uVar2 = DAT_05ae90c0;
  lVar4 = *(long *)(param_1 + 0x10);
  if (*(uint *)(param_1 + 8) <= uVar1) {
    uVar1 = 0;
  }
  lVar3 = lVar4 + (long)(int)uVar1 * 0x23c0;
  if (*(long *)(lVar3 + 0x6f0) != 0) {
    FUN_039499cc(DAT_05ae90c0);
    *(undefined8 *)(lVar3 + 0x6f0) = 0;
  }
  if (*(long *)(lVar3 + 0xeb0) != 0) {
    FUN_039499cc(DAT_05ae90c0);
    *(undefined8 *)(lVar3 + 0xeb0) = 0;
  }
  if (*(long *)(lVar3 + 0x1670) != 0) {
    FUN_039499cc(DAT_05ae90c0);
    *(undefined8 *)(lVar3 + 0x1670) = 0;
  }
  if (*(long *)(lVar3 + 0x6f8) != 0) {
    FUN_039499cc(DAT_05ae90c0);
    *(undefined8 *)(lVar3 + 0x6f8) = 0;
    *(undefined4 *)(lVar3 + 0xa88) = 0;
    *(undefined8 *)(lVar3 + 0xa90) = 0;
    *(undefined8 *)(lVar3 + 0xa98) = 0;
  }
  lVar3 = lVar4 + (long)(int)uVar1 * 0x23c0;
  if (*(long *)(lVar3 + 0x1ef8) != 0) {
    FUN_039499cc(uVar2);
    *(undefined8 *)(lVar3 + 0x1ef8) = 0;
  }
  *(uint *)(lVar4 + (long)(int)uVar1 * 0x23c0) =
       *(uint *)(lVar4 + (long)(int)uVar1 * 0x23c0) & 0xffffffef;
  return;
}


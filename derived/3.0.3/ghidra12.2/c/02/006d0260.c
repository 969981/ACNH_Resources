
void FUN_006d0260(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  size_t __n;
  uint uVar4;
  
  uVar2 = param_2[4];
  if (0 < (int)uVar2) {
    uVar4 = 0;
    do {
      uVar2 = uVar4;
      if (*param_2 <= uVar4) {
        uVar2 = 0;
      }
      uVar1 = uVar4;
      if (*param_1 <= uVar4) {
        uVar1 = 0;
      }
      *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)uVar1 * 0x30) =
           *(undefined8 *)(*(long *)(param_2 + 2) + (ulong)uVar2 * 0x30);
      uVar2 = uVar4;
      if (*param_2 <= uVar4) {
        uVar2 = 0;
      }
      uVar1 = uVar4;
      if (*param_1 <= uVar4) {
        uVar1 = 0;
      }
      *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)uVar1 * 0x30 + 8) =
           *(undefined8 *)(*(long *)(param_2 + 2) + (ulong)uVar2 * 0x30 + 8);
      uVar2 = uVar4;
      if (*param_2 <= uVar4) {
        uVar2 = 0;
      }
      uVar1 = uVar4;
      if (*param_1 <= uVar4) {
        uVar1 = 0;
      }
      *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)uVar1 * 0x30 + 0x10) =
           *(undefined8 *)(*(long *)(param_2 + 2) + (ulong)uVar2 * 0x30 + 0x10);
      uVar2 = uVar4;
      if (*param_2 <= uVar4) {
        uVar2 = 0;
      }
      lVar3 = *(long *)(param_2 + 2) + (ulong)uVar2 * 0x30;
      __n = *(size_t *)(lVar3 + 0x28);
      uVar2 = uVar4;
      if (*param_1 <= uVar4) {
        uVar2 = 0;
      }
      memcpy(*(void **)(*(long *)(param_1 + 2) + (ulong)uVar2 * 0x30 + 0x18),
             *(void **)(lVar3 + 0x18),__n);
      uVar2 = uVar4;
      if (*param_1 <= uVar4) {
        uVar2 = 0;
      }
      uVar4 = uVar4 + 1;
      *(size_t *)(*(long *)(param_1 + 2) + (ulong)uVar2 * 0x30 + 0x28) = __n;
      uVar2 = param_2[4];
    } while ((int)uVar4 < (int)uVar2);
  }
  param_1[4] = uVar2;
  return;
}



void FUN_006dbb00(undefined8 *param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  uint *puVar4;
  uint uVar5;
  
  puVar4 = (uint *)*param_1;
  uVar2 = *puVar4;
  if (0 < (int)uVar2) {
    uVar5 = 0;
    do {
      uVar1 = uVar5;
      if (uVar2 <= uVar5) {
        uVar1 = 0;
      }
      *(undefined8 *)(*(long *)(puVar4 + 2) + (ulong)uVar1 * 0x48) = 0;
      uVar2 = uVar5;
      if (*puVar4 <= uVar5) {
        uVar2 = 0;
      }
      *(undefined8 *)(*(long *)(puVar4 + 2) + (ulong)uVar2 * 0x48 + 8) = 0;
      uVar2 = uVar5;
      if (*puVar4 <= uVar5) {
        uVar2 = 0;
      }
      *(undefined8 *)(*(long *)(puVar4 + 2) + (ulong)uVar2 * 0x48 + 0x10) = 0;
      uVar2 = uVar5;
      if (*puVar4 <= uVar5) {
        uVar2 = 0;
      }
      lVar3 = *(long *)(puVar4 + 2) + (ulong)uVar2 * 0x48;
      memset(*(void **)(lVar3 + 0x30),0,*(size_t *)(lVar3 + 0x38));
      uVar2 = uVar5;
      if (*puVar4 <= uVar5) {
        uVar2 = 0;
      }
      uVar5 = uVar5 + 1;
      *(undefined8 *)(*(long *)(puVar4 + 2) + (ulong)uVar2 * 0x48 + 0x40) = 0;
      uVar2 = *puVar4;
    } while ((int)uVar5 < (int)uVar2);
  }
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar4 = (uint *)param_1[1];
  uVar2 = *puVar4;
  if (0 < (int)uVar2) {
    uVar5 = 0;
    do {
      uVar1 = uVar5;
      if (uVar2 <= uVar5) {
        uVar1 = 0;
      }
      *(undefined8 *)(*(long *)(puVar4 + 2) + (ulong)uVar1 * 0x48) = 0;
      uVar2 = uVar5;
      if (*puVar4 <= uVar5) {
        uVar2 = 0;
      }
      *(undefined8 *)(*(long *)(puVar4 + 2) + (ulong)uVar2 * 0x48 + 8) = 0;
      uVar2 = uVar5;
      if (*puVar4 <= uVar5) {
        uVar2 = 0;
      }
      *(undefined8 *)(*(long *)(puVar4 + 2) + (ulong)uVar2 * 0x48 + 0x10) = 0;
      uVar2 = uVar5;
      if (*puVar4 <= uVar5) {
        uVar2 = 0;
      }
      lVar3 = *(long *)(puVar4 + 2) + (ulong)uVar2 * 0x48;
      memset(*(void **)(lVar3 + 0x30),0,*(size_t *)(lVar3 + 0x38));
      uVar2 = uVar5;
      if (*puVar4 <= uVar5) {
        uVar2 = 0;
      }
      uVar5 = uVar5 + 1;
      *(undefined8 *)(*(long *)(puVar4 + 2) + (ulong)uVar2 * 0x48 + 0x40) = 0;
      uVar2 = *puVar4;
    } while ((int)uVar5 < (int)uVar2);
  }
  puVar4[6] = 0;
  puVar4[7] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[2] = 1;
  return;
}


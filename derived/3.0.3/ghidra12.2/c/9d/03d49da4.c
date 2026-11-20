
void FUN_03d49da4(long param_1,uint param_2,uint param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  uint uVar5;
  
  puVar1 = (undefined8 *)(param_1 + 0x60);
  puVar3 = puVar1 + (ulong)param_2 * 0xa0;
  if (3 < param_2) {
    puVar3 = puVar1;
  }
  puVar2 = puVar3 + (ulong)param_3 * 5;
  if (0x1f < param_3) {
    puVar2 = puVar3;
  }
  *puVar2 = &PTR_LAB_04b8f398;
  *(undefined1 *)(puVar2 + 4) = 0;
  puVar3 = puVar1 + (ulong)param_3 * 5;
  if (0x1f < param_3) {
    puVar3 = puVar1;
  }
  if (*(char *)(puVar3 + 4) == '\0') {
    lVar4 = param_1 + 0x560 + (ulong)param_3 * 0x28;
    if (0x1f < param_3) {
      lVar4 = param_1 + 0x560;
    }
    if (*(char *)(lVar4 + 0x20) == '\0') {
      lVar4 = param_1 + 0xa60 + (ulong)param_3 * 0x28;
      if (0x1f < param_3) {
        lVar4 = param_1 + 0xa60;
      }
      if (*(char *)(lVar4 + 0x20) == '\0') {
        lVar4 = param_1 + 0xf60 + (ulong)param_3 * 0x28;
        if (0x1f < param_3) {
          lVar4 = param_1 + 0xf60;
        }
        if (*(char *)(lVar4 + 0x20) == '\0') {
          uVar5 = *(uint *)(param_1 + 0x14b4) & (1 << (ulong)(param_3 & 0x1f) ^ 0xffffffffU);
          goto LAB_03d49e78;
        }
      }
    }
  }
  uVar5 = *(uint *)(param_1 + 0x14b4) | 1 << (ulong)(param_3 & 0x1f);
LAB_03d49e78:
  *(uint *)(param_1 + 0x14b4) = uVar5;
  return;
}


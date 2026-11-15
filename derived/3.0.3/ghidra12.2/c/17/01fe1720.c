
void FUN_01fe1720(long param_1)

{
  ushort *puVar1;
  undefined *puVar2;
  int *piVar3;
  int *piVar4;
  undefined *puVar5;
  undefined4 uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined4 local_24;
  
  puVar1 = (ushort *)(param_1 + 0x1242c);
  piVar3 = (int *)(param_1 + 0xb0c8);
  piVar4 = (int *)(param_1 + 0xcbe8);
  *puVar1 = *puVar1 | 0x10;
  puVar5 = PTR_DAT_04bbc1a0;
  if (0 < *piVar3) {
    lVar7 = 0;
    puVar2 = PTR_DAT_04bbc1a0 + 0x10;
    do {
      puVar8 = *(undefined8 **)(*(long *)(param_1 + 0xb0d0) + lVar7 * 8);
      lVar7 = lVar7 + 1;
      puVar8[0xf] = puVar2;
      *puVar8 = *(undefined8 *)(param_1 + 0xb0d8);
      *(undefined8 **)(param_1 + 0xb0d8) = puVar8;
    } while (lVar7 < *piVar3);
  }
  *piVar3 = 0;
  if (0 < *piVar4) {
    lVar7 = 0;
    do {
      puVar8 = *(undefined8 **)(*(long *)(param_1 + 0xcbf0) + lVar7 * 8);
      lVar7 = lVar7 + 1;
      puVar8[0xf] = puVar5 + 0x10;
      *puVar8 = *(undefined8 *)(param_1 + 0xcbf8);
      *(undefined8 **)(param_1 + 0xcbf8) = puVar8;
    } while (lVar7 < *piVar4);
  }
  *piVar4 = 0;
  *(undefined1 *)(param_1 + 0xe724) = 0;
  *(undefined8 *)(param_1 + 0xe708) = 0;
  *(undefined8 *)(param_1 + 0xe710) = 0;
  *(undefined8 *)(param_1 + 0xe718) = 0;
  local_24 = 0;
  FUN_01e39778(*(undefined8 *)(param_1 + 8),PTR_DAT_04bb2150,&local_24,0);
  uVar6 = 0x10;
  if ((*puVar1 & 0x100) != 0) {
    uVar6 = 0x5b;
  }
  FUN_01ea5580(param_1,uVar6,0,0);
  return;
}


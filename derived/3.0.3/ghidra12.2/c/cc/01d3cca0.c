
void FUN_01d3cca0(long param_1,byte *param_2)

{
  undefined4 *puVar1;
  undefined2 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  byte bVar5;
  bool bVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  byte local_14 [4];
  
  puVar1 = (undefined4 *)(param_1 + 0x40);
  local_14[0] = *param_2;
  puVar7 = *(undefined8 **)(param_1 + 0x38);
  if (puVar7 != (undefined8 *)0x0) {
    (**(code **)*puVar7)(puVar7,local_14);
    local_14[0] = *param_2;
  }
  uVar8 = (long)(char)local_14[0] & 0xffffffff;
  puVar3 = puVar1 + uVar8 * 0x20;
  if (7 < local_14[0]) {
    puVar3 = puVar1;
  }
  if (puVar3[6] != 0) {
    lVar9 = (long)(int)puVar3[6] << 3;
    puVar7 = *(undefined8 **)(puVar3 + 8);
    do {
      bVar5 = *(byte *)*puVar7;
      bVar6 = 7 < bVar5;
      if (bVar6) {
        bVar5 = 0xff;
      }
      puVar2 = (undefined2 *)(param_1 + 0x444) + ((long)(char)bVar5 & 0xffffffffU) * 2;
      if (bVar6) {
        puVar2 = (undefined2 *)(param_1 + 0x444);
      }
      lVar9 = lVar9 + -8;
      *(undefined1 *)(puVar2 + 1) = 0xff;
      *puVar2 = 0xffff;
      puVar7 = puVar7 + 1;
    } while (lVar9 != 0);
    local_14[0] = *param_2;
    uVar8 = (long)(char)local_14[0] & 0xffffffff;
  }
  puVar3 = puVar1 + uVar8 * 0x20;
  if (7 < local_14[0]) {
    puVar3 = puVar1;
  }
  *(undefined1 *)(puVar3 + 0x1e) = 0xff;
  *(undefined8 *)(puVar3 + 2) = 0;
  *(undefined1 *)(puVar3 + 4) = 0;
  puVar3[0x1f] = 0;
  if (0 < (int)puVar3[6]) {
    lVar9 = 0;
    puVar7 = *(undefined8 **)(puVar3 + 10);
    do {
      puVar12 = *(undefined8 **)(*(long *)(puVar3 + 8) + lVar9 * 8);
      lVar9 = lVar9 + 1;
      *puVar12 = puVar7;
      *(undefined8 **)(puVar3 + 10) = puVar12;
      puVar7 = puVar12;
    } while (lVar9 < (int)puVar3[6]);
  }
  puVar3[6] = 0;
  *puVar3 = 0;
  lVar9 = (long)(char)*param_2;
  if (lVar9 != -1) {
    lVar10 = *DAT_0537d558;
    uVar4 = *(uint *)(lVar10 + lVar9 * 4 + 0x494);
    if (((-1 < (int)uVar4) && ((int)uVar4 < (int)DAT_05372688 && uVar4 < DAT_05372688)) &&
       (lVar11 = *(long *)(DAT_05372690 + (ulong)uVar4 * 8), lVar11 != 0)) {
      *(undefined1 *)(lVar11 + 0x41) = 0;
      lVar9 = (long)(char)*param_2;
    }
    *(undefined4 *)(lVar10 + lVar9 * 4 + 0x494) = 0xffffffff;
  }
  return;
}


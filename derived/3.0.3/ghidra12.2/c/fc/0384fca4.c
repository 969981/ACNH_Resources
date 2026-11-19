
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0384fca4(long param_1,uint param_2)

{
  undefined8 *puVar1;
  ushort uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  uint uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined *local_148;
  undefined1 *puStack_140;
  undefined4 local_138;
  undefined1 local_134 [255];
  undefined1 local_35;
  
  if (*(char *)(param_1 + 0xae) == '\0') {
    return 1;
  }
  lVar5 = *(long *)(param_1 + 0x78);
  if (lVar5 == 0) {
    uVar3 = 0;
    uVar7 = _SUB_00000018;
  }
  else {
    uVar3 = *(uint *)(lVar5 + 0x18);
    uVar7 = uVar3;
  }
  if (uVar3 <= param_2) {
    param_2 = 0;
  }
  if (((int)param_2 < 0) || ((int)uVar7 <= (int)param_2)) {
    local_35 = 0;
    local_138 = 0x100;
    puStack_140 = local_134;
    local_134[0] = 0;
    local_148 = PTR_DAT_04bb21f8 + 0x10;
    lVar5 = *(long *)(*(long *)(*(long *)(lVar5 + 0x50) + 0x10) + 8);
    FUN_038d1270(&local_148,"%s.as",lVar5 + *(int *)(lVar5 + 0x24) + (long)*(int *)(lVar5 + 8));
  }
  else {
    lVar5 = *(long *)(*(long *)(lVar5 + 0x20) + (ulong)param_2 * 0x10);
    puVar6 = *(undefined8 **)(lVar5 + 0x70);
    if ((puVar6[0x12] != 0) && (uVar2 = *(ushort *)((long)puVar6 + 0x5a), -1 < (short)uVar2)) {
      uVar8 = (ulong)uVar2;
      puVar1 = puVar6 + 5 + uVar8;
      if (3 < uVar2) {
        puVar1 = puVar6 + 5;
      }
      uVar9 = *puVar1;
      local_148 = *(undefined **)(lVar5 + 0x18);
      if (3 < uVar2) {
        uVar8 = 0;
      }
      lVar4 = puVar6[uVar8];
      if (lVar4 != 0) {
        puStack_140 = (undefined1 *)lVar5;
        if (lVar4 != puVar6[0x12]) {
          uVar8 = FUN_03ec89f8(*(undefined8 *)(puVar6[0xe] + 0x10),lVar4,&local_148,uVar9);
          if ((uVar8 & 1) != 0) {
            uVar3 = 0;
            goto LAB_0384fdd0;
          }
          puVar6 = *(undefined8 **)(lVar5 + 0x70);
          uVar2 = *(ushort *)((long)puVar6 + 0x5a);
        }
        puVar1 = puVar6 + uVar2;
        if (3 < uVar2) {
          puVar1 = puVar6;
        }
        uVar3 = (**(code **)(*(long *)*puVar1 + 0x68))((long *)*puVar1,uVar9);
        goto LAB_0384fdd0;
      }
    }
  }
  uVar3 = 1;
LAB_0384fdd0:
  return uVar3 & 1;
}


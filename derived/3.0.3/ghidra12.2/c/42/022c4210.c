
undefined8 FUN_022c4210(byte *param_1,uint param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  byte bVar3;
  bool bVar4;
  undefined4 *puVar5;
  long lVar6;
  ulong uVar7;
  uint *puVar8;
  undefined *local_a0;
  uint local_98;
  uint local_94;
  byte local_90;
  undefined1 local_8f;
  undefined4 local_8c;
  undefined4 uStack_88;
  undefined8 local_84;
  undefined8 local_7c;
  undefined8 local_74;
  undefined8 local_6c;
  undefined4 local_64;
  undefined *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined1 local_44;
  
  local_8f = 0;
  local_94 = 0;
  local_84 = 0xfffe;
  local_90 = *PTR_DAT_04bb32e0;
  local_a0 = PTR_DAT_04bc2e90 + 0x10;
  local_8c = *(undefined4 *)PTR_DAT_04bb37e0;
  uStack_88 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
  if (7 < local_90) {
    local_90 = 0xff;
  }
  local_98 = param_2;
  FUN_0277d4ac(&local_84);
  local_7c = 0xfffe;
  FUN_0277d4ac(&local_7c);
  local_58 = 0;
  uStack_50 = 0x2400000000;
  local_60 = PTR_DAT_04bb2010 + 0x10;
  local_74 = 0;
  local_6c = 0;
  local_64 = 0;
  local_48 = 0;
  local_44 = 0;
  bVar3 = *param_1;
  local_94 = (uint)bVar3;
  if (7 < local_94) {
    local_94 = 0xffffffff;
  }
  if (bVar3 < 8) {
    local_90 = bVar3;
  }
  local_8f = 1;
  lVar6 = *(long *)(*(long *)PTR_DAT_04bbc218 + 0x18);
  uVar1 = local_98;
  if (*(uint *)(*(long *)PTR_DAT_04bbc218 + 0x10) <= local_98) {
    uVar1 = 0;
  }
  puVar8 = *(uint **)(lVar6 + (long)(int)uVar1 * 0x18 + 0x10);
  if ((0 < (int)*puVar8) && (local_94 < *(uint *)(lVar6 + (long)(int)uVar1 * 0x18 + 8))) {
    uVar7 = 0;
    lVar6 = 0x2c;
    do {
      if (((uVar7 < puVar8[(long)(int)local_94 * 4]) &&
          (*(long *)(puVar8 + (long)(int)local_94 * 4 + 2) != 0)) &&
         (*(int *)(*(long *)(puVar8 + (long)(int)local_94 * 4 + 2) + lVar6) == 0)) {
        if (-1 < (int)uVar7) {
          return 0;
        }
        break;
      }
      uVar7 = uVar7 + 1;
      lVar6 = lVar6 + 0x518;
    } while (*puVar8 != uVar7);
  }
  FUN_01393458(&local_a0);
  if (param_2 == 0) {
    uVar7 = 0;
  }
  else if (param_2 == 0xd) {
    uVar7 = 1;
  }
  else if (((int)param_2 < DAT_0547b48c) || (DAT_0547b490 < (int)param_2)) {
    uVar7 = 0;
  }
  else {
    uVar1 = (param_2 - DAT_0547b48c) + 2;
    uVar7 = (ulong)uVar1;
    if (0xd < uVar1) {
      puVar5 = &DAT_0547b494;
      goto LAB_022c43f8;
    }
  }
  puVar5 = &DAT_0547b494 + uVar7 * 10;
LAB_022c43f8:
  bVar3 = *param_1;
  bVar4 = 7 < bVar3;
  if (bVar4) {
    bVar3 = 0xff;
  }
  puVar2 = puVar5 + ((long)(char)bVar3 & 0xffffffff);
  if (bVar4) {
    puVar2 = puVar5;
  }
  *puVar2 = 0;
  return 1;
}


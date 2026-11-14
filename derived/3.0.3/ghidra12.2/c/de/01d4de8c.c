
void FUN_01d4de8c(long param_1)

{
  byte bVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  void ***local_68;
  long lStack_60;
  void **local_58;
  uint *puStack_50;
  void **local_48;
  uint *puStack_40;
  uint local_34;
  void *local_30;
  void ****local_28;
  
  FUN_01d4e024();
  local_68 = &local_48;
  local_58 = &local_30;
  local_30 = (void *)0x0;
  puStack_50 = &local_34;
  local_34 = 0;
  lStack_60 = param_1;
  local_48 = local_58;
  puStack_40 = puStack_50;
  if (*(uint *)(param_1 + 0x8e0) == 0xffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_00d72dc0();
  }
  local_28 = &local_68;
  (*(code *)(&PTR_LAB_04a597e0)[*(uint *)(param_1 + 0x8e0)])(&local_28,param_1 + 0x7c8);
  uVar2 = local_34;
  lVar9 = *(long *)(*(long *)PTR_DAT_04bb21d8 + 0x3d8);
  memcpy((void *)(lVar9 + 0x1f1),local_30,(ulong)local_34);
  *(uint *)(lVar9 + 0x3f4) = uVar2;
  *(undefined1 *)(lVar9 + 0x411) = 1;
  puVar6 = PTR_DAT_04bb8930;
  lVar9 = *DAT_0537d558;
  if (2 < *(int *)(lVar9 + 0x508)) {
    bVar3 = *(byte *)(lVar9 + 0x477);
    lVar7 = *(long *)PTR_DAT_04bb8930;
    uVar2 = 0;
    if (*(uint *)(lVar7 + 0x18) != 0xffffffff) {
      uVar2 = *(uint *)(lVar7 + 0x18);
    }
    lVar8 = *(long *)(lVar7 + 0x10);
    if (*(uint *)(lVar7 + 8) <= uVar2) {
      uVar2 = 0;
    }
    lVar7 = lVar8 + (long)(int)uVar2 * 0x58;
    bVar4 = *(byte *)(lVar7 + 0x10);
    bVar1 = bVar4 & 0xf7;
    bVar5 = *(char *)(lVar9 + 0x55f) << 3;
    *(byte *)(lVar7 + 0x10) = bVar1 | bVar5;
    if (bVar4 != (bVar1 | bVar5)) {
      *(undefined4 *)(lVar8 + (long)(int)uVar2 * 0x58 + 0x50) = 0x1e;
    }
    lVar9 = *(long *)puVar6;
    lVar7 = *(long *)(lVar9 + 0x10);
    uVar2 = 0;
    if (*(uint *)(lVar9 + 0x18) != 0xffffffff) {
      uVar2 = *(uint *)(lVar9 + 0x18);
    }
    if (*(uint *)(lVar9 + 8) <= uVar2) {
      uVar2 = 0;
    }
    lVar9 = lVar7 + (long)(int)uVar2 * 0x58;
    bVar5 = *(byte *)(lVar9 + 0x10);
    bVar3 = bVar5 & 0xef | (7 < bVar3) << 4;
    *(byte *)(lVar9 + 0x10) = bVar3;
    if (bVar5 != bVar3) {
      *(undefined4 *)(lVar7 + (long)(int)uVar2 * 0x58 + 0x50) = 0x1e;
    }
  }
  return;
}


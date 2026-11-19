
void FUN_039a8e90(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  ulong uVar6;
  int iVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  uint uVar11;
  
  puVar4 = PTR_DAT_04bb3490;
  puVar3 = PTR_DAT_04bb3488;
  uVar2 = *(uint *)(param_1 + 0x20);
  if ((uint)*(ushort *)(param_1 + 0x284) <= *(uint *)(param_1 + 0x20)) {
    uVar2 = (uint)*(ushort *)(param_1 + 0x284);
  }
  if (uVar2 != 0) {
    lVar10 = *(long *)(param_1 + 0x28);
    uVar11 = 0;
    puVar1 = PTR_DAT_04bb3498 + 0x10;
    do {
      puVar9 = *(undefined8 **)(lVar10 + (long)(int)uVar11 * 0x38);
      if (((*puVar4 & 1) == 0) && (iVar5 = __cxa_guard_acquire(puVar4), iVar5 != 0)) {
        *(undefined **)puVar3 = puVar1;
        __cxa_guard_release(puVar4);
      }
      if ((puVar9 != (undefined8 *)0x0) &&
         (uVar6 = (**(code **)*puVar9)(puVar9,puVar3), (uVar6 & 1) != 0)) {
        FUN_039d8430(puVar9,param_2);
      }
      uVar11 = uVar11 + 1;
    } while (uVar2 != uVar11);
  }
  lVar10 = *(long *)(param_1 + 0x50);
  if (lVar10 != 0) {
    iVar5 = *(int *)(lVar10 + 0x38);
    if (iVar5 != 0) {
      lVar10 = *(long *)(lVar10 + 0x40);
      iVar7 = 0;
      do {
        lVar8 = lVar10 + (long)iVar7 * 0xb8;
        *(uint *)(lVar8 + 0xa8) = *(uint *)(lVar8 + 0xa8) | 2;
        iVar7 = iVar7 + 1;
      } while (iVar5 != iVar7);
      lVar10 = *(long *)(param_1 + 0x50);
    }
    iVar5 = *(int *)(lVar10 + 0x48);
    if (iVar5 != 0) {
      lVar10 = *(long *)(lVar10 + 0x50);
      iVar7 = 0;
      do {
        lVar8 = lVar10 + (long)iVar7 * 0x30;
        *(ushort *)(lVar8 + 0x1a) = *(ushort *)(lVar8 + 0x1a) | 1;
        iVar7 = iVar7 + 1;
      } while (iVar5 != iVar7);
    }
  }
  return;
}


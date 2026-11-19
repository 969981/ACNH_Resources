
void FUN_039af270(long param_1,long param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  int iVar10;
  
  puVar4 = PTR_DAT_04bb3490;
  puVar3 = PTR_DAT_04bb3488;
  if ((0 < *(int *)(param_1 + 0x80)) && (iVar2 = *(int *)(param_1 + 8), iVar2 != 0)) {
    lVar9 = *(long *)(param_1 + 0x10);
    uVar7 = 0;
    iVar10 = 0;
    puVar1 = PTR_DAT_04bb3498 + 0x10;
    do {
      if (*(short *)(lVar9 + (long)iVar10 * 0x18 + 0x10) != 0) {
        puVar8 = (undefined8 *)**(undefined8 **)(*(long *)(param_2 + 0x38) + uVar7 * 8);
        if (((*puVar4 & 1) == 0) && (iVar5 = __cxa_guard_acquire(puVar4), iVar5 != 0)) {
          *(undefined **)puVar3 = puVar1;
          __cxa_guard_release(puVar4);
        }
        if ((puVar8 != (undefined8 *)0x0) &&
           (uVar6 = (**(code **)*puVar8)(puVar8,puVar3), (uVar6 & 1) != 0)) {
          *(byte *)(puVar8 + 0x5c) = *(byte *)(puVar8 + 0x5c) | 0x20;
          FUN_039af390(param_1,uVar7 & 0xffffffff,puVar8);
        }
      }
      iVar10 = iVar10 + 1;
      uVar7 = uVar7 + 1;
    } while (iVar2 != iVar10);
  }
  return;
}


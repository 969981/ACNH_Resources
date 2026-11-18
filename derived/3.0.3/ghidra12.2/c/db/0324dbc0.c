
void FUN_0324dbc0(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  
  puVar6 = PTR_DAT_04bc4d98;
  puVar5 = PTR_DAT_04bc4d90;
  uVar2 = *(uint *)(*(long *)(param_1 + 0x218) + 0x2f8);
  if (0 < (int)uVar2) {
    uVar9 = 0;
    puVar1 = PTR_DAT_04bc4da0 + 0x10;
    do {
      uVar3 = *(uint *)(*(long *)(param_1 + 0x218) + 0x208);
      if ((long)uVar9 < (long)(int)uVar3 && uVar9 < uVar3) {
        puVar10 = *(undefined8 **)(*(long *)(*(long *)(param_1 + 0x218) + 0x210) + uVar9 * 8);
      }
      else {
        puVar10 = (undefined8 *)0x0;
      }
      iVar4 = *(int *)(param_1 + 0x22c);
      if (((*puVar6 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar6), iVar7 != 0)) {
        *(undefined **)puVar5 = puVar1;
        __cxa_guard_release(puVar6);
      }
      if ((puVar10 != (undefined8 *)0x0) &&
         (uVar8 = (**(code **)*puVar10)(puVar10,puVar5), (uVar8 & 1) != 0)) {
        iVar4 = (int)uVar9 + iVar4;
        iVar7 = *(int *)(*(long *)(param_1 + 0x218) + 0x3cc);
        FUN_0324dcd0(param_1,puVar10,iVar4,uVar9 & 0xffffffff,
                     (iVar4 >= 0 && iVar7 != iVar4) && (iVar4 < 0 || iVar4 <= iVar7));
      }
      uVar9 = uVar9 + 1;
    } while (uVar2 != uVar9);
  }
  return;
}


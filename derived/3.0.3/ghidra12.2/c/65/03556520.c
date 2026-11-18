
/* WARNING: Removing unreachable block (ram,0x03556738) */
/* WARNING: Removing unreachable block (ram,0x0355659c) */
/* WARNING: Removing unreachable block (ram,0x03556754) */
/* WARNING: Removing unreachable block (ram,0x03556784) */
/* WARNING: Removing unreachable block (ram,0x035565a4) */

void FUN_03556520(long param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  
  puVar4 = PTR_DAT_04bc4d98;
  puVar3 = PTR_DAT_04bc4d90;
  lVar8 = *(long *)(*(long *)(param_1 + 0x228) + 0x570);
  iVar2 = *(int *)(lVar8 + 0x2f8);
  if (iVar2 != 0) {
    lVar10 = 0;
    puVar1 = PTR_DAT_04bc4da0 + 0x10;
    do {
      puVar7 = (undefined8 *)0x0;
      uVar9 = (uint)lVar10;
      if (((-1 < (int)uVar9) && ((int)uVar9 < (int)*(uint *)(lVar8 + 0x208))) &&
         (uVar9 < *(uint *)(lVar8 + 0x208))) {
        puVar7 = *(undefined8 **)(*(long *)(lVar8 + 0x210) + lVar10 * 8);
      }
      if (((*puVar4 & 1) == 0) && (iVar5 = __cxa_guard_acquire(puVar4), iVar5 != 0)) {
        *(undefined **)puVar3 = puVar1;
        __cxa_guard_release(puVar4);
      }
      if ((puVar7 != (undefined8 *)0x0) &&
         (uVar6 = (**(code **)*puVar7)(puVar7,puVar3), (uVar6 & 1) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x035566f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&UNK_035566f8 + (ulong)DAT_0418f246 * 4))();
        return;
      }
      lVar10 = lVar10 + 1;
    } while (iVar2 != (int)lVar10);
  }
  return;
}


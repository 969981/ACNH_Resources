
/* WARNING: Removing unreachable block (ram,0x033fb8ac) */
/* WARNING: Removing unreachable block (ram,0x033fb784) */
/* WARNING: Removing unreachable block (ram,0x033fb92c) */

void FUN_033fb710(byte *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  ulong uVar6;
  byte bVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  byte bVar10;
  long lVar11;
  
  puVar2 = PTR_DAT_04bb2230;
  bVar7 = *param_1;
  bVar10 = *PTR_DAT_04bb32e0;
  if (7 < bVar10) {
    bVar10 = 0xff;
  }
  if (7 < bVar7) {
    bVar7 = 0xff;
  }
  if (bVar10 != bVar7) {
    puVar8 = *(undefined8 **)(*(long *)PTR_DAT_04bb2230 + 0xa8);
    if (((*PTR_DAT_04bc73c8 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04bc73c8), iVar5 != 0)) {
      *(undefined **)PTR_DAT_04bc73c0 = PTR_DAT_04bb7c30 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc73c8);
    }
    if ((puVar8 != (undefined8 *)0x0) &&
       (uVar6 = (**(code **)*puVar8)(puVar8,PTR_DAT_04bc73c0), (uVar6 & 1) != 0)) {
      bVar10 = *param_1;
      if (7 < bVar10) {
        bVar10 = 0xff;
      }
      *(byte *)(puVar8 + 0x3f) = bVar10;
      puVar4 = PTR_DAT_04bb7c40;
      puVar3 = PTR_DAT_04bb7c38;
      if ((undefined8 *)puVar8[0xb] != puVar8 + 10) {
        lVar11 = (long)*(int *)((long)puVar8 + 100);
        puVar9 = (undefined8 *)((long)puVar8[0xb] - lVar11);
        puVar1 = PTR_DAT_04bb7c48 + 0x10;
        do {
          if (((*puVar4 & 1) == 0) && (iVar5 = __cxa_guard_acquire(puVar4), iVar5 != 0)) {
            *(undefined **)puVar3 = puVar1;
            __cxa_guard_release(puVar4);
          }
          if ((puVar9 != (undefined8 *)0x0) &&
             (uVar6 = (**(code **)*puVar9)(puVar9,puVar3), (uVar6 & 1) != 0)) {
            bVar10 = *param_1;
            if (7 < bVar10) {
              bVar10 = 0xff;
            }
            *(byte *)(puVar9 + 0x3f) = bVar10;
          }
          puVar9 = (undefined8 *)(*(long *)((long)puVar9 + lVar11 + 8) - lVar11);
        } while (puVar9 != (undefined8 *)((long)(puVar8 + 10) - lVar11));
      }
      if (puVar8[0x4b] != 0) {
        FUN_02f345e0(puVar8[0x4b],param_1);
      }
    }
    puVar8 = *(undefined8 **)(*(long *)puVar2 + 0x198);
    if (((*PTR_DAT_04bc74a0 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04bc74a0), iVar5 != 0)) {
      *(undefined **)PTR_DAT_04bc7498 = PTR_DAT_04bb7c30 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc74a0);
    }
    if ((puVar8 != (undefined8 *)0x0) &&
       (uVar6 = (**(code **)*puVar8)(puVar8,PTR_DAT_04bc7498), (uVar6 & 1) != 0)) {
      bVar10 = *param_1;
      if (7 < bVar10) {
        bVar10 = 0xff;
      }
      *(byte *)(puVar8 + 0x3f) = bVar10;
    }
    if (*(long *)PTR_DAT_04bb7ff8 != 0) {
      FUN_02ef9230(*(long *)PTR_DAT_04bb7ff8,param_1);
    }
    puVar8 = *(undefined8 **)(*(long *)puVar2 + 0x128);
    if (((*PTR_DAT_04bc6d18 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04bc6d18), iVar5 != 0)) {
      *(undefined **)PTR_DAT_04bc6d10 = PTR_DAT_04bb7c30 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc6d18);
    }
    if ((puVar8 != (undefined8 *)0x0) &&
       (uVar6 = (**(code **)*puVar8)(puVar8,PTR_DAT_04bc6d10), (uVar6 & 1) != 0)) {
      bVar10 = *param_1;
      if (7 < bVar10) {
        bVar10 = 0xff;
      }
      *(byte *)(puVar8 + 0x3f) = bVar10;
    }
  }
  return;
}


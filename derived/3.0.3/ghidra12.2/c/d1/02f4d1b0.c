
void FUN_02f4d1b0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  undefined4 uVar12;
  undefined *local_80;
  undefined4 local_78;
  
  puVar4 = PTR_DAT_04bc4d98;
  puVar3 = PTR_DAT_04bc4d90;
  lVar7 = *(long *)(param_1 + 0x220);
  lVar10 = *(long *)(lVar7 + 0x570);
  if ((lVar10 != 0) && (*(int *)(lVar10 + 0x2f8) != 0)) {
    uVar11 = 0;
    puVar1 = PTR_DAT_04bc4da0 + 0x10;
    puVar2 = PTR_DAT_04bc4f00 + 0x10;
    do {
      puVar8 = (undefined8 *)0x0;
      if (((-1 < (int)uVar11) && ((int)uVar11 < (int)*(uint *)(lVar10 + 0x208))) &&
         (uVar11 < *(uint *)(lVar10 + 0x208))) {
        puVar8 = *(undefined8 **)(*(long *)(lVar10 + 0x210) + uVar11 * 8);
      }
      if (((*puVar4 & 1) == 0) && (iVar5 = __cxa_guard_acquire(puVar4), iVar5 != 0)) {
        *(undefined **)puVar3 = puVar1;
        __cxa_guard_release(puVar4);
      }
      if (((puVar8 != (undefined8 *)0x0) &&
          (uVar6 = (**(code **)*puVar8)(puVar8,puVar3), (uVar6 & 1) != 0)) &&
         (plVar9 = *(long **)puVar8[0x5e], plVar9 != (long *)0x0)) {
        local_78 = 0x14;
        uVar12 = NEON_ucvtf(*(undefined4 *)(param_1 + 0x382bc));
        local_80 = puVar2;
        (**(code **)(*plVar9 + 0x18))(plVar9,&local_80);
        (**(code **)(plVar9[3] + 0x158))(uVar12,plVar9[1]);
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < *(uint *)(lVar10 + 0x2f8));
    lVar7 = *(long *)(param_1 + 0x220);
  }
  puVar4 = PTR_DAT_04bc4d98;
  puVar3 = PTR_DAT_04bc4d90;
  lVar7 = *(long *)(lVar7 + 0x578);
  if ((lVar7 != 0) && (*(int *)(lVar7 + 0x2f8) != 0)) {
    uVar11 = 0;
    puVar1 = PTR_DAT_04bc4da0 + 0x10;
    puVar2 = PTR_DAT_04bc4f00 + 0x10;
    do {
      puVar8 = (undefined8 *)0x0;
      if (((-1 < (int)uVar11) && ((int)uVar11 < (int)*(uint *)(lVar7 + 0x208))) &&
         (uVar11 < *(uint *)(lVar7 + 0x208))) {
        puVar8 = *(undefined8 **)(*(long *)(lVar7 + 0x210) + uVar11 * 8);
      }
      if (((*puVar4 & 1) == 0) && (iVar5 = __cxa_guard_acquire(puVar4), iVar5 != 0)) {
        *(undefined **)puVar3 = puVar1;
        __cxa_guard_release(puVar4);
      }
      if (((puVar8 != (undefined8 *)0x0) &&
          (uVar6 = (**(code **)*puVar8)(puVar8,puVar3), (uVar6 & 1) != 0)) &&
         (plVar9 = *(long **)puVar8[0x5e], plVar9 != (long *)0x0)) {
        local_78 = 0x14;
        uVar12 = NEON_ucvtf(*(undefined4 *)(param_1 + 0x382bc));
        local_80 = puVar2;
        (**(code **)(*plVar9 + 0x18))(plVar9,&local_80);
        (**(code **)(plVar9[3] + 0x158))(uVar12,plVar9[1]);
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < *(uint *)(lVar7 + 0x2f8));
  }
  return;
}



void FUN_0037ccc0(long param_1,undefined8 param_2)

{
  int *piVar1;
  long *plVar2;
  byte bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  undefined8 *puVar9;
  uint uVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  
  uVar10 = *(uint *)(param_1 + 0x60);
  if ((uVar10 >> 0x11 & 1) != 0) {
    lVar11 = *(long *)(param_1 + 0xa8) + 0xc;
    uVar10 = *(uint *)(*(long *)(param_1 + 0xa8) + 0x10);
    piVar1 = (int *)(lVar11 + (ulong)(*(int *)(lVar11 + (ulong)uVar10 + 4) + uVar10));
    if ((*piVar1 == 0x15) && (bVar3 = *(byte *)(piVar1 + 3), -1 < (char)bVar3)) {
      lVar11 = lVar11 + (ulong)(*(int *)(lVar11 + (ulong)uVar10 + 4 + (ulong)bVar3 * 4) + uVar10);
    }
    else {
      lVar11 = 0;
    }
    FUN_00380460(*(undefined8 *)(lVar11 + 8),param_2);
    FUN_00367b50(*(undefined8 *)(lVar11 + 8));
    uVar10 = *(uint *)(param_1 + 0x60);
  }
  if (uVar10 != 0) {
    lVar11 = *(long *)(param_1 + 0xa8) + 0xc;
    uVar10 = *(uint *)(*(long *)(param_1 + 0xa8) + 0x10);
    piVar1 = (int *)(lVar11 + (ulong)(*(int *)(lVar11 + (ulong)uVar10 + 4) + uVar10));
    if (((*piVar1 == 0x15) && (bVar3 = *(byte *)((long)piVar1 + 0xe), -1 < (char)bVar3)) &&
       (lVar11 = *(long *)(lVar11 + (ulong)(*(int *)(lVar11 + (ulong)uVar10 + 4 + (ulong)bVar3 * 4)
                                           + uVar10) + 8), lVar11 != 0)) {
      FUN_0037cf30(lVar11);
      FUN_00367b50(lVar11);
    }
  }
  puVar7 = PTR_DAT_04bc9008;
  puVar6 = PTR_DAT_04bc9000;
  puVar5 = PTR_DAT_04bc8f38;
  puVar4 = PTR_DAT_04bc8f30;
  plVar2 = *(long **)(param_1 + 0x28);
  do {
    do {
      plVar13 = plVar2;
      if (plVar13 == (long *)(param_1 + 0x20)) {
        if ((*(byte *)(param_1 + 0x5c) & 0x44) == 0) {
          return;
        }
        FUN_00367b50(*(undefined8 *)(param_1 + 0xa8));
        return;
      }
      plVar2 = (long *)plVar13[1];
      lVar11 = *plVar2;
      *(long **)(*plVar13 + 8) = plVar2;
      *plVar2 = *plVar13;
      *(long **)(lVar11 + 8) = plVar13;
      *plVar13 = lVar11;
    } while ((*(byte *)(plVar13 + 10) >> 3 & 1) != 0);
    if (((*puVar7 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar7), iVar8 != 0)) {
      if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar5), iVar8 != 0)) {
        *(undefined8 *)puVar4 = 0;
        __cxa_guard_release(puVar5);
      }
      *(undefined **)puVar6 = puVar4;
      __cxa_guard_release(puVar7);
    }
    plVar12 = plVar13 + -1;
    puVar9 = (undefined8 *)(**(code **)(*plVar12 + 0x10))(plVar12);
    if (puVar9 == (undefined8 *)puVar6) {
LAB_0037ce78:
      plVar13 = (long *)plVar13[0x1c];
      if (plVar13 == (long *)0x0) goto LAB_0037cde4;
      FUN_00367be0(plVar13,param_2);
      (**(code **)(*plVar13 + 8))(plVar13);
      plVar12 = plVar13;
    }
    else {
      do {
        puVar9 = (undefined8 *)*puVar9;
      } while (puVar9 != (undefined8 *)puVar6 && puVar9 != (undefined8 *)0x0);
      if (puVar9 != (undefined8 *)0x0) goto LAB_0037ce78;
LAB_0037cde4:
      (**(code **)(*plVar12 + 0x18))(plVar12,param_2);
      (**(code **)*plVar12)(plVar12);
    }
    FUN_00367b50(plVar12);
  } while( true );
}


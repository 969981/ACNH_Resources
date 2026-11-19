
void FUN_03ca1550(long param_1,uint param_2,uint param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  
  if (*(uint *)(*(long *)PTR_DAT_04bbdb78 + 0x20) <= param_2) {
    param_2 = 0;
  }
  plVar8 = *(long **)(*(long *)(*(long *)PTR_DAT_04bbdb78 + 0x28) + (long)(int)param_2 * 8);
  if (((*PTR_DAT_04bbdb10 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_04bbdb10), iVar3 != 0))
  {
    *(undefined **)PTR_DAT_04bbdb08 = PTR_DAT_04bbdb18 + 0x10;
    __cxa_guard_release(PTR_DAT_04bbdb10);
  }
  if ((plVar8 != (long *)0x0) &&
     (uVar4 = (**(code **)(*plVar8 + 0x10))(plVar8,PTR_DAT_04bbdb08), puVar2 = PTR_DAT_04bb26b8,
     (uVar4 & 1) != 0)) {
    uVar9 = *(undefined8 *)(param_1 + 0x28);
    uVar5 = (**(code **)(**(long **)PTR_DAT_04bb26b8 + 0x108))(*(long **)PTR_DAT_04bb26b8,plVar8);
    FUN_00365100(uVar9,uVar5);
    lVar10 = *(long *)(param_1 + 0x28);
    puVar6 = (undefined8 *)(**(code **)(**(long **)puVar2 + 0x110))(*(long **)puVar2,plVar8);
    uVar5 = puVar6[1];
    *(undefined8 *)(lVar10 + 0x50) = *puVar6;
    *(undefined8 *)(lVar10 + 0x58) = uVar5;
    uVar5 = puVar6[2];
    uVar9 = puVar6[3];
    uVar1 = puVar6[5];
    *(undefined8 *)(lVar10 + 0x70) = puVar6[4];
    *(undefined8 *)(lVar10 + 0x78) = uVar1;
    *(undefined8 *)(lVar10 + 0x60) = uVar5;
    *(undefined8 *)(lVar10 + 0x68) = uVar9;
    plVar8 = (long *)(*(long *)PTR_DAT_04bb2718 + 0x430);
    if (((*(byte *)(*(long *)PTR_DAT_04bbd758 + 0x242) ^ 0xff) & 3) != 0) {
      plVar8 = (long *)(*(long *)PTR_DAT_04bd1e18 + 0x438);
    }
    lVar7 = *(long *)(param_1 + 0x28);
    lVar10 = *plVar8;
    *(long *)(lVar7 + 200) = lVar10 + 0x120;
    *(long *)(lVar7 + 0xd0) = lVar10 + 0x170;
  }
  if (*(long *)(param_1 + 0x68) != param_1 + 0x60) {
    lVar7 = (long)*(int *)(param_1 + 0x74);
    lVar10 = *(long *)(param_1 + 0x68) - lVar7;
    do {
      (**(code **)(**(long **)(lVar10 + 0x18) + 0xa8))
                (*(long **)(lVar10 + 0x18),*(undefined8 *)(param_1 + 0x28),param_3 & 1);
      lVar10 = *(long *)(lVar10 + lVar7 + 8) - lVar7;
    } while (lVar10 != (param_1 + 0x60) - lVar7);
  }
  return;
}


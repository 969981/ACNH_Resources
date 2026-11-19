
void FUN_03a63950(long *param_1,undefined8 param_2)

{
  undefined *puVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  long *plVar12;
  
  (**(code **)(*param_1 + 0x18))();
  puVar6 = PTR_DAT_04bd1938;
  puVar5 = PTR_DAT_04bd1930;
  puVar4 = PTR_DAT_04bd18a0;
  puVar3 = PTR_DAT_04bbd8c8;
  if (param_1[0x50] != 0) {
    uVar11 = *(uint *)(param_1[0x4f] + 0x18);
    lVar9 = *(long *)(param_1[0x4f] + 0x20);
    iVar7 = (int)**(short **)PTR_DAT_04bd18a0;
    if (uVar11 <= (uint)(int)**(short **)PTR_DAT_04bd18a0) {
      iVar7 = 0;
    }
    uVar2 = *(ushort *)(lVar9 + (long)iVar7 * 4 + 2);
    if (uVar2 != 0) {
      lVar9 = 0;
      puVar1 = PTR_DAT_04bbd8c8 + 0x10;
      do {
        lVar10 = param_1[0x4f];
        iVar7 = (int)**(short **)puVar4;
        if (*(uint *)(lVar10 + 0x18) <= (uint)(int)**(short **)puVar4) {
          iVar7 = 0;
        }
        if ((uint)lVar9 < (uint)*(ushort *)(*(long *)(lVar10 + 0x20) + (long)iVar7 * 4 + 2)) {
          plVar12 = *(long **)(*(long *)(lVar10 + 0x30) +
                              (lVar9 + (ulong)*(ushort *)
                                               (*(long *)(lVar10 + 0x20) + (long)iVar7 * 4)) * 8);
        }
        else {
          plVar12 = (long *)0x0;
        }
        if (((*puVar6 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar6), iVar7 != 0)) {
          *(undefined **)puVar5 = puVar1;
          __cxa_guard_release(puVar6);
        }
        uVar8 = (**(code **)(*plVar12 + 0x48))(plVar12,puVar5);
        if ((uVar8 & 1) == 0) {
          plVar12 = (long *)0x0;
        }
        (**(code **)(*plVar12 + 0xb8))(plVar12,param_2);
        lVar9 = lVar9 + 1;
      } while ((uint)uVar2 != (uint)lVar9);
      uVar11 = *(uint *)(param_1[0x4f] + 0x18);
      lVar9 = *(long *)(param_1[0x4f] + 0x20);
    }
    puVar6 = PTR_DAT_04bd1918;
    puVar5 = PTR_DAT_04bd1910;
    puVar4 = PTR_DAT_04bd1898;
    iVar7 = (int)**(short **)PTR_DAT_04bd1898;
    if (uVar11 <= (uint)(int)**(short **)PTR_DAT_04bd1898) {
      iVar7 = 0;
    }
    uVar2 = *(ushort *)(lVar9 + (long)iVar7 * 4 + 2);
    if (uVar2 != 0) {
      lVar9 = 0;
      do {
        lVar10 = param_1[0x4f];
        iVar7 = (int)**(short **)puVar4;
        if (*(uint *)(lVar10 + 0x18) <= (uint)(int)**(short **)puVar4) {
          iVar7 = 0;
        }
        if ((uint)lVar9 < (uint)*(ushort *)(*(long *)(lVar10 + 0x20) + (long)iVar7 * 4 + 2)) {
          plVar12 = *(long **)(*(long *)(lVar10 + 0x30) +
                              (lVar9 + (ulong)*(ushort *)
                                               (*(long *)(lVar10 + 0x20) + (long)iVar7 * 4)) * 8);
        }
        else {
          plVar12 = (long *)0x0;
        }
        if (((*puVar6 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar6), iVar7 != 0)) {
          *(undefined **)puVar5 = puVar3 + 0x10;
          __cxa_guard_release(puVar6);
        }
        uVar8 = (**(code **)(*plVar12 + 0x48))(plVar12,puVar5);
        if ((uVar8 & 1) == 0) {
          plVar12 = (long *)0x0;
        }
        (**(code **)(*plVar12 + 0xb8))(plVar12,param_2);
        lVar9 = lVar9 + 1;
      } while ((uint)uVar2 != (uint)lVar9);
    }
  }
  return;
}


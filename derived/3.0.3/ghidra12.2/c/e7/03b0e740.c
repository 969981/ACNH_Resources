
undefined4
FUN_03b0e740(long param_1,int *param_2,undefined2 *param_3,long param_4,long *param_5,
            undefined4 param_6,uint param_7)

{
  uint uVar1;
  byte bVar2;
  ushort uVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  undefined2 uVar9;
  uint uVar10;
  long *plVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  ushort *puVar14;
  ulong uVar15;
  
  if (*(short *)(param_4 + 2) != 0) {
    return 1;
  }
  if (*(short *)(param_4 + 4) != 0) {
    if (*(short *)(param_4 + 4) == 1) {
      uVar3 = *(ushort *)(param_4 + 8);
      if (uVar3 == 0xffff) {
        if (param_5 == (long *)0x0) {
          *param_2 = 0;
          *param_3 = 0;
          return 1;
        }
        iVar5 = (**(code **)(*param_5 + 0x20))(param_5);
        *param_2 = iVar5;
        uVar9 = *(undefined2 *)((long)param_5 + 0x32);
      }
      else {
        uVar1 = *(uint *)(*(long *)(param_1 + 8) + 0x20);
        uVar10 = (uint)uVar3;
        if (uVar1 < uVar3 || uVar1 == uVar10) {
          uVar10 = 0;
        }
        plVar11 = *(long **)(*(long *)(*(long *)(param_1 + 8) + 0x28) + (ulong)uVar10 * 8);
        if ((*PTR_DAT_04bc0890 & 1) == 0) {
          iVar5 = __cxa_guard_acquire(PTR_DAT_04bc0890);
          puVar4 = PTR_DAT_04bc0898;
          if (iVar5 != 0) {
            if (((*PTR_DAT_04bc08a0 & 1) == 0) &&
               (iVar5 = __cxa_guard_acquire(PTR_DAT_04bc08a0), iVar5 != 0)) {
              *(undefined8 *)puVar4 = 0;
              __cxa_guard_release(PTR_DAT_04bc08a0);
            }
            *(undefined **)PTR_DAT_04bc0888 = puVar4;
            __cxa_guard_release(PTR_DAT_04bc0890);
          }
        }
        if (plVar11 == (long *)0x0) {
          return 1;
        }
        puVar6 = (undefined8 *)(**(code **)*plVar11)(plVar11);
        if (puVar6 != (undefined8 *)PTR_DAT_04bc0888) {
          do {
            puVar6 = (undefined8 *)*puVar6;
          } while (puVar6 != (undefined8 *)PTR_DAT_04bc0888 && puVar6 != (undefined8 *)0x0);
          if (puVar6 == (undefined8 *)0x0) {
            return 1;
          }
        }
        iVar5 = (**(code **)(*plVar11 + 0x20))(plVar11);
        *param_2 = iVar5;
        uVar9 = *(undefined2 *)((long)plVar11 + 0x32);
      }
      *param_3 = uVar9;
    }
    return 1;
  }
  plVar11 = *(long **)(*(long *)(param_1 + 8) + 0x30);
  if (((*PTR_DAT_04bc0890 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04bc0890), iVar5 != 0))
  {
    if (((*PTR_DAT_04bc08a0 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04bc08a0), iVar5 != 0)) {
      *(undefined8 *)PTR_DAT_04bc0898 = 0;
      __cxa_guard_release(PTR_DAT_04bc08a0);
    }
    *(undefined **)PTR_DAT_04bc0888 = PTR_DAT_04bc0898;
    __cxa_guard_release(PTR_DAT_04bc0890);
  }
  if (plVar11 == (long *)0x0) {
LAB_03b0e894:
    iVar5 = *param_2;
  }
  else {
    puVar6 = (undefined8 *)(**(code **)*plVar11)(plVar11);
    if (puVar6 != (undefined8 *)PTR_DAT_04bc0888) {
      do {
        puVar6 = (undefined8 *)*puVar6;
      } while (puVar6 != (undefined8 *)PTR_DAT_04bc0888 && puVar6 != (undefined8 *)0x0);
      if (puVar6 == (undefined8 *)0x0) goto LAB_03b0e894;
    }
    param_3 = (undefined2 *)((long)plVar11 + 0x32);
    iVar5 = (**(code **)(*plVar11 + 0x20))(plVar11);
  }
  if ((iVar5 != 0) && (1 < *(ushort *)(param_4 + 10))) {
    uVar9 = *param_3;
    uVar15 = (ulong)(*(ushort *)(param_4 + 10) >> 1);
    puVar14 = (ushort *)(param_4 + 0xc);
    if ((param_7 & 1) == 0) {
      uVar13 = 1;
      do {
        uVar12 = uVar13;
        if (0x1f < *puVar14) {
          uVar7 = FUN_00354f90(*(undefined8 *)(param_1 + 0x10),*puVar14,iVar5,uVar9,param_6,0);
          uVar12 = 0;
          if ((uVar7 & 1) == 0) {
            uVar12 = uVar13;
          }
        }
        uVar15 = uVar15 - 1;
        puVar14 = puVar14 + 1;
        uVar13 = uVar12;
      } while (uVar15 != 0);
      return uVar12;
    }
    do {
      uVar3 = *puVar14;
      if (0x1f < uVar3) {
        lVar8 = FUN_00357060(*(undefined8 *)(param_1 + 0x10),uVar3,iVar5,uVar9);
        if (lVar8 == 0) {
          uVar7 = FUN_00356230(*(undefined8 *)(param_1 + 0x10),uVar3,uVar9);
          if ((uVar7 & 1) != 0) {
            return 0;
          }
        }
        else {
          bVar2 = *(byte *)(lVar8 + 0x38);
          *(byte *)(lVar8 + 0x38) = bVar2 | 1;
          if ((bVar2 >> 1 & 1) != 0) {
            return 0;
          }
        }
      }
      uVar15 = uVar15 - 1;
      puVar14 = puVar14 + 1;
    } while (uVar15 != 0);
  }
  return 1;
}


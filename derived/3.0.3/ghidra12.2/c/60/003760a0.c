
void FUN_003760a0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ushort *puVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  
  puVar5 = PTR_DAT_04bd08d0;
  puVar4 = PTR_DAT_04bd08c8;
  puVar3 = PTR_DAT_04bd0798;
  uVar2 = *(uint *)(param_1 + 0x14) & 3;
  if (uVar2 != 0) {
    lVar11 = *(long *)(param_1 + 0x18);
    uVar13 = 0;
    do {
      puVar1 = (ushort *)(lVar11 + uVar13 * 0x10);
      if ((*puVar1 >> 8 & 1) != 0) {
        plVar12 = *(long **)(puVar1 + 4);
        puVar7 = (undefined8 *)(**(code **)(*plVar12 + 0x48))(plVar12);
        if (((*PTR_DAT_04bd0790 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_04bd0790), iVar6 != 0)) {
          if (((*PTR_DAT_04bd07a0 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(PTR_DAT_04bd07a0), iVar6 != 0)) {
            *(undefined8 *)PTR_DAT_04bd07a8 = 0;
            __cxa_guard_release(PTR_DAT_04bd07a0);
          }
          *(undefined **)puVar3 = PTR_DAT_04bd07a8;
          __cxa_guard_release(PTR_DAT_04bd0790);
        }
        if (puVar7 == (undefined8 *)0x0) {
LAB_00376178:
          puVar7 = (undefined8 *)0x0;
        }
        else {
          puVar8 = (undefined8 *)(**(code **)*puVar7)(puVar7);
          if (puVar8 != (undefined8 *)puVar3) {
            do {
              puVar8 = (undefined8 *)*puVar8;
            } while (puVar8 != (undefined8 *)puVar3 && puVar8 != (undefined8 *)0x0);
            if (puVar8 == (undefined8 *)0x0) goto LAB_00376178;
          }
        }
        puVar8 = (undefined8 *)(**(code **)(*plVar12 + 0x48))(plVar12);
        if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar4), iVar6 != 0)) {
          if (((*PTR_DAT_04bd07a0 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(PTR_DAT_04bd07a0), iVar6 != 0)) {
            *(undefined8 *)PTR_DAT_04bd07a8 = 0;
            __cxa_guard_release(PTR_DAT_04bd07a0);
          }
          *(undefined **)puVar5 = PTR_DAT_04bd07a8;
          __cxa_guard_release(puVar4);
        }
        if (puVar8 == (undefined8 *)0x0) {
LAB_003761c8:
          puVar8 = (undefined8 *)0x0;
        }
        else {
          puVar9 = (undefined8 *)(**(code **)*puVar8)(puVar8);
          if (puVar9 != (undefined8 *)puVar5) {
            do {
              puVar9 = (undefined8 *)*puVar9;
            } while (puVar9 != (undefined8 *)puVar5 && puVar9 != (undefined8 *)0x0);
            if (puVar9 == (undefined8 *)0x0) goto LAB_003761c8;
          }
        }
        uVar10 = FUN_0036b7fc(*(undefined8 *)(param_4 + 0xa0),*puVar1 >> 9 & 7);
        if (puVar7 == (undefined8 *)0x0) {
          if (puVar8 != (undefined8 *)0x0) {
            FUN_0036b6a0(uVar10,param_2,param_3,*(long *)(param_4 + 0x20),
                         *(undefined8 *)(*(long *)(param_4 + 0x20) + 0x40),puVar8[2]);
          }
        }
        else {
          FUN_0036b560(uVar10,puVar7[2]);
        }
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 != uVar2);
  }
  return;
}



void FUN_03b14080(long *param_1,undefined8 param_2)

{
  undefined *puVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  uint uVar9;
  
  uVar4 = FUN_03b17110();
  if (((((uVar4 & 1) != 0) || (uVar4 = FUN_03b17250(param_1), (uVar4 & 1) != 0)) &&
      (lVar5 = FUN_0037e610(param_1,"CaptureUseName"), lVar5 != 0)) &&
     (lVar6 = FUN_0037e610(param_1,"CaptureUseIndex"), lVar6 != 0)) {
    plVar7 = (long *)FUN_03b14230(lVar5 + (ulong)*(uint *)(lVar5 + 4),param_2,0);
    if (((*PTR_DAT_04bd1bd0 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bd1bd0), puVar1 = PTR_DAT_04bc8f30, iVar3 != 0)) {
      if (((*PTR_DAT_04bc8f38 & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(PTR_DAT_04bc8f38), iVar3 != 0)) {
        *(undefined8 *)puVar1 = 0;
        __cxa_guard_release(PTR_DAT_04bc8f38);
      }
      *(undefined **)PTR_DAT_04bd1bc8 = puVar1;
      __cxa_guard_release(PTR_DAT_04bd1bd0);
    }
    if (plVar7 != (long *)0x0) {
      puVar8 = (undefined8 *)(**(code **)(*plVar7 + 0x10))(plVar7);
      if (puVar8 != (undefined8 *)PTR_DAT_04bd1bc8) {
        do {
          puVar8 = (undefined8 *)*puVar8;
        } while (puVar8 != (undefined8 *)PTR_DAT_04bd1bc8 && puVar8 != (undefined8 *)0x0);
        if (puVar8 == (undefined8 *)0x0) {
          return;
        }
      }
      iVar3 = *(int *)(lVar6 + (ulong)*(uint *)(lVar6 + 4));
      bVar2 = (**(code **)(*param_1 + 0x50))(param_1);
      if (bVar2 != 0) {
        uVar9 = 0;
        do {
          lVar5 = (**(code **)(*param_1 + 0x58))(param_1,uVar9);
          if (iVar3 < (int)(*(uint *)(lVar5 + 0x14) & 3)) {
            *(long **)(*(long *)(lVar5 + 0x18) + (long)iVar3 * 0x10 + 8) = plVar7 + 0x1d;
          }
          uVar9 = uVar9 + 1;
        } while (bVar2 != uVar9);
      }
    }
  }
  return;
}


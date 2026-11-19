
void FUN_03b145f0(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  
  lVar4 = FUN_03b17390();
  lVar5 = FUN_03b174f0(param_1);
  if (((lVar4 != 0 || lVar5 != 0) &&
      (lVar6 = FUN_0037e610(param_1,"DynamicCaptureUseName"), lVar6 != 0)) &&
     (lVar7 = FUN_0037e610(param_1,"DynamicCaptureUseIndex"), lVar7 != 0)) {
    plVar8 = (long *)FUN_03b14230(lVar6 + (ulong)*(uint *)(lVar6 + 4),param_2,0);
    if (((*PTR_DAT_04bd1be0 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bd1be0), puVar2 = PTR_DAT_04bc8f30, iVar3 != 0)) {
      if (((*PTR_DAT_04bc8f38 & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(PTR_DAT_04bc8f38), iVar3 != 0)) {
        *(undefined8 *)puVar2 = 0;
        __cxa_guard_release(PTR_DAT_04bc8f38);
      }
      *(undefined **)PTR_DAT_04bd1bd8 = puVar2;
      __cxa_guard_release(PTR_DAT_04bd1be0);
    }
    if (plVar8 != (long *)0x0) {
      puVar9 = (undefined8 *)(**(code **)(*plVar8 + 0x10))(plVar8);
      if (puVar9 != (undefined8 *)PTR_DAT_04bd1bd8) {
        do {
          puVar9 = (undefined8 *)*puVar9;
        } while (puVar9 != (undefined8 *)PTR_DAT_04bd1bd8 && puVar9 != (undefined8 *)0x0);
        if (puVar9 == (undefined8 *)0x0) {
          return;
        }
      }
      if (lVar4 == 0) {
        if (lVar5 != 0) {
          uVar1 = *(undefined4 *)(lVar7 + (ulong)*(uint *)(lVar7 + 4));
          *(long **)(lVar5 + 0x130) = plVar8;
          *(char *)(lVar5 + 0x138) = (char)uVar1;
        }
      }
      else {
        uVar1 = *(undefined4 *)(lVar7 + (ulong)*(uint *)(lVar7 + 4));
        *(long **)(lVar4 + 0x100) = plVar8;
        *(char *)(lVar4 + 0x108) = (char)uVar1;
      }
    }
  }
  return;
}


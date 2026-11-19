
void FUN_03834650(long param_1,long *param_2,long param_3,undefined4 param_4)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  
  puVar4 = PTR_DAT_04bcb358;
  puVar3 = PTR_DAT_04bcb350;
  if (*(long *)(param_3 + 0x50) == 0) {
    return;
  }
  if (*(int *)(*(long *)(param_3 + 0x50) + 0x80) == 0) {
    return;
  }
  uVar11 = (ulong)*(uint *)(param_1 + 0x18);
  if ((int)*(uint *)(param_1 + 0x18) < 1) {
    iVar7 = 0;
  }
  else {
    uVar13 = 0;
    iVar7 = 0;
    puVar1 = PTR_DAT_04bcadc0 + 0x10;
    do {
      if (uVar13 < (uVar11 & 0xffffffff)) {
        puVar8 = *(undefined8 **)(*(long *)(param_1 + 0x20) + uVar13 * 8);
      }
      else {
        puVar8 = (undefined8 *)0x0;
      }
      if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar4), iVar6 != 0)) {
        *(undefined **)puVar3 = puVar1;
        __cxa_guard_release(puVar4);
      }
      if (puVar8 != (undefined8 *)0x0) {
        uVar5 = (**(code **)*puVar8)(puVar8,puVar3);
        iVar7 = iVar7 + (uVar5 & 1);
      }
      uVar11 = (ulong)*(int *)(param_1 + 0x18);
      uVar13 = uVar13 + 1;
    } while ((long)uVar13 < (long)uVar11);
  }
  lVar12 = *(long *)PTR_DAT_04bb2698;
  if (lVar12 == 0) {
    plVar10 = malloc(0x30);
  }
  else {
    if (param_2 == (long *)0x0) {
      lVar9 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      puVar8 = (undefined8 *)(lVar12 + 8);
      if (lVar9 != 0) {
        puVar8 = (undefined8 *)(lVar9 + 0xa8);
      }
      param_2 = (long *)*puVar8;
      plVar10 = (long *)0x0;
      if (param_2 == (long *)0x0) goto LAB_038347a8;
    }
    plVar10 = (long *)(**(code **)(*param_2 + 0x30))(param_2,0x30,8);
  }
LAB_038347a8:
  uVar2 = *(undefined4 *)(param_1 + 0x18);
  lVar12 = *(long *)(PTR_PTR_04bcb370 + (long)iVar7 * 8);
  *(undefined4 *)(plVar10 + 1) = 0;
  *(undefined4 *)((long)plVar10 + 0xc) = uVar2;
  puVar3 = PTR_DAT_04bcb378;
  *(undefined1 *)(plVar10 + 5) = 0;
  plVar10[2] = lVar12;
  plVar10[3] = param_3;
  *plVar10 = (long)(puVar3 + 0x10);
  *(undefined4 *)((long)plVar10 + 0x24) = 0xffffffff;
  if (param_3 != 0) {
    *(undefined4 *)(plVar10 + 4) = param_4;
    *(undefined4 *)(plVar10 + 1) = *(undefined4 *)(*(long *)(param_3 + 0x50) + 0x80);
    if (0 < *(int *)(param_3 + 0x30)) {
      puVar8 = *(undefined8 **)**(undefined8 **)(param_3 + 0x38);
      if (((*PTR_DAT_04bb3490 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb3490), iVar7 != 0)) {
        *(undefined **)PTR_DAT_04bb3488 = PTR_DAT_04bb3498 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb3490);
      }
      if (((puVar8 != (undefined8 *)0x0) &&
          (uVar11 = (**(code **)*puVar8)(puVar8,PTR_DAT_04bb3488), (uVar11 & 1) != 0)) &&
         (puVar8[0x2f] != 0)) {
        *(bool *)(plVar10 + 5) = 0 < *(int *)(puVar8[0x2f] + 0x10);
      }
    }
  }
  if (*(int *)(param_1 + 0x18) < *(int *)(param_1 + 0x1c)) {
    *(long **)(*(long *)(param_1 + 0x20) + (long)*(int *)(param_1 + 0x18) * 8) = plVar10;
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  }
  return;
}


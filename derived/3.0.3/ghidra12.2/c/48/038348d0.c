
void FUN_038348d0(long param_1,long *param_2,long param_3,undefined4 param_4)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  int iVar11;
  ulong uVar12;
  
  puVar3 = PTR_DAT_04bcb328;
  puVar1 = PTR_DAT_04bcb320;
  lVar9 = *(long *)(param_3 + 0x50);
  if (lVar9 == 0) {
    return;
  }
  if (*(short *)(lVar9 + 0xa6) == *(short *)(lVar9 + 0xa4)) {
    return;
  }
  uVar10 = (ulong)*(uint *)(param_1 + 0x18);
  if ((int)*(uint *)(param_1 + 0x18) < 1) {
    iVar11 = 0;
  }
  else {
    uVar12 = 0;
    iVar11 = 0;
    do {
      if (uVar12 < (uVar10 & 0xffffffff)) {
        puVar6 = *(undefined8 **)(*(long *)(param_1 + 0x20) + uVar12 * 8);
      }
      else {
        puVar6 = (undefined8 *)0x0;
      }
      if (((*puVar3 & 1) == 0) && (iVar5 = __cxa_guard_acquire(puVar3), iVar5 != 0)) {
        *(undefined ***)puVar1 = &PTR_LAB_04b5d490;
        __cxa_guard_release(puVar3);
      }
      if (puVar6 != (undefined8 *)0x0) {
        uVar4 = (**(code **)*puVar6)(puVar6,puVar1);
        iVar11 = iVar11 + (uVar4 & 1);
      }
      uVar10 = (ulong)*(int *)(param_1 + 0x18);
      uVar12 = uVar12 + 1;
    } while ((long)uVar12 < (long)uVar10);
  }
  lVar9 = *(long *)PTR_DAT_04bb2698;
  if (lVar9 == 0) {
    plVar8 = malloc(0x30);
  }
  else {
    if (param_2 == (long *)0x0) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      puVar6 = (undefined8 *)(lVar9 + 8);
      if (lVar7 != 0) {
        puVar6 = (undefined8 *)(lVar7 + 0xa8);
      }
      param_2 = (long *)*puVar6;
      if (param_2 == (long *)0x0) {
        plVar8 = (long *)0x0;
        goto LAB_03834a30;
      }
    }
    plVar8 = (long *)(**(code **)(*param_2 + 0x30))(param_2,0x30,8);
  }
LAB_03834a30:
  uVar2 = *(undefined4 *)(param_1 + 0x18);
  lVar9 = *(long *)(PTR_PTR_04bcb380 + (long)iVar11 * 8);
  *(undefined4 *)(plVar8 + 1) = 0;
  *(undefined4 *)((long)plVar8 + 0xc) = uVar2;
  puVar1 = PTR_DAT_04bcb388 + 0x10;
  plVar8[2] = lVar9;
  plVar8[3] = param_3;
  *plVar8 = (long)puVar1;
  *(undefined8 *)((long)plVar8 + 0x24) = 0x3ffffffff;
  if (param_3 != 0) {
    *(undefined4 *)(plVar8 + 4) = param_4;
    *(uint *)(plVar8 + 1) =
         (uint)*(ushort *)(*(long *)(param_3 + 0x50) + 0xa6) -
         (uint)*(ushort *)(*(long *)(param_3 + 0x50) + 0xa4);
  }
  *plVar8 = (long)&PTR_LAB_04b5d440;
  if (*(int *)(param_1 + 0x18) < *(int *)(param_1 + 0x1c)) {
    *(long **)(*(long *)(param_1 + 0x20) + (long)*(int *)(param_1 + 0x18) * 8) = plVar8;
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  }
  return;
}


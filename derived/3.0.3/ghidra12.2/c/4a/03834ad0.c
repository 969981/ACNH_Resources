
void FUN_03834ad0(long param_1,long *param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  
  puVar3 = PTR_DAT_04bcb348;
  puVar2 = PTR_DAT_04bcb340;
  uVar4 = *(uint *)(param_1 + 0x18);
  uVar12 = (ulong)uVar4;
  if ((int)uVar4 < 1) {
    iVar10 = 0;
  }
  else {
    uVar11 = 0;
    iVar10 = 0;
    puVar1 = PTR_DAT_04bcadc0 + 0x10;
    do {
      if (uVar11 < (uVar12 & 0xffffffff)) {
        puVar6 = *(undefined8 **)(*(long *)(param_1 + 0x20) + uVar11 * 8);
      }
      else {
        puVar6 = (undefined8 *)0x0;
      }
      if ((*puVar3 & 1) == 0) {
        iVar5 = __cxa_guard_acquire(puVar3);
        if (iVar5 != 0) {
          *(undefined **)puVar2 = puVar1;
          __cxa_guard_release(puVar3);
        }
      }
      if (puVar6 != (undefined8 *)0x0) {
        uVar4 = (**(code **)*puVar6)(puVar6,puVar2);
        iVar10 = iVar10 + (uVar4 & 1);
      }
      uVar4 = *(uint *)(param_1 + 0x18);
      uVar12 = (ulong)(int)uVar4;
      uVar11 = uVar11 + 1;
    } while ((long)uVar11 < (long)uVar12);
  }
  lVar9 = *(long *)PTR_DAT_04bb2698;
  if (lVar9 == 0) {
    plVar8 = malloc(0x28);
  }
  else {
    if (param_2 == (long *)0x0) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      param_2 = (long *)(lVar9 + 8);
      if (lVar7 != 0) {
        param_2 = (long *)(lVar7 + 0xa8);
      }
      param_2 = (long *)*param_2;
    }
    plVar8 = (long *)(**(code **)(*param_2 + 0x30))(param_2,0x28,8);
    uVar4 = *(uint *)(param_1 + 0x18);
  }
  lVar9 = *(long *)(PTR_PTR_04bcb360 + (long)iVar10 * 8);
  *(undefined4 *)(plVar8 + 1) = 0;
  *(uint *)((long)plVar8 + 0xc) = uVar4;
  puVar2 = PTR_DAT_04bcb368;
  plVar8[2] = lVar9;
  plVar8[3] = param_3;
  *plVar8 = (long)(puVar2 + 0x10);
  *(undefined4 *)(plVar8 + 4) = 0xffffffff;
  if (param_3 != 0) {
    *(undefined4 *)(plVar8 + 1) = *(undefined4 *)(param_3 + 0x1c);
  }
  if (*(int *)(param_1 + 0x18) < *(int *)(param_1 + 0x1c)) {
    *(long **)(*(long *)(param_1 + 0x20) + (long)*(int *)(param_1 + 0x18) * 8) = plVar8;
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  }
  return;
}


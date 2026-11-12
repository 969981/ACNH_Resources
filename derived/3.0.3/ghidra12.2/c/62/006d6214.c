
int FUN_006d6214(long param_1,long param_2,undefined8 param_3,undefined8 param_4,byte param_5)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  int *piVar8;
  int iVar9;
  undefined8 uVar10;
  int *piVar11;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x330));
  uVar1 = *(int *)(param_1 + 0x128) + 1U & 1;
  uVar2 = -uVar1;
  if (-2 < *(int *)(param_1 + 0x128)) {
    uVar2 = uVar1;
  }
  if (uVar2 < *(uint *)(param_1 + 0x108)) {
    piVar8 = *(int **)(*(long *)(param_1 + 0x110) + (ulong)uVar2 * 8);
  }
  else {
    piVar8 = (int *)0x0;
  }
  if (piVar8[1] <= *piVar8) {
    iVar9 = 0;
    goto LAB_006d6380;
  }
  piVar11 = *(int **)(piVar8 + 4);
  if (piVar11 != (int *)0x0) {
    *(undefined8 *)(piVar8 + 4) = *(undefined8 *)piVar11;
  }
  *piVar11 = 0;
  piVar11[6] = 0;
  piVar11[7] = 0;
  *(undefined1 *)(piVar11 + 8) = 0;
  piVar11[2] = 0;
  piVar11[3] = 0;
  piVar11[4] = 0;
  piVar11[5] = 0;
  if (*piVar8 < piVar8[1]) {
    *(int **)(*(long *)(piVar8 + 2) + (long)*piVar8 * 8) = piVar11;
    *piVar8 = *piVar8 + 1;
  }
  lVar4 = DAT_05ae7600;
  if (DAT_05ae7600 == 0) {
    puVar7 = malloc(0x20);
  }
  else {
    plVar5 = *(long **)(param_1 + 0x390);
    if (plVar5 == (long *)0x0) {
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar5 = (long *)(lVar4 + 8);
      if (lVar6 != 0) {
        plVar5 = (long *)(lVar6 + 0xa8);
      }
      plVar5 = (long *)*plVar5;
      puVar7 = (undefined8 *)0x0;
      if (plVar5 == (long *)0x0) goto LAB_006d6338;
    }
    puVar7 = (undefined8 *)(**(code **)(*plVar5 + 0x30))(plVar5,0x20,8);
  }
LAB_006d6338:
  puVar7[2] = 0;
  puVar7[3] = 0;
  *puVar7 = &PTR_LAB_048faad0;
  puVar7[1] = 0;
  uVar10 = *(undefined8 *)(param_2 + 0x18);
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  puVar7[1] = *(undefined8 *)(param_2 + 8);
  puVar7[2] = uVar3;
  puVar7[3] = uVar10;
  *(undefined8 **)(piVar11 + 2) = puVar7;
  *(undefined8 *)(piVar11 + 4) = param_4;
  iVar9 = 1;
  if (*(uint *)(param_1 + 0x398) >> 4 < 0x271) {
    iVar9 = *(uint *)(param_1 + 0x398) + 1;
  }
  *(int *)(param_1 + 0x398) = iVar9;
  *piVar11 = iVar9;
  *(undefined8 *)(piVar11 + 6) = param_3;
  *(byte *)(piVar11 + 8) = param_5 & 1;
LAB_006d6380:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x330));
  return iVar9;
}


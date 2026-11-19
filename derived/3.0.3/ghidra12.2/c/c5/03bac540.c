
void FUN_03bac540(char *param_1,long *param_2)

{
  undefined8 *puVar1;
  char cVar2;
  uint uVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  void *pvVar8;
  long lVar9;
  size_t __size;
  
  puVar4 = PTR_DAT_04bd1e70;
  if (*param_1 != '\0') {
    return;
  }
  if (DAT_05aebc00 == '\0') {
    iVar5 = FUN_003cd9a4();
LAB_03bac5b0:
    if (iVar5 != 1) {
      return;
    }
  }
  else {
    cVar2 = *(char *)(*(long *)(*(long *)PTR_DAT_04bd1e70 + 0x178) + 0x148);
    lVar9 = *(long *)(*(long *)(*(long *)PTR_DAT_04bd1e70 + 0x178) + 0x140);
    iVar5 = FUN_003cd9a4();
    if (cVar2 == '\0' || lVar9 == 0) goto LAB_03bac5b0;
  }
  if (DAT_05aebc00 == '\0') {
    iVar5 = FUN_003cd978();
    if (DAT_05aebc00 != '\0') goto LAB_03bac5dc;
    iVar6 = FUN_003cd990();
  }
  else {
    iVar5 = *(int *)(*(long *)puVar4 + 0x54);
LAB_03bac5dc:
    iVar6 = *(int *)(*(long *)puVar4 + 0x140);
  }
  uVar3 = iVar6 * iVar5;
  *(long *)(param_1 + 0x10) = (long)(int)uVar3;
  __size = -(ulong)(uVar3 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar3 << 1;
  if ((int)uVar3 < 0) {
    __size = 0xffffffffffffffff;
  }
  lVar9 = *(long *)PTR_DAT_04bb2698;
  if (lVar9 == 0) {
    pvVar8 = malloc(__size);
  }
  else {
    if (param_2 == (long *)0x0) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      puVar1 = (undefined8 *)(lVar9 + 8);
      if (lVar7 != 0) {
        puVar1 = (undefined8 *)(lVar7 + 0xa8);
      }
      param_2 = (long *)*puVar1;
      if (param_2 == (long *)0x0) {
        pvVar8 = (void *)0x0;
        goto LAB_03bac670;
      }
    }
    pvVar8 = (void *)(**(code **)(*param_2 + 0x30))(param_2,__size,8);
  }
LAB_03bac670:
  *(void **)(param_1 + 8) = pvVar8;
  *param_1 = '\x01';
  return;
}


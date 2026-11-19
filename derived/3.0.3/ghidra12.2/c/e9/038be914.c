
long FUN_038be914(long param_1,int *param_2,long param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  code *pcVar8;
  long lVar9;
  long lVar10;
  long local_78;
  long lStack_70;
  undefined8 local_68;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x20));
  iVar1 = *param_2;
  iVar2 = param_2[1];
  pcVar8 = *(code **)(param_2 + 2);
  iVar3 = param_2[0x2b];
  lVar9 = *(long *)(param_3 + (long)*(int *)(param_3 + 0x24) * 8);
  if (lVar9 == 0) {
    lVar10 = 1;
  }
  else {
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    lVar10 = *(long *)(lVar4 + 0xa8);
    *(long *)(lVar4 + 0xa8) = lVar9;
  }
  local_68 = *(undefined8 *)(param_2 + 0x20);
  local_78 = param_3;
  lStack_70 = param_1;
  if (iVar1 == 2) {
    lVar9 = (*pcVar8)(&local_78);
  }
  else {
    lVar9 = 0;
  }
  if (lVar10 != 1) {
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    *(long *)(lVar4 + 0xa8) = lVar10;
  }
  *(int *)(lVar9 + 0xc0) = iVar1;
  *(int *)(lVar9 + 0xc4) = iVar2;
  *(code **)(lVar9 + 200) = pcVar8;
  *(int *)(lVar9 + 0xbc) = iVar3;
  lVar10 = *(long *)(param_2 + 0x1e);
  if (lVar10 == 0) goto LAB_038bea94;
  plVar5 = (long *)(lVar9 + 0x20);
  lVar4 = *plVar5;
  if ((lVar4 == 0) || (*(long **)(lVar4 + 8) != plVar5)) {
    if (*(long *)(lVar9 + 0x38) != 0) {
      *(undefined8 *)(*(long *)(lVar9 + 0x38) + 0x10) = *(undefined8 *)(lVar9 + 0x30);
    }
    lVar4 = *(long *)(lVar9 + 0x30);
    if (lVar4 != 0) goto LAB_038bea44;
    if (*plVar5 != 0) {
      *(undefined8 *)(*(long *)(*plVar5 + 8) + 0x18) = *(undefined8 *)(lVar9 + 0x38);
    }
  }
  else {
    *(undefined8 *)(lVar4 + 8) = *(undefined8 *)(lVar9 + 0x30);
    lVar4 = *(long *)(lVar9 + 0x30);
    if (lVar4 != 0) {
LAB_038bea44:
      *(undefined8 *)(lVar4 + 0x18) = *(undefined8 *)(lVar9 + 0x38);
      *(undefined8 *)(lVar9 + 0x30) = 0;
    }
  }
  puVar6 = (undefined8 *)(lVar9 + 0x38);
  *puVar6 = 0;
  *(undefined8 *)(lVar9 + 0x20) = 0;
  if (*(long *)(lVar10 + 0x28) == 0) {
    *(long **)(lVar10 + 0x28) = plVar5;
    *plVar5 = lVar10 + 0x20;
  }
  else {
    plVar7 = *(long **)(*(long *)(lVar10 + 0x28) + 0x18);
    plVar7[2] = (long)plVar5;
    *puVar6 = plVar7;
    *plVar5 = *plVar7;
    puVar6 = (undefined8 *)(*(long *)(lVar10 + 0x28) + 0x18);
  }
  *puVar6 = plVar5;
LAB_038bea94:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x20));
  return lVar9;
}


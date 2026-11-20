
void FUN_03ea5088(long *param_1,long param_2,undefined1 param_3,undefined1 param_4)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  void *pvVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined1 local_50;
  undefined1 local_4f;
  undefined8 local_48;
  
  lVar6 = DAT_05ae7600;
  local_48 = 0;
  lVar8 = *(long *)(param_2 + 0x18);
  lVar9 = *(long *)(param_1[1] + 0x18);
  local_50 = param_3;
  local_4f = param_4;
  if (DAT_05ae7600 == 0) {
    pvVar4 = malloc(0x98);
  }
  else {
    lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    plVar3 = (long *)(lVar6 + 8);
    if (lVar2 != 0) {
      plVar3 = (long *)(lVar2 + 0xa8);
    }
    plVar3 = (long *)*plVar3;
    if (plVar3 == (long *)0x0) {
      pvVar4 = (void *)0x0;
    }
    else {
      pvVar4 = (void *)(**(code **)(*plVar3 + 0x30))(plVar3,0x98,8);
    }
  }
  lVar6 = *param_1;
  if (*(int *)(lVar6 + 0x80) == 0) {
    iVar5 = 0;
  }
  else {
    lVar2 = *(long *)(lVar6 + 0x70);
    if (*(int *)(lVar6 + 0x80) < 1) {
      lVar2 = 0;
    }
    lVar1 = 0;
    if (lVar2 != 0) {
      lVar1 = lVar2 - *(int *)(lVar6 + 0x84);
    }
    iVar5 = *(int *)(lVar1 + 0x18) + 1;
  }
  FUN_03ea55f0(pvVar4,iVar5,lVar6,param_2,lVar8 != lVar9,&local_50);
  lVar6 = *param_1;
  plVar7 = (long *)(lVar6 + 0x70);
  lVar8 = *plVar7;
  plVar3 = (long *)((long)*(int *)(lVar6 + 0x84) + (long)pvVar4);
  *plVar7 = (long)plVar3;
  *plVar3 = lVar8;
  plVar3[1] = (long)plVar7;
  if (lVar8 != 0) {
    *(long **)(lVar8 + 8) = plVar3;
  }
  *(int *)(lVar6 + 0x80) = *(int *)(lVar6 + 0x80) + 1;
  plVar3 = (long *)(param_2 + 0x48);
  lVar8 = *plVar3;
  iVar5 = *(int *)(param_2 + 0x5c);
  lVar6 = (long)pvVar4 + (long)iVar5 + 0x78;
  *plVar3 = lVar6;
  *(long *)((long)pvVar4 + (long)iVar5 + 0x78) = lVar8;
  *(long **)((long)pvVar4 + (long)iVar5 + 0x80) = plVar3;
  if (lVar8 != 0) {
    *(long *)(lVar8 + 8) = lVar6;
  }
  *(int *)(param_2 + 0x58) = *(int *)(param_2 + 0x58) + 1;
  return;
}


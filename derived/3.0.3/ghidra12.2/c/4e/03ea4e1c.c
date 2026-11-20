
void * FUN_03ea4e1c(long *param_1,undefined8 param_2,ulong param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  void *pvVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  undefined **local_60;
  ulong uStack_58;
  
  lVar7 = *(long *)PTR_DAT_04bb2698;
  if (lVar7 == 0) {
    pvVar4 = malloc(0x80);
  }
  else {
    lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    plVar3 = (long *)(lVar7 + 8);
    if (lVar2 != 0) {
      plVar3 = (long *)(lVar2 + 0xa8);
    }
    plVar3 = (long *)*plVar3;
    if (plVar3 == (long *)0x0) {
      pvVar4 = (void *)0x0;
    }
    else {
      pvVar4 = (void *)(**(code **)(*plVar3 + 0x30))(plVar3,0x80,8);
    }
  }
  lVar7 = *param_1;
  if (*(int *)(lVar7 + 0x98) == 0) {
    iVar5 = 0;
  }
  else {
    lVar2 = *(long *)(lVar7 + 0x88);
    if (*(int *)(lVar7 + 0x98) < 1) {
      lVar2 = 0;
    }
    lVar1 = 0;
    if (lVar2 != 0) {
      lVar1 = lVar2 - *(int *)(lVar7 + 0x9c);
    }
    iVar5 = *(int *)(lVar1 + 0x18) + 1;
  }
  uStack_58 = param_3 & 0xffffffff | param_4 << 0x20;
  local_60 = &PTR_FUN_04ba4130;
  FUN_03ea8da4(pvVar4,iVar5,param_2,&local_60);
  lVar7 = *param_1;
  plVar6 = (long *)(lVar7 + 0x88);
  lVar2 = *plVar6;
  plVar3 = (long *)((long)*(int *)(lVar7 + 0x9c) + (long)pvVar4);
  *plVar6 = (long)plVar3;
  *plVar3 = lVar2;
  plVar3[1] = (long)plVar6;
  if (lVar2 != 0) {
    *(long **)(lVar2 + 8) = plVar3;
  }
  *(int *)(lVar7 + 0x98) = *(int *)(lVar7 + 0x98) + 1;
  return pvVar4;
}


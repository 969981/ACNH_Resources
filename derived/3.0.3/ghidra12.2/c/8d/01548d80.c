
/* WARNING: Removing unreachable block (ram,0x01548e58) */
/* WARNING: Removing unreachable block (ram,0x01548eec) */

void FUN_01548d80(long param_1,long *param_2)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  void *pvVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 local_60;
  undefined8 *puStack_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined2 local_48;
  undefined1 local_46;
  
  if (((DAT_05216410 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_05216410), iVar2 != 0)) {
    DAT_05216408 = DAT_05215ad8;
    DAT_0521640c = DAT_05215adc;
    DAT_05216400 = &DAT_048f9750;
    __cxa_guard_release(&DAT_05216410);
  }
  puVar1 = PTR_DAT_04bb2698;
  local_60 = 0;
  puStack_58 = &DAT_048f9750;
  local_46 = 0;
  local_50 = DAT_05216408;
  uStack_4c = DAT_0521640c;
  local_48 = 0x100;
  lVar8 = *(long *)PTR_DAT_04bb2698;
  if (lVar8 == 0) {
    pvVar5 = malloc(0xc148);
  }
  else {
    plVar4 = param_2;
    if (param_2 == (long *)0x0) {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar4 = (long *)(lVar8 + 8);
      if (lVar3 != 0) {
        plVar4 = (long *)(lVar3 + 0xa8);
      }
      plVar4 = (long *)*plVar4;
    }
    pvVar5 = (void *)(**(code **)(*plVar4 + 0x30))(plVar4,0xc148,8);
  }
  FUN_012c7220(pvVar5,&local_60);
  local_46 = 0;
  *(undefined8 *)(param_1 + 8) = pvVar5;
  lVar8 = *(long *)puVar1;
  local_60 = 0;
  puStack_58 = &DAT_048f9750;
  local_50 = DAT_05216408;
  uStack_4c = DAT_0521640c;
  local_48 = 0x100;
  if (lVar8 == 0) {
    pvVar5 = malloc(0xc148);
  }
  else {
    if (param_2 == (long *)0x0) {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      param_2 = (long *)(lVar8 + 8);
      if (lVar3 != 0) {
        param_2 = (long *)(lVar3 + 0xa8);
      }
      param_2 = (long *)*param_2;
    }
    pvVar5 = (void *)(**(code **)(*param_2 + 0x30))(param_2,0xc148,8);
  }
  FUN_012c7220(pvVar5,&local_60);
  *(void **)(param_1 + 0x10) = pvVar5;
  uVar6 = 2;
  while( true ) {
    uVar7 = (ulong)uVar6;
    if (7 < uVar6) {
      uVar7 = 0;
    }
    ((undefined8 *)(param_1 + 8))[uVar7] = 0;
    if (6 < uVar6) break;
    uVar6 = uVar6 + 1;
  }
  return;
}


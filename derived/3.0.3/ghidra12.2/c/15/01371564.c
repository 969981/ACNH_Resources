
void FUN_01371564(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  
  FUN_01369be0();
  puVar1 = PTR_DAT_04bb2698;
  *(undefined1 *)(param_1 + 0xd0) = 0;
  puVar2 = PTR_DAT_04bb3350;
  lVar7 = *(long *)puVar1;
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
  lVar6 = *(long *)puVar1;
  if (lVar6 == 0) {
    plVar5 = malloc(0x20);
  }
  else {
    plVar4 = (long *)(lVar7 + 8);
    if (lVar3 != 0) {
      plVar4 = (long *)(lVar3 + 0xa8);
    }
    plVar4 = (long *)*plVar4;
    if (plVar4 == (long *)0x0) {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
      plVar4 = (long *)(lVar6 + 8);
      if (lVar3 != 0) {
        plVar4 = (long *)(lVar3 + 0xa8);
      }
      plVar4 = (long *)*plVar4;
      plVar5 = (long *)0x0;
      if (plVar4 == (long *)0x0) goto LAB_01371604;
    }
    plVar5 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,0x20,8);
  }
LAB_01371604:
  puVar1 = PTR_DAT_04bdf1d8 + 0x10;
  plVar5[2] = 0;
  plVar5[3] = 0;
  *plVar5 = (long)puVar1;
  plVar5[1] = 0;
  *(long **)(param_1 + 0x1d0) = plVar5;
  *(undefined4 *)(param_1 + 0x1dc) = 0;
  return;
}


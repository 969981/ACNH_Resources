
void FUN_01d86538(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  undefined *local_4058;
  char *pcStack_4050;
  LocationName aLStack_54 [36];
  
  local_4058 = PTR_DAT_04bb2020 + 0x10;
  pcStack_4050 = "NetContentsService";
  lVar6 = *(long *)PTR_DAT_04bb2698;
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
  puVar1 = (undefined8 *)(lVar6 + 8);
  if (lVar4 != 0) {
    puVar1 = (undefined8 *)(lVar4 + 0xa8);
  }
  plVar7 = (long *)*puVar1;
  if (plVar7 == (long *)0x0) {
    plVar5 = (long *)0x0;
  }
  else {
    plVar5 = (long *)(**(code **)(*plVar7 + 0x30))(plVar7,0xcf48,8);
    if (plVar5 != (long *)0x0) {
      FUN_038ca450(plVar5,&local_4058,plVar7,plVar5,0xcf48,1,0);
      puVar2 = PTR_DAT_04bd0d80;
      *(undefined4 *)((long)plVar5 + 0xd4) = 0xb0;
      plVar5[0x1f] = 0;
      plVar5[0x1b] = 0;
      plVar5[0x1c] = 0;
      plVar5[0x1d] = 0;
      plVar5[0x1e] = 0;
      *plVar5 = (long)(puVar2 + 0x10);
      FUN_038ccc00(plVar5,8,1,plVar7);
    }
  }
  *(long **)(param_1 + 8) = plVar5;
  if (*(char *)(param_1 + 0x28) == '\0') {
    nn::time::GetDeviceLocationName(aLStack_54);
    iVar3 = nn::time::LoadTimeZoneRule((TimeZoneRule *)&local_4058,aLStack_54);
    if (iVar3 == 0) {
      memcpy((void *)(param_1 + 0x30),&local_4058,0x4000);
      *(undefined1 *)(param_1 + 0x28) = 1;
    }
  }
  return;
}


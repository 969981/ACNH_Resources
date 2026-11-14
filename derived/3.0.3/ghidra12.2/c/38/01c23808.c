
void FUN_01c23808(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  void *pvVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  undefined *local_180;
  char *pcStack_178;
  undefined *local_170;
  char *pcStack_168;
  undefined *local_160;
  undefined8 *puStack_158;
  undefined4 local_150;
  undefined *local_148;
  undefined1 *puStack_140;
  undefined4 local_138;
  undefined1 local_134 [255];
  undefined1 local_35;
  
  lVar7 = *(long *)PTR_DAT_04bb2698;
  if (lVar7 == 0) {
    pvVar3 = malloc(0x3ab40);
  }
  else {
    lVar2 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    puVar1 = (undefined8 *)(lVar7 + 8);
    if (lVar2 != 0) {
      puVar1 = (undefined8 *)(lVar2 + 0xa8);
    }
    pvVar3 = (void *)(**(code **)(*(long *)*puVar1 + 0x30))((long *)*puVar1,0x3ab40,8);
  }
  local_150 = 0;
  local_180 = PTR_DAT_04bb2020 + 0x10;
  pcStack_178 = "StampRackData";
  pcStack_168 = "StampRackData";
  puStack_158 = &DAT_0407ebb1;
  local_170 = local_180;
  local_160 = local_180;
  FUN_01c23950(pvVar3,&local_180,0,"MuseumStampRackItem/MuseumStampRackItemParam",
               "MuseumStampRackItemParam");
  *(void **)(param_1 + 8) = pvVar3;
  local_35 = 0;
  local_138 = 0x100;
  local_134[0] = 0;
  plVar6 = (long *)((long)pvVar3 + 0x20);
  uVar5 = *(undefined8 *)(*(long *)PTR_DAT_04bb2118 + 0x540);
  puStack_140 = local_134;
  local_148 = PTR_DAT_04bb21f8 + 0x10;
  uVar4 = (**(code **)(*plVar6 + 0xf0))(plVar6,&local_148,1);
  if ((uVar4 & 1) != 0) {
    FUN_03c27e60(plVar6,&local_148,uVar5);
  }
  return;
}


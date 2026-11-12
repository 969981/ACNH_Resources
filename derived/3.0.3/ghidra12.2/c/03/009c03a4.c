
void FUN_009c03a4(long param_1)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
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
  
  lVar5 = *(long *)PTR_DAT_04bb2698;
  if (lVar5 == 0) {
    plVar2 = malloc(29000);
  }
  else {
    lVar1 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar2 = (long *)(lVar5 + 8);
    if (lVar1 != 0) {
      plVar2 = (long *)(lVar1 + 0xa8);
    }
    plVar2 = (long *)*plVar2;
    if (plVar2 == (long *)0x0) {
      plVar2 = (long *)0x0;
    }
    else {
      plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,29000,8);
    }
  }
  local_150 = 0;
  local_180 = PTR_DAT_04bb2020 + 0x10;
  pcStack_178 = "RadioGymData";
  pcStack_168 = "RadioGymData";
  puStack_158 = &DAT_0407ebb1;
  local_170 = local_180;
  local_160 = local_180;
  FUN_009c04f0(plVar2,&local_180,0,"RadioGymnastics/RadioGymnasticsParam","RadioGymnasticsData");
  *(long **)(param_1 + 0x48) = plVar2;
  local_138 = 0x100;
  local_35 = 0;
  uVar4 = *(undefined8 *)(*(long *)PTR_DAT_04bb2118 + 0x540);
  local_134[0] = 0;
  puStack_140 = local_134;
  local_148 = PTR_DAT_04bb21f8 + 0x10;
  uVar3 = (**(code **)(*plVar2 + 0xf0))(plVar2,&local_148,1);
  if ((uVar3 & 1) != 0) {
    FUN_03c27e60(plVar2,&local_148,uVar4);
  }
  return;
}



void FUN_0132fa94(long param_1,long *param_2)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined *local_298;
  char *pcStack_290;
  undefined *local_158;
  undefined1 *puStack_150;
  undefined4 local_148;
  undefined1 local_144 [255];
  undefined1 local_45;
  
  if (*param_2 != 0) {
    lVar5 = 1;
    local_298 = PTR_DAT_04bb2020 + 0x10;
    pcStack_290 = "FieldPresetParamsLandMakingHeap";
    plVar2 = (long *)FUN_038c6d48(&LAB_00500000,&local_298,*param_2,8,1,0);
    puVar1 = PTR_DAT_04bb3350;
    if (plVar2 != (long *)0x0) {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar5 = *(long *)(lVar3 + 0xa8);
      *(long **)(lVar3 + 0xa8) = plVar2;
    }
    FUN_013352c8(&local_298,&DAT_05193250,param_1 + 0x60,0);
    local_45 = 0;
    local_148 = 0x100;
    puStack_150 = local_144;
    local_144[0] = 0;
    local_158 = PTR_DAT_04bb21f8 + 0x10;
    uVar4 = (**(code **)(local_298 + 0xf0))(&local_298,&local_158,1);
    if ((uVar4 & 1) != 0) {
      FUN_03c27e60(&local_298,&local_158,plVar2);
    }
    FUN_0132fc90(param_2,&local_298);
    (**(code **)(local_298 + 0x20))(&local_298);
    FUN_01335460(&local_298);
    if (lVar5 != 1) {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar1 + 0x68));
      *(long *)(lVar3 + 0xa8) = lVar5;
    }
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x20))(plVar2);
    }
  }
  return;
}


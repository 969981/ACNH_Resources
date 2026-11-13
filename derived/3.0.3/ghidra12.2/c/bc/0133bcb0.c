
void FUN_0133bcb0(undefined8 param_1,long *param_2)

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
    pcStack_290 = "FieldPresetParamsOutsidePartsHeap";
    plVar2 = (long *)FUN_038c6d48(0x100000,&local_298,*param_2,8,1,0);
    puVar1 = PTR_DAT_04bb3350;
    if (plVar2 != (long *)0x0) {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar5 = *(long *)(lVar3 + 0xa8);
      *(long **)(lVar3 + 0xa8) = plVar2;
    }
    (**(code **)(DAT_05196328 + 0x18))(&DAT_05196328);
    FUN_0074fda4(&local_158,&DAT_040ec793,DAT_05196330,(short)param_2[2]);
    FUN_013352c8(&local_298,&DAT_05196318,&local_158,0);
    local_45 = 0;
    puStack_150 = local_144;
    local_148 = 0x100;
    local_144[0] = 0;
    local_158 = PTR_DAT_04bb21f8 + 0x10;
    uVar4 = (**(code **)(local_298 + 0xf0))(&local_298,&local_158,1);
    if ((uVar4 & 1) != 0) {
      uVar4 = FUN_03c27e60(&local_298,&local_158,plVar2);
    }
    FUN_0133be40(uVar4,param_2[3],&local_298,(int)param_2[1],*(undefined4 *)((long)param_2 + 0xc));
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



void FUN_03bb9e94(undefined8 param_1)

{
  long *plVar1;
  undefined *local_30;
  char *pcStack_28;
  
  local_30 = PTR_DAT_04bb2020 + 0x10;
  pcStack_28 = "unit_distance_curve_xml";
  plVar1 = (long *)FUN_038c6d48(0,&local_30,*(undefined8 *)(*(long *)PTR_DAT_04bc3ee8 + 0x108),8,1,0
                               );
  local_30 = (undefined *)FUN_038f01ec(0,plVar1,0,0x4000);
  FUN_03bbb01c(&local_30,param_1,plVar1);
  (**(code **)(*plVar1 + 0x20))(plVar1);
  return;
}


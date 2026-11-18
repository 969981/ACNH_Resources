
/* WARNING: Removing unreachable block (ram,0x033243b0) */

long FUN_03324380(long param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *local_c8;
  undefined8 *puStack_c0;
  undefined4 local_b8 [14];
  long *local_80;
  
  local_b8[0] = 0;
  lVar2 = (**(code **)(*(long *)*param_2 + 0x30))((long *)*param_2,0x5c8,8);
  FUN_03286a68();
  puVar1 = PTR_DAT_04bc8e70;
  *(undefined8 *)(lVar2 + 0x590) = 0;
  *(undefined8 *)(lVar2 + 0x5a0) = 0;
  *(undefined **)(lVar2 + 0x598) = puVar1 + 0x10;
  local_c8 = PTR_DAT_04bb2020 + 0x10;
  puStack_c0 = &DAT_0407ebb1;
  FUN_0331d330(local_b8,param_1,param_2,*(undefined8 *)(param_1 + 0x2f0),param_3,&local_c8);
  FUN_03361f8c(lVar2,local_b8);
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 8))();
  }
  return lVar2;
}


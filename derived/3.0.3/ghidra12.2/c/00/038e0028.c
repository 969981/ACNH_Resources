
undefined8 FUN_038e0028(undefined8 param_1,undefined8 param_2)

{
  undefined *local_440;
  undefined1 *puStack_438;
  undefined1 *local_430;
  undefined8 uStack_428;
  undefined1 local_420 [1024];
  undefined8 local_8;
  
  local_420[0] = 0;
  local_430 = local_420;
  local_8 = 0;
  uStack_428 = 0x40000000000;
  FUN_038dfb20(param_1,&local_430,param_2);
  local_440 = PTR_DAT_04bb2020 + 0x10;
  puStack_438 = local_430;
  FUN_038d3570(&local_8,&local_440,0xffffffff);
  return local_8;
}


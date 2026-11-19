
void FUN_039a6448(undefined8 param_1,ulong param_2,uint param_3,long param_4)

{
  undefined *puVar1;
  long local_c68;
  undefined8 local_c60;
  long local_850;
  undefined8 local_848;
  undefined *local_438;
  undefined1 *local_430;
  undefined4 local_428;
  undefined1 local_424 [1023];
  undefined1 local_25;
  
  if (param_4 != 0) {
    if (param_3 == 4) {
      local_428 = 0x400;
      local_430 = local_424;
      local_25 = 0;
      local_424[0] = 0;
      local_438 = PTR_DAT_04bb2f40 + 0x10;
      FUN_006e9454(&local_850,"top\\top_%s",(&PTR_s_appli_04b6a1b0)[param_2 & 0xffffffff]);
    }
    else {
      FUN_006e9454(&local_c68,"%s_%s",(&PTR_s_appli_04b6a138)[param_2 & 0xffffffff],
                   (&PTR_s_debug_04b6a190)[param_3]);
      local_25 = 0;
      local_430 = local_424;
      local_428 = 0x400;
      local_424[0] = 0;
      puVar1 = (&PTR_s_appli_04b6a1b0)[param_2 & 0xffffffff];
      local_438 = PTR_DAT_04bb2f40 + 0x10;
      (**(code **)(local_c68 + 0x18))(&local_c68);
      FUN_006e9454(&local_850,"%s\\%s",puVar1,local_c60);
    }
    (**(code **)(local_850 + 0x18))(&local_850);
    FUN_038d1270(&local_438,"Icon=%%AGL_ROOT%%\\..\\gsys\\tools\\icons\\%s.png",local_848);
  }
  return;
}


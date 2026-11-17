
undefined8 FUN_02f04afc(undefined8 *param_1)

{
  int iVar1;
  ulong uVar2;
  char *pcVar3;
  undefined8 *puVar4;
  undefined8 local_50;
  undefined8 local_48;
  undefined *puStack_40;
  undefined *local_38;
  undefined8 *puStack_30;
  undefined4 local_28;
  
  pcVar3 = (char *)param_1[5];
  if ((((((*pcVar3 == '/') && (pcVar3[1] == 'L')) && (pcVar3[2] == '_')) &&
       ((pcVar3[3] == 'S' && (pcVar3[4] == 'h')))) &&
      ((pcVar3[5] == 'a' && ((pcVar3[6] == 'r' && (pcVar3[7] == 'e')))))) &&
     ((pcVar3[8] == 'G' &&
      ((((pcVar3[9] == 'u' && (pcVar3[10] == 'i')) && (pcVar3[0xb] == 'd')) &&
       ((pcVar3[0xc] == 'e' && (pcVar3[0xd] == '_')))))))) {
    puVar4 = (undefined8 *)param_1[1];
    if (((*PTR_DAT_04bc4ff0 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4ff0), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bc4fe8 = PTR_DAT_04bc4e48 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4ff0);
    }
    if ((puVar4 != (undefined8 *)0x0) &&
       (uVar2 = (**(code **)*puVar4)(puVar4,PTR_DAT_04bc4fe8), (uVar2 & 1) != 0)) {
      if (((DAT_056b8348 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056b8348), iVar1 != 0)) {
        DAT_056b8308 = PTR_DAT_04bb2020 + 0x10;
        DAT_056b8310 = &DAT_040fe5ab;
        DAT_056b8320 = &DAT_0407ebb1;
        DAT_056b8340 = &DAT_0407ebb1;
        DAT_056b8330 = "Place";
        DAT_056b8318 = DAT_056b8308;
        DAT_056b8328 = DAT_056b8308;
        DAT_056b8338 = DAT_056b8308;
        __cxa_guard_release(&DAT_056b8348);
      }
      if (((DAT_056b8360 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056b8360), iVar1 != 0)) {
        DAT_056b8350 = 0x200000002;
        DAT_056b8358 = &DAT_056b8308;
        __cxa_guard_release(&DAT_056b8360);
      }
      if (((DAT_056b8418 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056b8418), iVar1 != 0)) {
        DAT_056b8368 = PTR_DAT_04bb2020 + 0x10;
        DAT_056b8370 = "@T_Icon_00";
        DAT_056b8380 = "@T_Text_00";
        DAT_056b8390 = "@T_Icon_01";
        DAT_056b83a0 = "@T_Text_01";
        DAT_056b83c0 = "@T_Text_02";
        DAT_056b83b0 = "@T_Icon_02";
        DAT_056b83d0 = "@T_IconCtrl_00";
        DAT_056b83e0 = "@T_TextCtrl_00";
        DAT_056b83f0 = "@T_Slash_00";
        DAT_056b8400 = "@T_IconCtrl_01";
        DAT_056b8410 = "@T_Leader_00";
        DAT_056b8378 = DAT_056b8368;
        DAT_056b8388 = DAT_056b8368;
        DAT_056b8398 = DAT_056b8368;
        DAT_056b83a8 = DAT_056b8368;
        DAT_056b83b8 = DAT_056b8368;
        DAT_056b83c8 = DAT_056b8368;
        DAT_056b83d8 = DAT_056b8368;
        DAT_056b83e8 = DAT_056b8368;
        DAT_056b83f8 = DAT_056b8368;
        DAT_056b8408 = DAT_056b8368;
        __cxa_guard_release(&DAT_056b8418);
      }
      if (((DAT_056b8430 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056b8430), iVar1 != 0)) {
        DAT_056b8420 = PTR_DAT_04bb2020 + 0x10;
        DAT_056b8428 = "N_Align_00";
        __cxa_guard_release(&DAT_056b8430);
      }
      local_38 = &DAT_04ae03d0;
      puStack_30 = &DAT_056b8350;
      local_28 = 0;
      local_48 = *param_1;
      local_50 = *(undefined8 *)PTR_PTR_04bc4e50;
      puStack_40 = &DAT_04ae03e0;
      FUN_0386e230(puVar4[2] + 0x208,puVar4[2],&local_50);
      return 1;
    }
  }
  return 0;
}


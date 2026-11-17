
undefined8 FUN_02d4a508(undefined8 *param_1)

{
  int iVar1;
  ulong uVar2;
  char *pcVar3;
  undefined8 *puVar4;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined *local_38;
  undefined8 *puStack_30;
  undefined4 local_28;
  
  pcVar3 = (char *)param_1[5];
  if (((((*pcVar3 == '/') && (pcVar3[1] == 'L')) && (pcVar3[2] == '_')) &&
      ((pcVar3[3] == 'M' && (pcVar3[4] == 'a')))) && ((pcVar3[5] == 'p' && (pcVar3[6] == '_')))) {
    puVar4 = (undefined8 *)param_1[1];
    if (((*PTR_DAT_04bc53d0 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc53d0), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bc53c8 = PTR_DAT_04bc4e48 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc53d0);
    }
    if ((puVar4 != (undefined8 *)0x0) &&
       (uVar2 = (**(code **)*puVar4)(puVar4,PTR_DAT_04bc53c8), (uVar2 & 1) != 0)) {
      if (((DAT_0567fb58 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0567fb58), iVar1 != 0)) {
        DAT_0567fb38 = PTR_DAT_04bb2020 + 0x10;
        DAT_0567fb40 = "TypeMap";
        DAT_0567fb50 = &DAT_0407ebb1;
        DAT_0567fb48 = DAT_0567fb38;
        __cxa_guard_release(&DAT_0567fb58);
      }
      if (((DAT_0567fb70 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0567fb70), iVar1 != 0)) {
        DAT_0567fb60 = 0x100000002;
        DAT_0567fb68 = &DAT_0567fb38;
        __cxa_guard_release(&DAT_0567fb70);
      }
      if (((DAT_0567fc38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0567fc38), iVar1 != 0)) {
        DAT_0567fb78 = PTR_DAT_04bb2020 + 0x10;
        DAT_0567fb80 = "@T_Line_01";
        DAT_0567fba0 = "@T_Line_03";
        DAT_0567fb90 = "@T_Line_02";
        DAT_0567fbb0 = "@T_Line_04";
        DAT_0567fbc0 = "@T_Line_05";
        DAT_0567fbe0 = "@T_Line_08";
        DAT_0567fbd0 = "@T_Line_07";
        DAT_0567fbf0 = "@T_Line_09";
        DAT_0567fc00 = "@T_Line_10";
        DAT_0567fc10 = "@T_Line_11";
        DAT_0567fc20 = "@T_Line_12";
        DAT_0567fc30 = "@T_Line_06";
        DAT_0567fb88 = DAT_0567fb78;
        DAT_0567fb98 = DAT_0567fb78;
        DAT_0567fba8 = DAT_0567fb78;
        DAT_0567fbb8 = DAT_0567fb78;
        DAT_0567fbc8 = DAT_0567fb78;
        DAT_0567fbd8 = DAT_0567fb78;
        DAT_0567fbe8 = DAT_0567fb78;
        DAT_0567fbf8 = DAT_0567fb78;
        DAT_0567fc08 = DAT_0567fb78;
        DAT_0567fc18 = DAT_0567fb78;
        DAT_0567fc28 = DAT_0567fb78;
        __cxa_guard_release(&DAT_0567fc38);
      }
      local_28 = 0;
      local_40 = 0;
      local_38 = &DAT_04ac0320;
      puStack_30 = &DAT_0567fb60;
      uStack_48 = *param_1;
      local_50 = *(undefined8 *)PTR_PTR_04bc4e50;
      FUN_0386e230(puVar4[2] + 0x208,puVar4[2],&local_50);
      return 1;
    }
  }
  return 0;
}


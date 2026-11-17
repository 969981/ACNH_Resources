
undefined8 FUN_030fa100(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  char *pcVar4;
  char cVar5;
  char *pcVar6;
  undefined8 *puVar7;
  undefined4 local_a8 [2];
  undefined **local_a0;
  undefined *local_98;
  char *pcStack_90;
  undefined *local_88;
  char *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 *local_68;
  undefined4 local_60;
  undefined1 local_35;
  
  local_35 = 0;
  param_2 = (undefined8 *)*param_2;
  local_78 = (undefined4 *)CONCAT35(local_78._5_3_,0x40);
  local_80 = (char *)((long)&local_78 + 4);
  local_88 = PTR_DAT_04bb2bc0 + 0x10;
  FUN_030fa350(param_1,"HotelIcon",&local_88);
  cVar5 = *local_80;
  if (cVar5 != '\0') {
    pcVar4 = (char *)param_2[5];
    pcVar6 = local_80;
    do {
      pcVar6 = pcVar6 + 1;
      if (*pcVar4 != cVar5) {
        return 0;
      }
      cVar5 = *pcVar6;
      pcVar4 = pcVar4 + 1;
    } while (cVar5 != '\0');
    puVar7 = (undefined8 *)param_2[1];
    if (((*PTR_DAT_04bc4ff0 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04bc4ff0), iVar2 != 0)) {
      *(undefined **)PTR_DAT_04bc4fe8 = PTR_DAT_04bc4e48 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4ff0);
    }
    if ((puVar7 != (undefined8 *)0x0) &&
       (uVar3 = (**(code **)*puVar7)(puVar7,PTR_DAT_04bc4fe8), puVar1 = PTR_DAT_04bb2020,
       (uVar3 & 1) != 0)) {
      if (((DAT_056f12d8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_056f12d8), iVar2 != 0)) {
        DAT_056f1258 = puVar1 + 0x10;
        DAT_056f1260 = "Attention";
        DAT_056f1280 = "Normal";
        DAT_056f12a0 = &DAT_040fe5ab;
        DAT_056f1270 = &DAT_0407ebb1;
        DAT_056f1290 = &DAT_0407ebb1;
        DAT_056f12b0 = &DAT_0407ebb1;
        DAT_056f12c0 = "TypePier";
        DAT_056f12d0 = &DAT_0407ebb1;
        DAT_056f1268 = DAT_056f1258;
        DAT_056f1278 = DAT_056f1258;
        DAT_056f1288 = DAT_056f1258;
        DAT_056f1298 = DAT_056f1258;
        DAT_056f12a8 = DAT_056f1258;
        DAT_056f12b8 = DAT_056f1258;
        DAT_056f12c8 = DAT_056f1258;
        __cxa_guard_release(&DAT_056f12d8);
      }
      if (((DAT_056f12f0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_056f12f0), iVar2 != 0)) {
        DAT_056f12e0 = 0x400000002;
        DAT_056f12e8 = &DAT_056f1258;
        __cxa_guard_release(&DAT_056f12f0);
      }
      local_98 = puVar1 + 0x10;
      pcStack_90 = "N_HotelBalloon_00";
      local_a0 = &local_98;
      local_a8[0] = 1;
      local_70 = 0;
      local_88 = *(undefined **)PTR_PTR_04bc4e50;
      local_60 = 0;
      local_80 = (char *)*param_2;
      local_68 = &DAT_056f12e0;
      local_78 = local_a8;
      FUN_0386e230(puVar7[2] + 0x208,puVar7[2],&local_88);
      return 1;
    }
  }
  return 0;
}


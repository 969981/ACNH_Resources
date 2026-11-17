
undefined8 FUN_030f9ef0(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  ulong uVar2;
  char *pcVar3;
  char cVar4;
  char *pcVar5;
  undefined8 *puVar6;
  undefined *local_78;
  char *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 *local_58;
  undefined4 local_50;
  undefined1 local_25;
  
  local_25 = 0;
  param_2 = (undefined8 *)*param_2;
  local_68 = CONCAT35(local_68._5_3_,0x40);
  local_70 = (char *)((long)&local_68 + 4);
  local_78 = PTR_DAT_04bb2bc0 + 0x10;
  FUN_030fa350(param_1,"NewPlaceIcon",&local_78);
  cVar4 = *local_70;
  if (cVar4 != '\0') {
    pcVar3 = (char *)param_2[5];
    pcVar5 = local_70;
    do {
      pcVar5 = pcVar5 + 1;
      if (*pcVar3 != cVar4) {
        return 0;
      }
      cVar4 = *pcVar5;
      pcVar3 = pcVar3 + 1;
    } while (cVar4 != '\0');
    puVar6 = (undefined8 *)param_2[1];
    if (((*PTR_DAT_04bc4ff0 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4ff0), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bc4fe8 = PTR_DAT_04bc4e48 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4ff0);
    }
    if ((puVar6 != (undefined8 *)0x0) &&
       (uVar2 = (**(code **)*puVar6)(puVar6,PTR_DAT_04bc4fe8), (uVar2 & 1) != 0)) {
      if (((DAT_056f1238 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056f1238), iVar1 != 0)) {
        DAT_056f11d8 = PTR_DAT_04bb2020 + 0x10;
        DAT_056f11e0 = &DAT_040fe5ab;
        DAT_056f11f0 = &DAT_0407ebb1;
        DAT_056f1210 = &DAT_0407ebb1;
        DAT_056f1200 = "Attention";
        DAT_056f1220 = "Normal";
        DAT_056f1230 = &DAT_0407ebb1;
        DAT_056f11e8 = DAT_056f11d8;
        DAT_056f11f8 = DAT_056f11d8;
        DAT_056f1208 = DAT_056f11d8;
        DAT_056f1218 = DAT_056f11d8;
        DAT_056f1228 = DAT_056f11d8;
        __cxa_guard_release(&DAT_056f1238);
      }
      if (((DAT_056f1250 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056f1250), iVar1 != 0)) {
        DAT_056f1240 = 0x300000002;
        DAT_056f1248 = &DAT_056f11d8;
        __cxa_guard_release(&DAT_056f1250);
      }
      local_68 = 0;
      uStack_60 = 0;
      local_78 = *(undefined **)PTR_PTR_04bc4e50;
      local_50 = 0;
      local_70 = (char *)*param_2;
      local_58 = &DAT_056f1240;
      FUN_0386e230(puVar6[2] + 0x208,puVar6[2],&local_78);
      return 1;
    }
  }
  return 0;
}


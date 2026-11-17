
undefined8 FUN_030f98a0(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  ulong uVar2;
  char cVar3;
  char *pcVar4;
  char *pcVar5;
  undefined8 *puVar6;
  undefined *local_78;
  char *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 *local_58;
  undefined4 local_50;
  undefined1 local_25;
  
  param_2 = (undefined8 *)*param_2;
  uVar2 = (ulong)local_68 >> 0x20;
  local_68 = CONCAT44((uint)uVar2 & 0xffffff00,0x40);
  local_70 = (char *)((long)&local_68 + 4);
  pcVar5 = (char *)param_2[5];
  local_25 = 0;
  local_78 = PTR_DAT_04bb2bc0 + 0x10;
  FUN_030fa350(param_1,"ShipIcon",&local_78);
  cVar3 = *local_70;
  if (cVar3 != '\0') {
    pcVar4 = local_70;
    do {
      pcVar4 = pcVar4 + 1;
      if (*pcVar5 != cVar3) {
        return 0;
      }
      cVar3 = *pcVar4;
      pcVar5 = pcVar5 + 1;
    } while (cVar3 != '\0');
    puVar6 = (undefined8 *)param_2[1];
    if (((*PTR_DAT_04bc4ff0 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4ff0), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bc4fe8 = PTR_DAT_04bc4e48 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4ff0);
    }
    if ((puVar6 != (undefined8 *)0x0) &&
       (uVar2 = (**(code **)*puVar6)(puVar6,PTR_DAT_04bc4fe8), (uVar2 & 1) != 0)) {
      if (((DAT_056f1078 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056f1078), iVar1 != 0)) {
        DAT_056f1018 = PTR_DAT_04bb2020 + 0x10;
        DAT_056f1020 = "Attention";
        DAT_056f1030 = &DAT_0407ebb1;
        DAT_056f1050 = &DAT_0407ebb1;
        DAT_056f1040 = "Normal";
        DAT_056f1060 = &DAT_040fe5ab;
        DAT_056f1070 = &DAT_0407ebb1;
        DAT_056f1028 = DAT_056f1018;
        DAT_056f1038 = DAT_056f1018;
        DAT_056f1048 = DAT_056f1018;
        DAT_056f1058 = DAT_056f1018;
        DAT_056f1068 = DAT_056f1018;
        __cxa_guard_release(&DAT_056f1078);
      }
      if (((DAT_056f1090 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056f1090), iVar1 != 0)) {
        DAT_056f1080 = 0x300000002;
        DAT_056f1088 = &DAT_056f1018;
        __cxa_guard_release(&DAT_056f1090);
      }
      local_68 = 0;
      uStack_60 = 0;
      local_78 = *(undefined **)PTR_PTR_04bc4e50;
      local_50 = 0;
      local_70 = (char *)*param_2;
      local_58 = &DAT_056f1080;
      FUN_0386e230(puVar6[2] + 0x208,puVar6[2],&local_78);
      return 1;
    }
  }
  return 0;
}


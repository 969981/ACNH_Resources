
undefined8 FUN_030f9480(undefined8 param_1,undefined8 *param_2)

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
  FUN_030fa350(param_1,"TailorIcon",&local_78);
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
      if (((DAT_056f0f78 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056f0f78), iVar1 != 0)) {
        DAT_056f0f18 = PTR_DAT_04bb2020 + 0x10;
        DAT_056f0f20 = "Attention";
        DAT_056f0f30 = &DAT_0407ebb1;
        DAT_056f0f50 = &DAT_0407ebb1;
        DAT_056f0f40 = "Normal";
        DAT_056f0f60 = &DAT_040fe5ab;
        DAT_056f0f70 = &DAT_0407ebb1;
        DAT_056f0f28 = DAT_056f0f18;
        DAT_056f0f38 = DAT_056f0f18;
        DAT_056f0f48 = DAT_056f0f18;
        DAT_056f0f58 = DAT_056f0f18;
        DAT_056f0f68 = DAT_056f0f18;
        __cxa_guard_release(&DAT_056f0f78);
      }
      if (((DAT_056f0f90 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056f0f90), iVar1 != 0)) {
        DAT_056f0f80 = 0x300000002;
        DAT_056f0f88 = &DAT_056f0f18;
        __cxa_guard_release(&DAT_056f0f90);
      }
      local_68 = 0;
      uStack_60 = 0;
      local_78 = *(undefined **)PTR_PTR_04bc4e50;
      local_50 = 0;
      local_70 = (char *)*param_2;
      local_58 = &DAT_056f0f80;
      FUN_0386e230(puVar6[2] + 0x208,puVar6[2],&local_78);
      return 1;
    }
  }
  return 0;
}


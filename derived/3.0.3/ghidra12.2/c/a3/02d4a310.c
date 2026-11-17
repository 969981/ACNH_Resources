
undefined8 FUN_02d4a310(undefined8 *param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  char cVar4;
  undefined8 *puVar5;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 *local_30;
  undefined4 local_28;
  
  lVar3 = 0;
  cVar4 = '/';
  while( true ) {
    if (*(char *)(param_1[5] + lVar3) != cVar4) {
      return 0;
    }
    if (lVar3 == 0x18) break;
    if (*(char *)(param_1[5] + lVar3 + 1) != "/L_Map_00/L_IconNewPlace_"[lVar3 + 1]) {
      return 0;
    }
    cVar4 = "/L_Map_00/L_IconNewPlace_"[lVar3 + 2];
    lVar3 = lVar3 + 2;
  }
  puVar5 = (undefined8 *)param_1[1];
  if (((*PTR_DAT_04bc4ff0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4ff0), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bc4fe8 = PTR_DAT_04bc4e48 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4ff0);
  }
  if (puVar5 == (undefined8 *)0x0) {
    return 0;
  }
  uVar2 = (**(code **)*puVar5)(puVar5,PTR_DAT_04bc4fe8);
  if ((uVar2 & 1) == 0) {
    return 0;
  }
  if (((DAT_0567fb18 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0567fb18), iVar1 != 0)) {
    DAT_0567fab8 = PTR_DAT_04bb2020 + 0x10;
    DAT_0567fac0 = &DAT_040fe5ab;
    DAT_0567fad0 = &DAT_0407ebb1;
    DAT_0567faf0 = &DAT_0407ebb1;
    DAT_0567fae0 = "Attention";
    DAT_0567fb00 = "Normal";
    DAT_0567fb10 = &DAT_0407ebb1;
    DAT_0567fac8 = DAT_0567fab8;
    DAT_0567fad8 = DAT_0567fab8;
    DAT_0567fae8 = DAT_0567fab8;
    DAT_0567faf8 = DAT_0567fab8;
    DAT_0567fb08 = DAT_0567fab8;
    __cxa_guard_release(&DAT_0567fb18);
  }
  if (((DAT_0567fb30 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0567fb30), iVar1 != 0)) {
    DAT_0567fb20 = 0x300000002;
    DAT_0567fb28 = &DAT_0567fab8;
    __cxa_guard_release(&DAT_0567fb30);
  }
  local_40 = 0;
  uStack_38 = 0;
  uStack_48 = *param_1;
  local_28 = 0;
  local_50 = *(undefined8 *)PTR_PTR_04bc4e50;
  local_30 = &DAT_0567fb20;
  FUN_0386e230(puVar5[2] + 0x208,puVar5[2],&local_50);
  return 1;
}



undefined8 FUN_02f05410(undefined8 *param_1)

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
       ((pcVar3[3] == 'A' && (pcVar3[4] == 'l')))) &&
      ((pcVar3[5] == 'b' && ((pcVar3[6] == 'u' && (pcVar3[7] == 'm')))))) && (pcVar3[8] == '_')) {
    puVar4 = (undefined8 *)param_1[1];
    if (((*PTR_DAT_04bc4ff0 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4ff0), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bc4fe8 = PTR_DAT_04bc4e48 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4ff0);
    }
    if ((puVar4 != (undefined8 *)0x0) &&
       (uVar2 = (**(code **)*puVar4)(puVar4,PTR_DAT_04bc4fe8), (uVar2 & 1) != 0)) {
      if (((DAT_056b85a0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056b85a0), iVar1 != 0)) {
        DAT_056b8520 = PTR_DAT_04bb2020 + 0x10;
        DAT_056b8528 = &DAT_040fe5ab;
        DAT_056b8538 = &DAT_0407ebb1;
        DAT_056b8558 = &DAT_0407ebb1;
        DAT_056b8548 = "IconType";
        DAT_056b8568 = "Photo";
        DAT_056b8578 = &DAT_0407ebb1;
        DAT_056b8588 = "Entry";
        DAT_056b8598 = &DAT_0407ebb1;
        DAT_056b8530 = DAT_056b8520;
        DAT_056b8540 = DAT_056b8520;
        DAT_056b8550 = DAT_056b8520;
        DAT_056b8560 = DAT_056b8520;
        DAT_056b8570 = DAT_056b8520;
        DAT_056b8580 = DAT_056b8520;
        DAT_056b8590 = DAT_056b8520;
        __cxa_guard_release(&DAT_056b85a0);
      }
      if (((DAT_056b85b8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056b85b8), iVar1 != 0)) {
        DAT_056b85a8 = 0x400000002;
        DAT_056b85b0 = &DAT_056b8520;
        __cxa_guard_release(&DAT_056b85b8);
      }
      if (((DAT_056b85d0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056b85d0), iVar1 != 0)) {
        DAT_056b85c0 = PTR_DAT_04bb2020 + 0x10;
        DAT_056b85c8 = "@T_Icon_00";
        __cxa_guard_release(&DAT_056b85d0);
      }
      if (((DAT_056b8618 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056b8618), iVar1 != 0)) {
        DAT_056b85d8 = PTR_DAT_04bb2020 + 0x10;
        DAT_056b85e0 = "P_Illust_00";
        DAT_056b8610 = "P_NPCIcon_01";
        DAT_056b85f0 = "P_Illust_01";
        DAT_056b8600 = "P_NPCIcon_00";
        DAT_056b85e8 = DAT_056b85d8;
        DAT_056b85f8 = DAT_056b85d8;
        DAT_056b8608 = DAT_056b85d8;
        __cxa_guard_release(&DAT_056b8618);
      }
      local_48 = *param_1;
      local_28 = 4;
      local_38 = &DAT_04ae0420;
      puStack_30 = &DAT_056b85a8;
      puStack_40 = &DAT_04ae0430;
      local_50 = *(undefined8 *)PTR_PTR_04bc4e50;
      FUN_0386e230(puVar4[2] + 0x208,puVar4[2],&local_50);
      return 1;
    }
  }
  return 0;
}



void FUN_031f06b4(undefined8 *param_1)

{
  int iVar1;
  ulong uVar2;
  char *pcVar3;
  undefined8 *puVar4;
  undefined8 local_60;
  undefined8 local_58;
  undefined *puStack_50;
  undefined8 local_48;
  undefined8 *puStack_40;
  undefined4 local_38;
  
  pcVar3 = (char *)param_1[5];
  if (((((((*pcVar3 == '/') && (pcVar3[1] == 'L')) && (pcVar3[2] == '_')) &&
        ((pcVar3[3] == 'S' && (pcVar3[4] == 'o')))) &&
       ((pcVar3[5] == 'u' && ((pcVar3[6] == 'n' && (pcVar3[7] == 'd')))))) && (pcVar3[8] == 'B')) &&
     (((pcVar3[9] == 't' && (pcVar3[10] == 'n')) && (pcVar3[0xb] == '_')))) {
    puVar4 = (undefined8 *)param_1[1];
    if (((*PTR_DAT_04bc4e40 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4e40), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bc4e38 = PTR_DAT_04bc4e48 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4e40);
    }
    if ((puVar4 != (undefined8 *)0x0) &&
       (uVar2 = (**(code **)*puVar4)(puVar4,PTR_DAT_04bc4e38), (uVar2 & 1) != 0)) {
      if (((DAT_0571dd28 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0571dd28), iVar1 != 0)) {
        DAT_0571dce8 = PTR_DAT_04bb2020 + 0x10;
        DAT_0571dcf0 = "IconOff";
        DAT_0571dd00 = &DAT_0407ebb1;
        DAT_0571dd20 = &DAT_0407ebb1;
        DAT_0571dd10 = "State";
        DAT_0571dcf8 = DAT_0571dce8;
        DAT_0571dd08 = DAT_0571dce8;
        DAT_0571dd18 = DAT_0571dce8;
        __cxa_guard_release(&DAT_0571dd28);
      }
      if (((DAT_0571dd40 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0571dd40), iVar1 != 0)) {
        DAT_0571dd30 = 0x200000002;
        DAT_0571dd38 = &DAT_0571dce8;
        __cxa_guard_release(&DAT_0571dd40);
      }
      if (((DAT_0571dd58 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0571dd58), iVar1 != 0)) {
        DAT_0571dd48 = PTR_DAT_04bb2020 + 0x10;
        DAT_0571dd50 = "P_Icon_00";
        __cxa_guard_release(&DAT_0571dd58);
      }
      local_58 = *param_1;
      local_48 = 0;
      puStack_40 = &DAT_0571dd30;
      local_38 = 1;
      puStack_50 = &DAT_04b0ddd8;
      local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
      FUN_0386e230(puVar4[2] + 0x2c8,puVar4[2],&local_60);
    }
  }
  return;
}


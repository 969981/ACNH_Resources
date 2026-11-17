
void FUN_02c172c4(undefined8 *param_1)

{
  int iVar1;
  ulong uVar2;
  char *pcVar3;
  undefined8 *puVar4;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 *local_30;
  undefined4 local_28;
  
  pcVar3 = (char *)param_1[5];
  if ((((((*pcVar3 == '/') && (pcVar3[1] == 'L')) && (pcVar3[2] == '_')) &&
       ((pcVar3[3] == 'M' && (pcVar3[4] == 'o')))) &&
      ((pcVar3[5] == 'u' && ((pcVar3[6] == 's' && (pcVar3[7] == 'e')))))) && (pcVar3[8] == '_')) {
    puVar4 = (undefined8 *)param_1[1];
    if (((*PTR_DAT_04bc4ff0 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4ff0), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bc4fe8 = PTR_DAT_04bc4e48 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4ff0);
    }
    if ((puVar4 != (undefined8 *)0x0) &&
       (uVar2 = (**(code **)*puVar4)(puVar4,PTR_DAT_04bc4fe8), (uVar2 & 1) != 0)) {
      if (((DAT_0564c1d8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0564c1d8), iVar1 != 0)) {
        DAT_0564c178 = PTR_DAT_04bb2020 + 0x10;
        DAT_0564c180 = "Invalid";
        DAT_0564c190 = &DAT_0407ebb1;
        DAT_0564c1b0 = &DAT_0407ebb1;
        DAT_0564c1a0 = &DAT_040fe5ab;
        DAT_0564c1c0 = "Mouse";
        DAT_0564c1d0 = &DAT_0407ebb1;
        DAT_0564c188 = DAT_0564c178;
        DAT_0564c198 = DAT_0564c178;
        DAT_0564c1a8 = DAT_0564c178;
        DAT_0564c1b8 = DAT_0564c178;
        DAT_0564c1c8 = DAT_0564c178;
        __cxa_guard_release(&DAT_0564c1d8);
      }
      if (((DAT_0564c1f0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0564c1f0), iVar1 != 0)) {
        DAT_0564c1e0 = 0x300000002;
        DAT_0564c1e8 = &DAT_0564c178;
        __cxa_guard_release(&DAT_0564c1f0);
      }
      local_40 = 0;
      uStack_38 = 0;
      uStack_48 = *param_1;
      local_28 = 0;
      local_50 = *(undefined8 *)PTR_PTR_04bc4e50;
      local_30 = &DAT_0564c1e0;
      FUN_0386e230(puVar4[2] + 0x208,puVar4[2],&local_50);
    }
  }
  return;
}


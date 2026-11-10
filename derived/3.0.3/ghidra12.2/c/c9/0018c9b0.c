
void FUN_0018c9b0(ulong *param_1,ulong param_2)

{
  char cVar1;
  long *plVar2;
  undefined *puVar3;
  ulong uVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong local_48;
  
  if (((DAT_04c58a50 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04c58a50), iVar5 != 0)) {
    DAT_04c58a48 = 0;
    FUN_001001d0(PTR_FUN_04bc0ee8,&DAT_04c58a48,&__DT_FINI_ARRAY);
    __cxa_guard_release(&DAT_04c58a50);
  }
  uVar4 = DAT_04c58a48;
  puVar3 = PTR_DAT_04bcbdc8;
  lVar8 = *(long *)PTR_DAT_04bcbdc8;
  if (*(long **)PTR_DAT_04bcbdc0 == (long *)0x0) {
    lVar6 = nn::os::GetSystemTick();
    uVar7 = nn::os::GetSystemTickFrequency();
    local_48 = 0;
    if (uVar7 != 0) {
      local_48 = (ulong)(lVar6 * 1000) / uVar7;
    }
    cVar1 = *PTR_DAT_04bcbdb8;
    plVar2 = (long *)PTR_DAT_04bcbdf8;
  }
  else {
    (**(code **)(**(long **)PTR_DAT_04bcbdc0 + 0x10))(&local_48);
    cVar1 = *PTR_DAT_04bcbdb8;
    plVar2 = (long *)PTR_DAT_04bcbdf8;
  }
  PTR_DAT_04bcbdf8 = (undefined *)plVar2;
  if (cVar1 == '\0') {
    uVar7 = 1;
    *PTR_DAT_04bcbdb8 = 1;
    DAT_04c58a48 = 1;
    *(ulong *)puVar3 = 1 - local_48;
  }
  else {
    if (((lVar8 < 0) && (local_48 < (ulong)-lVar8)) || (uVar7 = local_48 + lVar8, uVar7 < uVar4)) {
      if ((param_2 & 1) != 0) {
        DAT_04c58a48 = uVar4 + 1;
        *param_1 = DAT_04c58a48;
        *(ulong *)puVar3 = DAT_04c58a48 - local_48;
        return;
      }
      (**(code **)(*plVar2 + 0x10))(plVar2);
      if (*PTR_DAT_04bcbca8 == '\0') {
        FUN_0018cb8c(param_1);
      }
      else {
        FUN_0018c9b0(param_1,1);
      }
      (**(code **)(*plVar2 + 0x20))(plVar2);
      return;
    }
    DAT_04c58a48 = uVar7;
  }
  *param_1 = uVar7;
  return;
}


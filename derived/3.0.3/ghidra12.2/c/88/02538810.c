
bool FUN_02538810(byte *param_1,int *param_2)

{
  int iVar1;
  long *plVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  long *local_40;
  char local_38;
  char local_37;
  char local_36;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  puVar8 = (undefined4 *)PTR_DAT_04bb3238;
  if ((ulong)*param_1 < 8) {
    if (DAT_054f5738 != 0) {
      puVar8 = (undefined4 *)(DAT_054f5738 + (ulong)*param_1 * 4 + 0xde8);
    }
  }
  local_2c = *puVar8;
  FUN_0071c8d0(&local_40,&local_2c,PTR_DAT_04bb3238,0);
  plVar2 = local_40;
  if (local_40 != (long *)0x0) {
    if (((*PTR_DAT_04bb3778 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb3778), iVar5 != 0)) {
      *(undefined **)PTR_DAT_04bb3770 = PTR_DAT_04bb3780 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3778);
    }
    uVar6 = (**(code **)(*plVar2 + 0x20))(plVar2,PTR_DAT_04bb3770);
    if ((uVar6 & 1) == 0) {
      local_37 = '\0';
    }
  }
  bVar4 = true;
  if ((((local_40 != (long *)0x0) && (local_38 != '\0')) && (local_37 != '\0')) &&
     (local_36 != '\0')) {
    if ((int)local_40[0x2f] == 0) {
      local_28 = 10;
      local_24 = 10;
      if ((*(byte *)((long)local_40 + 0x18f5) >> 2 & 1) != 0) {
        return true;
      }
    }
    plVar2 = &DAT_054e9a58;
    if ((long *)local_40[0x99] != (long *)0x0) {
      plVar2 = (long *)local_40[0x99];
    }
    lVar7 = (**(code **)(*plVar2 + 0x148))();
    iVar5 = *param_2;
    iVar10 = iVar5 - *(int *)(lVar7 + 4);
    if (iVar10 + 0xb60b60U < 0x16c16c1) {
      bVar4 = true;
      iVar9 = iVar5;
    }
    else {
      iVar3 = 0x11c71c80;
      iVar9 = -0x11c71c80;
      iVar10 = (int)((float)iVar10 * 0.28);
      if (iVar10 < 1) {
        iVar3 = -0xb60b61;
      }
      else {
        iVar9 = 0xb60b61;
      }
      iVar1 = iVar10;
      if (iVar3 <= iVar10) {
        iVar1 = iVar3;
      }
      if (iVar9 <= iVar10) {
        iVar9 = iVar1;
      }
      iVar9 = iVar9 + *(int *)(lVar7 + 4);
      bVar4 = iVar9 == iVar5;
    }
    *(int *)(lVar7 + 4) = iVar9;
  }
  return bVar4;
}


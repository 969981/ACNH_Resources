
undefined8 FUN_02453e40(void)

{
  int iVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined1 auStack_4c [31];
  undefined1 local_2d;
  
  if (DAT_05aed670 == 0) {
    plVar3 = &DAT_055c04a0;
  }
  else {
    plVar3 = &DAT_055c04a0;
    if (*(long *)(DAT_05aed670 + 0x330) != 0) {
      puVar2 = (undefined8 *)
               (**(code **)(*DAT_05aed668 + 0x18))
                         (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
      iVar1 = FUN_006bd550(*puVar2,0);
      plVar3 = (long *)PTR_DAT_04bc3a80;
      if (iVar1 != 0x758f7eaf) {
        plVar3 = &DAT_055c04a0;
      }
    }
  }
  local_2d = 0;
  (**(code **)(*plVar3 + 0x18))(plVar3);
  if (auStack_4c != (undefined1 *)plVar3[1]) {
    (**(code **)(*plVar3 + 0x18))(plVar3);
  }
  iVar1 = (int)plVar3[7];
  if (iVar1 < 0x3b3bf38a) {
    if (iVar1 == -0x477aafe0) {
      return 1;
    }
    if (iVar1 == -0x15fdefdb) {
      return 1;
    }
  }
  else {
    if (iVar1 == 0x3b3bf38a) {
      return 1;
    }
    if (iVar1 == 0x593d97a5) {
      return 1;
    }
    if (iVar1 == 0x66eec322) {
      return 1;
    }
  }
  return 0;
}


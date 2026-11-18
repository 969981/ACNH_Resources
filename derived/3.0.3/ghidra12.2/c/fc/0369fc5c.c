
undefined * FUN_0369fc5c(undefined *param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  uint local_28;
  
  puVar1 = PTR_DAT_04bb2720;
  lVar5 = *(long *)PTR_DAT_04bb2720;
  iVar3 = 0;
  if (lVar5 != 0) {
    if (*(long *)(lVar5 + 0x330) == 0) {
      iVar3 = 0;
    }
    else {
      puVar4 = (undefined8 *)
               (**(code **)(*DAT_05aed668 + 0x18))(DAT_05aed668,*(undefined4 *)(lVar5 + 0x338));
      iVar2 = FUN_006bd550(*puVar4,0);
      iVar3 = 0;
      if (iVar2 == 0x758f7eaf) {
        iVar3 = 0;
        if (*(long *)puVar1 != 0) {
          lVar5 = *(long *)(*(long *)puVar1 + 0x330);
          iVar3 = 0;
          if (lVar5 != 0) {
            iVar3 = *(int *)(lVar5 + 0x244);
          }
        }
      }
    }
  }
  if (DAT_0529240c == iVar3) {
    local_28 = 1;
  }
  else if (((DAT_05ab5ea8 == 0) || ((DAT_05ab8198 != (ushort *)0x0 && ((*DAT_05ab8198 & 1) != 0))))
          || ((*(int *)(DAT_05ab5ea8 + 0x14) != 4 && (*(int *)(DAT_05ab5ea8 + 0x14) != 5)))) {
    if ((DAT_0523adf0 == 0) || (*(int *)(DAT_0523adf0 + 0x98) == 0)) {
      if (DAT_04c487d4 != -1) {
        puVar1 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8;
        if (0xff < (uint)(int)DAT_04c487d4) {
          puVar1 = PTR_DAT_04bc39f8;
        }
        if ((*(uint *)(puVar1 + 4) & 1) != 0) {
          local_28 = 4;
          goto LAB_0369fde0;
        }
      }
      local_28 = *(uint *)(param_1 + 0x1044);
      if (param_1[0x1040] == '\0') {
        if ((DAT_05ab0cb0 & 1) != 0) {
          return &DAT_05ab0970;
        }
        iVar3 = __cxa_guard_acquire(&DAT_05ab0cb0);
        if (iVar3 == 0) {
          return &DAT_05ab0970;
        }
        FUN_036a05ac(&DAT_05ab0970);
        __cxa_guard_release(&DAT_05ab0cb0);
        return &DAT_05ab0970;
      }
    }
    else {
      local_28 = 3;
    }
  }
  else {
    local_28 = 0;
  }
LAB_0369fde0:
  puVar1 = param_1 + (ulong)local_28 * 0x340;
  if (4 < local_28) {
    puVar1 = param_1;
  }
  return puVar1;
}



/* WARNING: Removing unreachable block (ram,0x02ea1c28) */
/* WARNING: Removing unreachable block (ram,0x02ea1c44) */

void FUN_02ea1a70(undefined2 *param_1)

{
  long lVar1;
  int iVar2;
  byte bVar3;
  undefined *puVar4;
  undefined1 *__dest;
  long lVar5;
  undefined1 *__src;
  long *plVar6;
  undefined **local_80;
  undefined2 local_78;
  undefined2 local_70;
  char local_6e;
  undefined *local_68;
  undefined1 *local_60;
  int local_58;
  undefined1 local_54 [7];
  undefined1 local_4d;
  undefined8 local_48;
  undefined1 local_40;
  
  local_78 = 0x100;
  local_70 = 0;
  local_6e = '\0';
  local_58 = 8;
  local_60 = local_54;
  local_80 = &PTR_LAB_04adb4e8;
  local_4d = 0;
  local_54[0] = 0;
  local_68 = PTR_DAT_04bb3768 + 0x10;
  local_48 = 0xfffe;
  FUN_0277d4ac(&local_48);
  __dest = local_60;
  local_40 = 0;
  if (*(char *)(param_1 + 1) == '\0') {
    if (local_6e != '\0') {
      local_6e = '\0';
    }
  }
  else {
    local_70 = *param_1;
    if (local_6e == '\0') {
      local_6e = '\x01';
    }
  }
  plVar6 = (long *)(param_1 + 4);
  (**(code **)(*plVar6 + 0x18))(plVar6);
  __src = *(undefined1 **)(param_1 + 8);
  if (__dest != __src) {
    (**(code **)(*(long *)(param_1 + 4) + 0x18))(plVar6);
    lVar5 = 0;
    do {
      if (*(char *)(*(long *)(param_1 + 8) + lVar5) == '\0') goto LAB_02ea1b8c;
      lVar1 = *(long *)(param_1 + 8) + lVar5;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar5 = lVar5 + 1;
        goto LAB_02ea1b8c;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar5 = lVar5 + 2;
        goto LAB_02ea1b8c;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_02ea1b8c:
    iVar2 = (int)lVar5;
    if (local_58 <= (int)lVar5) {
      iVar2 = local_58 + -1;
    }
    memcpy(__dest,__src,(long)iVar2);
    __dest[iVar2] = 0;
  }
  puVar4 = PTR_DAT_04bb2230;
  local_48 = *(undefined8 *)(param_1 + 0x14);
  local_40 = *(undefined1 *)(param_1 + 0x18);
  FUN_03390570(*(undefined8 *)(*(long *)PTR_DAT_04bb2230 + 0x28),0,&local_80);
  lVar5 = 0;
  if (*(long *)puVar4 != 0) {
    lVar5 = *(long *)(*(long *)puVar4 + 0x28);
  }
  bVar3 = *(byte *)(param_1 + 1);
  if (DAT_05739db8 != 0) {
    lVar1 = DAT_05739da8;
    if (DAT_05739db8 < 1) {
      lVar1 = 0;
    }
    if (*(char *)(lVar1 + 0x68) != '\0') {
      *(undefined1 *)(lVar1 + 0x69) = 1;
    }
  }
  *(byte *)(lVar5 + 0x12) = bVar3 ^ 1;
  return;
}


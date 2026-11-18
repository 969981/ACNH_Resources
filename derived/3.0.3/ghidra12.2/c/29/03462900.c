
undefined8 *
FUN_03462900(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  bool bVar2;
  char *__src;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  undefined *local_98;
  char *local_90;
  int local_88;
  char local_84 [63];
  undefined1 local_45;
  
  __src = (char *)FUN_03c90520(param_4,param_3);
  if (__src == (char *)0x0) {
    return (undefined8 *)0x0;
  }
  local_45 = 0;
  local_88 = 0x40;
  local_90 = local_84;
  if (local_84 == __src) {
    lVar9 = 0x3f;
  }
  else {
    lVar9 = 0;
    do {
      if (__src[lVar9] == '\0') {
LAB_0346299c:
        iVar8 = (int)lVar9;
joined_r0x034629a0:
        if (0x3f < iVar8) {
          iVar8 = 0x3f;
        }
        goto LAB_034629a8;
      }
      if (__src[lVar9 + 1] == '\0') {
        lVar9 = lVar9 + 1;
        goto LAB_0346299c;
      }
      if (__src[lVar9 + 2] == '\0') {
        iVar8 = (int)lVar9 + 2;
        goto joined_r0x034629a0;
      }
      lVar9 = lVar9 + 3;
    } while (lVar9 != 0x80001);
    iVar8 = 0;
LAB_034629a8:
    memcpy(local_84,__src,(long)iVar8);
    local_84[iVar8] = '\0';
    lVar9 = (long)local_88 + -1;
    __src = local_90;
  }
  puVar1 = PTR_DAT_04bb2bc0;
  local_98 = PTR_DAT_04bb2bc0 + 0x10;
  __src[lVar9] = '\0';
  (**(code **)(puVar1 + 0x28))(&local_98);
  if (local_90 == "NotFound") {
    return (undefined8 *)0x0;
  }
  uVar11 = 0;
  bVar2 = true;
  do {
    if (local_90[uVar11] != "NotFound"[uVar11]) break;
    if (local_90[uVar11] == '\0') {
      if (bVar2) {
        return (undefined8 *)0x0;
      }
      break;
    }
    bVar2 = uVar11 < 0x80000;
    uVar11 = uVar11 + 1;
  } while (uVar11 != 0x80001);
  (**(code **)(local_98 + 0x18))(&local_98);
  lVar9 = DAT_05ae7600;
  if (*local_90 == '\0') {
LAB_03462ae8:
    uVar11 = FUN_0386fd70(&local_98);
    lVar9 = DAT_05ae7600;
    if ((uVar11 & 1) == 0) {
      return (undefined8 *)0x0;
    }
    if (DAT_05ae7600 == 0) {
      puVar5 = malloc(0x68);
    }
    else {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar4 = (long *)(lVar9 + 8);
      if (lVar3 != 0) {
        plVar4 = (long *)(lVar3 + 0xa8);
      }
      plVar4 = (long *)*plVar4;
      if (plVar4 == (long *)0x0) {
        puVar5 = (undefined8 *)0x0;
      }
      else {
        puVar5 = (undefined8 *)(**(code **)(*plVar4 + 0x30))(plVar4,0x68,8);
      }
    }
    ppuVar7 = &local_98;
    ppuVar6 = (undefined **)PTR_PTR_04bb2238;
  }
  else {
    if (*local_90 != '@') {
      uVar11 = 0;
      do {
        uVar10 = uVar11;
        if ((uVar10 == 0x80000) || (local_90[uVar10 + 1] == '\0')) goto LAB_03462ae8;
        uVar11 = uVar10 + 1;
      } while (local_90[uVar10 + 1] != '@');
      if (uVar10 >> 0x13 != 0) goto LAB_03462ae8;
    }
    if (DAT_05ae7600 == 0) {
      puVar5 = malloc(0x68);
    }
    else {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar4 = (long *)(lVar9 + 8);
      if (lVar3 != 0) {
        plVar4 = (long *)(lVar3 + 0xa8);
      }
      plVar4 = (long *)*plVar4;
      if (plVar4 == (long *)0x0) {
        puVar5 = (undefined8 *)0x0;
      }
      else {
        puVar5 = (undefined8 *)(**(code **)(*plVar4 + 0x30))(plVar4,0x68,8);
      }
    }
    ppuVar6 = &local_98;
    ppuVar7 = (undefined **)PTR_PTR_04bb2238;
  }
  FUN_03d7dc60(puVar5,param_2,param_1,ppuVar6,ppuVar7);
  puVar5[0xc] = 0;
  *puVar5 = &PTR_LAB_04aad018;
  return puVar5;
}


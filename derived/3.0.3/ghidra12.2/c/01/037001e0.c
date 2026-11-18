
undefined4 FUN_037001e0(long param_1,uint *param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  int *piVar5;
  ulong uVar6;
  uint *puVar7;
  int iVar8;
  char cVar9;
  uint local_1c [3];
  
  uVar3 = *param_2;
  if ((int)*(uint *)(param_1 + 0x770) < 1) {
    if (*(long *)(param_1 + 0x660) == 0) {
      return 4;
    }
    puVar7 = *(uint **)(*(long *)(param_1 + 0x660) + 8);
    if (puVar7 == (uint *)0x0) {
      return 4;
    }
    if ((uVar3 < *(uint *)(param_1 + 0x678)) &&
       (*(char *)(*(long *)(param_1 + 0x680) + (long)(int)uVar3) == '\0')) {
      return 4;
    }
    if (*puVar7 <= uVar3) {
      return 4;
    }
    if (puVar7[1] == 0) {
      return 4;
    }
    if ((ushort)puVar7[2] == 0) {
      return 4;
    }
    iVar8 = 0xc;
    if (*(char *)((long)puVar7 + 10) != '\0') {
      iVar8 = 0x1c;
    }
    puVar7 = (uint *)((ulong)(puVar7[1] * uVar3 + (uint)(ushort)puVar7[2] * 8 + iVar8) +
                     (long)puVar7);
  }
  else {
    if (*(uint *)(param_1 + 0x770) <= uVar3) {
      return 4;
    }
    if (*(uint *)(param_1 + 0x760) <= uVar3) {
      uVar3 = 0;
    }
    puVar7 = *(uint **)(*(long *)(param_1 + 0x768) + (ulong)uVar3 * 8);
  }
  if (puVar7 == (uint *)0x0) {
    return 4;
  }
  uVar3 = *puVar7;
  if (uVar3 != 0) {
    cVar9 = DAT_05ab98a0;
    do {
      puVar4 = (uint *)(ulong)uVar3;
      if (cVar9 != '\0') {
        if ((int)DAT_05ab98a4 < 0) {
          if ((int)DAT_05ab98a4 == -1) {
            local_1c[0] = 0;
            if (puVar4 != (uint *)0x0) goto LAB_0370028c;
          }
          else {
LAB_03700374:
            local_1c[0] = 0;
          }
          goto LAB_03700378;
        }
        puVar4 = (uint *)((DAT_05ab98a4 & 0xffffffff) + (long)puVar7);
        local_1c[0] = 0;
        if ((puVar4 == (uint *)0x0) || (local_1c[0] = *puVar4, local_1c[0] < 0x51))
        goto LAB_03700378;
        local_1c[0] = 0;
LAB_03700380:
        cVar9 = DAT_05ab98a0;
        goto LAB_0370039c;
      }
      DAT_05ab98a4 = 0xffffffffffffffff;
      DAT_05ab98ac = 0xffffffffffffffff;
      cVar9 = '\x01';
      DAT_05ab98b4 = 0xffffffff;
      puVar4 = (uint *)(ulong)*puVar7;
      DAT_05ab98a0 = '\x01';
      local_1c[0] = 0;
      if (puVar4 == (uint *)0x0) {
LAB_03700378:
        local_1c[1] = 0;
        if (*puVar7 != 0) goto LAB_03700380;
        goto LAB_0370046c;
      }
LAB_0370028c:
      local_1c[0] = 0;
      if (puVar7 == puVar4) goto LAB_03700378;
      lVar1 = 0xc;
      if (*(char *)((long)puVar7 + (10 - (long)puVar4)) != '\0') {
        lVar1 = 0x1c;
      }
      lVar1 = (long)puVar7 + (lVar1 - (long)puVar4);
      if (lVar1 == 0) goto LAB_03700374;
      uVar6 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar4));
      DAT_05ab98a4 = CONCAT44(DAT_05ab98a4._4_4_,0xfffffffe);
      local_1c[0] = 0;
      if (uVar6 == 0) goto LAB_03700378;
      piVar5 = (int *)(lVar1 + 4);
      while (piVar5[-1] != 0x7fc7405e) {
        piVar5 = piVar5 + 2;
        uVar6 = uVar6 - 1;
        if (uVar6 == 0) {
          local_1c[0] = 0;
          goto LAB_03700378;
        }
      }
      iVar8 = 0;
      if (*piVar5 != -1) {
        iVar8 = *piVar5;
      }
      DAT_05ab98a4 = CONCAT44(DAT_05ab98a4._4_4_,iVar8);
      uVar3 = *puVar7;
    } while (uVar3 != 0);
  }
  local_1c[0] = 0;
LAB_037002f8:
  local_1c[1] = 0;
LAB_0370046c:
  if (*puVar7 == 0) {
LAB_03700540:
    local_1c[2] = 0;
  }
  else {
    cVar9 = DAT_05ab98a0;
    do {
      if (cVar9 == '\0') {
        cVar9 = '\x01';
        DAT_05ab98a4 = 0xffffffffffffffff;
        DAT_05ab98ac = 0xffffffffffffffff;
        DAT_05ab98a0 = '\x01';
        DAT_05ab98b4 = 0xffffffff;
      }
      else {
        if (-1 < (int)DAT_05ab98ac) {
          puVar7 = (uint *)((DAT_05ab98ac & 0xffffffff) + (long)puVar7);
          if ((puVar7 == (uint *)0x0) || (local_1c[2] = *puVar7, 0x50 < local_1c[2]))
          goto LAB_03700540;
          goto LAB_03700544;
        }
        if ((int)DAT_05ab98ac != -1) goto LAB_03700540;
      }
      puVar4 = (uint *)(ulong)*puVar7;
      local_1c[2] = 0;
      if ((*puVar7 == 0) || (puVar7 == puVar4)) goto LAB_03700544;
      lVar1 = 0xc;
      if (*(char *)((long)puVar7 + (10 - (long)puVar4)) != '\0') {
        lVar1 = 0x1c;
      }
      lVar1 = (long)puVar7 + (lVar1 - (long)puVar4);
      if (lVar1 == 0) goto LAB_03700540;
      uVar6 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar4));
      DAT_05ab98ac = CONCAT44(DAT_05ab98ac._4_4_,0xfffffffe);
      local_1c[2] = 0;
      if (uVar6 == 0) goto LAB_03700544;
      piVar5 = (int *)(lVar1 + 4);
      while (piVar5[-1] != 0x507133e) {
        piVar5 = piVar5 + 2;
        uVar6 = uVar6 - 1;
        if (uVar6 == 0) {
          local_1c[2] = 0;
          goto LAB_03700544;
        }
      }
      iVar8 = 0;
      if (*piVar5 != -1) {
        iVar8 = *piVar5;
      }
      DAT_05ab98ac = CONCAT44(DAT_05ab98ac._4_4_,iVar8);
    } while (*puVar7 != 0);
    local_1c[2] = 0;
  }
LAB_03700544:
  puVar7 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
  uVar3 = *puVar7 ^ *puVar7 << 0xb;
  uVar2 = puVar7[3];
  *puVar7 = puVar7[1];
  puVar7[1] = puVar7[2];
  uVar3 = uVar3 >> 8 ^ uVar2 >> 0x13 ^ uVar3 ^ uVar2;
  puVar7[2] = uVar2;
  puVar7[3] = uVar3;
  return *(undefined4 *)((long)local_1c + ((ulong)uVar3 + (ulong)uVar3 * 2 >> 0x1e & 0xc));
LAB_0370039c:
  if (cVar9 == '\0') {
    cVar9 = '\x01';
    DAT_05ab98a4 = 0xffffffffffffffff;
    DAT_05ab98ac = 0xffffffffffffffff;
    DAT_05ab98a0 = '\x01';
    DAT_05ab98b4 = 0xffffffff;
    uVar3 = *puVar7;
  }
  else {
    if (-1 < (long)DAT_05ab98a4) {
      local_1c[1] = 0;
      if (((uint *)((ulong)DAT_05ab98a4._4_4_ + (long)puVar7) == (uint *)0x0) ||
         (local_1c[1] = *(uint *)((ulong)DAT_05ab98a4._4_4_ + (long)puVar7), local_1c[1] < 0x51))
      goto LAB_0370046c;
      goto LAB_037002f8;
    }
    if (DAT_05ab98a4._4_4_ != 0xffffffff) goto LAB_037002f8;
    uVar3 = *puVar7;
  }
  if ((uVar3 == 0) || (puVar4 = (uint *)(ulong)uVar3, puVar7 == puVar4)) goto LAB_037002f8;
  lVar1 = 0xc;
  if (*(char *)((long)puVar7 + (10 - (long)puVar4)) != '\0') {
    lVar1 = 0x1c;
  }
  lVar1 = (long)puVar7 + (lVar1 - (long)puVar4);
  if (lVar1 == 0) goto LAB_037002f8;
  uVar6 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar4));
  DAT_05ab98a4 = CONCAT44(0xfffffffe,(int)DAT_05ab98a4);
  if (uVar6 == 0) goto LAB_037002f8;
  piVar5 = (int *)(lVar1 + 4);
  while (piVar5[-1] != 0x38673a8e) {
    piVar5 = piVar5 + 2;
    uVar6 = uVar6 - 1;
    if (uVar6 == 0) goto LAB_037002f8;
  }
  iVar8 = 0;
  if (*piVar5 != -1) {
    iVar8 = *piVar5;
  }
  DAT_05ab98a4 = CONCAT44(iVar8,(int)DAT_05ab98a4);
  if (*puVar7 == 0) goto LAB_037002f8;
  goto LAB_0370039c;
}


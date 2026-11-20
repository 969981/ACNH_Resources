
uint FUN_03f07e00(long param_1,long *param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  undefined *puVar5;
  bool bVar6;
  long *plVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  int iVar11;
  ulong uVar12;
  long lVar13;
  ulong *puVar14;
  undefined *local_70;
  char *local_68;
  
  puVar5 = PTR_DAT_04bb2020;
  local_70 = PTR_DAT_04bb2020 + 0x10;
  local_68 = ":";
  (**(code **)(*param_2 + 0x18))(param_2);
  uVar12 = 0;
  uVar10 = 0xffffffffffffffff;
  do {
    if (*(char *)(param_2[1] + uVar12) == '\0') {
LAB_03f07e94:
      iVar11 = (int)uVar12;
joined_r0x03f07e98:
      if (0 < iVar11) {
        uVar10 = (ulong)((int)uVar12 - 1);
        goto LAB_03f07ea4;
      }
      uVar10 = 0xffffffffffffffff;
      break;
    }
    lVar13 = param_2[1] + uVar12;
    if (*(char *)(lVar13 + 1) == '\0') {
      uVar12 = uVar12 + 1;
      goto LAB_03f07e94;
    }
    if (*(char *)(lVar13 + 2) == '\0') {
      uVar12 = uVar12 + 2;
      iVar11 = (int)uVar12;
      goto joined_r0x03f07e98;
    }
    uVar12 = uVar12 + 3;
  } while (uVar12 != 0x80001);
  goto LAB_03f07efc;
  while( true ) {
    uVar10 = uVar10 - 1;
    iVar11 = (int)uVar12;
    uVar3 = iVar11 - 1;
    uVar12 = (ulong)uVar3;
    if (uVar3 == 0 || iVar11 < 1) break;
LAB_03f07ea4:
    lVar13 = param_2[1];
    (**(code **)(local_70 + 0x18))(&local_70);
    if (((char *)(lVar13 + uVar10) == local_68) || (*(char *)(lVar13 + uVar10) == *local_68))
    goto LAB_03f07efc;
  }
  uVar10 = 0xffffffffffffffff;
LAB_03f07efc:
  (**(code **)(*param_2 + 0x18))(param_2);
  local_70 = puVar5 + 0x10;
  uVar3 = *(uint *)(param_1 + 0x78);
  local_68 = (char *)(param_2[1] + (long)(int)uVar10 + 1);
  if ((int)uVar3 < 1) {
    uVar8 = 0;
  }
  else {
    uVar9 = 0;
    uVar2 = 1;
    do {
      uVar8 = uVar2;
      uVar2 = uVar9;
      if (*(uint *)(param_1 + 0x78) <= uVar9) {
        uVar2 = 0;
      }
      lVar13 = *(long *)(param_1 + 0x80) + (ulong)uVar2 * 0x78;
      plVar7 = (long *)(lVar13 + 0x48);
      (**(code **)(*plVar7 + 0x18))(plVar7);
      (**(code **)(*plVar7 + 0x18))(plVar7);
      puVar14 = (ulong *)(lVar13 + 0x50);
      uVar12 = *puVar14;
      (**(code **)(local_70 + 0x18))(&local_70);
      if ((char *)uVar12 == local_68) {
LAB_03f0802c:
        if (*(uint *)(param_1 + 0x78) <= uVar9) {
          uVar9 = 0;
        }
        local_68 = (char *)(ulong)(*(char *)(*(long *)(param_1 + 0x80) + (ulong)uVar9 * 0x78 + 0x70)
                                  != '\0');
        break;
      }
      uVar12 = 0;
      bVar6 = true;
      lVar13 = *puVar14 + 2;
      do {
        lVar1 = lVar13 + uVar12;
        cVar4 = *(char *)(lVar1 + -2);
        if (cVar4 != *(char *)((long)local_68 + uVar12)) break;
        if (cVar4 == '\0') {
          if (bVar6) goto LAB_03f0802c;
          break;
        }
        cVar4 = *(char *)(lVar1 + -1);
        if (cVar4 != *(char *)((long)local_68 + uVar12 + 1)) break;
        if (cVar4 == '\0') goto LAB_03f0802c;
        cVar4 = *(char *)(lVar13 + uVar12);
        if (cVar4 != *(char *)((long)local_68 + uVar12 + 2)) break;
        if (cVar4 == '\0') goto LAB_03f0802c;
        bVar6 = uVar12 < 0x7fffe;
        uVar12 = uVar12 + 3;
      } while (uVar12 != 0x80001);
      uVar9 = uVar9 + 1;
      uVar8 = (uint)((int)uVar9 < (int)uVar3);
      uVar2 = (uint)((int)uVar9 < (int)uVar3);
    } while (uVar9 != uVar3);
  }
  return uVar8 & (uint)local_68;
}


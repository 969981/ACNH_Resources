
void FUN_00aa0cd0(long *param_1,long param_2,undefined8 param_3)

{
  char *pcVar1;
  char cVar2;
  undefined *puVar3;
  long *plVar4;
  bool bVar5;
  long lVar6;
  ulong uVar7;
  void *__dest;
  void *__src;
  ulong uVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  long *local_80;
  char *local_78;
  undefined *local_70;
  undefined1 *local_68;
  
  puVar3 = PTR_DAT_04bb2020;
  local_80 = (long *)(PTR_DAT_04bb2020 + 0x10);
  local_78 = ":";
  (**(code **)(*param_1 + 0x18))();
  lVar10 = 0;
  do {
    if (*(char *)(param_1[1] + lVar10) == '\0') {
LAB_00aa0d60:
      iVar9 = (int)lVar10;
joined_r0x00aa0d64:
      if (0 < iVar9) {
        lVar11 = 0;
        goto LAB_00aa0d80;
      }
      break;
    }
    lVar11 = param_1[1] + lVar10;
    if (*(char *)(lVar11 + 1) == '\0') {
      lVar10 = lVar10 + 1;
      goto LAB_00aa0d60;
    }
    if (*(char *)(lVar11 + 2) == '\0') {
      lVar10 = lVar10 + 2;
      iVar9 = (int)lVar10;
      goto joined_r0x00aa0d64;
    }
    lVar10 = lVar10 + 3;
  } while (lVar10 != 0x80001);
  goto LAB_00aa0dd0;
  while( true ) {
    lVar11 = plVar4[1] + lVar10;
    if (*(char *)(lVar11 + 1) == '\0') {
      lVar10 = lVar10 + 1;
      goto LAB_00aa0f14;
    }
    if (*(char *)(lVar11 + 2) == '\0') {
      lVar10 = lVar10 + 2;
      goto LAB_00aa0f14;
    }
    lVar10 = lVar10 + 3;
    if (lVar10 == 0x80001) break;
LAB_00aa0e84:
    if (*(char *)(plVar4[1] + lVar10) == '\0') goto LAB_00aa0f14;
  }
  lVar10 = 0;
LAB_00aa0f14:
  if ((-1 < iVar9) && (iVar9 <= (int)lVar10)) {
    pcVar1 = (char *)(local_80[1] + uVar8);
    cVar2 = *pcVar1;
    while (cVar2 != '\0') {
      (**(code **)(local_70 + 0x18))(&local_70);
      uVar7 = 0;
      bVar5 = true;
      cVar2 = *pcVar1;
      do {
        if (local_68[uVar7] == '\0') break;
        if (local_68[uVar7] == cVar2) {
          if (bVar5) goto LAB_00aa0fcc;
          break;
        }
        if (local_68[uVar7 + 1] == '\0') break;
        if (local_68[uVar7 + 1] == cVar2) goto LAB_00aa0fcc;
        if (local_68[uVar7 + 2] == '\0') break;
        if (local_68[uVar7 + 2] == cVar2) goto LAB_00aa0fcc;
        bVar5 = uVar7 < 0x7fffe;
        uVar7 = uVar7 + 3;
      } while (uVar7 != 0x80001);
      uVar8 = uVar8 + 1;
      pcVar1 = (char *)(local_80[1] + uVar8);
      cVar2 = *pcVar1;
    }
LAB_00aa0fcc:
    local_78 = (char *)CONCAT44(local_78._4_4_,(int)uVar8 + 1);
  }
  FUN_0076e020(&local_80,param_2);
  plVar4 = local_80;
  iVar9 = (int)local_78;
  uVar8 = (ulong)local_78 & 0xffffffff;
  (**(code **)(*local_80 + 0x18))(local_80);
  lVar10 = 0;
  do {
    if (*(char *)(plVar4[1] + lVar10) == '\0') goto LAB_00aa103c;
    lVar11 = plVar4[1] + lVar10;
    if (*(char *)(lVar11 + 1) == '\0') {
      lVar10 = lVar10 + 1;
      goto LAB_00aa103c;
    }
    if (*(char *)(lVar11 + 2) == '\0') {
      lVar10 = lVar10 + 2;
      goto LAB_00aa103c;
    }
    lVar10 = lVar10 + 3;
  } while (lVar10 != 0x80001);
  lVar10 = 0;
LAB_00aa103c:
  if (iVar9 < 0) {
    return;
  }
  if ((int)lVar10 < iVar9) {
    return;
  }
  pcVar1 = (char *)(local_80[1] + uVar8);
  cVar2 = *pcVar1;
  do {
    if (cVar2 == '\0') {
      return;
    }
    (**(code **)(local_70 + 0x18))(&local_70);
    uVar7 = 0;
    bVar5 = true;
    cVar2 = *pcVar1;
    do {
      if (local_68[uVar7] == '\0') break;
      if (local_68[uVar7] == cVar2) {
        if (bVar5) {
          return;
        }
        break;
      }
      if (local_68[uVar7 + 1] == '\0') break;
      if (local_68[uVar7 + 1] == cVar2) {
        return;
      }
      if (local_68[uVar7 + 2] == '\0') break;
      if (local_68[uVar7 + 2] == cVar2) {
        return;
      }
      bVar5 = uVar7 < 0x7fffe;
      uVar7 = uVar7 + 3;
    } while (uVar7 != 0x80001);
    uVar8 = uVar8 + 1;
    pcVar1 = (char *)(local_80[1] + uVar8);
    cVar2 = *pcVar1;
  } while( true );
  while (lVar11 = lVar11 + 1, lVar10 != lVar11) {
LAB_00aa0d80:
    lVar6 = param_1[1];
    (*(code *)local_80[3])(&local_80);
    if (((char *)(lVar6 + lVar11) == local_78) || (*(char *)(lVar6 + lVar11) == *local_78)) {
      if (lVar11 != 0xffffffff) {
        local_70 = puVar3 + 0x10;
        local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
        local_68 = &DAT_040addd9;
        local_80 = param_1;
        FUN_0076e020(&local_80,param_3);
        plVar4 = local_80;
        iVar9 = (int)local_78;
        uVar8 = (ulong)local_78 & 0xffffffff;
        (**(code **)(*local_80 + 0x18))(local_80);
        lVar10 = 0;
        goto LAB_00aa0e84;
      }
      break;
    }
  }
LAB_00aa0dd0:
  __dest = *(void **)(param_2 + 8);
  (**(code **)(*param_1 + 0x18))(param_1);
  __src = (void *)param_1[1];
  if (__dest != __src) {
    (**(code **)(*param_1 + 0x18))(param_1);
    lVar10 = 0;
    do {
      if (*(char *)(param_1[1] + lVar10) == '\0') goto LAB_00aa0ec0;
      lVar11 = param_1[1] + lVar10;
      if (*(char *)(lVar11 + 1) == '\0') {
        lVar10 = lVar10 + 1;
        goto LAB_00aa0ec0;
      }
      if (*(char *)(lVar11 + 2) == '\0') {
        lVar10 = lVar10 + 2;
        goto LAB_00aa0ec0;
      }
      lVar10 = lVar10 + 3;
    } while (lVar10 != 0x80001);
    lVar10 = 0;
LAB_00aa0ec0:
    iVar9 = (int)lVar10;
    if (*(int *)(param_2 + 0x10) <= (int)lVar10) {
      iVar9 = *(int *)(param_2 + 0x10) + -1;
    }
    memcpy(__dest,__src,(long)iVar9);
    *(undefined1 *)((long)__dest + (long)iVar9) = 0;
  }
  return;
}


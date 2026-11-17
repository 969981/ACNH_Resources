
undefined8 FUN_02a21700(long *param_1,long *param_2,int param_3,uint *param_4)

{
  char *pcVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  undefined *__src;
  undefined8 *__src_00;
  long lVar7;
  ulong uVar8;
  long lVar9;
  void *pvVar10;
  undefined **ppuVar11;
  undefined *local_98;
  undefined *local_90;
  int local_88;
  undefined local_84 [31];
  undefined1 local_65;
  
  local_65 = 0;
  local_88 = 0x20;
  local_84[0] = 0;
  local_98 = PTR_DAT_04bb2028 + 0x10;
  lVar7 = *(long *)(DAT_055f6860 + 0x19f820);
  local_90 = local_84;
  if (lVar7 != 0) {
    uVar2 = *param_4 & ((int)*param_4 >> 0x1f ^ 0xffffffffU);
    do {
      while ((int)uVar2 < *(int *)(lVar7 + 0x20)) {
        lVar7 = *(long *)(lVar7 + 8);
        if (lVar7 == 0) goto LAB_02a217bc;
      }
      if ((int)uVar2 <= *(int *)(lVar7 + 0x20)) {
        __src = *(undefined **)(lVar7 + 0x40);
        if (local_84 == __src) goto LAB_02a218c8;
        lVar7 = 0;
        goto LAB_02a21840;
      }
      lVar7 = *(long *)(lVar7 + 0x10);
    } while (lVar7 != 0);
  }
LAB_02a217bc:
  (**(code **)(PTR_PTR_04c4b980 + 0x18))(&PTR_PTR_04c4b980);
  __src = PTR_DAT_04c4b988;
  if (local_84 != PTR_DAT_04c4b988) {
    (**(code **)(PTR_PTR_04c4b980 + 0x18))(&PTR_PTR_04c4b980);
    lVar7 = 0;
    do {
      if (PTR_DAT_04c4b988[lVar7] == '\0') goto LAB_02a2187c;
      if (PTR_DAT_04c4b988[lVar7 + 1] == '\0') {
        lVar7 = lVar7 + 1;
        goto LAB_02a2187c;
      }
      if (PTR_DAT_04c4b988[lVar7 + 2] == '\0') {
        lVar7 = lVar7 + 2;
        goto LAB_02a2187c;
      }
      lVar7 = lVar7 + 3;
    } while (lVar7 != 0x80001);
    lVar7 = 0;
LAB_02a2187c:
    iVar5 = (int)lVar7;
    if (local_88 <= (int)lVar7) {
      iVar5 = local_88 + -1;
    }
    goto LAB_02a218bc;
  }
  goto LAB_02a218c8;
  while( true ) {
    if (__src[lVar7 + 1] == '\0') {
      lVar7 = lVar7 + 1;
      goto LAB_02a218a8;
    }
    if (__src[lVar7 + 2] == '\0') {
      lVar7 = lVar7 + 2;
      goto LAB_02a218a8;
    }
    lVar7 = lVar7 + 3;
    if (lVar7 == 0x80001) break;
LAB_02a21840:
    if (__src[lVar7] == '\0') {
LAB_02a218a8:
      iVar5 = (int)lVar7;
      if (0x1f < (int)lVar7) {
        iVar5 = 0x1f;
      }
      goto LAB_02a218bc;
    }
  }
  iVar5 = 0;
LAB_02a218bc:
  memcpy(local_84,__src,(long)iVar5);
  local_84[iVar5] = 0;
LAB_02a218c8:
  (**(code **)(*param_2 + 0x18))(param_2);
  (**(code **)(*param_2 + 0x18))(param_2);
  if ((undefined1 *)param_2[1] == &DAT_0405db6e) {
LAB_02a21940:
    *(undefined1 *)*param_1 = 0;
    *(undefined4 *)(param_1 + 1) = 0;
    uVar2 = 9;
    if (*(int *)((long)param_1 + 0xc) < 10) {
      uVar2 = *(int *)((long)param_1 + 0xc) - 1;
    }
    if (0 < (int)uVar2) {
      pvVar10 = (void *)*param_1;
      memcpy(pvVar10,"BGM_Audio",(ulong)uVar2);
      *(undefined1 *)((long)pvVar10 + (ulong)uVar2) = 0;
      *(uint *)(param_1 + 1) = uVar2;
    }
    FUN_038d17d4(param_1,"_%03d_",*param_4);
    (**(code **)(local_98 + 0x18))(&local_98);
    lVar7 = 0;
    lVar9 = *param_1;
    do {
      pcVar1 = local_90 + lVar7;
      lVar7 = lVar7 + 1;
    } while (*pcVar1 != '\0');
    uVar4 = *(uint *)(param_1 + 1);
    uVar2 = (int)lVar7 - 1;
    if (*(int *)((long)param_1 + 0xc) <= (int)(uVar2 + uVar4)) {
      uVar2 = *(int *)((long)param_1 + 0xc) + ~uVar4;
    }
    if (0 < (int)uVar2) {
      memcpy((void *)(lVar9 + (int)uVar4),local_90,(ulong)uVar2);
      *(undefined1 *)(lVar9 + (int)(uVar2 + uVar4)) = 0;
      *(uint *)(param_1 + 1) = uVar2 + uVar4;
    }
    if (5 < param_3 + 1U) {
      __src_00 = &DAT_0407ebb1;
      goto LAB_02a21b14;
    }
    ppuVar11 = &PTR_s__Unknown_04a999f0 + (param_3 + 1U);
  }
  else {
    uVar8 = 0;
    ppuVar11 = &local_90;
    bVar6 = true;
    do {
      cVar3 = ((undefined1 *)param_2[1])[uVar8];
      if (cVar3 != (&DAT_0405db6e)[uVar8]) break;
      if (cVar3 == '\0') {
        if (bVar6) goto LAB_02a21940;
        break;
      }
      bVar6 = uVar8 < 0x80000;
      uVar8 = uVar8 + 1;
    } while (uVar8 != 0x80001);
    *(undefined1 *)*param_1 = 0;
    *(undefined4 *)(param_1 + 1) = 0;
    uVar2 = 4;
    if (*(int *)((long)param_1 + 0xc) < 5) {
      uVar2 = *(int *)((long)param_1 + 0xc) - 1;
    }
    if (0 < (int)uVar2) {
      pvVar10 = (void *)*param_1;
      memcpy(pvVar10,&DAT_04078778,(ulong)uVar2);
      *(undefined1 *)((long)pvVar10 + (ulong)uVar2) = 0;
      *(uint *)(param_1 + 1) = uVar2;
    }
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar7 = 0;
    lVar9 = *param_1;
    do {
      pcVar1 = (char *)(param_2[1] + lVar7);
      lVar7 = lVar7 + 1;
    } while (*pcVar1 != '\0');
    uVar4 = *(uint *)(param_1 + 1);
    uVar2 = (int)lVar7 - 1;
    if (*(int *)((long)param_1 + 0xc) <= (int)(uVar2 + uVar4)) {
      uVar2 = *(int *)((long)param_1 + 0xc) + ~uVar4;
    }
    if (0 < (int)uVar2) {
      memcpy((void *)(lVar9 + (int)uVar4),(void *)param_2[1],(ulong)uVar2);
      *(undefined1 *)(lVar9 + (int)(uVar2 + uVar4)) = 0;
      *(uint *)(param_1 + 1) = uVar2 + uVar4;
    }
    FUN_038d17d4(param_1,"_%03d_",*param_4);
    (**(code **)(local_98 + 0x18))(&local_98);
  }
  __src_00 = (undefined8 *)*ppuVar11;
LAB_02a21b14:
  lVar9 = *param_1;
  lVar7 = 0;
  do {
    pcVar1 = (char *)((long)__src_00 + lVar7);
    lVar7 = lVar7 + 1;
  } while (*pcVar1 != '\0');
  uVar4 = *(uint *)(param_1 + 1);
  uVar2 = (int)lVar7 - 1;
  if (*(int *)((long)param_1 + 0xc) <= (int)(uVar2 + uVar4)) {
    uVar2 = *(int *)((long)param_1 + 0xc) + ~uVar4;
  }
  if (0 < (int)uVar2) {
    memcpy((void *)(lVar9 + (int)uVar4),__src_00,(ulong)uVar2);
    *(undefined1 *)(lVar9 + (int)(uVar2 + uVar4)) = 0;
    *(uint *)(param_1 + 1) = uVar2 + uVar4;
  }
  return 1;
}



void FUN_03d822b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long *plVar4;
  char *__src;
  int iVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  undefined4 uVar9;
  undefined1 auStack_f8 [88];
  undefined *local_a0;
  char *local_98;
  int local_90;
  char local_8c [63];
  undefined1 local_4d;
  long local_48;
  
  puVar2 = PTR_PTR_04bb2238;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  local_98 = "*GaugeSize";
  local_a0 = puVar1;
  uVar3 = FUN_03c68d44(param_2,&local_a0,PTR_PTR_04bb2238);
  *(undefined8 *)(param_1 + 0x200) = uVar3;
  local_98 = "*GaugeBorder";
  local_a0 = puVar1;
  uVar3 = FUN_03c68d44(param_2,&local_a0,puVar2);
  *(undefined8 *)(param_1 + 0x208) = uVar3;
  local_98 = "*TraceColor";
  local_a0 = puVar1;
  uVar3 = FUN_03c68d44(param_2,&local_a0,puVar2);
  *(undefined8 *)(param_1 + 0x210) = uVar3;
  local_98 = "*State";
  local_a0 = puVar1;
  uVar3 = FUN_03c68d44(param_2,&local_a0,puVar2);
  *(undefined8 *)(param_1 + 0x218) = uVar3;
  FUN_03d6627c(param_1,param_2,param_3);
  plVar4 = *(long **)(param_1 + 0x58);
  local_48 = 0;
  if (plVar4 == (long *)0x0) {
    return;
  }
  (**(code **)(*plVar4 + 0x28))(plVar4,&local_48);
  if (local_48 == 0) {
    return;
  }
  plVar4 = (long *)(local_48 + 0xb8);
  if (*plVar4 == 0) {
    return;
  }
  __src = (char *)FUN_00364e30(plVar4,"StateLoop");
  if (__src != (char *)0x0) {
    lVar7 = 0;
    do {
      if (__src[lVar7] == '\0') {
LAB_03d82408:
        if (3 < (int)lVar7) {
          local_4d = 0;
          local_90 = 0x40;
          local_98 = local_8c;
          if (local_8c != __src) {
            lVar7 = 0;
            goto LAB_03d82434;
          }
          lVar7 = 0x3f;
          goto LAB_03d824a4;
        }
        break;
      }
      if (__src[lVar7 + 1] == '\0') {
        lVar7 = lVar7 + 1;
        goto LAB_03d82408;
      }
      if (__src[lVar7 + 2] == '\0') {
        lVar7 = lVar7 + 2;
        goto LAB_03d82408;
      }
      lVar7 = lVar7 + 3;
    } while (lVar7 != 0x80001);
  }
  goto LAB_03d82600;
  while( true ) {
    if (__src[lVar7 + 1] == '\0') {
      lVar7 = lVar7 + 1;
      goto LAB_03d82478;
    }
    if (__src[lVar7 + 2] == '\0') {
      lVar7 = lVar7 + 2;
      goto LAB_03d82478;
    }
    lVar7 = lVar7 + 3;
    if (lVar7 == 0x80001) break;
LAB_03d82434:
    if (__src[lVar7] == '\0') {
LAB_03d82478:
      iVar5 = (int)lVar7;
      if (0x3f < iVar5) {
        iVar5 = 0x3f;
      }
      goto LAB_03d82484;
    }
  }
  iVar5 = 0;
LAB_03d82484:
  memcpy(local_8c,__src,(long)iVar5);
  local_8c[iVar5] = '\0';
  lVar7 = (long)local_90 + -1;
  __src = local_98;
LAB_03d824a4:
  puVar1 = PTR_DAT_04bb2bc0;
  lVar8 = 0;
  local_a0 = PTR_DAT_04bb2bc0 + 0x10;
  __src[lVar7] = '\0';
  do {
    if (local_98[lVar8] == '\0') goto LAB_03d824fc;
    if (local_98[lVar8 + 1] == '\0') {
      lVar8 = lVar8 + 1;
      goto LAB_03d824fc;
    }
    if (local_98[lVar8 + 2] == '\0') {
      lVar8 = lVar8 + 2;
      goto LAB_03d824fc;
    }
    lVar8 = lVar8 + 3;
  } while (lVar8 != 0x80001);
  lVar8 = 0;
LAB_03d824fc:
  iVar6 = (int)lVar8;
  iVar5 = iVar6;
  if (2 < iVar6) {
    iVar5 = 3;
  }
  local_98[iVar6 - iVar5] = '\0';
  (**(code **)(puVar1 + 0x28))(&local_a0);
  FUN_0071b954(auStack_f8,"%s_%02d",local_98,0);
  puVar1 = PTR_PTR_04bb2238;
  uVar3 = FUN_03c68d44(param_2,auStack_f8,PTR_PTR_04bb2238);
  *(undefined8 *)(param_1 + 0x220) = uVar3;
  (**(code **)(local_a0 + 0x18))(&local_a0);
  FUN_0071b954(auStack_f8,"%s_%02d",local_98,1);
  uVar3 = FUN_03c68d44(param_2,auStack_f8,puVar1);
  *(undefined8 *)(param_1 + 0x228) = uVar3;
  (**(code **)(local_a0 + 0x18))(&local_a0);
  FUN_0071b954(auStack_f8,"%s_%02d",local_98,2);
  uVar3 = FUN_03c68d44(param_2,auStack_f8,puVar1);
  *(undefined8 *)(param_1 + 0x230) = uVar3;
  (**(code **)(local_a0 + 0x18))(&local_a0);
  FUN_0071b954(auStack_f8,"%s_%02d",local_98,3);
  uVar3 = FUN_03c68d44(param_2,auStack_f8,puVar1);
  *(undefined8 *)(param_1 + 0x238) = uVar3;
LAB_03d82600:
  lVar7 = FUN_00364ec0(plVar4,"TracingSpeed");
  if ((lVar7 != 0) && (*(char *)(lVar7 + 10) == '\x02')) {
    if (*(short *)(lVar7 + 8) == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = *(undefined4 *)(lVar7 + (ulong)*(uint *)(lVar7 + 4));
    }
    *(undefined4 *)(param_1 + 0x24c) = uVar9;
  }
  lVar7 = FUN_00364ec0(plVar4,"TracingFraction");
  if ((lVar7 != 0) && (*(char *)(lVar7 + 10) == '\x02')) {
    if (*(short *)(lVar7 + 8) == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = *(undefined4 *)(lVar7 + (ulong)*(uint *)(lVar7 + 4));
    }
    *(undefined4 *)(param_1 + 0x250) = uVar9;
  }
  lVar7 = FUN_00364ec0(plVar4,"TracingWait");
  if ((lVar7 != 0) && (*(char *)(lVar7 + 10) == '\x02')) {
    if (*(short *)(lVar7 + 8) == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = *(undefined4 *)(lVar7 + (ulong)*(uint *)(lVar7 + 4));
    }
    *(undefined4 *)(param_1 + 600) = uVar9;
  }
  return;
}


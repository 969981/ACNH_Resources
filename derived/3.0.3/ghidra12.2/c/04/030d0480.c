
void FUN_030d0480(long param_1,undefined8 *param_2,long *param_3)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined1 *__src;
  undefined *local_a8;
  char *local_a0;
  int local_98;
  undefined1 local_94 [63];
  undefined1 local_55;
  
  local_a8 = PTR_DAT_04bb2020 + 0x10;
  local_a0 = "_";
  (**(code **)(*param_3 + 0x18))(param_3);
  lVar4 = 0;
  do {
    if (*(char *)(param_3[1] + lVar4) == '\0') {
LAB_030d0510:
      iVar3 = (int)lVar4;
joined_r0x030d0514:
      if (0 < iVar3) {
        uVar8 = (ulong)(iVar3 - 1);
        goto LAB_030d0530;
      }
      break;
    }
    lVar5 = param_3[1] + lVar4;
    if (*(char *)(lVar5 + 1) == '\0') {
      lVar4 = lVar4 + 1;
      goto LAB_030d0510;
    }
    if (*(char *)(lVar5 + 2) == '\0') {
      iVar3 = (int)lVar4 + 2;
      goto joined_r0x030d0514;
    }
    lVar4 = lVar4 + 3;
  } while (lVar4 != 0x80001);
  goto LAB_030d0650;
  while (uVar8 = uVar8 - 1, 0 < (int)uVar8 + 1) {
LAB_030d0530:
    lVar4 = param_3[1];
    (**(code **)(local_a8 + 0x18))(&local_a8);
    if (((char *)(lVar4 + uVar8) == local_a0) || (*(char *)(lVar4 + uVar8) == *local_a0)) {
      if (0 < (int)uVar8) {
        (**(code **)(*param_3 + 0x18))(param_3);
        lVar4 = 0;
        goto LAB_030d05a0;
      }
      break;
    }
  }
  goto LAB_030d0650;
  while( true ) {
    lVar5 = param_3[1] + lVar4;
    if (*(char *)(lVar5 + 1) == '\0') {
      lVar4 = lVar4 + 1;
      goto LAB_030d05dc;
    }
    if (*(char *)(lVar5 + 2) == '\0') {
      lVar4 = lVar4 + 2;
      goto LAB_030d05dc;
    }
    lVar4 = lVar4 + 3;
    if (lVar4 == 0x80001) break;
LAB_030d05a0:
    if (*(char *)(param_3[1] + lVar4) == '\0') goto LAB_030d05dc;
  }
  lVar4 = 0;
LAB_030d05dc:
  iVar3 = (int)lVar4 - (int)uVar8;
  (**(code **)(*param_3 + 0x18))(param_3);
  lVar5 = param_3[1];
  lVar4 = 0;
  do {
    if (*(char *)(lVar5 + lVar4) == '\0') goto LAB_030d063c;
    if (*(char *)(lVar5 + lVar4 + 1) == '\0') {
      lVar4 = lVar4 + 1;
      goto LAB_030d063c;
    }
    if (*(char *)(lVar5 + lVar4 + 2) == '\0') {
      lVar4 = lVar4 + 2;
      goto LAB_030d063c;
    }
    lVar4 = lVar4 + 3;
  } while (lVar4 != 0x80001);
  lVar4 = 0;
LAB_030d063c:
  if (-1 < iVar3) {
    iVar6 = (int)lVar4;
    iVar1 = iVar6;
    if (iVar3 <= iVar6) {
      iVar1 = iVar3;
    }
    *(undefined1 *)(lVar5 + (iVar6 - iVar1)) = 0;
  }
LAB_030d0650:
  puVar2 = PTR_PTR_04bb2238;
  local_55 = 0;
  local_98 = 0x40;
  local_a8 = PTR_DAT_04bb2f70 + 0x10;
  local_a0 = local_94;
  (**(code **)(*(long *)PTR_PTR_04bb2238 + 0x18))(PTR_PTR_04bb2238);
  __src = *(undefined1 **)(puVar2 + 8);
  if (local_94 != __src) {
    (**(code **)(*(long *)puVar2 + 0x18))(puVar2);
    lVar4 = 0;
    do {
      if (*(char *)(*(long *)(puVar2 + 8) + lVar4) == '\0') goto LAB_030d06ec;
      lVar5 = *(long *)(puVar2 + 8) + lVar4;
      if (*(char *)(lVar5 + 1) == '\0') {
        lVar4 = lVar4 + 1;
        goto LAB_030d06ec;
      }
      if (*(char *)(lVar5 + 2) == '\0') {
        lVar4 = lVar4 + 2;
        goto LAB_030d06ec;
      }
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
    lVar4 = 0;
LAB_030d06ec:
    iVar3 = (int)lVar4;
    if (local_98 <= (int)lVar4) {
      iVar3 = local_98 + -1;
    }
    memcpy(local_94,__src,(long)iVar3);
    local_94[iVar3] = 0;
  }
  local_a8 = PTR_DAT_04bb2bc0 + 0x10;
  *local_a0 = 0;
  (**(code **)(*(long *)(param_1 + 0x18) + 0x18))((long *)(param_1 + 0x18));
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  (**(code **)(*param_3 + 0x18))(param_3);
  FUN_038d1270(&local_a8,"%s/%s_%02d",uVar7,param_3[1],0);
  uVar7 = FUN_02bb2508(param_1 + 0x38,&local_a8);
  *param_2 = uVar7;
  return;
}


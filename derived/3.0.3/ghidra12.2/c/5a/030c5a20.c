
void FUN_030c5a20(undefined8 param_1,uint param_2)

{
  char *pcVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined *local_b8;
  char *local_b0;
  undefined4 local_a8;
  undefined1 local_a4 [63];
  undefined1 local_65;
  
  puVar2 = PTR_DAT_04bb2bc0;
  if ((int)param_2 < 0x34) {
    if (param_2 < 0x34) {
      puVar5 = (undefined8 *)(&PTR_DAT_049270f0)[param_2];
    }
    else {
      puVar5 = &DAT_0407ebb1;
    }
    lVar4 = 0;
    local_b8 = PTR_DAT_04bb2020 + 0x10;
    local_b0 = "Bite";
    do {
      if (*(char *)((long)puVar5 + lVar4) == '\0') {
LAB_030c5b00:
        iVar3 = (int)lVar4;
joined_r0x030c5b04:
        if (3 < iVar3) {
          uVar6 = 0;
          goto LAB_030c5b30;
        }
        break;
      }
      if (*(char *)((long)puVar5 + lVar4 + 1) == '\0') {
        lVar4 = lVar4 + 1;
        goto LAB_030c5b00;
      }
      if (*(char *)((long)puVar5 + lVar4 + 2) == '\0') {
        iVar3 = (int)lVar4 + 2;
        goto joined_r0x030c5b04;
      }
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
    goto LAB_030c5ba4;
  }
  puVar5 = &DAT_0407ebb1;
  goto LAB_030c5be4;
  while( true ) {
    if (*(char *)((long)puVar5 + lVar4 + 4) == '\0') {
      lVar4 = lVar4 + 1;
      goto LAB_030c5cb8;
    }
    if (*(char *)((long)puVar5 + lVar4 + 5) == '\0') {
      lVar4 = lVar4 + 2;
      goto LAB_030c5cb8;
    }
    lVar4 = lVar4 + 3;
    if (lVar4 == 0x80001) break;
LAB_030c5c50:
    if (*(char *)((long)puVar5 + lVar4 + 3) == '\0') goto LAB_030c5cb8;
  }
  lVar4 = 0;
LAB_030c5cb8:
  iVar3 = (int)lVar4;
  if (0x3e < iVar3) {
    iVar3 = 0x3f;
  }
  memcpy(local_b0,(undefined1 *)((long)puVar5 + 3),(long)iVar3);
  local_a4[iVar3] = 0;
  goto LAB_030c5cdc;
  while (uVar6 = uVar6 + 1, iVar3 - 3 != uVar6) {
LAB_030c5b30:
    pcVar1 = (char *)((long)puVar5 + uVar6);
    (**(code **)(local_b8 + 0x18))(&local_b8);
    if ((pcVar1 == local_b0) ||
       ((*pcVar1 == *local_b0 &&
        ((*pcVar1 == '\0' ||
         ((pcVar1[1] == local_b0[1] &&
          ((pcVar1[1] == '\0' ||
           ((pcVar1[2] == local_b0[2] && ((pcVar1[2] == '\0' || (pcVar1[3] == local_b0[3])))))))))))
        ))) {
      if ((int)uVar6 != -1) {
        FUN_038d13f0(param_1,&DAT_040ab443);
        return;
      }
      break;
    }
  }
LAB_030c5ba4:
  if (param_2 < 0x34) {
    puVar5 = (undefined8 *)(&PTR_DAT_049270f0)[param_2];
  }
  else {
    puVar5 = &DAT_0407ebb1;
  }
LAB_030c5be4:
  local_65 = 0;
  local_a8 = 0x40;
  local_b8 = puVar2 + 0x10;
  local_b0 = local_a4;
  lVar4 = 0;
  local_a4[0] = 0;
  do {
    if (*(char *)((long)puVar5 + lVar4) == '\0') {
LAB_030c5c2c:
      if ((3 < (int)lVar4) && (local_b0 != (undefined1 *)((long)puVar5 + 3))) {
        lVar4 = 0;
        goto LAB_030c5c50;
      }
      break;
    }
    if (*(char *)((long)puVar5 + lVar4 + 1) == '\0') {
      lVar4 = lVar4 + 1;
      goto LAB_030c5c2c;
    }
    if (*(char *)((long)puVar5 + lVar4 + 2) == '\0') {
      lVar4 = lVar4 + 2;
      goto LAB_030c5c2c;
    }
    lVar4 = lVar4 + 3;
  } while (lVar4 != 0x80001);
LAB_030c5cdc:
  (**(code **)(local_b8 + 0x18))(&local_b8);
  FUN_038d13f0(param_1,&DAT_040e636e,local_b0);
  return;
}



long FUN_02c007f0(long param_1,long *param_2,long param_3)

{
  undefined *puVar1;
  long *plVar2;
  int iVar3;
  undefined1 *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined1 *__src;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined **local_2f0;
  undefined8 uStack_2e8;
  undefined **local_2e0;
  undefined1 *puStack_2d8;
  long *local_2d0;
  undefined1 local_2c8;
  undefined4 local_2c4;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined *local_2b0;
  undefined1 *local_2a8;
  int local_2a0;
  undefined1 local_29c [255];
  undefined1 local_19d;
  undefined *local_198;
  undefined1 *local_190;
  undefined4 local_188;
  undefined1 local_184 [255];
  undefined1 local_85;
  long *local_80;
  long *plStack_78;
  undefined **local_70;
  undefined8 uStack_68;
  undefined **local_60;
  undefined1 *puStack_58;
  
  local_85 = 0;
  local_188 = 0x100;
  local_184[0] = 0;
  local_190 = local_184;
  puVar1 = PTR_DAT_04bb21f8 + 0x10;
  local_198 = puVar1;
  if (param_2[3] != 0) {
    FUN_03c907b0(&local_198);
  }
  local_2a0 = 0x100;
  local_19d = 0;
  local_29c[0] = 0;
  local_2b0 = puVar1;
  local_2a8 = local_29c;
  if (*(char *)(param_3 + 0x1f8) == '\0') {
    (**(code **)(local_198 + 0x18))(&local_198);
    puVar4 = local_190;
    if (local_29c != local_190) {
      (**(code **)(local_198 + 0x18))(&local_198);
      lVar8 = 0;
      do {
        if (local_190[lVar8] == '\0') goto LAB_02c009a0;
        if (local_190[lVar8 + 1] == '\0') {
          lVar8 = lVar8 + 1;
          goto LAB_02c009a0;
        }
        if (local_190[lVar8 + 2] == '\0') {
          lVar8 = lVar8 + 2;
          goto LAB_02c009a0;
        }
        lVar8 = lVar8 + 3;
      } while (lVar8 != 0x80001);
      lVar8 = 0;
LAB_02c009a0:
      iVar3 = (int)lVar8;
      if (local_2a0 <= (int)lVar8) {
        iVar3 = local_2a0 + -1;
      }
      memcpy(local_29c,puVar4,(long)iVar3);
      local_29c[iVar3] = 0;
    }
  }
  else {
    (**(code **)(*(long *)(param_3 + 0x18) + 0x18))((long *)(param_3 + 0x18));
    puVar4 = local_2a8;
    __src = *(undefined1 **)(param_3 + 0x20);
    if (local_2a8 != __src) {
      lVar8 = 0;
      do {
        if (__src[lVar8] == '\0') goto LAB_02c0094c;
        if (__src[lVar8 + 1] == '\0') {
          lVar8 = lVar8 + 1;
          goto LAB_02c0094c;
        }
        if (__src[lVar8 + 2] == '\0') {
          lVar8 = lVar8 + 2;
          goto LAB_02c0094c;
        }
        lVar8 = lVar8 + 3;
      } while (lVar8 != 0x80001);
      lVar8 = 0;
LAB_02c0094c:
      iVar3 = (int)lVar8;
      if (local_2a0 <= (int)lVar8) {
        iVar3 = local_2a0 + -1;
      }
      memcpy(local_2a8,__src,(long)iVar3);
      puVar4[iVar3] = 0;
    }
    lVar8 = 0;
    if (param_2[3] != 0) {
      lVar8 = param_2[3] + 0xb0;
    }
    FUN_038d13f0(&local_2b0,&DAT_04073443,lVar8);
  }
  uStack_2e8 = *(undefined8 *)(param_1 + 0x48);
  local_2f0 = &PTR_LAB_048f9770;
  local_2e0 = &PTR_LAB_048f9770;
  puStack_2d8 = local_2a8;
  local_2d0 = (long *)0x0;
  if (param_2[3] != 0) {
    local_2d0 = (long *)0x0;
    if (*(long *)(*param_2 + 0xb8) != 0) {
      local_2d0 = (long *)(*param_2 + 0xb8);
    }
  }
  local_2c8 = *(undefined1 *)(param_3 + 0x1f8);
  local_2c4 = *(undefined4 *)(param_1 + 0x158);
  local_2c0 = *(undefined8 *)(param_1 + 0x160);
  uStack_2b8 = *(undefined8 *)(param_1 + 0x168);
  plVar5 = (long *)FUN_02c04e2c(param_3,&local_2b0,&local_2f0);
  if (*(long *)(param_1 + 0x38) != 0) {
    plVar5[6] = *(long *)(param_1 + 0x38);
  }
  if (*(char *)(param_1 + 0x171) == '\0') {
    FUN_03c684c0(plVar5,param_1 + 0x40,&local_198,0);
    puVar6 = *(undefined8 **)(param_1 + 0x10);
  }
  else {
    puVar6 = *(undefined8 **)(param_1 + 0x10);
  }
  if (puVar6 != (undefined8 *)0x0) {
    plStack_78 = plVar5 + 8;
    uStack_68 = *(undefined8 *)(param_1 + 0x48);
    local_70 = &PTR_LAB_048f9770;
    local_60 = &PTR_LAB_048f9770;
    local_80 = plVar5;
    puStack_58 = local_2a8;
    (**(code **)*puVar6)(puVar6,&local_80);
  }
  lVar8 = DAT_05ae7600;
  lVar9 = plVar5[3];
  lVar10 = plVar5[7];
  if (*(long *)(lVar9 + 0x250) == 0) {
    if (DAT_05ae7600 == 0) {
      puVar6 = malloc(0x20);
    }
    else {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      puVar6 = (undefined8 *)(lVar8 + 8);
      if (lVar7 != 0) {
        puVar6 = (undefined8 *)(lVar7 + 0xa8);
      }
      puVar6 = (undefined8 *)(**(code **)(*(long *)*puVar6 + 0x30))((long *)*puVar6,0x20,8);
    }
    puVar6[2] = puVar6 + 1;
    puVar6[3] = 0x20800000000;
    *puVar6 = &PTR_LAB_04b2b230;
    puVar6[1] = puVar6 + 1;
    *(undefined8 **)(lVar9 + 0x250) = puVar6;
  }
  FUN_030bc030(lVar9,plVar5,lVar10);
  FUN_03c5d720(plVar5[3]);
  plVar5[3] = 0;
  plVar2 = (long *)((long)*(int *)(param_3 + 0x8c) + (long)plVar5);
  if (*plVar2 != 0) {
    *(long *)(*plVar2 + 8) = plVar2[1];
  }
  if ((long *)plVar2[1] != (long *)0x0) {
    *(long *)plVar2[1] = *plVar2;
  }
  *plVar2 = 0;
  plVar2[1] = 0;
  *(int *)(param_3 + 0x88) = *(int *)(param_3 + 0x88) + -1;
  (**(code **)(*plVar5 + 8))(plVar5);
  return lVar9;
}



void FUN_0383a0e0(long param_1,undefined1 *param_2,undefined1 param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long *plVar6;
  undefined8 local_250;
  undefined ***local_248;
  undefined8 uStack_240;
  undefined **local_238;
  undefined1 local_230;
  undefined1 local_22f;
  undefined1 local_22e;
  undefined8 local_228;
  undefined8 uStack_220;
  long local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined *local_1f8;
  char *pcStack_1f0;
  undefined *local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined1 local_1c8;
  undefined1 local_1c7;
  undefined8 local_1c0;
  undefined *puStack_1b8;
  undefined1 *local_1b0;
  int local_1a8;
  undefined1 local_1a4 [127];
  undefined1 local_125;
  undefined *local_120;
  undefined1 *local_118;
  int local_110;
  undefined1 local_10c [127];
  undefined1 local_8d;
  undefined *local_88;
  undefined1 *local_80;
  int local_78;
  undefined1 local_74 [31];
  undefined1 local_55;
  
  local_125 = 0;
  local_238 = &PTR_LAB_04b5d938;
  local_1a8 = 0x80;
  uStack_210 = 0;
  local_118 = local_10c;
  local_10c[0] = 0;
  local_1a4[0] = 0;
  local_110 = 0x80;
  local_1f8 = PTR_DAT_04bb2020 + 0x10;
  local_1e8 = PTR_DAT_04bcb3b8 + 0x10;
  local_8d = 0;
  local_74[0] = 0;
  puStack_1b8 = PTR_DAT_04bb2d88 + 0x10;
  local_78 = 0x20;
  local_80 = local_74;
  local_55 = 0;
  uStack_1e0 = 0;
  plVar6 = (long *)(param_2 + 0x20);
  local_88 = PTR_DAT_04bb2028 + 0x10;
  local_208 = 0;
  uStack_200 = 0;
  local_228 = *(undefined8 *)(param_1 + 0x50);
  uStack_220 = 0;
  local_218 = param_1 + 0x210;
  local_22e = 1;
  local_230 = 1;
  pcStack_1f0 = "CreateObjectInstance";
  local_1d8 = *(undefined8 *)(param_2 + 0x10);
  uStack_1d0 = *(undefined8 *)(param_2 + 0x50);
  local_1c8 = *param_2;
  local_1c7 = param_2[1];
  local_1c0 = *(undefined8 *)(param_2 + 0x18);
  local_22f = param_3;
  local_1b0 = local_1a4;
  local_120 = puStack_1b8;
  (**(code **)(*plVar6 + 0x18))(plVar6);
  puVar4 = *(undefined1 **)(param_2 + 0x28);
  if (local_1a4 != puVar4) {
    (**(code **)(*(long *)(param_2 + 0x20) + 0x18))(plVar6);
    lVar3 = 0;
    do {
      if (*(char *)(*(long *)(param_2 + 0x28) + lVar3) == '\0') goto LAB_0383a26c;
      lVar1 = *(long *)(param_2 + 0x28) + lVar3;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar3 = lVar3 + 1;
        goto LAB_0383a26c;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar3 = lVar3 + 2;
        goto LAB_0383a26c;
      }
      lVar3 = lVar3 + 3;
    } while (lVar3 != 0x80001);
    lVar3 = 0;
LAB_0383a26c:
    iVar2 = (int)lVar3;
    if (local_1a8 <= (int)lVar3) {
      iVar2 = local_1a8 + -1;
    }
    memcpy(local_1a4,puVar4,(long)iVar2);
    local_1a4[iVar2] = 0;
  }
  puVar4 = local_118;
  plVar6 = (long *)(param_2 + 0x30);
  (**(code **)(*plVar6 + 0x18))(plVar6);
  puVar5 = *(undefined1 **)(param_2 + 0x38);
  if (puVar4 != puVar5) {
    (**(code **)(*(long *)(param_2 + 0x30) + 0x18))(plVar6);
    lVar3 = 0;
    do {
      if (*(char *)(*(long *)(param_2 + 0x38) + lVar3) == '\0') goto LAB_0383a30c;
      lVar1 = *(long *)(param_2 + 0x38) + lVar3;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar3 = lVar3 + 1;
        goto LAB_0383a30c;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar3 = lVar3 + 2;
        goto LAB_0383a30c;
      }
      lVar3 = lVar3 + 3;
    } while (lVar3 != 0x80001);
    lVar3 = 0;
LAB_0383a30c:
    iVar2 = (int)lVar3;
    if (local_110 <= (int)lVar3) {
      iVar2 = local_110 + -1;
    }
    memcpy(puVar4,puVar5,(long)iVar2);
    puVar4[iVar2] = 0;
  }
  puVar4 = local_80;
  plVar6 = (long *)(param_2 + 0x40);
  (**(code **)(*plVar6 + 0x18))(plVar6);
  puVar5 = *(undefined1 **)(param_2 + 0x48);
  if (puVar4 != puVar5) {
    (**(code **)(*(long *)(param_2 + 0x40) + 0x18))(plVar6);
    lVar3 = 0;
    do {
      if (*(char *)(*(long *)(param_2 + 0x48) + lVar3) == '\0') goto LAB_0383a3ac;
      lVar1 = *(long *)(param_2 + 0x48) + lVar3;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar3 = lVar3 + 1;
        goto LAB_0383a3ac;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar3 = lVar3 + 2;
        goto LAB_0383a3ac;
      }
      lVar3 = lVar3 + 3;
    } while (lVar3 != 0x80001);
    lVar3 = 0;
LAB_0383a3ac:
    iVar2 = (int)lVar3;
    if (local_78 <= (int)lVar3) {
      iVar2 = local_78 + -1;
    }
    memcpy(puVar4,puVar5,(long)iVar2);
    puVar4[iVar2] = 0;
  }
  uStack_240 = *(undefined8 *)(param_2 + 0x50);
  local_248 = &local_238;
  local_250 = 0;
  FUN_03f45184(param_1 + 0x58,&local_250);
  return;
}


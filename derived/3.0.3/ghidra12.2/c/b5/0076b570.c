
bool FUN_0076b570(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  undefined1 *__src;
  undefined1 *puVar5;
  long *plVar6;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined4 local_128;
  undefined8 local_124;
  undefined8 local_11c;
  undefined *local_110;
  undefined1 *local_108;
  int local_100;
  undefined1 auStack_fc [127];
  undefined1 local_7d;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68;
  
  local_140 = *param_3;
  local_138 = param_3[1];
  local_130 = param_3[2];
  local_7d = 0;
  local_128 = *(undefined4 *)(param_3 + 3);
  local_124 = *(undefined8 *)((long)param_3 + 0x1c);
  local_100 = 0x80;
  local_11c = *(undefined8 *)((long)param_3 + 0x24);
  plVar6 = param_3 + 6;
  local_110 = PTR_DAT_04bb2e90 + 0x10;
  local_108 = auStack_fc;
  (**(code **)(*plVar6 + 0x18))(plVar6);
  puVar5 = (undefined1 *)param_3[7];
  if (auStack_fc != puVar5) {
    (**(code **)(param_3[6] + 0x18))(plVar6);
    lVar4 = 0;
    do {
      if (*(char *)(param_3[7] + lVar4) == '\0') goto LAB_0076b66c;
      lVar1 = param_3[7] + lVar4;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar4 = lVar4 + 1;
        goto LAB_0076b66c;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar4 = lVar4 + 2;
        goto LAB_0076b66c;
      }
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
    lVar4 = 0;
LAB_0076b66c:
    iVar3 = (int)lVar4;
    if (local_100 <= (int)lVar4) {
      iVar3 = local_100 + -1;
    }
    memcpy(auStack_fc,puVar5,(long)iVar3);
    auStack_fc[iVar3] = 0;
  }
  puVar5 = local_108;
  local_78 = param_3[0x19];
  uStack_70 = param_3[0x1a];
  local_68 = *(undefined1 *)(param_3 + 0x1b);
  local_140 = *param_2;
  local_110 = PTR_DAT_04bb2d88 + 0x10;
  local_130 = param_2[2];
  local_128 = *(undefined4 *)(param_2 + 3);
  local_138 = param_2[1];
  plVar6 = param_2 + 6;
  local_124 = *(undefined8 *)((long)param_2 + 0x1c);
  local_11c = *(undefined8 *)((long)param_2 + 0x24);
  (**(code **)(*plVar6 + 0x18))(plVar6);
  __src = (undefined1 *)param_2[7];
  if (puVar5 != __src) {
    (**(code **)(param_2[6] + 0x18))(plVar6);
    lVar4 = 0;
    do {
      if (*(char *)(param_2[7] + lVar4) == '\0') goto LAB_0076b75c;
      lVar1 = param_2[7] + lVar4;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar4 = lVar4 + 1;
        goto LAB_0076b75c;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar4 = lVar4 + 2;
        goto LAB_0076b75c;
      }
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
    lVar4 = 0;
LAB_0076b75c:
    iVar3 = (int)lVar4;
    if (local_100 <= (int)lVar4) {
      iVar3 = local_100 + -1;
    }
    memcpy(puVar5,__src,(long)iVar3);
    puVar5[iVar3] = 0;
  }
  local_78 = param_2[0x19];
  uStack_70 = param_2[0x1a];
  bVar2 = true;
  if ((*(int *)(param_1 + 0xc) != 0) && (*(int *)(param_1 + 8) != -1)) {
    *(undefined1 *)(param_1 + 0x54) = 1;
    *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_1 + 0xa0);
    *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0x9c);
    *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_1 + 0xa8);
    *(undefined1 *)(param_1 + 0xc4) = *(undefined1 *)(param_1 + 0xac);
    iVar3 = FUN_0076b954(param_1,(undefined4 *)(param_1 + 0x9c),&local_140,0,0,1,0,local_68,0);
    bVar2 = iVar3 != 0;
  }
  return bVar2;
}


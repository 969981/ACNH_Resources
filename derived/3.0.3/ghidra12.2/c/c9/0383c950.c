
void FUN_0383c950(long param_1,long param_2)

{
  long lVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined1 *__src;
  long *plVar7;
  undefined1 local_1d4 [127];
  undefined1 local_155;
  undefined *local_150;
  undefined1 *local_148;
  int local_140;
  undefined1 local_13c [127];
  undefined1 local_bd;
  undefined *local_b8;
  undefined1 *puStack_b0;
  int local_a8;
  undefined1 local_a4 [31];
  undefined1 local_85;
  undefined *local_80;
  undefined8 uStack_78;
  undefined *local_70;
  undefined1 *puStack_68;
  undefined *local_60;
  undefined1 *puStack_58;
  
  local_155 = 0;
  local_1d4[0] = 0;
  local_bd = 0;
  local_140 = 0x80;
  local_148 = local_13c;
  local_150 = PTR_DAT_04bb2d88 + 0x10;
  local_13c[0] = 0;
  local_a8 = 0x20;
  local_a4[0] = 0;
  local_b8 = PTR_DAT_04bb2028 + 0x10;
  local_85 = 0;
  uVar4 = *(undefined8 *)(param_2 + 8);
  puStack_b0 = local_a4;
  (**(code **)(*(long *)(param_2 + 0x140) + 0x18))(param_2 + 0x140);
  puVar6 = *(undefined1 **)(param_2 + 0x148);
  if (local_a4 != puVar6) {
    (**(code **)(*(long *)(param_2 + 0x140) + 0x18))(param_2 + 0x140);
    lVar5 = 0;
    do {
      if (*(char *)(*(long *)(param_2 + 0x148) + lVar5) == '\0') goto LAB_0383ca60;
      lVar1 = *(long *)(param_2 + 0x148) + lVar5;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar5 = lVar5 + 1;
        goto LAB_0383ca60;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar5 = lVar5 + 2;
        goto LAB_0383ca60;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_0383ca60:
    iVar2 = (int)lVar5;
    if (local_a8 <= (int)lVar5) {
      iVar2 = local_a8 + -1;
    }
    memcpy(local_a4,puVar6,(long)iVar2);
    local_a4[iVar2] = 0;
  }
  puVar6 = local_148;
  plVar7 = (long *)(param_2 + 0xa8);
  (**(code **)(*plVar7 + 0x18))(plVar7);
  __src = *(undefined1 **)(param_2 + 0xb0);
  if (puVar6 != __src) {
    (**(code **)(*(long *)(param_2 + 0xa8) + 0x18))(plVar7);
    lVar5 = 0;
    do {
      if (*(char *)(*(long *)(param_2 + 0xb0) + lVar5) == '\0') goto LAB_0383cb00;
      lVar1 = *(long *)(param_2 + 0xb0) + lVar5;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar5 = lVar5 + 1;
        goto LAB_0383cb00;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar5 = lVar5 + 2;
        goto LAB_0383cb00;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_0383cb00:
    iVar2 = (int)lVar5;
    if (local_140 <= (int)lVar5) {
      iVar2 = local_140 + -1;
    }
    memcpy(puVar6,__src,(long)iVar2);
    puVar6[iVar2] = 0;
  }
  plVar7 = (long *)(param_2 + 0x10);
  (**(code **)(*plVar7 + 0x18))(plVar7);
  puVar6 = *(undefined1 **)(param_2 + 0x18);
  if (local_1d4 != puVar6) {
    (**(code **)(*(long *)(param_2 + 0x10) + 0x18))(plVar7);
    lVar5 = 0;
    do {
      if (*(char *)(*(long *)(param_2 + 0x18) + lVar5) == '\0') goto LAB_0383cba0;
      lVar1 = *(long *)(param_2 + 0x18) + lVar5;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar5 = lVar5 + 1;
        goto LAB_0383cba0;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar5 = lVar5 + 2;
        goto LAB_0383cba0;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_0383cba0:
    iVar2 = (int)lVar5;
    if (0x7f < (int)lVar5) {
      iVar2 = 0x7f;
    }
    memcpy(local_1d4,puVar6,(long)iVar2);
    local_1d4[iVar2] = 0;
  }
  puVar3 = PTR_DAT_04bb2020;
  uStack_78 = *(undefined8 *)(param_1 + 0x1458);
  *(undefined1 *)(param_1 + 9) = 0;
  local_80 = puVar3 + 0x10;
  local_80 = (undefined *)FUN_0383a900(DAT_05ae0928,&local_80);
  *(undefined **)(param_1 + 0x10) = local_80;
  if (local_80 == (undefined *)0x0) {
    *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) | 8;
  }
  else if (*(long *)(param_1 + 0x18) != 0) {
    local_70 = puVar3 + 0x10;
    puStack_58 = local_148;
    uStack_78 = uVar4;
    puStack_68 = local_1d4;
    local_60 = local_70;
    FUN_03836700(*(long *)(param_1 + 0x18),&local_80);
  }
  return;
}


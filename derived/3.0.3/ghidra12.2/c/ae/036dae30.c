
void FUN_036dae30(long param_1,long *param_2,undefined8 param_3,uint param_4,uint param_5)

{
  undefined **ppuVar1;
  long lVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  uint uVar6;
  undefined1 *puVar7;
  undefined **local_b0;
  undefined1 *puStack_a8;
  int local_a0;
  undefined1 local_9c [7];
  undefined1 local_95;
  long local_90;
  undefined **local_88;
  undefined1 *local_80;
  int local_78;
  undefined1 local_74 [7];
  undefined1 local_6d;
  uint local_64;
  
  local_b0 = (undefined **)CONCAT44(local_b0._4_4_,1);
  local_64 = param_4;
  FUN_036db078(param_1,&local_b0);
  uVar4 = FUN_0376baa0(param_2);
  local_78 = 8;
  local_6d = 0;
  local_88 = &PTR_LAB_04937050;
  local_80 = local_74;
  (**(code **)(*param_2 + 0x18))(param_2);
  puVar7 = (undefined1 *)param_2[1];
  if (local_74 != puVar7) {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar5 = 0;
    do {
      if (*(char *)(param_2[1] + lVar5) == '\0') goto LAB_036daf20;
      lVar2 = param_2[1] + lVar5;
      if (*(char *)(lVar2 + 1) == '\0') {
        lVar5 = lVar5 + 1;
        goto LAB_036daf20;
      }
      if (*(char *)(lVar2 + 2) == '\0') {
        lVar5 = lVar5 + 2;
        goto LAB_036daf20;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_036daf20:
    iVar3 = (int)lVar5;
    if (local_78 <= (int)lVar5) {
      iVar3 = local_78 + -1;
    }
    memcpy(local_74,puVar7,(long)iVar3);
    local_74[iVar3] = 0;
  }
  ppuVar1 = (undefined **)(PTR_DAT_04bb3768 + 0x10);
  local_88 = ppuVar1;
  FUN_0376b510(&local_88,uVar4);
  local_95 = 0;
  local_90 = 0x100000000;
  local_a0 = 8;
  local_9c[0] = 0;
  local_b0 = ppuVar1;
  puStack_a8 = local_9c;
  (*(code *)local_88[3])(&local_88);
  puVar7 = local_80;
  if (local_9c != local_80) {
    (*(code *)local_88[3])(&local_88);
    lVar5 = 0;
    do {
      if (local_80[lVar5] == '\0') goto LAB_036daff0;
      if (local_80[lVar5 + 1] == '\0') {
        lVar5 = lVar5 + 1;
        goto LAB_036daff0;
      }
      if (local_80[lVar5 + 2] == '\0') {
        lVar5 = lVar5 + 2;
        goto LAB_036daff0;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_036daff0:
    iVar3 = (int)lVar5;
    if (local_a0 <= (int)lVar5) {
      iVar3 = local_a0 + -1;
    }
    memcpy(local_9c,puVar7,(long)iVar3);
    local_9c[iVar3] = 0;
  }
  local_90 = (ulong)param_4 << 0x20;
  FUN_03747070(param_1 + 0x20,&local_b0);
  if (local_64 == 1) {
    uVar6 = 0x100;
    if ((param_5 & 1) == 0) {
      uVar6 = 0;
    }
    *(uint *)(param_1 + 0x1a70) = *(uint *)(param_1 + 0x1a70) & 0xfffffeff | uVar6;
  }
  *(undefined4 *)(param_1 + 8) = 1;
  return;
}


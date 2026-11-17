
uint FUN_02c5cf30(long param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  undefined *puVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  long lVar7;
  undefined1 *puVar8;
  undefined *local_f0;
  undefined1 *puStack_e8;
  int local_e0;
  undefined1 auStack_dc [63];
  undefined1 local_9d;
  undefined *local_98;
  undefined1 *puStack_90;
  int local_88;
  undefined1 auStack_84 [63];
  undefined1 local_45;
  
  ppuVar6 = &local_f0;
  uVar4 = FUN_033c0fb0(*(undefined8 *)(*(long *)PTR_DAT_04bb2230 + 0x30),
                       *(undefined4 *)(param_1 + 0x202b0),param_2);
  puVar3 = PTR_PTR_04bb2238;
  if ((uVar4 & 1) == 0) {
    if (*(int *)(param_1 + 0x1b0) == 6) {
      local_45 = 0;
      local_88 = 0x40;
      local_98 = PTR_DAT_04bb2f70 + 0x10;
      puStack_90 = auStack_84;
      (**(code **)(*(long *)PTR_PTR_04bb2238 + 0x18))(PTR_PTR_04bb2238);
      puVar8 = *(undefined1 **)(puVar3 + 8);
      if (auStack_84 != puVar8) {
        (**(code **)(*(long *)puVar3 + 0x18))(puVar3);
        lVar7 = 0;
        do {
          if (*(char *)(*(long *)(puVar3 + 8) + lVar7) == '\0') goto LAB_02c5d0cc;
          lVar1 = *(long *)(puVar3 + 8) + lVar7;
          if (*(char *)(lVar1 + 1) == '\0') {
            lVar7 = lVar7 + 1;
            goto LAB_02c5d0cc;
          }
          if (*(char *)(lVar1 + 2) == '\0') {
            lVar7 = lVar7 + 2;
            goto LAB_02c5d0cc;
          }
          lVar7 = lVar7 + 3;
        } while (lVar7 != 0x80001);
        lVar7 = 0;
LAB_02c5d0cc:
        iVar2 = (int)lVar7;
        if (local_88 <= (int)lVar7) {
          iVar2 = local_88 + -1;
        }
        memcpy(auStack_84,puVar8,(long)iVar2);
        auStack_84[iVar2] = 0;
      }
      ppuVar6 = &local_98;
      uVar5 = 8;
      local_98 = PTR_DAT_04bb2bc0 + 0x10;
    }
    else {
      local_9d = 0;
      local_e0 = 0x40;
      local_f0 = PTR_DAT_04bb2f70 + 0x10;
      puStack_e8 = auStack_dc;
      (**(code **)(*(long *)PTR_PTR_04bb2238 + 0x18))(PTR_PTR_04bb2238);
      puVar8 = *(undefined1 **)(puVar3 + 8);
      if (auStack_dc != puVar8) {
        (**(code **)(*(long *)puVar3 + 0x18))(puVar3);
        lVar7 = 0;
        do {
          if (*(char *)(*(long *)(puVar3 + 8) + lVar7) == '\0') goto LAB_02c5d120;
          lVar1 = *(long *)(puVar3 + 8) + lVar7;
          if (*(char *)(lVar1 + 1) == '\0') {
            lVar7 = lVar7 + 1;
            goto LAB_02c5d120;
          }
          if (*(char *)(lVar1 + 2) == '\0') {
            lVar7 = lVar7 + 2;
            goto LAB_02c5d120;
          }
          lVar7 = lVar7 + 3;
        } while (lVar7 != 0x80001);
        lVar7 = 0;
LAB_02c5d120:
        iVar2 = (int)lVar7;
        if (local_e0 <= (int)lVar7) {
          iVar2 = local_e0 + -1;
        }
        memcpy(auStack_dc,puVar8,(long)iVar2);
        auStack_dc[iVar2] = 0;
      }
      uVar5 = 2;
      local_f0 = PTR_DAT_04bb2bc0 + 0x10;
    }
    FUN_02c5cd08(param_1,uVar5,ppuVar6);
  }
  return uVar4 & 1;
}


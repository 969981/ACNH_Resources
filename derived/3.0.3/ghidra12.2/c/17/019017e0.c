
void FUN_019017e0(long *param_1,long *param_2,long *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  long lVar7;
  undefined1 *__src;
  undefined4 uVar8;
  undefined *local_d0;
  undefined1 *puStack_c8;
  int local_c0;
  undefined1 auStack_bc [31];
  undefined1 local_9d;
  undefined *local_98;
  char *pcStack_90;
  undefined *local_88;
  undefined *puStack_80;
  undefined *local_78;
  undefined8 *puStack_70;
  undefined4 local_68;
  
  *param_1 = (long)(PTR_DAT_04bb3050 + 0x10);
  (**(code **)(*param_2 + 0x18))(param_2);
  puVar1 = PTR_DAT_04bb60a0;
  lVar7 = param_2[1];
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[1] = lVar7;
  lVar7 = param_2[6];
  *param_1 = (long)(puVar1 + 0x10);
  param_1[5] = 0;
  *(int *)(param_1 + 4) = (int)lVar7;
  if (param_3 != (long *)0x0) {
    (**(code **)(*param_3 + 0x140))(param_3,param_1);
  }
  local_68 = 0;
  local_9d = 0;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  *param_1 = (long)(PTR_DAT_04bbefc0 + 0x10);
  puVar2 = PTR_PTR_04bb2238;
  puStack_70 = &DAT_0407ebb1;
  pcStack_90 = "mLabel";
  puStack_80 = &DAT_040dedc8;
  local_c0 = 0x20;
  local_d0 = PTR_DAT_04bb2a08 + 0x10;
  puStack_c8 = auStack_bc;
  local_98 = puVar1;
  local_88 = puVar1;
  local_78 = puVar1;
  (**(code **)(*(long *)PTR_PTR_04bb2238 + 0x18))(PTR_PTR_04bb2238);
  __src = *(undefined1 **)(puVar2 + 8);
  if (auStack_bc != __src) {
    (**(code **)(*(long *)puVar2 + 0x18))(puVar2);
    lVar7 = 0;
    do {
      if (*(char *)(*(long *)(puVar2 + 8) + lVar7) == '\0') goto LAB_0190195c;
      lVar3 = *(long *)(puVar2 + 8) + lVar7;
      if (*(char *)(lVar3 + 1) == '\0') {
        lVar7 = lVar7 + 1;
        goto LAB_0190195c;
      }
      if (*(char *)(lVar3 + 2) == '\0') {
        lVar7 = lVar7 + 2;
        goto LAB_0190195c;
      }
      lVar7 = lVar7 + 3;
    } while (lVar7 != 0x80001);
    lVar7 = 0;
LAB_0190195c:
    iVar4 = (int)lVar7;
    if (local_c0 <= (int)lVar7) {
      iVar4 = local_c0 + -1;
    }
    memcpy(auStack_bc,__src,(long)iVar4);
    auStack_bc[iVar4] = 0;
  }
  local_d0 = PTR_DAT_04bb2028 + 0x10;
  FUN_008f0e20(param_1 + 6,&local_98,&local_d0,param_1);
  local_68 = 0;
  pcStack_90 = "mFloatingObjectParams";
  puStack_80 = &DAT_04067b34;
  puStack_70 = &DAT_0407ebb1;
  local_98 = puVar1;
  local_88 = puVar1;
  local_78 = puVar1;
  FUN_01901278(param_1 + 0x13,&local_98,param_1);
  param_1[0x4b] = 0;
  param_1[0x4a] = (long)"mGravity";
  param_1[0x4c] = 0;
  puVar2 = PTR_DAT_04bb31d0;
  *(undefined4 *)(param_1 + 0x4d) = 0;
  param_1[0x4e] = 0;
  puVar1 = puVar2 + 0x10;
  param_1[0x49] = (long)puVar1;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x49);
  uVar8 = 0xbbcccccc;
  if ((*(uint *)(param_1 + 0x4d) & 0x800) != 0) {
    uVar8 = 0xb8e4c387;
  }
  puVar6 = (undefined4 *)(**(code **)(param_1[0x49] + 0xf0))(param_1 + 0x49);
  *puVar6 = uVar8;
  uVar5 = *(uint *)(param_1 + 0x4d);
  if ((uVar5 >> 7 & 1) == 0) {
    param_1[0x4e] = 0;
    uVar8 = 0xbbcccccc;
    if ((uVar5 & 0x800) != 0) {
      uVar8 = 0xb8e4c387;
    }
    *(undefined4 *)(param_1 + 0x4e) = uVar8;
  }
  param_1[0x51] = 0;
  *(uint *)(param_1 + 0x4d) = uVar5 & 0xfeffffff;
  param_1[0x50] = (long)"mDownSpeedMax";
  param_1[0x52] = 0;
  *(undefined4 *)(param_1 + 0x53) = 0;
  param_1[0x4f] = (long)puVar1;
  param_1[0x54] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x4f);
  uVar8 = 0xbef00000;
  if ((*(uint *)(param_1 + 0x53) & 0x800) != 0) {
    uVar8 = 0xbc060a92;
  }
  puVar6 = (undefined4 *)(**(code **)(param_1[0x4f] + 0xf0))(param_1 + 0x4f);
  *puVar6 = uVar8;
  uVar5 = *(uint *)(param_1 + 0x53);
  if ((uVar5 >> 7 & 1) == 0) {
    param_1[0x54] = 0;
    uVar8 = 0xbef00000;
    if ((uVar5 & 0x800) != 0) {
      uVar8 = 0xbc060a92;
    }
    *(undefined4 *)(param_1 + 0x54) = uVar8;
  }
  puVar2 = puVar2 + 0x10;
  param_1[0x57] = 0;
  *(uint *)(param_1 + 0x53) = uVar5 & 0xfeffffff;
  param_1[0x56] = (long)"mDumpSpeed";
  param_1[0x58] = 0;
  *(undefined4 *)(param_1 + 0x59) = 0;
  param_1[0x55] = (long)puVar2;
  param_1[0x5a] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x55);
  uVar8 = 0x3ea00000;
  if ((*(uint *)(param_1 + 0x59) & 0x800) != 0) {
    uVar8 = 0x3bb2b8c2;
  }
  puVar6 = (undefined4 *)(**(code **)(param_1[0x55] + 0xf0))(param_1 + 0x55);
  *puVar6 = uVar8;
  uVar5 = *(uint *)(param_1 + 0x59);
  if ((uVar5 >> 7 & 1) == 0) {
    param_1[0x5a] = 0;
    uVar8 = 0x3ea00000;
    if ((uVar5 & 0x800) != 0) {
      uVar8 = 0x3bb2b8c2;
    }
    *(undefined4 *)(param_1 + 0x5a) = uVar8;
  }
  param_1[0x5d] = 0;
  *(uint *)(param_1 + 0x59) = uVar5 & 0xfeffffff;
  param_1[0x5c] = (long)"mDumpAccel";
  param_1[0x5e] = 0;
  *(undefined4 *)(param_1 + 0x5f) = 0;
  param_1[0x5b] = (long)puVar2;
  param_1[0x60] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x5b);
  uVar8 = 0x3bcccccc;
  if ((*(uint *)(param_1 + 0x5f) & 0x800) != 0) {
    uVar8 = 0x38e4c387;
  }
  puVar6 = (undefined4 *)(**(code **)(param_1[0x5b] + 0xf0))(param_1 + 0x5b);
  *puVar6 = uVar8;
  uVar5 = *(uint *)(param_1 + 0x5f);
  if ((uVar5 >> 7 & 1) == 0) {
    param_1[0x60] = 0;
    uVar8 = 0x3bcccccc;
    if ((uVar5 & 0x800) != 0) {
      uVar8 = 0x38e4c387;
    }
    *(undefined4 *)(param_1 + 0x60) = uVar8;
  }
  *(uint *)(param_1 + 0x5f) = uVar5 & 0xfeffffff;
  return;
}


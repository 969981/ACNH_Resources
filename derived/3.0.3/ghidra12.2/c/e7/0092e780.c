
undefined8 FUN_0092e780(byte *param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  long lVar7;
  byte bVar8;
  undefined *local_58;
  char *pcStack_50;
  undefined8 local_48;
  byte local_24 [4];
  
  FUN_02676000();
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_50 = "UpgradePocket30";
  local_58 = puVar1;
  FUN_0274bfe8(param_1,&local_58,0);
  pcStack_50 = "UpgradePocket40";
  local_58 = puVar1;
  FUN_0274bfe8(param_1,&local_58,0);
  puVar1 = PTR_DAT_04bb4f78;
  local_24[0] = *param_1;
  if (7 < local_24[0]) {
    local_24[0] = 0xff;
  }
  lVar2 = FUN_02583354(*(undefined8 *)PTR_DAT_04bb4f78,local_24,1);
  if (lVar2 != 0) {
    lVar7 = lVar2 + 0x194b0;
    if (*(long *)(lVar2 + 0x194b8) == 0) {
      lVar7 = *(long *)(*(long *)PTR_DAT_04bb46b0 + 0x20);
      lVar2 = *(long *)(lVar7 + 0x98);
      if (lVar2 != 0) goto LAB_0092e82c;
LAB_0092e870:
      uVar3 = 0;
    }
    else {
      lVar2 = *(long *)(lVar2 + 0x19548);
      if (lVar2 == 0) goto LAB_0092e870;
LAB_0092e82c:
      if (*(undefined8 **)(lVar2 + 0x10) == (undefined8 *)0x0) {
        uVar3 = 0;
        plVar4 = *(long **)(lVar2 + 0x20);
joined_r0x0092e880:
        if (plVar4 != (long *)0x0) {
          local_58 = *(undefined **)(lVar7 + 0x78);
          pcStack_50 = *(char **)(lVar7 + 0x80);
          local_48 = 0x17c;
          (**(code **)(*plVar4 + 0x20))(plVar4,&local_58);
        }
      }
      else {
        uVar3 = (**(code **)**(undefined8 **)(lVar2 + 0x10))();
        uVar3 = uVar3 & 0xffffffff;
        if (*(long *)(lVar7 + 0x98) != 0) {
          plVar4 = *(long **)(*(long *)(lVar7 + 0x98) + 0x20);
          goto joined_r0x0092e880;
        }
      }
    }
    local_58 = (undefined *)((ulong)local_58 & 0xffffffff00000000);
    lVar2 = *(long *)(lVar7 + 0x80) + *(long *)(lVar7 + 0x78);
    *(undefined1 *)(lVar2 + 0x178) = 0;
    *(undefined4 *)(lVar2 + 0xa0) = 0;
    if ((((uVar3 & 1) != 0) && (*(long *)(lVar7 + 0x98) != 0)) &&
       (puVar5 = *(undefined8 **)(*(long *)(lVar7 + 0x98) + 0x18), puVar5 != (undefined8 *)0x0)) {
      (**(code **)*puVar5)();
    }
  }
  bVar8 = *param_1;
  if (7 < bVar8) {
    bVar8 = 0xff;
  }
  local_58 = (undefined *)CONCAT71(local_58._1_7_,bVar8);
  lVar2 = FUN_02583354(*(undefined8 *)puVar1,&local_58,1);
  if (lVar2 == 0) goto LAB_0092e9d8;
  lVar7 = *(long *)(lVar2 + 0x1aa0);
  if (lVar7 == 0) {
    FUN_028166e0(*(long *)(lVar2 + 0x1a88) + *(long *)(lVar2 + 0x1a80),PTR_DAT_04bb37e0,0,0xffffffff
                );
    goto LAB_0092e9d8;
  }
  if (*(undefined8 **)(lVar7 + 0x10) == (undefined8 *)0x0) {
    uVar3 = 0;
    plVar4 = *(long **)(lVar7 + 0x20);
joined_r0x0092eb08:
    if (plVar4 != (long *)0x0) {
      local_58 = *(undefined **)(lVar2 + 0x1a80);
      pcStack_50 = *(char **)(lVar2 + 0x1a88);
      local_48 = 0x8b8;
      (**(code **)(*plVar4 + 0x20))(plVar4,&local_58);
    }
  }
  else {
    uVar3 = (**(code **)**(undefined8 **)(lVar7 + 0x10))();
    uVar3 = uVar3 & 0xffffffff;
    if (*(long *)(lVar2 + 0x1aa0) != 0) {
      plVar4 = *(long **)(*(long *)(lVar2 + 0x1aa0) + 0x20);
      goto joined_r0x0092eb08;
    }
  }
  FUN_028166e0(*(long *)(lVar2 + 0x1a88) + *(long *)(lVar2 + 0x1a80),PTR_DAT_04bb37e0,0,0xffffffff);
  if ((((uVar3 & 1) != 0) && (*(long *)(lVar2 + 0x1aa0) != 0)) &&
     (puVar5 = *(undefined8 **)(*(long *)(lVar2 + 0x1aa0) + 0x18), puVar5 != (undefined8 *)0x0)) {
    (**(code **)*puVar5)();
  }
LAB_0092e9d8:
  local_58 = (undefined *)0x305;
  FUN_0277d4ac(&local_58);
  FUN_026738b0(param_1,&local_58,1,0);
  local_58 = (undefined *)0x308;
  FUN_0277d4ac(&local_58);
  FUN_026738b0(param_1,&local_58,1,0);
  local_58 = (undefined *)0x30b;
  FUN_0277d4ac(&local_58);
  FUN_026738b0(param_1,&local_58,1,0);
  local_58 = (undefined *)0x307;
  FUN_0277d4ac(&local_58);
  FUN_026738b0(param_1,&local_58,1,0);
  local_58 = (undefined *)0x309;
  FUN_0277d4ac(&local_58);
  FUN_026738b0(param_1,&local_58,1,0);
  local_58 = (undefined *)0x30a;
  FUN_0277d4ac(&local_58);
  FUN_026738b0(param_1,&local_58,1,0);
  local_58 = (undefined *)0x523;
  FUN_0277d4ac(&local_58);
  FUN_026738b0(param_1,&local_58,1,0);
  puVar6 = (undefined1 *)FUN_033d0598(PTR_DAT_04bb32e0);
  *puVar6 = 0;
  return 1;
}


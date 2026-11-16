
undefined8 FUN_0290c1e0(long *param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *__src;
  int iVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *local_128;
  char *pcStack_120;
  int local_118;
  undefined1 auStack_114 [63];
  undefined1 local_d5;
  undefined *local_d0;
  undefined1 *local_c8;
  undefined4 local_c0;
  undefined1 local_bc [63];
  undefined1 local_7d;
  undefined *local_78;
  undefined1 *local_70;
  undefined4 local_68;
  undefined1 local_64 [31];
  undefined1 local_45;
  
  puVar3 = PTR_DAT_04bb2720;
  puVar2 = PTR_DAT_04bb2640;
  local_45 = 0;
  local_68 = 0x20;
  local_64[0] = 0;
  local_70 = local_64;
  local_78 = PTR_DAT_04bb2028 + 0x10;
  if (param_1 == (long *)0x0) {
    lVar8 = *(long *)PTR_DAT_04bb2720;
    if ((lVar8 != 0) && (*(long *)(lVar8 + 0x330) != 0)) {
      puVar5 = (undefined8 *)
               (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                         (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar8 + 0x338));
      iVar4 = FUN_006bd550(*puVar5,0);
      if ((iVar4 == 0x758f7eaf) && (lVar8 = *(long *)puVar3, lVar8 != 0)) {
        param_1 = &DAT_055c04a0;
        if (*(long *)(lVar8 + 0x330) != 0) {
          puVar5 = (undefined8 *)
                   (**(code **)(**(long **)puVar2 + 0x18))
                             (*(long **)puVar2,*(undefined4 *)(lVar8 + 0x338));
          iVar4 = FUN_006bd550(*puVar5,0);
          param_1 = (long *)PTR_DAT_04bc3a80;
          if (iVar4 != 0x758f7eaf) {
            param_1 = &DAT_055c04a0;
          }
        }
        goto LAB_0290c2cc;
      }
    }
    param_1 = &DAT_055c04a0;
  }
LAB_0290c2cc:
  (**(code **)(*param_1 + 0x18))(param_1);
  FUN_038d1270(&local_78,&DAT_0409e973,param_1[1]);
  (**(code **)(local_78 + 0x18))(&local_78);
  iVar4 = FUN_006bd550(local_70,0);
  puVar5 = DAT_055c1b60;
  if (DAT_055c1b60 == &DAT_055c1b58) {
    return 0;
  }
  while (*(int *)(puVar5 + -1) != iVar4) {
    puVar1 = puVar5 + 1;
    puVar5 = (undefined8 *)*puVar1;
    if ((undefined8 *)*puVar1 == &DAT_055c1b58) {
      return 0;
    }
  }
  (**(code **)(local_78 + 0x18))(&local_78);
  iVar4 = FUN_006bd550(local_70,0);
  puVar5 = DAT_055c1b60;
  if (DAT_055c1b60 == &DAT_055c1b58) {
    return 0;
  }
  while (*(int *)(puVar5 + -1) != iVar4) {
    puVar1 = puVar5 + 1;
    puVar5 = (undefined8 *)*puVar1;
    if ((undefined8 *)*puVar1 == &DAT_055c1b58) {
      return 0;
    }
  }
  (**(code **)(local_78 + 0x18))(&local_78);
  iVar4 = FUN_006bd550(local_70,0);
  puVar2 = PTR_DAT_04bb2bc0;
  local_7d = 0;
  local_c0 = 0x40;
  local_c8 = local_bc;
  local_bc[0] = 0;
  local_d0 = PTR_DAT_04bb2bc0 + 0x10;
  if (iVar4 == -0x10e0fba8) {
    local_128 = PTR_DAT_04bb2020 + 0x10;
    pcStack_120 = "CommuneExpanded";
    uVar6 = FUN_0273f0a0(&local_128);
    if ((uVar6 & 1) != 0) {
      FUN_038d1270(&local_d0,"Stage/PhotoStudioIslandExtend.byml");
      uVar6 = FUN_03eba3a0(&local_d0);
      if ((uVar6 & 1) == 0) {
        FUN_038d1270(&local_d0,"Stage/Game/PhotoStudioIsland.byml");
      }
      goto LAB_0290c45c;
    }
  }
  (**(code **)(local_78 + 0x18))(&local_78);
  FUN_038d1270(&local_d0,"Stage/Game/%s.byml",local_70);
LAB_0290c45c:
  local_118 = 0x40;
  local_d5 = 0;
  local_128 = PTR_DAT_04bb2f70 + 0x10;
  pcStack_120 = auStack_114;
  (**(code **)(local_d0 + 0x18))(&local_d0);
  __src = local_c8;
  if (auStack_114 != local_c8) {
    (**(code **)(local_d0 + 0x18))(&local_d0);
    lVar8 = 0;
    do {
      if (local_c8[lVar8] == '\0') goto LAB_0290c4fc;
      if (local_c8[lVar8 + 1] == '\0') {
        lVar8 = lVar8 + 1;
        goto LAB_0290c4fc;
      }
      if (local_c8[lVar8 + 2] == '\0') {
        lVar8 = lVar8 + 2;
        goto LAB_0290c4fc;
      }
      lVar8 = lVar8 + 3;
    } while (lVar8 != 0x80001);
    lVar8 = 0;
LAB_0290c4fc:
    iVar4 = (int)lVar8;
    if (local_118 <= (int)lVar8) {
      iVar4 = local_118 + -1;
    }
    memcpy(auStack_114,__src,(long)iVar4);
    auStack_114[iVar4] = 0;
  }
  local_128 = puVar2 + 0x10;
  uVar6 = FUN_03eba3a0(&local_128);
  puVar2 = PTR_DAT_04bb2720;
  if ((uVar6 & 1) == 0) {
    return 0;
  }
  lVar8 = *(long *)PTR_DAT_04bb2720;
  if ((lVar8 != 0) && (*(long *)(lVar8 + 0x330) != 0)) {
    puVar5 = (undefined8 *)
             (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                       (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar8 + 0x338));
    iVar4 = FUN_006bd550(*puVar5,0);
    if ((iVar4 == 0x758f7eaf) &&
       (((*(long *)puVar2 != 0 && (lVar8 = *(long *)(*(long *)puVar2 + 0x330), lVar8 != 0)) &&
        (lVar8 = *(long *)(lVar8 + 0x238), lVar8 != 0)))) {
      uVar7 = FUN_03eba090(&local_128,lVar8,0x40,0,1,0);
      return uVar7;
    }
  }
  uVar7 = FUN_03eb9ee0(&local_128,0x40,0,1);
  return uVar7;
}


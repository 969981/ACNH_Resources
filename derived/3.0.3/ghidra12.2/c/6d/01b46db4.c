
long * FUN_01b46db4(long *param_1,long *param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  uint uVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  int iVar13;
  long *plVar14;
  undefined4 uVar15;
  undefined4 local_424;
  undefined4 local_420;
  undefined4 local_41c;
  undefined4 local_418;
  undefined4 local_414;
  undefined4 local_410;
  int local_40c;
  undefined **local_408;
  long local_400;
  char local_3f8;
  byte local_3f7;
  undefined2 local_3f0 [46];
  undefined1 local_394;
  undefined1 local_338;
  undefined8 local_334;
  undefined4 local_32c;
  undefined1 local_328;
  char local_324;
  undefined1 auStack_322 [672];
  ushort local_82;
  undefined2 local_80;
  int local_7c;
  long local_78;
  undefined8 local_70;
  undefined8 local_68;
  
  puVar3 = PTR_DAT_04bb46b0;
  if ((*(long *)PTR_DAT_04bb46b0 == 0) ||
     (local_7c = param_3, lVar6 = FUN_026eec4c(*(long *)PTR_DAT_04bb46b0,(int)param_1[1]),
     lVar6 == 0)) {
    return (long *)0x0;
  }
  if ((*(long **)(lVar6 + 0x17bb0) == (long *)0x0) ||
     (puVar7 = (undefined8 *)**(long **)(lVar6 + 0x17bb0), puVar7 == (undefined8 *)0x0)) {
    uVar8 = 0;
  }
  else {
    uVar8 = (**(code **)*puVar7)();
    uVar8 = uVar8 & 0xffffffff;
  }
  local_3f0[0] = 0;
  local_394 = 0;
  local_338 = 0;
  local_334 = 0xfffe00000000;
  local_32c = 0;
  FUN_0277d4ac((long)&local_334 + 4);
  local_328 = 0;
  local_324 = '\0';
  memset(auStack_322,0,0x2a2);
  local_80 = 0xfffe;
  uVar9 = (**(code **)(*param_1 + 0x40))
                    (param_1,local_3f0,*(long *)(lVar6 + 0x17b98) + *(long *)(lVar6 + 0x17b90),
                     param_4);
  if ((uVar9 & 1) == 0) {
LAB_01b46ef8:
    plVar14 = (long *)0x0;
    goto LAB_01b46efc;
  }
  if (local_324 == '\0') {
    uVar9 = FUN_027aed78(local_3f0,0);
    plVar14 = (long *)0x0;
    if (((uVar9 & 1) == 0) || (local_334._4_2_ == -2)) goto LAB_01b46efc;
  }
  else {
    uVar4 = FUN_027aed78(local_3f0,0);
    uVar2 = (uint)local_82 - (uint)*(ushort *)(DAT_05336138 + 0x1f8);
    if ((*(uint *)(DAT_05336138 + 0x1d8) <= uVar2) ||
       (*(long *)(*(long *)(DAT_05336138 + 0x1e0) + (long)(int)uVar2 * 8) == 0 ||
        ((uVar4 ^ 0xffffffff) & 1) != 0)) goto LAB_01b46ef8;
  }
  if (*(long *)(lVar6 + 0x194b8) == 0) {
    lVar10 = *(long *)(*(long *)puVar3 + 0x20);
  }
  else {
    lVar10 = lVar6 + 0x194b0;
  }
  local_3f8 = '\0';
  local_400 = lVar10 + 0x8500;
  if (*(long *)(lVar10 + 0x8528) == 0) {
    local_3f7 = 0;
  }
  else {
    puVar7 = *(undefined8 **)(*(long *)(lVar10 + 0x8528) + 0x10);
    local_3f7 = 0;
    if (puVar7 != (undefined8 *)0x0) {
      local_3f7 = (**(code **)*puVar7)();
    }
  }
  local_3f7 = local_3f7 & 1;
  local_40c = -1;
  local_408 = (undefined **)(PTR_DAT_04bb4c20 + 0x10);
  if (*(char *)((long)param_1 + 0x34) == '\0') {
    if (local_7c == 3) {
      uVar11 = FUN_01b419f0(&local_408);
      lVar10 = FUN_02830670(uVar11,&local_40c);
      iVar13 = local_40c;
      plVar14 = (long *)0x0;
      if ((lVar10 != 0) && (-1 < local_40c)) {
        local_424 = (undefined4)param_1[4];
        FUN_02829560(lVar10,local_3f0,&local_424);
LAB_01b470f8:
        uVar15 = 2;
        goto LAB_01b47198;
      }
    }
    else if (local_7c == 2) {
      uVar11 = FUN_01b419f0(&local_408);
      lVar10 = FUN_0283039c(uVar11,&local_40c);
      iVar13 = local_40c;
      plVar14 = (long *)0x0;
      if ((lVar10 != 0) && (-1 < local_40c)) {
        local_420 = (undefined4)param_1[4];
        FUN_02828db8(lVar10,local_3f0,&local_420);
        FUN_01b419f0(&local_408);
        iVar5 = FUN_0282e284();
        if (iVar5 == 0) {
          FUN_02828d30(lVar10,(int)param_1[1],iVar13);
        }
        else if (iVar5 == 1) {
          uVar11 = FUN_01b419f0(&local_408);
          FUN_0282e120(uVar11,(int)param_1[1]);
          uVar15 = 1;
          goto LAB_01b47198;
        }
        uVar15 = 1;
        goto LAB_01b47198;
      }
    }
    else if (local_7c == 1) {
      uVar11 = FUN_01b419f0(&local_408);
      lVar10 = FUN_02830670(uVar11,&local_40c);
      iVar13 = local_40c;
      plVar14 = (long *)0x0;
      if ((lVar10 != 0) && (-1 < local_40c)) {
        local_41c = (undefined4)param_1[4];
        FUN_028292a4(lVar10,local_3f0,&local_41c);
        goto LAB_01b470f8;
      }
    }
    else {
LAB_01b471f4:
      plVar14 = (long *)0x0;
    }
  }
  else {
    if ((*(long *)(lVar10 + 0x8528) != 0) &&
       (plVar14 = *(long **)(*(long *)(lVar10 + 0x8528) + 0x20), plVar14 != (long *)0x0)) {
      local_78 = *(long *)(lVar10 + 0x8508);
      local_70 = *(undefined8 *)(lVar10 + 0x8510);
      local_68 = 0xeab4;
      (**(code **)(*plVar14 + 0x20))(plVar14,&local_78);
    }
    lVar10 = FUN_02830b10(*(long *)(lVar10 + 0x8510) + *(long *)(lVar10 + 0x8508),&local_40c);
    iVar13 = local_40c;
    plVar14 = (long *)0x0;
    if ((lVar10 != 0) && (-1 < local_40c)) {
      if (local_7c == 3) {
        local_418 = (undefined4)param_1[4];
        FUN_0282aeac(lVar10,local_3f0,&local_418);
      }
      else if (local_7c == 2) {
        local_414 = (undefined4)param_1[4];
        FUN_0282abf0(lVar10,local_3f0,&local_414);
      }
      else {
        if (local_7c != 1) goto LAB_01b471f4;
        local_410 = (undefined4)param_1[4];
        FUN_0282a934(lVar10,local_3f0,&local_410);
      }
      uVar15 = 5;
LAB_01b47198:
      lVar10 = DAT_05ae7600;
      if (DAT_05ae7600 == 0) {
        plVar14 = malloc(0x28);
      }
      else {
        if (param_2 == (long *)0x0) {
          lVar12 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
          puVar7 = (undefined8 *)(lVar10 + 8);
          if (lVar12 != 0) {
            puVar7 = (undefined8 *)(lVar12 + 0xa8);
          }
          param_2 = (long *)*puVar7;
          if (param_2 == (long *)0x0) goto LAB_01b471f4;
        }
        plVar14 = (long *)(**(code **)(*param_2 + 0x30))(param_2,0x28,8);
      }
      if (plVar14 != (long *)0x0) {
        *(undefined4 *)(plVar14 + 1) = 0xffffffff;
        *(undefined8 *)((long)plVar14 + 0xc) = 0;
        *(undefined8 *)((long)plVar14 + 0x14) = 0;
        *(undefined4 *)((long)plVar14 + 0x1c) = 0;
        *plVar14 = (long)(PTR_DAT_04bc05b8 + 0x10);
        plVar14[4] = -0x100000000;
        *(int *)(plVar14 + 1) = (int)param_1[1];
        uVar1 = *(undefined4 *)((long)param_1 + 0xc);
        *(undefined4 *)(plVar14 + 4) = uVar15;
        *(int *)((long)plVar14 + 0x24) = iVar13;
        *(undefined4 *)((long)plVar14 + 0xc) = uVar1;
      }
    }
  }
  local_408 = &PTR_FUN_04a882d0;
  if (local_3f7 != 0) {
    lVar10 = *(long *)(local_400 + 0x28);
    if (local_3f8 == '\0') {
      if (lVar10 == 0) goto LAB_01b46efc;
      puVar7 = *(undefined8 **)(lVar10 + 0x18);
    }
    else {
      if (lVar10 == 0) goto LAB_01b46efc;
      puVar7 = *(undefined8 **)(lVar10 + 8);
    }
    if (puVar7 != (undefined8 *)0x0) {
      (**(code **)*puVar7)();
    }
  }
LAB_01b46efc:
  if ((((uVar8 & 1) != 0) && (*(long *)(lVar6 + 0x17bb0) != 0)) &&
     (puVar7 = *(undefined8 **)(*(long *)(lVar6 + 0x17bb0) + 8), puVar7 != (undefined8 *)0x0)) {
    (**(code **)*puVar7)();
  }
  return plVar14;
}


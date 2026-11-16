
undefined8 FUN_027362a8(long *param_1)

{
  ulong uVar1;
  long *plVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  long lVar6;
  size_t sVar7;
  void *pvVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  long *local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  
  if (param_1[1] == 0) {
    return 0;
  }
  if ((undefined4 *)*param_1 == (undefined4 *)0x0) {
    return 0;
  }
  if (param_1[3] == 0) {
    return 0;
  }
  *(undefined4 *)*param_1 = (int)param_1[2];
  *(undefined4 *)(*param_1 + 4) = *(undefined4 *)((long)param_1 + 0x14);
  puVar3 = PTR_DAT_04bb2698;
  plVar9 = (long *)param_1[1];
  if (plVar9 == (long *)0x0) {
    return 0;
  }
  lVar10 = *param_1;
  if (lVar10 == 0) {
    return 0;
  }
  if (*(long *)(lVar10 + 0x50) != 0) {
    return 0;
  }
  lVar6 = param_1[2];
  uVar4 = *(undefined4 *)((long)param_1 + 0x14);
  if (*(long *)PTR_DAT_04bb2698 == 0) {
    puVar5 = malloc(0x30);
  }
  else {
    puVar5 = (undefined8 *)(**(code **)(*plVar9 + 0x30))(plVar9,0x30,8);
  }
  puVar5[4] = 0;
  puVar5[5] = 0;
  local_70 = 0;
  puVar5[2] = 0;
  puVar5[3] = 0;
  *puVar5 = 0;
  puVar5[1] = 0;
  *(undefined8 **)(lVar10 + 0x50) = puVar5;
  local_78 = plVar9;
  uStack_6c = (int)lVar6;
  local_68 = uVar4;
  FUN_027b6c14(puVar5,&local_78);
  if (*(int *)(*(long *)(lVar10 + 0x50) + 0x2c) != 1) {
    return 0;
  }
  if (*(long *)(lVar10 + 0x58) != 0) {
    return 0;
  }
  if (*(long *)puVar3 == 0) {
    puVar5 = malloc(0x30);
  }
  else {
    puVar5 = (undefined8 *)(**(code **)(*plVar9 + 0x30))(plVar9,0x30,8);
  }
  puVar5[4] = 0;
  puVar5[5] = 0;
  local_70 = 1;
  puVar5[2] = 0;
  puVar5[3] = 0;
  *puVar5 = 0;
  puVar5[1] = 0;
  *(undefined8 **)(lVar10 + 0x58) = puVar5;
  local_78 = plVar9;
  uStack_6c = (int)lVar6;
  local_68 = uVar4;
  FUN_027b6c14(puVar5,&local_78);
  if (*(int *)(*(long *)(lVar10 + 0x58) + 0x2c) != 1) {
    return 0;
  }
  lVar10 = *(long *)puVar3;
  if (lVar10 == 0) {
    plVar9 = malloc(0x20);
  }
  else {
    plVar9 = (long *)param_1[1];
    if (plVar9 == (long *)0x0) {
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar9 = (long *)(lVar10 + 8);
      if (lVar6 != 0) {
        plVar9 = (long *)(lVar6 + 0xa8);
      }
      plVar9 = (long *)*plVar9;
      if (plVar9 == (long *)0x0) {
        plVar9 = (long *)0x0;
        goto LAB_0273647c;
      }
    }
    plVar9 = (long *)(**(code **)(*plVar9 + 0x30))(plVar9,0x20,8);
  }
LAB_0273647c:
  plVar9[2] = 0;
  plVar9[3] = 0;
  *plVar9 = 0;
  plVar9[1] = 0;
  *(long **)(*param_1 + 8) = plVar9;
  plVar2 = (long *)param_1[1];
  uVar11 = *(undefined8 *)(*param_1 + 0x50);
  uVar4 = FUN_006bd550("::Game::SaveLand",0);
  uVar4 = FUN_027b78b0(uVar11,uVar4);
  sVar7 = FUN_027b79f8(*(undefined8 *)(*param_1 + 0x50),uVar4);
  lVar10 = FUN_027b7ad4(*(undefined8 *)(*param_1 + 0x50),uVar4);
  if ((plVar2 != (long *)0x0) && (sVar7 != 0)) {
    uVar4 = 8;
    if (lVar10 != 0) {
      uVar4 = (undefined4)lVar10;
    }
    pvVar8 = (void *)(**(code **)(*plVar2 + 0x30))(plVar2,sVar7,uVar4);
    if (pvVar8 != (void *)0x0) {
      memset(pvVar8,0,sVar7);
      lVar6 = 8;
      if (lVar10 != 0) {
        lVar6 = lVar10;
      }
      *plVar9 = (long)plVar2;
      plVar9[1] = (long)pvVar8;
      plVar9[2] = sVar7;
      plVar9[3] = lVar6;
    }
  }
  if (plVar9[1] == 0) {
    return 0;
  }
  uVar12 = 0;
  do {
    uVar1 = uVar12;
    if (7 < uVar12) {
      uVar1 = 0;
    }
    if (*(char *)(param_1[3] + uVar1) != '\0') {
      lVar10 = *(long *)puVar3;
      if (lVar10 == 0) {
        plVar9 = malloc(0x20);
      }
      else {
        plVar9 = (long *)param_1[1];
        if (plVar9 == (long *)0x0) {
          lVar6 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
          plVar9 = (long *)(lVar10 + 8);
          if (lVar6 != 0) {
            plVar9 = (long *)(lVar6 + 0xa8);
          }
          plVar9 = (long *)*plVar9;
          if (plVar9 == (long *)0x0) {
            plVar9 = (long *)0x0;
            goto LAB_027365e0;
          }
        }
        plVar9 = (long *)(**(code **)(*plVar9 + 0x30))(plVar9,0x20,8);
      }
LAB_027365e0:
      plVar9[2] = 0;
      plVar9[3] = 0;
      *plVar9 = 0;
      plVar9[1] = 0;
      puVar5 = (undefined8 *)(*param_1 + 0x10) + uVar12;
      if (7 < uVar12) {
        puVar5 = (undefined8 *)(*param_1 + 0x10);
      }
      *puVar5 = plVar9;
      plVar2 = (long *)param_1[1];
      uVar11 = *(undefined8 *)(*param_1 + 0x58);
      uVar4 = FUN_006bd550("::Game::SavePlayer",0);
      uVar4 = FUN_027b78b0(uVar11,uVar4);
      sVar7 = FUN_027b79f8(uVar11,uVar4);
      lVar10 = FUN_027b7ad4(uVar11,uVar4);
      if ((plVar2 != (long *)0x0) && (sVar7 != 0)) {
        uVar4 = 8;
        if (lVar10 != 0) {
          uVar4 = (undefined4)lVar10;
        }
        pvVar8 = (void *)(**(code **)(*plVar2 + 0x30))(plVar2,sVar7,uVar4);
        if (pvVar8 != (void *)0x0) {
          memset(pvVar8,0,sVar7);
          lVar6 = 8;
          if (lVar10 != 0) {
            lVar6 = lVar10;
          }
          *plVar9 = (long)plVar2;
          plVar9[1] = (long)pvVar8;
          plVar9[2] = sVar7;
          plVar9[3] = lVar6;
        }
      }
      if (plVar9[1] == 0) {
        return 0;
      }
    }
    uVar1 = 0xffffffff;
    if (uVar12 != 7) {
      uVar1 = uVar12 + 1;
    }
    if (7 < uVar12) {
      uVar1 = uVar12;
    }
    uVar12 = uVar1;
    if (uVar1 == 0xffffffff) {
      *(undefined8 *)(*param_1 + 0x60) = *(undefined8 *)param_1[3];
      return 1;
    }
  } while( true );
}


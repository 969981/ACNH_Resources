
void FUN_01da22a0(long param_1,long *param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  void *pvVar6;
  undefined8 *puVar7;
  long lVar8;
  long *plVar9;
  undefined4 *puVar10;
  undefined8 uVar11;
  int *piVar12;
  long lVar13;
  long lVar14;
  int iVar15;
  ulong __size;
  Friend *this;
  uint uVar16;
  long *local_70;
  char *pcStack_68;
  
  lVar13 = *(long *)PTR_DAT_04bb2698;
  local_70 = param_2;
  if (lVar13 == 0) {
    pvVar6 = malloc(0x28);
  }
  else {
    plVar5 = param_2;
    if (param_2 == (long *)0x0) {
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar5 = (long *)(lVar13 + 8);
      if (lVar4 != 0) {
        plVar5 = (long *)(lVar4 + 0xa8);
      }
      plVar5 = (long *)*plVar5;
    }
    pvVar6 = (void *)(**(code **)(*plVar5 + 0x30))(plVar5,0x28,8);
  }
  FUN_03bf7074(pvVar6,&local_70);
  *(void **)(param_1 + 0x30) = pvVar6;
  lVar13 = *(long *)PTR_DAT_04bb2698;
  if (lVar13 == 0) {
    pvVar6 = malloc(0x60);
  }
  else {
    plVar5 = param_2;
    if (param_2 == (long *)0x0) {
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar5 = (long *)(lVar13 + 8);
      if (lVar4 != 0) {
        plVar5 = (long *)(lVar4 + 0xa8);
      }
      plVar5 = (long *)*plVar5;
    }
    pvVar6 = (void *)(**(code **)(*plVar5 + 0x30))(plVar5,0x60,8);
  }
  FUN_006d06d0(pvVar6,param_2);
  *(void **)(param_1 + 0x38) = pvVar6;
  lVar13 = *(long *)PTR_DAT_04bb2698;
  if (lVar13 == 0) {
    pvVar6 = malloc(0x60);
  }
  else {
    plVar5 = param_2;
    if (param_2 == (long *)0x0) {
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar5 = (long *)(lVar13 + 8);
      if (lVar4 != 0) {
        plVar5 = (long *)(lVar4 + 0xa8);
      }
      plVar5 = (long *)*plVar5;
    }
    pvVar6 = (void *)(**(code **)(*plVar5 + 0x30))(plVar5,0x60,8);
  }
  FUN_006d2694();
  *(void **)(param_1 + 0x40) = pvVar6;
  lVar13 = *(long *)PTR_DAT_04bb2698;
  if (lVar13 == 0) {
    pvVar6 = malloc(0x3b0);
  }
  else {
    plVar5 = param_2;
    if (param_2 == (long *)0x0) {
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar5 = (long *)(lVar13 + 8);
      if (lVar4 != 0) {
        plVar5 = (long *)(lVar4 + 0xa8);
      }
      plVar5 = (long *)*plVar5;
    }
    pvVar6 = (void *)(**(code **)(*plVar5 + 0x30))(plVar5,0x3b0,8);
  }
  FUN_006d0cb4();
  *(void **)(param_1 + 0x50) = pvVar6;
  puVar1 = PTR_DAT_04bb2698;
  lVar13 = *(long *)PTR_DAT_04bb2698;
  if (lVar13 == 0) {
    puVar7 = malloc(0x100);
    if (puVar7 == (undefined8 *)0x0) goto LAB_01da25c4;
LAB_01da24e0:
    iVar15 = 4;
    puVar7[3] = 0;
    *(undefined2 *)(puVar7 + 6) = 0;
    *(undefined4 *)(puVar7 + 2) = 0;
    *(undefined4 *)((long)puVar7 + 0x34) = 0;
    *(undefined4 *)((long)puVar7 + 0x37) = 0;
    puVar7[0xb] = 0;
    *(undefined2 *)(puVar7 + 0xe) = 0;
    *(undefined4 *)(puVar7 + 10) = 0;
    *(undefined4 *)((long)puVar7 + 0x74) = 0;
    *(undefined4 *)((long)puVar7 + 0x77) = 0;
    puVar7[0x13] = 0;
    *(undefined2 *)(puVar7 + 0x16) = 0;
    *(undefined4 *)(puVar7 + 0x12) = 0;
    *(undefined4 *)((long)puVar7 + 0xb7) = 0;
    *(undefined4 *)((long)puVar7 + 0xb4) = 0;
    puVar7[0x1b] = 0;
    *(undefined2 *)(puVar7 + 0x1e) = 0;
    *(undefined4 *)(puVar7 + 0x1a) = 0;
    *(undefined4 *)((long)puVar7 + 0xf7) = 0;
    *(undefined4 *)((long)puVar7 + 0xf4) = 0;
    *puVar7 = 0;
    puVar7[1] = 0;
    puVar7[8] = 0;
    puVar7[9] = 0;
    puVar7[0x10] = 0;
    puVar7[0x11] = 0;
    puVar7[0x18] = 0;
    puVar7[0x19] = 0;
    *(undefined4 *)(param_1 + 8) = 4;
    *(undefined8 **)(param_1 + 0x10) = puVar7;
    lVar13 = *(long *)(param_1 + 0x20);
  }
  else {
    plVar5 = param_2;
    if (param_2 == (long *)0x0) {
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar5 = (long *)(lVar13 + 8);
      if (lVar4 != 0) {
        plVar5 = (long *)(lVar4 + 0xa8);
      }
      plVar5 = (long *)*plVar5;
      if (plVar5 == (long *)0x0) goto LAB_01da25c4;
    }
    puVar7 = (undefined8 *)(**(code **)(*plVar5 + 0x30))(plVar5,0x100,8);
    if (puVar7 != (undefined8 *)0x0) goto LAB_01da24e0;
LAB_01da25c4:
    iVar15 = *(int *)(param_1 + 8);
    lVar13 = *(long *)(param_1 + 0x20);
  }
  if (lVar13 != 0) {
    (**(code **)(*(long *)(param_1 + 0x18) + 0x10))();
  }
  lVar13 = *(long *)puVar1;
  if (lVar13 == 0) {
    puVar7 = malloc(0x10);
  }
  else {
    plVar5 = param_2;
    if (param_2 == (long *)0x0) {
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar5 = (long *)(lVar13 + 8);
      if (lVar4 != 0) {
        plVar5 = (long *)(lVar4 + 0xa8);
      }
      plVar5 = (long *)*plVar5;
      if (plVar5 == (long *)0x0) {
        puVar7 = (undefined8 *)0x0;
        goto LAB_01da25e0;
      }
    }
    puVar7 = (undefined8 *)(**(code **)(*plVar5 + 0x30))(plVar5,0x10,8);
  }
LAB_01da25e0:
  *puVar7 = 0;
  puVar7[1] = 0;
  *(undefined8 **)(param_1 + 0x20) = puVar7;
  if (0 < iVar15) {
    lVar13 = *(long *)PTR_DAT_04bb2698;
    if (lVar13 == 0) {
      pvVar6 = malloc((long)(iVar15 << 3));
    }
    else {
      plVar5 = param_2;
      if (param_2 == (long *)0x0) {
        lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar5 = (long *)(lVar13 + 8);
        if (lVar4 != 0) {
          plVar5 = (long *)(lVar4 + 0xa8);
        }
        plVar5 = (long *)*plVar5;
        if (plVar5 == (long *)0x0) goto LAB_01da265c;
      }
      pvVar6 = (void *)(**(code **)(*plVar5 + 0x30))(plVar5,(long)(iVar15 << 3),8);
    }
    if (pvVar6 != (void *)0x0) {
      puVar7[1] = pvVar6;
      *(undefined4 *)puVar7 = 0;
      *(int *)((long)puVar7 + 4) = iVar15;
    }
  }
LAB_01da265c:
  uVar3 = *(uint *)(param_1 + 8);
  if (uVar3 != 0) {
    lVar13 = *(long *)(param_1 + 0x10);
    uVar16 = 0;
    puVar1 = PTR_DAT_04bbd6c0 + 0x10;
    plVar5 = (long *)PTR_DAT_04bb2698;
    do {
      lVar14 = *plVar5;
      lVar4 = lVar13 + ((long)((ulong)uVar16 << 0x20) >> 0x1a);
      if (lVar14 == 0) {
        puVar7 = malloc(0x299a8);
        if (puVar7 != (undefined8 *)0x0) goto LAB_01da2760;
LAB_01da2704:
        lVar14 = *plVar5;
        if (lVar14 != 0) goto LAB_01da270c;
LAB_01da27d4:
        pvVar6 = malloc(0x18);
      }
      else {
        plVar9 = param_2;
        if (param_2 == (long *)0x0) {
          lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          plVar9 = (long *)(lVar14 + 8);
          if (lVar8 != 0) {
            plVar9 = (long *)(lVar8 + 0xa8);
          }
          plVar9 = (long *)*plVar9;
          if (plVar9 == (long *)0x0) goto LAB_01da2704;
        }
        puVar7 = (undefined8 *)(**(code **)(*plVar9 + 0x30))(plVar9,0x299a8,8);
        if (puVar7 == (undefined8 *)0x0) goto LAB_01da2704;
LAB_01da2760:
        *puVar7 = 300;
        this = (Friend *)(puVar7 + 1);
        do {
          nn::friends::Friend::Friend(this);
          *(undefined4 *)(this + 0x210) = 0x10;
          *(undefined2 *)(this + 0x232) = 0;
          *(Friend **)(this + 0x208) = this + 0x214;
          *(undefined2 *)(this + 0x214) = 0;
          *(undefined **)(this + 0x200) = puVar1;
          this = this + 0x238;
        } while (this != (Friend *)(puVar7 + 0x5335));
        *(Friend **)(lVar4 + 0x18) = (Friend *)(puVar7 + 1);
        *(undefined4 *)(lVar4 + 0x10) = 300;
        lVar14 = *(long *)PTR_DAT_04bb2698;
        plVar5 = (long *)PTR_DAT_04bb2698;
        if (lVar14 == 0) goto LAB_01da27d4;
LAB_01da270c:
        lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        puVar7 = (undefined8 *)(lVar14 + 8);
        if (lVar8 != 0) {
          puVar7 = (undefined8 *)(lVar8 + 0xa8);
        }
        pvVar6 = (void *)(**(code **)(*(long *)*puVar7 + 0x30))((long *)*puVar7,0x18,8);
      }
      FUN_006d039c(pvVar6,param_2);
      *(void **)(lVar13 + (long)(int)uVar16 * 0x40 + 0x28) = pvVar6;
      piVar12 = *(int **)(param_1 + 0x20);
      if ((piVar12 != (int *)0x0) && (*piVar12 < piVar12[1])) {
        *(long *)(*(long *)(piVar12 + 2) + (long)*piVar12 * 8) = lVar4;
        *piVar12 = *piVar12 + 1;
      }
      uVar16 = uVar16 + 1;
    } while (uVar3 != uVar16);
  }
  lVar13 = param_1 + 0x60;
  FUN_03ebac90(lVar13,3,0,param_2,0);
  puVar1 = PTR_DAT_04bb2020;
  plVar5 = (long *)(PTR_DAT_04bb2020 + 0x10);
  pcStack_68 = "FriendState::cIdle";
  local_70 = plVar5;
  FUN_03ebaf40(lVar13,0,&local_70);
  puVar7 = *(undefined8 **)(param_1 + 0x90);
  *puVar7 = &PTR_LAB_04a5b028;
  puVar7[1] = param_1;
  puVar7[2] = &LAB_01da31b8;
  puVar7[3] = 0;
  puVar7[4] = &LAB_01da31bc;
  puVar7[5] = 0;
  puVar7[6] = 0;
  puVar7[7] = 0;
  pcStack_68 = "FriendState::cUnlockWait";
  local_70 = plVar5;
  FUN_03ebaf40(lVar13,1,&local_70);
  puVar7 = (undefined8 *)(*(long *)(param_1 + 0x90) + (ulong)(1 < *(uint *)(param_1 + 0x88)) * 0x40)
  ;
  puVar7[2] = &LAB_01da31c0;
  puVar7[3] = 0;
  *puVar7 = &PTR_LAB_04a5b028;
  puVar7[1] = param_1;
  puVar7[4] = &LAB_01da31d4;
  puVar7[5] = 0;
  puVar7[6] = 0;
  puVar7[7] = 0;
  pcStack_68 = "FriendState::cUpdate";
  local_70 = plVar5;
  FUN_03ebaf40(lVar13,2,&local_70);
  puVar7 = (undefined8 *)(*(long *)(param_1 + 0x90) + (ulong)(2 < *(uint *)(param_1 + 0x88)) * 0x80)
  ;
  puVar7[2] = &LAB_01da3244;
  puVar7[3] = 0;
  *puVar7 = &PTR_LAB_04a5b028;
  puVar7[1] = param_1;
  puVar7[6] = 0;
  puVar7[7] = 0;
  puVar7[4] = &LAB_01da3310;
  puVar7[5] = 0;
  *(undefined1 *)(param_1 + 0x81) = 1;
  uVar3 = *(uint *)(param_1 + 0x78);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_1 + 0x6c);
  *(uint *)(param_1 + 0x68) = uVar3;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  if (uVar3 != 0xffffffff) {
    if (*(uint *)(param_1 + 0x88) <= uVar3) {
      uVar3 = 0;
    }
    puVar7 = *(undefined8 **)(*(long *)(param_1 + 0x90) + (long)(int)uVar3 * 0x40);
    if (puVar7 != (undefined8 *)0x0) {
      (*(code *)*puVar7)();
    }
  }
  lVar13 = param_1 + 0xa8;
  FUN_03ebac90(lVar13,5,0,param_2,0);
  pcStack_68 = "BestFriendState::cIdle";
  local_70 = plVar5;
  FUN_03ebaf40(lVar13,0,&local_70);
  puVar7 = *(undefined8 **)(param_1 + 0xd8);
  *puVar7 = &PTR_LAB_04a5b028;
  puVar7[1] = param_1;
  puVar7[2] = &LAB_01da31b8;
  puVar7[3] = 0;
  puVar7[4] = &LAB_01da31bc;
  puVar7[5] = 0;
  puVar7[6] = 0;
  puVar7[7] = 0;
  pcStack_68 = "BestFriendState::cConnect";
  local_70 = plVar5;
  FUN_03ebaf40(lVar13,1,&local_70);
  puVar7 = (undefined8 *)(*(long *)(param_1 + 0xd8) + (ulong)(1 < *(uint *)(param_1 + 0xd0)) * 0x40)
  ;
  puVar7[2] = &LAB_01da3584;
  puVar7[3] = 0;
  *puVar7 = &PTR_LAB_04a5b028;
  puVar7[1] = param_1;
  puVar7[4] = &LAB_01da3664;
  puVar7[5] = 0;
  puVar7[6] = 0;
  puVar7[7] = 0;
  pcStack_68 = "BestFriendState::cGetPOPID";
  local_70 = plVar5;
  FUN_03ebaf40(lVar13,2,&local_70);
  puVar7 = (undefined8 *)(*(long *)(param_1 + 0xd8) + (ulong)(2 < *(uint *)(param_1 + 0xd0)) * 0x80)
  ;
  puVar7[2] = &LAB_01da372c;
  puVar7[3] = 0;
  *puVar7 = &PTR_LAB_04a5b028;
  puVar7[1] = param_1;
  puVar7[4] = &LAB_01da3988;
  puVar7[5] = 0;
  puVar7[6] = 0;
  puVar7[7] = 0;
  pcStack_68 = "BestFriendState::cAction";
  local_70 = plVar5;
  FUN_03ebaf40(lVar13,3,&local_70);
  lVar4 = 0xc0;
  if (*(uint *)(param_1 + 0xd0) < 4) {
    lVar4 = 0;
  }
  puVar7 = (undefined8 *)(*(long *)(param_1 + 0xd8) + lVar4);
  puVar7[2] = &LAB_01da3c58;
  puVar7[3] = 0;
  *puVar7 = &PTR_LAB_04a5b028;
  puVar7[1] = param_1;
  puVar7[4] = &LAB_01da3d54;
  puVar7[5] = 0;
  puVar7[6] = 0;
  puVar7[7] = 0;
  pcStack_68 = "BestFriendState::cDisconnect";
  local_70 = plVar5;
  FUN_03ebaf40(lVar13,4,&local_70);
  puVar7 = (undefined8 *)
           (*(long *)(param_1 + 0xd8) + (ulong)(4 < *(uint *)(param_1 + 0xd0)) * 0x100);
  puVar7[2] = &LAB_01da3da8;
  puVar7[3] = 0;
  *puVar7 = &PTR_LAB_04a5b028;
  puVar7[1] = param_1;
  puVar7[6] = 0;
  puVar7[7] = 0;
  puVar7[4] = &LAB_01da3e3c;
  puVar7[5] = 0;
  *(undefined1 *)(param_1 + 0xc9) = 1;
  uVar3 = *(uint *)(param_1 + 0xc0);
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0xb0);
  *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0xb4);
  *(uint *)(param_1 + 0xb0) = uVar3;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  if (uVar3 != 0xffffffff) {
    if (*(uint *)(param_1 + 0xd0) <= uVar3) {
      uVar3 = 0;
    }
    puVar7 = *(undefined8 **)(*(long *)(param_1 + 0xd8) + (long)(int)uVar3 * 0x40);
    if (puVar7 != (undefined8 *)0x0) {
      (*(code *)*puVar7)();
    }
  }
  lVar13 = param_1 + 0xf0;
  FUN_03ebac90(lVar13,6,0,param_2,0);
  plVar5 = (long *)(puVar1 + 0x10);
  pcStack_68 = "ActionState::cIdle";
  local_70 = plVar5;
  FUN_03ebaf40(lVar13,0,&local_70);
  puVar7 = *(undefined8 **)(param_1 + 0x120);
  *puVar7 = &PTR_LAB_04a5b028;
  puVar7[1] = param_1;
  puVar7[2] = &LAB_01da31b8;
  puVar7[3] = 0;
  puVar7[4] = &LAB_01da31bc;
  puVar7[5] = 0;
  puVar7[6] = 0;
  puVar7[7] = 0;
  pcStack_68 = "ActionState::cUpdate";
  local_70 = plVar5;
  FUN_03ebaf40(lVar13,1,&local_70);
  puVar7 = (undefined8 *)
           (*(long *)(param_1 + 0x120) + (ulong)(1 < *(uint *)(param_1 + 0x118)) * 0x40);
  puVar7[2] = &LAB_01da3e90;
  puVar7[3] = 0;
  *puVar7 = &PTR_LAB_04a5b028;
  puVar7[1] = param_1;
  puVar7[4] = &LAB_01da3f1c;
  puVar7[5] = 0;
  puVar7[6] = 0;
  puVar7[7] = 0;
  pcStack_68 = "ActionState::cSendRequest";
  local_70 = plVar5;
  FUN_03ebaf40(lVar13,2,&local_70);
  puVar7 = (undefined8 *)
           (*(long *)(param_1 + 0x120) + (ulong)(2 < *(uint *)(param_1 + 0x118)) * 0x80);
  puVar7[2] = &LAB_01da4160;
  puVar7[3] = 0;
  *puVar7 = &PTR_LAB_04a5b028;
  puVar7[1] = param_1;
  puVar7[4] = &LAB_01da4664;
  puVar7[5] = 0;
  puVar7[6] = 0;
  puVar7[7] = 0;
  pcStack_68 = "ActionState::cResponseRequest";
  local_70 = plVar5;
  FUN_03ebaf40(lVar13,3,&local_70);
  lVar4 = 0xc0;
  if (*(uint *)(param_1 + 0x118) < 4) {
    lVar4 = 0;
  }
  puVar7 = (undefined8 *)(*(long *)(param_1 + 0x120) + lVar4);
  puVar7[2] = &LAB_01da476c;
  puVar7[3] = 0;
  *puVar7 = &PTR_LAB_04a5b028;
  puVar7[1] = param_1;
  puVar7[4] = &LAB_01da4828;
  puVar7[5] = 0;
  puVar7[6] = 0;
  puVar7[7] = 0;
  pcStack_68 = "ActionState::cDelete";
  local_70 = plVar5;
  FUN_03ebaf40(lVar13,4,&local_70);
  puVar7 = (undefined8 *)
           (*(long *)(param_1 + 0x120) + (ulong)(4 < *(uint *)(param_1 + 0x118)) * 0x100);
  puVar7[2] = &LAB_01da4930;
  puVar7[3] = 0;
  *puVar7 = &PTR_LAB_04a5b028;
  puVar7[1] = param_1;
  puVar7[4] = &LAB_01da49d0;
  puVar7[5] = 0;
  puVar7[6] = 0;
  puVar7[7] = 0;
  pcStack_68 = "ActionState::cCleanup";
  local_70 = plVar5;
  FUN_03ebaf40(lVar13,5,&local_70);
  lVar13 = 0x140;
  if (*(uint *)(param_1 + 0x118) < 6) {
    lVar13 = 0;
  }
  puVar7 = (undefined8 *)(*(long *)(param_1 + 0x120) + lVar13);
  puVar7[2] = &LAB_01da4ae0;
  puVar7[3] = 0;
  *puVar7 = &PTR_LAB_04a5b028;
  puVar7[1] = param_1;
  puVar7[6] = 0;
  puVar7[7] = 0;
  puVar7[4] = &LAB_01da4b80;
  puVar7[5] = 0;
  *(undefined1 *)(param_1 + 0x111) = 1;
  uVar3 = *(uint *)(param_1 + 0x108);
  uVar2 = *(undefined4 *)(param_1 + 0xfc);
  *(undefined4 *)(param_1 + 0xfc) = 0;
  *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_1 + 0xf8);
  *(undefined4 *)(param_1 + 0x104) = uVar2;
  *(uint *)(param_1 + 0xf8) = uVar3;
  if (uVar3 != 0xffffffff) {
    if (*(uint *)(param_1 + 0x118) <= uVar3) {
      uVar3 = 0;
    }
    puVar7 = *(undefined8 **)(*(long *)(param_1 + 0x120) + (long)(int)uVar3 * 0x40);
    if (puVar7 != (undefined8 *)0x0) {
      (*(code *)*puVar7)();
    }
  }
  puVar1 = PTR_DAT_04bb2698;
  lVar13 = *(long *)PTR_DAT_04bb2698;
  if (lVar13 == 0) {
    puVar7 = malloc(0x20);
  }
  else {
    plVar5 = param_2;
    if (param_2 == (long *)0x0) {
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar5 = (long *)(lVar13 + 8);
      if (lVar4 != 0) {
        plVar5 = (long *)(lVar4 + 0xa8);
      }
      plVar5 = (long *)*plVar5;
    }
    puVar7 = (undefined8 *)(**(code **)(*plVar5 + 0x30))(plVar5,0x20,8);
  }
  *puVar7 = &PTR_LAB_04a5b050;
  puVar7[1] = param_1;
  lVar13 = *(long *)puVar1;
  *(undefined8 **)(param_1 + 0x140) = puVar7;
  if (lVar13 == 0) {
    puVar10 = malloc(0x10);
  }
  else {
    plVar5 = param_2;
    if (param_2 == (long *)0x0) {
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar5 = (long *)(lVar13 + 8);
      if (lVar4 != 0) {
        plVar5 = (long *)(lVar4 + 0xa8);
      }
      plVar5 = (long *)*plVar5;
    }
    puVar10 = (undefined4 *)(**(code **)(*plVar5 + 0x30))(plVar5,0x10,8);
  }
  *puVar10 = 0;
  lVar13 = *(long *)puVar1;
  *(undefined4 **)(param_1 + 0x148) = puVar10;
  if (lVar13 == 0) {
    pvVar6 = malloc(0x18);
    *(void **)(param_1 + 0x150) = pvVar6;
LAB_01da2ed8:
    pvVar6 = malloc(8);
    *(void **)(param_1 + 0x158) = pvVar6;
LAB_01da2ee4:
    puVar7 = malloc(0x340);
  }
  else {
    plVar5 = param_2;
    if (param_2 == (long *)0x0) {
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar5 = (long *)(lVar13 + 8);
      if (lVar4 != 0) {
        plVar5 = (long *)(lVar4 + 0xa8);
      }
      plVar5 = (long *)*plVar5;
      if (plVar5 != (long *)0x0) goto LAB_01da2ea0;
      lVar13 = *(long *)puVar1;
      *(undefined8 *)(param_1 + 0x150) = 0;
      if (lVar13 == 0) goto LAB_01da2ed8;
LAB_01da2f14:
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar5 = (long *)(lVar13 + 8);
      if (lVar4 != 0) {
        plVar5 = (long *)(lVar4 + 0xa8);
      }
      plVar5 = (long *)*plVar5;
      if (plVar5 != (long *)0x0) goto LAB_01da2f40;
      lVar13 = *(long *)puVar1;
      *(undefined8 *)(param_1 + 0x158) = 0;
      if (lVar13 == 0) goto LAB_01da2ee4;
LAB_01da2f78:
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar5 = (long *)(lVar13 + 8);
      if (lVar4 != 0) {
        plVar5 = (long *)(lVar4 + 0xa8);
      }
      plVar5 = (long *)*plVar5;
    }
    else {
LAB_01da2ea0:
      uVar11 = (**(code **)(*plVar5 + 0x30))(plVar5,0x18,8);
      lVar13 = *(long *)puVar1;
      *(undefined8 *)(param_1 + 0x150) = uVar11;
      if (lVar13 == 0) goto LAB_01da2ed8;
      plVar5 = param_2;
      if (param_2 == (long *)0x0) goto LAB_01da2f14;
LAB_01da2f40:
      uVar11 = (**(code **)(*plVar5 + 0x30))(plVar5,8,8);
      lVar13 = *(long *)puVar1;
      *(undefined8 *)(param_1 + 0x158) = uVar11;
      if (lVar13 == 0) goto LAB_01da2ee4;
      plVar5 = param_2;
      if (param_2 == (long *)0x0) goto LAB_01da2f78;
    }
    puVar7 = (undefined8 *)(**(code **)(*plVar5 + 0x30))(plVar5,0x340,8);
  }
  *(undefined4 *)(puVar7 + 3) = 0;
  *puVar7 = 0;
  puVar7[1] = puVar7 + 4;
  puVar7[2] = 100;
  *(undefined8 **)(param_1 + 0x160) = puVar7;
  iVar15 = (int)*(ulong *)(*(long *)PTR_DAT_04bb21c8 + 0xb8);
  if (0 < iVar15) {
    __size = *(ulong *)(*(long *)PTR_DAT_04bb21c8 + 0xb8) & 0xffffffff;
    lVar13 = *(long *)puVar1;
    if (lVar13 == 0) {
      pvVar6 = malloc(__size);
    }
    else {
      if (param_2 == (long *)0x0) {
        lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        puVar7 = (undefined8 *)(lVar13 + 8);
        if (lVar4 != 0) {
          puVar7 = (undefined8 *)(lVar4 + 0xa8);
        }
        param_2 = (long *)*puVar7;
        if (param_2 == (long *)0x0) {
          return;
        }
      }
      pvVar6 = (void *)(**(code **)(*param_2 + 0x30))(param_2,__size,8);
    }
    if (pvVar6 != (void *)0x0) {
      *(int *)(param_1 + 0x1b8) = iVar15;
      *(void **)(param_1 + 0x1c0) = pvVar6;
    }
  }
  return;
}


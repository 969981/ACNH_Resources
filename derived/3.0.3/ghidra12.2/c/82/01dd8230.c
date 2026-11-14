
void FUN_01dd8230(long param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  undefined *local_70;
  char *pcStack_68;
  
  puVar2 = PTR_DAT_04bb2698;
  lVar8 = *(long *)PTR_DAT_04bb2698;
  if (lVar8 == 0) {
    puVar6 = malloc(0x10);
    if (puVar6 == (undefined8 *)0x0) goto LAB_01dd82dc;
LAB_01dd82b8:
    uVar9 = 1;
    *puVar6 = 0;
    *(undefined8 **)(param_1 + 0x50) = puVar6;
    *(undefined4 *)(param_1 + 0x48) = 1;
  }
  else {
    plVar5 = param_2;
    if (param_2 == (long *)0x0) {
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar5 = (long *)(lVar8 + 8);
      if (lVar4 != 0) {
        plVar5 = (long *)(lVar4 + 0xa8);
      }
      plVar5 = (long *)*plVar5;
      if (plVar5 == (long *)0x0) goto LAB_01dd82dc;
    }
    puVar6 = (undefined8 *)(**(code **)(*plVar5 + 0x30))(plVar5,0x10,8);
    if (puVar6 != (undefined8 *)0x0) goto LAB_01dd82b8;
LAB_01dd82dc:
    uVar9 = *(uint *)(param_1 + 0x48);
    if (uVar9 == 0) goto LAB_01dd840c;
    puVar6 = *(undefined8 **)(param_1 + 0x50);
  }
  uVar10 = 0;
  puVar1 = PTR_DAT_04bdf1d8 + 0x10;
  do {
    lVar8 = *(long *)puVar2;
    if (lVar8 == 0) {
      plVar5 = malloc(0x20);
    }
    else {
      plVar5 = param_2;
      if (param_2 == (long *)0x0) {
        lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar5 = (long *)(lVar8 + 8);
        if (lVar4 != 0) {
          plVar5 = (long *)(lVar4 + 0xa8);
        }
        plVar5 = (long *)*plVar5;
      }
      plVar5 = (long *)(**(code **)(*plVar5 + 0x30))(plVar5,0x20,8);
    }
    *plVar5 = (long)puVar1;
    plVar5[1] = 0;
    plVar5[2] = 0;
    plVar5[3] = 0;
    *(long **)((long)puVar6 + ((long)((ulong)uVar10 << 0x20) >> 0x1c)) = plVar5;
    lVar8 = *(long *)puVar2;
    if (lVar8 == 0) {
      puVar7 = malloc(0x28);
    }
    else {
      plVar5 = param_2;
      if (param_2 == (long *)0x0) {
        lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar5 = (long *)(lVar8 + 8);
        if (lVar4 != 0) {
          plVar5 = (long *)(lVar4 + 0xa8);
        }
        plVar5 = (long *)*plVar5;
      }
      puVar7 = (undefined8 *)(**(code **)(*plVar5 + 0x30))(plVar5,0x28,8);
    }
    *puVar7 = &PTR_LAB_04a5ba30;
    puVar7[1] = 0;
    *(undefined4 *)(puVar7 + 2) = 0;
    puVar6[(long)(int)uVar10 * 2 + 1] = puVar7;
    uVar10 = uVar10 + 1;
  } while (uVar9 != uVar10);
LAB_01dd840c:
  lVar8 = param_1 + 0x100;
  *(long *)(param_1 + 0x30) = param_1;
  *(code **)(param_1 + 0x38) = FUN_01dd86ec;
  *(undefined8 *)(param_1 + 0x40) = 0;
  FUN_03ebac90(lVar8,7,0,param_2,0);
  puVar2 = PTR_DAT_04bb2020 + 0x10;
  pcStack_68 = "State::cIdle";
  local_70 = puVar2;
  FUN_03ebaf40(lVar8,0,&local_70);
  puVar6 = *(undefined8 **)(param_1 + 0x130);
  puVar6[2] = &LAB_01dd896c;
  puVar6[3] = 0;
  *puVar6 = &PTR_LAB_04a5bab0;
  puVar6[1] = param_1;
  puVar6[4] = &LAB_01dd8a10;
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  pcStack_68 = "State::cGamma";
  local_70 = puVar2;
  FUN_03ebaf40(lVar8,1,&local_70);
  puVar6 = (undefined8 *)
           (*(long *)(param_1 + 0x130) + (ulong)(1 < *(uint *)(param_1 + 0x128)) * 0x40);
  puVar6[2] = &LAB_01dd8a14;
  puVar6[3] = 0;
  *puVar6 = &PTR_LAB_04a5bab0;
  puVar6[1] = param_1;
  puVar6[4] = &LAB_01dd8a20;
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  pcStack_68 = "State::cConnect";
  local_70 = puVar2;
  FUN_03ebaf40(lVar8,2,&local_70);
  puVar6 = (undefined8 *)
           (*(long *)(param_1 + 0x130) + (ulong)(2 < *(uint *)(param_1 + 0x128)) * 0x80);
  puVar6[2] = &LAB_01dd9038;
  puVar6[3] = 0;
  *puVar6 = &PTR_LAB_04a5bab0;
  puVar6[1] = param_1;
  puVar6[4] = &LAB_01dd90d8;
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  pcStack_68 = "State::cCheckNSA";
  local_70 = puVar2;
  FUN_03ebaf40(lVar8,3,&local_70);
  lVar4 = 0xc0;
  if (*(uint *)(param_1 + 0x128) < 4) {
    lVar4 = 0;
  }
  puVar6 = (undefined8 *)(*(long *)(param_1 + 0x130) + lVar4);
  puVar6[2] = &LAB_01dd9204;
  puVar6[3] = 0;
  *puVar6 = &PTR_LAB_04a5bab0;
  puVar6[1] = param_1;
  puVar6[4] = &LAB_01dd929c;
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  pcStack_68 = "State::cCheckReport";
  local_70 = puVar2;
  FUN_03ebaf40(lVar8,4,&local_70);
  puVar6 = (undefined8 *)
           (*(long *)(param_1 + 0x130) + (ulong)(4 < *(uint *)(param_1 + 0x128)) * 0x100);
  puVar6[2] = &LAB_01dd93d8;
  puVar6[3] = 0;
  *puVar6 = &PTR_LAB_04a5bab0;
  puVar6[1] = param_1;
  puVar6[4] = &LAB_01dd954c;
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  pcStack_68 = "State::cUpdatePersonal";
  local_70 = puVar2;
  FUN_03ebaf40(lVar8,5,&local_70);
  lVar4 = 0x140;
  if (*(uint *)(param_1 + 0x128) < 6) {
    lVar4 = 0;
  }
  puVar6 = (undefined8 *)(*(long *)(param_1 + 0x130) + lVar4);
  puVar6[2] = &LAB_01dd95f0;
  puVar6[3] = 0;
  *puVar6 = &PTR_LAB_04a5bab0;
  puVar6[1] = param_1;
  puVar6[4] = &LAB_01dd979c;
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  pcStack_68 = "State::cUpdateLand";
  local_70 = puVar2;
  FUN_03ebaf40(lVar8,6,&local_70);
  lVar8 = 0x180;
  if (*(uint *)(param_1 + 0x128) < 7) {
    lVar8 = 0;
  }
  puVar6 = (undefined8 *)(*(long *)(param_1 + 0x130) + lVar8);
  puVar6[2] = &LAB_01dd9afc;
  puVar6[3] = 0;
  *puVar6 = &PTR_LAB_04a5bab0;
  puVar6[1] = param_1;
  puVar6[6] = 0;
  puVar6[7] = 0;
  puVar6[4] = &LAB_01dd9ca8;
  puVar6[5] = 0;
  *(undefined1 *)(param_1 + 0x121) = 1;
  uVar9 = *(uint *)(param_1 + 0x118);
  *(undefined4 *)(param_1 + 0x110) = *(undefined4 *)(param_1 + 0x108);
  uVar3 = *(undefined4 *)(param_1 + 0x10c);
  *(uint *)(param_1 + 0x108) = uVar9;
  *(undefined4 *)(param_1 + 0x10c) = 0;
  *(undefined4 *)(param_1 + 0x114) = uVar3;
  if (uVar9 != 0xffffffff) {
    if (*(uint *)(param_1 + 0x128) <= uVar9) {
      uVar9 = 0;
    }
    puVar6 = *(undefined8 **)(*(long *)(param_1 + 0x130) + (long)(int)uVar9 * 0x40);
    if (puVar6 != (undefined8 *)0x0) {
      (*(code *)*puVar6)();
    }
  }
  return;
}


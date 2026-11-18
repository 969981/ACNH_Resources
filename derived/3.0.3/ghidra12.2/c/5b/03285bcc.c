
/* WARNING: Removing unreachable block (ram,0x03285c10) */
/* WARNING: Removing unreachable block (ram,0x03285d78) */

void FUN_03285bcc(long *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                 long param_5,undefined4 *param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  void *pvVar8;
  undefined4 local_9c;
  undefined **local_98;
  long *local_90;
  undefined1 auStack_88 [36];
  undefined4 local_64;
  
  local_64 = 0;
  puVar4 = (undefined1 *)(**(code **)(*(long *)*param_2 + 0x30))((long *)*param_2,0x1e0,8);
  *puVar4 = 0;
  puVar1 = PTR_DAT_04bb2020;
  *(undefined2 *)(puVar4 + 0x30) = 0;
  puVar2 = PTR_PTR_04bb2238;
  puVar4[0x32] = 0;
  *(undefined2 *)(puVar4 + 0x60) = 0;
  puVar1 = puVar1 + 0x10;
  puVar4[0x62] = 0;
  *(undefined2 *)(puVar4 + 0x90) = 0;
  puVar4[0x92] = 0;
  *(undefined2 *)(puVar4 + 0xc0) = 0;
  puVar4[0xc2] = 0;
  *(undefined2 *)(puVar4 + 0xf0) = 0;
  puVar4[0xf2] = 0;
  *(undefined2 *)(puVar4 + 0x120) = 0;
  puVar4[0x122] = 0;
  *(undefined2 *)(puVar4 + 0x150) = 0;
  puVar4[0x152] = 0;
  *(undefined2 *)(puVar4 + 0x180) = 0;
  puVar4[0x182] = 0;
  *(undefined4 *)(puVar4 + 0x1c8) = 0;
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined **)(puVar4 + 0x10) = puVar1;
  uVar7 = *(undefined8 *)(puVar2 + 8);
  *(undefined8 *)(puVar4 + 0x28) = uVar7;
  *(undefined8 *)(puVar4 + 0x58) = uVar7;
  *(undefined8 *)(puVar4 + 0x88) = uVar7;
  *(undefined8 *)(puVar4 + 0xb8) = uVar7;
  *(undefined8 *)(puVar4 + 0xe8) = uVar7;
  *(undefined8 *)(puVar4 + 0x118) = uVar7;
  *(undefined8 *)(puVar4 + 0x148) = uVar7;
  *(undefined8 *)(puVar4 + 0x178) = uVar7;
  *(undefined8 *)(puVar4 + 0x38) = 0;
  *(undefined **)(puVar4 + 0x40) = puVar1;
  *(undefined8 *)(puVar4 + 0x18) = uVar7;
  *(undefined **)(puVar4 + 0x20) = puVar1;
  *(undefined8 *)(puVar4 + 0x48) = uVar7;
  *(undefined **)(puVar4 + 0x50) = puVar1;
  *(undefined8 *)(puVar4 + 0x68) = 0;
  *(undefined **)(puVar4 + 0x70) = puVar1;
  *(undefined8 *)(puVar4 + 0x78) = uVar7;
  *(undefined **)(puVar4 + 0x80) = puVar1;
  *(undefined8 *)(puVar4 + 0x98) = 0;
  *(undefined **)(puVar4 + 0xa0) = puVar1;
  *(undefined8 *)(puVar4 + 0xa8) = uVar7;
  *(undefined **)(puVar4 + 0xb0) = puVar1;
  *(undefined8 *)(puVar4 + 200) = 0;
  *(undefined **)(puVar4 + 0xd0) = puVar1;
  *(undefined8 *)(puVar4 + 0xd8) = uVar7;
  *(undefined **)(puVar4 + 0xe0) = puVar1;
  *(undefined8 *)(puVar4 + 0xf8) = 0;
  *(undefined **)(puVar4 + 0x100) = puVar1;
  *(undefined8 *)(puVar4 + 0x108) = uVar7;
  *(undefined **)(puVar4 + 0x110) = puVar1;
  *(undefined8 *)(puVar4 + 0x128) = 0;
  *(undefined **)(puVar4 + 0x130) = puVar1;
  *(undefined8 *)(puVar4 + 0x138) = uVar7;
  *(undefined **)(puVar4 + 0x140) = puVar1;
  *(undefined8 *)(puVar4 + 0x158) = 0;
  *(undefined **)(puVar4 + 0x160) = puVar1;
  *(undefined8 *)(puVar4 + 0x168) = uVar7;
  *(undefined **)(puVar4 + 0x170) = puVar1;
  *(undefined ***)(puVar4 + 0x188) = &PTR_LAB_04b17830;
  *(undefined8 *)(puVar4 + 400) = 0;
  *(undefined8 *)(puVar4 + 0x1b8) = 0;
  *(undefined8 *)(puVar4 + 0x1c0) = 0;
  *(undefined8 *)(puVar4 + 0x1d0) = 0;
  *(undefined8 *)(puVar4 + 0x1d8) = 0;
  FUN_03285f74();
  pvVar8 = (void *)param_1[1];
  param_1[1] = (long)puVar4;
  puVar3 = PTR_DAT_04bb2698;
  if (pvVar8 != (void *)0x0) {
    *(undefined8 *)((long)pvVar8 + 0x1d0) = 0;
    *(undefined8 *)((long)pvVar8 + 0x1b8) = 0;
    *(undefined8 *)((long)pvVar8 + 0x1c0) = 0;
    if (*(long **)((long)pvVar8 + 400) != (long *)0x0) {
      (**(code **)(**(long **)((long)pvVar8 + 400) + 8))();
    }
    lVar5 = *(long *)puVar3;
    if (lVar5 == 0) {
      free(pvVar8);
    }
    else {
      plVar6 = (long *)FUN_038cb610(lVar5,pvVar8);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x38))(plVar6,pvVar8);
      }
    }
  }
  local_64 = 0;
  puVar4 = (undefined1 *)(**(code **)(*(long *)*param_2 + 0x30))((long *)*param_2,0x1e0,8);
  *puVar4 = 0;
  *(undefined2 *)(puVar4 + 0x30) = 0;
  puVar4[0x32] = 0;
  *(undefined2 *)(puVar4 + 0x60) = 0;
  puVar4[0x62] = 0;
  *(undefined2 *)(puVar4 + 0x90) = 0;
  puVar4[0x92] = 0;
  *(undefined2 *)(puVar4 + 0xc0) = 0;
  puVar4[0xc2] = 0;
  *(undefined2 *)(puVar4 + 0xf0) = 0;
  puVar4[0xf2] = 0;
  *(undefined2 *)(puVar4 + 0x120) = 0;
  puVar4[0x122] = 0;
  *(undefined2 *)(puVar4 + 0x150) = 0;
  puVar4[0x152] = 0;
  *(undefined2 *)(puVar4 + 0x180) = 0;
  puVar4[0x182] = 0;
  *(undefined4 *)(puVar4 + 0x1c8) = 0;
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined **)(puVar4 + 0x10) = puVar1;
  uVar7 = *(undefined8 *)(puVar2 + 8);
  *(undefined8 *)(puVar4 + 0x28) = uVar7;
  *(undefined8 *)(puVar4 + 0x58) = uVar7;
  *(undefined8 *)(puVar4 + 0x88) = uVar7;
  *(undefined8 *)(puVar4 + 0xb8) = uVar7;
  *(undefined8 *)(puVar4 + 0xe8) = uVar7;
  *(undefined8 *)(puVar4 + 0x118) = uVar7;
  *(undefined8 *)(puVar4 + 0x148) = uVar7;
  *(undefined8 *)(puVar4 + 0x178) = uVar7;
  *(undefined8 *)(puVar4 + 0x18) = uVar7;
  *(undefined **)(puVar4 + 0x20) = puVar1;
  *(undefined8 *)(puVar4 + 0x38) = 0;
  *(undefined **)(puVar4 + 0x40) = puVar1;
  *(undefined8 *)(puVar4 + 0x48) = uVar7;
  *(undefined **)(puVar4 + 0x50) = puVar1;
  *(undefined8 *)(puVar4 + 0x68) = 0;
  *(undefined **)(puVar4 + 0x70) = puVar1;
  *(undefined8 *)(puVar4 + 0x78) = uVar7;
  *(undefined **)(puVar4 + 0x80) = puVar1;
  *(undefined8 *)(puVar4 + 0x98) = 0;
  *(undefined **)(puVar4 + 0xa0) = puVar1;
  *(undefined8 *)(puVar4 + 0xa8) = uVar7;
  *(undefined **)(puVar4 + 0xb0) = puVar1;
  *(undefined8 *)(puVar4 + 200) = 0;
  *(undefined **)(puVar4 + 0xd0) = puVar1;
  *(undefined8 *)(puVar4 + 0xd8) = uVar7;
  *(undefined **)(puVar4 + 0xe0) = puVar1;
  *(undefined8 *)(puVar4 + 0xf8) = 0;
  *(undefined **)(puVar4 + 0x100) = puVar1;
  *(undefined8 *)(puVar4 + 0x108) = uVar7;
  *(undefined **)(puVar4 + 0x110) = puVar1;
  *(undefined8 *)(puVar4 + 0x128) = 0;
  *(undefined **)(puVar4 + 0x130) = puVar1;
  *(undefined8 *)(puVar4 + 0x138) = uVar7;
  *(undefined **)(puVar4 + 0x140) = puVar1;
  *(undefined8 *)(puVar4 + 0x158) = 0;
  *(undefined **)(puVar4 + 0x160) = puVar1;
  *(undefined8 *)(puVar4 + 0x168) = uVar7;
  *(undefined **)(puVar4 + 0x170) = puVar1;
  *(undefined ***)(puVar4 + 0x188) = &PTR_LAB_04b17830;
  *(undefined8 *)(puVar4 + 400) = 0;
  *(undefined8 *)(puVar4 + 0x1b8) = 0;
  *(undefined8 *)(puVar4 + 0x1c0) = 0;
  *(undefined8 *)(puVar4 + 0x1d0) = 0;
  *(undefined8 *)(puVar4 + 0x1d8) = 0;
  FUN_03285f74();
  pvVar8 = (void *)param_1[2];
  param_1[2] = (long)puVar4;
  if (pvVar8 != (void *)0x0) {
    *(undefined8 *)((long)pvVar8 + 0x1d0) = 0;
    *(undefined8 *)((long)pvVar8 + 0x1b8) = 0;
    *(undefined8 *)((long)pvVar8 + 0x1c0) = 0;
    if (*(long **)((long)pvVar8 + 400) != (long *)0x0) {
      (**(code **)(**(long **)((long)pvVar8 + 400) + 8))();
    }
    lVar5 = *(long *)puVar3;
    if (lVar5 == 0) {
      free(pvVar8);
    }
    else {
      plVar6 = (long *)FUN_038cb610(lVar5,pvVar8);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x38))(plVar6,pvVar8);
      }
    }
  }
  if (*(long *)PTR_DAT_04bc8ed0 != 0) {
    FUN_032a6a10(*(long *)PTR_DAT_04bc8ed0,param_1[2]);
  }
  (**(code **)(*param_1 + 0x10))(param_1);
  (**(code **)(*param_1 + 0x18))(param_1,param_3,param_4);
  local_98 = &PTR_LAB_04b17830;
  local_90 = (long *)0x0;
  plVar6 = *(long **)(param_5 + 8);
  if (plVar6 != (long *)0x0) {
    local_90 = (long *)(**(code **)(*plVar6 + 0x18))(plVar6,auStack_88);
  }
  (**(code **)(*param_1 + 0x20))(param_1,&local_98);
  if (local_90 != (long *)0x0) {
    (**(code **)(*local_90 + 8))();
  }
  local_9c = *param_6;
  (**(code **)(*param_1 + 0x28))(param_1,&local_9c);
  return;
}


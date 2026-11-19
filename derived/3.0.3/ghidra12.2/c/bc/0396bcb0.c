
void FUN_0396bcb0(long param_1,undefined1 param_2,long *param_3,int *param_4,undefined8 param_5,
                 undefined8 param_6,int param_7,int param_8,long *param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  void *pvVar3;
  uint uVar4;
  bool bVar5;
  long lVar6;
  long *plVar7;
  void *pvVar8;
  undefined8 *puVar9;
  ulong *puVar10;
  undefined8 uVar11;
  long *plVar12;
  byte bVar13;
  undefined4 uVar14;
  int iVar15;
  undefined4 uVar16;
  long lVar17;
  size_t sVar18;
  long *plVar19;
  long *plVar20;
  float local_180;
  float fStack_17c;
  
  *(undefined1 *)(param_1 + 8) = param_2;
  *(undefined8 *)(param_1 + 0x680) = param_6;
  plVar20 = (long *)PTR_DAT_04bb2698;
  if (param_7 < 1) {
LAB_0396bd6c:
    lVar17 = *plVar20;
    if (lVar17 == 0) goto LAB_0396c54c;
    plVar7 = param_9;
    if (param_9 != (long *)0x0) {
LAB_0396bda8:
      puVar9 = (undefined8 *)(**(code **)(*plVar7 + 0x30))(plVar7,0x78,8);
      if (puVar9 == (undefined8 *)0x0) goto LAB_0396be1c;
      goto LAB_0396bdc0;
    }
LAB_0396bd7c:
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar7 = (long *)(lVar17 + 8);
    if (lVar6 != 0) {
      plVar7 = (long *)(lVar6 + 0xa8);
    }
    plVar7 = (long *)*plVar7;
    if (plVar7 != (long *)0x0) goto LAB_0396bda8;
  }
  else {
    lVar17 = *(long *)PTR_DAT_04bb2698;
    if (lVar17 == 0) {
      pvVar8 = malloc((long)(param_7 << 3));
joined_r0x0396bf10:
      if (pvVar8 != (void *)0x0) {
        *(void **)(param_1 + 0x6c0) = pvVar8;
        *(undefined4 *)(param_1 + 0x6b8) = 0;
        *(int *)(param_1 + 0x6bc) = param_7;
      }
      goto LAB_0396bd6c;
    }
    plVar7 = param_9;
    if (param_9 != (long *)0x0) {
LAB_0396bd48:
      pvVar8 = (void *)(**(code **)(*plVar7 + 0x30))(plVar7,(long)(param_7 << 3),8);
      goto joined_r0x0396bf10;
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar7 = (long *)(lVar17 + 8);
    if (lVar6 != 0) {
      plVar7 = (long *)(lVar6 + 0xa8);
    }
    plVar7 = (long *)*plVar7;
    if (plVar7 != (long *)0x0) goto LAB_0396bd48;
    lVar17 = *plVar20;
    if (lVar17 != 0) goto LAB_0396bd7c;
LAB_0396c54c:
    puVar9 = malloc(0x78);
    if (puVar9 != (undefined8 *)0x0) {
LAB_0396bdc0:
      puVar1 = PTR_DAT_04bb2020;
      *(undefined4 *)(puVar9 + 4) = 0;
      puVar2 = PTR_DAT_04bd10c8;
      puVar9[5] = 0;
      puVar9[6] = 0;
      *puVar9 = 2;
      *(undefined4 *)(puVar9 + 7) = 0;
      *(undefined4 *)(puVar9 + 0xb) = 0;
      puVar9[2] = puVar1 + 0x10;
      puVar9[3] = &DAT_0407ebb1;
      *(undefined4 *)(puVar9 + 0xe) = 0;
      puVar9[8] = puVar2 + 0x10;
      puVar9[1] = puVar2 + 0x10;
      puVar9[9] = puVar1 + 0x10;
      puVar9[10] = &DAT_0407ebb1;
      puVar9[0xc] = 0;
      puVar9[0xd] = 0;
      *(undefined4 *)(param_1 + 0x6c8) = 2;
      *(undefined8 **)(param_1 + 0x6d0) = puVar9 + 1;
    }
  }
LAB_0396be1c:
  if (-8 < param_8 * param_7) {
    lVar17 = *plVar20;
    iVar15 = param_8 * param_7 + 8;
    sVar18 = (size_t)(iVar15 * 8);
    if (lVar17 == 0) {
      pvVar8 = malloc(sVar18);
    }
    else {
      plVar7 = param_9;
      if (param_9 == (long *)0x0) {
        lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar7 = (long *)(lVar17 + 8);
        if (lVar6 != 0) {
          plVar7 = (long *)(lVar6 + 0xa8);
        }
        plVar7 = (long *)*plVar7;
        if (plVar7 == (long *)0x0) goto LAB_0396be94;
      }
      pvVar8 = (void *)(**(code **)(*plVar7 + 0x30))(plVar7,sVar18,8);
    }
    if (pvVar8 != (void *)0x0) {
      *(void **)(param_1 + 0xbd0) = pvVar8;
      *(undefined4 *)(param_1 + 0xbc8) = 0;
      *(int *)(param_1 + 0xbcc) = iVar15;
    }
  }
LAB_0396be94:
  uVar4 = *(uint *)(param_1 + 0xbcc);
  if (0 < (int)uVar4) {
    lVar17 = *plVar20;
    sVar18 = (ulong)uVar4 * 0x398 + 8;
    if (lVar17 == 0) {
      puVar10 = malloc(sVar18);
joined_r0x0396bf24:
      if (puVar10 != (ulong *)0x0) {
        puVar1 = PTR_DAT_04bd13d8 + 0x10;
        puVar2 = PTR_DAT_04bb21f8 + 0x10;
        *puVar10 = (ulong)uVar4;
        lVar17 = 0;
        do {
          *(undefined8 *)((long)puVar10 + lVar17 + 0x250) = 0x200;
          *(undefined8 *)((long)puVar10 + lVar17 + 600) = 0;
          *(undefined1 *)((long)puVar10 + lVar17 + 0x260) = 0;
          *(undefined4 *)((long)puVar10 + lVar17 + 0x264) = 0;
          *(undefined8 *)((long)puVar10 + lVar17 + 0x268) = 0;
          *(undefined8 *)((long)puVar10 + lVar17 + 0x38) = 0;
          *(long *)((long)puVar10 + lVar17 + 0x40) = (long)puVar10 + lVar17 + 0x48;
          *(undefined8 *)((long)puVar10 + lVar17 + 0x18) = 0;
          *(undefined8 *)((long)puVar10 + lVar17 + 0x20) = 0;
          *(undefined8 *)((long)puVar10 + lVar17 + 0x28) = 0;
          *(char **)((long)puVar10 + lVar17 + 0x30) = "untitled";
          *(undefined **)((long)puVar10 + lVar17 + 8) = puVar1;
          *(undefined8 *)((long)puVar10 + lVar17 + 0x10) = 0;
          uVar11 = nn::os::GetSystemTick();
          *(undefined8 *)((long)puVar10 + lVar17 + 0x270) = uVar11;
          uVar11 = nn::os::GetSystemTick();
          lVar6 = lVar17 + 0x398;
          *(undefined1 *)((long)puVar10 + lVar17 + 0x280) = 0;
          *(undefined8 *)((long)puVar10 + lVar17 + 0x278) = uVar11;
          *(long *)((long)puVar10 + lVar17 + 0x290) = (long)puVar10 + lVar17 + 0x29c;
          *(undefined4 *)((long)puVar10 + lVar17 + 0x298) = 0x100;
          *(undefined1 *)((long)puVar10 + lVar17 + 0x39b) = 0;
          *(undefined1 *)((long)puVar10 + lVar17 + 0x29c) = 0;
          *(undefined **)((long)puVar10 + lVar17 + 0x288) = puVar2;
          lVar17 = lVar6;
        } while ((ulong)uVar4 * 0x398 != lVar6);
        *(uint *)(param_1 + 0xbd8) = uVar4;
        *(ulong **)(param_1 + 0xbe0) = puVar10 + 1;
        plVar20 = (long *)PTR_DAT_04bb2698;
      }
    }
    else {
      plVar7 = param_9;
      if (param_9 != (long *)0x0) {
LAB_0396bee8:
        puVar10 = (ulong *)(**(code **)(*plVar7 + 0x30))(plVar7,sVar18,8);
        goto joined_r0x0396bf24;
      }
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar7 = (long *)(lVar17 + 8);
      if (lVar6 != 0) {
        plVar7 = (long *)(lVar6 + 0xa8);
      }
      plVar7 = (long *)*plVar7;
      if (plVar7 != (long *)0x0) goto LAB_0396bee8;
    }
    iVar15 = *(int *)(param_1 + 0xbcc);
    if (0 < iVar15) {
      lVar17 = *plVar20;
      if (lVar17 == 0) {
        pvVar8 = malloc((long)iVar15 << 3);
      }
      else {
        plVar7 = param_9;
        if (param_9 == (long *)0x0) {
          lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          plVar7 = (long *)(lVar17 + 8);
          if (lVar6 != 0) {
            plVar7 = (long *)(lVar6 + 0xa8);
          }
          plVar7 = (long *)*plVar7;
          if (plVar7 == (long *)0x0) goto LAB_0396c068;
        }
        pvVar8 = (void *)(**(code **)(*plVar7 + 0x30))(plVar7,(long)iVar15 << 3,8);
      }
      if (pvVar8 != (void *)0x0) {
        *(void **)(param_1 + 0xbf0) = pvVar8;
        *(undefined4 *)(param_1 + 0xbe8) = 0;
        *(int *)(param_1 + 0xbec) = iVar15;
      }
    }
  }
LAB_0396c068:
  (**(code **)(*param_3 + 0x18))(param_3);
  FUN_006e9528(&local_180,&DAT_040c7529,param_3[1]);
  lVar17 = *(long *)(param_1 + 0x680);
  *(undefined8 *)(lVar17 + 0x10) = 0;
  *(undefined8 *)(lVar17 + 0x18) = 0;
  *(undefined8 *)(*(long *)(param_1 + 0x680) + 8) = 0;
  fStack_17c = (float)param_4[1];
  local_180 = (float)*param_4;
  FUN_0396c55c(param_1,&local_180,param_5);
  *(long *)(param_1 + 0x488) = param_1 + 0x388;
  lVar17 = *(long *)(param_1 + 0x6d0);
  *(undefined4 *)(lVar17 + 0x18) = 2;
  *(undefined8 *)(lVar17 + 0x20) = 0;
  *(char **)(lVar17 + 0x10) = "Layer(Begin)";
  lVar17 = *(long *)(param_1 + 0x6d0) + (ulong)(1 < *(uint *)(param_1 + 0x6c8)) * 0x38;
  *(undefined4 *)(lVar17 + 0x18) = 3;
  *(undefined8 *)(lVar17 + 0x20) = 0;
  *(char **)(lVar17 + 0x10) = "Layer(End)";
  lVar17 = *plVar20;
  if (lVar17 == 0) {
    plVar7 = malloc(0x38);
  }
  else {
    plVar7 = param_9;
    if (param_9 == (long *)0x0) {
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar7 = (long *)(lVar17 + 8);
      if (lVar6 != 0) {
        plVar7 = (long *)(lVar6 + 0xa8);
      }
      plVar7 = (long *)*plVar7;
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)0x0;
        goto LAB_0396c170;
      }
    }
    plVar7 = (long *)(**(code **)(*plVar7 + 0x30))(plVar7,0x38,8);
  }
LAB_0396c170:
  plVar7[6] = 0;
  plVar19 = plVar7 + 1;
  *plVar19 = 0;
  *(undefined2 *)((long)plVar7 + 0x2a) = 0;
  bVar13 = 0;
  plVar7[2] = 0;
  plVar7[3] = 0;
  plVar7[4] = 0;
  *(undefined1 *)(plVar7 + 5) = 0;
  puVar1 = PTR_DAT_04bb2cc8;
  *plVar7 = (long)(PTR_DAT_04bb2cc8 + 0x10);
  plVar12 = param_9;
  if (param_9 == (long *)0x0) {
    lVar6 = *plVar20;
    lVar17 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    puVar9 = (undefined8 *)(lVar6 + 8);
    if (lVar17 != 0) {
      puVar9 = (undefined8 *)(lVar17 + 0xa8);
    }
    plVar12 = (long *)*puVar9;
    bVar13 = *(byte *)(plVar7 + 5) & 0xfe;
  }
  plVar7[6] = 0;
  *plVar19 = 0;
  plVar7[2] = 0;
  plVar7[3] = 0;
  plVar7[4] = 0;
  puVar2 = PTR_DAT_04bd0fa8;
  uVar11 = *(undefined8 *)PTR_DAT_04bd0fa8;
  *(byte *)(plVar7 + 5) = bVar13;
  *(undefined2 *)((long)plVar7 + 0x2a) = 0;
  FUN_038f8590(uVar11,plVar7,plVar12,0x10,4,1);
  lVar17 = plVar7[3];
  *(undefined2 *)((long)plVar7 + 0x2a) = 1;
  iVar15 = 0;
  if (plVar7[4] != 0) {
    iVar15 = (int)*plVar19 - *(int *)(plVar7[4] + 0x10);
  }
  if (lVar17 == 0) {
    uVar16 = 0;
    uVar14 = 0;
  }
  else {
    uVar14 = *(undefined4 *)(lVar17 + 0x104);
    uVar16 = 0x10;
  }
  *(int *)(param_1 + 0x710) = iVar15;
  lVar6 = *plVar20;
  *(long *)(param_1 + 0x718) = lVar17;
  *(undefined4 *)(param_1 + 0x728) = uVar16;
  *(undefined4 *)(param_1 + 0x714) = uVar14;
  *(long **)(param_1 + 0x720) = plVar7;
  *(undefined4 *)(param_1 + 0x72c) = 0;
  *(byte *)(param_1 + 0x960) = *(byte *)(param_1 + 0x960) & 0xfc | *(int *)(param_1 + 0x954) != 0;
  if (lVar6 == 0) {
    pvVar8 = malloc(0x100);
  }
  else {
    plVar7 = param_9;
    if (param_9 == (long *)0x0) {
      lVar17 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar7 = (long *)(lVar6 + 8);
      if (lVar17 != 0) {
        plVar7 = (long *)(lVar17 + 0xa8);
      }
      plVar7 = (long *)*plVar7;
      pvVar8 = (void *)0x0;
      if (plVar7 == (long *)0x0) goto LAB_0396c2d4;
    }
    pvVar8 = (void *)(**(code **)(*plVar7 + 0x30))(plVar7,0x100,8);
  }
LAB_0396c2d4:
  bVar5 = pvVar8 != (void *)0x0;
  lVar17 = *plVar20;
  pvVar3 = (void *)(param_1 + 0x748);
  if (bVar5) {
    pvVar3 = pvVar8;
  }
  *(void **)(param_1 + 0x740) = pvVar3;
  uVar14 = 0x200;
  if (bVar5) {
    uVar14 = 0x100;
  }
  *(undefined4 *)(param_1 + 0x950) = uVar14;
  *(undefined4 *)(param_1 + 0x954) = 0;
  *(byte *)(param_1 + 0x960) = *(byte *)(param_1 + 0x960) & 0xf7 | bVar5 << 3;
  if (lVar17 == 0) {
    plVar7 = malloc(0x38);
  }
  else {
    plVar7 = param_9;
    if (param_9 == (long *)0x0) {
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      puVar9 = (undefined8 *)(lVar17 + 8);
      if (lVar6 != 0) {
        puVar9 = (undefined8 *)(lVar6 + 0xa8);
      }
      plVar7 = (long *)*puVar9;
    }
    plVar7 = (long *)(**(code **)(*plVar7 + 0x30))(plVar7,0x38,8);
  }
  plVar7[6] = 0;
  bVar13 = 0;
  *(undefined2 *)((long)plVar7 + 0x2a) = 0;
  plVar19 = plVar7 + 1;
  *plVar19 = 0;
  plVar7[2] = 0;
  plVar7[3] = 0;
  plVar7[4] = 0;
  *(undefined1 *)(plVar7 + 5) = 0;
  *plVar7 = (long)(puVar1 + 0x10);
  plVar12 = param_9;
  if (param_9 == (long *)0x0) {
    lVar6 = *plVar20;
    lVar17 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    puVar9 = (undefined8 *)(lVar6 + 8);
    if (lVar17 != 0) {
      puVar9 = (undefined8 *)(lVar17 + 0xa8);
    }
    plVar12 = (long *)*puVar9;
    bVar13 = *(byte *)(plVar7 + 5) & 0xfe;
  }
  uVar11 = *(undefined8 *)puVar2;
  plVar7[6] = 0;
  *plVar19 = 0;
  plVar7[2] = 0;
  plVar7[3] = 0;
  plVar7[4] = 0;
  *(byte *)(plVar7 + 5) = bVar13;
  *(undefined2 *)((long)plVar7 + 0x2a) = 0;
  FUN_038f8590(uVar11,plVar7,plVar12,0x10,4,1);
  lVar17 = plVar7[3];
  *(undefined2 *)((long)plVar7 + 0x2a) = 1;
  iVar15 = 0;
  if (plVar7[4] != 0) {
    iVar15 = (int)*plVar19 - *(int *)(plVar7[4] + 0x10);
  }
  if (lVar17 == 0) {
    uVar16 = 0;
    uVar14 = 0;
  }
  else {
    uVar14 = *(undefined4 *)(lVar17 + 0x104);
    uVar16 = 0x10;
  }
  *(int *)(param_1 + 0x970) = iVar15;
  lVar6 = *plVar20;
  *(long *)(param_1 + 0x978) = lVar17;
  *(undefined4 *)(param_1 + 0x988) = uVar16;
  *(undefined4 *)(param_1 + 0x974) = uVar14;
  *(long **)(param_1 + 0x980) = plVar7;
  *(undefined4 *)(param_1 + 0x98c) = 0;
  *(byte *)(param_1 + 0xbc0) = *(byte *)(param_1 + 0xbc0) & 0xfc | *(int *)(param_1 + 0xbb4) != 0;
  if (lVar6 == 0) {
    pvVar8 = malloc(0x100);
  }
  else {
    if (param_9 == (long *)0x0) {
      lVar17 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      puVar9 = (undefined8 *)(lVar6 + 8);
      if (lVar17 != 0) {
        puVar9 = (undefined8 *)(lVar17 + 0xa8);
      }
      param_9 = (long *)*puVar9;
      if (param_9 == (long *)0x0) {
        pvVar8 = (void *)0x0;
        goto LAB_0396c4bc;
      }
    }
    pvVar8 = (void *)(**(code **)(*param_9 + 0x30))(param_9,0x100,8);
  }
LAB_0396c4bc:
  bVar5 = pvVar8 != (void *)0x0;
  pvVar3 = (void *)(param_1 + 0x9a8);
  if (bVar5) {
    pvVar3 = pvVar8;
  }
  *(undefined4 *)(param_1 + 0xbb4) = 0;
  *(void **)(param_1 + 0x9a0) = pvVar3;
  *(byte *)(param_1 + 0xbc0) = *(byte *)(param_1 + 0xbc0) & 0xf7 | bVar5 << 3;
  uVar14 = 0x200;
  if (bVar5) {
    uVar14 = 0x100;
  }
  *(undefined4 *)(param_1 + 0xbb0) = uVar14;
  return;
}


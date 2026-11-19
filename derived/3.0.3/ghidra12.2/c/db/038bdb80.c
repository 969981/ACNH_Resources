
void FUN_038bdb80(long param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  undefined8 *puVar9;
  void *pvVar10;
  void *pvVar11;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  long **local_90;
  long lStack_88;
  undefined8 local_80;
  long *local_78;
  char *pcStack_70;
  undefined8 local_58;
  
  puVar4 = PTR_DAT_04bb2698;
  plVar13 = *(long **)(param_1 + (long)*(int *)(param_1 + 0x10c) * 8 + 0xe8);
  lVar14 = *(long *)PTR_DAT_04bb2698;
  if (lVar14 == 0) {
    plVar7 = malloc(0x110);
    local_78 = (long *)(PTR_DAT_04bb2020 + 0x10);
LAB_038bdc58:
    pcStack_70 = "Prepare Thread";
    puVar9 = malloc(0x20);
  }
  else {
    plVar7 = plVar13;
    if (plVar13 == (long *)0x0) {
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar7 = (long *)(lVar14 + 8);
      if (lVar6 != 0) {
        plVar7 = (long *)(lVar6 + 0xa8);
      }
      plVar7 = (long *)*plVar7;
      if (plVar7 != (long *)0x0) goto LAB_038bdbf0;
      plVar7 = (long *)0x0;
      lVar14 = *(long *)puVar4;
      local_78 = (long *)(PTR_DAT_04bb2020 + 0x10);
      if (lVar14 == 0) goto LAB_038bdc58;
LAB_038bdc88:
      pcStack_70 = "Prepare Thread";
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar8 = (long *)(lVar14 + 8);
      if (lVar6 != 0) {
        plVar8 = (long *)(lVar6 + 0xa8);
      }
      plVar8 = (long *)*plVar8;
      if (plVar8 == (long *)0x0) {
        puVar9 = (undefined8 *)0x0;
        goto code_r0x038bdcd0;
      }
    }
    else {
LAB_038bdbf0:
      plVar7 = (long *)(**(code **)(*plVar7 + 0x30))(plVar7,0x110,8);
      lVar14 = *(long *)puVar4;
      local_78 = (long *)(PTR_DAT_04bb2020 + 0x10);
      pcStack_70 = "Prepare Thread";
      if (lVar14 == 0) goto LAB_038bdc58;
      if (plVar13 == (long *)0x0) goto LAB_038bdc88;
      plVar8 = plVar13;
    }
    puVar9 = (undefined8 *)(**(code **)(*plVar8 + 0x30))(plVar8,0x20,8);
  }
code_r0x038bdcd0:
  puVar9[2] = &LAB_038be070;
  puVar9[3] = 0;
  *puVar9 = &PTR_LAB_04b63cc8;
  puVar9[1] = param_1;
  iVar1 = 0x10;
  if (*(int *)(param_1 + 0x1e8) != -1) {
    iVar1 = *(int *)(param_1 + 0x1e8);
  }
  FUN_038e1f88(plVar7,&local_78,plVar13,iVar1,0,0x7fffffff,*(undefined4 *)(param_1 + 0x1e4),0x20);
  puVar5 = PTR_DAT_04bd0e60;
  plVar7[0x21] = (long)puVar9;
  *plVar7 = (long)(puVar5 + 0x10);
  *(long **)(param_1 + 0x48) = plVar7;
  (**(code **)(*plVar7 + 0x30))(plVar7);
  lVar14 = *(long *)puVar4;
  local_58 = 0;
  local_80 = 0;
  local_90 = &local_78;
  lStack_88 = param_1;
  local_78 = plVar13;
  if (lVar14 == 0) {
    plVar7 = malloc(0x350);
  }
  else {
    plVar7 = plVar13;
    if (plVar13 == (long *)0x0) {
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar7 = (long *)(lVar14 + 8);
      if (lVar6 != 0) {
        plVar7 = (long *)(lVar6 + 0xa8);
      }
      plVar7 = (long *)*plVar7;
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)0x0;
        goto LAB_038bddac;
      }
    }
    plVar7 = (long *)(**(code **)(*plVar7 + 0x30))(plVar7,0x350,8);
  }
LAB_038bddac:
  FUN_038bfb38(plVar7,&local_90,"NullFaderTask");
  puVar5 = PTR_DAT_04bd0c78;
  *(undefined4 *)((long)plVar7 + 0x33c) = 0;
  *plVar7 = (long)(puVar5 + 0x10);
  *(undefined8 *)((long)plVar7 + 0x334) = 0;
  *(long **)(param_1 + 0x50) = plVar7;
  plVar7[10] = (long)"NullFader";
  lVar14 = *(long *)puVar4;
  *(undefined4 *)(*(long *)(param_1 + 0x50) + 0xb8) = 4;
  if (lVar14 == 0) {
    pvVar10 = malloc(0x30);
  }
  else {
    plVar7 = plVar13;
    if (plVar13 == (long *)0x0) {
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      puVar9 = (undefined8 *)(lVar14 + 8);
      if (lVar6 != 0) {
        puVar9 = (undefined8 *)(lVar6 + 0xa8);
      }
      plVar7 = (long *)*puVar9;
    }
    pvVar10 = (void *)(**(code **)(*plVar7 + 0x30))(plVar7,0x30,8);
  }
  uVar2 = *(uint *)(param_1 + 0x118);
  *(long *)((long)pvVar10 + 0x18) = 0;
  *(undefined4 *)((long)pvVar10 + 0x10) = 0;
  *(void **)pvVar10 = pvVar10;
  *(void **)((long)pvVar10 + 8) = pvVar10;
  uVar3 = uVar2 - 1;
  *(undefined8 *)((long)pvVar10 + 0x20) = 0;
  *(undefined4 *)((long)pvVar10 + 0x28) = 0;
  if (0 < (int)uVar2) {
    lVar14 = *(long *)puVar4;
    if (lVar14 == 0) {
      pvVar11 = malloc((long)(int)uVar2 * 0xf0);
    }
    else {
      if (plVar13 == (long *)0x0) {
        lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        puVar9 = (undefined8 *)(lVar14 + 8);
        if (lVar6 != 0) {
          puVar9 = (undefined8 *)(lVar6 + 0xa8);
        }
        plVar13 = (long *)*puVar9;
        if (plVar13 == (long *)0x0) goto LAB_038bdf64;
      }
      pvVar11 = (void *)(**(code **)(*plVar13 + 0x30))(plVar13,(long)(int)uVar2 * 0xf0,8);
    }
    if (pvVar11 != (void *)0x0) {
      *(long *)((long)pvVar10 + 0x18) = (long)pvVar11;
      if (1 < uVar2) {
        if (uVar3 == 1) {
          uVar12 = 0;
        }
        else {
          uVar12 = 0;
          plVar13 = (long *)((long)pvVar11 + 0xf0);
          do {
            uVar12 = uVar12 + 2;
            plVar13[-0x1e] = (long)plVar13;
            *plVar13 = (long)(plVar13 + 0x1e);
            plVar13 = plVar13 + 0x3c;
          } while (((ulong)uVar3 & 0xfffffffe) != uVar12);
        }
        if ((uVar3 & 1) != 0) {
          plVar13 = (long *)((long)pvVar11 + uVar12 * 0xf0);
          *plVar13 = (long)(plVar13 + 0x1e);
        }
      }
      *(undefined8 *)((long)pvVar11 + (long)(int)(uVar3 * 0x1e) * 8) = 0;
      *(void **)((long)pvVar10 + 0x20) = pvVar11;
      *(uint *)((long)pvVar10 + 0x28) = uVar2;
    }
  }
LAB_038bdf64:
  *(void **)(param_1 + 0x110) = pvVar10;
  return;
}


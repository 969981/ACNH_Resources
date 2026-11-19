
long * FUN_03bca260(int *param_1,undefined4 param_2,long *param_3,long *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long *plVar8;
  void *pvVar9;
  char *pcVar10;
  long lVar11;
  char *pcVar12;
  int *local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined1 local_70;
  undefined8 *local_68;
  undefined *puStack_60;
  undefined *local_58;
  long *plStack_50;
  undefined4 local_48;
  
  puVar2 = PTR_DAT_04bb2698;
  lVar11 = *(long *)PTR_DAT_04bb2698;
  if (lVar11 == 0) {
    plVar5 = malloc(0xa8);
  }
  else {
    plVar5 = param_3;
    if (param_3 == (long *)0x0) {
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar5 = (long *)(lVar11 + 8);
      if (lVar4 != 0) {
        plVar5 = (long *)(lVar4 + 0xa8);
      }
      plVar5 = (long *)*plVar5;
      if (plVar5 == (long *)0x0) {
        return (long *)0x0;
      }
    }
    plVar5 = (long *)(**(code **)(*plVar5 + 0x30))(plVar5,0xa8,8);
  }
  if (plVar5 == (long *)0x0) {
    return (long *)0x0;
  }
  plVar5[3] = 0;
  *(undefined1 *)((long)plVar5 + 0x44) = 0;
  plVar5[7] = (long)plVar5 + 0x44;
  plVar5[2] = 0;
  *(undefined2 *)(plVar5 + 4) = 0;
  *(undefined4 *)(plVar5 + 8) = 0x20;
  *(undefined1 *)((long)plVar5 + 99) = 0;
  puVar1 = PTR_DAT_04bb2028 + 0x10;
  plVar5[0x14] = 0;
  plVar5[0xf] = 0;
  *(undefined1 *)(plVar5 + 0x10) = 0;
  *(undefined1 *)(plVar5 + 0x13) = 0;
  plVar5[0xd] = 0;
  plVar5[0xe] = 0;
  plVar5[5] = 0;
  plVar5[6] = (long)puVar1;
  plVar5[0x11] = 0;
  plVar5[0x12] = 0;
  *plVar5 = (long)&PTR_LAB_04b7ad40;
  plVar5[1] = (long)param_1;
  puVar1 = PTR_DAT_04bb2020;
  if (*param_1 == 0x53524142) {
    plVar5[2] = (long)(param_1 + (ulong)(uint)param_1[3] + 4);
    if (((0xfe < (byte)(*(ushort *)(param_1 + 2) >> 8)) &&
        ((*(ushort *)(param_1 + 2) & 0xff) == 0xfe)) || (*(short *)((long)param_1 + 10) != 0x101)) {
      FUN_03bca624(plVar5);
      lVar11 = *(long *)puVar2;
      if (lVar11 == 0) {
        free(plVar5);
        return (long *)0x0;
      }
      plVar8 = (long *)FUN_038cb610(lVar11,plVar5);
      if (plVar8 == (long *)0x0) {
        return (long *)0x0;
      }
      (**(code **)(*plVar8 + 0x38))(plVar8,plVar5);
      return (long *)0x0;
    }
    *(undefined1 *)(plVar5 + 0x13) = 1;
  }
  else {
    plVar5[1] = 0;
    local_48 = 0x20;
    puStack_60 = puVar1 + 0x10;
    local_70 = 0;
    local_68 = &DAT_05aec0d0;
    local_58 = PTR_DAT_04bb2120;
    local_80 = param_1;
    local_78 = param_2;
    uStack_74 = param_2;
    plStack_50 = param_3;
    puVar6 = (undefined8 *)FUN_038da2f0(*(undefined8 *)PTR_DAT_04bb28c8,&local_80);
    if (((*PTR_DAT_04bb2850 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb2850), iVar3 != 0)) {
      *(undefined **)PTR_DAT_04bb2848 = PTR_DAT_04bb2858 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb2850);
    }
    if (puVar6 == (undefined8 *)0x0) {
      puVar6 = (undefined8 *)0x0;
    }
    else {
      uVar7 = (**(code **)*puVar6)(puVar6,PTR_DAT_04bb2848);
      if ((uVar7 & 1) == 0) {
        puVar6 = (undefined8 *)0x0;
      }
    }
    plVar5[0x14] = (long)puVar6;
  }
  (**(code **)(*param_4 + 0x18))(param_4);
  (**(code **)(*param_4 + 0x18))(param_4);
  puVar1 = PTR_PTR_04bb2238;
  pcVar12 = (char *)param_4[1];
  (**(code **)(*(long *)PTR_PTR_04bb2238 + 0x18))(PTR_PTR_04bb2238);
  pcVar10 = *(char **)(puVar1 + 8);
  if (pcVar12 != pcVar10) {
    pcVar12 = (char *)param_4[1];
    if (*pcVar12 != *pcVar10) {
LAB_03bca518:
      lVar11 = *(long *)puVar2;
      if (lVar11 == 0) {
        pvVar9 = malloc(0x18);
      }
      else {
        plVar8 = param_3;
        if (param_3 == (long *)0x0) {
          lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          plVar8 = (long *)(lVar11 + 8);
          if (lVar4 != 0) {
            plVar8 = (long *)(lVar4 + 0xa8);
          }
          plVar8 = (long *)*plVar8;
          if (plVar8 == (long *)0x0) goto LAB_03bca5b8;
        }
        pvVar9 = (void *)(**(code **)(*plVar8 + 0x30))(plVar8,0x18,8);
      }
      if (pvVar9 == (void *)0x0) {
LAB_03bca5b8:
        plVar5[3] = 0;
        (**(code **)(*plVar5 + 0x10))(plVar5);
        return (long *)0x0;
      }
      FUN_038f1770(pvVar9,param_3,param_4,8);
      plVar5[3] = (long)pvVar9;
      *(undefined1 *)((long)plVar5 + 0x21) = 1;
      goto LAB_03bca590;
    }
    if (*pcVar12 != '\0') {
      lVar11 = 0;
      do {
        if ((lVar11 == 0x80000) || (pcVar12[lVar11 + 1] != pcVar10[lVar11 + 1])) goto LAB_03bca518;
        if (pcVar12[lVar11 + 1] == '\0') break;
        lVar4 = lVar11 + 2;
        if (pcVar12[lVar4] != pcVar10[lVar11 + 2]) goto LAB_03bca518;
        lVar11 = lVar11 + 2;
      } while (pcVar12[lVar4] != '\0');
    }
  }
  plVar5[3] = (long)puVar1;
LAB_03bca590:
  *(undefined1 *)(plVar5 + 4) = 1;
  return plVar5;
}


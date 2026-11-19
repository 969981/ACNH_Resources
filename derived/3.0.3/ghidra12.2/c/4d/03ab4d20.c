
void FUN_03ab4d20(long param_1,undefined8 *param_2,long *param_3)

{
  undefined *puVar1;
  uint *puVar2;
  ulong uVar3;
  char cVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  bool bVar8;
  byte bVar9;
  undefined8 uVar10;
  int iVar11;
  undefined4 uVar12;
  long lVar13;
  long *plVar14;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  ulong local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8 [2];
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  char *pcStack_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined8 uStack_68;
  
  if (*(long *)(param_1 + 0x740) != 0) {
    if (*(long **)(param_1 + 0x748) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x748) + 8))();
    }
    *(undefined4 *)(param_1 + 0x738) = 0;
    *(undefined8 *)(param_1 + 0x740) = 0;
    *(undefined8 *)(param_1 + 0x748) = 0;
  }
  uVar12 = *(undefined4 *)param_2;
  *(undefined4 *)(param_1 + 0x8a4) = uVar12;
  *(undefined4 *)(param_1 + 0x8a8) = uVar12;
  local_d8 = 0;
  uStack_d0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  uVar10 = *param_2;
  *(undefined4 *)(param_1 + 0xb28) = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(param_1 + 0xb20) = uVar10;
  local_f8 = 0;
  uStack_f0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  *(undefined4 *)(param_1 + 0x8d8) = *(undefined4 *)((long)param_2 + 4);
  local_118 = 0;
  uStack_110 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  *(undefined4 *)(param_1 + 0x8dc) = *(undefined4 *)(param_2 + 1);
  local_b0 = 0;
  uStack_a8 = 0;
  local_c8[0] = 0xffffffff;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  pcStack_88 = "agl::TextureData";
  local_80 = 0x10000;
  FUN_0390a734(&local_118,1,*(undefined4 *)(param_2 + 1),uVar12,uVar12,1,1,0,0,1);
  puVar5 = PTR_DAT_04bb2698;
  uVar12 = uStack_e0._4_4_;
  iVar11 = (int)local_d8;
  uVar3 = local_d8 & 0xffffffff;
  lVar13 = *(long *)PTR_DAT_04bb2698;
  if (lVar13 == 0) {
    plVar7 = malloc(0x38);
  }
  else {
    plVar7 = param_3;
    if (param_3 == (long *)0x0) {
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar7 = (long *)(lVar13 + 8);
      if (lVar6 != 0) {
        plVar7 = (long *)(lVar6 + 0xa8);
      }
      plVar7 = (long *)*plVar7;
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)0x0;
        goto LAB_03ab4e78;
      }
    }
    plVar7 = (long *)(**(code **)(*plVar7 + 0x30))(plVar7,0x38,8);
  }
LAB_03ab4e78:
  plVar7[6] = 0;
  plVar14 = plVar7 + 1;
  *plVar14 = 0;
  *(undefined2 *)((long)plVar7 + 0x2a) = 0;
  bVar9 = 0;
  plVar7[4] = 0;
  plVar7[2] = 0;
  plVar7[3] = 0;
  puVar1 = PTR_DAT_04bb2cc8 + 0x10;
  *(undefined1 *)(plVar7 + 5) = 0;
  *plVar7 = (long)puVar1;
  if (param_3 == (long *)0x0) {
    lVar6 = *(long *)puVar5;
    lVar13 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    param_3 = (long *)(lVar6 + 8);
    if (lVar13 != 0) {
      param_3 = (long *)(lVar13 + 0xa8);
    }
    param_3 = (long *)*param_3;
    bVar9 = *(byte *)(plVar7 + 5) & 0xfe;
  }
  plVar7[6] = 0;
  *(byte *)(plVar7 + 5) = bVar9;
  *(undefined2 *)((long)plVar7 + 0x2a) = 0;
  *plVar14 = 0;
  plVar7[2] = 0;
  plVar7[3] = 0;
  plVar7[4] = 0;
  if (iVar11 == 0) {
    iVar11 = 0;
    *(undefined2 *)((long)plVar7 + 0x2a) = 4;
    lVar13 = 0;
  }
  else {
    FUN_038f8590(*(undefined8 *)PTR_DAT_04bd0fa8,plVar7,param_3,uVar3,uVar12,4);
    lVar13 = plVar7[3];
    *(undefined2 *)((long)plVar7 + 0x2a) = 4;
    iVar11 = 0;
    if (plVar7[4] != 0) {
      iVar11 = (int)*plVar14 - *(int *)(plVar7[4] + 0x10);
    }
    if (lVar13 != 0) {
      uVar12 = *(undefined4 *)(lVar13 + 0x104);
      goto LAB_03ab4f58;
    }
  }
  uVar12 = 0;
LAB_03ab4f58:
  *(long *)(param_1 + 0x740) = lVar13;
  *(int *)(param_1 + 0x738) = iVar11;
  *(undefined4 *)(param_1 + 0x73c) = uVar12;
  *(long **)(param_1 + 0x748) = plVar7;
  FUN_0390a734(param_1 + 0x698,1,*(undefined4 *)(param_1 + 0x8dc),*(undefined4 *)(param_1 + 0x8a8),
               *(undefined4 *)(param_1 + 0x8a8),1,1,0,0,1);
  local_78 = *(undefined4 *)(param_1 + 0x738);
  bVar8 = false;
  *(undefined4 *)(param_1 + 0x698) = local_78;
  uStack_74 = *(undefined4 *)(param_1 + 0x73c);
  local_70 = *(undefined8 *)(param_1 + 0x740);
  uStack_68 = *(undefined8 *)(param_1 + 0x748);
  *(undefined4 *)(param_1 + 0x69c) = uStack_74;
  *(undefined8 *)(param_1 + 0x6a0) = local_70;
  *(undefined8 *)(param_1 + 0x6a8) = uStack_68;
  if ((*(byte *)(param_1 + 0x6e6) >> 1 & 1) != 0) {
    bVar8 = 0x11 < *(ushort *)(param_1 + 0x730) && *(ushort *)(param_1 + 0x730) - 0x59 < 0xffffffd6;
  }
  FUN_038fd3e0(param_1 + 0x6e8,&local_78,param_1 + 0x6c8,0,*(undefined8 *)(param_1 + 0x728),bVar8,1)
  ;
  FUN_01560750(param_1 + 0x2b0,param_1 + 0x698,*(undefined1 *)(param_1 + 0x36e),
               *(undefined2 *)(param_1 + 0x36c));
  *(undefined4 *)(param_1 + 0x390) = *(undefined4 *)(param_1 + 0x698);
  *(undefined8 *)(param_1 + 0x3b8) = *(undefined8 *)(param_1 + 0x6c0);
  *(undefined4 *)(param_1 + 0x394) = *(undefined4 *)(param_1 + 0x69c);
  *(undefined8 *)(param_1 + 0x398) = *(undefined8 *)(param_1 + 0x6a0);
  *(undefined8 *)(param_1 + 0x3a0) = *(undefined8 *)(param_1 + 0x6a8);
  *(undefined4 *)(param_1 + 0x3a8) = *(undefined4 *)(param_1 + 0x6b0);
  *(undefined4 *)(param_1 + 0x3ac) = *(undefined4 *)(param_1 + 0x6b4);
  *(undefined8 *)(param_1 + 0x3b0) = *(undefined8 *)(param_1 + 0x6b8);
  *(undefined8 *)(param_1 + 0x3d7) = *(undefined8 *)(param_1 + 0x6df);
  *(undefined8 *)(param_1 + 0x3d0) = *(undefined8 *)(param_1 + 0x6d8);
  *(undefined8 *)(param_1 + 0x3c8) = *(undefined8 *)(param_1 + 0x6d0);
  *(undefined8 *)(param_1 + 0x3c0) = *(undefined8 *)(param_1 + 0x6c8);
  FUN_038fd1e0(param_1 + 0x3e0);
  FUN_038fd2f0(param_1 + 0x3e0,param_1 + 0x6e8);
  *(undefined8 *)(param_1 + 0x420) = *(undefined8 *)(param_1 + 0x728);
  *(undefined4 *)(param_1 + 0x428) = *(undefined4 *)(param_1 + 0x730);
  puVar2 = (uint *)(param_1 + 0x464);
  do {
    cVar4 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar8) {
      *puVar2 = *puVar2 | 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  FUN_038fd0e0(local_c8);
  return;
}


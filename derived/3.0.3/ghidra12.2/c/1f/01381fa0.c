
void FUN_01381fa0(ulong param_1,ulong param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  long *plVar9;
  int iVar10;
  long *plVar11;
  int iVar12;
  int iVar13;
  uint *puVar14;
  long lVar15;
  long lVar16;
  undefined **local_130;
  ulong local_128;
  undefined1 *local_120;
  undefined8 uStack_118;
  undefined **local_110;
  ulong uStack_108;
  undefined1 *local_100;
  undefined8 uStack_f8;
  undefined **local_f0;
  ulong uStack_e8;
  undefined1 *local_e0;
  undefined8 uStack_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined **local_c0;
  undefined8 uStack_b8;
  undefined *local_b0;
  undefined2 local_a8;
  undefined1 local_a6;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined ***local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined *local_70;
  char *local_68;
  
  puVar14 = (uint *)(param_1 + 0x78);
  *puVar14 = 0;
  if ((param_2 & 1) == 0) {
    while( true ) {
      do {
        uVar4 = *puVar14;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar14,0x10);
        if (bVar6) {
          *puVar14 = uVar4 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if ((int)*(uint *)(param_1 + 0x30) <= (int)uVar4) break;
      local_130 = *(undefined ***)(param_1 + 0x10);
      bVar3 = *(byte *)(param_1 + 8);
      local_128 = CONCAT71(local_128._1_7_,bVar3) & 0xffffffffffffff01;
      local_128 = CONCAT53(local_128._3_5_,CONCAT12(bVar3 >> 2,(undefined2)local_128)) &
                  0xffffffffff01ffff;
      local_128 = CONCAT62(local_128._2_6_,CONCAT11(bVar3 >> 1,(undefined1)local_128)) &
                  0xffffffffffff01ff;
      lVar15 = (long)(int)uVar4;
      if (*(uint *)(param_1 + 0x30) <= uVar4) {
        lVar15 = 0;
      }
      FUN_0137dbc0(*(long *)(param_1 + 0x38) + lVar15 * 0x68,&local_130);
      nn::os::YieldThread();
    }
  }
  else {
    local_130 = &PTR_LAB_049939b8;
    local_120 = &LAB_013822a0;
    uStack_118 = 0;
    local_110 = &PTR_LAB_049939b8;
    local_100 = &LAB_013822a0;
    uStack_f8 = 0;
    local_f0 = &PTR_LAB_049939b8;
    lVar15 = *(long *)PTR_DAT_04bb4698;
    local_e0 = &LAB_013822a0;
    uStack_d8 = 0;
    local_128 = param_1;
    uStack_108 = param_1;
    uStack_e8 = param_1;
    if (lVar15 != 0) {
      if (*(long *)(lVar15 + 0x40) == 0) {
        plVar11 = *(long **)(lVar15 + 0x48);
        *plVar11 = (long)(PTR_DAT_04bdf190 + 0x10);
        plVar11[1] = 0;
        *(long **)(lVar15 + 0x40) = plVar11;
        if (plVar11[1] == 0) {
          plVar9 = *(long **)(lVar15 + 0x20);
          plVar11[1] = (long)plVar9;
          (**(code **)(*plVar9 + 0x20))();
        }
      }
      puVar8 = PTR_DAT_04bb5070;
      puVar7 = PTR_DAT_04bb2020;
      local_d0 = 1;
      if (*(long *)(lVar15 + 0x38) != 0) {
        local_a8 = 0;
        puVar1 = PTR_DAT_04bb5070 + 0x10;
        puVar2 = PTR_DAT_04bb2020 + 0x10;
        uStack_b8 = 0;
        local_c8 = 0;
        local_a6 = 1;
        uStack_98 = *(undefined8 *)(lVar15 + 0x20);
        local_68 = "AsysParalellExecutor";
        uStack_88 = 0;
        local_80 = 0;
        uStack_78 = 0;
        local_a0 = 0;
        local_c0 = &local_b0;
        local_b0 = puVar1;
        local_90 = &local_130;
        local_70 = puVar2;
        FUN_03f45184(*(long *)(lVar15 + 0x38),&local_c8);
        local_d0 = 1;
        if (*(long *)(lVar15 + 0x38) != 0) {
          local_90 = &local_110;
          local_a8 = 0;
          uStack_98 = *(undefined8 *)(lVar15 + 0x20);
          local_68 = "AsysParalellExecutor";
          local_c8 = 0;
          local_a6 = 1;
          local_a0 = 0;
          uStack_88 = 0;
          local_80 = 0;
          uStack_78 = 0;
          uStack_b8 = 0;
          local_c0 = &local_b0;
          local_b0 = puVar1;
          local_70 = puVar2;
          FUN_03f45184(*(long *)(lVar15 + 0x38),&local_c8);
          local_d0 = 1;
          if (*(long *)(lVar15 + 0x38) != 0) {
            local_b0 = puVar8 + 0x10;
            local_70 = puVar7 + 0x10;
            local_a8 = 0;
            local_90 = &local_f0;
            uStack_98 = *(undefined8 *)(lVar15 + 0x20);
            uStack_88 = 0;
            local_c0 = &local_b0;
            local_68 = "AsysParalellExecutor";
            local_c8 = 0;
            local_a6 = 1;
            local_a0 = 0;
            local_80 = 0;
            uStack_78 = 0;
            uStack_b8 = 0;
            FUN_03f45184(*(long *)(lVar15 + 0x38),&local_c8);
          }
        }
      }
      lVar16 = *(long *)(lVar15 + 0x40);
      if (lVar16 != 0) {
        if (*(long **)(lVar16 + 8) != (long *)0x0) {
          (**(code **)(**(long **)(lVar16 + 8) + 0x28))();
          *(undefined8 *)(lVar16 + 8) = 0;
        }
        *(undefined8 *)(lVar15 + 0x40) = 0;
      }
      FUN_03f421e0(*(undefined8 *)(lVar15 + 0x20));
    }
  }
  if (((((*(byte *)(param_1 + 8) >> 1 & 1) == 0) &&
       (lVar15 = *(long *)(param_1 + 0x80), lVar15 != 0)) && ((*(byte *)(lVar15 + 8) & 1) != 0)) &&
     ((iVar12 = *(int *)(lVar15 + 0x1c), 0 < iVar12 &&
      (iVar10 = *(int *)(lVar15 + 0x18), 0 < iVar10)))) {
    iVar13 = 0;
    do {
      if (0 < iVar10) {
        iVar12 = 0;
        do {
          if ((*(byte *)(lVar15 + 8) & 1) != 0) {
            FUN_0138367c(lVar15 + 0x28,iVar12,iVar13);
            iVar10 = *(int *)(lVar15 + 0x18);
          }
          iVar12 = iVar12 + 1;
        } while (iVar12 < iVar10);
        iVar12 = *(int *)(lVar15 + 0x1c);
      }
      iVar13 = iVar13 + 1;
    } while (iVar13 < iVar12);
  }
  return;
}


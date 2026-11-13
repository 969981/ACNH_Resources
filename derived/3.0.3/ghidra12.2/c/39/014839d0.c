
void FUN_014839d0(long param_1,undefined8 param_2,long *param_3)

{
  undefined2 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  ushort uVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  uint uVar9;
  int iVar10;
  long *plVar11;
  ulong uVar12;
  uint *puVar13;
  char *pcVar14;
  long lVar15;
  long lVar16;
  uint *puVar17;
  long lVar18;
  bool bVar19;
  undefined **local_78;
  undefined2 local_70;
  undefined2 local_6e;
  undefined4 local_6c;
  long local_68;
  undefined4 local_48;
  undefined4 local_44;
  
  FUN_01527740();
  pcVar14 = *(char **)(param_1 + 0x60);
  if (pcVar14 != "FtrActorLook") {
    iVar10 = 0xc;
    if (*(int *)(param_1 + 0x68) < 0xd) {
      iVar10 = *(int *)(param_1 + 0x68) + -1;
    }
    memcpy(pcVar14,"FtrActorLook",(long)iVar10);
    pcVar14[iVar10] = '\0';
  }
  puVar7 = PTR_DAT_04bb43c0;
  lVar15 = param_1 + 0x1410;
  lVar16 = *(long *)PTR_DAT_04bb43c0;
  uVar9 = FUN_0277d6c4(lVar15);
  lVar18 = *(long *)puVar7;
  if (lVar18 == 0) {
    return;
  }
  lVar16 = *(long *)(lVar16 + 0x57e58);
  uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
  if (*(uint *)(lVar16 + 0x1d8) <= uVar9) {
    return;
  }
  if (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar9 * 8) == 0) {
    return;
  }
  puVar1 = (undefined2 *)(param_1 + 0x1412);
  local_70 = *(undefined2 *)(param_1 + 0x1410);
  local_68 = 0;
  local_6c = *(undefined4 *)(param_1 + 0x1414);
  local_78 = &PTR_FUN_04a36b50;
  local_6e = *puVar1;
  uVar9 = FUN_0277d6c4(&local_70);
  if (*(long *)puVar7 != 0) {
    lVar16 = *(long *)(lVar18 + 0x57e58);
    uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
    if ((uVar9 < *(uint *)(lVar16 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) {
      lVar16 = *(long *)PTR_DAT_04bc0428;
      uVar9 = FUN_0277d6c4(lVar15);
      uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
      if (uVar9 < *(uint *)(lVar16 + 0x1d8)) {
        lVar16 = *(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar9 * 8);
        if (lVar16 != 0) {
          local_68 = lVar16;
        }
      }
    }
  }
  iVar10 = FUN_0277d6c4(&local_70);
  if (((iVar10 == 0x1618) || (iVar10 = FUN_0277d6c4(&local_70), iVar10 == 0x315a)) ||
     (iVar10 = FUN_0277d6c4(&local_70), iVar10 == 0x3805)) {
    FUN_01b01948(&local_48,&local_78);
LAB_01483b94:
    *(undefined2 *)(param_1 + 0x1410) = (undefined2)local_48;
    *(undefined1 *)puVar1 = local_48._2_1_;
    *(undefined1 *)(param_1 + 0x1413) = local_48._3_1_;
    *(undefined4 *)(param_1 + 0x1414) = local_44;
  }
  else {
    iVar10 = FUN_0277d6c4(&local_70);
    if (iVar10 == 0x342f) {
      FUN_01b01dfc(&local_48,&local_78);
      goto LAB_01483b94;
    }
    uVar12 = FUN_01b0b03c(&local_78);
    if ((uVar12 & 1) != 0) {
      FUN_01b0b124(&local_48,&local_78);
      goto LAB_01483b94;
    }
    local_48._0_2_ = *(undefined2 *)(param_1 + 0x1410);
    local_48._2_1_ = *(undefined1 *)puVar1;
    local_48._3_1_ = *(undefined1 *)(param_1 + 0x1413);
    local_44 = *(undefined4 *)(param_1 + 0x1414);
  }
  lVar16 = *(long *)puVar7;
  local_78 = &PTR_FUN_04a36b50;
  local_6e = CONCAT11(local_48._3_1_,local_48._2_1_);
  local_68 = 0;
  local_70 = (undefined2)local_48;
  local_6c = local_44;
  uVar9 = FUN_0277d6c4(&local_70);
  if (*(long *)puVar7 == 0) {
LAB_01483cf4:
    local_48 = 0;
    puVar17 = (uint *)0x0;
    bVar19 = true;
  }
  else {
    lVar16 = *(long *)(lVar16 + 0x57e58);
    uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
    if ((*(uint *)(lVar16 + 0x1d8) <= uVar9) ||
       (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar9 * 8) == 0)) goto LAB_01483cf4;
    lVar16 = *(long *)PTR_DAT_04bc0428;
    uVar9 = FUN_0277d6c4(lVar15);
    uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
    if ((*(uint *)(lVar16 + 0x1d8) <= uVar9) ||
       (puVar17 = *(uint **)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar9 * 8),
       puVar17 == (uint *)0x0)) goto LAB_01483cf4;
    uVar9 = *puVar17;
    local_48 = 0;
    if ((uVar9 == 0) || (puVar17 == (uint *)(ulong)uVar9)) {
LAB_0148405c:
      bVar19 = false;
    }
    else {
      puVar13 = (uint *)((long)puVar17 - (long)(ulong)uVar9);
      local_48 = 0;
      if (*puVar13 == 0) goto LAB_0148405c;
      uVar9 = puVar13[1];
      if ((uVar9 == 0) || ((ulong)(ushort)puVar13[2] == 0)) {
LAB_01484058:
        local_48 = 0;
        goto LAB_0148405c;
      }
      lVar15 = 0xc;
      if (*(char *)((long)puVar13 + 10) != '\0') {
        lVar15 = 0x1c;
      }
      lVar15 = (long)puVar13 + lVar15 + (ulong)(ushort)puVar13[2] * 8;
      if (lVar15 == 0) goto LAB_01484058;
      uVar3 = 0;
      if ((ulong)uVar9 != 0) {
        uVar3 = (uint)((ulong)((long)puVar17 - lVar15) / (ulong)uVar9);
      }
      if (*puVar13 <= uVar3) {
        uVar3 = 0xffffffff;
      }
      if (DAT_05326d48 <= uVar3) goto LAB_01484058;
      uVar4 = *(ushort *)(DAT_05326d50 + (long)(int)uVar3 * 2);
      local_48 = (uint)uVar4;
      if (uVar4 < 0x52) goto LAB_0148405c;
      bVar19 = false;
      local_48 = 0;
    }
  }
  puVar7 = PTR_DAT_04bb2698;
  if ((local_48 < 0x1d) && ((1 << (ulong)(local_48 & 0x1f) & 0x1b800000U) != 0)) {
    lVar15 = *(long *)(param_1 + 0x48);
    lVar16 = *(long *)PTR_DAT_04bb2698;
    if (lVar16 == 0) {
      plVar11 = malloc(0x288);
    }
    else {
      plVar11 = param_3;
      if (param_3 == (long *)0x0) {
        lVar18 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar11 = (long *)(lVar16 + 8);
        if (lVar18 != 0) {
          plVar11 = (long *)(lVar18 + 0xa8);
        }
        plVar11 = (long *)*plVar11;
        if (plVar11 == (long *)0x0) {
          plVar11 = (long *)0x0;
          goto LAB_01483d88;
        }
      }
      plVar11 = (long *)(**(code **)(*plVar11 + 0x30))(plVar11,0x288,8);
    }
LAB_01483d88:
    FUN_00705c50(plVar11);
    puVar8 = PTR_DAT_04bb3088;
    pcVar14 = (char *)plVar11[0xc];
    *(undefined2 *)(plVar11 + 0x4f) = 0;
    *(undefined1 *)((long)plVar11 + 0x27e) = 0;
    *(undefined1 *)(plVar11 + 0x50) = 0;
    *(undefined4 *)((long)plVar11 + 0x27a) = 0x101;
    *plVar11 = (long)(puVar8 + 0x10);
    if (pcVar14 != "AnalogClock") {
      iVar10 = 0xb;
      if ((int)plVar11[0xd] < 0xc) {
        iVar10 = (int)plVar11[0xd] + -1;
      }
      memcpy(pcVar14,"AnalogClock",(long)iVar10);
      pcVar14[iVar10] = '\0';
    }
    *(uint *)(plVar11 + 0x4c) = *(uint *)(plVar11 + 0x4c) & 0xfffffff0 | 4;
    if ((*(uint *)(lVar15 + 0x248) >> 0xc & 1) != 0) {
      puVar13 = (uint *)(lVar15 + 0x248);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar13,0x10);
        if (bVar6) {
          *puVar13 = *puVar13 & 0xfffff7ff | 0x800;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      FUN_006f9fc0(lVar15,plVar11,0xffffffff);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar13,0x10);
        if (bVar6) {
          *puVar13 = *puVar13 & 0xfffff7ff;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      (**(code **)(*plVar11 + 0x38))(plVar11,lVar15 + 0x158,*(undefined8 *)(lVar15 + 0x240));
    }
  }
  local_48 = 0;
  if (((!bVar19) && (uVar9 = *puVar17, uVar9 != 0)) && (puVar17 != (uint *)(ulong)uVar9)) {
    puVar13 = (uint *)((long)puVar17 - (long)(ulong)uVar9);
    local_48 = 0;
    if (*puVar13 != 0) {
      uVar9 = puVar13[1];
      if ((uVar9 != 0) && ((ulong)(ushort)puVar13[2] != 0)) {
        lVar15 = 0xc;
        if (*(char *)((long)puVar13 + 10) != '\0') {
          lVar15 = 0x1c;
        }
        lVar15 = (long)puVar13 + lVar15 + (ulong)(ushort)puVar13[2] * 8;
        if (lVar15 != 0) {
          uVar3 = 0;
          if ((ulong)uVar9 != 0) {
            uVar3 = (uint)((ulong)((long)puVar17 - lVar15) / (ulong)uVar9);
          }
          if (*puVar13 <= uVar3) {
            uVar3 = 0xffffffff;
          }
          if ((uVar3 < DAT_05326d48) &&
             (local_48 = (uint)*(ushort *)(DAT_05326d50 + (long)(int)uVar3 * 2), local_48 < 0x52))
          goto LAB_01483efc;
        }
      }
      local_48 = 0;
    }
  }
LAB_01483efc:
  if (local_48 != 0x1a) {
    return;
  }
  lVar15 = *(long *)(param_1 + 0x48);
  lVar16 = *(long *)puVar7;
  if (lVar16 == 0) {
    plVar11 = malloc(0x2d0);
  }
  else {
    if (param_3 == (long *)0x0) {
      lVar18 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      puVar2 = (undefined8 *)(lVar16 + 8);
      if (lVar18 != 0) {
        puVar2 = (undefined8 *)(lVar18 + 0xa8);
      }
      param_3 = (long *)*puVar2;
      plVar11 = (long *)0x0;
      if (param_3 == (long *)0x0) goto LAB_01483f70;
    }
    plVar11 = (long *)(**(code **)(*param_3 + 0x30))(param_3,0x2d0,8);
  }
LAB_01483f70:
  FUN_00703290(plVar11);
  if ((*(uint *)(lVar15 + 0x248) >> 0xc & 1) != 0) {
    puVar17 = (uint *)(lVar15 + 0x248);
    do {
      cVar5 = '\x01';
      bVar19 = (bool)ExclusiveMonitorPass(puVar17,0x10);
      if (bVar19) {
        *puVar17 = *puVar17 & 0xfffff7ff | 0x800;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    FUN_006f9fc0(lVar15,plVar11,0xffffffff);
    do {
      cVar5 = '\x01';
      bVar19 = (bool)ExclusiveMonitorPass(puVar17,0x10);
      if (bVar19) {
        *puVar17 = *puVar17 & 0xfffff7ff;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    (**(code **)(*plVar11 + 0x38))(plVar11,lVar15 + 0x158,*(undefined8 *)(lVar15 + 0x240));
  }
  return;
}


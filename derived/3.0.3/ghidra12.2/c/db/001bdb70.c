
/* WARNING: Removing unreachable block (ram,0x001bdce0) */

undefined8 FUN_001bdb70(undefined8 param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  long lVar3;
  long *plVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  long *plVar8;
  undefined1 auStack_48 [16];
  undefined8 local_38;
  uint local_28 [2];
  
  lVar3 = *(long *)(param_2 + 0x138);
  if ((lVar3 == 0) || (*(long *)(lVar3 + 0x18) == 0)) {
    plVar8 = (long *)FUN_00185a6c(0x38);
    *plVar8 = (long)(PTR_DAT_04bcbc48 + 0x10);
    *(undefined4 *)(plVar8 + 1) = 1;
    *(undefined1 *)((long)plVar8 + 0xc) = 0;
    *plVar8 = (long)&PTR_FUN_048393d8;
    FUN_00196a24(plVar8,0xc,0);
    plVar8[3] = 0xc;
    plVar4 = *(long **)(param_2 + 0x138);
    if (plVar4 != (long *)0x0) {
      plVar1 = plVar4 + 1;
      iVar6 = (int)*plVar1;
      iVar5 = (int)*plVar1 + -1;
      if (iVar6 != (int)*plVar1) {
        ClearExclusiveLocal();
LAB_001bdcf4:
        do {
          lVar3 = *plVar1;
          iVar5 = iVar6 + -1;
          if ((int)lVar3 == iVar6) {
            cVar2 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar7) {
              *(int *)plVar1 = iVar5;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') goto LAB_001bdd28;
          }
          else {
            ClearExclusiveLocal();
          }
          iVar6 = (int)lVar3;
        } while( true );
      }
      cVar2 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *(int *)plVar1 = iVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 != '\0') goto LAB_001bdcf4;
      goto LAB_001bdd28;
    }
  }
  else {
    if (*(long *)(lVar3 + 0x28) == 0xc) {
      FUN_00196d30(lVar3,0);
      plVar8 = *(long **)(param_2 + 0x138);
      goto LAB_001bdd4c;
    }
    plVar8 = (long *)FUN_00185a6c(0x38);
    lVar3 = *(long *)(*(long *)(param_2 + 0x138) + 0x18);
    *plVar8 = (long)(PTR_DAT_04bcbc48 + 0x10);
    *(undefined4 *)(plVar8 + 1) = 1;
    *(undefined1 *)((long)plVar8 + 0xc) = 0;
    *plVar8 = (long)&PTR_FUN_048393d8;
    FUN_00196a24(plVar8,lVar3 + 0xc,0);
    plVar8[3] = 0xc;
    lVar3 = *(long *)(param_2 + 0x138);
    FUN_00193030(plVar8,*(long *)(lVar3 + 0x10) + *(long *)(lVar3 + 0x28),
                 *(undefined8 *)(lVar3 + 0x18),0xffffffffffffffff);
    plVar4 = *(long **)(param_2 + 0x138);
    if (plVar4 == (long *)0x0) goto LAB_001bdd48;
    plVar1 = plVar4 + 1;
    lVar3 = *plVar1;
    iVar5 = (int)*plVar1 + -1;
    if ((int)lVar3 == (int)*plVar1) {
      cVar2 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *(int *)plVar1 = iVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 != '\0') goto LAB_001bdd20;
      bVar7 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_001bdd20:
      bVar7 = false;
    }
    iVar6 = (int)lVar3;
    if (!bVar7) {
      do {
        lVar3 = *plVar1;
        iVar5 = iVar6 + -1;
        if ((int)lVar3 == iVar6) {
          cVar2 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar7) {
            *(int *)plVar1 = iVar5;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') break;
        }
        else {
          ClearExclusiveLocal();
        }
        iVar6 = (int)lVar3;
      } while( true );
    }
LAB_001bdd28:
    if ((iVar5 == 0) && (*(char *)((long)plVar4 + 0xc) == '\0')) {
      *(undefined1 *)((long)plVar4 + 0xc) = 1;
      (**(code **)(*plVar4 + 8))();
    }
  }
LAB_001bdd48:
  *(long **)(param_2 + 0x138) = plVar8;
LAB_001bdd4c:
  lVar3 = plVar8[3];
  plVar8[3] = 0;
  FUN_001972b0(auStack_48,plVar8);
  local_28[0]._0_1_ = *(undefined1 *)(param_2 + 0x114);
  FUN_00193030(local_38,local_28,1,0xffffffffffffffff);
  local_28[0]._0_1_ = *(undefined1 *)(param_2 + 0x115);
  FUN_00193030(local_38,local_28,1,0xffffffffffffffff);
  local_28[0] = (uint)local_28[0]._1_3_ << 8;
  FUN_00193030(local_38,local_28,1,0xffffffffffffffff);
  local_28[0] = local_28[0] & 0xffffff00;
  FUN_00193030(local_38,local_28,1,0xffffffffffffffff);
  local_28[0] = *(uint *)(param_2 + 0x118);
  FUN_00193030(local_38,local_28,4,0xffffffffffffffff);
  local_28[0] = *(uint *)(param_2 + 0x11c);
  FUN_00193030(local_38,local_28,4,0xffffffffffffffff);
  *(long *)(*(long *)(param_2 + 0x138) + 0x18) = lVar3;
  FUN_00197350(auStack_48);
  return 1;
}


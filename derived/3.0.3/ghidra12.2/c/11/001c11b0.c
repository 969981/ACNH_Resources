
/* WARNING: Removing unreachable block (ram,0x001c1358) */

void FUN_001c11b0(long param_1,ulong *param_2)

{
  long *plVar1;
  undefined2 uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  undefined4 local_e0;
  undefined2 local_dc;
  long local_48;
  
  if ((((*PTR_DAT_04bcc628 != '\0') && (*(long *)(*(long *)(param_1 + 0x328) + 0x28) == 0)) &&
      (*(long *)(param_1 + 0x350) != 0)) && (*(ulong *)(param_1 + 0x508) <= *param_2)) {
    FUN_001c1870(*(long *)(param_1 + 0x328),param_1 + 0x330,
                 *(undefined2 *)(*(long *)(param_1 + 0x338) + 0xac));
    *(ulong *)(param_1 + 0x508) = *param_2 + 0xf;
  }
LAB_001c1228:
  do {
    if (*(long *)(*(long *)(param_1 + 0x328) + 0x28) == 0) {
LAB_001c13c0:
      if ((*(char *)(param_1 + 0xa8) != '\0') &&
         (lVar5 = *(long *)(param_1 + 0x2c8), lVar5 != *(long *)(param_1 + 0x2d0))) {
        do {
          FUN_001c29f0(*(undefined8 *)(lVar5 + 8));
          lVar5 = lVar5 + 0x10;
        } while (lVar5 != *(long *)(param_1 + 0x2d0));
      }
      return;
    }
    lVar10 = *(long *)(*(long *)(param_1 + 0x328) + 0x10);
    local_e0 = *(undefined4 *)(lVar10 + 0x1e8);
    uVar2 = *(undefined2 *)(lVar10 + 0xac);
    local_dc = uVar2;
    lVar5 = FUN_001bf4b0(param_1,&local_e0);
    if (lVar5 == 0) {
      local_48 = lVar10;
      (**(code **)(**(long **)(param_1 + 0x328) + 0x28))
                (&local_e0,*(long **)(param_1 + 0x328),&local_48);
      goto LAB_001c1228;
    }
    FUN_001e1564(&local_e0,lVar10 + 0x140);
    iVar8 = *(int *)(param_1 + 0x98);
    if ((*(char *)(param_1 + 0x468) == '\0') ||
       (uVar6 = FUN_001bcf54(param_1 + 0x458,&local_e0,0), (uVar6 & 1) == 0)) {
      iVar9 = iVar8;
      if (*(char *)(param_1 + 0x440) != '\0') {
        uVar6 = FUN_001d681c(param_1 + 0x438,&local_e0,0);
        iVar9 = iVar8 + -0x18;
        if ((uVar6 & 1) == 0) {
          iVar9 = iVar8;
        }
      }
    }
    else {
      iVar9 = iVar8 + -0x2c;
    }
    plVar7 = (long *)FUN_001c1c60(lVar5,*(undefined8 *)(param_1 + 0x328),param_1 + 0x330,iVar9);
    if (plVar7 == (long *)0x0) {
      FUN_001e1868(&local_e0);
      goto LAB_001c13c0;
    }
    FUN_001c2814(param_1,lVar5,plVar7,&local_e0,uVar2);
    plVar1 = plVar7 + 1;
    iVar8 = (int)*plVar1;
    iVar9 = (int)*plVar1 + -1;
    if (iVar8 != (int)*plVar1) {
      ClearExclusiveLocal();
LAB_001c1370:
      do {
        lVar5 = *plVar1;
        iVar9 = iVar8 + -1;
        if ((int)lVar5 == iVar8) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *(int *)plVar1 = iVar9;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_001c1338;
        }
        else {
          ClearExclusiveLocal();
        }
        iVar8 = (int)lVar5;
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar9;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 != '\0') goto LAB_001c1370;
LAB_001c1338:
    if ((iVar9 == 0) && (*(char *)((long)plVar7 + 0xc) == '\0')) {
      *(undefined1 *)((long)plVar7 + 0xc) = 1;
      (**(code **)(*plVar7 + 8))(plVar7);
      FUN_001e1868(&local_e0);
    }
    else {
      FUN_001e1868(&local_e0);
    }
  } while( true );
}



void FUN_002154d0(undefined8 param_1,long param_2,long param_3,undefined4 param_4,long param_5,
                 long param_6,long param_7,long param_8,undefined8 param_9,undefined4 param_10,
                 undefined8 param_11,long param_12)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  undefined4 local_78 [6];
  undefined4 local_54;
  
  *(undefined4 *)(param_2 + 0x230) = 0;
  *(undefined8 *)(param_2 + 0x210) = 0xc800000000;
  local_54 = 0x10001;
  FUN_0018aa70(local_78,&local_54);
  FUN_0018ab44(param_2 + 0x218,local_78);
  *(undefined4 *)(param_2 + 0x238) = 0;
  if (((param_3 == 0) || (param_5 == 0)) || ((param_6 != 0 && (param_7 == 0)))) {
    local_78[0] = 0x8001000a;
    goto LAB_002155ec;
  }
  plVar4 = *(long **)(param_2 + 0x1f8);
  if (plVar4 == (long *)0x0) {
LAB_002155cc:
    uVar5 = FUN_00209484(param_2);
    if (((((uVar5 & 1) == 0) && (*(long *)(param_2 + 0xc0) == 0)) &&
        ((*(long *)(param_2 + 0x200) == 0 || (*(int *)(*(long *)(param_2 + 0x200) + 0x40) == 5))))
       && (uVar5 = FUN_00209464(param_2), (uVar5 & 1) == 0)) {
      FUN_002157fc(param_2,param_5,0xffffffff);
      uVar5 = FUN_00194070(param_3);
      if ((uVar5 & 1) == 0) {
        local_78[0] = 0x8001000d;
        goto LAB_002155ec;
      }
      if (param_8 == 0) {
        lVar6 = FUN_00185a6c(0x238);
        if (lVar6 != 0) {
          FUN_00216750(lVar6);
        }
        if (param_12 == 0) {
          FUN_002159c8(lVar6,*(undefined4 *)(param_3 + 0x18),param_4,param_2,param_11,param_9,
                       param_10);
        }
        else {
          FUN_00215950();
        }
      }
      else {
        lVar6 = FUN_00185a6c(0x1d0);
        if (lVar6 != 0) {
          FUN_0021613c(lVar6);
        }
        FUN_002158d4(lVar6,*(undefined4 *)(param_3 + 0x18),param_4,param_2,param_11,param_8,param_10
                    );
      }
      *(long *)(param_2 + 0x1f8) = lVar6;
      piVar2 = (int *)(lVar6 + 8);
      iVar8 = *piVar2;
      if (iVar8 == *piVar2) {
        cVar3 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar10) {
          *piVar2 = *piVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_00215770;
        bVar10 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_00215770:
        bVar10 = false;
      }
      if (!bVar10) {
        do {
          iVar9 = *piVar2;
          if (iVar9 == iVar8) {
            cVar3 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar10) {
              *piVar2 = iVar8 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') break;
          }
          else {
            ClearExclusiveLocal();
          }
          iVar8 = iVar9;
        } while( true );
      }
      uVar7 = FUN_001a5254();
      FUN_00194148(uVar7,*(undefined8 *)(param_2 + 0x1f8),0);
      local_78[0] = 0x10001;
      goto LAB_002155ec;
    }
  }
  else if ((int)plVar4[8] == 5) {
    plVar1 = plVar4 + 1;
    lVar6 = *plVar1;
    iVar8 = (int)*plVar1 + -1;
    if ((int)lVar6 == (int)*plVar1) {
      cVar3 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar10) {
        *(int *)plVar1 = iVar8;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 != '\0') goto LAB_002155a0;
      bVar10 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_002155a0:
      bVar10 = false;
    }
    iVar9 = (int)lVar6;
    if (!bVar10) {
      do {
        lVar6 = *plVar1;
        iVar8 = iVar9 + -1;
        if ((int)lVar6 == iVar9) {
          cVar3 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar10) {
            *(int *)plVar1 = iVar8;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') break;
        }
        else {
          ClearExclusiveLocal();
        }
        iVar9 = (int)lVar6;
      } while( true );
    }
    if ((iVar8 == 0) && (*(char *)((long)plVar4 + 0xc) == '\0')) {
      *(undefined1 *)((long)plVar4 + 0xc) = 1;
      (**(code **)(*plVar4 + 8))();
    }
    *(undefined8 *)(param_2 + 0x1f8) = 0;
    goto LAB_002155cc;
  }
  local_78[0] = 0x80010004;
LAB_002155ec:
  FUN_0018aa70(param_1,local_78);
  return;
}


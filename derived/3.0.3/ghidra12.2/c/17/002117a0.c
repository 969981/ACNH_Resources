
void FUN_002117a0(long *param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5,
                 long param_6,long *param_7,undefined4 param_8)

{
  long *plVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  long *plVar8;
  int *piVar9;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  
  FUN_001944f8(param_1,2,&local_58);
  *param_1 = (long)(PTR_DAT_04bccd98 + 0x10);
  FUN_001fb850(param_1 + 0xd,0);
  param_1[0x25] = (long)(PTR_DAT_04bccbc0 + 0x10);
  param_1[0x26] = 0;
  FUN_001fb850(param_1 + 0x2a,0);
  param_1[0x42] = (long)(PTR_DAT_04bcbc48 + 0x10);
  *(undefined4 *)(param_1 + 0x43) = 1;
  *(undefined1 *)((long)param_1 + 0x21c) = 0;
  param_1[0x44] = 0;
  *(undefined4 *)(param_1 + 0x45) = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x42] = (long)&PTR_FUN_04839418;
  param_1[0x46] = (long)(param_1 + 0x46);
  param_1[0x47] = (long)(param_1 + 0x46);
  local_58 = 0x80010001;
  FUN_0018aa70(param_1 + 0x4d,&local_58);
  param_1[0x50] = 0;
  *(undefined4 *)(param_1 + 0x51) = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = param_2;
  param_1[0x56] = (long)(param_1 + 0x56);
  param_1[0x57] = (long)(param_1 + 0x56);
  param_1[0x58] = 0;
  FUN_001b8014(param_1 + 0x59);
  FUN_0018aa4c(param_1 + 0x67);
  FUN_001b8358(param_1 + 0x6a,param_3);
  param_1[0x78] = param_5;
  param_1[0x79] = param_6;
  lVar5 = *param_7;
  param_1[0x7b] = 0;
  param_1[0x7e] = 0;
  *(undefined4 *)((long)param_1 + 100) = 0;
  param_1[0x7a] = lVar5;
  FUN_0018d4c4(&local_58,param_8);
  param_1[0x7b] = CONCAT44(uStack_54,local_58);
  local_5c = 0x10001;
  FUN_0018aa70(&local_58,&local_5c);
  FUN_0018ab44(param_1 + 0x67,&local_58);
  plVar8 = (long *)param_1[0x26];
  if (plVar8 == (long *)0x0) {
LAB_002119fc:
    param_1[0x27] = 0;
    param_1[0x28] = 0;
    param_1[0x7c] = 0;
    *(undefined4 *)(param_1 + 0x7d) = 0;
    param_1[0x55] = 0;
    if (param_1[0x7a] != 0) {
      *(long **)(param_1[0x7a] + 0x328) = param_1;
    }
    return;
  }
  plVar1 = plVar8 + 1;
  iVar7 = (int)*plVar1;
  iVar6 = (int)*plVar1 + -1;
  if (iVar7 == (int)*plVar1) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar6;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') {
LAB_00211958:
      if (iVar6 == 0) {
        piVar9 = (int *)((long)plVar8 + 0xc);
        (**(code **)(*plVar8 + 0x10))(plVar8);
        iVar6 = *piVar9 + -1;
        iVar7 = *piVar9;
        if (iVar7 != *piVar9) {
          ClearExclusiveLocal();
LAB_00211a40:
          do {
            iVar2 = *piVar9;
            iVar6 = iVar7 + -1;
            if (iVar2 == iVar7) {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar9,0x10);
              if (bVar4) {
                *piVar9 = iVar6;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') goto LAB_002119e4;
            }
            else {
              ClearExclusiveLocal();
            }
            iVar7 = iVar2;
          } while( true );
        }
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar4) {
          *piVar9 = iVar6;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_00211a40;
LAB_002119e4:
        if (iVar6 == 0) {
          (**(code **)(*plVar8 + 8))(plVar8);
        }
      }
      param_1[0x26] = 0;
      goto LAB_002119fc;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  do {
    lVar5 = *plVar1;
    iVar6 = iVar7 + -1;
    if ((int)lVar5 == iVar7) {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') goto LAB_00211958;
    }
    else {
      ClearExclusiveLocal();
    }
    iVar7 = (int)lVar5;
  } while( true );
}


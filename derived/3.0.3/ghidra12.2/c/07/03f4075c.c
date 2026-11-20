
undefined8 FUN_03f4075c(long param_1)

{
  long *plVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  
  if (0 < *(int *)(param_1 + 0x90)) {
    return 0;
  }
  if (*(int *)(param_1 + 0x10) == 1) {
    return 0;
  }
  switch(*(undefined4 *)(param_1 + 0x10)) {
  case 5:
    uVar6 = FUN_03f3ef4c(param_1);
    if ((uVar6 & 1) == 0) {
      return 0;
    }
  default:
    goto switchD_03f407c0_caseD_6;
  case 7:
    if (*(long *)(param_1 + 0xe8) != 0) {
      FUN_03f42ca4(*(long *)(param_1 + 0xe8),param_1 + 200,1);
    }
    *(undefined8 *)(param_1 + 0x70) = 0;
    FUN_03f2d620(param_1 + 0x38);
    if (*(int *)(param_1 + 0x108) == 1) goto switchD_03f407c0_caseD_6;
    break;
  case 8:
  case 9:
    break;
  case 10:
  case 0xd:
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x2f8));
  case 0xe:
  case 0xf:
    uVar6 = FUN_03f3ef4c(param_1);
    if ((uVar6 & 1) == 0) {
      return 0;
    }
switchD_03f407c0_caseD_b:
    FUN_03f3ebf4(param_1);
    break;
  case 0xb:
  case 0xc:
    goto switchD_03f407c0_caseD_b;
  }
  if (((*(uint *)(param_1 + 0x10) & 0xfffffffe) == 8) &&
     (puVar7 = *(undefined8 **)(param_1 + 0x30), puVar7 != (undefined8 *)0x0)) {
    if (((*PTR_DAT_04bb4458 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb4458), iVar3 != 0)) {
      *(undefined **)PTR_DAT_04bb4450 = PTR_DAT_04bb2870 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb4458);
    }
    (**(code **)*puVar7)(puVar7,PTR_DAT_04bb4450);
  }
switchD_03f407c0_caseD_6:
  *(undefined4 *)(param_1 + 0x10) = 1;
  if (*(long *)(param_1 + 0x3f8) != 0) {
    if (*(long *)(param_1 + 0x180) != 0) {
      FUN_03f42ca4(*(long *)(param_1 + 0x180),param_1 + 0x160,1);
    }
    if ((*(byte *)(param_1 + 0xc) >> 1 & 1) != 0) {
      lVar8 = *(long *)(param_1 + 0x18);
      lVar4 = 0;
      if (*(long **)(param_1 + 0x3f8) != (long *)0x0) {
        lVar4 = (**(code **)(**(long **)(param_1 + 0x3f8) + 0x70))();
      }
      *(long *)(lVar8 + 0xc0) = *(long *)(lVar8 + 0xc0) - lVar4;
      *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xfffffffd;
    }
    puVar2 = PTR_DAT_04bb3350;
    plVar1 = (long *)(param_1 + 0x3f8);
    if (*(int *)(param_1 + 0x10) == 1) {
      lVar4 = *plVar1;
      if (lVar4 == 0) {
        lVar8 = 1;
      }
      else {
        lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        lVar8 = *(long *)(lVar5 + 0xa8);
        *(long *)(lVar5 + 0xa8) = lVar4;
      }
      if (*(long **)(param_1 + 0x30) != (long *)0x0) {
        (**(code **)(**(long **)(param_1 + 0x30) + 0x18))();
        *(undefined8 *)(param_1 + 0x30) = 0;
      }
      if (lVar8 != 1) {
        lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
        *(long *)(lVar4 + 0xa8) = lVar8;
      }
    }
    lVar4 = *(long *)(param_1 + 0x20);
    if (((lVar4 != 0) && (*(long *)(param_1 + 0x3f8) != 0)) &&
       (uVar6 = (**(code **)(**(long **)(lVar4 + 0x20) + 0x88))(), (uVar6 & 1) != 0)) {
      FUN_03f2b710(lVar4,plVar1,param_1);
    }
    *plVar1 = 0;
  }
  return 1;
}


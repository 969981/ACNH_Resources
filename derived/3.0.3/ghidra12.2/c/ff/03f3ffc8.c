
undefined8 FUN_03f3ffc8(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  uint uVar8;
  undefined8 *puVar9;
  long lVar10;
  long *plVar11;
  undefined4 uVar12;
  
  uVar8 = *(uint *)(param_1 + 0xc);
  if ((uVar8 >> 2 & 1) != 0) {
    lVar10 = *(long *)(param_1 + 0x18);
    lVar5 = 0;
    if (*(long **)(param_1 + 0x3f8) != (long *)0x0) {
      lVar5 = (**(code **)(**(long **)(param_1 + 0x3f8) + 0x70))();
    }
    *(long *)(lVar10 + 200) = *(long *)(lVar10 + 200) - lVar5;
    uVar8 = *(uint *)(param_1 + 0xc) & 0xfffffffb;
    *(uint *)(param_1 + 0xc) = uVar8;
  }
  puVar3 = PTR_DAT_04bb4458;
  if ((uVar8 >> 0x11 & 1) == 0) {
    switch(*(undefined4 *)(param_1 + 0x10)) {
    case 5:
    case 0xe:
    case 0xf:
      plVar11 = *(long **)(param_1 + 0x30);
      uVar12 = 0xb;
      if (plVar11 == (long *)0x0) goto LAB_03f404f4;
      if (((*PTR_DAT_04bb4458 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb4458), iVar4 != 0)) {
        *(undefined **)PTR_DAT_04bb4450 = PTR_DAT_04bb2870 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb4458);
      }
      uVar6 = (**(code **)*plVar11)(plVar11,PTR_DAT_04bb4450);
      if ((uVar6 & 1) != 0) {
        *(undefined4 *)(param_1 + 0x10) = 6;
        uVar6 = (**(code **)(*plVar11 + 0x48))(plVar11);
        if ((uVar6 & 1) == 0) {
LAB_03f404f0:
          uVar12 = 5;
LAB_03f404f4:
          *(undefined4 *)(param_1 + 0x10) = uVar12;
          return 0;
        }
      }
      *(undefined4 *)(param_1 + 0x2d0) = 0;
      nn::os::ClearLightEvent((LightEventType *)(param_1 + 0x2f8));
      *(undefined4 *)(param_1 + 0x10) = 0xb;
      FUN_03f3ebf4(param_1);
      if (((*(uint *)(param_1 + 0x10) & 0xfffffffe) == 8) &&
         (puVar7 = *(undefined8 **)(param_1 + 0x30), puVar7 != (undefined8 *)0x0)) {
        bVar1 = *puVar3;
joined_r0x03f40210:
        if (((bVar1 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb4458), iVar4 != 0)) {
          *(undefined **)PTR_DAT_04bb4450 = PTR_DAT_04bb2870 + 0x10;
          __cxa_guard_release(PTR_DAT_04bb4458);
        }
        (**(code **)*puVar7)(puVar7,PTR_DAT_04bb4450);
      }
      break;
    default:
      goto switchD_03f40040_caseD_6;
    case 7:
      if (*(long *)(param_1 + 0xe8) != 0) {
        FUN_03f42ca4(*(long *)(param_1 + 0xe8),param_1 + 200,1);
      }
      *(undefined8 *)(param_1 + 0x70) = 0;
      if ((*(byte *)(param_1 + 0x40) >> 1 & 1) != 0) {
        *(byte *)(param_1 + 0x40) = *(byte *)(param_1 + 0x40) & 0xf8 | 4;
        if (*(long *)(param_1 + 0x60) == 0) {
          if (*(long *)(param_1 + 0x48) != 0) goto LAB_03f40560;
        }
        else {
          FUN_03f45838(param_1 + 0x50);
          if (*(long *)(param_1 + 0x48) == 0) {
            *(undefined4 *)(param_1 + 0x44) = 0xe;
          }
          else {
LAB_03f40560:
            if (*(long *)PTR_DAT_04bb49b8 != 0) {
              FUN_03f350f4(*(long *)PTR_DAT_04bb49b8,param_1 + 0x38);
            }
          }
        }
      }
      if (*(int *)(param_1 + 0x108) != 1) goto LAB_03f40220;
      break;
    case 8:
    case 9:
switchD_03f40040_caseD_8:
      puVar7 = *(undefined8 **)(param_1 + 0x30);
      if (puVar7 != (undefined8 *)0x0) {
        bVar1 = *PTR_DAT_04bb4458;
        goto joined_r0x03f40210;
      }
      break;
    case 10:
    case 0xd:
      nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x2f8));
      puVar3 = PTR_DAT_04bb4458;
      uVar12 = 0xb;
      if (((0xf < *(uint *)(param_1 + 0x10)) ||
          ((1 << (ulong)(*(uint *)(param_1 + 0x10) & 0x1f) & 0xc020U) == 0)) ||
         (plVar11 = *(long **)(param_1 + 0x30), plVar11 == (long *)0x0)) goto LAB_03f404f4;
      if (((*PTR_DAT_04bb4458 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb4458), iVar4 != 0)) {
        *(undefined **)PTR_DAT_04bb4450 = PTR_DAT_04bb2870 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb4458);
      }
      uVar6 = (**(code **)*plVar11)(plVar11,PTR_DAT_04bb4450);
      if ((uVar6 & 1) != 0) {
        *(undefined4 *)(param_1 + 0x10) = 6;
        uVar6 = (**(code **)(*plVar11 + 0x48))(plVar11);
        if ((uVar6 & 1) == 0) goto LAB_03f404f0;
      }
      *(undefined4 *)(param_1 + 0x2d0) = 0;
      nn::os::ClearLightEvent((LightEventType *)(param_1 + 0x2f8));
      *(undefined4 *)(param_1 + 0x10) = 0xb;
      FUN_03f3ebf4(param_1);
      if (((*(uint *)(param_1 + 0x10) & 0xfffffffe) == 8) &&
         (puVar7 = *(undefined8 **)(param_1 + 0x30), puVar7 != (undefined8 *)0x0)) {
        bVar1 = *puVar3;
        goto joined_r0x03f40210;
      }
      break;
    case 0xb:
    case 0xc:
      FUN_03f3ebf4(param_1);
LAB_03f40220:
      if ((*(uint *)(param_1 + 0x10) & 0xfffffffe) == 8) goto switchD_03f40040_caseD_8;
    }
    uVar8 = *(uint *)(param_1 + 0xc);
    *(undefined4 *)(param_1 + 0x10) = 0;
    goto switchD_03f40040_caseD_6;
  }
  switch(*(undefined4 *)(param_1 + 0x10)) {
  case 0:
    if (*(int *)(param_1 + 0x108) != 1) goto switchD_03f400f0_caseD_1;
    break;
  default:
    goto switchD_03f400f0_caseD_1;
  case 5:
  case 0xe:
    plVar11 = *(long **)(param_1 + 0x30);
    uVar12 = 0xb;
    if (plVar11 == (long *)0x0) {
LAB_03f4053c:
      *(undefined4 *)(param_1 + 0x10) = uVar12;
      return 0;
    }
    if (((*PTR_DAT_04bb4458 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb4458), iVar4 != 0)) {
      *(undefined **)PTR_DAT_04bb4450 = PTR_DAT_04bb2870 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb4458);
    }
    uVar6 = (**(code **)*plVar11)(plVar11,PTR_DAT_04bb4450);
    if ((uVar6 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x10) = 6;
      uVar6 = (**(code **)(*plVar11 + 0x48))(plVar11);
      if ((uVar6 & 1) == 0) {
        uVar12 = 5;
        goto LAB_03f4053c;
      }
    }
    *(undefined4 *)(param_1 + 0x2d0) = 0;
    nn::os::ClearLightEvent((LightEventType *)(param_1 + 0x2f8));
    *(undefined4 *)(param_1 + 0x10) = 0xb;
    goto switchD_03f400f0_caseD_1;
  case 9:
    puVar7 = *(undefined8 **)(param_1 + 0x30);
    uVar8 = uVar8 & 0xfffdffff;
    *(uint *)(param_1 + 0xc) = uVar8;
    if (puVar7 != (undefined8 *)0x0) {
LAB_03f402e8:
      if (((*PTR_DAT_04bb4458 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb4458), iVar4 != 0)) {
        *(undefined **)PTR_DAT_04bb4450 = PTR_DAT_04bb2870 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb4458);
      }
      puVar9 = (undefined8 *)*puVar7;
LAB_03f40304:
      (*(code *)*puVar9)(puVar7,PTR_DAT_04bb4450);
      goto LAB_03f40310;
    }
    goto LAB_03f40314;
  case 10:
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x2f8));
    if (*(int *)(param_1 + 0x10) == 0xf) goto LAB_03f40500;
    if (*(int *)(param_1 + 0x10) == 0xe) goto LAB_03f40390;
    uVar8 = *(uint *)(param_1 + 0xc);
    break;
  case 0xc:
    *(uint *)(param_1 + 0xc) = uVar8 & 0xfffdffff;
    FUN_03f3ebf4(param_1);
    if (((*(uint *)(param_1 + 0x10) & 0xfffffffe) == 8) &&
       (puVar7 = *(undefined8 **)(param_1 + 0x30), puVar7 != (undefined8 *)0x0)) goto LAB_03f402e8;
    goto LAB_03f40310;
  case 0xd:
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x2f8));
    if (*(int *)(param_1 + 0x10) != 0xf) {
      if (*(int *)(param_1 + 0x10) != 0xe) goto switchD_03f400f0_caseD_1;
LAB_03f40390:
      plVar11 = *(long **)(param_1 + 0x30);
      uVar12 = 0xb;
      if (plVar11 == (long *)0x0) goto LAB_03f404f4;
      if (((*PTR_DAT_04bb4458 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb4458), iVar4 != 0)) {
        *(undefined **)PTR_DAT_04bb4450 = PTR_DAT_04bb2870 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb4458);
      }
      uVar6 = (**(code **)*plVar11)(plVar11,PTR_DAT_04bb4450);
      if ((uVar6 & 1) != 0) {
        *(undefined4 *)(param_1 + 0x10) = 6;
        uVar6 = (**(code **)(*plVar11 + 0x48))(plVar11);
        if ((uVar6 & 1) == 0) goto LAB_03f404f0;
      }
      *(undefined4 *)(param_1 + 0x2d0) = 0;
      nn::os::ClearLightEvent((LightEventType *)(param_1 + 0x2f8));
      *(undefined4 *)(param_1 + 0x10) = 0xb;
      goto switchD_03f400f0_caseD_1;
    }
LAB_03f40500:
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xfffdffff;
    uVar6 = FUN_03f3ef4c(param_1);
    if ((uVar6 & 1) == 0) {
      return 0;
    }
    FUN_03f3ebf4(param_1);
    FUN_03f3eb4c(param_1);
    uVar8 = *(uint *)(param_1 + 0xc);
    goto switchD_03f40040_caseD_6;
  case 0xf:
    plVar11 = *(long **)(param_1 + 0x30);
    uVar12 = 0xb;
    *(uint *)(param_1 + 0xc) = uVar8 & 0xfffdffff;
    puVar3 = PTR_DAT_04bb4458;
    if (plVar11 == (long *)0x0) {
LAB_03f4054c:
      *(undefined4 *)(param_1 + 0x10) = uVar12;
      return 0;
    }
    if (((*PTR_DAT_04bb4458 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb4458), iVar4 != 0)) {
      *(undefined **)PTR_DAT_04bb4450 = PTR_DAT_04bb2870 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb4458);
    }
    puVar2 = PTR_DAT_04bb4450;
    uVar6 = (**(code **)*plVar11)(plVar11,PTR_DAT_04bb4450);
    if ((uVar6 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x10) = 6;
      uVar6 = (**(code **)(*plVar11 + 0x48))(plVar11);
      if ((uVar6 & 1) == 0) {
        uVar12 = 5;
        goto LAB_03f4054c;
      }
    }
    *(undefined4 *)(param_1 + 0x2d0) = 0;
    nn::os::ClearLightEvent((LightEventType *)(param_1 + 0x2f8));
    *(undefined4 *)(param_1 + 0x10) = 0xb;
    FUN_03f3ebf4(param_1);
    if (((*(uint *)(param_1 + 0x10) & 0xfffffffe) == 8) &&
       (puVar7 = *(undefined8 **)(param_1 + 0x30), puVar7 != (undefined8 *)0x0)) {
      if (((*puVar3 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb4458), iVar4 != 0)) {
        *(undefined **)puVar2 = PTR_DAT_04bb2870 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb4458);
      }
      puVar9 = (undefined8 *)*puVar7;
      goto LAB_03f40304;
    }
LAB_03f40310:
    uVar8 = *(uint *)(param_1 + 0xc);
LAB_03f40314:
    *(uint *)(param_1 + 0xc) = uVar8 | 0x8000;
    *(undefined4 *)(param_1 + 0x10) = 0;
    goto switchD_03f400f0_caseD_1;
  }
  uVar8 = uVar8 & 0xfffdffff;
switchD_03f40040_caseD_6:
  *(uint *)(param_1 + 0xc) = uVar8 | 0x8000;
switchD_03f400f0_caseD_1:
  uVar8 = *(uint *)(param_1 + 0xc);
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    *(uint *)(param_1 + 0xc) = uVar8 | 0x10000;
    FUN_03f4075c(param_1);
  }
  else {
    *(uint *)(param_1 + 0xc) = uVar8 | 0x8000;
    if (((uVar8 >> 0x11 & 1) != 0) && (*(long *)(param_1 + 0x20) != 0)) {
      FUN_03f2bc40(*(long *)(param_1 + 0x20),param_1);
    }
  }
  return 1;
}


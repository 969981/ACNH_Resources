
ulong FUN_00162508(undefined8 param_1,long param_2,void *param_3,ulong param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  void *__dest;
  uint uVar7;
  undefined8 uVar8;
  uint *puVar9;
  int *piVar10;
  undefined8 *puVar11;
  long local_38;
  
  piVar10 = (int *)(param_2 + 0x10);
  iVar4 = (int)param_4;
  if (*piVar10 - 1U < 6) {
    switch(*piVar10) {
    case 1:
      local_38 = 0;
      iVar3 = FUN_0016271c(param_3,param_4,&local_38);
      if (iVar3 != 0) {
        if (iVar3 != 2) {
LAB_00162640:
          FUN_00162138(param_1,param_2 + 0x18);
          uVar8 = 0x3d;
          goto LAB_00162670;
        }
        *(int *)(param_2 + 0x20) = iVar4;
        __dest = (void *)FUN_001432f0(param_4 & 0xffffffff);
        *(void **)(param_2 + 0x18) = __dest;
        if (__dest != (void *)0x0) {
          memcpy(__dest,param_3,(ulong)*(uint *)(param_2 + 0x20));
          *(undefined4 *)(param_2 + 0x10) = 4;
          return 0;
        }
LAB_0016266c:
        uVar8 = 0x1b;
LAB_00162670:
        uVar6 = FUN_001623cc(param_1,param_2 + 0x18,piVar10,uVar8);
        return uVar6;
      }
      iVar4 = iVar4 - (int)local_38;
      *(long *)(param_2 + 0x18) = (long)param_3 + local_38;
      break;
    default:
      goto switchD_0016255c_caseD_2;
    case 3:
      *(void **)(param_2 + 0x18) = param_3;
      *(int *)(param_2 + 0x20) = iVar4;
      uVar6 = FUN_0016215c(param_1,piVar10);
      return uVar6;
    case 4:
      local_38 = 0;
      *(int *)(param_2 + 0x20) = *(int *)(param_2 + 0x20) + iVar4;
      lVar5 = FUN_00144e8c(*(undefined8 *)(param_2 + 0x18));
      *(long *)(param_2 + 0x18) = lVar5;
      if (lVar5 == 0) goto LAB_0016266c;
      memcpy((void *)((lVar5 + (ulong)*(uint *)(param_2 + 0x20)) - param_4),param_3,param_4);
      uVar8 = *(undefined8 *)(param_2 + 0x18);
      iVar4 = FUN_0016271c(uVar8,*(undefined4 *)(param_2 + 0x20),&local_38);
      if (iVar4 != 0) {
        if (iVar4 == 2) {
          return 0;
        }
        goto LAB_00162640;
      }
      FUN_00143300(uVar8);
      iVar4 = *(uint *)(param_2 + 0x20) - (int)local_38;
      *(ulong *)(param_2 + 0x18) =
           (long)param_3 + ((local_38 + param_4) - (ulong)*(uint *)(param_2 + 0x20));
      break;
    case 6:
      *(void **)(param_2 + 0x18) = param_3;
      *(int *)(param_2 + 0x20) = iVar4;
      uVar7 = 6;
      goto LAB_001626d8;
    }
    *(int *)(param_2 + 0x20) = iVar4;
    *(undefined4 *)(param_2 + 0x10) = 5;
  }
  else {
switchD_0016255c_caseD_2:
    *(void **)(param_2 + 0x18) = param_3;
    *(int *)(param_2 + 0x20) = iVar4;
  }
  if (iVar4 == 0) {
    return 0;
  }
  uVar7 = 5;
LAB_001626d8:
  puVar9 = (uint *)(param_2 + 0x10);
  puVar11 = (undefined8 *)(param_2 + 0x18);
  uVar8 = *puVar11;
  if (*puVar9 < 7 && (1 << (ulong)(*puVar9 & 0x1f) & 0x66U) != 0) {
    iVar4 = *(int *)(param_2 + 0x20);
    lVar5 = FUN_001432f0(0x4000);
    if (lVar5 != 0) {
switchD_001622a0_caseD_0:
      *(long *)(param_2 + 0x30) = lVar5;
      *(undefined4 *)(param_2 + 0x38) = 0x4000;
      uVar1 = FUN_0017cb70(puVar11,5);
      if (*(int *)(param_2 + 0x38) != 0x4000 && uVar1 < 2) {
        *(uint *)(param_2 + 0x10) = uVar7;
        uVar2 = (**(code **)(**(long **)(param_2 + 8) + 0x18))
                          (param_1,*(long **)(param_2 + 8),lVar5,0x4000 - *(int *)(param_2 + 0x38));
        if (uVar2 != 0) {
          uVar6 = (ulong)uVar2;
          FUN_001623cc(param_1,puVar11,puVar9,uVar6);
          goto LAB_00162384;
        }
      }
      switch(uVar1) {
      case 0:
        goto switchD_001622a0_caseD_0;
      case 1:
        uVar6 = FUN_0016215c(param_1,puVar9);
        goto LAB_00162380;
      case 0xfffffffb:
        uVar6 = 0;
LAB_00162384:
        FUN_00143300(lVar5);
        if ((iVar4 != 0) && (*puVar9 == 1)) {
          *puVar9 = uVar7;
        }
        return uVar6;
      case 0xfffffffd:
        if (*puVar9 == 1) {
          FUN_0017ea30(puVar11);
          iVar3 = FUN_0017c990(puVar11,0xfffffff1,"1.3.1.f-NINTENDO-SDK-v1",0x70);
          if (iVar3 == 0) {
            *(int *)(param_2 + 0x20) = iVar4;
            *(undefined8 *)(param_2 + 0x10) = 0x400000002;
            *(undefined8 *)(param_2 + 0x18) = uVar8;
            goto switchD_001622a0_caseD_0;
          }
          *puVar9 = 0;
        }
      default:
        FUN_00162138(param_1,puVar11);
        uVar6 = FUN_001623cc(param_1,puVar11,puVar9,0x3d);
LAB_00162380:
        uVar6 = uVar6 & 0xffffffff;
        goto LAB_00162384;
      }
    }
    uVar8 = 0x1b;
  }
  else {
    uVar8 = 0x17;
  }
  uVar6 = FUN_001623cc(param_1,puVar11,puVar9,uVar8);
  return uVar6;
}


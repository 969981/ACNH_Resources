
void FUN_029d37b0(int *param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 local_58;
  int local_50;
  undefined *local_48;
  long local_40;
  undefined1 local_38;
  
  if (*param_2 == 0) {
    return;
  }
  iVar4 = 1;
  switch(*param_1) {
  case 0:
    break;
  case 1:
    if ((char)param_2[1] == '\0') goto switchD_029d37f8_default;
    iVar4 = 2;
    break;
  case 2:
    if ((char)param_2[1] == '\0') {
      *param_1 = 4;
    }
    if ((*(long *)(param_1 + 2) == 0) || (*(int *)(*(long *)(param_1 + 2) + 0x20) != param_1[4]))
    goto switchD_029d37f8_default;
    iVar4 = 3;
    break;
  case 3:
    if ((char)param_2[1] != '\0') goto switchD_029d37f8_default;
    iVar4 = 4;
    break;
  case 4:
    if ((*(long *)(param_1 + 2) != 0) && (*(int *)(*(long *)(param_1 + 2) + 0x20) == param_1[4]))
    goto switchD_029d37f8_default;
    iVar4 = 1;
    break;
  default:
    goto switchD_029d37f8_default;
  }
  *param_1 = iVar4;
switchD_029d37f8_default:
  if (*param_1 == 4) {
    lVar5 = *(long *)(param_1 + 2);
    if ((lVar5 != 0) && (*(int *)(lVar5 + 0x20) == param_1[4])) {
      *(uint *)(lVar5 + 8) = *(uint *)(lVar5 + 8) | 0x10;
      if ((*(long *)(lVar5 + 0x28) != 0) && (*(long *)(lVar5 + 0x58) != 0)) {
        plVar3 = (long *)(**(code **)(**(long **)(*(long *)(*(long *)(lVar5 + 0x28) + 0x30) + 0x18)
                                     + 0x20))();
        plVar3 = (long *)(**(code **)(*plVar3 + 0x38))();
        (**(code **)(*plVar3 + 0x10))();
        (**(code **)(**(long **)(lVar5 + 0x58) + 0x38))(*(long **)(lVar5 + 0x58),0xffffffff);
        (**(code **)(*plVar3 + 0x18))(plVar3);
      }
    }
    lVar5 = *(long *)(param_1 + 6);
    if ((lVar5 != 0) && (*(int *)(lVar5 + 0x20) == param_1[8])) {
      *(uint *)(lVar5 + 8) = *(uint *)(lVar5 + 8) | 0x10;
      if ((*(long *)(lVar5 + 0x28) != 0) && (*(long *)(lVar5 + 0x58) != 0)) {
        plVar3 = (long *)(**(code **)(**(long **)(*(long *)(*(long *)(lVar5 + 0x28) + 0x30) + 0x18)
                                     + 0x20))();
        plVar3 = (long *)(**(code **)(*plVar3 + 0x38))();
        (**(code **)(*plVar3 + 0x10))();
        (**(code **)(**(long **)(lVar5 + 0x58) + 0x38))(*(long **)(lVar5 + 0x58),0xffffffff);
                    /* WARNING: Could not recover jumptable at 0x029d3b08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x18))(plVar3);
        return;
      }
    }
  }
  else if (*param_1 == 2) {
    lVar5 = *param_2;
    lVar6 = *(long *)(lVar5 + 0x10);
    if (lVar6 != 0) {
      (**(code **)(DAT_055ebaf0 + 0x18))(&DAT_055ebaf0);
      lVar5 = DAT_055ebaf8;
      local_58 = 0;
      local_50 = 0;
      lVar1 = (**(code **)(**(long **)(*(long *)(lVar6 + 0x30) + 0x18) + 0x20))();
      if (((lVar5 != 0) && (*(char *)(lVar1 + 0x78) != '\0')) &&
         (uVar2 = FUN_03bf46a8(lVar6,"searchAndEmit(%s)",lVar5), (uVar2 & 1) != 0)) {
        local_38 = 0;
        local_48 = PTR_DAT_04bcadf8 + 0x10;
        local_40 = FUN_03bf5ec0(*(undefined8 *)(*(long *)(lVar6 + 0x30) + 0x18),lVar5);
        if (local_40 != 0) {
          FUN_03bf47b0(lVar6,&local_48,&local_58);
        }
      }
      *(undefined8 *)(param_1 + 2) = local_58;
      param_1[4] = local_50;
      lVar5 = *param_2;
    }
    lVar5 = *(long *)(lVar5 + 8);
    if (lVar5 != 0) {
      (**(code **)(DAT_055ebb00 + 0x18))(&DAT_055ebb00);
      lVar6 = DAT_055ebb08;
      local_58 = 0;
      local_50 = 0;
      lVar1 = (**(code **)(**(long **)(*(long *)(lVar5 + 0x30) + 0x18) + 0x20))();
      if (((lVar6 != 0) && (*(char *)(lVar1 + 0x78) != '\0')) &&
         (uVar2 = FUN_03bf46a8(lVar5,"searchAndEmit(%s)",lVar6), (uVar2 & 1) != 0)) {
        local_38 = 0;
        local_48 = PTR_DAT_04bcadf8 + 0x10;
        local_40 = FUN_03bf5ec0(*(undefined8 *)(*(long *)(lVar5 + 0x30) + 0x18),lVar6);
        if (local_40 != 0) {
          FUN_03bf47b0(lVar5,&local_48,&local_58);
        }
      }
      *(undefined8 *)(param_1 + 6) = local_58;
      param_1[8] = local_50;
    }
  }
  return;
}


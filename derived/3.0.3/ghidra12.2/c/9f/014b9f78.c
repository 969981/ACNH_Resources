
void FUN_014b9f78(long param_1,long param_2)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  long local_60;
  undefined4 local_58;
  int local_4c;
  undefined *local_48;
  long local_40;
  undefined1 local_38;
  
  if ((*(uint *)(param_1 + 0x288) >> 1 & 1) == 0) {
    uVar5 = (ulong)(*(int *)(param_1 + 0x294) == 0);
    if ((*(uint *)(param_1 + 0x28c + uVar5 * 4) >> 1 & 1) == 0) {
      *(undefined4 *)(param_1 + 0x298) = 0;
      lVar6 = *(long *)(param_1 + 0x278);
joined_r0x014b9fbc:
      if (lVar6 == 0) {
        return;
      }
      if (*(int *)(lVar6 + 0x20) != *(int *)(param_1 + 0x280)) {
        return;
      }
      *(uint *)(lVar6 + 8) = *(uint *)(lVar6 + 8) | 0x10;
      if (*(long *)(lVar6 + 0x28) == 0) {
        return;
      }
      if (*(long *)(lVar6 + 0x58) == 0) {
        return;
      }
      plVar2 = (long *)(**(code **)(**(long **)(*(long *)(*(long *)(lVar6 + 0x28) + 0x30) + 0x18) +
                                   0x20))();
      plVar2 = (long *)(**(code **)(*plVar2 + 0x38))();
      (**(code **)(*plVar2 + 0x10))();
      (**(code **)(**(long **)(lVar6 + 0x58) + 0x38))(*(long **)(lVar6 + 0x58),0xffffffff);
                    /* WARNING: Could not recover jumptable at 0x014ba080. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x18))(plVar2);
      return;
    }
    if ((*(uint *)(param_1 + 0x28c + uVar5 * 4) >> 2 & 1) != 0) goto LAB_014ba084;
    iVar7 = *(int *)(param_1 + 0x298);
    if (iVar7 < 7) {
      *(int *)(param_1 + 0x298) = iVar7 + 1;
      lVar6 = *(long *)(param_1 + 0x278);
      goto joined_r0x014b9fbc;
    }
  }
  else {
LAB_014ba084:
    *(undefined4 *)(param_1 + 0x298) = 7;
  }
  puVar1 = PTR_DAT_04bb59d8;
  if ((*(long *)(param_1 + 0x278) != 0) &&
     (*(int *)(*(long *)(param_1 + 0x278) + 0x20) == *(int *)(param_1 + 0x280))) {
    return;
  }
  local_4c = FUN_0375f1a4(*(undefined8 *)PTR_DAT_04bb59d8);
  if (local_4c == 2) {
    lVar6 = *(long *)(param_2 + 8);
    if (lVar6 == 0) {
LAB_014ba210:
      local_60 = 0;
      local_58 = 0;
    }
    else {
      local_60 = 0;
      local_58 = 0;
      lVar3 = (**(code **)(**(long **)(*(long *)(lVar6 + 0x30) + 0x18) + 0x20))();
      if ((*(char *)(lVar3 + 0x78) != '\0') &&
         (uVar5 = FUN_03bf46a8(lVar6,"searchAndEmit(%s)",&DAT_040feb42), (uVar5 & 1) != 0)) {
        puVar4 = &DAT_040feb42;
LAB_014ba1d8:
        local_38 = 0;
        local_48 = PTR_DAT_04bcadf8 + 0x10;
        local_40 = FUN_03bf5ec0(*(undefined8 *)(*(long *)(lVar6 + 0x30) + 0x18),puVar4);
        if (local_40 != 0) {
          FUN_03bf47b0(lVar6,&local_48,&local_60);
        }
      }
    }
  }
  else if (local_4c == 1) {
    lVar6 = *(long *)(param_2 + 8);
    if (lVar6 == 0) goto LAB_014ba210;
    local_60 = 0;
    local_58 = 0;
    lVar3 = (**(code **)(**(long **)(*(long *)(lVar6 + 0x30) + 0x18) + 0x20))();
    if ((*(char *)(lVar3 + 0x78) != '\0') &&
       (uVar5 = FUN_03bf46a8(lVar6,"searchAndEmit(%s)",&DAT_040675d3), (uVar5 & 1) != 0)) {
      puVar4 = &DAT_040675d3;
      goto LAB_014ba1d8;
    }
  }
  else {
    if (local_4c != 0) goto LAB_014ba228;
    lVar6 = *(long *)(param_2 + 8);
    if (lVar6 == 0) goto LAB_014ba210;
    local_60 = 0;
    local_58 = 0;
    lVar3 = (**(code **)(**(long **)(*(long *)(lVar6 + 0x30) + 0x18) + 0x20))();
    if ((*(char *)(lVar3 + 0x78) != '\0') &&
       (uVar5 = FUN_03bf46a8(lVar6,"searchAndEmit(%s)",&DAT_040675b7), (uVar5 & 1) != 0)) {
      puVar4 = &DAT_040675b7;
      goto LAB_014ba1d8;
    }
  }
  *(long *)(param_1 + 0x278) = local_60;
  *(undefined4 *)(param_1 + 0x280) = local_58;
LAB_014ba228:
  lVar6 = *(long *)(param_1 + 0x278);
  if ((lVar6 != 0) && (*(int *)(lVar6 + 0x20) == *(int *)(param_1 + 0x280))) {
    lVar3 = *(long *)puVar1;
    iVar7 = *(int *)(lVar3 + 0x38);
    iVar8 = *(int *)(lVar3 + 0x3c);
    iVar9 = *(int *)(lVar3 + 0x28);
    iVar10 = *(int *)(lVar3 + 0x2c);
    *(undefined4 *)(lVar6 + 0xac) = 0;
    *(undefined1 **)(lVar6 + 0xb4) = &DAT_3f8000003f800000;
    *(undefined4 *)(lVar6 + 0xbc) = 0x3f800000;
    *(uint *)(lVar6 + 0x184) = *(uint *)(lVar6 + 0x184) | 4;
    *(float *)(lVar6 + 0xb0) = ((float)iVar10 * 5.0 + (float)iVar8 * 5.0 + 5.0) * 0.5;
    *(float *)(lVar6 + 0xa8) = ((float)iVar9 * 5.0 + (float)iVar7 * 5.0 + 5.0) * 0.5;
  }
  return;
}



undefined8 FUN_01c7cf1c(long param_1,undefined1 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  uint uVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  undefined4 uVar8;
  undefined1 uVar9;
  long lVar10;
  undefined1 *local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined1 *local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined1 local_60;
  uint local_58;
  undefined1 uStack_31;
  
  lVar5 = DAT_05351250;
  if ((param_2[0x48] != '\0' && param_2[0x54] == '\0') || (*(int *)(param_3 + 8) == 0)) {
    return 0;
  }
  if (*(int *)(param_3 + 8) != 3) {
    if (param_2[0x48] != '\0') {
      if (*(uint *)(param_2 + 0x40) != 0xffffffff) {
        (*(code *)(&PTR_FUN_04a434e0)[*(uint *)(param_2 + 0x40)])(&local_98,param_2);
      }
      param_2[0x48] = 0;
    }
    *param_2 = 0;
    *(undefined4 *)(param_2 + 0x40) = 0xffffffff;
    if (*(uint *)(param_3 + 8) != 0xffffffff) {
      (*(code *)(&PTR_LAB_04a43450)[*(uint *)(param_3 + 8)])(&local_98,param_2,param_3);
      *(undefined4 *)(param_2 + 0x40) = *(undefined4 *)(param_3 + 8);
    }
    param_2[0x48] = 1;
    if (param_2[0x54] != '\0') {
      param_2[0x54] = 0;
    }
    if (param_2[0x188] != '\0') {
      param_2[0x188] = 0;
    }
    goto LAB_01c7d22c;
  }
  local_58 = 0;
  uVar3 = *(uint *)(DAT_05351250 + 0xb0);
  puVar1 = (undefined8 *)(DAT_05351250 + 0x58);
  if (uVar3 == 0xffffffff) {
LAB_01c7d04c:
    lVar10 = DAT_05351250;
    *(undefined8 *)(lVar5 + 0xa0) = 0;
    *(undefined8 *)(lVar5 + 0xa8) = 0;
    *puVar1 = 0;
    *(undefined4 *)(lVar5 + 0xb0) = 1;
    *(undefined8 *)(lVar5 + 0x90) = 0;
    *(undefined8 *)(lVar5 + 0x98) = 0;
    *(undefined8 *)(lVar5 + 0x80) = 0;
    *(undefined8 *)(lVar5 + 0x88) = 0;
    *(undefined8 *)(lVar5 + 0x70) = 0;
    *(undefined8 *)(lVar5 + 0x78) = 0;
    *(undefined8 *)(lVar5 + 0x60) = 0;
    *(undefined8 *)(lVar5 + 0x68) = 0;
    uVar6 = (ulong)*(uint *)(lVar10 + 0xb0);
    if (*(uint *)(lVar10 + 0xb0) == 0xffffffff) {
                    /* WARNING: Subroutine does not return */
      FUN_00d72dc0();
    }
    uVar8 = 0;
  }
  else {
    if (uVar3 != 1) {
      (*(code *)(&PTR_LAB_04a430c8)[uVar3])(&local_b8,puVar1);
      goto LAB_01c7d04c;
    }
    uVar8 = *(undefined4 *)puVar1;
    uVar6 = 1;
    lVar10 = DAT_05351250;
  }
  local_b8 = &uStack_31;
  uVar4 = (*(code *)(&PTR_LAB_04a43170)[uVar6])(&local_b8,lVar10 + 0x58);
  uVar3 = *(uint *)(param_3 + 8);
  if (uVar3 == 0xffffffff) {
LAB_01c7d0d8:
    uVar9 = 0;
    *param_3 = 0;
    param_3[3] = 0;
    param_3[4] = 0;
    *(undefined4 *)(param_3 + 8) = 3;
    param_3[1] = 0;
    param_3[2] = 0;
  }
  else {
    if (uVar3 != 3) {
      (*(code *)(&PTR_FUN_04a434a8)[uVar3])(&local_b8,param_3);
      goto LAB_01c7d0d8;
    }
    uVar9 = *(undefined1 *)(param_3 + 4);
  }
  lVar5 = DAT_05351250;
  local_b8 = (undefined1 *)*param_3;
  uStack_b0 = param_3[1];
  local_a8 = param_3[2];
  uStack_a0 = param_3[3];
  puVar1 = (undefined8 *)(DAT_05351250 + 0x58);
  uVar3 = *(uint *)(DAT_05351250 + 0xb0);
  if (uVar3 == 0xffffffff) {
LAB_01c7d148:
    local_68 = 0;
    *puVar1 = 0;
    *(undefined8 *)(lVar5 + 0xa0) = 0;
    *(undefined8 *)(lVar5 + 0xa8) = 0;
    *(undefined4 *)(lVar5 + 0xb0) = 1;
    *(undefined8 *)(lVar5 + 0x90) = 0;
    *(undefined8 *)(lVar5 + 0x98) = 0;
    *(undefined8 *)(lVar5 + 0x80) = 0;
    *(undefined8 *)(lVar5 + 0x88) = 0;
    *(undefined8 *)(lVar5 + 0x70) = 0;
    *(undefined8 *)(lVar5 + 0x78) = 0;
    *(undefined8 *)(lVar5 + 0x60) = 0;
    *(undefined8 *)(lVar5 + 0x68) = 0;
  }
  else {
    if (uVar3 != 1) {
      (*(code *)(&PTR_LAB_04a430c8)[uVar3])(&uStack_31,puVar1);
      goto LAB_01c7d148;
    }
    local_68 = 0;
    if (*(char *)(DAT_05351250 + 0xa0) != '\0') {
      local_68 = *(undefined8 *)(DAT_05351250 + 0x98);
    }
  }
  local_60 = 1;
  local_58 = 2;
  local_90 = local_b8;
  uStack_88 = uStack_b0;
  local_80 = local_a8;
  uStack_78 = uStack_a0;
  local_98 = uVar8;
  uStack_94 = uVar4;
  local_70 = uVar9;
  if (param_2[0x48] != '\0') {
    if (*(uint *)(param_2 + 0x40) != 0xffffffff) {
      (*(code *)(&PTR_FUN_04a434e0)[*(uint *)(param_2 + 0x40)])(&uStack_31,param_2);
    }
    param_2[0x48] = 0;
  }
  *param_2 = 0;
  *(undefined4 *)(param_2 + 0x40) = 0xffffffff;
  FUN_01c7a574(&uStack_31,param_2,&local_98);
  param_2[0x48] = 1;
  *(uint *)(param_2 + 0x40) = local_58;
  if (param_2[0x54] != '\0') {
    param_2[0x54] = 0;
  }
  if (param_2[0x188] != '\0') {
    param_2[0x188] = 0;
  }
  if (local_58 != 0xffffffff) {
    (*(code *)(&PTR_FUN_04a434e0)[local_58])(&local_b8,&local_98);
  }
LAB_01c7d22c:
  nn::os::LockMutex((MutexType *)(param_1 + 0x40));
  plVar7 = (long *)(param_1 + 8);
  lVar5 = *plVar7;
  plVar2 = (long *)(param_2 + *(int *)(param_1 + 0x1c));
  *plVar7 = (long)plVar2;
  *plVar2 = lVar5;
  plVar2[1] = (long)plVar7;
  if (lVar5 != 0) {
    *(long **)(lVar5 + 8) = plVar2;
  }
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x40));
  return 1;
}



void FUN_003ced48(long *param_1)

{
  bool bVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  long *plVar11;
  char cVar12;
  char cVar13;
  long lVar14;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 local_7c;
  long local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  
  lVar6 = (**(code **)(*param_1 + 0x40))();
  if (((char)param_1[0x1e] != '\0') &&
     (lVar7 = (**(code **)(*param_1 + 0x40))(param_1), *(char *)(lVar7 + 0x3b) != '\0')) {
LAB_003cede0:
                    /* WARNING: Could not recover jumptable at 0x003cee04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x20))(param_1);
    return;
  }
  if (*(char *)(lVar6 + 0x3c) != '\0') {
    uVar8 = FUN_003c5b84();
    lVar6 = FUN_003cbb70(uVar8,0x20,1);
    *(undefined4 *)(lVar6 + 8) = 0x12;
    uVar9 = (**(code **)(*param_1 + 0x40))(param_1);
    *(undefined8 *)(lVar6 + 0x18) = uVar9;
    FUN_003cc15c(uVar8,lVar6);
    goto LAB_003cede0;
  }
  uVar10 = (**(code **)(*param_1 + 0x28))(param_1);
  if ((uVar10 & 1) == 0) {
    return;
  }
  if (*(char *)((long)param_1 + 0xee) != '\0') {
    if (*(int *)((long)param_1 + 0x104) == 0) {
      if ((*(char *)((long)param_1 + 0x101) == '\x03') || (*(char *)((long)param_1 + 0x101) == '\0')
         ) goto LAB_003cede0;
    }
    else {
      *(int *)((long)param_1 + 0x104) = *(int *)((long)param_1 + 0x104) + -1;
    }
  }
  cVar13 = *(char *)((long)param_1 + 0xed);
  if (cVar13 == '\0') {
    if (*(char *)((long)param_1 + 0xec) == '\0') {
      return;
    }
    uVar10 = (**(code **)(*param_1 + 0x28))(param_1);
    if ((uVar10 & 1) == 0) {
      return;
    }
    *(undefined1 *)(param_1 + 0x20) = 1;
LAB_003cee78:
    if ((int)param_1[0x21] != -1) {
      *(int *)(param_1 + 0x21) = (int)param_1[0x21] + 1;
    }
    cVar12 = *(char *)((long)param_1 + 0x101);
    if (cVar12 != '\x02') {
      if (*(int *)((long)param_1 + 0x10c) != -1) {
        *(int *)((long)param_1 + 0x10c) = *(int *)((long)param_1 + 0x10c) + 1;
      }
      goto LAB_003ceee0;
    }
    bVar1 = *(int *)((long)param_1 + 0xd4) <= (int)param_1[0x1b];
  }
  else {
    if ((char)param_1[0x20] == '\x01') goto LAB_003cee78;
    cVar12 = *(char *)((long)param_1 + 0x101);
LAB_003ceee0:
    iVar3 = *(int *)((long)param_1 + 0xd4);
    plVar11 = param_1 + 0x1b;
    iVar4 = (int)*plVar11;
    bVar1 = iVar3 <= iVar4;
    if (cVar12 != '\0') {
      if (cVar12 != '\x03') {
        if ((cVar12 == '\x01') && (iVar4 < iVar3)) {
          *(int *)plVar11 = iVar4 + 1;
        }
        goto LAB_003cef40;
      }
      if (iVar4 < iVar3) {
        *(int *)plVar11 = iVar4 + 1;
      }
    }
    (**(code **)(*param_1 + 0x50))(param_1);
  }
LAB_003cef40:
  plVar11 = (long *)param_1[9];
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 0x10))(plVar11,param_1[0xb],param_1);
  }
  plVar11 = (long *)param_1[8];
  if (plVar11 != (long *)0x0) {
    local_64 = 0;
    uStack_60 = 0;
    local_5c = 0;
    uStack_58 = 0;
    local_54 = 0;
    local_88 = 0x3f800000;
    uStack_84 = 0x3f800000;
    uStack_80 = 0;
    local_7c = 0;
    local_78 = 0xffffffff;
    local_6c = 0xffffffff;
    uStack_68 = 0x3f800000;
    local_70 = 0;
    if ((int)param_1[0x21] != 0) {
      uStack_84 = (undefined4)*(undefined8 *)((long)param_1 + 0x6c);
      uStack_80 = (undefined4)((ulong)*(undefined8 *)((long)param_1 + 0x6c) >> 0x20);
      local_88 = (undefined4)param_1[0xd];
      local_78 = param_1[0xf];
      local_7c = *(undefined4 *)((long)param_1 + 0x74);
      local_6c = (undefined4)param_1[0x10];
      local_70 = *(undefined4 *)((long)param_1 + 0x84);
      uStack_60 = (undefined4)param_1[0x12];
      local_5c = (undefined4)((ulong)param_1[0x12] >> 0x20);
      uStack_58 = (undefined4)param_1[0x13];
      local_54 = (undefined4)((ulong)param_1[0x13] >> 0x20);
      uStack_68 = (undefined4)param_1[0x11];
      local_64 = (undefined4)((ulong)param_1[0x11] >> 0x20);
    }
    (**(code **)(*plVar11 + 0x10))(plVar11,param_1[0xb],(int)param_1[0x22],&local_88);
    *(ulong *)((long)param_1 + 0x6c) = CONCAT44(uStack_80,uStack_84);
    *(undefined4 *)(param_1 + 0xd) = local_88;
    param_1[0xf] = local_78;
    *(undefined4 *)((long)param_1 + 0x74) = local_7c;
    *(undefined4 *)(param_1 + 0x10) = local_6c;
    *(undefined4 *)((long)param_1 + 0x84) = local_70;
    param_1[0x11] = CONCAT44(local_64,uStack_68);
    param_1[0x12] = CONCAT44(local_5c,uStack_60);
    param_1[0x13] = CONCAT44(local_54,uStack_58);
  }
  lVar6 = param_1[5];
  if (lVar6 != 0) {
    lVar7 = *(long *)(lVar6 + 0xb0);
    lVar2 = *(long *)(lVar6 + 0xb8);
    lVar14 = *(long *)(lVar6 + 0xc0);
    *(undefined4 *)(param_1 + 0x17) = *(undefined4 *)(lVar6 + 200);
    param_1[0x14] = lVar7;
    param_1[0x15] = lVar2;
    param_1[0x16] = lVar14;
  }
  FUN_003cf210(param_1);
  if ((*(char *)((long)param_1 + 0xef) != '\0') &&
     (*(int *)((long)param_1 + 0xc4) <= (int)param_1[0x19])) {
    *(undefined1 *)((long)param_1 + 0xef) = 0;
    (**(code **)(*param_1 + 0x20))(param_1);
    return;
  }
  uVar8 = FUN_003c5b84();
  if (cVar13 == '\0') {
    lVar6 = FUN_003cbb70(uVar8,0x28,1);
    *(undefined4 *)(lVar6 + 8) = 7;
    uVar9 = (**(code **)(*param_1 + 0x40))(param_1);
    *(undefined8 *)(lVar6 + 0x18) = uVar9;
    FUN_003cc15c(uVar8,lVar6);
    *(undefined2 *)((long)param_1 + 0xec) = 0x100;
  }
  cVar13 = *(char *)((long)param_1 + 0x101);
  if (cVar13 == '\x03') {
    if ((int)param_1[0x1b] < *(int *)((long)param_1 + 0xd4)) goto LAB_003cf164;
    cVar13 = '\0';
  }
  else {
    if (cVar13 != '\x01') goto LAB_003cf164;
    bVar5 = *(int *)((long)param_1 + 0xd4) <= (int)param_1[0x1b];
    if (*(int *)((long)param_1 + 0xf4) != 1) {
      bVar5 = bVar1;
    }
    if (!bVar5) goto LAB_003cf164;
    lVar6 = FUN_003cbb70(uVar8,0x28,1);
    *(undefined4 *)(lVar6 + 8) = 9;
    uVar9 = (**(code **)(*param_1 + 0x40))(param_1);
    *(undefined8 *)(lVar6 + 0x18) = uVar9;
    *(undefined1 *)(lVar6 + 0x20) = 1;
    FUN_003cc15c(uVar8,lVar6);
    cVar13 = '\x02';
  }
  *(char *)((long)param_1 + 0x101) = cVar13;
LAB_003cf164:
  if (*(char *)((long)param_1 + 0xf1) != '\0') {
    lVar6 = FUN_003cbb70(uVar8,0x28,1);
    *(undefined4 *)(lVar6 + 8) = 9;
    uVar9 = (**(code **)(*param_1 + 0x40))(param_1);
    *(undefined8 *)(lVar6 + 0x18) = uVar9;
    *(undefined1 *)(lVar6 + 0x20) = 0;
    FUN_003cc15c(uVar8,lVar6);
    *(undefined1 *)((long)param_1 + 0xf1) = 0;
  }
  if (*(char *)((long)param_1 + 0x102) == '\x03') {
    if (*(int *)((long)param_1 + 0xe4) <= (int)param_1[0x1d]) {
      *(undefined1 *)((long)param_1 + 0x102) = 0;
    }
  }
  else if ((*(char *)((long)param_1 + 0x102) == '\x01') &&
          (*(int *)((long)param_1 + 0xe4) <= (int)param_1[0x1d])) {
    *(undefined1 *)((long)param_1 + 0x102) = 2;
  }
  return;
}


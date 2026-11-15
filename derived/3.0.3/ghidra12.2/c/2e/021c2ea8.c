
void FUN_021c2ea8(undefined2 *param_1,undefined2 *param_2)

{
  long lVar1;
  undefined2 uVar2;
  int iVar3;
  ulong uVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 *puVar7;
  byte *pbVar8;
  ulong uVar9;
  undefined *local_40;
  char *pcStack_38;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  param_1[8] = param_2[8];
  param_1[9] = param_2[9];
  param_1[10] = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = param_2[0xf];
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = param_2[0x11];
  param_1[0x12] = param_2[0x12];
  param_1[0x13] = param_2[0x13];
  param_1[0x14] = param_2[0x14];
  param_1[0x15] = param_2[0x15];
  param_1[0x16] = param_2[0x16];
  uVar2 = param_2[0x17];
  *(undefined8 *)(param_1 + 0x18) = 0xffffffffffffffff;
  param_1[0x17] = uVar2;
  lVar6 = *(long *)PTR_DAT_04bb46b0;
  if (lVar6 == 0) goto LAB_021c36a0;
  puVar7 = *(undefined8 **)(lVar6 + 0x10);
  if ((*(byte *)(lVar6 + 0x453) & 1) == 0) {
    lVar6 = (**(code **)(*(long *)*puVar7 + 0x38))();
    if (lVar6 == 0) goto LAB_021c36a0;
    lVar6 = lVar6 + 0x70;
  }
  else if (((puVar7 == (undefined8 *)0x0) || ((long *)puVar7[0x26] == (long *)0x0)) ||
          (lVar6 = (**(code **)(*(long *)puVar7[0x26] + 0x38))(), lVar6 == 0)) goto LAB_021c36a0;
  if ((*(long **)(lVar6 + 0xd0) == (long *)0x0) ||
     (puVar7 = (undefined8 *)**(long **)(lVar6 + 0xd0), puVar7 == (undefined8 *)0x0)) {
    uVar4 = 0;
  }
  else {
    uVar4 = (**(code **)*puVar7)();
    uVar4 = uVar4 & 0xffffffff;
  }
  pbVar8 = (byte *)(*(long *)(lVar6 + 0xb8) + *(long *)(lVar6 + 0xb0));
  uVar9 = (ulong)*pbVar8;
  if (((uVar9 < 0x23) && (pbVar8[1] <= (byte)PTR_DAT_04bc27f0[uVar9])) &&
     (((uint)(&DAT_053e6eb8)[uVar9] >> (ulong)(pbVar8[1] & 0x1f) & 1) != 0)) {
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = "MoveInCompletion";
    iVar3 = FUN_02749340(pbVar8 + 0x1267c,&local_40);
    if (iVar3 != 0) {
      pbVar8 = (byte *)(*(long *)(lVar6 + 0xb8) + *(long *)(lVar6 + 0xb0));
      goto LAB_021c307c;
    }
    uVar5 = 0;
LAB_021c34d4:
    *(undefined4 *)(param_1 + 0x18) = uVar5;
  }
  else {
LAB_021c307c:
    uVar9 = (ulong)pbVar8[0x13230];
    if (((uVar9 < 0x23) && (pbVar8[0x13231] <= (byte)PTR_DAT_04bc27f0[uVar9])) &&
       (((uint)(&DAT_053e6eb8)[uVar9] >> (ulong)(pbVar8[0x13231] & 0x1f) & 1) != 0)) {
      local_40 = PTR_DAT_04bb2020 + 0x10;
      pcStack_38 = "MoveInCompletion";
      iVar3 = FUN_02749340(pbVar8 + 0x258ac,&local_40);
      if (iVar3 == 0) {
        uVar5 = 1;
        goto LAB_021c34d4;
      }
      pbVar8 = (byte *)(*(long *)(lVar6 + 0xb8) + *(long *)(lVar6 + 0xb0));
    }
    uVar9 = (ulong)pbVar8[0x26460];
    if (((uVar9 < 0x23) && (pbVar8[0x26461] <= (byte)PTR_DAT_04bc27f0[uVar9])) &&
       (((uint)(&DAT_053e6eb8)[uVar9] >> (ulong)(pbVar8[0x26461] & 0x1f) & 1) != 0)) {
      local_40 = PTR_DAT_04bb2020 + 0x10;
      pcStack_38 = "MoveInCompletion";
      iVar3 = FUN_02749340(pbVar8 + 0x38adc,&local_40);
      if (iVar3 == 0) {
        uVar5 = 2;
        goto LAB_021c34d4;
      }
      pbVar8 = (byte *)(*(long *)(lVar6 + 0xb8) + *(long *)(lVar6 + 0xb0));
    }
    uVar9 = (ulong)pbVar8[0x39690];
    if (((uVar9 < 0x23) && (pbVar8[0x39691] <= (byte)PTR_DAT_04bc27f0[uVar9])) &&
       (((uint)(&DAT_053e6eb8)[uVar9] >> (ulong)(pbVar8[0x39691] & 0x1f) & 1) != 0)) {
      local_40 = PTR_DAT_04bb2020 + 0x10;
      pcStack_38 = "MoveInCompletion";
      iVar3 = FUN_02749340(pbVar8 + 0x4bd0c,&local_40);
      if (iVar3 == 0) {
        uVar5 = 3;
        goto LAB_021c34d4;
      }
      pbVar8 = (byte *)(*(long *)(lVar6 + 0xb8) + *(long *)(lVar6 + 0xb0));
    }
    uVar9 = (ulong)pbVar8[0x4c8c0];
    if (((uVar9 < 0x23) && (pbVar8[0x4c8c1] <= (byte)PTR_DAT_04bc27f0[uVar9])) &&
       (((uint)(&DAT_053e6eb8)[uVar9] >> (ulong)(pbVar8[0x4c8c1] & 0x1f) & 1) != 0)) {
      local_40 = PTR_DAT_04bb2020 + 0x10;
      pcStack_38 = "MoveInCompletion";
      iVar3 = FUN_02749340(pbVar8 + 0x5ef3c,&local_40);
      if (iVar3 == 0) {
        uVar5 = 4;
        goto LAB_021c34d4;
      }
      pbVar8 = (byte *)(*(long *)(lVar6 + 0xb8) + *(long *)(lVar6 + 0xb0));
    }
    uVar9 = (ulong)pbVar8[0x5faf0];
    if (((uVar9 < 0x23) && (pbVar8[0x5faf1] <= (byte)PTR_DAT_04bc27f0[uVar9])) &&
       (((uint)(&DAT_053e6eb8)[uVar9] >> (ulong)(pbVar8[0x5faf1] & 0x1f) & 1) != 0)) {
      local_40 = PTR_DAT_04bb2020 + 0x10;
      pcStack_38 = "MoveInCompletion";
      iVar3 = FUN_02749340(pbVar8 + 0x7216c,&local_40);
      if (iVar3 == 0) {
        uVar5 = 5;
        goto LAB_021c34d4;
      }
      pbVar8 = (byte *)(*(long *)(lVar6 + 0xb8) + *(long *)(lVar6 + 0xb0));
    }
    uVar9 = (ulong)pbVar8[0x72d20];
    if (((uVar9 < 0x23) && (pbVar8[0x72d21] <= (byte)PTR_DAT_04bc27f0[uVar9])) &&
       (((uint)(&DAT_053e6eb8)[uVar9] >> (ulong)(pbVar8[0x72d21] & 0x1f) & 1) != 0)) {
      local_40 = PTR_DAT_04bb2020 + 0x10;
      pcStack_38 = "MoveInCompletion";
      iVar3 = FUN_02749340(pbVar8 + 0x8539c,&local_40);
      if (iVar3 == 0) {
        uVar5 = 6;
        goto LAB_021c34d4;
      }
      pbVar8 = (byte *)(*(long *)(lVar6 + 0xb8) + *(long *)(lVar6 + 0xb0));
    }
    uVar9 = (ulong)pbVar8[0x85f50];
    if (((uVar9 < 0x23) && (pbVar8[0x85f51] <= (byte)PTR_DAT_04bc27f0[uVar9])) &&
       (((uint)(&DAT_053e6eb8)[uVar9] >> (ulong)(pbVar8[0x85f51] & 0x1f) & 1) != 0)) {
      local_40 = PTR_DAT_04bb2020 + 0x10;
      pcStack_38 = "MoveInCompletion";
      iVar3 = FUN_02749340(pbVar8 + 0x985cc,&local_40);
      if (iVar3 == 0) {
        uVar5 = 7;
        goto LAB_021c34d4;
      }
      pbVar8 = (byte *)(*(long *)(lVar6 + 0xb8) + *(long *)(lVar6 + 0xb0));
    }
    uVar9 = (ulong)pbVar8[0x99180];
    if (((uVar9 < 0x23) && (pbVar8[0x99181] <= (byte)PTR_DAT_04bc27f0[uVar9])) &&
       (((uint)(&DAT_053e6eb8)[uVar9] >> (ulong)(pbVar8[0x99181] & 0x1f) & 1) != 0)) {
      local_40 = PTR_DAT_04bb2020 + 0x10;
      pcStack_38 = "MoveInCompletion";
      iVar3 = FUN_02749340(pbVar8 + 0xab7fc,&local_40);
      if (iVar3 == 0) {
        uVar5 = 8;
        goto LAB_021c34d4;
      }
      pbVar8 = (byte *)(*(long *)(lVar6 + 0xb8) + *(long *)(lVar6 + 0xb0));
    }
    uVar9 = (ulong)pbVar8[0xac3b0];
    if (((uVar9 < 0x23) && (pbVar8[0xac3b1] <= (byte)PTR_DAT_04bc27f0[uVar9])) &&
       (((uint)(&DAT_053e6eb8)[uVar9] >> (ulong)(pbVar8[0xac3b1] & 0x1f) & 1) != 0)) {
      local_40 = PTR_DAT_04bb2020 + 0x10;
      pcStack_38 = "MoveInCompletion";
      iVar3 = FUN_02749340(pbVar8 + 0xbea2c,&local_40);
      if (iVar3 == 0) {
        uVar5 = 9;
        goto LAB_021c34d4;
      }
    }
  }
  lVar1 = *(long *)(lVar6 + 0xb8) + *(long *)(lVar6 + 0xb0);
  uVar9 = (ulong)*(byte *)(lVar1 + 0xbf670);
  if ((((uVar9 < 0x23) && (*(byte *)(lVar1 + 0xbf671) <= (byte)PTR_DAT_04bc27f0[uVar9])) &&
      (((uint)(&DAT_053e6eb8)[uVar9] >> (ulong)(*(byte *)(lVar1 + 0xbf671) & 0x1f) & 1) != 0)) &&
     (local_40 = (undefined *)CONCAT44(local_40._4_4_,(int)*(char *)(lVar1 + 0xd1ce9)),
     *(char *)(lVar1 + 0xd1ce9) != 0)) {
    uVar5 = 0;
LAB_021c367c:
    *(undefined4 *)(param_1 + 0x1a) = uVar5;
  }
  else {
    uVar9 = (ulong)*(byte *)(lVar1 + 0xd28a0);
    if (((uVar9 < 0x23) && (*(byte *)(lVar1 + 0xd28a1) <= (byte)PTR_DAT_04bc27f0[uVar9])) &&
       ((((uint)(&DAT_053e6eb8)[uVar9] >> (ulong)(*(byte *)(lVar1 + 0xd28a1) & 0x1f) & 1) != 0 &&
        (local_40 = (undefined *)CONCAT44(local_40._4_4_,(int)*(char *)(lVar1 + 0xe4f19)),
        *(char *)(lVar1 + 0xe4f19) != 0)))) {
      uVar5 = 1;
      goto LAB_021c367c;
    }
    uVar9 = (ulong)*(byte *)(lVar1 + 0xe5ad0);
    if (((uVar9 < 0x23) && (*(byte *)(lVar1 + 0xe5ad1) <= (byte)PTR_DAT_04bc27f0[uVar9])) &&
       ((((uint)(&DAT_053e6eb8)[uVar9] >> (ulong)(*(byte *)(lVar1 + 0xe5ad1) & 0x1f) & 1) != 0 &&
        (local_40 = (undefined *)CONCAT44(local_40._4_4_,(int)*(char *)(lVar1 + 0xf8149)),
        *(char *)(lVar1 + 0xf8149) != 0)))) {
      uVar5 = 2;
      goto LAB_021c367c;
    }
    uVar9 = (ulong)*(byte *)(lVar1 + 0xf8d00);
    if ((((uVar9 < 0x23) && (*(byte *)(lVar1 + 0xf8d01) <= (byte)PTR_DAT_04bc27f0[uVar9])) &&
        (((uint)(&DAT_053e6eb8)[uVar9] >> (ulong)(*(byte *)(lVar1 + 0xf8d01) & 0x1f) & 1) != 0)) &&
       (local_40 = (undefined *)CONCAT44(local_40._4_4_,(int)*(char *)(lVar1 + 0x10b379)),
       *(char *)(lVar1 + 0x10b379) != 0)) {
      uVar5 = 3;
      goto LAB_021c367c;
    }
  }
  if ((((uVar4 & 1) != 0) && (*(long *)(lVar6 + 0xd0) != 0)) &&
     (puVar7 = *(undefined8 **)(*(long *)(lVar6 + 0xd0) + 8), puVar7 != (undefined8 *)0x0)) {
    (**(code **)*puVar7)();
  }
LAB_021c36a0:
  *(undefined4 *)(param_1 + 0x1c) = 0;
  uVar4 = FUN_026644b0(0);
  if ((uVar4 & 1) != 0) {
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
  }
  uVar4 = FUN_026644b0(1);
  if ((uVar4 & 1) != 0) {
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
  }
  uVar4 = FUN_026644b0(2);
  if ((uVar4 & 1) != 0) {
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
  }
  uVar4 = FUN_026644b0(3);
  if ((uVar4 & 1) != 0) {
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
  }
  uVar4 = FUN_026644b0(4);
  if ((uVar4 & 1) != 0) {
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
  }
  uVar4 = FUN_026644b0(5);
  if ((uVar4 & 1) != 0) {
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
  }
  uVar4 = FUN_026644b0(6);
  if ((uVar4 & 1) != 0) {
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
  }
  uVar4 = FUN_026644b0(7);
  if ((uVar4 & 1) != 0) {
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
  }
  uVar4 = FUN_026644b0(8);
  if ((uVar4 & 1) != 0) {
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
  }
  uVar4 = FUN_026644b0(9);
  if ((uVar4 & 1) != 0) {
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
  }
  return;
}


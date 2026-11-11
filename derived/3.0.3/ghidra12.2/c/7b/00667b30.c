
undefined4
FUN_00667b30(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            long param_5,undefined8 *param_6,int *param_7,int *param_8,long param_9,
            undefined8 *param_10)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  float fVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uStack_4ea0;
  undefined8 local_4e98;
  undefined8 uStack_4e90;
  undefined1 auStack_4e80 [48];
  undefined8 local_4e50;
  undefined8 uStack_4e48;
  undefined8 local_4e40;
  undefined8 local_4e38;
  undefined8 *local_4e30;
  undefined8 *puStack_4e28;
  undefined4 local_4e20;
  
  iVar5 = *param_8;
  if (iVar5 < 3) {
    iVar2 = *param_7;
    if (iVar2 < 3) {
      uVar9 = param_1[1];
      uVar7 = *param_1;
      uVar3 = 1;
      puVar6 = param_1 + 0xc;
      uVar11 = param_1[0xd];
      uVar10 = *puVar6;
      (param_1 + (long)iVar2 * 2)[1] = uVar9;
      param_1[(long)iVar2 * 2] = uVar7;
      iVar5 = *param_7;
      param_1[(long)iVar5 * 2 + 3] = uVar9;
      param_1[(long)iVar5 * 2 + 2] = uVar7;
      iVar5 = *param_8;
      (puVar6 + (long)iVar5 * 2)[1] = uVar11;
      puVar6[(long)iVar5 * 2] = uVar10;
      iVar5 = *param_8;
      puVar6[(long)iVar5 * 2 + 3] = uVar11;
      puVar6[(long)iVar5 * 2 + 2] = uVar10;
    }
    else {
      if (iVar2 == 3) {
        if (1 < iVar5) {
          puVar6 = param_1 + 0xe;
          param_1[7] = param_1[1];
          param_1[6] = *param_1;
          goto LAB_00667c38;
        }
        uVar3 = 3;
      }
      else {
        puVar6 = param_1 + 0xc;
LAB_00667c38:
        uVar7 = *puVar6;
        uVar3 = 4;
        param_1[0x13] = puVar6[1];
        param_1[0x12] = uVar7;
      }
      param_1[0xf] = param_1[0xd];
      param_1[0xe] = param_1[0xc];
      param_1[0x11] = param_1[0xd];
      param_1[0x10] = param_1[0xc];
    }
  }
  else {
    if (iVar5 == 3) {
      if (1 < *param_7) {
        param_1[7] = param_1[3];
        param_1[6] = param_1[2];
        param_1[0x13] = param_1[0xd];
        param_1[0x12] = param_1[0xc];
        goto LAB_00667be4;
      }
      uVar3 = 3;
    }
    else {
      param_1[7] = param_1[1];
      param_1[6] = *param_1;
LAB_00667be4:
      uVar3 = 4;
    }
    param_1[3] = param_1[1];
    param_1[2] = *param_1;
    param_1[5] = param_1[1];
    param_1[4] = *param_1;
  }
  FUN_004385d0(auStack_4e80);
  lVar4 = FUN_0043c4e0(DAT_04c6f410);
  if (lVar4 != 0) {
    FUN_00443a00(lVar4,"TthkcdConvexPenetrationUtilExact");
  }
  uStack_4ea0 = param_2;
  local_4e98 = param_3;
  uStack_4e90 = param_4;
  FUN_00438670(auStack_4e80,param_5);
  uStack_4e48 = *(undefined8 *)(param_5 + 0x38);
  local_4e50 = *(undefined8 *)(param_5 + 0x30);
  local_4e40 = *param_6;
  fVar8 = (float)((ulong)local_4e40 >> 0x20);
  local_4e38 = CONCAT44(fVar8 * fVar8,(float)local_4e40 * (float)local_4e40);
  local_4e30 = param_1;
  puStack_4e28 = param_1 + 0xc;
  local_4e20 = uVar3;
  uVar3 = FUN_00669dc0(&uStack_4ea0,param_9);
  *param_6 = local_4e40;
  if (lVar4 != 0) {
    FUN_00443a70(lVar4,&DAT_04085310);
  }
  *param_7 = 3;
  *param_8 = 3;
  if (*(short *)((long)param_1 + 0x1c) == *(short *)((long)param_1 + 0x2c)) {
    iVar5 = *param_7;
LAB_00667d30:
    iVar5 = iVar5 + -1;
    *param_7 = iVar5;
  }
  else {
    iVar5 = *param_7;
    if (*(short *)((long)param_1 + 0xc) == *(short *)((long)param_1 + 0x2c)) goto LAB_00667d30;
  }
  if ((1 < iVar5) && (*(short *)((long)param_1 + 0xc) == *(short *)((long)param_1 + 0x1c))) {
    *param_7 = (int)((long)iVar5 + -1);
    uVar7 = param_1[((long)iVar5 + -1) * 2];
    param_1[1] = (param_1 + ((long)iVar5 + -1) * 2)[1];
    *param_1 = uVar7;
  }
  if (*(short *)((long)param_1 + 0x7c) == *(short *)((long)param_1 + 0x8c)) {
    iVar5 = *param_8;
  }
  else {
    iVar5 = *param_8;
    if (*(short *)((long)param_1 + 0x6c) != *(short *)((long)param_1 + 0x8c)) goto LAB_00667d94;
  }
  iVar5 = iVar5 + -1;
  *param_8 = iVar5;
LAB_00667d94:
  if ((1 < iVar5) && (*(short *)((long)param_1 + 0x6c) == *(short *)((long)param_1 + 0x7c))) {
    *param_8 = (int)((long)iVar5 + -1);
    uVar7 = param_1[((long)iVar5 + -1) * 2 + 0xc];
    param_1[0xd] = (param_1 + ((long)iVar5 + -1) * 2 + 0xc)[1];
    param_1[0xc] = uVar7;
    iVar5 = *param_8;
  }
  if (4 < iVar5 + *param_7) {
    piVar1 = param_8;
    if (*param_7 <= iVar5) {
      piVar1 = param_7;
      param_7 = param_8;
    }
    *param_7 = 3;
    *piVar1 = 1;
    *(undefined1 *)((long)param_1 + 0xd4) = 1;
  }
  uVar7 = *(undefined8 *)(param_9 + 0x10);
  param_10[1] = *(undefined8 *)(param_9 + 0x18);
  *param_10 = uVar7;
  FUN_004385e0(auStack_4e80);
  return uVar3;
}


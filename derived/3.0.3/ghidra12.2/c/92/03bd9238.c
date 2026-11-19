
void FUN_03bd9238(long *param_1,float *param_2,float *param_3)

{
  ushort uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float local_c0;
  float fStack_bc;
  float fStack_b8;
  undefined4 uStack_b4;
  undefined8 local_b0;
  ulong uStack_a8;
  float local_a0;
  float fStack_9c;
  float fStack_98;
  undefined4 uStack_94;
  undefined8 local_90;
  ulong uStack_88;
  
  lVar3 = param_1[5];
  if (lVar3 == 0) goto LAB_03bd9734;
  uVar1 = *(ushort *)(param_1 + 0x17);
  if ((uVar1 & 1) == 0) {
    fVar22 = *(float *)((long)param_1 + 0xbc);
  }
  else {
    lVar4 = param_1[4];
    uVar2 = FUN_03bdad4c(param_1,1);
    if (((uVar2 & 1) == 0) || ((*(uint *)((long)param_1 + 0x94) >> 1 & 1) == 0)) {
      *(uint *)((long)param_1 + 0x94) = *(uint *)((long)param_1 + 0x94) | 2;
      fVar22 = (float)FUN_03bd475c(*(long *)(*(long *)(param_1[4] + 0x30) + 0x18) + 0x28,lVar3,lVar4
                                  );
      *(float *)((long)param_1 + 0x54) = fVar22;
    }
    else {
      fVar22 = *(float *)((long)param_1 + 0x54);
    }
    *(float *)((long)param_1 + 0xbc) = fVar22;
    *(ushort *)((long)param_1 + 0xba) = *(ushort *)((long)param_1 + 0xba) | 1;
    uVar1 = *(ushort *)(param_1 + 0x17);
  }
  if ((uVar1 >> 1 & 1) != 0) {
    lVar3 = param_1[4];
    lVar4 = param_1[5];
    uVar2 = FUN_03bdad4c(param_1,2);
    if (((uVar2 & 1) == 0) || ((*(uint *)((long)param_1 + 0x94) >> 2 & 1) == 0)) {
      *(uint *)((long)param_1 + 0x94) = *(uint *)((long)param_1 + 0x94) | 4;
      uVar5 = FUN_03bd4850(*(long *)(*(long *)(param_1[4] + 0x30) + 0x18) + 0x28,lVar4,lVar3);
      *(undefined4 *)(param_1 + 0xb) = uVar5;
    }
    else {
      uVar5 = (undefined4)param_1[0xb];
    }
    *(undefined4 *)(param_1 + 0x18) = uVar5;
    *(ushort *)((long)param_1 + 0xba) = *(ushort *)((long)param_1 + 0xba) | 2;
    uVar1 = *(ushort *)(param_1 + 0x17);
  }
  if ((uVar1 >> 2 & 1) == 0) {
    if ((uVar1 >> 3 & 1) == 0) goto LAB_03bd9358;
LAB_03bd93d0:
    lVar3 = param_1[4];
    lVar4 = param_1[5];
    uVar2 = FUN_03bdad4c(param_1,4);
    if (((uVar2 & 1) == 0) || ((*(uint *)((long)param_1 + 0x94) >> 4 & 1) == 0)) {
      *(uint *)((long)param_1 + 0x94) = *(uint *)((long)param_1 + 0x94) | 0x10;
      uVar5 = FUN_03bd4a28(*(long *)(*(long *)(param_1[4] + 0x30) + 0x18) + 0x28,lVar4,lVar3);
      *(undefined4 *)(param_1 + 0xc) = uVar5;
    }
    else {
      uVar5 = (undefined4)param_1[0xc];
    }
    *(undefined4 *)(param_1 + 0x19) = uVar5;
    *(ushort *)((long)param_1 + 0xba) = *(ushort *)((long)param_1 + 0xba) | 8;
    uVar1 = *(ushort *)(param_1 + 0x17);
    if ((uVar1 >> 4 & 1) != 0) goto LAB_03bd9434;
LAB_03bd935c:
    if ((uVar1 >> 5 & 1) == 0) goto LAB_03bd9360;
LAB_03bd9498:
    lVar3 = param_1[4];
    lVar4 = param_1[5];
    uVar2 = FUN_03bdad4c(param_1,6);
    if (((uVar2 & 1) == 0) || ((*(uint *)((long)param_1 + 0x94) >> 6 & 1) == 0)) {
      *(uint *)((long)param_1 + 0x94) = *(uint *)((long)param_1 + 0x94) | 0x40;
      uVar5 = FUN_03bd4c00(*(long *)(*(long *)(param_1[4] + 0x30) + 0x18) + 0x28,lVar4,lVar3);
      *(undefined4 *)(param_1 + 0xd) = uVar5;
    }
    else {
      uVar5 = (undefined4)param_1[0xd];
    }
    *(undefined4 *)(param_1 + 0x1a) = uVar5;
    *(ushort *)((long)param_1 + 0xba) = *(ushort *)((long)param_1 + 0xba) | 0x20;
    if ((*(ushort *)(param_1 + 0x17) >> 6 & 1) != 0) goto LAB_03bd94fc;
LAB_03bd9364:
    fVar25 = *(float *)((long)param_1 + 0xd4);
  }
  else {
    lVar3 = param_1[4];
    lVar4 = param_1[5];
    uVar2 = FUN_03bdad4c(param_1,3);
    if (((uVar2 & 1) == 0) || ((*(uint *)((long)param_1 + 0x94) >> 3 & 1) == 0)) {
      *(uint *)((long)param_1 + 0x94) = *(uint *)((long)param_1 + 0x94) | 8;
      uVar5 = FUN_03bd493c(*(long *)(*(long *)(param_1[4] + 0x30) + 0x18) + 0x28,lVar4,lVar3);
      *(undefined4 *)((long)param_1 + 0x5c) = uVar5;
    }
    else {
      uVar5 = *(undefined4 *)((long)param_1 + 0x5c);
    }
    *(undefined4 *)((long)param_1 + 0xc4) = uVar5;
    *(ushort *)((long)param_1 + 0xba) = *(ushort *)((long)param_1 + 0xba) | 4;
    uVar1 = *(ushort *)(param_1 + 0x17);
    if ((uVar1 >> 3 & 1) != 0) goto LAB_03bd93d0;
LAB_03bd9358:
    if ((uVar1 >> 4 & 1) == 0) goto LAB_03bd935c;
LAB_03bd9434:
    lVar3 = param_1[4];
    lVar4 = param_1[5];
    uVar2 = FUN_03bdad4c(param_1,5);
    if (((uVar2 & 1) == 0) || ((*(uint *)((long)param_1 + 0x94) >> 5 & 1) == 0)) {
      *(uint *)((long)param_1 + 0x94) = *(uint *)((long)param_1 + 0x94) | 0x20;
      uVar5 = FUN_03bd4b14(*(long *)(*(long *)(param_1[4] + 0x30) + 0x18) + 0x28,lVar4,lVar3);
      *(undefined4 *)((long)param_1 + 100) = uVar5;
    }
    else {
      uVar5 = *(undefined4 *)((long)param_1 + 100);
    }
    *(undefined4 *)((long)param_1 + 0xcc) = uVar5;
    *(ushort *)((long)param_1 + 0xba) = *(ushort *)((long)param_1 + 0xba) | 0x10;
    uVar1 = *(ushort *)(param_1 + 0x17);
    if ((uVar1 >> 5 & 1) != 0) goto LAB_03bd9498;
LAB_03bd9360:
    if ((uVar1 >> 6 & 1) == 0) goto LAB_03bd9364;
LAB_03bd94fc:
    lVar3 = param_1[4];
    lVar4 = param_1[5];
    uVar2 = FUN_03bdad4c(param_1,7);
    if (((uVar2 & 1) == 0) || ((*(uint *)((long)param_1 + 0x94) >> 7 & 1) == 0)) {
      *(uint *)((long)param_1 + 0x94) = *(uint *)((long)param_1 + 0x94) | 0x80;
      fVar25 = (float)FUN_03bd4cf0(*(long *)(*(long *)(param_1[4] + 0x30) + 0x18) + 0x28,lVar4,lVar3
                                  );
      *(float *)((long)param_1 + 0x6c) = fVar25;
    }
    else {
      fVar25 = *(float *)((long)param_1 + 0x6c);
    }
    *(float *)((long)param_1 + 0xd4) = fVar25;
    *(ushort *)((long)param_1 + 0xba) = *(ushort *)((long)param_1 + 0xba) | 0x40;
  }
  fVar15 = *(float *)(param_1 + 0x18);
  fVar6 = *(float *)((long)param_1 + 0xc4);
  fVar7 = *(float *)(param_1 + 0x19);
  fVar23 = *(float *)((long)param_1 + 0xcc);
  fVar24 = *(float *)(param_1 + 0x1a);
  fVar26 = *param_3;
  fVar16 = param_3[1];
  fVar8 = param_3[2];
  fVar9 = sinf(fVar23);
  fVar10 = sinf(fVar24);
  fVar11 = sinf(fVar25);
  fVar23 = cosf(fVar23);
  fVar24 = cosf(fVar24);
  fVar25 = cosf(fVar25);
  fVar17 = *param_2;
  fVar14 = param_2[2];
  fVar18 = param_2[1];
  uVar2 = (**(code **)(*param_1 + 0x18))(param_1);
  if ((((uVar2 & 1) != 0) && (lVar3 = FUN_00322a20(param_1 + 0x15), 0 < *(int *)(lVar3 + 0x18c))) &&
     (*(char *)(lVar3 + 0x1c) != '\0')) {
    fVar20 = fVar22 * fVar26;
    fVar27 = fVar22 * fVar8;
    fVar22 = fVar22 * fVar16;
    fVar21 = fVar20 * fVar24 * fVar25;
    fVar28 = -(fVar10 * fVar20);
    fVar20 = fVar20 * fVar11 * fVar24;
    fVar19 = fVar22 * (fVar9 * fVar10 * fVar25 - fVar11 * fVar23);
    fVar12 = fVar22 * (fVar23 * fVar25 + fVar11 * fVar9 * fVar10);
    fVar22 = fVar22 * fVar9 * fVar24;
    fVar13 = fVar27 * (fVar9 * fVar11 + fVar10 * fVar23 * fVar25);
    fVar24 = fVar27 * fVar23 * fVar24;
    fVar27 = fVar27 * (-(fVar9 * fVar25) + fVar10 * fVar11 * fVar23);
    fVar7 = fVar7 * fVar8;
    fVar15 = fVar15 * fVar26;
    fVar6 = fVar6 * fVar16;
    fVar25 = fVar21 * 0.0;
    fVar8 = fVar19 * 0.0;
    fVar9 = fVar13 * 0.0;
    fVar10 = fVar15 * 0.0;
    local_c0 = fVar21 + fVar20 * 0.0 + fVar28 * 0.0 + 0.0;
    local_a0 = fVar13 + fVar27 * 0.0 + fVar24 * 0.0 + 0.0;
    fStack_bc = fVar20 + fVar25 + fVar28 * 0.0 + 0.0;
    fStack_9c = fVar27 + fVar9 + fVar24 * 0.0 + 0.0;
    fStack_b8 = fVar28 + fVar25 + fVar20 * 0.0 + 0.0;
    fStack_98 = fVar24 + fVar9 + fVar27 * 0.0 + 0.0;
    uStack_b4 = 0;
    uStack_94 = 0;
    uStack_a8 = (ulong)(uint)(fVar22 + fVar8 + fVar12 * 0.0 + 0.0);
    local_b0 = CONCAT44(fVar12 + fVar8 + fVar22 * 0.0 + 0.0,
                        fVar19 + fVar12 * 0.0 + fVar22 * 0.0 + 0.0);
    uStack_88 = (ulong)(uint)(fVar14 + fVar7 + fVar10 + fVar6 * 0.0);
    local_90 = CONCAT44(fVar18 + fVar6 + fVar10 + fVar7 * 0.0,
                        fVar17 + fVar15 + fVar6 * 0.0 + fVar7 * 0.0);
    FUN_00322694(lVar3,&local_c0);
  }
LAB_03bd9734:
  *(byte *)(param_1 + 0x13) = *(byte *)(param_1 + 0x13) & 0xfe;
  return;
}



void FUN_00392d10(float param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  float fVar5;
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
  undefined8 uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined8 uVar27;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  lVar1 = *(long *)(param_2 + 0x28);
  if (lVar1 != 0) {
    if ((param_1 < *(float *)(lVar1 + 0x7c)) || (*(float *)(lVar1 + 0x80) <= param_1)) {
      *(undefined1 *)(param_2 + 0x1c) = 0;
      return;
    }
    *(undefined1 *)(param_2 + 0x1c) = 1;
    FUN_00392ea0(param_1,param_2,&local_70,lVar1 + 8);
    uVar4 = FUN_0038ef70(param_1,*(long *)(param_2 + 0x28) + 0x68);
    puVar2 = *(undefined8 **)(param_2 + 0x20);
    if (*(long *)(param_2 + 0x38) == 0) {
      puVar2[2] = local_60;
      puVar2[3] = uStack_58;
      puVar2[4] = local_50;
      puVar2[5] = uStack_48;
      *puVar2 = local_70;
      puVar2[1] = uStack_68;
    }
    else {
      puVar3 = *(undefined8 **)(*(long *)(param_2 + 0x38) + 0x20);
      uVar27 = puVar3[5];
      uVar23 = puVar3[3];
      fVar20 = (float)puVar3[2];
      fVar5 = (float)local_70;
      fVar6 = (float)((ulong)local_70 >> 0x20);
      fVar7 = (float)uStack_68;
      fVar8 = (float)((ulong)uStack_68 >> 0x20);
      fVar21 = (float)((ulong)puVar3[2] >> 0x20);
      fVar9 = (float)local_60;
      fVar11 = (float)((ulong)local_60 >> 0x20);
      fVar13 = (float)uStack_58;
      fVar15 = (float)((ulong)uStack_58 >> 0x20);
      fVar17 = (float)*puVar3;
      fVar18 = (float)((ulong)*puVar3 >> 0x20);
      fVar24 = (float)puVar3[4];
      fVar25 = (float)((ulong)puVar3[4] >> 0x20);
      fVar19 = (float)puVar3[1];
      fVar10 = (float)local_50;
      fVar12 = (float)((ulong)local_50 >> 0x20);
      fVar14 = (float)uStack_48;
      fVar16 = (float)((ulong)uStack_48 >> 0x20);
      fVar22 = (float)uVar23;
      fVar26 = (float)uVar27;
      puVar2[1] = CONCAT44((float)((ulong)puVar3[1] >> 0x20) +
                           fVar8 * fVar17 + fVar15 * fVar18 + fVar16 * fVar19,
                           fVar7 * fVar17 + fVar13 * fVar18 + fVar14 * fVar19 + 0.0);
      *puVar2 = CONCAT44(fVar6 * fVar17 + fVar11 * fVar18 + fVar12 * fVar19 + 0.0,
                         fVar5 * fVar17 + fVar9 * fVar18 + fVar10 * fVar19 + 0.0);
      puVar2[3] = CONCAT44((float)((ulong)uVar23 >> 0x20) +
                           fVar8 * fVar20 + fVar15 * fVar21 + fVar16 * fVar22,
                           fVar7 * fVar20 + fVar13 * fVar21 + fVar14 * fVar22 + 0.0);
      puVar2[2] = CONCAT44(fVar6 * fVar20 + fVar11 * fVar21 + fVar12 * fVar22 + 0.0,
                           fVar5 * fVar20 + fVar9 * fVar21 + fVar10 * fVar22 + 0.0);
      puVar2[5] = CONCAT44((float)((ulong)uVar27 >> 0x20) +
                           fVar8 * fVar24 + fVar15 * fVar25 + fVar16 * fVar26,
                           fVar7 * fVar24 + fVar13 * fVar25 + fVar14 * fVar26 + 0.0);
      puVar2[4] = CONCAT44(fVar6 * fVar24 + fVar11 * fVar25 + fVar12 * fVar26 + 0.0,
                           fVar5 * fVar24 + fVar9 * fVar25 + fVar10 * fVar26 + 0.0);
    }
    *(undefined4 *)(param_2 + 0x18) = uVar4;
  }
  if (0 < *(int *)(param_2 + 0x50)) {
    FUN_00392200(param_1,param_2 + 0x40,param_3,param_4,*(undefined8 *)(param_2 + 0x20));
  }
  for (lVar1 = *(long *)(param_2 + 0x98); lVar1 != param_2 + 0x90; lVar1 = *(long *)(lVar1 + 8)) {
    (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_1,(long *)(lVar1 + -8),param_3,param_4);
  }
  return;
}


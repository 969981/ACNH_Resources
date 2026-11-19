
void FUN_03a8d3c0(long param_1,uint param_2,long param_3)

{
  long lVar1;
  float fVar2;
  undefined8 uVar3;
  float fVar4;
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
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  uVar3 = *(undefined8 *)(param_3 + 8);
  if (*(uint *)(param_1 + 0x1d0) <= param_2) {
    param_2 = 0;
  }
  lVar1 = *(long *)(param_1 + 0x1d8) + (long)(int)param_2 * 0x3b0;
  *(undefined8 *)(lVar1 + 800) = *(undefined8 *)(param_3 + 0x10);
  *(undefined8 *)(lVar1 + 0x318) = uVar3;
  uVar3 = *(undefined8 *)(param_3 + 0x18);
  *(undefined8 *)(lVar1 + 0x330) = *(undefined8 *)(param_3 + 0x20);
  *(undefined8 *)(lVar1 + 0x328) = uVar3;
  uVar3 = *(undefined8 *)(param_3 + 0x28);
  *(undefined8 *)(lVar1 + 0x340) = *(undefined8 *)(param_3 + 0x30);
  *(undefined8 *)(lVar1 + 0x338) = uVar3;
  FUN_007535b4(&local_50);
  fVar2 = (float)local_50;
  fVar4 = (float)((ulong)local_50 >> 0x20);
  fVar5 = (float)uStack_48;
  fVar6 = (float)((ulong)uStack_48 >> 0x20);
  fVar7 = (float)local_40;
  fVar8 = (float)((ulong)local_40 >> 0x20);
  fVar9 = (float)uStack_38;
  fVar10 = (float)((ulong)uStack_38 >> 0x20);
  local_80 = 0xbf800000;
  uStack_7c = 0;
  uStack_78 = 0;
  fVar15 = (float)local_30;
  fVar16 = (float)((ulong)local_30 >> 0x20);
  fVar17 = (float)uStack_28;
  fVar18 = (float)((ulong)uStack_28 >> 0x20);
  uStack_6c = 0x3f800000;
  uStack_68 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_64 = 0;
  fVar11 = fVar2 * 0.0 + fVar7 * -1.0 + fVar15 * 0.0 + 0.0;
  fVar12 = fVar4 * 0.0 + fVar8 * -1.0 + fVar16 * 0.0 + 0.0;
  fVar13 = fVar5 * 0.0 + fVar9 * -1.0 + fVar17 * 0.0 + 0.0;
  fVar19 = fVar2 * 1.0 + fVar7 * 0.0 + fVar15 * 0.0 + 0.0;
  fVar20 = fVar4 * 1.0 + fVar8 * 0.0 + fVar16 * 0.0 + 0.0;
  fVar21 = fVar5 * 1.0 + fVar9 * 0.0 + fVar17 * 0.0 + 0.0;
  local_60 = 0;
  uStack_58 = 0x3f800000;
  fVar14 = fVar6 * 0.0 + fVar10 * -1.0 + fVar18 * 0.0 + 0.0 + *(float *)(param_1 + 0x5c0) * 2.0;
  fVar2 = fVar2 * 0.0 + fVar7 * 0.0 + fVar15 * 1.0 + 0.0;
  fVar4 = fVar4 * 0.0 + fVar8 * 0.0 + fVar16 * 1.0 + 0.0;
  fVar5 = fVar5 * 0.0 + fVar9 * 0.0 + fVar17 * 1.0 + 0.0;
  local_50 = CONCAT44(fVar19 * 0.0 + fVar20 * 1.0 + fVar21 * 0.0 + 0.0,
                      fVar19 * -1.0 + fVar20 * 0.0 + fVar21 * 0.0 + 0.0);
  uStack_48 = CONCAT44(fVar6 * 1.0 + fVar10 * 0.0 + fVar18 * 0.0 + 0.0 +
                       fVar19 * 0.0 + fVar20 * 0.0 + fVar21 * 0.0,
                       fVar19 * 0.0 + fVar20 * 0.0 + fVar21 * 1.0 + 0.0);
  local_30 = CONCAT44(fVar2 * 0.0 + fVar4 * 1.0 + fVar5 * 0.0 + 0.0,
                      fVar2 * -1.0 + fVar4 * 0.0 + fVar5 * 0.0 + 0.0);
  uStack_28 = CONCAT44(fVar6 * 0.0 + fVar10 * 0.0 + fVar18 * 1.0 + 0.0 +
                       fVar2 * 0.0 + fVar4 * 0.0 + fVar5 * 0.0,
                       fVar2 * 0.0 + fVar4 * 0.0 + fVar5 * 1.0 + 0.0);
  local_40 = CONCAT44(fVar11 * 0.0 + fVar12 * 1.0 + fVar13 * 0.0 + 0.0,
                      fVar11 * -1.0 + fVar12 * 0.0 + fVar13 * 0.0 + 0.0);
  uStack_38 = CONCAT44(fVar14 + fVar11 * 0.0 + fVar12 * 0.0 + fVar13 * 0.0,
                       fVar11 * 0.0 + fVar12 * 0.0 + fVar13 * 1.0 + 0.0);
  FUN_007535b4(local_30,local_40,CONCAT44(fVar14,fVar14),&local_80,&local_50);
  *(ulong *)(lVar1 + 0x388) = CONCAT44(uStack_74,uStack_78);
  *(ulong *)(lVar1 + 0x380) = CONCAT44(uStack_7c,local_80);
  *(ulong *)(lVar1 + 0x398) = CONCAT44(uStack_64,uStack_68);
  *(ulong *)(lVar1 + 0x390) = CONCAT44(uStack_6c,uStack_70);
  *(undefined8 *)(lVar1 + 0x3a8) = uStack_58;
  *(undefined8 *)(lVar1 + 0x3a0) = local_60;
  (**(code **)(*(long *)(lVar1 + 0x348) + 0x20))(lVar1 + 0x348,lVar1 + 0x350);
  return;
}


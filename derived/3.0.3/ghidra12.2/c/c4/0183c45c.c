
undefined8 FUN_0183c45c(long param_1)

{
  long lVar1;
  uint uVar2;
  uint *puVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  char cVar7;
  ulong uVar8;
  uint uVar9;
  float fVar10;
  undefined4 uVar11;
  byte local_50 [4];
  float local_4c;
  float fStack_48;
  float local_44;
  undefined *local_40;
  int local_38;
  int iStack_34;
  
  if ((*(int *)(param_1 + 0x400) == *(int *)(param_1 + 0x584)) &&
     (*(int *)(param_1 + 0x404) == *(int *)(param_1 + 0x588))) {
    return 0;
  }
  lVar1 = param_1 + 0x328;
  sVar4 = *(short *)PTR_DAT_04bb6298;
  if (sVar4 != -1) {
    local_40 = (undefined *)CONCAT44(local_40._4_4_,0x1a);
    puVar3 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar4 * 8);
    if (0xff < (uint)(int)sVar4) {
      puVar3 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar3 >> 0x1a & 1) != 0) {
      local_40 = (undefined *)CONCAT44(local_40._4_4_,1);
      uVar9 = *puVar3 >> 1 & 1;
      goto LAB_0183c51c;
    }
  }
  uVar9 = 0;
LAB_0183c51c:
  uVar2 = 0;
  if (*(char *)(param_1 + 0x494) == '\0') {
    uVar2 = uVar9;
  }
  uVar8 = FUN_01a1ed20(lVar1,param_1 + 0x334,PTR_LAB_04bbe790,0x12,uVar2,1);
  if ((uVar8 & 1) != 0) {
    local_40 = PTR_DAT_04bb2010 + 0x10;
    iVar5 = (int)((float)(int)*(float *)(param_1 + 0x328) / 5.0) -
            (uint)(*(float *)(param_1 + 0x328) < 0.0);
    iVar6 = (int)((float)(int)*(float *)(param_1 + 0x330) / 5.0) -
            (uint)(*(float *)(param_1 + 0x330) < 0.0);
    local_38 = iVar5;
    iStack_34 = iVar6;
    fVar10 = (float)FUN_01a1c140(&local_40);
    if (fVar10 <= *(float *)(*(long *)(param_1 + 0x300) + 0x27c)) {
      *(int *)(param_1 + 0x584) = iVar5;
      *(int *)(param_1 + 0x588) = iVar6;
      local_4c = 0.0;
      uVar11 = FUN_0093a950(*(long *)PTR_DAT_04bb27c8 + 0x28,lVar1,&local_4c);
      *(undefined4 *)(param_1 + 0x32c) = uVar11;
      uVar11 = FUN_006f0400(*(float *)(param_1 + 0x328) -
                            *(float *)(*(long *)(param_1 + 0x300) + 0x278),
                            *(float *)(param_1 + 0x330) -
                            *(float *)(*(long *)(param_1 + 0x300) + 0x280));
      *(undefined4 *)(param_1 + 0x4c8) = uVar11;
      uVar8 = FUN_019705ec(*(undefined8 *)PTR_DAT_04bb47e0,local_50,&local_4c,lVar1);
      if ((uVar8 & 1) != 0) {
        cVar7 = '\x01';
        if (local_50[0] < 3) {
          cVar7 = local_50[0] + 1;
        }
        *(char *)(param_1 + 0x3fa) = cVar7;
        *(float *)(param_1 + 0x328) = *(float *)(param_1 + 0x328) + local_4c;
        *(float *)(param_1 + 0x330) = *(float *)(param_1 + 0x330) + local_44;
        *(float *)(param_1 + 0x32c) = fStack_48 + 0.5 + *(float *)(param_1 + 0x32c);
        return 1;
      }
    }
  }
  return 0;
}


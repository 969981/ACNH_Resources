
uint FUN_026825d0(short *param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  short *psVar1;
  uint *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  short *psVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  ulong uVar14;
  undefined **local_80;
  short *psStack_78;
  undefined *local_70;
  undefined8 uStack_68;
  
  psVar10 = param_1 + (param_2 & 0xffffffff) * 4;
  if (0x464 < ((uint)(param_2 >> 3) & 0x1fffffff)) {
    psVar10 = param_1;
  }
  psStack_78 = param_1;
  if (*psVar10 == -2) {
    local_80 = &PTR_LAB_04a88408;
    uVar7 = *(uint *)(param_1 + 36000);
    local_70 = PTR_LAB_04bc35e8;
    uStack_68 = 0;
    if (8999 < uVar7) {
      uVar7 = 9000;
    }
    uVar7 = FUN_0277b494(param_2 & 0xffffffff,param_3,uVar7,&local_80,1,param_4);
  }
  else {
    puVar2 = (uint *)(param_1 + 36000);
    uVar7 = *puVar2;
    if (8999 < uVar7) {
      uVar7 = 9000;
    }
    uVar8 = (ulong)uVar7;
    uVar11 = (uint)param_2;
    if (uVar11 < uVar7) {
      if (param_1[(param_2 & 0xffffffff) * 4] == -2) {
        uVar7 = 1;
      }
      else {
        uVar14 = param_2 & 0xffffffff;
        lVar9 = 0;
        psVar10 = param_1 + uVar14 * 4;
        do {
          psVar10 = psVar10 + 4;
          if ((uVar14 - uVar8) + 1 == lVar9) goto LAB_02682738;
          lVar9 = lVar9 + -1;
        } while (*psVar10 != -2);
        uVar14 = uVar14 - lVar9;
        uVar7 = (uint)(uVar14 < uVar8);
        if ((int)uVar11 < (int)uVar14) {
          do {
            uVar12 = (uint)uVar14;
            uVar6 = uVar12 - 1;
            if (-1 < (int)uVar12) {
              uVar13 = *puVar2;
              if (8999 < uVar13) {
                uVar13 = 9000;
              }
              if ((uVar6 < uVar13 && uVar12 != 0) && uVar12 < uVar13) {
                psVar10 = param_1 + (uVar14 & 0xffffffff) * 4;
                psVar1 = param_1 + (ulong)uVar6 * 4;
                uVar3 = *(undefined4 *)psVar10;
                uVar4 = *(undefined4 *)(psVar10 + 2);
                uVar5 = *(undefined4 *)(psVar1 + 2);
                *(undefined4 *)psVar10 = *(undefined4 *)psVar1;
                *(undefined4 *)(psVar10 + 2) = uVar5;
                *(undefined4 *)psVar1 = uVar3;
                *(undefined4 *)(psVar1 + 2) = uVar4;
                FUN_033cff20(uVar14 & 0xffffffff,uVar6);
              }
            }
            uVar14 = (ulong)uVar6;
          } while ((int)uVar11 < (int)uVar6);
          uVar11 = *puVar2;
          if (8999 < uVar11) {
            uVar11 = 9000;
          }
          uVar8 = (ulong)uVar11;
        }
      }
      local_80 = &PTR_LAB_04a88408;
      local_70 = PTR_LAB_04bc35e8;
      uStack_68 = 0;
      param_1 = (short *)FUN_0277b494(param_2 & 0xffffffff,param_3,uVar8,&local_80,1,param_4);
    }
    else {
LAB_02682738:
      uVar7 = 0;
    }
    uVar7 = uVar7 & (uint)param_1;
  }
  return uVar7 & 1;
}


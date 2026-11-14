
void FUN_01525640(long param_1)

{
  undefined *puVar1;
  int *piVar2;
  short sVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  byte *pbVar9;
  undefined8 *puVar10;
  
  pbVar9 = (byte *)(param_1 + 0x62);
  pbVar9[0] = 0;
  pbVar9[1] = 0;
  pbVar9[2] = 0;
  pbVar9[3] = 0;
  pbVar9[4] = 0;
  pbVar9[5] = 0;
  pbVar9[6] = 0;
  pbVar9[7] = 0;
  sVar3 = *(short *)PTR_DAT_04bb6298;
  if (sVar3 != -1) {
    puVar1 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar3 * 8;
    if (0xff < (uint)(int)sVar3) {
      puVar1 = PTR_DAT_04bc39f8;
    }
    if ((*(uint *)(puVar1 + 4) & 1) != 0) {
      *(undefined8 *)(param_1 + 0x62) = 0;
      lVar5 = param_1 + 0x48;
      param_1 = param_1 + 0x55;
      goto LAB_01525700;
    }
  }
  if (((DAT_0537d558 != (long *)0x0) && (DAT_0537d558[5] != 0)) && ((int)DAT_0537d558[0x10] == 1)) {
    return;
  }
  if (*(byte *)(*DAT_0537d558 + 0x476) < 2) {
    lVar5 = param_1 + 0x14;
    param_1 = param_1 + 0x21;
  }
  else {
    lVar5 = param_1 + 0x2e;
    param_1 = param_1 + 0x3b;
  }
LAB_01525700:
  FUN_0154aec0(0,lVar5,param_1);
  if (DAT_05aed670 == 0) {
    puVar10 = &DAT_055c04a0;
  }
  else {
    puVar10 = &DAT_055c04a0;
    if (*(long *)(DAT_05aed670 + 0x330) != 0) {
      puVar10 = (undefined8 *)
                (**(code **)(*DAT_05aed668 + 0x18))
                          (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
      iVar4 = FUN_006bd550(*puVar10,0);
      puVar10 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar4 != 0x758f7eaf) {
        puVar10 = &DAT_055c04a0;
      }
    }
  }
  uVar7 = 0;
  do {
    uVar6 = (uint)uVar7;
    piVar2 = (int *)((long)(PTR_DAT_04bbbf90 + 8) + uVar7 * 4);
    if (0x38 < uVar6) {
      piVar2 = (int *)(PTR_DAT_04bbbf90 + 8);
    }
    if (*piVar2 == *(int *)(puVar10 + 7)) goto LAB_015257bc;
    uVar8 = 0x39;
    if ((int)uVar6 < 0x39) {
      uVar8 = uVar6 + 1;
    }
    uVar7 = (ulong)uVar8;
  } while (uVar8 != 0x39);
  uVar6 = 0;
LAB_015257bc:
  if (uVar6 < 0x39) {
    pbVar9[uVar6 >> 3] = pbVar9[uVar6 >> 3] | (byte)(1 << (ulong)(uVar6 & 7));
  }
  *pbVar9 = *pbVar9 | 1;
  return;
}


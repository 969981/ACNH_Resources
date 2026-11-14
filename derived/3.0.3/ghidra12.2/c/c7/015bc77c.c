
float FUN_015bc77c(long *param_1,float *param_2,ulong param_3,float *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  float *pfVar10;
  long lVar11;
  long lVar12;
  float fVar13;
  float fVar14;
  int local_34;
  
  local_34 = 0;
  if ((param_3 & 1) == 0) {
    fVar13 = (float)FUN_0093b024(*(long *)PTR_DAT_04bb27c8 + 0x28,param_2,&local_34);
  }
  else {
    fVar13 = (float)FUN_0093a950(*(long *)PTR_DAT_04bb27c8 + 0x28,param_2,&local_34);
  }
  lVar12 = *(long *)(param_1[0x50] + 8);
  if ((((char)param_1[7] != '\0') &&
      (uVar9 = (**(code **)(*param_1 + 0xc0))(param_1), (uVar9 & 1) != 0)) &&
     (*(char *)((long)param_1 + 0xe0a) != '\0')) {
    iVar4 = (int)((float)(int)*param_2 / 10.0) - (uint)(*param_2 < 0.0);
    iVar5 = (int)((float)(int)param_2[2] / 10.0) - (uint)(param_2[2] < 0.0);
    lVar11 = param_1[0x168];
    iVar2 = *(int *)(lVar11 + 0x10);
    iVar3 = *(int *)(lVar11 + 0x14);
    iVar8 = iVar4;
    if (*(int *)(lVar11 + 0x20) <= iVar4) {
      iVar8 = *(int *)(lVar11 + 0x20);
    }
    iVar1 = iVar2;
    if (iVar2 <= iVar4) {
      iVar1 = iVar8;
    }
    iVar8 = iVar5;
    if (*(int *)(lVar11 + 0x24) <= iVar5) {
      iVar8 = *(int *)(lVar11 + 0x24);
    }
    iVar4 = iVar3;
    if (iVar3 <= iVar5) {
      iVar4 = iVar8;
    }
    uVar6 = iVar1 + iVar2 * -2;
    uVar7 = iVar4 + iVar3 * -2;
    lVar11 = (long)(int)(uVar6 + uVar7 * *(uint *)(param_1 + 0x161));
    if (*(uint *)((long)param_1 + 0xb0c) <= uVar7 || *(uint *)(param_1 + 0x161) <= uVar6) {
      lVar11 = 0;
    }
    if (((*(char *)(param_1[0x162] + lVar11 * 0x1c) != '\0') &&
        ((*(byte *)(param_1[0x162] + lVar11 * 0x1c + 0xc) & 0xfe) == 2)) &&
       (iVar8 = FUN_01317b90(param_2,0), iVar8 == 0)) goto LAB_015bc924;
  }
  if (local_34 != 0xc) {
    if (local_34 == 5) {
      if (param_4 != (float *)0x0) {
        pfVar10 = (float *)(**(code **)(*(long *)(lVar12 + 0x488) + 0xf0))(lVar12 + 0x488);
        *param_4 = *pfVar10;
      }
      pfVar10 = (float *)(**(code **)(*(long *)(lVar12 + 0x488) + 0xf0))(lVar12 + 0x488);
      return *pfVar10 - fVar13;
    }
    if (local_34 != 1) {
      if (param_4 == (float *)0x0) {
        return 0.0;
      }
      *param_4 = fVar13;
      return 0.0;
    }
    if (param_4 != (float *)0x0) {
      pfVar10 = (float *)(**(code **)(*(long *)(lVar12 + 0x458) + 0xf0))(lVar12 + 0x458);
      *param_4 = fVar13 + *pfVar10;
    }
    pfVar10 = (float *)(**(code **)(*(long *)(lVar12 + 0x458) + 0xf0))(lVar12 + 0x458);
    return *pfVar10;
  }
LAB_015bc924:
  fVar14 = (float)FUN_015cb668(param_1,param_2);
  if (param_4 != (float *)0x0) {
    *param_4 = fVar14;
  }
  return fVar14 - fVar13;
}


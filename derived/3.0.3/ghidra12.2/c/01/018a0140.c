
bool FUN_018a0140(long param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  float *pfVar7;
  undefined1 *__src;
  long lVar8;
  float fVar9;
  undefined4 uVar10;
  undefined8 local_148;
  undefined4 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined4 local_128;
  undefined8 local_124;
  undefined8 local_11c;
  ulong local_114;
  undefined *local_108;
  undefined1 *local_100;
  int local_f8;
  undefined1 local_f4 [127];
  undefined1 local_75;
  undefined4 local_70;
  undefined2 local_6c;
  undefined8 local_68;
  
  lVar8 = DAT_052d2598;
  puVar2 = PTR_DAT_04bb27c0;
  if ((*(long *)(param_1 + 0x48) == 0 || *(long *)PTR_DAT_04bb27c0 == 0) || (DAT_052d2598 == 0)) {
    bVar4 = false;
  }
  else {
    uVar1 = *(undefined4 *)(*(long *)(param_1 + 0x48) + 0x230);
    local_124 = 0x3f800000;
    local_128 = 0;
    local_138 = 0x7d00000000;
    local_130 = 0;
    local_100 = local_f4;
    local_f8 = 0x80;
    local_75 = 0;
    local_f4[0] = 0;
    local_108 = PTR_DAT_04bb2d88 + 0x10;
    local_68 = 0;
    local_6c = 0;
    local_70 = 7;
    local_11c = 0;
    local_114 = 0;
    lVar6 = FUN_018a0358(DAT_052cc470,0xd,0x283);
    local_148 = *param_2;
    local_140 = *(undefined4 *)(param_2 + 1);
    fVar9 = (float)FUN_015cb8d4(&local_148,1);
    pfVar7 = (float *)(**(code **)(*(long *)(lVar6 + 0x1b8) + 0xf0))(lVar6 + 0x1b8);
    local_128 = local_140;
    local_130 = CONCAT44(fVar9 + *pfVar7,(int)local_148);
    uVar10 = FUN_01a12580(DAT_052d2598,0x283);
    local_124 = CONCAT44(local_124._4_4_,uVar10);
    local_114 = local_114 & 0xffffffff00000000;
    local_11c = 0x2830000000d;
    __src = (undefined1 *)FUN_01a113c0(lVar8,0x283);
    puVar3 = local_100;
    if (local_100 != __src) {
      lVar8 = 0;
      do {
        if (__src[lVar8] == '\0') goto LAB_018a02e4;
        if (__src[lVar8 + 1] == '\0') {
          lVar8 = lVar8 + 1;
          goto LAB_018a02e4;
        }
        if (__src[lVar8 + 2] == '\0') {
          lVar8 = lVar8 + 2;
          goto LAB_018a02e4;
        }
        lVar8 = lVar8 + 3;
      } while (lVar8 != 0x80001);
      lVar8 = 0;
LAB_018a02e4:
      iVar5 = (int)lVar8;
      if (local_f8 <= (int)lVar8) {
        iVar5 = local_f8 + -1;
      }
      memcpy(local_100,__src,(long)iVar5);
      puVar3[iVar5] = 0;
    }
    iVar5 = FUN_007402e0(*(undefined8 *)puVar2,&local_138,uVar1,1);
    *(int *)(param_1 + 2000) = iVar5;
    bVar4 = iVar5 != DAT_04c9a0c8;
  }
  return bVar4;
}


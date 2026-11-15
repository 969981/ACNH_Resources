
bool FUN_020809e0(long *param_1,float *param_2,float *param_3,long param_4,undefined4 param_5)

{
  uint uVar1;
  ushort uVar2;
  undefined *puVar3;
  bool bVar4;
  uint uVar5;
  ulong uVar6;
  float *pfVar7;
  long lVar8;
  uint *puVar9;
  uint *puVar10;
  undefined1 *__src;
  long lVar11;
  float fVar12;
  int iVar13;
  int iVar14;
  undefined4 uVar15;
  undefined1 auStack_100 [4];
  undefined1 auStack_fc [4];
  float local_f8;
  undefined8 local_f0;
  undefined *local_e8;
  undefined1 *local_e0;
  int local_d8;
  undefined1 auStack_d4 [63];
  undefined1 local_95;
  int local_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined2 local_80;
  undefined *local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  
  puVar3 = PTR_PTR_04bb2238;
  if (param_2 == (float *)0x0) {
    return false;
  }
  if (param_3 == (float *)0x0) {
    return false;
  }
  local_95 = 0;
  local_d8 = 0x40;
  local_e8 = PTR_DAT_04bb2f70 + 0x10;
  local_f0 = 0;
  local_e0 = auStack_d4;
  (**(code **)(*(long *)PTR_PTR_04bb2238 + 0x18))(PTR_PTR_04bb2238);
  __src = *(undefined1 **)(puVar3 + 8);
  if (auStack_d4 != __src) {
    (**(code **)(*(long *)puVar3 + 0x18))(puVar3);
    lVar8 = 0;
    do {
      if (*(char *)(*(long *)(puVar3 + 8) + lVar8) == '\0') goto LAB_02080acc;
      lVar11 = *(long *)(puVar3 + 8) + lVar8;
      if (*(char *)(lVar11 + 1) == '\0') {
        lVar8 = lVar8 + 1;
        goto LAB_02080acc;
      }
      if (*(char *)(lVar11 + 2) == '\0') {
        lVar8 = lVar8 + 2;
        goto LAB_02080acc;
      }
      lVar8 = lVar8 + 3;
    } while (lVar8 != 0x80001);
    lVar8 = 0;
LAB_02080acc:
    iVar13 = (int)lVar8;
    if (local_d8 <= (int)lVar8) {
      iVar13 = local_d8 + -1;
    }
    memcpy(auStack_d4,__src,(long)iVar13);
    auStack_d4[iVar13] = 0;
  }
  lVar8 = param_4 + 0x58;
  local_80 = 0;
  local_e8 = PTR_DAT_04bb2bc0 + 0x10;
  uStack_8c = *(undefined4 *)PTR_DAT_04bb37e0;
  local_88 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
  uStack_84 = 0;
  local_90 = 0;
  local_78 = (undefined *)CONCAT44(local_78._4_4_,(int)param_1[0x19]);
  uVar6 = FUN_02080ddc(param_1,&local_f0,lVar8,param_4 + 0x28,&local_78);
  if (((uVar6 & 1) != 0) && (local_90 == 6)) {
    iVar14 = *(int *)(param_4 + 0x44);
    iVar13 = *(int *)(param_4 + 0x34);
    fVar12 = ((float)*(int *)(param_4 + 0x30) * 5.0 + (float)*(int *)(param_4 + 0x40) * 5.0 + 5.0) *
             0.5;
    *param_3 = fVar12;
    param_3[2] = ((float)iVar13 * 5.0 + (float)iVar14 * 5.0 + 5.0) * 0.5;
    *param_2 = fVar12;
    param_2[1] = param_3[1];
    param_2[2] = param_3[2];
    return true;
  }
  FUN_0207da6c(param_1,auStack_fc,auStack_100,lVar8,param_4 + 0x20);
  puVar3 = PTR_DAT_04bb43c0;
  local_68 = 0;
  local_78 = PTR_DAT_04bc0510 + 0x10;
  local_70 = *(undefined4 *)(param_4 + 0x58);
  uStack_6c = *(undefined4 *)(param_4 + 0x5c);
  lVar11 = *(long *)PTR_DAT_04bb43c0;
  uVar5 = FUN_0277d6c4(&local_70);
  if (*(long *)puVar3 != 0) {
    lVar11 = *(long *)(lVar11 + 0x57e58);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
    if ((uVar5 < *(uint *)(lVar11 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
      lVar11 = *(long *)PTR_DAT_04bc0428;
      uVar5 = FUN_0277d6c4(lVar8);
      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
      if ((uVar5 < *(uint *)(lVar11 + 0x1d8)) &&
         (((puVar9 = *(uint **)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar5 * 8),
           puVar9 != (uint *)0x0 && (uVar5 = *puVar9, uVar5 != 0)) &&
          (puVar9 != (uint *)(ulong)uVar5)))) {
        puVar10 = (uint *)((long)puVar9 - (long)(ulong)uVar5);
        if (((*puVar10 != 0) && (uVar5 = puVar10[1], uVar5 != 0)) &&
           ((ulong)(ushort)puVar10[2] != 0)) {
          lVar8 = 0xc;
          if (*(char *)((long)puVar10 + 10) != '\0') {
            lVar8 = 0x1c;
          }
          lVar8 = (long)puVar10 + lVar8 + (ulong)(ushort)puVar10[2] * 8;
          if (lVar8 != 0) {
            uVar1 = 0;
            if ((ulong)uVar5 != 0) {
              uVar1 = (uint)((ulong)((long)puVar9 - lVar8) / (ulong)uVar5);
            }
            if (*puVar10 <= uVar1) {
              uVar1 = 0xffffffff;
            }
            if (((uVar1 < *(uint *)PTR_DAT_04bc0108) &&
                (uVar2 = *(ushort *)(*(long *)(PTR_DAT_04bc0108 + 8) + (long)(int)uVar1 * 2),
                uVar2 < 0x13)) &&
               ((uVar15 = 0x3f800000, uVar2 == 1 ||
                ((uVar2 == 0xb &&
                 (pfVar7 = (float *)(**(code **)(*(long *)(*(long *)PTR_DAT_04bb3968 + 0x24a8) +
                                                0xf0))(*(long *)PTR_DAT_04bb3968 + 0x24a8),
                 *pfVar7 / 10.0 < local_f8)))))) goto LAB_02080d4c;
          }
        }
      }
    }
  }
  uVar15 = 0;
LAB_02080d4c:
  lVar8 = *(long *)(*(long *)(*param_1 + 8) + 0x68) + 0x278;
  if ((*(byte *)(param_1 + 0x1b) & 1) == 0) {
    FUN_021f9ff0(uVar15,param_2,param_3,lVar8,param_4);
  }
  else {
    FUN_021fa700(uVar15,param_2,param_3,lVar8,param_4,param_5);
  }
  bVar4 = true;
  if ((*param_2 == 0.0) && (param_2[1] == 0.0)) {
    bVar4 = param_2[2] != 0.0;
  }
  return bVar4;
}



byte FUN_014f1144(undefined8 param_1,long param_2,undefined4 *param_3,long param_4,
                 undefined4 *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  undefined1 uVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  long lVar13;
  undefined8 *puVar14;
  float fVar15;
  float fVar16;
  undefined *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined *local_80;
  undefined8 local_78;
  undefined *local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  long local_60;
  undefined4 local_54;
  
  uVar10 = FUN_0277e294(param_3);
  puVar4 = PTR_DAT_04bbbc68;
  if ((uVar10 & 1) != 0) {
    local_90 = (undefined *)((ulong)local_90._4_4_ << 0x20);
    lVar13 = *(long *)PTR_DAT_04bb2720;
    if (lVar13 == 0) {
      puVar14 = &DAT_055c04a0;
    }
    else {
      puVar14 = &DAT_055c04a0;
      if (*(long *)(lVar13 + 0x330) != 0) {
        puVar14 = (undefined8 *)
                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                            (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar13 + 0x338));
        iVar7 = FUN_006bd550(*puVar14,0);
        puVar14 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar7 != 0x758f7eaf) {
          puVar14 = &DAT_055c04a0;
        }
      }
    }
    local_90 = (undefined *)CONCAT44(*(undefined4 *)(puVar14 + 7),(undefined4)local_90);
    uVar5 = FUN_017baf44();
    local_88 = CONCAT71(local_88._1_7_,uVar5) & 0xffffffffffffff01;
    local_98 = PTR_DAT_04bb3140 + 0x10;
    puVar11 = (undefined4 *)FUN_014fbd50(&local_98,*param_5,param_4);
    local_70 = (undefined *)CONCAT44(local_70._4_4_,*puVar11);
    bVar6 = FUN_014f1734(param_2,&local_70,param_3);
    goto LAB_014f15d4;
  }
  lVar13 = *(long *)PTR_DAT_04bbbc68;
  if (((((lVar13 == 0) || (*(long *)(lVar13 + 0xb0) == 0)) ||
       (*(long *)(*(long *)(lVar13 + 0xb0) + 8) == 0)) ||
      ((*(long *)(lVar13 + 0x488) == 0 || (*(long *)(*(long *)(lVar13 + 0x488) + 8) == 0)))) ||
     ((*(long *)(lVar13 + 0x2b0) == 0 || (*(long *)(*(long *)(lVar13 + 0x2b0) + 8) == 0)))) {
LAB_014f1354:
    uVar10 = FUN_0277e158(param_3);
    puVar4 = PTR_DAT_04bb43c0;
    if ((uVar10 & 1) == 0) {
      bVar6 = 0;
      goto LAB_014f15d4;
    }
    local_60 = 0;
    local_70 = PTR_DAT_04bc0510 + 0x10;
    local_68 = *param_3;
    uStack_64 = param_3[1];
    lVar13 = *(long *)PTR_DAT_04bb43c0;
    uVar8 = FUN_0277d6c4(&local_68);
    if (*(long *)puVar4 != 0) {
      lVar13 = *(long *)(lVar13 + 0x57e58);
      uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
      if ((uVar8 < *(uint *)(lVar13 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
        lVar13 = *(long *)PTR_DAT_04bc0428;
        uVar8 = FUN_0277d6c4(param_3);
        uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
        if (uVar8 < *(uint *)(lVar13 + 0x1d8)) {
          lVar13 = *(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar8 * 8);
          if (lVar13 != 0) {
            local_60 = lVar13;
          }
        }
      }
    }
    local_88 = 0;
    local_98 = PTR_DAT_04bbc1a0 + 0x10;
    local_90 = PTR_DAT_04bb2010 + 0x10;
    local_78 = 0;
    local_80 = local_90;
    FUN_01afb480(&local_70,&local_98);
    iVar7 = (int)local_88 + *(int *)(param_4 + 8);
    iVar1 = (int)local_78 + *(int *)(param_4 + 8);
    iVar2 = local_88._4_4_ + *(int *)(param_4 + 0xc);
    iVar3 = local_78._4_4_ + *(int *)(param_4 + 0xc);
    local_88 = CONCAT44(iVar2,iVar7);
    local_78 = CONCAT44(iVar3,iVar1);
    iVar9 = FUN_01afa5ec(&local_70);
    uVar12 = *param_5;
    *(undefined4 *)(param_2 + 0x2c) = 0;
    *(float *)(param_2 + 0x28) = ((float)iVar7 * 5.0 + (float)iVar1 * 5.0 + 5.0) * 0.5;
    *(float *)(param_2 + 0x30) = ((float)iVar2 * 5.0 + (float)iVar3 * 5.0 + 5.0) * 0.5;
    local_54 = (undefined4)(long)((float)iVar9 * 90.0 * 11930465.0);
    *(undefined4 *)(param_2 + 0x34) = local_54;
    *(undefined4 *)(param_2 + 0x38) = uVar12;
    *(undefined2 *)(param_2 + 0x60) = *(undefined2 *)param_3;
    *(undefined1 *)(param_2 + 0x62) = *(undefined1 *)((long)param_3 + 2);
    *(undefined1 *)(param_2 + 99) = *(undefined1 *)((long)param_3 + 3);
    *(undefined4 *)(param_2 + 100) = param_3[1];
    *(long *)(param_2 + 0xa0) = (long)(PTR_DAT_04bbcf10 + 0x10);
    puVar4 = PTR_DAT_04bb37e0;
    *(undefined4 *)(param_2 + 0x98) = 1;
    *(undefined8 *)(param_2 + 0xb4) = 0;
    *(undefined8 *)(param_2 + 0xbc) = 0;
    *(undefined8 *)(param_2 + 0xc4) = 0;
    *(undefined8 *)(param_2 + 0xcc) = 0;
    *(undefined8 *)(param_2 + 0xdc) = 0;
    *(undefined1 *)(param_2 + 0xe4) = 1;
    uVar12 = *(undefined4 *)puVar4;
    *(undefined4 *)(param_2 + 0xb0) = *(undefined4 *)(puVar4 + 4);
    *(undefined4 *)(param_2 + 0xa8) = 0;
    *(undefined4 *)(param_2 + 0xac) = uVar12;
    *(undefined8 *)(param_2 + 0xd4) = 0x41100000;
    FUN_014be910((long *)(param_2 + 0xa0),(undefined2 *)(param_2 + 0x60),(float *)(param_2 + 0x28),
                 &local_54);
    *(undefined4 *)(param_2 + 0x18) = 2;
    iVar7 = *(int *)(param_2 + 0x18);
  }
  else {
    uVar8 = FUN_0277d6c4(param_3);
    uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
    if ((*(uint *)(lVar13 + 0x1d8) <= uVar8) ||
       (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar8 * 8) == 0)) goto LAB_014f1354;
    FUN_0124c030(&local_98,param_3);
    uVar10 = FUN_01250070(&local_98);
    if ((uVar10 & 1) == 0) goto LAB_014f1354;
    uVar12 = *param_5;
    lVar13 = *(long *)puVar4;
    fVar16 = ((float)*(int *)(param_4 + 8) * 5.0 + (float)(*(int *)(param_4 + 8) + 1) * 5.0 + 5.0) *
             0.5;
    fVar15 = ((float)*(int *)(param_4 + 0xc) * 5.0 +
             (float)(*(int *)(param_4 + 0xc) + 1) * 5.0 + 5.0) * 0.5;
    if ((((lVar13 == 0) || (*(long *)(lVar13 + 0xb0) == 0)) ||
        (*(long *)(*(long *)(lVar13 + 0xb0) + 8) == 0)) ||
       (((*(long *)(lVar13 + 0x488) == 0 || (*(long *)(*(long *)(lVar13 + 0x488) + 8) == 0)) ||
        ((*(long *)(lVar13 + 0x2b0) == 0 || (*(long *)(*(long *)(lVar13 + 0x2b0) + 8) == 0)))))) {
LAB_014f169c:
      *(undefined4 *)(param_2 + 0x2c) = 0;
      *(float *)(param_2 + 0x28) = fVar16;
      *(float *)(param_2 + 0x30) = fVar15;
      *(undefined4 *)(param_2 + 0x34) = 0;
      *(undefined4 *)(param_2 + 0x38) = uVar12;
      *(undefined2 *)(param_2 + 0x60) = *(undefined2 *)param_3;
      puVar4 = PTR_DAT_04bbbc30;
      *(undefined1 *)(param_2 + 0x62) = *(undefined1 *)((long)param_3 + 2);
      *(undefined1 *)(param_2 + 99) = *(undefined1 *)((long)param_3 + 3);
      uVar12 = param_3[1];
      *(undefined **)(param_2 + 0xa0) = puVar4 + 0x10;
      puVar4 = PTR_DAT_04bb37e0;
      *(undefined4 *)(param_2 + 0x98) = 4;
      *(undefined8 *)(param_2 + 0xb4) = 0;
      *(undefined8 *)(param_2 + 0xbc) = 0;
      *(undefined8 *)(param_2 + 0xc4) = 0;
      *(undefined4 *)(param_2 + 100) = uVar12;
      uVar12 = *(undefined4 *)puVar4;
      *(undefined4 *)(param_2 + 0xb0) = *(undefined4 *)(puVar4 + 4);
      *(undefined4 *)(param_2 + 0xa8) = 0;
      *(undefined4 *)(param_2 + 0xac) = uVar12;
      *(undefined8 *)(param_2 + 0xcc) = 0x41100000;
      *(undefined1 *)(param_2 + 0xd4) = 1;
      FUN_011f0810();
      uVar12 = 6;
    }
    else {
      uVar8 = FUN_0277d6c4(param_3);
      uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
      if ((*(uint *)(lVar13 + 0x1d8) <= uVar8) ||
         (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar8 * 8) == 0)) goto LAB_014f169c;
      FUN_0124c030(&local_98,param_3);
      iVar7 = FUN_0123db50(&local_90,local_88);
      if ((iVar7 != 0x21) && (iVar7 = FUN_0123db50(&local_90,local_88), iVar7 != 0x22))
      goto LAB_014f169c;
      *(undefined4 *)(param_2 + 0x2c) = 0;
      *(float *)(param_2 + 0x28) = fVar16;
      *(float *)(param_2 + 0x30) = fVar15;
      *(undefined4 *)(param_2 + 0x34) = 0;
      *(undefined4 *)(param_2 + 0x38) = uVar12;
      *(undefined2 *)(param_2 + 0x60) = *(undefined2 *)param_3;
      puVar4 = PTR_DAT_04bbbc30;
      *(undefined1 *)(param_2 + 0x62) = *(undefined1 *)((long)param_3 + 2);
      *(undefined1 *)(param_2 + 99) = *(undefined1 *)((long)param_3 + 3);
      uVar12 = param_3[1];
      *(undefined **)(param_2 + 0xa0) = puVar4 + 0x10;
      puVar4 = PTR_DAT_04bb37e0;
      *(undefined4 *)(param_2 + 0x98) = 5;
      *(undefined8 *)(param_2 + 0xb4) = 0;
      *(undefined8 *)(param_2 + 0xbc) = 0;
      *(undefined8 *)(param_2 + 0xc4) = 0;
      *(undefined4 *)(param_2 + 100) = uVar12;
      uVar12 = *(undefined4 *)puVar4;
      *(undefined4 *)(param_2 + 0xb0) = *(undefined4 *)(puVar4 + 4);
      *(undefined4 *)(param_2 + 0xa8) = 0;
      *(undefined4 *)(param_2 + 0xac) = uVar12;
      *(undefined8 *)(param_2 + 0xcc) = 0x41100000;
      *(undefined1 *)(param_2 + 0xd4) = 1;
      FUN_011f0810();
      uVar12 = 7;
    }
    *(undefined4 *)(param_2 + 0x18) = uVar12;
    iVar7 = *(int *)(param_2 + 0x18);
  }
  bVar6 = iVar7 != 0;
LAB_014f15d4:
  return bVar6 & 1;
}


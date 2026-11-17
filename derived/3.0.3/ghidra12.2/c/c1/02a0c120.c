
undefined8 FUN_02a0c120(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  byte bVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  byte *pbVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 local_f8;
  undefined **local_f0;
  undefined8 uStack_e8;
  undefined *local_e0;
  undefined2 local_d8;
  undefined1 local_d6;
  undefined8 local_d0;
  undefined8 uStack_c8;
  long local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  long lStack_a8;
  undefined *local_a0;
  undefined *puStack_98;
  undefined1 local_90;
  undefined8 local_88;
  byte *pbStack_80;
  undefined8 local_78;
  undefined *puStack_70;
  undefined8 local_68;
  
  pbVar6 = *(byte **)(param_1 + 8);
  if ((pbVar6 == (byte *)0x0) || ((*pbVar6 >> 1 & 1) == 0)) {
    FUN_03f459a0(param_1 + 0x10);
    FUN_03f459a0(*(long *)(param_1 + 8) + 0x2c0);
    pbVar6 = *(byte **)(param_1 + 8);
    bVar2 = *pbVar6;
    if ((bVar2 >> 3 & 1) != 0) {
      if (*(long *)(param_1 + 0x20) != 0) {
        FUN_03f45838(param_1 + 0x10);
        pbVar6 = *(byte **)(param_1 + 8);
        if (pbVar6 == (byte *)0x0) goto LAB_02a0c248;
      }
      local_e0 = PTR_DAT_04bcb2c0;
      local_d6 = 1;
      local_d8 = 1;
      local_a0 = PTR_DAT_04bb2020 + 0x10;
      puStack_98 = PTR_DAT_04bb2120;
      lVar8 = *(long *)PTR_DAT_04bb28b0;
      *(undefined8 *)(param_1 + 8) = 0;
      local_90 = 0;
      local_88 = 0;
      local_e0 = local_e0 + 0x10;
      local_78 = 0;
      local_c0 = lVar8 + 0x598;
      uStack_b8 = 0;
      lStack_a8 = lVar8 + 0x5b8;
      local_b0 = 0;
      local_d0 = *(undefined8 *)(lVar8 + 0x198);
      uStack_c8 = 0;
      local_f8 = 0;
      local_68 = *(undefined8 *)(PTR_PTR_04bb2238 + 8);
      local_f0 = &local_e0;
      uStack_e8 = 0;
      pbStack_80 = pbVar6;
      puStack_70 = local_a0;
      FUN_03f45184(lVar8 + 0x1a8,&local_f8);
      pbVar6 = *(byte **)(param_1 + 8);
      if (pbVar6 == (byte *)0x0) goto LAB_02a0c248;
      goto LAB_02a0c22c;
    }
  }
  else {
LAB_02a0c22c:
    bVar2 = *pbVar6;
  }
  if (((bVar2 >> 1 & 1) != 0) &&
     (uVar3 = FUN_02a1f4d0(pbVar6 + 0x10,param_2,param_3), (uVar3 & 1) != 0)) {
    return 1;
  }
LAB_02a0c248:
  if (*(long *)(param_1 + 0x38) != param_1 + 0x30) {
    lVar9 = (long)*(int *)(param_1 + 0x44);
    lVar8 = *(long *)(param_1 + 0x38) - lVar9;
    do {
      iVar1 = *(int *)(lVar8 + 0x10);
      if (iVar1 != 0) {
        lVar10 = *(long *)(lVar8 + 0x18);
        uVar3 = 0;
        do {
          lVar7 = *(long *)(lVar10 + (-(uVar3 >> 0x1f) & 0xfffffff800000000 | uVar3 << 3));
          if (((lVar7 != 0) &&
              (puVar4 = *(undefined8 **)(lVar7 + 0x28),
              **(char **)(param_3 + 8) != '\0' && puVar4 != (undefined8 *)0x0)) &&
             (uVar5 = (**(code **)*puVar4)(puVar4,param_2,param_3), (uVar5 & 1) != 0)) {
            return 1;
          }
          uVar5 = uVar3 + 1;
          uVar3 = uVar5 & 0xffffffff;
        } while (iVar1 != (int)uVar5);
      }
      lVar8 = *(long *)(lVar8 + lVar9 + 8) - lVar9;
    } while (lVar8 != (param_1 + 0x30) - lVar9);
  }
  return 0;
}


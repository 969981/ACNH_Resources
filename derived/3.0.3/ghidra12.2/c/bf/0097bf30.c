
undefined8 FUN_0097bf30(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  uint uVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  undefined *local_78;
  uint local_70;
  uint local_6c;
  undefined4 local_64;
  
  lVar17 = *(long *)PTR_DAT_04bb27c8;
  uVar2 = 0x32;
  if (*(int *)(*(long *)PTR_DAT_04bb27a8 + 0x200) != 1) {
    uVar2 = 1;
  }
  uVar10 = FUN_00971f80(*(undefined8 *)(lVar17 + 0x90),param_1,0);
  puVar9 = PTR_DAT_04bb46c8;
  uVar11 = 0;
  if ((uVar10 & 1) != 0) {
    uVar3 = *(uint *)(param_1 + 0x10);
    local_6c = *(uint *)(param_1 + 0x14);
    local_78 = PTR_DAT_04bb2010 + 0x10;
    uVar1 = *(int *)(param_1 + 0x24) + 1;
    if (uVar1 == local_6c) {
      uVar11 = 1;
    }
    else {
      local_70 = uVar3;
      while (((int)local_70 < 0 || ((int)local_6c < 0))) {
LAB_0097c040:
        uVar10 = FUN_01385fe0(&local_78,uVar2);
        if (((uVar10 & 1) != 0) || ((int)local_70 < 0)) goto LAB_0097c20c;
        if ((int)local_6c < 0) {
          return 0;
        }
        lVar12 = *(long *)(lVar17 + 0x90);
        if (*(uint *)(lVar12 + 0x38) <= local_70) {
          return 0;
        }
        if (*(uint *)(lVar12 + 0x3c) <= local_6c) {
          return 0;
        }
        uVar8 = local_70 + *(uint *)(lVar12 + 0x38) * local_6c;
        if (*(uint *)(lVar12 + 0x48) <= uVar8) {
          return 0;
        }
        if (*(long *)(lVar12 + 0x50) == 0) {
          return 0;
        }
        lVar12 = *(long *)(lVar12 + 0x50) + (long)(int)uVar8 * 0x34;
        bVar4 = *(byte *)(lVar12 + 0x30);
        uVar16 = (ulong)bVar4;
        bVar5 = *(byte *)(lVar12 + 0x31);
        uVar15 = (ulong)bVar5;
        bVar6 = *(byte *)(lVar12 + 0x32);
        uVar14 = (ulong)bVar6;
        bVar7 = *(byte *)(lVar12 + 0x33);
        uVar13 = (ulong)bVar7;
        uVar10 = FUN_00980630(*(undefined8 *)puVar9,uVar16);
        if ((((((uVar10 & 1) != 0) ||
              (((bVar4 < 0x2f && ((1L << (uVar16 & 0x3f) & 0x480000000080U) != 0)) ||
               (uVar10 = FUN_00981090(*(undefined8 *)puVar9,uVar16), (uVar10 & 1) == 0)))) ||
             (uVar10 = FUN_00980630(*(undefined8 *)puVar9,uVar15), (uVar10 & 1) != 0)) ||
            (((bVar5 < 0x2f && ((1L << (uVar15 & 0x3f) & 0x480000000080U) != 0)) ||
             ((uVar10 = FUN_00981090(*(undefined8 *)puVar9,uVar15), (uVar10 & 1) == 0 ||
              (uVar10 = FUN_00980630(*(undefined8 *)puVar9,uVar14), (uVar10 & 1) != 0)))))) ||
           (((bVar6 < 0x2f && ((1L << (uVar14 & 0x3f) & 0x480000000080U) != 0)) ||
            ((uVar10 = FUN_00981090(*(undefined8 *)puVar9,uVar14), (uVar10 & 1) == 0 ||
             ((uVar10 = FUN_00980630(*(undefined8 *)puVar9,uVar13), (uVar10 & 1) != 0 ||
              (((bVar7 < 0x2f && ((1L << (uVar13 & 0x3f) & 0x480000000080U) != 0)) ||
               (uVar10 = FUN_00981090(*(undefined8 *)puVar9,uVar13), (uVar10 & 1) == 0))))))))))
        goto LAB_0097c20c;
        if ((int)local_70 < *(int *)(param_1 + 0x20)) {
          local_70 = local_70 + 1;
        }
        else {
          local_70 = *(uint *)(param_1 + 0x10);
          local_6c = local_6c + 1;
        }
        if ((uVar3 == local_70) && (uVar1 == local_6c)) {
          return 1;
        }
      }
      lVar12 = *(long *)(lVar17 + 0x90);
      if (*(uint *)(lVar12 + 0x38) <= local_70 || *(uint *)(lVar12 + 0x3c) <= local_6c)
      goto LAB_0097c040;
      uVar8 = local_70 + *(uint *)(lVar12 + 0x38) * local_6c;
      if ((*(uint *)(lVar12 + 0x68) <= uVar8 || *(long *)(lVar12 + 0x70) == 0) ||
         (local_64 = 2, (*(uint *)(*(long *)(lVar12 + 0x70) + (long)(int)uVar8 * 4) >> 2 & 1) == 0))
      goto LAB_0097c040;
LAB_0097c20c:
      uVar11 = 0;
    }
  }
  return uVar11;
}


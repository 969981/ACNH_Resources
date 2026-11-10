
undefined8
FUN_001bf030(long param_1,undefined4 param_2,ushort *param_3,uint param_4,byte param_5,ulong param_6
            ,uint param_7)

{
  uint *puVar1;
  ushort uVar2;
  undefined *puVar3;
  bool bVar4;
  uint uVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  ulong local_100;
  long *plStack_f8;
  undefined1 auStack_f0 [144];
  
  puVar3 = PTR_DAT_04bcc108;
  if (*PTR_DAT_04bcc108 == '\0') {
    plVar6 = (long *)FUN_00185a6c(0x1f0);
    FUN_001d92ec(plVar6,param_4,param_1,*(undefined4 *)(param_1 + 0x98));
    uVar7 = FUN_001e2b80(plVar6);
  }
  else {
    lVar14 = *(long *)(param_1 + 0x2b0);
    plVar6 = (long *)FUN_00185a6c(0x478);
    if (plVar6 != (long *)0x0) {
      FUN_001dab24(plVar6,param_4,param_1,*(undefined4 *)(param_1 + 0x98),lVar14 + 0x2c8,
                   *(undefined8 *)(param_1 + 0x510));
    }
    plVar6[0x8e] = param_1 + 0x558;
    uVar7 = FUN_001e2b80(plVar6);
  }
  if ((uVar7 & 1) == 0) {
    (**(code **)(*plVar6 + 8))(plVar6);
    return 0;
  }
  FUN_001e1500(auStack_f0);
  FUN_001e17d0(auStack_f0,param_2);
  *(byte *)(plVar6 + 0x3d) = param_5 & 1;
  uVar7 = (**(code **)(*plVar6 + 0x10))(plVar6,auStack_f0,param_7 & 1);
  if ((uVar7 & 1) != 0) {
    uVar5 = FUN_001e14f8(auStack_f0);
    *param_3 = (ushort)uVar5;
    local_100 = CONCAT44(uVar5,param_4) & 0xffffffffffff;
    puVar10 = *(uint **)(param_1 + 0x2d0);
    lVar14 = (long)puVar10 - (long)*(uint **)(param_1 + 0x2c8);
    plStack_f8 = plVar6;
    if (lVar14 == 0) {
      puVar11 = puVar10;
LAB_001bf1e0:
      FUN_001de990(param_1 + 0x2c8,puVar11,&local_100);
    }
    else {
      uVar7 = lVar14 >> 4;
      puVar9 = *(uint **)(param_1 + 0x2c8);
      do {
        uVar12 = uVar7 >> 1;
        puVar11 = puVar9 + uVar12 * 4;
        bVar4 = *puVar11 < param_4;
        if ((uint)(ushort)puVar11[1] != (uVar5 & 0xffff)) {
          bVar4 = (uint)(ushort)puVar11[1] < (uVar5 & 0xffff);
        }
        puVar11 = puVar11 + 4;
        uVar7 = uVar7 + ~uVar12;
        if (!bVar4) {
          puVar11 = puVar9;
          uVar7 = uVar12;
        }
        puVar9 = puVar11;
      } while (uVar7 != 0);
      if (puVar10 == puVar11) goto LAB_001bf1e0;
      bVar4 = param_4 < *puVar11;
      if ((uVar5 & 0xffff) != (uint)(ushort)puVar11[1]) {
        bVar4 = (uVar5 & 0xffff) < (uint)(ushort)puVar11[1];
      }
      if (bVar4) goto LAB_001bf1e0;
    }
    if (((*puVar3 == '\0') || (plVar8 = *(long **)(param_1 + 0x2b0), plVar8 == (long *)0x0)) ||
       (uVar7 = (**(code **)(*plVar8 + 0x10))(plVar8,*param_3,plVar6), (uVar7 & 1) != 0)) {
      if (((param_6 & 1) == 0) || (uVar7 = FUN_001e4e68(plVar6), (uVar7 & 1) != 0)) {
        uVar13 = 1;
        goto LAB_001bf310;
      }
    }
    else {
      puVar10 = *(uint **)(param_1 + 0x2c8);
      puVar11 = *(uint **)(param_1 + 0x2d0);
      uVar2 = *param_3;
      if ((long)puVar11 - (long)puVar10 != 0) {
        uVar7 = (long)puVar11 - (long)puVar10 >> 4;
        puVar9 = puVar10;
        do {
          uVar12 = uVar7 >> 1;
          puVar10 = puVar9 + uVar12 * 4;
          bVar4 = *puVar10 < param_4;
          if ((ushort)puVar10[1] != uVar2) {
            bVar4 = (ushort)puVar10[1] < uVar2;
          }
          puVar10 = puVar10 + 4;
          uVar7 = uVar7 + ~uVar12;
          if (!bVar4) {
            puVar10 = puVar9;
            uVar7 = uVar12;
          }
          puVar9 = puVar10;
        } while (uVar7 != 0);
      }
      if (puVar10 != puVar11) {
        bVar4 = param_4 < *puVar10;
        if (uVar2 != (ushort)puVar10[1]) {
          bVar4 = uVar2 < (ushort)puVar10[1];
        }
        if (!bVar4) {
          if (puVar10 + 4 != puVar11) {
            puVar9 = puVar10;
            do {
              puVar10 = puVar9 + 4;
              *puVar9 = *puVar10;
              *(short *)(puVar9 + 1) = (short)puVar9[5];
              *(undefined8 *)(puVar9 + 2) = *(undefined8 *)(puVar9 + 6);
              puVar1 = puVar9 + 8;
              puVar9 = puVar10;
            } while (puVar1 != puVar11);
          }
          *(uint **)(param_1 + 0x2d0) = puVar10;
        }
      }
    }
  }
  FUN_001e28f0(plVar6);
  (**(code **)(*plVar6 + 8))(plVar6);
  uVar13 = 0;
  *param_3 = 0;
LAB_001bf310:
  FUN_001e1868(auStack_f0);
  return uVar13;
}



bool FUN_011e7000(undefined8 param_1,long param_2)

{
  uint uVar1;
  uint *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  char cVar7;
  uint *puVar8;
  ulong uVar9;
  int *piVar10;
  long lVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 uStack_10c;
  float local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  uint local_fc;
  undefined4 uStack_f8;
  uint local_f4;
  undefined4 uStack_f0;
  undefined *local_e8;
  undefined1 *puStack_e0;
  undefined4 local_d8;
  undefined1 local_d4 [127];
  undefined1 local_55;
  undefined4 local_50;
  undefined2 local_4c;
  long local_48;
  
  uVar12 = *(undefined4 *)(param_2 + 0x28);
  uVar13 = *(undefined4 *)(param_2 + 0x2c);
  fVar14 = *(float *)(param_2 + 0x30);
  lVar11 = *(long *)PTR_DAT_04bbbc68;
  fVar15 = fVar14;
  if (((((lVar11 != 0) && (*(long *)(lVar11 + 0xb0) != 0)) &&
       (*(long *)(*(long *)(lVar11 + 0xb0) + 8) != 0)) &&
      ((*(long *)(lVar11 + 0x488) != 0 && (*(long *)(*(long *)(lVar11 + 0x488) + 8) != 0)))) &&
     ((*(long *)(lVar11 + 0x2b0) != 0 && (*(long *)(*(long *)(lVar11 + 0x2b0) + 8) != 0)))) {
    uVar5 = FUN_0277d6c4(param_2);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
    if ((uVar5 < *(uint *)(lVar11 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
      FUN_0124c030(&local_118,param_2);
      iVar6 = FUN_0123db50(&local_110,CONCAT44(uStack_104,local_108));
      puVar4 = PTR_DAT_04bbbc78;
      puVar3 = PTR_DAT_04bbbc70;
      if ((iVar6 - 0xbU < 7) &&
         ((puVar2 = (uint *)CONCAT44(uStack_104,local_108), puVar2 != (uint *)0x0 &&
          (uVar5 = *puVar2, uVar5 != 0)))) {
        cVar7 = *PTR_DAT_04bbbc70;
        do {
          if (cVar7 == '\0') {
            cVar7 = '\x01';
            *(undefined8 *)puVar4 = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
            *puVar3 = 1;
            *(undefined4 *)(puVar4 + 0x60) = 0xffffffff;
            *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x30) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x38) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x40) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x48) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x50) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x58) = 0xffffffffffffffff;
            uVar5 = *puVar2;
          }
          else {
            uVar1 = *(uint *)(puVar4 + 0x4c);
            if (-1 < (int)uVar1) {
              if (((byte *)((ulong)uVar1 + (long)puVar2) != (byte *)0x0) &&
                 (fVar15 = fVar14 + 2.0, *(byte *)((ulong)uVar1 + (long)puVar2) < 2)) {
                fVar15 = fVar14;
              }
              break;
            }
            if (uVar1 != 0xffffffff) break;
          }
          puVar8 = (uint *)(ulong)uVar5;
          if ((puVar8 == (uint *)0x0) || (puVar2 == puVar8)) break;
          lVar11 = 0xc;
          if (*(char *)((long)puVar2 + (10 - (long)puVar8)) != '\0') {
            lVar11 = 0x1c;
          }
          lVar11 = (long)puVar2 + (lVar11 - (long)puVar8);
          if (lVar11 == 0) break;
          uVar9 = (ulong)*(ushort *)((long)puVar2 + (8 - (long)puVar8));
          *(undefined4 *)(puVar4 + 0x4c) = 0xfffffffe;
          if (uVar9 == 0) break;
          piVar10 = (int *)(lVar11 + 4);
          while (piVar10[-1] != -0xa58ccc9) {
            piVar10 = piVar10 + 2;
            uVar9 = uVar9 - 1;
            if (uVar9 == 0) goto LAB_011e71c0;
          }
          iVar6 = 0;
          if (*piVar10 != -1) {
            iVar6 = *piVar10;
          }
          *(int *)(puVar4 + 0x4c) = iVar6;
          uVar5 = *puVar2;
          if (uVar5 == 0) break;
        } while( true );
      }
    }
  }
LAB_011e71c0:
  local_118 = 0x1800000000;
  local_fc = 0;
  local_d8 = 0x80;
  local_50 = 7;
  local_55 = 0;
  puStack_e0 = local_d4;
  local_d4[0] = 0;
  local_e8 = PTR_DAT_04bb2d88 + 0x10;
  local_4c = 0x200;
  uStack_104 = 0x3f800000;
  uStack_100 = 0;
  if (*(uint *)(param_2 + 0x18) < 0x1000) {
    if (*(uint *)(param_2 + 0x1c) < 0x1000) {
      local_fc = *(int *)(param_2 + 0x20) << 0x18 | *(uint *)(param_2 + 0x1c) << 0xc |
                 *(uint *)(param_2 + 0x18);
    }
    else {
      local_fc = 0;
    }
  }
  uStack_f8 = *(undefined4 *)(param_2 + 100);
  local_f4 = (uint)*(byte *)(param_2 + 0x6f) | *(int *)(param_2 + 0x24) << 8;
  uStack_f0 = 1;
  local_110 = uVar12;
  uStack_10c = uVar13;
  local_108 = fVar15;
  local_48 = param_2;
  iVar6 = FUN_007402e0(*(undefined8 *)PTR_DAT_04bb27c0,&local_118,0,1);
  if (iVar6 != 0) {
    *(int *)(param_2 + 0xc) = iVar6;
    *(ushort *)(param_2 + 0x68) = *(ushort *)(param_2 + 0x68) | 4;
  }
  return iVar6 != 0;
}


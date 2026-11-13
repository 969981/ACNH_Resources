
void FUN_011c11b0(byte *param_1,undefined8 param_2)

{
  undefined *puVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  char cVar7;
  uint *puVar8;
  ulong uVar9;
  int *piVar10;
  long lVar11;
  undefined *local_58;
  char *pcStack_50;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  uint *local_38;
  byte local_18 [4];
  undefined4 local_14;
  
  lVar11 = *(long *)PTR_DAT_04bbbc68;
  if (((((lVar11 != 0) && (*(long *)(lVar11 + 0xb0) != 0)) &&
       (*(long *)(*(long *)(lVar11 + 0xb0) + 8) != 0)) &&
      ((*(long *)(lVar11 + 0x488) != 0 && (*(long *)(*(long *)(lVar11 + 0x488) + 8) != 0)))) &&
     ((*(long *)(lVar11 + 0x2b0) != 0 && (*(long *)(*(long *)(lVar11 + 0x2b0) + 8) != 0)))) {
    uVar5 = FUN_0277d6c4(param_2);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
    if ((uVar5 < *(uint *)(lVar11 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
      FUN_0124c030(auStack_48,param_2);
      iVar6 = FUN_0123db50(auStack_40,local_38);
      if (iVar6 - 0x23U < 9) {
        puVar1 = PTR_DAT_04bb2020 + 0x10;
        pcStack_50 = "WaterPlant";
        local_58 = puVar1;
        FUN_0279a9f0(param_1,&local_58,1);
        pcStack_50 = "WaterPlant";
        local_58 = puVar1;
        FUN_0279b044(param_1,&local_58,1);
        pcStack_50 = "WaterPlant";
        local_58 = puVar1;
        FUN_00ad4d80(*(undefined8 *)PTR_DAT_04bb64a0,&local_58);
        pcStack_50 = "WaterFlowerCount";
        local_18[0] = *param_1;
        if (7 < local_18[0]) {
          local_18[0] = 0xff;
        }
        local_58 = puVar1;
        local_14 = FUN_02582fe0(local_18);
        FUN_021294b0(&local_58,1,&local_14);
      }
      else {
        iVar6 = FUN_0123db50(auStack_40,local_38);
        if (iVar6 - 0x12U < 6) {
          puVar1 = PTR_DAT_04bb2020 + 0x10;
          pcStack_50 = "WaterVegetable";
          local_58 = puVar1;
          FUN_0279a9f0(param_1,&local_58,1);
          pcStack_50 = "WaterVegetable";
          local_58 = puVar1;
          FUN_0279b044(param_1,&local_58,1);
          puVar4 = PTR_DAT_04bbbc78;
          puVar3 = PTR_DAT_04bbbc70;
          if ((local_38 != (uint *)0x0) && (uVar5 = *local_38, uVar5 != 0)) {
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
                uVar5 = *local_38;
              }
              else {
                uVar2 = *(uint *)(puVar4 + 0x4c);
                if (-1 < (int)uVar2) {
                  if (((byte *)((ulong)uVar2 + (long)local_38) != (byte *)0x0) &&
                     (2 < *(byte *)((ulong)uVar2 + (long)local_38))) {
                    return;
                  }
                  break;
                }
                if (uVar2 != 0xffffffff) break;
              }
              puVar8 = (uint *)(ulong)uVar5;
              if ((puVar8 == (uint *)0x0) || (local_38 == puVar8)) break;
              lVar11 = 0xc;
              if (*(char *)((long)local_38 + (10 - (long)puVar8)) != '\0') {
                lVar11 = 0x1c;
              }
              lVar11 = (long)local_38 + (lVar11 - (long)puVar8);
              if (lVar11 == 0) break;
              uVar9 = (ulong)*(ushort *)((long)local_38 + (8 - (long)puVar8));
              *(undefined4 *)(puVar4 + 0x4c) = 0xfffffffe;
              if (uVar9 == 0) break;
              piVar10 = (int *)(lVar11 + 4);
              while (piVar10[-1] != -0xa58ccc9) {
                piVar10 = piVar10 + 2;
                uVar9 = uVar9 - 1;
                if (uVar9 == 0) goto LAB_011c1448;
              }
              iVar6 = 0;
              if (*piVar10 != -1) {
                iVar6 = *piVar10;
              }
              *(int *)(puVar4 + 0x4c) = iVar6;
              uVar5 = *local_38;
              if (uVar5 == 0) break;
            } while( true );
          }
LAB_011c1448:
          pcStack_50 = "WaterVegetable";
          local_58 = puVar1;
          FUN_00ad4d80(*(undefined8 *)PTR_DAT_04bb64a0,&local_58);
        }
      }
    }
  }
  return;
}


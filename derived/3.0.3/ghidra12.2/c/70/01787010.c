
void FUN_01787010(long param_1,undefined8 param_2)

{
  undefined1 *__src;
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ushort uVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  int iVar8;
  uint *puVar9;
  char cVar10;
  undefined1 *puVar11;
  uint *puVar12;
  int *piVar13;
  long lVar14;
  undefined *local_1a0;
  undefined1 *puStack_198;
  long local_190 [20];
  undefined *local_f0;
  undefined1 *local_e8;
  undefined4 local_e0;
  undefined1 local_dc [127];
  undefined1 local_5d;
  undefined *local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  long local_48;
  
  puVar2 = PTR_DAT_04bb43c0;
  local_50 = *(undefined4 *)(param_1 + 0x1288);
  local_48 = 0;
  local_58 = PTR_DAT_04bc0510 + 0x10;
  uStack_4c = *(undefined4 *)(param_1 + 0x128c);
  lVar14 = *(long *)PTR_DAT_04bb43c0;
  uVar5 = FUN_0277d6c4(&local_50);
  if (*(long *)puVar2 != 0) {
    lVar14 = *(long *)(lVar14 + 0x57e58);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
    if ((uVar5 < *(uint *)(lVar14 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
      lVar14 = *(long *)PTR_DAT_04bc0428;
      uVar5 = FUN_0277d6c4(param_1 + 0x1288);
      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
      if ((uVar5 < *(uint *)(lVar14 + 0x1d8)) &&
         (lVar14 = *(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar5 * 8), lVar14 != 0)) {
        local_48 = lVar14;
      }
    }
  }
  uVar4 = FUN_01b020f0(&local_58);
  puVar3 = PTR_DAT_04bb5c60;
  puVar2 = PTR_DAT_04bb5c58;
  if (uVar4 != 0xffff) {
    lVar14 = *(long *)PTR_DAT_04bb46d0;
    uVar5 = (uint)uVar4 - (uint)*(ushort *)(lVar14 + 0x200);
    if ((uVar5 < *(uint *)(lVar14 + 0x1e0)) &&
       (puVar9 = *(uint **)(*(long *)(lVar14 + 0x1e8) + (long)(int)uVar5 * 8), puVar9 != (uint *)0x0
       )) {
      if (*puVar9 != 0) {
        cVar10 = *PTR_DAT_04bb5c58;
        do {
          if (cVar10 == '\0') {
            cVar10 = '\x01';
            *(undefined8 *)puVar3 = 0xffffffffffffffff;
            *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
            *puVar2 = 1;
            *(undefined8 *)(puVar3 + 0x30) = 0xffffffffffffffff;
            *(undefined8 *)(puVar3 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar3 + 0x18) = 0xffffffffffffffff;
            *(undefined8 *)(puVar3 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar3 + 0x28) = 0xffffffffffffffff;
          }
          else {
            uVar5 = *(uint *)(puVar3 + 0x2c);
            if (-1 < (int)uVar5) {
              puVar11 = (undefined1 *)((ulong)uVar5 + (long)puVar9);
              goto LAB_017871fc;
            }
            if (uVar5 != 0xffffffff) break;
          }
          puVar12 = (uint *)(ulong)*puVar9;
          puVar11 = (undefined1 *)0x0;
          if ((*puVar9 == 0) || (puVar9 == puVar12)) goto LAB_017871fc;
          lVar14 = 0xc;
          if (*(char *)((long)puVar9 + (10 - (long)puVar12)) != '\0') {
            lVar14 = 0x1c;
          }
          lVar14 = (long)puVar9 + (lVar14 - (long)puVar12);
          if (lVar14 == 0) break;
          uVar7 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar12));
          *(undefined4 *)(puVar3 + 0x2c) = 0xfffffffe;
          puVar11 = (undefined1 *)0x0;
          if (uVar7 == 0) goto LAB_017871fc;
          piVar13 = (int *)(lVar14 + 4);
          while (piVar13[-1] != 0x4b9c4229) {
            piVar13 = piVar13 + 2;
            uVar7 = uVar7 - 1;
            if (uVar7 == 0) {
              puVar11 = (undefined1 *)0x0;
              goto LAB_017871fc;
            }
          }
          iVar8 = 0;
          if (*piVar13 != -1) {
            iVar8 = *piVar13;
          }
          *(int *)(puVar3 + 0x2c) = iVar8;
        } while (*puVar9 != 0);
      }
      puVar11 = (undefined1 *)0x0;
LAB_017871fc:
      __src = *(undefined1 **)PTR_PTR_04bb5c50;
      if (puVar11 != (undefined1 *)0x0) {
        __src = puVar11;
      }
      if (__src != (undefined1 *)0x0) {
        local_5d = 0;
        local_dc[0] = 0;
        local_e0 = 0x80;
        local_f0 = PTR_DAT_04bb2d88 + 0x10;
        local_e8 = local_dc;
        if (local_dc != __src) {
          lVar14 = 0;
          do {
            if (__src[lVar14] == '\0') {
LAB_0178728c:
              iVar8 = (int)lVar14;
              if (0x7f < iVar8) {
                iVar8 = 0x7f;
              }
              goto LAB_01787298;
            }
            if (__src[lVar14 + 1] == '\0') {
              lVar14 = lVar14 + 1;
              goto LAB_0178728c;
            }
            if (__src[lVar14 + 2] == '\0') {
              lVar14 = lVar14 + 2;
              goto LAB_0178728c;
            }
            lVar14 = lVar14 + 3;
          } while (lVar14 != 0x80001);
          iVar8 = 0;
LAB_01787298:
          memcpy(local_dc,__src,(long)iVar8);
          local_dc[iVar8] = 0;
        }
        lVar14 = FUN_0074f690(param_2,&local_f0);
        if ((lVar14 != 0) && (lVar6 = FUN_0074f690(param_2,&DAT_0528c980), lVar6 != 0)) {
          local_190[0x12] = 0;
          local_190[0x13] = 0;
          local_190[0x10] = 0;
          local_190[0x11] = 0;
          local_190[0xe] = 0;
          local_190[0xf] = 0;
          local_190[0xc] = 0;
          local_190[0xd] = 0;
          local_190[10] = 0;
          local_190[0xb] = 0;
          local_190[8] = 0;
          local_190[9] = 0;
          local_190[6] = 0;
          local_190[7] = 0;
          local_190[4] = 0;
          local_190[5] = 0;
          local_190[2] = 0;
          local_190[3] = 0;
          local_190[0] = 0;
          local_190[1] = 0;
          local_1a0 = PTR_DAT_04bb2020 + 0x10;
          puStack_198 = local_e8;
          FUN_017779b0(lVar14,&local_1a0,local_190,lVar6);
          if (local_190[0x13] != 0) {
            FUN_039a9540(*(undefined8 *)(param_1 + 0x1150),local_190[0x13],&DAT_0528c9a0);
          }
          uVar7 = FUN_018017d0(param_1);
          if (local_190[0] != 0) {
            FUN_039a9540(*(undefined8 *)(param_1 + 0x1150),local_190[0],&DAT_0528ca40);
          }
          if (local_190[3] != 0) {
            FUN_039a9540(*(undefined8 *)(param_1 + 0x1150),local_190[3],&DAT_0528ca50);
          }
          if (local_190[4] != 0) {
            FUN_039a9540(*(undefined8 *)(param_1 + 0x1150),local_190[4],&DAT_0528ca60);
          }
          if (local_190[0x12] != 0) {
            puVar1 = &DAT_0528c990;
            if ((uVar7 & 1) == 0) {
              puVar1 = &DAT_0528ca80;
            }
            FUN_039a9540(*(undefined8 *)(param_1 + 0x1150),local_190[0x12],puVar1);
          }
          lVar14 = FUN_0074f690(*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x78),&DAT_0528c980);
          if (((lVar14 != 0) && (*(long *)(lVar14 + 8) != 0)) &&
             (lVar14 = *(long *)(*(long *)(lVar14 + 8) + 0x20), lVar14 != 0)) {
            (**(code **)(DAT_0528ca20 + 0x18))(&DAT_0528ca20);
            lVar14 = FUN_038fe510(lVar14,DAT_0528ca28);
            if (lVar14 != 0) {
              FUN_039a9540(*(undefined8 *)(param_1 + 0x1150),lVar14,&DAT_0528ca70);
              FUN_039a9540(*(undefined8 *)(param_1 + 0x1150),lVar14,&DAT_0528cac0);
            }
          }
          FUN_017831e0(param_1);
        }
      }
    }
  }
  return;
}


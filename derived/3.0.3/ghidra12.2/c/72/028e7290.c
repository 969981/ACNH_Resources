
void FUN_028e7290(long param_1,int param_2,uint *param_3)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  undefined *puVar4;
  undefined4 uVar5;
  uint *puVar6;
  char cVar7;
  uint uVar8;
  long lVar9;
  uint *puVar10;
  ulong uVar11;
  int *piVar12;
  undefined2 *puVar13;
  int iVar14;
  ushort *puVar15;
  undefined *local_88;
  undefined1 *puStack_80;
  undefined4 local_78;
  undefined1 local_74 [7];
  undefined1 local_6d;
  uint local_68;
  int local_64;
  
  if (DAT_05ab3138 != 0) {
    lVar1 = DAT_05ab3138 + 0x800;
    iVar14 = 0;
    puVar2 = PTR_DAT_04bb3768 + 0x10;
    local_64 = param_2;
    do {
      puVar13 = (undefined2 *)(param_1 + (long)iVar14 * 0x1178);
      uVar8 = (uint)*(byte *)(puVar13 + 1);
      local_88 = (undefined *)CONCAT44(local_88._4_4_,uVar8);
      if (uVar8 == *param_3) {
        puVar15 = (ushort *)(param_1 + (long)iVar14 * 0x1178 + 6);
        local_68 = (uint)*puVar15;
        if (0x14 < local_68) {
          local_68 = 0;
        }
        if (local_68 < 0x15) {
          uVar5 = FUN_006bd550(*(undefined8 *)
                                (PTR_DAT_04bc2558 + (ulong)(ushort)local_68 * 8 + 0x150),0);
          local_88 = (undefined *)CONCAT44(local_88._4_4_,uVar5);
          puVar6 = (uint *)FUN_036c67d0(lVar1,&local_88);
          if (puVar6 != (uint *)0x0) {
            if ((local_64 == 1) && (*puVar6 != 0)) {
              cVar7 = DAT_0536b900;
              do {
                if (cVar7 == '\0') {
                  cVar7 = '\x01';
                  *PTR_DAT_04bc11e8 = 1;
                  puVar4 = PTR_DAT_04bc11f0;
                  *(undefined8 *)PTR_DAT_04bc11f0 = 0xffffffffffffffff;
                  *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
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
                  *(undefined8 *)(puVar4 + 0x60) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar4 + 0x68) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar4 + 0x70) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar4 + 0x78) = 0xffffffffffffffff;
                  uVar8 = *puVar6;
                }
                else {
                  if (-1 < (int)DAT_0536b96c._4_4_) {
                    if (((char *)((ulong)DAT_0536b96c._4_4_ + (long)puVar6) != (char *)0x0) &&
                       (*(char *)((ulong)DAT_0536b96c._4_4_ + (long)puVar6) != '\0'))
                    goto LAB_028e75e8;
                    break;
                  }
                  if (DAT_0536b96c._4_4_ != 0xffffffff) break;
                  uVar8 = *puVar6;
                }
                if ((uVar8 == 0) || (puVar10 = (uint *)(ulong)uVar8, puVar6 == puVar10)) break;
                lVar9 = 0xc;
                if (*(char *)((long)puVar6 + (10 - (long)puVar10)) != '\0') {
                  lVar9 = 0x1c;
                }
                lVar9 = (long)puVar6 + (lVar9 - (long)puVar10);
                if (lVar9 == 0) break;
                uVar11 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar10));
                *(undefined4 *)(PTR_DAT_04bc11f0 + 0x6c) = 0xfffffffe;
                if (uVar11 == 0) break;
                piVar12 = (int *)(lVar9 + 4);
                while (piVar12[-1] != -0x6b095a99) {
                  piVar12 = piVar12 + 2;
                  uVar11 = uVar11 - 1;
                  if (uVar11 == 0) goto LAB_028e7308;
                }
                iVar3 = 0;
                if (*piVar12 != -1) {
                  iVar3 = *piVar12;
                }
                *(int *)(PTR_DAT_04bc11f0 + 0x6c) = iVar3;
                if (*puVar6 == 0) break;
              } while( true );
            }
LAB_028e7308:
            if ((local_64 == 0) && (*puVar6 != 0)) {
              cVar7 = DAT_0536b900;
              do {
                if (cVar7 == '\0') {
                  cVar7 = '\x01';
                  *PTR_DAT_04bc11e8 = 1;
                  puVar4 = PTR_DAT_04bc11f0;
                  *(undefined8 *)PTR_DAT_04bc11f0 = 0xffffffffffffffff;
                  *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
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
                  *(undefined8 *)(puVar4 + 0x60) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar4 + 0x68) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar4 + 0x70) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar4 + 0x78) = 0xffffffffffffffff;
                  uVar8 = *puVar6;
                }
                else {
                  if (-1 < (int)(uint)DAT_0536b96c) {
                    if (((char *)((ulong)(uint)DAT_0536b96c + (long)puVar6) != (char *)0x0) &&
                       (*(char *)((ulong)(uint)DAT_0536b96c + (long)puVar6) != '\0')) {
LAB_028e75e8:
                      local_78 = 8;
                      local_6d = 0;
                      local_74[0] = 0;
                      local_88 = puVar2;
                      puStack_80 = local_74;
                      FUN_0376b510(&local_88,*puVar13);
                      lVar9 = param_1 + (long)iVar14 * 0x1178;
                      *puVar13 = 0xffff;
                      *puVar15 = 0;
                      *(undefined1 *)(lVar9 + 4) = 0;
                      *(byte *)(lVar9 + 3) = *(byte *)(lVar9 + 3) & 0xfc;
                      *(byte *)(puVar13 + 1) = 5;
                    }
                    break;
                  }
                  if ((uint)DAT_0536b96c != 0xffffffff) break;
                  uVar8 = *puVar6;
                }
                if ((uVar8 == 0) || (puVar10 = (uint *)(ulong)uVar8, puVar6 == puVar10)) break;
                lVar9 = 0xc;
                if (*(char *)((long)puVar6 + (10 - (long)puVar10)) != '\0') {
                  lVar9 = 0x1c;
                }
                lVar9 = (long)puVar6 + (lVar9 - (long)puVar10);
                if (lVar9 == 0) break;
                uVar11 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar10));
                *(undefined4 *)(PTR_DAT_04bc11f0 + 0x68) = 0xfffffffe;
                if (uVar11 == 0) break;
                piVar12 = (int *)(lVar9 + 4);
                while (piVar12[-1] != -0x6b59ee42) {
                  piVar12 = piVar12 + 2;
                  uVar11 = uVar11 - 1;
                  if (uVar11 == 0) goto LAB_028e7310;
                }
                iVar3 = 0;
                if (*piVar12 != -1) {
                  iVar3 = *piVar12;
                }
                *(int *)(PTR_DAT_04bc11f0 + 0x68) = iVar3;
                if (*puVar6 == 0) break;
              } while( true );
            }
          }
        }
      }
LAB_028e7310:
      iVar14 = iVar14 + 1;
    } while (iVar14 != 0x26);
  }
  return;
}



void FUN_02696300(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined2 *puVar3;
  long lVar4;
  undefined *puVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  int local_8c;
  undefined *local_88;
  int local_80;
  int iStack_7c;
  undefined *local_78;
  undefined2 local_70;
  undefined2 local_6e;
  undefined4 local_6c;
  uint *local_68;
  
  puVar5 = PTR_DAT_04bb43c0;
  lVar11 = 0;
  puVar1 = PTR_DAT_04bc0510 + 0x10;
  puVar2 = PTR_DAT_04bb2010 + 0x10;
  do {
    *(undefined8 *)(param_1 + 0x10) = 0;
    lVar4 = param_2 + lVar11;
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x24) = 0xffffffff00000000;
    local_78 = (undefined *)CONCAT44(local_78._4_4_,(int)*(char *)(lVar4 + 0x1f));
    if (*(char *)(lVar4 + 0x1f) == 0) {
      lVar10 = *(long *)puVar5;
      puVar3 = (undefined2 *)(lVar4 + 0x14);
      uVar6 = FUN_0277d6c4(puVar3);
      lVar12 = *(long *)puVar5;
      if (lVar12 != 0) {
        lVar10 = *(long *)(lVar10 + 0x57e58);
        uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
        if ((uVar6 < *(uint *)(lVar10 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
          local_68 = (uint *)0x0;
          local_6e = *(undefined2 *)(lVar4 + 0x16);
          local_70 = *puVar3;
          local_6c = *(undefined4 *)(lVar4 + 0x18);
          local_78 = puVar1;
          uVar6 = FUN_0277d6c4(&local_70);
          if (*(long *)puVar5 != 0) {
            lVar10 = *(long *)(lVar12 + 0x57e58);
            uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
            if ((uVar6 < *(uint *)(lVar10 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
              lVar10 = *(long *)PTR_DAT_04bc0428;
              uVar6 = FUN_0277d6c4(puVar3);
              uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
              if ((uVar6 < *(uint *)(lVar10 + 0x1d8)) &&
                 (puVar9 = *(uint **)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar6 * 8),
                 puVar9 != (uint *)0x0)) {
                local_68 = puVar9;
              }
            }
          }
          iVar7 = FUN_01ae7550(&local_78);
          local_88 = (undefined *)CONCAT44(local_88._4_4_,iVar7);
          if (iVar7 - 1U < 6) {
            local_80 = (int)*(char *)(lVar4 + 0x1c);
            iStack_7c = (int)*(char *)(lVar4 + 0x1d);
            local_8c = (int)*(char *)(lVar4 + 0x1e);
            local_88 = puVar2;
            FUN_01500520(param_1,puVar3,&local_88,&local_8c);
            if (local_68 == (uint *)0x0) {
LAB_0269636c:
              uVar8 = 0;
            }
            else {
              uVar6 = *local_68;
              uVar8 = 0;
              if ((uVar6 != 0) && (local_68 != (uint *)(ulong)uVar6)) {
                puVar9 = (uint *)((long)local_68 - (long)(ulong)uVar6);
                uVar8 = 0;
                if (*puVar9 != 0) {
                  uVar6 = puVar9[1];
                  if ((uVar6 != 0) && ((ulong)(ushort)puVar9[2] != 0)) {
                    lVar4 = 0xc;
                    if (*(char *)((long)puVar9 + 10) != '\0') {
                      lVar4 = 0x1c;
                    }
                    lVar4 = (long)puVar9 + lVar4 + (ulong)(ushort)puVar9[2] * 8;
                    if (lVar4 != 0) {
                      uVar8 = 0;
                      if ((ulong)uVar6 != 0) {
                        uVar8 = (uint)((ulong)((long)local_68 - lVar4) / (ulong)uVar6);
                      }
                      if (*puVar9 <= uVar8) {
                        uVar8 = 0xffffffff;
                      }
                      if ((uVar8 < *(uint *)PTR_DAT_04bc0130) &&
                         (uVar8 = (uint)*(ushort *)
                                         (*(long *)(PTR_DAT_04bc0130 + 8) + (long)(int)uVar8 * 2),
                         uVar8 < 0x15)) goto LAB_02696370;
                    }
                  }
                  goto LAB_0269636c;
                }
              }
            }
LAB_02696370:
            local_88 = (undefined *)CONCAT44(local_88._4_4_,uVar8);
            *(uint *)(param_1 + 0x28) = uVar8;
          }
        }
      }
    }
    lVar11 = lVar11 + 0xc;
    param_1 = param_1 + 0x30;
    if (lVar11 == 0x1b0) {
      return;
    }
  } while( true );
}


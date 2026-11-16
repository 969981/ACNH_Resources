
void FUN_0277b6e0(long *param_1,int param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined *puVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  ulong uVar7;
  uint *puVar8;
  long lVar9;
  int iVar10;
  long lVar11;
  undefined8 local_88;
  undefined *local_80;
  undefined4 local_78;
  undefined4 local_74;
  uint *local_70;
  uint local_64;
  
  puVar4 = PTR_DAT_04bb43c0;
  if (param_2 != 0) {
    iVar10 = 0;
    puVar1 = PTR_DAT_04bc0510 + 0x10;
    do {
      puVar6 = (undefined4 *)(**(code **)*param_4)(param_4,iVar10);
      lVar11 = *(long *)puVar4;
      uVar5 = FUN_0277d6c4();
      lVar9 = *(long *)puVar4;
      if (lVar9 != 0) {
        lVar11 = *(long *)(lVar11 + 0x57e58);
        uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
        if ((uVar5 < *(uint *)(lVar11 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
          local_78 = *puVar6;
          local_74 = puVar6[1];
          local_70 = (uint *)0x0;
          local_80 = puVar1;
          uVar5 = FUN_0277d6c4(&local_78);
          if (*(long *)puVar4 != 0) {
            lVar9 = *(long *)(lVar9 + 0x57e58);
            uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
            if ((uVar5 < *(uint *)(lVar9 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
              lVar9 = *(long *)PTR_DAT_04bc0428;
              uVar5 = FUN_0277d6c4(puVar6);
              uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
              if ((uVar5 < *(uint *)(lVar9 + 0x1d8)) &&
                 (puVar8 = *(uint **)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar5 * 8),
                 puVar8 != (uint *)0x0)) {
                local_70 = puVar8;
              }
            }
          }
          if (*(char *)((long)param_1 + 0x2d) != '\0') {
            local_88 = CONCAT44(local_88._4_4_,0x59);
            if (local_70 == (uint *)0x0) {
              local_64 = 0xbc;
            }
            else {
              uVar5 = *local_70;
              local_64 = 0;
              if ((uVar5 != 0) && (local_70 != (uint *)(ulong)uVar5)) {
                puVar8 = (uint *)((long)local_70 - (long)(ulong)uVar5);
                local_64 = 0;
                if (*puVar8 != 0) {
                  uVar5 = puVar8[1];
                  if ((uVar5 != 0) && ((ulong)(ushort)puVar8[2] != 0)) {
                    lVar9 = 0xc;
                    if (*(char *)((long)puVar8 + 10) != '\0') {
                      lVar9 = 0x1c;
                    }
                    lVar9 = (long)puVar8 + lVar9 + (ulong)(ushort)puVar8[2] * 8;
                    if (lVar9 != 0) {
                      uVar2 = 0;
                      if ((ulong)uVar5 != 0) {
                        uVar2 = (uint)((ulong)((long)local_70 - lVar9) / (ulong)uVar5);
                      }
                      if (*puVar8 <= uVar2) {
                        uVar2 = 0xffffffff;
                      }
                      if ((uVar2 < *(uint *)PTR_DAT_04bc00c8) &&
                         (local_64 = (uint)*(ushort *)
                                            (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar2 * 2)
                         , local_64 < 0xbd)) goto LAB_0277b8ec;
                    }
                  }
                  local_64 = 0;
                }
              }
            }
LAB_0277b8ec:
            if (local_64 == 0x59) {
              local_88 = 0xa52;
              FUN_0277d4ac(&local_88);
              *(undefined2 *)puVar6 = (undefined2)local_88;
              *(undefined1 *)((long)puVar6 + 2) = local_88._2_1_;
              *(undefined1 *)((long)puVar6 + 3) = local_88._3_1_;
              puVar6[1] = local_88._4_4_;
              FUN_02649620(param_3,puVar6,0);
            }
          }
          if (*param_1 != 0) {
            uVar7 = FUN_01b15b54(&local_80);
            if ((uVar7 & 1) != 0) {
              *puVar6 = local_78;
              puVar6[1] = local_74;
            }
            puVar3 = PTR_DAT_04bb37e0;
            if (((local_70 != (uint *)0x0) && (uVar5 = *local_70, uVar5 != 0)) &&
               (local_70 != (uint *)(ulong)uVar5)) {
              puVar8 = (uint *)((long)local_70 - (long)(ulong)uVar5);
              if (((*puVar8 != 0) && (uVar5 = puVar8[1], uVar5 != 0)) &&
                 ((ulong)(ushort)puVar8[2] != 0)) {
                lVar9 = 0xc;
                if (*(char *)((long)puVar8 + 10) != '\0') {
                  lVar9 = 0x1c;
                }
                lVar9 = (long)puVar8 + lVar9 + (ulong)(ushort)puVar8[2] * 8;
                if (lVar9 != 0) {
                  uVar2 = 0;
                  if ((ulong)uVar5 != 0) {
                    uVar2 = (uint)((ulong)((long)local_70 - lVar9) / (ulong)uVar5);
                  }
                  if (*puVar8 <= uVar2) {
                    uVar2 = 0xffffffff;
                  }
                  if ((uVar2 < *(uint *)PTR_DAT_04bc00c8) &&
                     (*(short *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar2 * 2) == 0x85)) {
                    *(undefined2 *)puVar6 = *(undefined2 *)PTR_DAT_04bb37e0;
                    *(undefined *)((long)puVar6 + 2) = puVar3[2];
                    *(undefined *)((long)puVar6 + 3) = puVar3[3];
                    puVar6[1] = *(undefined4 *)(puVar3 + 4);
                  }
                }
              }
            }
          }
        }
      }
      iVar10 = iVar10 + 1;
    } while (param_2 != iVar10);
  }
  if (*param_1 != 0) {
    FUN_0277ba50(param_2,param_3,param_4);
  }
  return;
}


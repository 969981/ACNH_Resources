
uint FUN_01c29294(undefined8 param_1,undefined8 *param_2,short *param_3)

{
  int iVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  uint *puVar7;
  undefined8 *puVar8;
  uint *puVar9;
  long lVar10;
  short local_90;
  short local_8e;
  undefined4 local_8c;
  undefined8 local_88;
  uint local_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined *local_68;
  undefined1 *puStack_60;
  undefined4 local_58;
  undefined1 local_54 [31];
  undefined1 local_35;
  
  puVar2 = PTR_DAT_04bb43c0;
  local_90 = *param_3;
  if (local_90 != -2) {
    local_8e = param_3[1];
    local_88 = 0;
    local_8c = *(undefined4 *)(param_3 + 2);
    lVar10 = *(long *)PTR_DAT_04bb43c0;
    uVar3 = FUN_0277d6c4(&local_90);
    if (*(long *)puVar2 == 0) {
LAB_01c29448:
      local_7c = 0xbc;
LAB_01c2946c:
      local_78 = 0xa5;
      if (local_7c != 0xa5) goto LAB_01c29500;
    }
    else {
      lVar10 = *(long *)(lVar10 + 0x57e58);
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
      if ((*(uint *)(lVar10 + 0x1d8) <= uVar3) ||
         (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar3 * 8) == 0)) goto LAB_01c29448;
      lVar10 = *(long *)PTR_DAT_04bc0428;
      uVar3 = FUN_0277d6c4(param_3);
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
      if ((*(uint *)(lVar10 + 0x1d8) <= uVar3) ||
         (puVar7 = *(uint **)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar3 * 8),
         puVar7 == (uint *)0x0)) goto LAB_01c29448;
      local_78 = 0xa4;
      uVar3 = *puVar7;
      if (uVar3 == 0 || puVar7 == (uint *)(ulong)uVar3) {
LAB_01c29388:
        local_7c = 0;
      }
      else {
        puVar9 = (uint *)((long)puVar7 - (long)(ulong)uVar3);
        local_7c = 0;
        if (*puVar9 != 0) {
          uVar3 = puVar9[1];
          if ((uVar3 != 0) && ((ulong)(ushort)puVar9[2] != 0)) {
            lVar10 = 0xc;
            if (*(char *)((long)puVar9 + 10) != '\0') {
              lVar10 = 0x1c;
            }
            lVar10 = (long)puVar9 + lVar10 + (ulong)(ushort)puVar9[2] * 8;
            if (lVar10 != 0) {
              uVar4 = 0;
              if ((ulong)uVar3 != 0) {
                uVar4 = (uint)((ulong)((long)puVar7 - lVar10) / (ulong)uVar3);
              }
              if (*puVar9 <= uVar4) {
                uVar4 = 0xffffffff;
              }
              if ((uVar4 < *(uint *)PTR_DAT_04bc00c8) &&
                 (local_7c = (uint)*(ushort *)
                                    (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar4 * 2),
                 local_7c < 0xbd)) goto LAB_01c2938c;
            }
          }
          goto LAB_01c29388;
        }
      }
LAB_01c2938c:
      if (local_7c != 0xa4) {
        local_7c = 0;
        uVar3 = *puVar7;
        if ((uVar3 != 0) && (puVar7 != (uint *)(ulong)uVar3)) {
          puVar9 = (uint *)((long)puVar7 - (long)(ulong)uVar3);
          local_7c = 0;
          if (*puVar9 != 0) {
            uVar3 = puVar9[1];
            if ((uVar3 != 0) && ((ulong)(ushort)puVar9[2] != 0)) {
              lVar10 = 0xc;
              if (*(char *)((long)puVar9 + 10) != '\0') {
                lVar10 = 0x1c;
              }
              lVar10 = (long)puVar9 + lVar10 + (ulong)(ushort)puVar9[2] * 8;
              if (lVar10 != 0) {
                uVar4 = 0;
                if ((ulong)uVar3 != 0) {
                  uVar4 = (uint)((ulong)((long)puVar7 - lVar10) / (ulong)uVar3);
                }
                if (*puVar9 <= uVar4) {
                  uVar4 = 0xffffffff;
                }
                if ((uVar4 < *(uint *)PTR_DAT_04bc00c8) &&
                   (local_7c = (uint)*(ushort *)
                                      (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar4 * 2),
                   local_7c < 0xbd)) goto LAB_01c2946c;
              }
            }
            local_7c = 0;
          }
        }
        goto LAB_01c2946c;
      }
    }
    lVar10 = *(long *)PTR_DAT_04bb46b0;
    if (lVar10 != 0) {
      puVar8 = *(undefined8 **)(lVar10 + 0x10);
      if ((*(byte *)(lVar10 + 0x453) & 1) == 0) {
        lVar10 = (**(code **)(*(long *)*puVar8 + 0x38))();
        if (lVar10 != 0) {
          lVar10 = lVar10 + 0x70;
LAB_01c294d4:
          if ((*(long **)(lVar10 + 0x1bf1b8) == (long *)0x0) ||
             (puVar8 = (undefined8 *)**(long **)(lVar10 + 0x1bf1b8), puVar8 == (undefined8 *)0x0)) {
            uVar3 = 1;
          }
          else {
            uVar3 = (**(code **)*puVar8)();
            uVar3 = uVar3 ^ 1;
          }
          uVar5 = FUN_027bf130(*(long *)(lVar10 + 0x1bf1a0) + *(long *)(lVar10 + 0x1bf198),param_3);
          if ((uVar5 & 1) == 0) {
            uVar4 = 0;
          }
          else {
            iVar1 = *(int *)(PTR_DAT_04bc3a80 + 0x38);
            if (iVar1 < -0x83ceb3d) {
              if (iVar1 < -0x15fdefdb) {
                if (iVar1 == -0x477aafe0) {
                  lVar6 = 5;
                }
                else if (iVar1 == -0x2099c902) {
                  lVar6 = 9;
                }
                else {
LAB_01c296d4:
                  lVar6 = (ulong)(iVar1 == 0x17f77b87) << 3;
                }
              }
              else if (iVar1 == -0x15fdefdb) {
                lVar6 = 7;
              }
              else {
                if (iVar1 != -0xe632453) goto LAB_01c296d4;
                lVar6 = 3;
              }
            }
            else if (iVar1 < 0x3b3bf38a) {
              if (iVar1 == -0x83ceb3d) {
                lVar6 = 4;
              }
              else {
                if (iVar1 != -0x169521c) goto LAB_01c296d4;
                lVar6 = 1;
              }
            }
            else if (iVar1 == 0x3b3bf38a) {
              lVar6 = 6;
            }
            else if (iVar1 == 0x3fce6459) {
              lVar6 = 2;
            }
            else {
              if (iVar1 != 0x6148bcad) goto LAB_01c296d4;
              lVar6 = 0;
            }
            local_35 = 0;
            local_58 = 0x20;
            puStack_60 = local_54;
            local_54[0] = 0;
            local_68 = PTR_DAT_04bb2028 + 0x10;
            uVar4 = FUN_01c178b0(*(undefined8 *)PTR_DAT_04bb4838,&local_78,param_3,lVar6);
            if ((uVar4 & 1) != 0) {
              *(undefined4 *)(param_2 + 1) = local_70;
              *param_2 = CONCAT44(uStack_74,local_78);
            }
          }
          if ((((uVar3 & 1) == 0) && (*(long *)(lVar10 + 0x1bf1b8) != 0)) &&
             (puVar8 = *(undefined8 **)(*(long *)(lVar10 + 0x1bf1b8) + 8),
             puVar8 != (undefined8 *)0x0)) {
            (**(code **)*puVar8)();
          }
          goto LAB_01c29504;
        }
      }
      else if (((puVar8 != (undefined8 *)0x0) && ((long *)puVar8[0x26] != (long *)0x0)) &&
              (lVar10 = (**(code **)(*(long *)puVar8[0x26] + 0x38))(), lVar10 != 0))
      goto LAB_01c294d4;
    }
  }
LAB_01c29500:
  uVar4 = 0;
LAB_01c29504:
  return uVar4 & 1;
}


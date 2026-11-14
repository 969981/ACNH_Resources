
uint FUN_01c28e84(undefined8 param_1,undefined8 *param_2,short *param_3,ulong param_4)

{
  int iVar1;
  ushort uVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  uint *puVar8;
  undefined8 *puVar9;
  uint *puVar10;
  long lVar11;
  short local_a0;
  short local_9e;
  undefined4 local_9c;
  undefined8 local_98;
  uint local_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined *local_78;
  undefined1 *puStack_70;
  undefined4 local_68;
  undefined1 local_64 [31];
  undefined1 local_45;
  
  puVar3 = PTR_DAT_04bb43c0;
  local_a0 = *param_3;
  if (local_a0 != -2) {
    local_9e = param_3[1];
    local_98 = 0;
    local_9c = *(undefined4 *)(param_3 + 2);
    lVar11 = *(long *)PTR_DAT_04bb43c0;
    uVar4 = FUN_0277d6c4(&local_a0);
    if (*(long *)puVar3 == 0) {
LAB_01c28ffc:
      local_8c = 0xbc;
    }
    else {
      lVar11 = *(long *)(lVar11 + 0x57e58);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
      if ((*(uint *)(lVar11 + 0x1d8) <= uVar4) ||
         (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar4 * 8) == 0)) goto LAB_01c28ffc;
      lVar11 = *(long *)PTR_DAT_04bc0428;
      uVar4 = FUN_0277d6c4(param_3);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
      if ((*(uint *)(lVar11 + 0x1d8) <= uVar4) ||
         (puVar8 = *(uint **)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar4 * 8),
         puVar8 == (uint *)0x0)) goto LAB_01c28ffc;
      uVar4 = *puVar8;
      if (uVar4 == 0 || puVar8 == (uint *)(ulong)uVar4) {
LAB_01c28ff4:
        local_8c = 0;
      }
      else {
        puVar10 = (uint *)((long)puVar8 - (long)(ulong)uVar4);
        if (((*puVar10 == 0) || (uVar4 = puVar10[1], uVar4 == 0)) ||
           ((ulong)(ushort)puVar10[2] == 0)) goto LAB_01c28ff4;
        lVar11 = 0xc;
        if (*(char *)((long)puVar10 + 10) != '\0') {
          lVar11 = 0x1c;
        }
        lVar11 = (long)puVar10 + lVar11 + (ulong)(ushort)puVar10[2] * 8;
        if (lVar11 == 0) goto LAB_01c28ff4;
        uVar5 = 0;
        if ((ulong)uVar4 != 0) {
          uVar5 = (uint)((ulong)((long)puVar8 - lVar11) / (ulong)uVar4);
        }
        if (*puVar10 <= uVar5) {
          uVar5 = 0xffffffff;
        }
        if ((*(uint *)PTR_DAT_04bc00c8 <= uVar5) ||
           (uVar2 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar5 * 2),
           local_8c = (uint)uVar2, 0xbc < uVar2)) goto LAB_01c28ff4;
      }
    }
    local_88 = 0x70;
    if ((local_8c == 0x70) && (lVar11 = *(long *)PTR_DAT_04bb46b0, lVar11 != 0)) {
      puVar9 = *(undefined8 **)(lVar11 + 0x10);
      if ((*(byte *)(lVar11 + 0x453) & 1) == 0) {
        lVar11 = (**(code **)(*(long *)*puVar9 + 0x38))();
        if (lVar11 != 0) {
          lVar11 = lVar11 + 0x70;
LAB_01c29070:
          if ((*(long **)(lVar11 + 0x1bf1b8) == (long *)0x0) ||
             (puVar9 = (undefined8 *)**(long **)(lVar11 + 0x1bf1b8), puVar9 == (undefined8 *)0x0)) {
            uVar4 = 1;
          }
          else {
            uVar4 = (**(code **)*puVar9)();
            uVar4 = uVar4 ^ 1;
          }
          puVar3 = PTR_DAT_04bb4830;
          if ((param_4 & 1) == 0) {
            uVar6 = FUN_027bf130(*(long *)(lVar11 + 0x1bf1a0) + *(long *)(lVar11 + 0x1bf198),param_3
                                );
            if ((uVar6 & 1) != 0) goto LAB_01c290f8;
LAB_01c290dc:
            uVar5 = 0;
          }
          else {
            uVar6 = FUN_01c1e750(*(undefined8 *)PTR_DAT_04bb4830,param_3);
            if ((uVar6 & 1) == 0) goto LAB_01c290dc;
LAB_01c290f8:
            iVar1 = *(int *)(PTR_DAT_04bc3a80 + 0x38);
            if (iVar1 < -0x83ceb3d) {
              if (iVar1 < -0x15fdefdb) {
                if (iVar1 == -0x477aafe0) {
                  lVar7 = 5;
                }
                else if (iVar1 == -0x2099c902) {
                  lVar7 = 9;
                }
                else {
LAB_01c29210:
                  lVar7 = (ulong)(iVar1 == 0x17f77b87) << 3;
                }
              }
              else if (iVar1 == -0x15fdefdb) {
                lVar7 = 7;
              }
              else {
                if (iVar1 != -0xe632453) goto LAB_01c29210;
                lVar7 = 3;
              }
            }
            else if (iVar1 < 0x3b3bf38a) {
              if (iVar1 == -0x83ceb3d) {
                lVar7 = 4;
              }
              else {
                if (iVar1 != -0x169521c) goto LAB_01c29210;
                lVar7 = 1;
              }
            }
            else if (iVar1 == 0x3b3bf38a) {
              lVar7 = 6;
            }
            else if (iVar1 == 0x3fce6459) {
              lVar7 = 2;
            }
            else {
              if (iVar1 != 0x6148bcad) goto LAB_01c29210;
              lVar7 = 0;
            }
            local_45 = 0;
            local_68 = 0x20;
            puStack_70 = local_64;
            local_64[0] = 0;
            local_78 = PTR_DAT_04bb2028 + 0x10;
            uVar5 = FUN_01c1da00(*(undefined8 *)puVar3,&local_88,param_3,lVar7);
            if ((uVar5 & 1) != 0) {
              *(undefined4 *)(param_2 + 1) = local_80;
              *param_2 = CONCAT44(uStack_84,local_88);
            }
          }
          if ((((uVar4 & 1) == 0) && (*(long *)(lVar11 + 0x1bf1b8) != 0)) &&
             (puVar9 = *(undefined8 **)(*(long *)(lVar11 + 0x1bf1b8) + 8),
             puVar9 != (undefined8 *)0x0)) {
            (**(code **)*puVar9)();
          }
          goto LAB_01c290a0;
        }
      }
      else if (((puVar9 != (undefined8 *)0x0) && ((long *)puVar9[0x26] != (long *)0x0)) &&
              (lVar11 = (**(code **)(*(long *)puVar9[0x26] + 0x38))(), lVar11 != 0))
      goto LAB_01c29070;
    }
  }
  uVar5 = 0;
LAB_01c290a0:
  return uVar5 & 1;
}


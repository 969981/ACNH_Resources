
/* WARNING: Removing unreachable block (ram,0x01702634) */

void FUN_017025a0(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  long lVar7;
  undefined8 *puVar8;
  char cVar9;
  uint *puVar10;
  ulong uVar11;
  int *piVar12;
  long lVar13;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined *local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  long local_58;
  uint local_50 [5];
  byte local_3c [4];
  uint local_38;
  uint local_34;
  
  (**(code **)(*param_1 + 0x370))(&local_70);
  if ((*(uint *)((long)param_1 + 0x15f4) >> 4 & 1) == 0) {
    lVar7 = param_1[0x227];
    if (lVar7 == 0) {
      local_68._0_4_ = 0;
      puVar8 = &DAT_04c931a0;
    }
    else {
      local_68._0_4_ = *(uint *)(param_1 + 0x2d3) >> 1 & 1;
      uVar3 = 0;
      if (*(long *)(lVar7 + 0x78) != 0) {
        uVar3 = *(uint *)(*(long *)(lVar7 + 0x78) + 0x18);
      }
      uVar5 = (uint)local_68;
      if (uVar3 <= (uint)local_68) {
        uVar5 = 0;
      }
      if (*(uint *)(lVar7 + 0x80) <= uVar5) {
        uVar5 = 0;
      }
      puVar8 = (undefined8 *)(*(long *)(lVar7 + 0x88) + (long)(int)uVar5 * 0xe8 + 0x60);
    }
    local_74 = *(undefined4 *)(puVar8 + 0xb);
    puVar6 = (uint *)FUN_0171ec68(&local_74);
    puVar2 = PTR_DAT_04bbde90;
    puVar1 = PTR_DAT_04bbde88;
    if ((puVar6 != (uint *)0x0) && (local_68._0_4_ = 8, *puVar6 != 0)) {
      cVar9 = *PTR_DAT_04bbde88;
      do {
        if (cVar9 == '\0') {
          cVar9 = '\x01';
          *(undefined8 *)puVar2 = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 8) = 0xffffffffffffffff;
          *puVar1 = 1;
          *(undefined8 *)(puVar2 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x28) = 0xffffffffffffffff;
          uVar3 = *puVar6;
        }
        else {
          uVar3 = *(uint *)(puVar2 + 0x2c);
          if (-1 < (int)uVar3) {
            if (((ulong)uVar3 + (long)puVar6 != 0) &&
               ((*(byte *)((ulong)uVar3 + (long)puVar6 + 1) & 1) != 0)) goto LAB_01702944;
            break;
          }
          if (uVar3 != 0xffffffff) break;
          uVar3 = *puVar6;
        }
        if ((uVar3 == 0) || (puVar10 = (uint *)(ulong)uVar3, puVar6 == puVar10)) break;
        lVar7 = 0xc;
        if (*(char *)((long)puVar6 + (10 - (long)puVar10)) != '\0') {
          lVar7 = 0x1c;
        }
        lVar7 = (long)puVar6 + (lVar7 - (long)puVar10);
        if (lVar7 == 0) break;
        uVar11 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar10));
        *(undefined4 *)(puVar2 + 0x2c) = 0xfffffffe;
        if (uVar11 == 0) break;
        piVar12 = (int *)(lVar7 + 4);
        while (piVar12[-1] != 0x42ad246a) {
          piVar12 = piVar12 + 2;
          uVar11 = uVar11 - 1;
          if (uVar11 == 0) goto LAB_0170279c;
        }
        iVar4 = 0;
        if (*piVar12 != -1) {
          iVar4 = *piVar12;
        }
        *(int *)(puVar2 + 0x2c) = iVar4;
        if (*puVar6 == 0) break;
      } while( true );
    }
LAB_0170279c:
    puVar1 = PTR_DAT_04bb43c0;
    lVar13 = *(long *)PTR_DAT_04bb43c0;
    uVar3 = FUN_0277d6c4(&local_70);
    lVar7 = *(long *)puVar1;
    if (lVar7 != 0) {
      lVar13 = *(long *)(lVar13 + 0x57e58);
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
      if (uVar3 < *(uint *)(lVar13 + 0x1d8)) {
        uVar5 = 0;
        if (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar3 * 8) == 0) goto LAB_01702948;
        local_58 = 0;
        local_68 = PTR_DAT_04bc0510 + 0x10;
        local_60 = local_70;
        uStack_5c = uStack_6c;
        uVar3 = FUN_0277d6c4(&local_60);
        if (*(long *)puVar1 != 0) {
          lVar7 = *(long *)(lVar7 + 0x57e58);
          uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
          if ((uVar3 < *(uint *)(lVar7 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
            lVar7 = *(long *)PTR_DAT_04bc0428;
            uVar3 = FUN_0277d6c4(&local_70);
            uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
            if ((uVar3 < *(uint *)(lVar7 + 0x1d8)) &&
               (lVar7 = *(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar3 * 8), lVar7 != 0)) {
              local_58 = lVar7;
            }
          }
        }
        iVar4 = FUN_01ad78cc(&local_68);
        if (iVar4 == 0x1c) {
          uVar5 = 0x13;
          goto LAB_01702948;
        }
        local_3c[0] = 0;
        local_3c[1] = 0;
        FUN_01adab50(&local_68,local_3c);
        local_50[0] = 0;
        do {
          if ((local_50[0] != 0) && (local_50[0] < 0xe)) {
            uVar3 = local_50[0] + 7;
            if (-1 < (int)local_50[0]) {
              uVar3 = local_50[0];
            }
            if (((uint)((int)uVar3 >> 3) < 2) &&
               ((local_3c[(uint)((int)uVar3 >> 3)] >> (ulong)(local_50[0] & 7) & 1) != 0)) {
              if (local_50[0] == 9) {
                local_38 = local_50[0];
                local_34 = local_50[0];
                FUN_01ad7ca0(local_50,iVar4);
                uVar5 = FUN_0171b3a0(local_50);
                uVar5 = uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU);
                goto LAB_01702948;
              }
              break;
            }
          }
          local_50[0] = local_50[0] + 1;
        } while (local_50[0] != 0xe);
      }
    }
  }
LAB_01702944:
  uVar5 = 0;
LAB_01702948:
  *(uint *)(param_1 + 0x2d9) = uVar5;
  return;
}


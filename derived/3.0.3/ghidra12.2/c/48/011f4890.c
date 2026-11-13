
void FUN_011f4890(void)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  uint *puVar13;
  long lVar14;
  undefined *local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  uint *local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined *local_a0;
  undefined8 uStack_98;
  undefined *local_90;
  ulong local_88;
  undefined *local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  byte local_70;
  uint local_68;
  undefined4 local_64;
  
  uStack_74 = *(undefined4 *)(PTR_DAT_04bbbf90 + 0xc);
  local_78 = 1;
  local_70 = FUN_017baf44();
  puVar6 = PTR_DAT_04bb46b0;
  puVar5 = PTR_DAT_04bb43c0;
  local_70 = local_70 & 1;
  lVar14 = 0x904;
  local_80 = PTR_DAT_04bb6268 + 0x10;
  puVar1 = PTR_DAT_04bb2010 + 0x10;
  puVar2 = PTR_DAT_04bc0510 + 0x10;
  do {
    lVar11 = *(long *)puVar6;
    local_88 = 0;
    uStack_98 = 0;
    local_a0 = puVar1;
    local_90 = puVar1;
    if (lVar11 == 0) {
LAB_011f49b0:
      lVar11 = 0;
    }
    else {
      puVar12 = *(undefined8 **)(lVar11 + 0x10);
      if ((*(byte *)(lVar11 + 0x453) & 1) == 0) {
        lVar9 = (**(code **)(*(long *)*puVar12 + 0x38))();
        lVar11 = 0;
        if (lVar9 != 0) {
          lVar11 = lVar9 + 0x70;
        }
      }
      else {
        if (puVar12 == (undefined8 *)0x0) goto LAB_011f49b0;
        lVar11 = 0;
        if ((long *)puVar12[0x26] != (long *)0x0) {
          lVar11 = (**(code **)(*(long *)puVar12[0x26] + 0x38))();
        }
      }
    }
    if (*(long **)(lVar11 + 0x1c24e8) == (long *)0x0) {
      uVar10 = 0;
    }
    else {
      puVar12 = (undefined8 *)**(long **)(lVar11 + 0x1c24e8);
      uVar10 = 0;
      if (puVar12 != (undefined8 *)0x0) {
        uVar10 = (**(code **)*puVar12)();
      }
    }
    uVar7 = *(uint *)(*(long *)(lVar11 + 0x1c24d0) + *(long *)(lVar11 + 0x1c24c8) + lVar14);
    local_88 = CONCAT44(uVar7 >> 10,uVar7) & 0x3ff000003ff;
    if ((((uVar10 & 1) != 0) && (*(long *)(lVar11 + 0x1c24e8) != 0)) &&
       (puVar12 = *(undefined8 **)(*(long *)(lVar11 + 0x1c24e8) + 8), puVar12 != (undefined8 *)0x0))
    {
      (**(code **)*puVar12)();
    }
    uVar7 = uVar7 >> 0x14 & 7;
    if (uVar7 == 2) {
      FUN_01a5033c(&local_c0,&local_80,0,&local_90,&local_a0);
      iVar8 = FUN_0277d6c4(&local_c0);
      if (iVar8 != 0xea79) goto LAB_011f4940;
LAB_011f4930:
      FUN_011f3520(&local_80,0,&local_a0);
    }
    else if (uVar7 == 1) {
      FUN_01a5033c(&local_a8,&local_80,0,&local_90,&local_a0);
      lVar11 = *(long *)puVar5;
      uVar7 = FUN_0277d6c4(&local_a8);
      lVar9 = *(long *)puVar5;
      if (lVar9 != 0) {
        lVar11 = *(long *)(lVar11 + 0x57e58);
        uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
        if ((uVar7 < *(uint *)(lVar11 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
          local_b0 = (uint *)0x0;
          local_b8 = local_a8;
          uStack_b4 = uStack_a4;
          local_c0 = puVar2;
          uVar7 = FUN_0277d6c4(&local_b8);
          if (*(long *)puVar5 == 0) {
LAB_011f4b4c:
            if (local_b0 != (uint *)0x0) goto LAB_011f4b5c;
            local_68 = 0xbc;
          }
          else {
            lVar11 = *(long *)(lVar9 + 0x57e58);
            uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
            if ((*(uint *)(lVar11 + 0x1d8) <= uVar7) ||
               (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar7 * 8) == 0))
            goto LAB_011f4b4c;
            lVar11 = *(long *)PTR_DAT_04bc0428;
            uVar7 = FUN_0277d6c4(&local_a8);
            uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
            if ((*(uint *)(lVar11 + 0x1d8) <= uVar7) ||
               (puVar13 = *(uint **)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar7 * 8),
               puVar13 == (uint *)0x0)) goto LAB_011f4b4c;
            local_b0 = puVar13;
LAB_011f4b5c:
            uVar7 = *local_b0;
            local_68 = 0;
            if ((uVar7 != 0) && (local_b0 != (uint *)(ulong)uVar7)) {
              puVar13 = (uint *)((long)local_b0 - (long)(ulong)uVar7);
              local_68 = 0;
              if (*puVar13 != 0) {
                uVar7 = puVar13[1];
                if ((uVar7 != 0) && ((ulong)(ushort)puVar13[2] != 0)) {
                  lVar11 = 0xc;
                  if (*(char *)((long)puVar13 + 10) != '\0') {
                    lVar11 = 0x1c;
                  }
                  lVar11 = (long)puVar13 + lVar11 + (ulong)(ushort)puVar13[2] * 8;
                  if (lVar11 != 0) {
                    uVar4 = 0;
                    if ((ulong)uVar7 != 0) {
                      uVar4 = (uint)((ulong)((long)local_b0 - lVar11) / (ulong)uVar7);
                    }
                    if (*puVar13 <= uVar4) {
                      uVar4 = 0xffffffff;
                    }
                    if ((uVar4 < *(uint *)PTR_DAT_04bc00c8) &&
                       (local_68 = (uint)*(ushort *)
                                          (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar4 * 2),
                       local_68 < 0xbd)) goto LAB_011f4bf0;
                  }
                }
                local_68 = 0;
              }
            }
          }
LAB_011f4bf0:
          local_64 = 0x86;
          if (local_68 == 0x86) {
            uVar10 = FUN_01ae59b0(&local_c0);
            bVar3 = local_b8._2_1_ >> 2 & 1;
            if ((uVar10 & 1) == 0) {
              bVar3 = local_b8._2_1_ & 4;
            }
            if (bVar3 != 0) goto LAB_011f4930;
          }
        }
      }
    }
LAB_011f4940:
    lVar14 = lVar14 + 4;
    if (lVar14 == 0x924) {
      return;
    }
  } while( true );
}


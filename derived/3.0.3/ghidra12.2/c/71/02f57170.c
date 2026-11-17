
/* WARNING: Removing unreachable block (ram,0x02f571b8) */

void FUN_02f57170(long param_1)

{
  byte *pbVar1;
  int iVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  byte bVar11;
  undefined8 *puVar12;
  undefined1 uVar13;
  int iVar14;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined *local_d8;
  undefined *local_d0;
  int local_c8;
  undefined local_c4 [63];
  undefined1 local_85;
  byte local_80;
  undefined4 local_7c;
  undefined1 local_78;
  undefined8 local_74;
  long local_68;
  
  local_e8 = CONCAT44(local_e8._4_4_,3);
  puVar12 = *(undefined8 **)(*(long *)PTR_DAT_04bb2230 + 0x58);
  if (((*PTR_DAT_04bc7280 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04bc7280), iVar5 != 0))
  {
    *(undefined **)PTR_DAT_04bc7278 = PTR_DAT_04bb7c30 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc7280);
  }
  if ((puVar12 != (undefined8 *)0x0) &&
     (uVar6 = (**(code **)*puVar12)(puVar12,PTR_DAT_04bc7278), (uVar6 & 1) != 0)) {
    local_85 = 0;
    local_c4[0] = 0;
    local_d0 = local_c4;
    local_c8 = 0x40;
    local_e8 = 0xffffffffffffffff;
    uStack_e0 = 0xffffffffffffffff;
    local_d8 = PTR_DAT_04bb2bc0 + 0x10;
    local_74 = 0xffffffffffffffff;
    local_7c = 0;
    local_78 = 0;
    local_68 = 0;
    local_80 = *(byte *)(param_1 + 0x1f8);
    if (7 < local_80) {
      local_80 = 0xff;
    }
    uVar6 = FUN_01df3070(&local_68);
    uVar13 = 0;
    lVar10 = local_68;
    if ((uVar6 & 1) == 0) {
      lVar10 = 0;
    }
    if (*(byte *)(param_1 + 0x1f8) < 8) {
      pbVar1 = (byte *)(param_1 + 0x1f8);
      uVar6 = FUN_02658470(pbVar1);
      if ((((uVar6 & 1) != 0) && (lVar7 = FUN_026585a0(pbVar1), lVar7 != 0)) &&
         (iVar5 = *(int *)(param_1 + 0x220), iVar5 != 0)) {
        lVar7 = *(long *)(param_1 + 0x228);
        iVar14 = 0;
        do {
          iVar2 = *(int *)(lVar7 + (long)iVar14 * 0x120 + 0xfc);
          if (iVar2 == -1) {
LAB_02f5735c:
            puVar3 = local_d0;
            lVar8 = lVar7 + (long)iVar14 * 0x120;
            if (((((*(ushort *)(lVar8 + 0x100) &
                   (ushort)(*(long *)(lVar8 + 0xe8) == *(long *)(lVar8 + 0xe0))) == 0) &&
                 (*(long *)(lVar8 + 0xe0) != 0)) &&
                (lVar8 = *(long *)(lVar7 + (long)iVar14 * 0x120 + 0x108), lVar8 != 0)) &&
               (lVar8 != lVar10)) {
              lVar10 = *(long *)(*(long *)(*(long *)(param_1 + 0x210) + 0x580) + 0xa0);
              if (lVar10 == 0) {
                uVar13 = 1;
              }
              else {
                local_e8 = CONCAT44(local_e8._4_4_,*(undefined4 *)(lVar10 + 0x14));
                if (local_d0 != &DAT_04069223) {
                  iVar5 = 4;
                  if (local_c8 < 5) {
                    iVar5 = local_c8 + -1;
                  }
                  memcpy(local_d0,&DAT_04069223,(long)iVar5);
                  puVar3[iVar5] = 0;
                }
                uVar13 = 1;
                FUN_02ee2b00(puVar12,&local_e8,1);
              }
              goto LAB_02f57410;
            }
          }
          else {
            bVar11 = *pbVar1;
            if (7 < bVar11) {
              bVar11 = 0xff;
            }
            local_68 = CONCAT71(local_68._1_7_,bVar11);
            lVar8 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,&local_68,1);
            if (lVar8 == 0) goto LAB_02f5735c;
            if ((*(long **)(lVar8 + 0x28) == (long *)0x0) ||
               (puVar9 = (undefined8 *)**(long **)(lVar8 + 0x28), puVar9 == (undefined8 *)0x0)) {
              uVar4 = 1;
            }
            else {
              uVar4 = (**(code **)*puVar9)();
              uVar4 = uVar4 ^ 1;
            }
            bVar11 = *(byte *)(*(long *)(lVar8 + 0x10) + *(long *)(lVar8 + 8) + 0x10);
            if (7 < bVar11) {
              bVar11 = 0xff;
            }
            if ((((uVar4 & 1) == 0) && (*(long *)(lVar8 + 0x28) != 0)) &&
               (puVar9 = *(undefined8 **)(*(long *)(lVar8 + 0x28) + 8), puVar9 != (undefined8 *)0x0)
               ) {
              (**(code **)*puVar9)();
            }
            if (iVar2 != (char)bVar11) goto LAB_02f5735c;
          }
          iVar14 = iVar14 + 1;
        } while (iVar5 != iVar14);
      }
      uVar13 = 0;
    }
LAB_02f57410:
    puVar3 = local_d0;
    lVar10 = *(long *)(param_1 + 0x210);
    lVar7 = *(long *)(*(long *)(lVar10 + 0x580) + 0xa0);
    if (lVar7 != 0) {
      *(undefined1 *)(lVar7 + 0xbc) = uVar13;
      lVar10 = *(long *)(param_1 + 0x210);
    }
    lVar10 = *(long *)(*(long *)(lVar10 + 0x570) + 0xa0);
    if (lVar10 != 0) {
      local_e8 = CONCAT44(local_e8._4_4_,*(undefined4 *)(lVar10 + 0x14));
      if (local_d0 != &DAT_04069228) {
        iVar5 = 4;
        if (local_c8 < 5) {
          iVar5 = local_c8 + -1;
        }
        memcpy(local_d0,&DAT_04069228,(long)iVar5);
        puVar3[iVar5] = 0;
      }
      FUN_02ee2b00(puVar12,&local_e8,1);
    }
  }
  return;
}


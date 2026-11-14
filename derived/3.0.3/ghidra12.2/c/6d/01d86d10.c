
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_01d86d10(long param_1)

{
  char cVar1;
  int iVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  uint uVar5;
  bool bVar6;
  long lVar7;
  undefined *puVar8;
  int iVar9;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  undefined *local_f8;
  undefined *local_f0;
  undefined **local_e8;
  undefined *local_e0;
  undefined4 local_d8;
  undefined local_d4 [63];
  undefined1 local_95;
  undefined **local_90;
  uint local_88;
  undefined *local_80;
  undefined1 *local_78;
  undefined *local_70;
  long local_68;
  
  puVar3 = PTR_DAT_04bb2020;
  if (*(char *)(param_1 + 200) == '\0') {
    return 1;
  }
  if (*(uint *)(DAT_04ccdcc0 + 4) < 6) {
    iVar2 = *(int *)(&DAT_04178ae0 + (long)(int)*(uint *)(DAT_04ccdcc0 + 4) * 4);
    local_68 = param_1 + 0x48;
    puVar8 = PTR_DAT_04bb2020 + 0x10;
    local_70 = puVar8;
    if (((DAT_05374be8 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_05374be8), iVar9 != 0)) {
      DAT_05374bd8 = puVar3 + 0x10;
      DAT_05374be0 = &DAT_0408f28c;
      __cxa_guard_release(&DAT_05374be8);
    }
    local_90 = &local_70;
    local_88 = 0;
    local_78 = DAT_05374be0;
    local_80 = puVar8;
    (**(code **)(local_70 + 0x18))(&local_70);
    lVar7 = 0;
    do {
      if (*(char *)(local_68 + lVar7) == '\0') {
LAB_01d86e08:
        uVar12 = (int)lVar7 + 1;
        goto LAB_01d86e0c;
      }
      if (*(char *)(local_68 + lVar7 + 1) == '\0') {
        lVar7 = lVar7 + 1;
        goto LAB_01d86e08;
      }
      if (*(char *)(local_68 + lVar7 + 2) == '\0') {
        lVar7 = lVar7 + 2;
        goto LAB_01d86e08;
      }
      lVar7 = lVar7 + 3;
    } while (lVar7 != 0x80001);
    uVar12 = 1;
LAB_01d86e0c:
    if ((local_90 != &local_70) || (local_88 != uVar12)) {
      do {
        local_95 = 0;
        local_d8 = 0x40;
        local_d4[0] = 0;
        local_e8 = &PTR_LAB_048fb9f8;
        local_e0 = local_d4;
        FUN_0076e020(&local_90,&local_e8);
        local_f8 = puVar3 + 0x10;
        local_f0 = &DAT_04178ae0 + iVar2;
        (*(code *)local_e8[3])(&local_e8);
        (*(code *)local_e8[3])(&local_e8);
        puVar8 = local_e0;
        (**(code **)(local_f8 + 0x18))(&local_f8);
        uVar5 = local_88;
        ppuVar4 = local_90;
        if (puVar8 == local_f0) {
          return 1;
        }
        uVar11 = 0;
        bVar6 = true;
        do {
          if (local_e0[uVar11] != local_f0[uVar11]) break;
          if (local_e0[uVar11] == '\0') {
            if (bVar6) {
              return 1;
            }
            break;
          }
          if (local_e0[uVar11 + 1] != local_f0[uVar11 + 1]) break;
          if (local_e0[uVar11 + 1] == '\0') {
            return 1;
          }
          if (local_e0[uVar11 + 2] != local_f0[uVar11 + 2]) break;
          if (local_e0[uVar11 + 2] == '\0') {
            return 1;
          }
          bVar6 = uVar11 < 0x7fffe;
          uVar11 = uVar11 + 3;
        } while (uVar11 != 0x80001);
        uVar11 = (ulong)local_88;
        (**(code **)(*local_90 + 0x18))(local_90);
        puVar8 = ppuVar4[1];
        lVar7 = 0;
        do {
          if (puVar8[lVar7] == '\0') {
LAB_01d86f7c:
            iVar9 = (int)lVar7;
            goto joined_r0x01d86f80;
          }
          if (puVar8[lVar7 + 1] == '\0') {
            lVar7 = lVar7 + 1;
            goto LAB_01d86f7c;
          }
          if (puVar8[lVar7 + 2] == '\0') {
            iVar9 = (int)lVar7 + 2;
            goto joined_r0x01d86f80;
          }
          lVar7 = lVar7 + 3;
        } while (lVar7 != 0x80001);
        iVar9 = 0;
joined_r0x01d86f80:
        if ((-1 < (int)uVar5) && ((int)uVar5 <= iVar9)) {
          for (; puVar8 = local_90[1], puVar8[uVar11] != '\0'; uVar11 = uVar11 + 1) {
            (**(code **)(local_80 + 0x18))(&local_80);
            uVar10 = 0;
            bVar6 = true;
            cVar1 = puVar8[uVar11];
            do {
              if (local_78[uVar10] == '\0') break;
              if (local_78[uVar10] == cVar1) {
                if (bVar6) goto LAB_01d87030;
                break;
              }
              if (local_78[uVar10 + 1] == '\0') break;
              if (local_78[uVar10 + 1] == cVar1) goto LAB_01d87030;
              if (local_78[uVar10 + 2] == '\0') break;
              if (local_78[uVar10 + 2] == cVar1) goto LAB_01d87030;
              bVar6 = uVar10 < 0x7fffe;
              uVar10 = uVar10 + 3;
            } while (uVar10 != 0x80001);
          }
LAB_01d87030:
          local_88 = (int)uVar11 + 1;
        }
      } while ((local_90 != &local_70) || (local_88 != uVar12));
    }
  }
  return 0;
}



/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_038e9c10(int *param_1,undefined4 *param_2,long *param_3)

{
  undefined ****ppppuVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  char cVar6;
  uint uVar7;
  undefined *puVar8;
  bool bVar9;
  ulong uVar10;
  int iVar11;
  long lVar12;
  int iVar13;
  int iVar14;
  undefined8 ***pppuVar15;
  undefined8 local_c0;
  int local_b8;
  int local_b4;
  int local_b0;
  int iStack_ac;
  int local_a8;
  int local_a4;
  undefined8 ****local_a0;
  undefined8 *local_98;
  undefined *local_90;
  undefined1 *local_88;
  char local_80 [4];
  char local_7c [4];
  undefined ****local_78;
  long local_70;
  int local_64;
  
  local_c0 = 0;
  local_b0 = 1;
  iStack_ac = 0x7b2;
  local_b8 = 0;
  local_b4 = 1;
  (**(code **)(*param_3 + 0x18))(param_3);
  puVar8 = PTR_DAT_04bb2020;
  local_70 = param_3[1];
  lVar12 = 0;
  do {
    if (*(char *)(local_70 + lVar12) == '\0') goto LAB_038e9cac;
    if (*(char *)(local_70 + lVar12 + 1) == '\0') {
      lVar12 = lVar12 + 1;
      goto LAB_038e9cac;
    }
    if (*(char *)(local_70 + lVar12 + 2) == '\0') {
      lVar12 = lVar12 + 2;
      goto LAB_038e9cac;
    }
    lVar12 = lVar12 + 3;
  } while (lVar12 != 0x80001);
  lVar12 = 0;
LAB_038e9cac:
  local_64 = (int)lVar12;
  local_7c[0] = '\x01';
  ppppuVar1 = (undefined ****)(PTR_DAT_04bb2020 + 0x10);
  local_98 = (undefined8 *)&DAT_040d759c;
  local_a0 = (undefined8 ****)ppppuVar1;
  local_78 = ppppuVar1;
  uVar10 = FUN_038ea320(local_7c,&iStack_ac,&local_78,&local_64,local_80,4,&local_a0,1,0,0xffffffff)
  ;
  if ((uVar10 & 1) == 0) {
    local_98 = (undefined8 *)&DAT_040d759c;
    local_a0 = (undefined8 ****)ppppuVar1;
    uVar10 = FUN_038ea320(local_7c,&local_b0,&local_78,&local_64,local_80,2,&local_a0,1,1,0xc);
    if ((uVar10 & 1) == 0) {
      local_98 = (undefined8 *)&DAT_0406073b;
      local_a0 = (undefined8 ****)(puVar8 + 0x10);
      uVar10 = FUN_038ea320(local_7c,&local_b4,&local_78,&local_64,local_80,2,&local_a0,1,1,0x1f);
      if ((uVar10 & 1) == 0) {
        local_98 = (undefined8 *)&DAT_040addd9;
        local_a0 = (undefined8 ****)(puVar8 + 0x10);
        uVar10 = FUN_038ea320(local_7c,&local_b8,&local_78,&local_64,local_80,2,&local_a0,0,0,0x17);
        if ((uVar10 & 1) == 0) {
          local_a0 = (undefined8 ****)(puVar8 + 0x10);
          local_98 = (undefined8 *)&DAT_040c239c;
          uVar10 = FUN_038ea320(local_7c,(long)&local_c0 + 4,&local_78,&local_64,local_80,2,
                                &local_a0,1,0,0x3b);
          if ((uVar10 & 1) == 0) {
            if (local_80[0] == ':') {
              local_a0 = (undefined8 ****)(puVar8 + 0x10);
              local_98 = (undefined8 *)&DAT_0405efb8;
              uVar10 = FUN_038ea320(local_7c,&local_c0,&local_78,&local_64,local_80,2,&local_a0,1,0,
                                    0x3b);
              iVar14 = local_64;
              if ((uVar10 & 1) != 0) goto LAB_038e9e58;
              if (local_80[0] == '.') {
                if (local_64 == 0) {
                  return 0;
                }
                local_a0 = &local_78;
                local_98 = (undefined8 *)((ulong)local_98 & 0xffffffff00000000);
                local_90 = puVar8 + 0x10;
                local_88 = &DAT_040e6a94;
                (*(code *)local_78[3])(&local_78);
                lVar12 = 0;
                do {
                  if (*(char *)(local_70 + lVar12) == '\0') {
LAB_038e9fcc:
                    if ((int)lVar12 < 0) goto LAB_038ea08c;
                    break;
                  }
                  if (*(char *)(local_70 + lVar12 + 1) == '\0') {
                    lVar12 = lVar12 + 1;
                    goto LAB_038e9fcc;
                  }
                  if (*(char *)(local_70 + lVar12 + 2) == '\0') {
                    lVar12 = lVar12 + 2;
                    goto LAB_038e9fcc;
                  }
                  lVar12 = lVar12 + 3;
                } while (lVar12 != 0x80001);
                pppuVar15 = local_a0[1];
                if (*(char *)pppuVar15 == '\0') {
                  iVar11 = 1;
                }
                else {
                  lVar12 = 0;
                  do {
                    (**(code **)(local_90 + 0x18))(&local_90);
                    uVar10 = 0;
                    bVar9 = true;
                    cVar6 = *(char *)pppuVar15;
                    do {
                      if (local_88[uVar10] == '\0') break;
                      if (local_88[uVar10] == cVar6) {
                        if (bVar9) goto LAB_038ea080;
                        break;
                      }
                      if (local_88[uVar10 + 1] == '\0') break;
                      if (local_88[uVar10 + 1] == cVar6) goto LAB_038ea080;
                      if (local_88[uVar10 + 2] == '\0') break;
                      if (local_88[uVar10 + 2] == cVar6) goto LAB_038ea080;
                      bVar9 = uVar10 < 0x7fffe;
                      uVar10 = uVar10 + 3;
                    } while (uVar10 != 0x80001);
                    lVar12 = lVar12 + 1;
                    pppuVar15 = (undefined8 ***)((long)local_a0[1] + lVar12);
                  } while (*(char *)pppuVar15 != '\0');
LAB_038ea080:
                  iVar11 = (int)lVar12 + 1;
                }
                local_98 = (undefined8 *)CONCAT44(local_98._4_4_,iVar11);
LAB_038ea08c:
                (*(code *)local_78[3])(&local_78);
                lVar12 = 0;
                do {
                  if (*(char *)(local_70 + lVar12) == '\0') {
LAB_038ea0e0:
                    iVar11 = (int)lVar12 + 1;
                    goto LAB_038ea0e4;
                  }
                  if (*(char *)(local_70 + lVar12 + 1) == '\0') {
                    lVar12 = lVar12 + 1;
                    goto LAB_038ea0e0;
                  }
                  if (*(char *)(local_70 + lVar12 + 2) == '\0') {
                    lVar12 = lVar12 + 2;
                    goto LAB_038ea0e0;
                  }
                  lVar12 = lVar12 + 3;
                } while (lVar12 != 0x80001);
                iVar11 = 1;
LAB_038ea0e4:
                iVar3 = (int)local_98;
                if (((undefined *****)local_a0 == &local_78) && ((int)local_98 == iVar11)) {
                  iVar11 = 0;
                  iVar14 = 0;
                  goto LAB_038e9e68;
                }
                uVar7 = (int)local_98 - 1;
                (*(code *)local_78[3])(&local_78);
                lVar12 = 0;
                do {
                  if (*(char *)(local_70 + lVar12) == '\0') goto LAB_038ea164;
                  if (*(char *)(local_70 + lVar12 + 1) == '\0') {
                    lVar12 = lVar12 + 1;
                    goto LAB_038ea164;
                  }
                  if (*(char *)(local_70 + lVar12 + 2) == '\0') {
                    lVar12 = lVar12 + 2;
                    goto LAB_038ea164;
                  }
                  lVar12 = lVar12 + 3;
                } while (lVar12 != 0x80001);
                lVar12 = 0;
LAB_038ea164:
                iVar11 = (int)local_98;
                uVar10 = (ulong)local_98 & 0xffffffff;
                pcVar5 = PTR_DAT_04bb2120;
                if ((int)uVar7 <= (int)lVar12 && 0 < iVar3) {
                  pcVar5 = (char *)(local_70 + (ulong)uVar7);
                }
                local_80[0] = *pcVar5;
                (*(code *)local_78[3])(&local_78);
                lVar12 = 0;
                do {
                  if (*(char *)(local_70 + lVar12) == '\0') goto LAB_038ea1dc;
                  if (*(char *)(local_70 + lVar12 + 1) == '\0') {
                    lVar12 = lVar12 + 1;
                    goto LAB_038ea1dc;
                  }
                  if (*(char *)(local_70 + lVar12 + 2) == '\0') {
                    lVar12 = lVar12 + 2;
                    goto LAB_038ea1dc;
                  }
                  lVar12 = lVar12 + 3;
                } while (lVar12 != 0x80001);
                lVar12 = 0;
LAB_038ea1dc:
                lVar2 = local_70 + uVar10;
                local_70 = *(long *)(PTR_PTR_04bb2238 + 8);
                if (iVar11 <= (int)lVar12 && -1 < iVar11) {
                  local_70 = lVar2;
                }
                local_64 = iVar14 - (int)local_98;
              }
            }
            if ((local_80[0] == '-') || (local_80[0] == '+')) {
              local_a0 = (undefined8 ****)(puVar8 + 0x10);
              local_a4 = 0;
              local_98 = (undefined8 *)&DAT_040addd9;
              uVar10 = FUN_038ea320(local_7c,&local_a4,&local_78,&local_64,0,2,&local_a0,0,0,0xb);
              if (local_7c[0] == '\0') {
                if ((uVar10 & 1) != 0) {
                  return 0;
                }
                iVar14 = 0;
              }
              else {
                iVar14 = -local_a4;
                if (local_80[0] != '-') {
                  iVar14 = local_a4;
                }
                if ((uVar10 & 1) != 0) {
                  iVar11 = 0;
                  goto LAB_038e9e68;
                }
              }
              local_a8 = 0;
              local_a0 = (undefined8 ****)(puVar8 + 0x10);
              local_98 = &DAT_0407ebb1;
              uVar10 = FUN_038ea320(local_7c,&local_a8,&local_78,&local_64,0,2,&local_a0,1,0,0x3b);
              if ((uVar10 & 1) == 0) {
                return 0;
              }
              if (local_7c[0] == '\0') {
                return 0;
              }
              iVar11 = -local_a8;
              if (local_80[0] != '-') {
                iVar11 = local_a8;
              }
              local_64 = local_64 + -2;
            }
            else {
              iVar14 = 0;
              iVar11 = 0;
            }
            if (local_64 != 0) {
              return 0;
            }
            goto LAB_038e9e68;
          }
        }
      }
    }
  }
LAB_038e9e58:
  iVar11 = 0;
  iVar14 = 0;
  if (local_7c[0] == '\0') {
    return 0;
  }
LAB_038e9e68:
  *param_1 = iStack_ac;
  param_1[1] = local_b0;
  iVar3 = local_b0 + 0xc;
  if (2 < local_b0) {
    iVar3 = local_b0;
  }
  iStack_ac = iStack_ac - (uint)(local_b0 < 3);
  iVar4 = iStack_ac + 3;
  if (-1 < iStack_ac) {
    iVar4 = iStack_ac;
  }
  iVar13 = (int)((ulong)((long)iStack_ac * -0x51eb851f) >> 0x20);
  param_1[4] = local_b8;
  param_1[5] = local_c0._4_4_;
  param_1[6] = (int)local_c0;
  param_1[2] = local_b4;
  param_1[3] = (iStack_ac + local_b4 + (iVar4 >> 2) + ((iVar13 >> 5) - (iVar13 >> 0x1f)) +
                iStack_ac / 400 + (iVar3 * 0x1a + 0x10) / 10) % 7;
  *param_2 = 0;
  param_2[1] = iVar14;
  param_2[2] = iVar11;
  param_2[3] = 0;
  return 1;
}


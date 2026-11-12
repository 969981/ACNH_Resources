
void FUN_00882240(long param_1,long *param_2,long *param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  short sVar5;
  undefined *puVar6;
  undefined *__s;
  int iVar7;
  undefined4 uVar8;
  uint *puVar9;
  ulong uVar10;
  long lVar11;
  uint *puVar12;
  int *piVar13;
  ulong uVar14;
  undefined1 *puVar15;
  char cVar16;
  ulong local_e0;
  short local_d8;
  undefined1 uStack_d6;
  undefined1 uStack_d5;
  undefined2 uStack_d4;
  undefined1 uStack_d2;
  undefined1 uStack_d1;
  undefined1 local_d0 [4];
  undefined1 local_cc [4];
  ulong local_c8;
  undefined *local_c0;
  undefined1 *local_b8;
  int local_b0;
  undefined1 local_ac [63];
  undefined1 local_6d;
  long local_68;
  
  if (-1 < *param_3) {
    local_b0 = 0x40;
    local_6d = 0;
    local_c0 = PTR_DAT_04bb2f70 + 0x10;
    local_b8 = local_ac;
    (**(code **)(*param_2 + 0x18))(param_2);
    puVar15 = (undefined1 *)param_2[1];
    if (local_ac != puVar15) {
      (**(code **)(*param_2 + 0x18))(param_2);
      lVar11 = 0;
      do {
        if (*(char *)(param_2[1] + lVar11) == '\0') goto LAB_00882310;
        lVar1 = param_2[1] + lVar11;
        if (*(char *)(lVar1 + 1) == '\0') {
          lVar11 = lVar11 + 1;
          goto LAB_00882310;
        }
        if (*(char *)(lVar1 + 2) == '\0') {
          lVar11 = lVar11 + 2;
          goto LAB_00882310;
        }
        lVar11 = lVar11 + 3;
      } while (lVar11 != 0x80001);
      lVar11 = 0;
LAB_00882310:
      iVar7 = (int)lVar11;
      if (local_b0 <= (int)lVar11) {
        iVar7 = local_b0 + -1;
      }
      memcpy(local_ac,puVar15,(long)iVar7);
      local_ac[iVar7] = 0;
    }
    puVar15 = local_b8;
    lVar11 = 0;
    local_c0 = PTR_DAT_04bb2bc0 + 0x10;
    local_b8[(long)local_b0 + -1] = 0;
    do {
      if (local_b8[lVar11] == '\0') goto LAB_0088239c;
      if (local_b8[lVar11 + 1] == '\0') {
        lVar11 = lVar11 + 1;
        goto LAB_0088239c;
      }
      if (local_b8[lVar11 + 2] == '\0') {
        lVar11 = lVar11 + 2;
        goto LAB_0088239c;
      }
      lVar11 = lVar11 + 3;
    } while (lVar11 != 0x80001);
    lVar11 = 0;
LAB_0088239c:
    uVar2 = (uint)lVar11 & ((int)(uint)lVar11 >> 0x1f ^ 0xffffffffU);
    uVar3 = 10;
    if ((int)(local_b0 - uVar2) < 0xb) {
      uVar3 = local_b0 + ~uVar2;
    }
    if (0 < (int)uVar3) {
      memcpy(local_b8 + uVar2,"AddBbsYear",(ulong)uVar3);
      puVar15[(ulong)uVar3 + (ulong)uVar2] = 0;
    }
    iVar7 = FUN_0273ea30(&local_c0);
    if (iVar7 != (short)param_3[2]) {
      uVar14 = param_3[2];
      local_c8 = uVar14;
      (**(code **)(*param_2 + 0x18))(param_2);
      uVar8 = FUN_006bd550(param_2[1],0);
      local_68 = CONCAT44(local_68._4_4_,uVar8);
      puVar9 = (uint *)FUN_0088c0d0(param_1 + 8,&local_68);
      if (puVar9 != (uint *)0x0) {
        local_cc[0] = 1;
        local_d0[0] = 1;
        uVar10 = FUN_00874dd0(puVar9,puVar9,local_cc,local_d0,uVar14 & 0xffffffff);
        __s = PTR_DAT_04bb3250;
        puVar6 = PTR_DAT_04bb3248;
        if ((uVar10 & 1) != 0) {
          sVar5 = (short)uVar14;
          uStack_d2 = 0;
          uStack_d6 = local_cc[0];
          uStack_d5 = local_d0[0];
          uStack_d4 = 5;
          local_e0 = CONCAT17(uStack_d1,
                              (uint7)CONCAT24(5,CONCAT13(local_d0[0],CONCAT12(local_cc[0],sVar5))));
          local_d8 = sVar5;
          if (*puVar9 != 0) {
            cVar16 = *PTR_DAT_04bb3248;
            do {
              if (cVar16 == '\0') {
                cVar16 = '\x01';
                *puVar6 = 1;
                memset(__s,0xff,0x288);
                uVar2 = *puVar9;
              }
              else {
                uVar2 = *(uint *)(__s + 0x30);
                if (-1 < (int)uVar2) {
                  if ((byte *)((ulong)uVar2 + (long)puVar9) != (byte *)0x0) {
                    bVar4 = *(byte *)((ulong)uVar2 + (long)puVar9);
                    local_68 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_e0);
                    if (bVar4 != 0) {
                      local_68 = local_68 + (long)(int)(uint)bVar4 * -0x15180;
                    }
                    goto LAB_00882598;
                  }
                  break;
                }
                if (uVar2 != 0xffffffff) break;
                uVar2 = *puVar9;
              }
              if ((uVar2 == 0) || (puVar12 = (uint *)(ulong)uVar2, puVar9 == puVar12)) break;
              lVar11 = 0xc;
              if (*(char *)((long)puVar9 + (10 - (long)puVar12)) != '\0') {
                lVar11 = 0x1c;
              }
              lVar11 = (long)puVar9 + (lVar11 - (long)puVar12);
              if (lVar11 == 0) break;
              uVar14 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar12));
              *(undefined4 *)(__s + 0x30) = 0xfffffffe;
              if (uVar14 == 0) break;
              piVar13 = (int *)(lVar11 + 4);
              while (piVar13[-1] != -0x6ad30cd2) {
                piVar13 = piVar13 + 2;
                uVar14 = uVar14 - 1;
                if (uVar14 == 0) goto LAB_00882590;
              }
              iVar7 = 0;
              if (*piVar13 != -1) {
                iVar7 = *piVar13;
              }
              *(int *)(__s + 0x30) = iVar7;
              if (*puVar9 == 0) break;
            } while( true );
          }
LAB_00882590:
          local_68 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_e0);
LAB_00882598:
          local_e0 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_68);
          if ((((sVar5 != 0) && ((local_e0 & 0xffff) != 0)) &&
              (uVar14 = FUN_00a828ac(&local_c8,&local_e0,&local_d8), (uVar14 & 1) != 0)) &&
             ((uVar14 = FUN_00879630(param_1,param_2,0), (uVar14 & 1) != 0 &&
              (uVar14 = FUN_0087bc20(param_1,param_2,&local_d8), (uVar14 & 1) != 0)))) {
            *(ulong *)(param_1 + 0x14e8) =
                 CONCAT17(uStack_d1,
                          CONCAT16(uStack_d2,
                                   CONCAT24(uStack_d4,
                                            CONCAT13(uStack_d5,CONCAT12(uStack_d6,local_d8)))));
            FUN_0087e230(param_1,param_2,&local_c8,&local_d8);
          }
        }
      }
    }
  }
  return;
}


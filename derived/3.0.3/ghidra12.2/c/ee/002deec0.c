
void FUN_002deec0(undefined8 param_1,long param_2,int *param_3,undefined4 param_4,long param_5,
                 uint param_6)

{
  undefined1 *puVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined4 local_a0;
  ErrorResultVariant aEStack_9c [12];
  undefined1 *local_90;
  undefined1 *local_88;
  undefined1 *local_80;
  undefined8 local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  undefined4 local_54;
  
  if ((param_3 == (int *)0x0) || (*param_3 == 1)) {
    uVar5 = 0x10c07;
  }
  else {
    if ((*(long *)(param_2 + 0x2c0) == 0) && (*(int *)(param_2 + 0x154) != 1)) {
      *(int **)(param_2 + 0x2c0) = param_3;
      local_78 = (undefined1 *)0x0;
      if (param_6 == 0) {
        uVar11 = *(undefined8 *)(param_2 + 0x58);
        local_90 = (undefined1 *)0x0;
        local_88 = (undefined1 *)0x0;
        local_80 = (undefined1 *)0x0;
      }
      else {
        uVar12 = (ulong)param_6;
        local_78 = (undefined1 *)FUN_00187df4(uVar12);
        uVar13 = 0;
        local_68 = local_78 + uVar12;
        puVar6 = local_78;
        local_70 = local_78;
        do {
          if (puVar6 == local_68) {
            uVar9 = (long)puVar6 - (long)local_78;
            uVar8 = uVar9 + 1;
            if ((long)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01c6e7e8(&local_78);
            }
            uVar2 = uVar9 * 2;
            if (uVar9 * 2 <= uVar8) {
              uVar2 = uVar8;
            }
            if (0x3ffffffffffffffe < uVar9) {
              uVar2 = 0x7fffffffffffffff;
            }
            if (uVar2 == 0) {
              lVar4 = 0;
            }
            else {
              lVar4 = FUN_00187df4(uVar2);
            }
            puVar6 = (undefined1 *)(lVar4 + uVar9);
            puVar10 = puVar6 + 1;
            *puVar6 = *(undefined1 *)(param_5 + uVar13);
            if (local_70 != local_78) {
              uVar3 = (int)local_70 - (int)local_78;
              uVar8 = (ulong)uVar3 & 7;
              if ((uVar3 & 7) == 0) {
                if (&DAT_00000006 < local_70 + ~(ulong)local_78) goto LAB_002df050;
              }
              else {
                puVar7 = local_70;
                do {
                  puVar7 = puVar7 + -1;
                  uVar8 = uVar8 - 1;
                  puVar6 = puVar6 + -1;
                  *puVar6 = *puVar7;
                } while (uVar8 != 0);
                puVar1 = local_70 + ~(ulong)local_78;
                local_70 = puVar7;
                if (&DAT_00000006 < puVar1) {
LAB_002df050:
                  do {
                    puVar6[-1] = local_70[-1];
                    puVar6[-2] = local_70[-2];
                    puVar6[-3] = local_70[-3];
                    puVar6[-4] = local_70[-4];
                    puVar6[-5] = local_70[-5];
                    puVar6[-6] = local_70[-6];
                    puVar6[-7] = local_70[-7];
                    local_70 = local_70 + -8;
                    puVar6 = puVar6 + -8;
                    *puVar6 = *local_70;
                  } while (local_70 != local_78);
                }
              }
              local_70 = local_78;
            }
            local_68 = (undefined1 *)(lVar4 + uVar2);
            local_78 = puVar6;
            puVar6 = puVar10;
            if (local_70 != (undefined1 *)0x0) {
              puVar6 = local_70;
              local_70 = puVar10;
              FUN_00187e4c(puVar6);
              puVar6 = local_70;
            }
          }
          else {
            puVar10 = puVar6 + 1;
            *puVar6 = *(undefined1 *)(param_5 + uVar13);
            puVar6 = puVar10;
          }
          local_70 = puVar6;
          puVar7 = local_78;
          uVar13 = uVar13 + 1;
          puVar6 = puVar10;
        } while (uVar13 != uVar12);
        local_90 = (undefined1 *)0x0;
        local_88 = (undefined1 *)0x0;
        uVar11 = *(undefined8 *)(param_2 + 0x58);
        uVar13 = (long)puVar10 - (long)local_78;
        local_80 = (undefined1 *)0x0;
        if (uVar13 != 0) {
          if ((long)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c6e7e8(&local_90);
          }
          local_90 = (undefined1 *)FUN_00187df4(uVar13);
          local_80 = local_90 + uVar13;
          local_88 = local_90;
          puVar6 = puVar7;
          for (uVar13 = uVar13 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
            *local_88 = *puVar6;
            local_88 = local_88 + 1;
            puVar6 = puVar6 + 1;
          }
          if ((undefined1 *)0x2 < puVar10 + ~(ulong)puVar7) {
            do {
              *local_88 = *puVar6;
              local_88[1] = puVar6[1];
              local_88[2] = puVar6[2];
              puVar7 = puVar6 + 3;
              puVar6 = puVar6 + 4;
              local_88[3] = *puVar7;
              local_88 = local_88 + 4;
            } while (puVar6 != puVar10);
          }
        }
      }
      uVar13 = FUN_00310db0(uVar11,param_2 + 0x140,param_4,&local_90);
      if (local_90 != (undefined1 *)0x0) {
        local_88 = local_90;
        FUN_00187e4c();
      }
      if ((uVar13 & 1) == 0) {
        *(undefined8 *)(param_2 + 0x2c0) = 0;
        local_a0 = 0xac5a;
      }
      else {
        FUN_00220f78(*(undefined8 *)(param_2 + 0x2c0));
        local_a0 = 0;
      }
      local_54 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_9c,(Result *)&local_54);
      FUN_002296c4(param_1,&local_a0);
      if (local_78 == (undefined1 *)0x0) {
        return;
      }
      FUN_00187e4c();
      return;
    }
    uVar5 = 0x10c08;
  }
  local_78 = (undefined1 *)CONCAT44(local_78._4_4_,uVar5);
  local_a0 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((long)&local_78 + 4),(Result *)&local_a0);
  FUN_002296c4(param_1,&local_78);
  return;
}


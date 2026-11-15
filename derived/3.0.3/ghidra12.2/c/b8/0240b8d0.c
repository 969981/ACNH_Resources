
int FUN_0240b8d0(long param_1,undefined1 param_2,byte param_3)

{
  uint uVar1;
  char *pcVar2;
  bool bVar3;
  byte bVar4;
  int iVar5;
  long lVar6;
  float *pfVar7;
  uint *puVar8;
  ulong uVar9;
  char cVar10;
  uint *puVar11;
  int *piVar12;
  undefined8 *puVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  float local_84;
  undefined8 local_80;
  undefined4 local_78;
  byte local_74;
  byte local_73;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  undefined4 local_50;
  long local_48;
  
  local_48 = 0;
  local_50 = 3;
  local_60 = 0;
  uStack_5c = 0;
  uStack_58 = 0;
  local_70 = 0;
  local_68 = 0;
  uStack_64 = 0;
  if ((param_3 & 1) == 0) {
    lVar6 = *(long *)(param_1 + 0x68);
    if (lVar6 == 0) {
      local_84 = 0.0;
      fVar19 = 0.0;
      fVar14 = 0.0;
    }
    else {
      pfVar7 = (float *)(PTR_DAT_04bb2d00 + ((ulong)(*(uint *)(lVar6 + 0x2b4) >> 0x14) & 0xff0));
      fVar19 = (float)(*(uint *)(lVar6 + 0x2b4) & 0xffffff) * 5.9604645e-08;
      fVar17 = *pfVar7 + fVar19 * pfVar7[1];
      fVar14 = pfVar7[2] + fVar19 * pfVar7[3];
      fVar19 = fVar17 * 0.0;
      local_84 = *(float *)(lVar6 + 0x278) + fVar19 * 0.0 + fVar14 * 0.0 + (fVar17 + 0.0) * 6.0;
      fVar19 = *(float *)(lVar6 + 0x27c) +
               (fVar19 * 0.0 + 1.0) * 0.0 + fVar14 * 0.0 * 0.0 + fVar19 * 6.0;
      fVar14 = *(float *)(lVar6 + 0x280) + (fVar14 * 0.0 * 0.0 - fVar17 * 0.0) + fVar14 * 6.0;
    }
    local_80 = CONCAT44(fVar14,fVar19);
    fVar19 = 0.0;
    uVar9 = FUN_016ebc50(0,&local_84);
    if ((uVar9 & 1) != 0) {
      lVar6 = *(long *)(param_1 + 0x68);
      fVar14 = 0.0;
      fVar17 = 0.0;
      if (lVar6 != 0) {
        pfVar7 = (float *)(PTR_DAT_04bb2d00 + ((ulong)(*(uint *)(lVar6 + 0x2b4) >> 0x14) & 0xff0));
        fVar19 = (float)(*(uint *)(lVar6 + 0x2b4) & 0xffffff) * 5.9604645e-08;
        fVar18 = *pfVar7 + fVar19 * pfVar7[1];
        fVar17 = pfVar7[2] + fVar19 * pfVar7[3];
        fVar14 = fVar18 * 0.0;
        fVar19 = *(float *)(lVar6 + 0x278) + fVar14 * 0.0 + fVar17 * 0.0 + (fVar18 + 0.0) * 10.0;
        fVar14 = *(float *)(lVar6 + 0x27c) +
                 (fVar14 * 0.0 + 1.0) * 0.0 + fVar17 * 0.0 * 0.0 + fVar14 * 10.0;
        fVar17 = *(float *)(lVar6 + 0x280) + (fVar17 * 0.0 * 0.0 - fVar18 * 0.0) + fVar17 * 10.0;
      }
      local_80 = CONCAT44(fVar17,fVar14);
      fVar14 = 0.0;
      local_84 = fVar19;
      uVar9 = FUN_016ebc50(0,&local_84);
      if ((uVar9 & 1) != 0) {
        lVar6 = *(long *)(param_1 + 0x68);
        fVar19 = 0.0;
        fVar17 = 0.0;
        if (lVar6 != 0) {
          pfVar7 = (float *)(PTR_DAT_04bb2d00 + ((ulong)(*(uint *)(lVar6 + 0x2b4) >> 0x14) & 0xff0))
          ;
          fVar19 = (float)(*(uint *)(lVar6 + 0x2b4) & 0xffffff) * 5.9604645e-08;
          fVar18 = *pfVar7 + fVar19 * pfVar7[1];
          fVar17 = pfVar7[2] + fVar19 * pfVar7[3];
          fVar19 = fVar18 * 0.0;
          fVar14 = *(float *)(lVar6 + 0x278) + fVar19 * 0.0 + fVar17 * 0.0 + (fVar18 + 0.0) * 15.0;
          fVar19 = *(float *)(lVar6 + 0x27c) +
                   (fVar19 * 0.0 + 1.0) * 0.0 + fVar17 * 0.0 * 0.0 + fVar19 * 15.0;
          fVar17 = *(float *)(lVar6 + 0x280) + (fVar17 * 0.0 * 0.0 - fVar18 * 0.0) + fVar17 * 15.0;
        }
        local_80 = CONCAT44(fVar17,fVar19);
        uVar20 = 0;
        local_84 = fVar14;
        uVar9 = FUN_016ebc50(0,&local_84);
        if ((uVar9 & 1) != 0) {
          uVar15 = 0;
          uVar16 = 0;
          bVar4 = 0;
LAB_0240be48:
          local_80 = CONCAT44(uVar15,uVar16);
          local_84 = (float)(CONCAT31(local_84._1_3_,param_2) & 0xffffff01);
          local_78 = uVar20;
          local_74 = param_3 & 1;
          local_73 = bVar4 & 1;
          iVar5 = FUN_0240bf18(param_1,&local_84);
          if (iVar5 == 0) {
            local_80 = CONCAT44(local_60,uStack_64);
            local_84 = (float)(CONCAT31(local_84._1_3_,param_2) & 0xffffff01);
            local_78 = uStack_5c;
            local_74 = param_3 & 1;
            local_73 = bVar4 & 1;
            iVar5 = FUN_0240bf18(param_1,&local_84);
            return iVar5;
          }
          return iVar5;
        }
      }
    }
  }
  else {
    pfVar7 = (float *)PTR_DAT_04bc3038;
    if (*(char *)(param_1 + 0x12f8) != '\0') {
      pfVar7 = (float *)(param_1 + 0xeec);
    }
    fVar19 = SQRT(pfVar7[1] * pfVar7[1] + *pfVar7 * *pfVar7);
    lVar6 = FUN_0251e98c(1);
    pfVar7 = (float *)(**(code **)(*(long *)(lVar6 + 0x120) + 0xf0))(lVar6 + 0x120);
    if (*pfVar7 <= fVar19) {
      lVar6 = FUN_0251e98c(1);
      pfVar7 = (float *)(**(code **)(*(long *)(lVar6 + 0x120) + 0xf0))(lVar6 + 0x120);
      fVar14 = *pfVar7;
      lVar6 = FUN_0251e98c(1);
      pfVar7 = (float *)(**(code **)(*(long *)(lVar6 + 0x120) + 0xf0))(lVar6 + 0x120);
      fVar14 = (fVar19 - *pfVar7) / (1.0 - fVar14);
      fVar19 = 0.9999;
      if (fVar14 <= 0.9999) {
        fVar19 = fVar14;
      }
      bVar3 = true;
      if ((0.0 <= fVar14) && (bVar3 = false, !NAN(fVar19))) {
        bVar3 = fVar19 < 0.9;
      }
      if (!bVar3) {
        puVar13 = *(undefined8 **)(param_1 + 0x60);
        if (puVar13 == (undefined8 *)0x0) {
          if ((DAT_052461c0 & 1) == 0) {
            iVar5 = __cxa_guard_acquire(&DAT_052461c0);
            puVar13 = &DAT_05240280;
            if (iVar5 != 0) {
              FUN_016fcf10(&DAT_05240280);
              FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
              __cxa_guard_release(&DAT_052461c0);
            }
          }
          else {
            puVar13 = &DAT_05240280;
          }
        }
        local_84 = 0.0;
        if (puVar13[0x227] == 0) {
          puVar8 = (uint *)FUN_0171ee68(&DAT_04c931a0);
          pcVar2 = PTR_DAT_04bbde88;
          puVar13 = (undefined8 *)PTR_DAT_04bbde90;
        }
        else {
          puVar8 = (uint *)FUN_0171ee68(*(long *)(puVar13[0x227] + 0x88) + 0x60);
          pcVar2 = PTR_DAT_04bbde88;
          puVar13 = (undefined8 *)PTR_DAT_04bbde90;
        }
        PTR_DAT_04bbde88 = pcVar2;
        PTR_DAT_04bbde90 = (undefined *)puVar13;
        if ((puVar8 != (uint *)0x0) && (local_84 = 9.80909e-45, *puVar8 != 0)) {
          cVar10 = *pcVar2;
          do {
            if (cVar10 == '\0') {
              cVar10 = '\x01';
              *puVar13 = 0xffffffffffffffff;
              puVar13[1] = 0xffffffffffffffff;
              *pcVar2 = '\x01';
              puVar13[6] = 0xffffffffffffffff;
              puVar13[2] = 0xffffffffffffffff;
              puVar13[3] = 0xffffffffffffffff;
              puVar13[4] = 0xffffffffffffffff;
              puVar13[5] = 0xffffffffffffffff;
              uVar1 = *puVar8;
            }
            else {
              uVar1 = *(uint *)((long)puVar13 + 0x2c);
              if (-1 < (int)uVar1) {
                if (((char *)((ulong)uVar1 + (long)puVar8) != (char *)0x0) &&
                   (*(char *)((ulong)uVar1 + (long)puVar8) < '\0')) {
                  return 0;
                }
                break;
              }
              if (uVar1 != 0xffffffff) break;
              uVar1 = *puVar8;
            }
            if ((uVar1 == 0) || (puVar11 = (uint *)(ulong)uVar1, puVar8 == puVar11)) break;
            lVar6 = 0xc;
            if (*(char *)((long)puVar8 + (10 - (long)puVar11)) != '\0') {
              lVar6 = 0x1c;
            }
            lVar6 = (long)puVar8 + (lVar6 - (long)puVar11);
            if (lVar6 == 0) break;
            uVar9 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar11));
            *(undefined4 *)((long)puVar13 + 0x2c) = 0xfffffffe;
            if (uVar9 == 0) break;
            piVar12 = (int *)(lVar6 + 4);
            while (piVar12[-1] != 0x42ad246a) {
              piVar12 = piVar12 + 2;
              uVar9 = uVar9 - 1;
              if (uVar9 == 0) goto LAB_0240bdc8;
            }
            iVar5 = 0;
            if (*piVar12 != -1) {
              iVar5 = *piVar12;
            }
            *(int *)((long)puVar13 + 0x2c) = iVar5;
            if (*puVar8 == 0) break;
          } while( true );
        }
LAB_0240bdc8:
        fVar14 = *(float *)(*(long *)(param_1 + 0x68) + 0x2e0);
        fVar19 = -fVar14;
        if (0.0 <= fVar14) {
          fVar19 = fVar14;
        }
        lVar6 = FUN_0251e98c(1);
        pfVar7 = (float *)(**(code **)(*(long *)(lVar6 + 0xea0) + 0xf0))(lVar6 + 0xea0);
        if (fVar19 <= *pfVar7) {
          local_50 = 4;
          bVar4 = FUN_016f3040(param_1,&local_70);
          local_50 = 6;
          local_48 = *(long *)(param_1 + 0x68) + 0x2b4;
          uVar9 = FUN_016f3040(param_1,&local_70);
          if ((uVar9 & 1) != 0) {
            uVar16 = (undefined4)local_70;
            uVar20 = local_68;
            uVar15 = local_70._4_4_;
            goto LAB_0240be48;
          }
        }
      }
    }
  }
  return 0;
}


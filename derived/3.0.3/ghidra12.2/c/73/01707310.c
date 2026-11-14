
/* WARNING: Removing unreachable block (ram,0x017074d0) */

undefined8 FUN_01707310(long *param_1,undefined8 param_2,uint param_3,uint param_4,uint param_5)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  uint *puVar8;
  undefined8 uVar9;
  char cVar10;
  ulong uVar11;
  int *piVar12;
  long lVar13;
  undefined *puVar14;
  uint local_80;
  undefined1 local_7c;
  undefined2 local_78;
  undefined1 local_76;
  undefined1 local_75;
  undefined4 local_74;
  undefined1 local_70;
  undefined2 local_6c;
  undefined1 local_6a;
  undefined1 local_69;
  undefined4 local_68;
  undefined2 local_64;
  undefined1 local_62;
  
  lVar13 = param_1[0x227];
  if (lVar13 == 0) {
    return 1;
  }
  if ((param_4 < 5) &&
     (puVar8 = (uint *)FUN_0171ee68(param_2), puVar6 = PTR_DAT_04bbde90, puVar14 = PTR_DAT_04bbde88,
     puVar8 != (uint *)0x0)) {
    if (*(char *)((long)param_1 + 0x5f06) == '\0') {
      local_80 = 0x12;
      uVar3 = *puVar8;
      if (uVar3 != 0) {
        cVar10 = *PTR_DAT_04bbde88;
        do {
          if (cVar10 == '\0') {
            cVar10 = '\x01';
            *(undefined8 *)puVar6 = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
            *puVar14 = 1;
            *(undefined8 *)(puVar6 + 0x30) = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 0x28) = 0xffffffffffffffff;
            uVar3 = *puVar8;
          }
          else {
            uVar4 = *(uint *)(puVar6 + 0x2c);
            if (-1 < (int)uVar4) {
              if (((ulong)uVar4 + (long)puVar8 != 0) &&
                 ((*(byte *)((ulong)uVar4 + (long)puVar8 + 2) >> 2 & 1) != 0)) goto LAB_01707374;
              break;
            }
            if (uVar4 != 0xffffffff) break;
          }
          puVar5 = (uint *)(ulong)uVar3;
          if ((puVar5 == (uint *)0x0) || (puVar8 == puVar5)) break;
          lVar2 = 0xc;
          if (*(char *)((long)puVar8 + (10 - (long)puVar5)) != '\0') {
            lVar2 = 0x1c;
          }
          lVar2 = (long)puVar8 + (lVar2 - (long)puVar5);
          if (lVar2 == 0) break;
          uVar11 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar5));
          *(undefined4 *)(puVar6 + 0x2c) = 0xfffffffe;
          if (uVar11 == 0) break;
          piVar12 = (int *)(lVar2 + 4);
          while (piVar12[-1] != 0x42ad246a) {
            piVar12 = piVar12 + 2;
            uVar11 = uVar11 - 1;
            if (uVar11 == 0) goto LAB_01707378;
          }
          iVar1 = 0;
          if (*piVar12 != -1) {
            iVar1 = *piVar12;
          }
          *(int *)(puVar6 + 0x2c) = iVar1;
          uVar3 = *puVar8;
          if (uVar3 == 0) break;
        } while( true );
      }
    }
    else {
LAB_01707374:
      param_5 = 1;
    }
  }
LAB_01707378:
  lVar13 = *(long *)(lVar13 + 0x78);
  param_1[0x2c6] = param_1[0x22a];
  param_1[0x2c5] = lVar13;
  puVar14 = (undefined *)param_1[0x2c8];
  if (puVar14 != PTR_DAT_04bb2f90 + 0x19) {
    iVar1 = 4;
    if ((int)param_1[0x2c9] < 5) {
      iVar1 = (int)param_1[0x2c9] + -1;
    }
    memcpy(puVar14,PTR_DAT_04bb2f90 + 0x19,(long)iVar1);
    puVar14[iVar1] = 0;
  }
  uVar3 = 0;
  if (*(char *)((long)param_1 + 0x5f03) != '\0') {
    uVar3 = param_3;
  }
  *(uint *)((long)param_1 + 0x1694) = *(uint *)(param_1 + 0x2d3);
  if (param_4 < 8) {
    *(uint *)(param_1 + 0x2d3) = 1 << (ulong)(param_4 & 0x1f) | *(uint *)(param_1 + 0x2d3);
  }
  local_80 = param_4;
  uVar7 = (**(code **)(param_1[0x2c4] + 0x30))(param_1 + 0x2c4);
  FUN_0171b760(param_1 + 0x2c4,uVar7,uVar3);
  if (param_1[0x227] != 0) {
    FUN_038501b0((float)uVar3,param_1[0x227],param_4);
    lVar13 = param_1[0x227];
    if (*(char *)(lVar13 + 0x2c0) != '\0') {
      *(undefined1 *)(lVar13 + 0x2c0) = 0;
      FUN_03855b20(lVar13 + 0xc0,0);
    }
    FUN_0384f8c0(lVar13,param_2,param_4,param_5 & 1);
    (**(code **)(*param_1 + 0x120))(param_1,param_2,uVar3,param_4);
  }
  if ((param_1[0x293] != 0) && (param_4 == 0)) {
    local_80 = CONCAT22(local_80._2_2_,0x100);
    FUN_016e1780(param_1[0x293],&local_80);
  }
  local_80 = 0;
  if (param_1[0x227] != 0) {
    local_80 = *(uint *)(param_1 + 0x2d3) >> 1 & 1;
  }
  if (local_80 == param_4) {
    *(uint *)((long)param_1 + 0x15f4) = *(uint *)((long)param_1 + 0x15f4) | 0x400;
    local_7c = 1;
    local_70 = 1;
    local_78 = *(undefined2 *)PTR_DAT_04bb37e0;
    local_76 = PTR_DAT_04bb37e0[2];
    local_75 = PTR_DAT_04bb37e0[3];
    local_74 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
    local_62 = 0;
    local_64 = 0x101;
    local_80 = uVar3;
    local_6c = local_78;
    local_6a = local_76;
    local_69 = local_75;
    local_68 = local_74;
    FUN_0170f380(param_1,&local_80);
    lVar13 = FUN_017067d4(param_1,*(undefined4 *)(param_1[9] + 0x230),0);
    if (lVar13 != 0) {
      FUN_01751bf0();
    }
  }
  uVar9 = 6;
  if ((1 < param_4) && (param_4 != 5)) {
    if (param_4 != 6) goto LAB_017075e4;
    FUN_01707f58(param_1,0,5,0);
    uVar9 = 7;
  }
  FUN_01707f58(param_1,0,uVar9,0);
LAB_017075e4:
  if (param_4 == 3) {
    *(undefined4 *)(param_1 + 0x2d8) = 0;
  }
  else if (param_4 == 2) {
    *(undefined4 *)((long)param_1 + 0x16c4) = 0;
  }
  if (param_1[0x227] != 0) {
    FUN_038501b0(0x40c00000,param_1[0x227],param_4);
  }
  return 1;
}



void FUN_02039990(undefined8 param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  undefined1 *puVar4;
  undefined1 *__dest;
  bool bVar5;
  int iVar6;
  undefined4 uVar7;
  uint *puVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined4 *puVar11;
  byte *pbVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  int local_1e0;
  undefined4 uStack_1dc;
  undefined1 *local_1d8;
  undefined *local_148;
  char *local_140;
  undefined8 local_138;
  undefined4 local_130;
  undefined8 local_12c;
  undefined8 local_124;
  undefined *local_118;
  undefined1 *local_110;
  int local_108;
  undefined1 local_104 [127];
  undefined1 local_85;
  undefined4 local_80;
  undefined2 local_7c;
  undefined8 local_78;
  undefined *local_70;
  undefined1 *local_68;
  undefined4 local_60;
  undefined1 local_5c [7];
  undefined1 local_55;
  
  local_55 = 0;
  local_60 = 8;
  local_5c[0] = 0;
  pbVar12 = (byte *)param_2[1];
  local_68 = local_5c;
  local_70 = PTR_DAT_04bb3768 + 0x10;
  FUN_038d1270(&local_70,"-----");
  uVar9 = (ulong)*pbVar12;
  if (uVar9 < 0x23) {
    FUN_038d1270(&local_70,"%s%02d",*(undefined8 *)(PTR_DAT_04bb9e38 + uVar9 * 8 + 0xb0),pbVar12[1])
    ;
  }
  FUN_0252d11c(&local_1e0);
  local_148 = PTR_DAT_04bb2020 + 0x10;
  local_140 = "WHEREAREN_ChocolateDemoReserve";
  iVar6 = FUN_02753180(&local_1e0,&local_148);
  if ((iVar6 == 0) || (uVar9 = FUN_0376ea70(&local_70), (uVar9 & 1) == 0)) {
    (**(code **)(local_70 + 0x18))(&local_70);
    (**(code **)(local_70 + 0x18))(&local_70);
    puVar4 = local_68;
    (**(code **)(param_2[6] + 0x18))(param_2 + 6);
    if (puVar4 != (undefined1 *)param_2[7]) {
      uVar9 = 0;
      bVar5 = true;
      do {
        if (local_68[uVar9] != ((undefined1 *)param_2[7])[uVar9]) break;
        if (local_68[uVar9] == '\0') {
          if (bVar5) {
            return;
          }
          break;
        }
        bVar5 = uVar9 < 0x80000;
        uVar9 = uVar9 + 1;
      } while (uVar9 != 0x80001);
      (**(code **)(local_70 + 0x18))(&local_70);
      (**(code **)(local_70 + 0x18))(&local_70);
      puVar4 = local_68;
      (**(code **)(param_2[10] + 0x18))(param_2 + 10);
      if (puVar4 != (undefined1 *)param_2[0xb]) {
        uVar9 = 0;
        bVar5 = true;
        do {
          if (local_68[uVar9] != ((undefined1 *)param_2[0xb])[uVar9]) break;
          if (local_68[uVar9] == '\0') {
            if (bVar5) {
              return;
            }
            break;
          }
          bVar5 = uVar9 < 0x80000;
          uVar9 = uVar9 + 1;
        } while (uVar9 != 0x80001);
        uVar9 = (ulong)*(byte *)param_2[1];
        if (((uVar9 < 0x23) &&
            (bVar3 = ((byte *)param_2[1])[1], bVar3 <= (byte)PTR_DAT_04bc27f0[uVar9])) &&
           ((*(uint *)(PTR_DAT_04bc2a20 + uVar9 * 4) >> (ulong)(bVar3 & 0x1f) & 1) != 0)) {
          puVar8 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
          uVar2 = puVar8[3];
          uVar1 = *puVar8 ^ *puVar8 << 0xb;
          *puVar8 = puVar8[1];
          puVar8[1] = puVar8[2];
          uVar1 = uVar1 >> 8 ^ uVar2 >> 0x13 ^ uVar1 ^ uVar2;
          puVar8[2] = uVar2;
          puVar8[3] = uVar1;
          local_130 = 0;
          local_85 = 0;
          local_104[0] = 0;
          local_108 = 0x80;
          local_148 = (undefined *)0xa00000000;
          local_140 = (char *)0x0;
          local_138 = 0x3f80000000000000;
          local_110 = local_104;
          local_78 = 0;
          local_7c = 0;
          local_12c = 0;
          local_124 = 0;
          local_118 = PTR_DAT_04bb2d88 + 0x10;
          local_80 = 7;
          uVar7 = FUN_021d7d60(param_2[1]);
          local_140 = *(char **)*param_2;
          local_130 = (undefined4)
                      (long)(((float)(uVar1 >> 9 | 0x3f800000) + -1.0) * 360.0 * 11930465.0);
          local_138 = CONCAT44(local_138._4_4_,*(undefined4 *)((undefined8 *)*param_2 + 1));
          (**(code **)(local_70 + 0x18))(&local_70);
          puVar4 = local_68;
          plVar13 = (long *)param_2[2];
          (**(code **)(*plVar13 + 0x18))(plVar13);
          plVar15 = (long *)param_2[3];
          lVar14 = plVar13[1];
          (**(code **)(*plVar15 + 0x18))(plVar15);
          FUN_0074fda4(&local_1e0,"%s/AIC:%s/AIF:%s",puVar4,lVar14,plVar15[1]);
          __dest = local_110;
          (**(code **)(CONCAT44(uStack_1dc,local_1e0) + 0x18))(&local_1e0);
          puVar4 = local_1d8;
          if (__dest != local_1d8) {
            (**(code **)(CONCAT44(uStack_1dc,local_1e0) + 0x18))(&local_1e0);
            lVar14 = 0;
            do {
              if (local_1d8[lVar14] == '\0') goto LAB_02039d64;
              if (local_1d8[lVar14 + 1] == '\0') {
                lVar14 = lVar14 + 1;
                goto LAB_02039d64;
              }
              if (local_1d8[lVar14 + 2] == '\0') {
                lVar14 = lVar14 + 2;
                goto LAB_02039d64;
              }
              lVar14 = lVar14 + 3;
            } while (lVar14 != 0x80001);
            lVar14 = 0;
LAB_02039d64:
            iVar6 = (int)lVar14;
            if (local_108 <= (int)lVar14) {
              iVar6 = local_108 + -1;
            }
            memcpy(__dest,puVar4,(long)iVar6);
            __dest[iVar6] = 0;
          }
          uVar1 = *(uint *)(param_2 + 4);
          local_12c = CONCAT44(uVar1,uVar7);
          local_124 = CONCAT44(local_124._4_4_,(int)param_2[5]);
          if ((uVar1 != 0xffffffff) && ((int)uVar1 < 0x10)) {
            puVar10 = &DAT_0545b240 + (ulong)uVar1 * 0x118;
            if (0xf < uVar1) {
              puVar10 = &DAT_0545b240;
            }
            if (puVar10[0x8c] != '\0') {
              *(undefined4 *)(puVar10 + 0xa4) = 0xd;
              *(undefined4 *)(puVar10 + 0xa8) = *(undefined4 *)((long)param_2 + 0x2c);
              *(int *)(puVar10 + 0xa0) = (int)param_2[5];
              puVar11 = (undefined4 *)*param_2;
              *(undefined4 *)(puVar10 + 0x94) = *puVar11;
              *(undefined4 *)(puVar10 + 0x98) = puVar11[1];
              uVar7 = puVar11[2];
              puVar10[0x90] = 1;
              puVar10[200] = 1;
              *(undefined4 *)(puVar10 + 0x9c) = uVar7;
            }
          }
          local_1e0 = *(int *)PTR_DAT_04bc20e0;
          if (local_1e0 == 10) {
            FUN_02030e80(param_1,&local_148);
          }
          else {
            FUN_0204b180(*(long *)PTR_DAT_04bb3968 + 0x3cc0,&local_148);
          }
        }
      }
    }
  }
  return;
}


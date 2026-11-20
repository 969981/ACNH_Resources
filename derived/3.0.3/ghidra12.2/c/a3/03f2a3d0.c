
void FUN_03f2a3d0(uint *param_1,uint param_2,uint param_3)

{
  long *plVar1;
  uint uVar2;
  bool bVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  byte *pbVar8;
  long lVar9;
  uint uVar10;
  long *plVar11;
  uint uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  undefined *local_70;
  byte *local_68;
  
  if (param_2 < *param_1 && param_3 < *param_1) {
    param_3 = param_3 - param_2;
    if (0 < (int)param_3) {
      uVar2 = param_3 + 1;
      local_70 = PTR_DAT_04bb2020 + 0x10;
      plVar1 = (long *)(*(long *)(param_1 + 2) + (long)(int)param_2 * 0x10);
      uVar13 = (ulong)(uVar2 >> 1);
      do {
        uVar5 = (uint)uVar13;
        uVar10 = uVar5 * 2;
        local_68 = (byte *)plVar1[(uVar13 - 1 & 0xffffffff) * 2 + 1];
        if ((int)uVar10 <= (int)uVar2) {
          uVar14 = uVar13 & 0xffffffff;
          do {
            if ((int)param_3 < (int)uVar10) {
              uVar5 = uVar10;
            }
            else {
              uVar5 = FUN_03f2a860(plVar1 + (long)(int)uVar10 * 2 + -2);
              uVar5 = uVar10 | uVar5 >> 0x1f;
            }
            (**(code **)(local_70 + 0x18))(&local_70);
            (**(code **)(local_70 + 0x18))(&local_70);
            pbVar7 = local_68;
            plVar11 = plVar1 + (long)(int)uVar5 * 2 + -2;
            (**(code **)(*plVar11 + 0x18))(plVar11);
            if (pbVar7 == (byte *)plVar1[(long)(int)uVar5 * 2 + -1]) {
LAB_03f2a544:
              (**(code **)(*plVar11 + 0x18))(plVar11);
              (**(code **)(*plVar11 + 0x18))(plVar11);
              (**(code **)(local_70 + 0x18))(&local_70);
              uVar5 = (uint)uVar14;
              break;
            }
            pbVar7 = (byte *)plVar1[(long)(int)uVar5 * 2 + -1];
            pbVar8 = local_68;
            lVar15 = 0x7ffff;
            while( true ) {
              bVar4 = *pbVar8;
              if (bVar4 != *pbVar7) break;
              if (bVar4 == 0) goto LAB_03f2a544;
              bVar3 = lVar15 == 0;
              pbVar7 = pbVar7 + 1;
              pbVar8 = pbVar8 + 1;
              lVar15 = lVar15 + -1;
              if (bVar3) goto LAB_03f2a544;
            }
            if (*pbVar7 <= bVar4) goto LAB_03f2a544;
            (**(code **)(plVar1[(long)(int)((uint)uVar14 - 1) * 2] + 0x10))
                      (plVar1 + (long)(int)((uint)uVar14 - 1) * 2,plVar11);
            uVar10 = uVar5 * 2;
            uVar14 = (ulong)uVar5;
          } while ((int)uVar10 <= (int)uVar2);
        }
        (**(code **)(plVar1[(long)(int)(uVar5 - 1) * 2] + 0x10))
                  (plVar1 + (long)(int)(uVar5 - 1) * 2,&local_70);
        bVar3 = 1 < (long)uVar13;
        uVar13 = uVar13 - 1;
      } while (bVar3);
      plVar11 = plVar1 + (ulong)param_3 * 2;
      local_68 = (byte *)plVar11[1];
      (**(code **)(*plVar11 + 0x10))(plVar11,plVar1);
      while (uVar10 = param_3, 2 < (int)uVar2) {
        uVar5 = 2;
        uVar12 = 1;
        do {
          if ((int)uVar5 < (int)uVar10) {
            uVar6 = FUN_03f2a860(plVar1 + (long)(int)uVar5 * 2 + -2);
            uVar6 = uVar5 | uVar6 >> 0x1f;
          }
          else {
            uVar6 = uVar5;
          }
          lVar15 = (long)(int)uVar6 + -1;
          plVar11 = plVar1 + lVar15 * 2;
          (**(code **)(local_70 + 0x18))(&local_70);
          (**(code **)(local_70 + 0x18))(&local_70);
          pbVar7 = local_68;
          (**(code **)(*plVar11 + 0x18))(plVar11);
          if (pbVar7 == (byte *)plVar11[1]) {
LAB_03f2a684:
            (**(code **)(*plVar11 + 0x18))(plVar11);
            (**(code **)(*plVar11 + 0x18))(plVar11);
            (**(code **)(local_70 + 0x18))(&local_70);
            lVar15 = (long)(int)(uVar12 - 1);
            break;
          }
          pbVar7 = (byte *)plVar11[1];
          pbVar8 = local_68;
          lVar9 = 0x7ffff;
          while( true ) {
            bVar4 = *pbVar8;
            if (bVar4 != *pbVar7) break;
            if (bVar4 == 0) goto LAB_03f2a684;
            bVar3 = lVar9 == 0;
            pbVar7 = pbVar7 + 1;
            pbVar8 = pbVar8 + 1;
            lVar9 = lVar9 + -1;
            if (bVar3) goto LAB_03f2a684;
          }
          if (*pbVar7 <= bVar4) goto LAB_03f2a684;
          (**(code **)(plVar1[(long)(int)(uVar12 - 1) * 2] + 0x10))
                    (plVar1 + (long)(int)(uVar12 - 1) * 2,plVar11);
          uVar5 = uVar6 * 2;
          uVar12 = uVar6;
        } while ((int)uVar5 < (int)uVar2);
        (**(code **)(plVar1[lVar15 * 2] + 0x10))(plVar1 + lVar15 * 2,&local_70);
        plVar11 = plVar1 + (ulong)(uVar10 - 1) * 2;
        local_68 = (byte *)plVar11[1];
        (**(code **)(*plVar11 + 0x10))(plVar11,plVar1);
        param_3 = uVar10 - 1;
        uVar2 = uVar10;
      }
      (**(code **)(*plVar1 + 0x10))(plVar1,&local_70);
    }
  }
  return;
}



undefined8 FUN_01923850(long *param_1,long param_2,undefined8 param_3,long param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  char *pcVar6;
  int *piVar7;
  uint *puVar8;
  undefined4 *puVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  uint local_5c [3];
  
  if (param_2 != 0) {
    pcVar6 = (char *)(**(code **)(param_1[0xb2] + 0xf0))(param_1 + 0xb2);
    if (*pcVar6 == '\0') {
LAB_019239f8:
      uVar13 = (**(code **)(*param_1 + 0x170))(param_1);
      if ((uVar13 & 1) == 0) {
        cVar4 = **(char **)(param_1[7] + 0x38);
        *(char *)(param_2 + 0x14) = cVar4;
        if (cVar4 == '\0') {
          FUN_019075e8(param_1,param_2);
          puVar9 = (undefined4 *)(**(code **)(param_1[8] + 0xf0))();
          local_5c[0] = *puVar9;
          switch(*puVar9) {
          case 0:
            return 1;
          case 1:
          case 2:
            uVar14 = FUN_01907310(param_1);
            uVar15 = FUN_01907820(param_1);
            FUN_01a1f9f0(uVar14,uVar15,param_2,param_3,param_2);
            break;
          case 3:
          case 4:
            FUN_01907d78(param_1,param_2,param_3);
            break;
          case 5:
          case 6:
            uVar14 = FUN_01907704(param_1);
            uVar15 = FUN_01907784(param_1);
            uVar16 = FUN_01907820(param_1);
            FUN_01a1faf0(uVar14,uVar15,uVar16,param_2,param_3,param_2);
            break;
          default:
            goto switchD_01923aec_default;
          }
        }
        else {
          uVar1 = *(uint *)(*(long *)(param_1[7] + 0x40) + 0x78);
          if ((int)uVar1 < 1) {
            *(undefined4 *)(param_2 + 0x10) = 0xffffffff;
            return 0;
          }
          puVar8 = (uint *)nn::os::GetTlsValue(DAT_05ae7880);
          uVar3 = puVar8[3];
          uVar2 = *puVar8 ^ *puVar8 << 0xb;
          *puVar8 = puVar8[1];
          puVar8[1] = puVar8[2];
          uVar2 = uVar2 >> 8 ^ uVar3 >> 0x13 ^ uVar2 ^ uVar3;
          puVar8[2] = uVar3;
          puVar8[3] = uVar2;
          *(int *)(param_2 + 0x10) = (int)((ulong)uVar1 * (ulong)uVar2 >> 0x20);
          FUN_0190794c(param_1,param_2);
        }
        return 1;
      }
    }
    else {
      iVar10 = (int)param_1[199];
      if (0 < iVar10) {
        lVar12 = 0;
        do {
          lVar11 = (long)iVar10;
          if (lVar12 < lVar11) {
            piVar7 = (int *)(**(code **)(**(long **)(param_1[0xc4] + lVar12 * 8) + 0xf0))();
            if (*piVar7 != -1) {
              local_5c[0] = 0xffffffff;
              local_5c[1] = 0xffffffff;
              local_5c[2] = 0xffffffff;
              piVar7 = (int *)(**(code **)(**(long **)param_1[0xc4] + 0xf0))();
              bVar5 = *piVar7 != -1;
              if (bVar5) {
                local_5c[0] = *piVar7;
              }
              uVar13 = (ulong)bVar5;
              puVar8 = (uint *)(**(code **)(**(long **)(param_1[0xc4] + 8) + 0xf0))();
              if (*puVar8 != 0xffffffff) {
                local_5c[uVar13] = *puVar8;
                uVar13 = (ulong)(bVar5 + 1);
              }
              puVar8 = (uint *)(**(code **)(**(long **)(param_1[0xc4] + 0x10) + 0xf0))();
              if (*puVar8 != 0xffffffff) {
                local_5c[uVar13] = *puVar8;
                uVar13 = (ulong)((int)uVar13 + 1);
              }
              puVar8 = (uint *)nn::os::GetTlsValue(DAT_05ae7880);
              uVar1 = *puVar8 ^ *puVar8 << 0xb;
              uVar2 = puVar8[3];
              *puVar8 = puVar8[1];
              puVar8[1] = puVar8[2];
              uVar1 = uVar1 >> 8 ^ uVar2 >> 0x13 ^ uVar1 ^ uVar2;
              puVar8[2] = uVar2;
              puVar8[3] = uVar1;
              uVar1 = *(uint *)((long)local_5c + (uVar1 * uVar13 >> 0x1e & 0x1c));
              *(uint *)(param_2 + 0xc) = uVar1;
              if (uVar1 == 0xffffffff) {
                return 0;
              }
              if (uVar1 < *(uint *)(param_4 + 0x58)) {
                param_1 = *(long **)(*(long *)(param_4 + 0x60) + (long)(int)uVar1 * 8);
              }
              else {
                param_1 = (long *)0x0;
              }
              goto LAB_019239f8;
            }
            iVar10 = (int)param_1[199];
            lVar11 = (long)iVar10;
          }
          lVar12 = lVar12 + 1;
        } while (lVar12 < lVar11);
      }
    }
  }
switchD_01923aec_default:
  return 0;
}


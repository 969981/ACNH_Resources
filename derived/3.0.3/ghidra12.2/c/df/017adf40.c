
uint FUN_017adf40(long *param_1,short *param_2,undefined8 param_3,uint param_4,uint param_5,
                 ulong param_6)

{
  short sVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  int *piVar9;
  uint *puVar10;
  long lVar11;
  int *piVar12;
  short *psVar13;
  uint uVar14;
  short *psVar15;
  long local_80 [2];
  long local_70;
  char local_67;
  char local_66;
  
  puVar2 = PTR_DAT_04bb27c0;
  puVar10 = (uint *)((long)param_1 + 0xc);
  uVar5 = *puVar10;
  if (uVar5 == 0 || (int)param_1[1] == -1) {
    return 1;
  }
  if ((param_6 & 1) != 0) {
    return 1;
  }
  lVar8 = *(long *)PTR_DAT_04bb27c0;
  if (lVar8 != 0) {
    lVar11 = *(long *)(*(long *)(*(long *)(lVar8 + 0x1c0) + 8) + ((ulong)(uVar5 >> 0x11) & 0x7ff8));
    if (((lVar11 == 0) || ((*(uint *)(lVar11 + 0x248) >> 1 & 1) != 0)) ||
       (*(uint *)(lVar11 + 0x230) != uVar5)) {
      lVar11 = 0;
    }
    if (*(int *)(lVar8 + 0x288) == 1 || *(int *)(lVar8 + 0x288) == -1) {
      plVar6 = (long *)nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      lVar8 = *(long *)puVar2;
      iVar3 = (**(code **)(*plVar6 + 0x60))();
      if ((((iVar3 < 0x11) ||
           ((*(uint *)(lVar8 + 0x5e8) < 5 &&
            ((1 << (ulong)(*(uint *)(lVar8 + 0x5e8) & 0x1f) & 0x1aU) != 0)))) && (lVar11 != 0)) &&
         ((*(uint *)(lVar11 + 0x248) >> 1 & 1) != 0)) {
        return 1;
      }
    }
  }
  uVar14 = *(uint *)(param_1 + 2) & 1;
  uVar5 = uVar14 ^ 1;
  psVar15 = (short *)((long)param_1 + (ulong)uVar14 * 0x1c + 0x14);
  psVar13 = (short *)((long)param_1 + (ulong)uVar5 * 0x1c + 0x14);
  uVar7 = (**(code **)(*param_1 + 0x28))(param_1,psVar15,param_2);
  if (((uVar7 & 1) != 0) && ((char)param_1[0x12] != '\0')) {
    if ((*psVar15 == -1) && ((psVar15[1] == DAT_04cb6038 && (*(int *)(psVar15 + 4) == -1)))) {
      return 1;
    }
    piVar9 = (int *)(psVar15 + 8);
    if (*piVar9 != 0) {
      FUN_0071cb58(local_80,piVar9,puVar10,0);
      if (local_80[0] != 0) {
        piVar9 = (int *)((long)param_1 + (ulong)uVar5 * 0x1c + 0x24);
        if (*piVar9 != 0) {
          FUN_0071c8d0(&local_70,piVar9,puVar10,0);
          if (local_70 != 0) {
            if (local_67 == '\0') {
              return 1;
            }
            FUN_006fb3d0();
          }
          FUN_017acf60(psVar13,puVar10,0,1,1);
        }
        puVar2 = PTR_DAT_04bb3170;
        *piVar9 = 0;
        *psVar13 = -1;
        *(undefined4 *)((long)param_1 + (ulong)uVar5 * 0x1c + 0x28) = 0;
        sVar1 = *(short *)puVar2;
        *(undefined1 *)(psVar13 + 2) = 0;
        *(undefined2 *)((long)param_1 + (ulong)uVar5 * 0x1c + 0x2c) = 0;
        psVar13[1] = sVar1;
        psVar13[4] = -1;
        psVar13[5] = -1;
        psVar13[6] = 0;
        psVar13[7] = 0;
        return 1;
      }
      if (*piVar9 != 0) {
        FUN_0071c8d0(&local_70,piVar9,puVar10,0);
        if (local_70 != 0) {
          if (local_67 == '\0') goto LAB_017ae200;
          FUN_006fb3d0();
        }
        FUN_017acf60(psVar15,puVar10,0,1,1);
      }
      puVar2 = PTR_DAT_04bb3170;
      *piVar9 = 0;
      *psVar15 = -1;
      *(undefined4 *)((long)param_1 + (ulong)uVar14 * 0x1c + 0x28) = 0;
      sVar1 = *(short *)puVar2;
      *(undefined1 *)(psVar15 + 2) = 0;
      *(undefined2 *)((long)param_1 + (ulong)uVar14 * 0x1c + 0x2c) = 0;
      psVar15[1] = sVar1;
      psVar15[4] = -1;
      psVar15[5] = -1;
      psVar15[6] = 0;
      psVar15[7] = 0;
    }
  }
LAB_017ae200:
  piVar12 = (int *)((long)param_1 + (ulong)uVar5 * 0x1c + 0x28);
  iVar3 = *piVar12;
  piVar9 = (int *)((long)param_1 + (ulong)uVar5 * 0x1c + 0x24);
  if (1 < iVar3 - 1U) {
    if (((*param_2 != -1) || (param_2[1] != DAT_04cb6038)) || (*(int *)(param_2 + 4) != -1)) {
      if ((*piVar9 != 0) && (FUN_0071cb58(&local_70,piVar9,puVar10,0), local_70 != 0)) {
        return 0;
      }
      plVar6 = param_1 + 10;
      uVar4 = (undefined4)param_1[1];
      uVar7 = (**(code **)(*plVar6 + 0x10))(plVar6);
      if ((uVar7 & 1) != 0) {
        uVar7 = (**(code **)(*plVar6 + 0x10))(plVar6);
        if (((uVar7 & 1) == 0) ||
           (((*param_2 == -1 && (param_2[1] == DAT_04cb6038)) && (*(int *)(param_2 + 4) == -1)))) {
          uVar4 = (undefined4)param_1[1];
        }
        else {
          uVar4 = (**(code **)*plVar6)(plVar6,param_2);
        }
      }
      FUN_017ae750(psVar13,uVar4,puVar10,param_2,param_3,(char)param_1[0x17],
                   *(undefined1 *)((long)param_1 + 0xb9));
      return 0;
    }
    uVar5 = 0;
    *psVar13 = -1;
    psVar13[1] = param_2[1];
    *(char *)(psVar13 + 2) = (char)param_2[2];
    *(undefined4 *)(psVar13 + 4) = *(undefined4 *)(param_2 + 4);
    uVar4 = *(undefined4 *)(param_2 + 6);
    *piVar9 = 0;
    *(undefined4 *)(psVar13 + 6) = uVar4;
    iVar3 = 1;
    goto LAB_017ae39c;
  }
  if ((iVar3 == 2) && ((param_4 & 1) != 0)) {
    uVar7 = (**(code **)(*param_1 + 0x28))(param_1,psVar13,param_2);
    if ((uVar7 & 1) == 0) {
      FUN_017acea0(psVar13,puVar10,*(undefined1 *)((long)param_1 + 0xba));
      return param_5 & 1;
    }
    return 3;
  }
  if (((*psVar13 == -1) && (psVar13[1] == DAT_04cb6038)) && (*(int *)(psVar13 + 4) == -1)) {
    FUN_017ae528(psVar13,param_5 & 1);
LAB_017ae420:
    *(undefined1 *)(param_1 + 0x12) = 1;
    uVar7 = (**(code **)(*param_1 + 0x28))(param_1,psVar13,param_2);
    if ((uVar7 & 1) != 0) {
      if ((param_4 & 1) == 0) {
        FUN_017ae668(param_1);
        return 2;
      }
      iVar3 = 2;
      uVar5 = 3;
LAB_017ae39c:
      *piVar12 = iVar3;
      return uVar5;
    }
    FUN_017acea0(psVar13,puVar10,*(undefined1 *)((long)param_1 + 0xba));
    if ((param_5 & 1) != 0) {
      return 1;
    }
  }
  else {
    iVar3 = *piVar9;
    FUN_0071cb58(&local_70,piVar9,puVar10,0);
    if ((iVar3 == 0) || (local_70 != 0)) {
      if (((local_66 == '\0') || (local_70 == 0)) ||
         ((*(int *)(local_70 + 0x150) != 2 && ((*(uint *)(local_70 + 0x248) >> 1 & 1) == 0)))) {
        uVar7 = FUN_017ae528(psVar13,param_5 & 1);
        if ((uVar7 & 1) == 0) {
          return 0;
        }
        goto LAB_017ae420;
      }
      FUN_017acea0(psVar13,puVar10,*(undefined1 *)((long)param_1 + 0xba));
      if ((param_5 & 1) != 0) {
        return 1;
      }
    }
    else {
      FUN_017acea0(psVar13,puVar10,*(undefined1 *)((long)param_1 + 0xba));
    }
    if (((*param_2 != -1) || (param_2[1] != DAT_04cb6038)) || (*(int *)(param_2 + 4) != -1)) {
      FUN_017adf40(param_1,param_2,param_3,param_4 & 1,param_5 & 1,0);
    }
  }
  return 0;
}


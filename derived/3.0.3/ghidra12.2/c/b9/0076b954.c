
uint FUN_0076b954(long *param_1,short *param_2,undefined8 param_3,uint param_4,uint param_5,
                 uint param_6,uint param_7,ulong param_8,int *param_9)

{
  short *psVar1;
  short *psVar2;
  undefined1 uVar3;
  short sVar4;
  undefined *puVar5;
  long lVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  long *plVar10;
  ulong uVar11;
  uint *puVar12;
  long lVar13;
  int *piVar14;
  int *piVar15;
  long local_80 [2];
  long local_70;
  char local_68;
  char local_67;
  char local_66;
  
  if (param_9 != (int *)0x0) {
    *param_9 = DAT_04c9a0c8;
  }
  puVar12 = (uint *)((long)param_1 + 0xc);
  uVar9 = *puVar12;
  if (uVar9 == 0) {
    return 1;
  }
  if ((int)param_1[1] == -1) {
    return 1;
  }
  if ((param_8 & 1) != 0) {
    return 1;
  }
  if (DAT_04c93e08 != 0) {
    lVar13 = *(long *)(*(long *)(*(long *)(DAT_04c93e08 + 0x1c0) + 8) +
                      ((ulong)(uVar9 >> 0x11) & 0x7ff8));
    if (((lVar13 == 0) || ((*(uint *)(lVar13 + 0x248) >> 1 & 1) != 0)) ||
       (*(uint *)(lVar13 + 0x230) != uVar9)) {
      lVar13 = 0;
    }
    if ((*(int *)(DAT_04c93e08 + 0x288) == 1) || (*(int *)(DAT_04c93e08 + 0x288) == -1)) {
      plVar10 = (long *)nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      lVar6 = DAT_04c93e08;
      iVar7 = (**(code **)(*plVar10 + 0x60))();
      if ((((iVar7 < 0x11) ||
           ((*(uint *)(lVar6 + 0x5e8) < 5 &&
            ((1 << (ulong)(*(uint *)(lVar6 + 0x5e8) & 0x1f) & 0x1aU) != 0)))) && (lVar13 != 0)) &&
         ((*(uint *)(lVar13 + 0x248) >> 1 & 1) != 0)) {
        return 1;
      }
    }
  }
  psVar1 = (short *)((long)param_1 + ((ulong)*(uint *)(param_1 + 2) & 1) * 0x20 + 0x14);
  psVar2 = (short *)((long)param_1 +
                    (ulong)((uint)((ulong)*(uint *)(param_1 + 2) & 1) ^ 1) * 0x20 + 0x14);
  uVar11 = (**(code **)(*param_1 + 0x28))(param_1,psVar1,param_2);
  lVar13 = DAT_053274a0;
  if (((uVar11 & 1) != 0) && ((char)param_1[0x13] != '\0')) {
    if (((char)psVar1[8] == '\0') || (*psVar1 != -2)) {
      uVar9 = FUN_0277d6c4(psVar1);
      if (DAT_053274a0 == 0) {
        return 1;
      }
      lVar13 = *(long *)(lVar13 + 0x57e58);
      uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
      if (*(uint *)(lVar13 + 0x1d8) <= uVar9) {
        return 1;
      }
      if (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar9 * 8) == 0) {
        return 1;
      }
    }
    piVar14 = (int *)(psVar1 + 10);
    if (*piVar14 != 0) {
      FUN_0071cb58(local_80,piVar14,puVar12,0);
      if (local_80[0] == 0) {
        if (*piVar14 != 0) {
          FUN_0071c8d0(&local_70,piVar14,puVar12,0);
          if (local_70 != 0) {
            if (local_67 == '\0') goto LAB_0076bc54;
            FUN_006fb3d0();
          }
          FUN_0076c480(psVar1,puVar12,0,1,1);
        }
        psVar1[0xc] = 0;
        psVar1[0xd] = 0;
        *piVar14 = 0;
        *psVar1 = DAT_05586008;
        *(undefined1 *)(psVar1 + 1) = DAT_0558600a;
        *(undefined1 *)((long)psVar1 + 3) = DAT_0558600b;
        uVar8 = DAT_0558600c;
        psVar1[0xe] = 0;
        *(undefined4 *)(psVar1 + 2) = uVar8;
        psVar1[4] = 0;
        psVar1[5] = 0;
        psVar1[6] = -1;
        psVar1[7] = -1;
      }
      else {
        if ((param_5 & 1) == 0) {
          FUN_0076b868(psVar2,puVar12,0,0);
        }
        if ((param_7 & 1) == 0) {
          return 1;
        }
        FUN_0071ca50(&local_70,piVar14,0);
        if (((local_70 != 0) && (local_68 != '\0')) && (local_66 != '\0')) {
          return 1;
        }
        FUN_0076b868(psVar1,puVar12,0,0);
      }
    }
  }
LAB_0076bc54:
  puVar5 = PTR_DAT_04bb43c0;
  piVar14 = (int *)(psVar2 + 0xc);
  piVar15 = (int *)(psVar2 + 10);
  if (1 < *piVar14 - 1U) {
    if (((char)param_2[8] == '\0') || (*param_2 != -2)) {
      lVar13 = *(long *)PTR_DAT_04bb43c0;
      uVar9 = FUN_0277d6c4(param_2);
      if (*(long *)puVar5 == 0) {
LAB_0076bde8:
        *psVar2 = *param_2;
        *(char *)(psVar2 + 1) = (char)param_2[1];
        *(undefined1 *)((long)psVar2 + 3) = *(undefined1 *)((long)param_2 + 3);
        *(undefined4 *)(psVar2 + 2) = *(undefined4 *)(param_2 + 2);
        *(undefined4 *)(psVar2 + 4) = *(undefined4 *)(param_2 + 4);
        *(undefined4 *)(psVar2 + 6) = *(undefined4 *)(param_2 + 6);
        sVar4 = param_2[8];
        *piVar15 = 0;
        *(char *)(psVar2 + 8) = (char)sVar4;
        *piVar14 = 1;
        return 0;
      }
      lVar13 = *(long *)(lVar13 + 0x57e58);
      uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
      if ((*(uint *)(lVar13 + 0x1d8) <= uVar9) ||
         (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar9 * 8) == 0)) goto LAB_0076bde8;
    }
    if (*piVar15 != 0) {
      FUN_0071cb58(&local_70,piVar15,puVar12,0);
      if (local_70 != 0) {
        return 0;
      }
      uVar8 = FUN_0076cc14(param_1,param_2);
      uVar3 = (undefined1)param_1[0x19];
      goto LAB_0076c044;
    }
    plVar10 = param_1 + 0xb;
    uVar8 = (undefined4)param_1[1];
    uVar11 = (**(code **)(*plVar10 + 0x10))(plVar10);
    if ((uVar11 & 1) != 0) {
      uVar11 = (**(code **)(*plVar10 + 0x10))(plVar10);
      puVar5 = PTR_DAT_04bb43c0;
      if ((uVar11 & 1) != 0) {
        if (((char)param_2[8] != '\0') && (*param_2 == -2)) {
LAB_0076bf40:
          uVar8 = (**(code **)*plVar10)(plVar10,param_2);
          goto LAB_0076c038;
        }
        lVar13 = *(long *)PTR_DAT_04bb43c0;
        uVar9 = FUN_0277d6c4(param_2);
        if (*(long *)puVar5 != 0) {
          lVar13 = *(long *)(lVar13 + 0x57e58);
          uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
          if ((uVar9 < *(uint *)(lVar13 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) goto LAB_0076bf40;
        }
      }
      uVar8 = (undefined4)param_1[1];
    }
LAB_0076c038:
    uVar3 = (undefined1)param_1[0x19];
LAB_0076c044:
    FUN_0076c760(psVar2,uVar8,puVar12,param_2,param_3,uVar3,*(undefined1 *)((long)param_1 + 0xc9));
    return 0;
  }
  if ((*piVar14 == 2) && ((param_4 & 1) != 0)) {
    uVar11 = (**(code **)(*param_1 + 0x28))(param_1,psVar2,param_2);
    if ((uVar11 & 1) == 0) {
      FUN_0076b868(psVar2,puVar12,0,*(undefined1 *)((long)param_1 + 0xca));
      return param_6 & 1;
    }
    if (param_9 == (int *)0x0) {
      return 3;
    }
    *param_9 = *piVar15;
    return 3;
  }
  if (((char)psVar2[8] == '\0') || (*psVar2 != -2)) {
    lVar13 = *(long *)PTR_DAT_04bb43c0;
    uVar9 = FUN_0277d6c4(psVar2);
    if (*(long *)puVar5 != 0) {
      lVar13 = *(long *)(lVar13 + 0x57e58);
      uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
      if ((uVar9 < *(uint *)(lVar13 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) goto LAB_0076bd1c;
    }
    FUN_0076cad4(psVar2,puVar12,param_6 & 1);
LAB_0076beb4:
    *(undefined1 *)(param_1 + 0x13) = 1;
    uVar11 = (**(code **)(*param_1 + 0x28))(param_1,psVar2,param_2);
    if ((uVar11 & 1) != 0) {
      if ((param_4 & 1) == 0) {
        FUN_0076c2ec(param_1);
        return 2;
      }
      if (param_9 != (int *)0x0) {
        *param_9 = *piVar15;
      }
      *piVar14 = 2;
      return 3;
    }
    FUN_0076b868(psVar2,puVar12,0,*(undefined1 *)((long)param_1 + 0xca));
    if ((param_6 & 1) != 0) {
      return 1;
    }
  }
  else {
LAB_0076bd1c:
    iVar7 = *piVar15;
    FUN_0071cb58(&local_70,piVar15,puVar12,0);
    if ((iVar7 == 0) || (local_70 != 0)) {
      if (((local_66 == '\0') || (local_70 == 0)) ||
         ((*(int *)(local_70 + 0x150) != 2 && ((*(uint *)(local_70 + 0x248) >> 1 & 1) == 0)))) {
        uVar11 = FUN_0076cad4(psVar2,puVar12,param_6 & 1);
        if ((uVar11 & 1) == 0) {
          return 0;
        }
        goto LAB_0076beb4;
      }
      FUN_0076b868(psVar2,puVar12,0,*(undefined1 *)((long)param_1 + 0xca));
      if ((param_6 & 1) != 0) {
        return 1;
      }
      uVar11 = FUN_00766228(param_2);
      if ((uVar11 & 1) == 0) {
        return 0;
      }
    }
    else {
      FUN_0076b868(psVar2,puVar12,0,*(undefined1 *)((long)param_1 + 0xca));
      uVar11 = FUN_00766228(param_2);
      if ((uVar11 & 1) == 0) {
        return 0;
      }
    }
    FUN_0076b954(param_1,param_2,param_3,param_4 & 1,param_5 & 1,param_6 & 1,param_7 & 1,0,param_9);
  }
  return 0;
}


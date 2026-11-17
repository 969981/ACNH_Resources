
uint FUN_02b489dc(long *param_1,undefined8 param_2,undefined8 param_3,uint param_4,uint param_5,
                 uint param_6,uint param_7,ulong param_8,int *param_9)

{
  long *plVar1;
  uint uVar2;
  undefined1 uVar3;
  char cVar4;
  undefined1 uVar5;
  long lVar6;
  int iVar7;
  undefined4 uVar8;
  long *plVar9;
  ulong uVar10;
  uint *puVar11;
  long lVar12;
  uint uVar13;
  int *piVar14;
  long *plVar15;
  long local_80 [2];
  long local_70;
  char local_68;
  char local_67;
  char local_66;
  
  if (param_9 != (int *)0x0) {
    *param_9 = DAT_04c9a0c8;
  }
  puVar11 = (uint *)((long)param_1 + 0xc);
  uVar2 = *puVar11;
  if (uVar2 == 0) {
    return 1;
  }
  if ((int)param_1[1] == -1) {
    return 1;
  }
  if ((param_8 & 1) != 0) {
    return 1;
  }
  if (DAT_04c93e08 != 0) {
    lVar12 = *(long *)(*(long *)(*(long *)(DAT_04c93e08 + 0x1c0) + 8) +
                      ((ulong)(uVar2 >> 0x11) & 0x7ff8));
    if (((lVar12 == 0) || ((*(uint *)(lVar12 + 0x248) >> 1 & 1) != 0)) ||
       (*(uint *)(lVar12 + 0x230) != uVar2)) {
      lVar12 = 0;
    }
    if ((*(int *)(DAT_04c93e08 + 0x288) == 1) || (*(int *)(DAT_04c93e08 + 0x288) == -1)) {
      plVar9 = (long *)nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      lVar6 = DAT_04c93e08;
      iVar7 = (**(code **)(*plVar9 + 0x60))();
      if ((((iVar7 < 0x11) ||
           ((*(uint *)(lVar6 + 0x5e8) < 5 &&
            ((1 << (ulong)(*(uint *)(lVar6 + 0x5e8) & 0x1f) & 0x1aU) != 0)))) && (lVar12 != 0)) &&
         ((*(uint *)(lVar12 + 0x248) >> 1 & 1) != 0)) {
        return 1;
      }
    }
  }
  uVar13 = *(uint *)(param_1 + 2) & 1;
  uVar2 = uVar13 ^ 1;
  plVar15 = param_1 + (ulong)uVar13 * 0xb + 3;
  plVar9 = param_1 + (ulong)uVar2 * 0xb + 3;
  uVar10 = (**(code **)(*param_1 + 0x28))(param_1,plVar15,param_2);
  if ((((uVar10 & 1) != 0) && ((char)param_1[0x22] != '\0')) &&
     (plVar1 = plVar15 + 9, (int)*plVar1 != 0)) {
    FUN_0071cb58(local_80,plVar1,puVar11,0);
    if (local_80[0] == 0) {
      if ((int)*plVar1 != 0) {
        FUN_0071c8d0(&local_70,plVar1,puVar11,0);
        if (local_70 != 0) {
          if (local_67 == '\0') goto LAB_02b48c40;
          FUN_006fb3d0();
        }
        FUN_02b48700(plVar15,puVar11,0,1,1);
      }
      *(int *)plVar1 = 0;
      plVar15[2] = -0x100000000;
      *(undefined4 *)((long)param_1 + (ulong)uVar13 * 0x58 + 100) = 0;
      *(undefined2 *)(param_1 + (ulong)uVar13 * 0xb + 0xd) = 0;
    }
    else {
      if ((param_5 & 1) == 0) {
        FUN_02b48630(plVar9,puVar11,0,0);
      }
      if ((param_7 & 1) == 0) {
        return 1;
      }
      FUN_0071ca50(&local_70,plVar1,0);
      if (((local_70 != 0) && (local_68 != '\0')) && (local_66 != '\0')) {
        return 1;
      }
      FUN_02b48630(plVar15,puVar11,0,0);
    }
  }
LAB_02b48c40:
  piVar14 = (int *)((long)param_1 + (ulong)uVar2 * 0x58 + 100);
  plVar15 = param_1 + (ulong)uVar2 * 0xb + 0xc;
  if (1 < *piVar14 - 1U) {
    if ((int)*plVar15 == 0) {
      plVar15 = param_1 + 0x1a;
      uVar8 = (undefined4)param_1[1];
      uVar10 = (**(code **)(*plVar15 + 0x10))(plVar15);
      if ((uVar10 & 1) != 0) {
        uVar10 = (**(code **)(*plVar15 + 0x10))(plVar15);
        if ((uVar10 & 1) == 0) {
          uVar8 = (undefined4)param_1[1];
        }
        else {
          uVar8 = (**(code **)*plVar15)(plVar15,param_2);
        }
      }
      uVar5 = (undefined1)param_1[0x36];
      uVar3 = *(undefined1 *)((long)param_1 + 0x1b1);
    }
    else {
      FUN_0071cb58(&local_70,plVar15,puVar11,0);
      if (local_70 != 0) {
        return 0;
      }
      uVar8 = FUN_02b491dc(param_1,param_2);
      uVar5 = (undefined1)param_1[0x36];
      uVar3 = *(undefined1 *)((long)param_1 + 0x1b1);
    }
    FUN_02b49260(plVar9,uVar8,puVar11,param_2,param_3,uVar5,uVar3);
    return 0;
  }
  if ((*piVar14 != 2) || ((param_4 & 1) == 0)) {
    lVar12 = *plVar15;
    FUN_0071cb58(&local_70,plVar15,puVar11,0);
    if (((int)lVar12 == 0) || (local_70 != 0)) {
      if (((local_66 == '\0') || (local_70 == 0)) ||
         ((*(int *)(local_70 + 0x150) != 2 && ((*(uint *)(local_70 + 0x248) >> 1 & 1) == 0)))) {
        uVar10 = FUN_02b48f50(plVar9,puVar11,param_6 & 1);
        if ((uVar10 & 1) == 0) {
          return 0;
        }
        *(undefined1 *)(param_1 + 0x22) = 1;
        uVar10 = (**(code **)(*param_1 + 0x28))(param_1,plVar9,param_2);
        if ((uVar10 & 1) == 0) {
          FUN_02b48630(plVar9,puVar11,0,*(undefined1 *)((long)param_1 + 0x1b2));
          if ((param_6 & 1) == 0) {
            return 0;
          }
          return 1;
        }
        if ((param_4 & 1) == 0) {
          FUN_02b49090(param_1);
          return 2;
        }
        if (param_9 != (int *)0x0) {
          *param_9 = (int)*plVar15;
        }
        *piVar14 = 2;
        return 3;
      }
      FUN_02b48630(plVar9,puVar11,0,*(undefined1 *)((long)param_1 + 0x1b2));
      if ((param_6 & 1) != 0) {
        return 1;
      }
    }
    else {
      FUN_02b48630(plVar9,puVar11,0,*(undefined1 *)((long)param_1 + 0x1b2));
    }
    FUN_02b489dc(param_1,param_2,param_3,param_4 & 1,param_5 & 1,param_6 & 1,param_7 & 1,0,param_9);
    return 0;
  }
  uVar10 = (**(code **)(*param_1 + 0x28))(param_1,plVar9,param_2);
  if ((uVar10 & 1) != 0) {
    if (param_9 == (int *)0x0) {
      return 3;
    }
    *param_9 = (int)*plVar15;
    return 3;
  }
  if ((int)*plVar15 != 0) {
    cVar4 = *(char *)((long)param_1 + 0x1b2);
    FUN_0071c8d0(&local_70,plVar15,puVar11,0);
    if (local_70 != 0) {
      if ((local_67 == '\0') || ((cVar4 != '\0' && ((local_68 == '\0' || (local_66 == '\0'))))))
      goto LAB_02b48e24;
      FUN_006fb3d0();
    }
    FUN_02b48700(plVar9,puVar11,0,1,1);
  }
  *piVar14 = 0;
  *(int *)plVar15 = 0;
  plVar9[2] = -0x100000000;
  *(undefined2 *)(param_1 + (ulong)uVar2 * 0xb + 0xd) = 0;
LAB_02b48e24:
  return param_6 & 1;
}


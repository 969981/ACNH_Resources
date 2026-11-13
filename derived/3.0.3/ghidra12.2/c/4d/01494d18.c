
uint FUN_01494d18(long *param_1,uint *param_2,undefined8 param_3,uint param_4,uint param_5,
                 uint param_6,ulong param_7)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  undefined1 uVar5;
  char cVar6;
  undefined1 uVar7;
  undefined *puVar8;
  int iVar9;
  undefined4 uVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  uint *puVar14;
  long lVar15;
  ulong uVar16;
  int *piVar17;
  long local_80 [2];
  long local_70;
  char local_68;
  char local_67;
  char local_66;
  
  puVar8 = PTR_DAT_04bb27c0;
  puVar14 = (uint *)((long)param_1 + 0xc);
  uVar4 = *puVar14;
  if (uVar4 == 0 || (int)param_1[1] == -1) {
    return 1;
  }
  if ((param_7 & 1) != 0) {
    return 1;
  }
  lVar13 = *(long *)PTR_DAT_04bb27c0;
  if (lVar13 != 0) {
    lVar15 = *(long *)(*(long *)(*(long *)(lVar13 + 0x1c0) + 8) + ((ulong)(uVar4 >> 0x11) & 0x7ff8))
    ;
    if (((lVar15 == 0) || ((*(uint *)(lVar15 + 0x248) >> 1 & 1) != 0)) ||
       (*(uint *)(lVar15 + 0x230) != uVar4)) {
      lVar15 = 0;
    }
    if (*(int *)(lVar13 + 0x288) == 1 || *(int *)(lVar13 + 0x288) == -1) {
      plVar11 = (long *)nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      lVar13 = *(long *)puVar8;
      iVar9 = (**(code **)(*plVar11 + 0x60))();
      if ((((iVar9 < 0x11) ||
           ((*(uint *)(lVar13 + 0x5e8) < 5 &&
            ((1 << (ulong)(*(uint *)(lVar13 + 0x5e8) & 0x1f) & 0x1aU) != 0)))) && (lVar15 != 0)) &&
         ((*(uint *)(lVar15 + 0x248) >> 1 & 1) != 0)) {
        return 1;
      }
    }
  }
  puVar3 = (uint *)((long)param_1 + ((ulong)*(uint *)(param_1 + 2) & 1) * 0x10 + 0x14);
  uVar16 = (ulong)((uint)((ulong)*(uint *)(param_1 + 2) & 1) ^ 1);
  puVar1 = (uint *)((long)param_1 + uVar16 * 0x10 + 0x14);
  uVar12 = (**(code **)(*param_1 + 0x28))(param_1,puVar3,param_2);
  if (((uVar12 & 1) != 0) && ((char)param_1[0xf] != '\0')) {
    if (0x16 < *puVar3) {
      return 1;
    }
    puVar2 = puVar3 + 1;
    if (*puVar2 != 0) {
      FUN_0071cb58(local_80,puVar2,puVar14,0);
      if (local_80[0] != 0) {
        if ((param_5 & 1) == 0) {
          FUN_014948f8(puVar1,puVar14,0);
          return 1;
        }
        return 1;
      }
      if (*puVar2 != 0) {
        FUN_0071c8d0(&local_70,puVar2,puVar14,0);
        if (local_70 != 0) {
          if (local_67 == '\0') goto LAB_01494f04;
          FUN_006fb3d0();
        }
        FUN_01494990(puVar3,puVar14,0,1);
      }
      *(undefined8 *)((long)puVar3 + 6) = 0;
      puVar3[0] = 0;
      puVar3[1] = 0;
    }
  }
LAB_01494f04:
  piVar17 = (int *)((long)param_1 + uVar16 * 0x10 + 0x1c);
  plVar11 = param_1 + uVar16 * 2 + 3;
  if (1 < *piVar17 - 1U) {
    if (0x16 < *param_2) {
      *puVar1 = *param_2;
      *(int *)plVar11 = 0;
      *piVar17 = 1;
      return 0;
    }
    if ((int)*plVar11 == 0) {
      plVar11 = param_1 + 7;
      uVar10 = (undefined4)param_1[1];
      uVar12 = (**(code **)(*plVar11 + 0x10))(plVar11);
      if ((uVar12 & 1) != 0) {
        uVar12 = (**(code **)(*plVar11 + 0x10))(plVar11);
        if (((uVar12 & 1) == 0) || (0x16 < *param_2)) {
          uVar10 = (undefined4)param_1[1];
        }
        else {
          uVar10 = (**(code **)*plVar11)(plVar11,param_2);
        }
      }
      uVar7 = (undefined1)param_1[0x11];
      uVar5 = *(undefined1 *)((long)param_1 + 0x89);
    }
    else {
      FUN_0071cb58(&local_70,plVar11,puVar14,0);
      if (local_70 != 0) {
        return 0;
      }
      uVar10 = FUN_0149547c(param_1,param_2);
      uVar7 = (undefined1)param_1[0x11];
      uVar5 = *(undefined1 *)((long)param_1 + 0x89);
    }
    FUN_01495510(puVar1,uVar10,puVar14,param_2,param_3,uVar7,uVar5);
    return 0;
  }
  if ((*piVar17 == 2) && ((param_4 & 1) != 0)) {
    uVar12 = (**(code **)(*param_1 + 0x28))(param_1,puVar1,param_2);
    if ((uVar12 & 1) != 0) {
      return 3;
    }
    if ((int)*plVar11 != 0) {
      cVar6 = *(char *)((long)param_1 + 0x8a);
      FUN_0071c8d0(&local_70,plVar11,puVar14,0);
      if (local_70 != 0) {
        if ((local_67 == '\0') || ((cVar6 != '\0' && ((local_68 == '\0' || (local_66 == '\0'))))))
        goto LAB_0149507c;
        FUN_006fb3d0();
      }
      FUN_01494990(puVar1,puVar14,0,1);
    }
    *(undefined8 *)((long)puVar1 + 6) = 0;
    puVar1[0] = 0;
    puVar1[1] = 0;
LAB_0149507c:
    return param_6 & 1;
  }
  if (*puVar1 < 0x17) {
    lVar13 = *plVar11;
    FUN_0071cb58(&local_70,plVar11,puVar14,0);
    if (((int)lVar13 == 0) || (local_70 != 0)) {
      if (((local_66 == '\0') || (local_70 == 0)) ||
         ((*(int *)(local_70 + 0x150) != 2 && ((*(uint *)(local_70 + 0x248) >> 1 & 1) == 0)))) {
        uVar12 = FUN_01495214(puVar1,param_6 & 1);
        if ((uVar12 & 1) == 0) {
          return 0;
        }
        goto LAB_01494fc8;
      }
      FUN_014948f8(puVar1,puVar14,*(undefined1 *)((long)param_1 + 0x8a));
      if ((param_6 & 1) != 0) {
        return 1;
      }
    }
    else {
      FUN_014948f8(puVar1,puVar14,*(undefined1 *)((long)param_1 + 0x8a));
    }
    if (*param_2 < 0x17) {
      FUN_01494d18(param_1,param_2,param_3,param_4 & 1,param_5 & 1,param_6 & 1,0);
    }
  }
  else {
    FUN_01495214(puVar1,param_6 & 1);
LAB_01494fc8:
    *(undefined1 *)(param_1 + 0xf) = 1;
    uVar12 = (**(code **)(*param_1 + 0x28))(param_1,puVar1,param_2);
    if ((uVar12 & 1) != 0) {
      if ((param_4 & 1) == 0) {
        FUN_01495354(param_1);
        return 2;
      }
      *piVar17 = 2;
      return 3;
    }
    FUN_014948f8(puVar1,puVar14,*(undefined1 *)((long)param_1 + 0x8a));
    if ((param_6 & 1) != 0) {
      return 1;
    }
  }
  return 0;
}


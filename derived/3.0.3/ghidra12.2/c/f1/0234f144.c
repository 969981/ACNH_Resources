
uint FUN_0234f144(long *param_1,uint *param_2,undefined8 param_3,uint param_4,uint param_5,
                 ulong param_6)

{
  uint *puVar1;
  uint uVar2;
  undefined1 uVar3;
  char cVar4;
  undefined1 uVar5;
  undefined *puVar6;
  int iVar7;
  undefined4 uVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  uint *puVar12;
  int *piVar13;
  long lVar14;
  uint *puVar15;
  uint *puVar16;
  int *piVar17;
  long local_80 [2];
  long local_70;
  char local_68;
  char local_67;
  char local_66;
  
  puVar6 = PTR_DAT_04bb27c0;
  puVar12 = (uint *)((long)param_1 + 0xc);
  uVar2 = *puVar12;
  if (uVar2 == 0 || (int)param_1[1] == -1) {
    return 1;
  }
  if ((param_6 & 1) != 0) {
    return 1;
  }
  lVar11 = *(long *)PTR_DAT_04bb27c0;
  if (lVar11 != 0) {
    lVar14 = *(long *)(*(long *)(*(long *)(lVar11 + 0x1c0) + 8) + ((ulong)(uVar2 >> 0x11) & 0x7ff8))
    ;
    if (((lVar14 == 0) || ((*(uint *)(lVar14 + 0x248) >> 1 & 1) != 0)) ||
       (*(uint *)(lVar14 + 0x230) != uVar2)) {
      lVar14 = 0;
    }
    if (*(int *)(lVar11 + 0x288) == 1 || *(int *)(lVar11 + 0x288) == -1) {
      plVar9 = (long *)nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      lVar11 = *(long *)puVar6;
      iVar7 = (**(code **)(*plVar9 + 0x60))();
      if ((((iVar7 < 0x11) ||
           ((*(uint *)(lVar11 + 0x5e8) < 5 &&
            ((1 << (ulong)(*(uint *)(lVar11 + 0x5e8) & 0x1f) & 0x1aU) != 0)))) && (lVar14 != 0)) &&
         ((*(uint *)(lVar14 + 0x248) >> 1 & 1) != 0)) {
        return 1;
      }
    }
  }
  puVar16 = (uint *)((long)param_1 + (ulong)(*(uint *)(param_1 + 2) & 1) * 0x14 + 0x14);
  uVar2 = *(uint *)(param_1 + 2) & 1 ^ 1;
  puVar15 = (uint *)((long)param_1 + (ulong)uVar2 * 0x14 + 0x14);
  uVar10 = (**(code **)(*param_1 + 0x28))(param_1,puVar16,param_2);
  if (((uVar10 & 1) != 0) && ((char)param_1[0x10] != '\0')) {
    if (0x2f < *puVar16) {
      return 1;
    }
    puVar1 = puVar16 + 2;
    if (*puVar1 != 0) {
      FUN_0071cb58(local_80,puVar1,puVar12,0);
      if (local_80[0] != 0) {
        piVar13 = (int *)((long)param_1 + (ulong)uVar2 * 0x14 + 0x1c);
        if (*piVar13 != 0) {
          FUN_0071c8d0(&local_70,piVar13,puVar12,0);
          if (local_70 != 0) {
            if (local_67 == '\0') {
              return 1;
            }
            FUN_006fb3d0();
          }
          FUN_0234eb20(puVar15,puVar12,0,1);
        }
        *puVar15 = 0;
        *(undefined1 *)(puVar15 + 1) = 0;
        piVar13[0] = 0;
        piVar13[1] = 0;
        *(undefined2 *)((long)param_1 + (ulong)uVar2 * 0x14 + 0x24) = 0;
        return 1;
      }
      if (*puVar1 != 0) {
        FUN_0071c8d0(&local_70,puVar1,puVar12,0);
        if (local_70 != 0) {
          if (local_67 == '\0') goto LAB_0234f37c;
          FUN_006fb3d0();
        }
        FUN_0234eb20(puVar16,puVar12,0,1);
      }
      *puVar16 = 0;
      *(undefined1 *)(puVar16 + 1) = 0;
      puVar1[0] = 0;
      puVar1[1] = 0;
      *(undefined2 *)(puVar16 + 4) = 0;
    }
  }
LAB_0234f37c:
  lVar11 = (ulong)uVar2 * 0x14;
  piVar17 = (int *)((long)param_1 + lVar11 + 0x20);
  piVar13 = (int *)((long)param_1 + lVar11 + 0x1c);
  if (1 < *piVar17 - 1U) {
    if (0x2f < *param_2) {
      *puVar15 = *param_2;
      uVar2 = param_2[1];
      *piVar13 = 0;
      *(char *)(puVar15 + 1) = (char)uVar2;
      *piVar17 = 1;
      return 0;
    }
    if (*piVar13 == 0) {
      plVar9 = param_1 + 8;
      uVar8 = (undefined4)param_1[1];
      uVar10 = (**(code **)(*plVar9 + 0x10))(plVar9);
      if ((uVar10 & 1) != 0) {
        uVar10 = (**(code **)(*plVar9 + 0x10))(plVar9);
        if (((uVar10 & 1) == 0) || (0x2f < *param_2)) {
          uVar8 = (undefined4)param_1[1];
        }
        else {
          uVar8 = (**(code **)*plVar9)(plVar9,param_2);
        }
      }
      uVar5 = (undefined1)param_1[0x13];
      uVar3 = *(undefined1 *)((long)param_1 + 0x99);
    }
    else {
      FUN_0071cb58(&local_70,piVar13,puVar12,0);
      if (local_70 != 0) {
        return 0;
      }
      uVar8 = FUN_0234f904(param_1,param_2);
      uVar5 = (undefined1)param_1[0x13];
      uVar3 = *(undefined1 *)((long)param_1 + 0x99);
    }
    FUN_0234f990(puVar15,uVar8,puVar12,param_2,param_3,uVar5,uVar3);
    return 0;
  }
  if ((*piVar17 == 2) && ((param_4 & 1) != 0)) {
    uVar10 = (**(code **)(*param_1 + 0x28))(param_1,puVar15,param_2);
    if ((uVar10 & 1) != 0) {
      return 3;
    }
    if (*piVar13 != 0) {
      cVar4 = *(char *)((long)param_1 + 0x9a);
      FUN_0071c8d0(&local_70,piVar13,puVar12,0);
      if (local_70 != 0) {
        if ((local_67 == '\0') || ((cVar4 != '\0' && ((local_68 == '\0' || (local_66 == '\0'))))))
        goto LAB_0234f500;
        FUN_006fb3d0();
      }
      FUN_0234eb20(puVar15,puVar12,0,1);
    }
    *puVar15 = 0;
    *(undefined1 *)(puVar15 + 1) = 0;
    piVar13[0] = 0;
    piVar13[1] = 0;
    *(undefined2 *)((long)param_1 + lVar11 + 0x24) = 0;
LAB_0234f500:
    return param_5 & 1;
  }
  if (*puVar15 < 0x30) {
    iVar7 = *piVar13;
    FUN_0071cb58(&local_70,piVar13,puVar12,0);
    if ((iVar7 == 0) || (local_70 != 0)) {
      if (((local_66 == '\0') || (local_70 == 0)) ||
         ((*(int *)(local_70 + 0x150) != 2 && ((*(uint *)(local_70 + 0x248) >> 1 & 1) == 0)))) {
        uVar10 = FUN_0234f680(puVar15,param_5 & 1);
        if ((uVar10 & 1) == 0) {
          return 0;
        }
        goto LAB_0234f43c;
      }
      FUN_0234ea74(puVar15,puVar12,*(undefined1 *)((long)param_1 + 0x9a));
      if ((param_5 & 1) != 0) {
        return 1;
      }
    }
    else {
      FUN_0234ea74(puVar15,puVar12,*(undefined1 *)((long)param_1 + 0x9a));
    }
    if (*param_2 < 0x30) {
      FUN_0234f144(param_1,param_2,param_3,param_4 & 1,param_5 & 1,0);
    }
  }
  else {
    FUN_0234f680(puVar15,param_5 & 1);
LAB_0234f43c:
    *(undefined1 *)(param_1 + 0x10) = 1;
    uVar10 = (**(code **)(*param_1 + 0x28))(param_1,puVar15,param_2);
    if ((uVar10 & 1) != 0) {
      if ((param_4 & 1) == 0) {
        FUN_0234f7c0(param_1);
        return 2;
      }
      *piVar17 = 2;
      return 3;
    }
    FUN_0234ea74(puVar15,puVar12,*(undefined1 *)((long)param_1 + 0x9a));
    if ((param_5 & 1) != 0) {
      return 1;
    }
  }
  return 0;
}


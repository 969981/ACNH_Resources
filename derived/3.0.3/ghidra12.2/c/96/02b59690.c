
ulong FUN_02b59690(ulong param_1)

{
  long lVar1;
  uint uVar2;
  ushort uVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  uint *puVar7;
  undefined8 *puVar8;
  long lVar9;
  int iVar10;
  uint *puVar11;
  ulong uVar12;
  uint local_28;
  uint local_24;
  
  uVar4 = (uint)param_1;
  if (uVar4 == 0) {
switchD_02b597b8_caseD_0:
    local_24 = 0;
    local_28 = 0;
    FUN_02b673a0(&local_28);
    local_24 = local_28;
    if (DAT_05574040 != 0) {
      puVar8 = *(undefined8 **)(DAT_05574040 + 0x10);
      if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
        lVar5 = (**(code **)(*(long *)*puVar8 + 0x38))();
        if (lVar5 != 0) {
          lVar5 = lVar5 + 0x70;
LAB_02b598ec:
          if (local_24 < 8) {
            lVar1 = lVar5 + 0x119228 + (ulong)local_24 * 0xfa08;
            if (7 < local_24) {
              lVar1 = lVar5 + 0x119228;
            }
            if ((*(long **)(lVar1 + 0x28) == (long *)0x0) ||
               (puVar8 = (undefined8 *)**(long **)(lVar1 + 0x28), puVar8 == (undefined8 *)0x0)) {
              lVar9 = *(long *)(lVar1 + 8);
              lVar5 = *(long *)(lVar1 + 0x10);
LAB_02b599f4:
              return (ulong)*(ushort *)(lVar5 + lVar9 + 6);
            }
            uVar6 = (**(code **)*puVar8)();
            uVar3 = *(ushort *)(*(long *)(lVar1 + 0x10) + *(long *)(lVar1 + 8) + 6);
joined_r0x02b59acc:
            uVar12 = (ulong)uVar3;
            if ((uVar6 & 1) == 0) {
              return uVar12;
            }
            lVar5 = *(long *)(lVar1 + 0x28);
            goto joined_r0x02b59a50;
          }
        }
      }
      else if (((puVar8 != (undefined8 *)0x0) && ((long *)puVar8[0x26] != (long *)0x0)) &&
              (lVar5 = (**(code **)(*(long *)puVar8[0x26] + 0x38))(), lVar5 != 0))
      goto LAB_02b598ec;
    }
LAB_02b598f8:
    uVar12 = 0;
  }
  else {
    if ((int)*(uint *)(DAT_05635578 + 0x1e0) < 1) {
      if ((((*(long *)(DAT_05635578 + 0xd0) != 0) &&
           (puVar7 = *(uint **)(*(long *)(DAT_05635578 + 0xd0) + 8), puVar7 != (uint *)0x0)) &&
          ((*(uint *)(DAT_05635578 + 0xe8) <= uVar4 ||
           (*(char *)(*(long *)(DAT_05635578 + 0xf0) + (long)(int)uVar4) != '\0')))) &&
         (((uVar4 < *puVar7 && (puVar7[1] != 0)) && ((ushort)puVar7[2] != 0)))) {
        iVar10 = 0xc;
        if (*(char *)((long)puVar7 + 10) != '\0') {
          iVar10 = 0x1c;
        }
        puVar7 = (uint *)((ulong)(puVar7[1] * uVar4 + (uint)(ushort)puVar7[2] * 8 + iVar10) +
                         (long)puVar7);
        if (puVar7 != (uint *)0x0) goto LAB_02b596ec;
      }
      goto switchD_02b597b8_caseD_0;
    }
    if (*(uint *)(DAT_05635578 + 0x1e0) <= uVar4) goto switchD_02b597b8_caseD_0;
    if (*(uint *)(DAT_05635578 + 0x1d0) <= uVar4) {
      uVar4 = 0;
    }
    puVar7 = *(uint **)(*(long *)(DAT_05635578 + 0x1d8) + (ulong)uVar4 * 8);
    if (puVar7 == (uint *)0x0) goto switchD_02b597b8_caseD_0;
LAB_02b596ec:
    uVar4 = *puVar7;
    if (uVar4 == 0 || puVar7 == (uint *)(ulong)uVar4) {
LAB_02b596fc:
      local_24 = 0;
    }
    else {
      puVar11 = (uint *)((long)puVar7 - (long)(ulong)uVar4);
      local_24 = 0;
      if (*puVar11 != 0) {
        uVar4 = puVar11[1];
        if ((uVar4 != 0) && ((ulong)(ushort)puVar11[2] != 0)) {
          lVar5 = 0xc;
          if (*(char *)((long)puVar11 + 10) != '\0') {
            lVar5 = 0x1c;
          }
          lVar5 = (long)puVar11 + lVar5 + (ulong)(ushort)puVar11[2] * 8;
          if (lVar5 != 0) {
            uVar2 = 0;
            if ((ulong)uVar4 != 0) {
              uVar2 = (uint)((ulong)((long)puVar7 - lVar5) / (ulong)uVar4);
            }
            if (*puVar11 <= uVar2) {
              uVar2 = 0xffffffff;
            }
            if ((uVar2 < DAT_0560bad8) &&
               (local_24 = (uint)*(ushort *)(DAT_0560bae0 + (long)(int)uVar2 * 2), local_24 < 5))
            goto LAB_02b59700;
          }
        }
        goto LAB_02b596fc;
      }
    }
LAB_02b59700:
    if (local_24 != 0) goto LAB_02b598f8;
    if ((puVar7 == (uint *)0x0) || (uVar4 = *puVar7, uVar4 == 0 || puVar7 == (uint *)(ulong)uVar4))
    goto switchD_02b597b8_caseD_0;
    puVar11 = (uint *)((long)puVar7 - (long)(ulong)uVar4);
    if ((*puVar11 == 0) || ((uVar4 = puVar11[1], uVar4 == 0 || ((ulong)(ushort)puVar11[2] == 0))))
    goto switchD_02b597b8_caseD_0;
    lVar5 = 0xc;
    if (*(char *)((long)puVar11 + 10) != '\0') {
      lVar5 = 0x1c;
    }
    lVar5 = (long)puVar11 + lVar5 + (ulong)(ushort)puVar11[2] * 8;
    if (lVar5 == 0) goto switchD_02b597b8_caseD_0;
    uVar2 = 0;
    if ((ulong)uVar4 != 0) {
      uVar2 = (uint)((ulong)((long)puVar7 - lVar5) / (ulong)uVar4);
    }
    if (*puVar11 <= uVar2) {
      uVar2 = 0xffffffff;
    }
    if ((DAT_0560bae8 <= uVar2) ||
       (uVar3 = *(ushort *)(DAT_0560baf0 + (long)(int)uVar2 * 2), 4 < uVar3))
    goto switchD_02b597b8_caseD_0;
    uVar12 = 0;
    switch(uVar3) {
    case 0:
      goto switchD_02b597b8_caseD_0;
    case 1:
      local_28 = 0;
      FUN_02b67620(&local_28);
      local_24 = local_28;
      if (DAT_05574040 == 0) goto LAB_02b598f8;
      puVar8 = *(undefined8 **)(DAT_05574040 + 0x10);
      if ((*(byte *)(DAT_05574040 + 0x453) & 1) != 0) {
        if (((puVar8 != (undefined8 *)0x0) && ((long *)puVar8[0x26] != (long *)0x0)) &&
           (lVar5 = (**(code **)(*(long *)puVar8[0x26] + 0x38))(), lVar5 != 0)) goto LAB_02b59a7c;
        goto LAB_02b598f8;
      }
      lVar5 = (**(code **)(*(long *)*puVar8 + 0x38))();
      if (lVar5 == 0) goto LAB_02b598f8;
      lVar5 = lVar5 + 0x70;
LAB_02b59a7c:
      if (9 < local_24) goto LAB_02b598f8;
      lVar1 = lVar5 + 0x1962d8 + (ulong)local_24 * 0x10d8;
      if (9 < local_24) {
        lVar1 = lVar5 + 0x1962d8;
      }
      if ((*(long **)(lVar1 + 0x28) == (long *)0x0) ||
         (puVar8 = (undefined8 *)**(long **)(lVar1 + 0x28), puVar8 == (undefined8 *)0x0)) {
        return (ulong)*(ushort *)(*(long *)(lVar1 + 0x10) + *(long *)(lVar1 + 8) + 10);
      }
      uVar6 = (**(code **)*puVar8)();
      uVar3 = *(ushort *)(*(long *)(lVar1 + 0x10) + *(long *)(lVar1 + 8) + 10);
      goto joined_r0x02b59acc;
    default:
      goto switchD_02b597b8_caseD_2;
    case 3:
      uVar12 = FUN_02b93730();
      return uVar12;
    case 4:
      lVar5 = FUN_02642ea0(param_1,param_1 & 0xffffffff);
      if (lVar5 == 0) {
        return 0;
      }
      if ((*(long **)(lVar5 + 0x28) == (long *)0x0) ||
         (puVar8 = (undefined8 *)**(long **)(lVar5 + 0x28), puVar8 == (undefined8 *)0x0)) {
        lVar9 = *(long *)(lVar5 + 8);
        lVar5 = *(long *)(lVar5 + 0x10);
        goto LAB_02b599f4;
      }
      uVar6 = (**(code **)*puVar8)();
      uVar12 = (ulong)*(ushort *)(*(long *)(lVar5 + 0x10) + *(long *)(lVar5 + 8) + 6);
      if ((uVar6 & 1) == 0) {
        return uVar12;
      }
      lVar5 = *(long *)(lVar5 + 0x28);
    }
joined_r0x02b59a50:
    if ((lVar5 != 0) && (*(undefined8 **)(lVar5 + 8) != (undefined8 *)0x0)) {
      (**(code **)**(undefined8 **)(lVar5 + 8))();
    }
  }
switchD_02b597b8_caseD_2:
  return uVar12;
}


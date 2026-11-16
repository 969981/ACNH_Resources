
void FUN_0260a240(long param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  ulong uVar6;
  ushort uVar7;
  uint *puVar8;
  ushort uVar9;
  uint *puVar10;
  long lVar11;
  long *plVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined *local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  
  puVar2 = PTR_DAT_04bb43c0;
  lVar11 = *(long *)PTR_DAT_04bb43c0;
  uVar3 = FUN_0277d6c4(param_2);
  lVar14 = DAT_05150358;
  if (*(long *)puVar2 == 0) {
LAB_0260a2e0:
    if (((((DAT_05150358 != 0) && (*(long *)(DAT_05150358 + 0xb0) != 0)) &&
         (*(long *)(*(long *)(DAT_05150358 + 0xb0) + 8) != 0)) &&
        ((*(long *)(DAT_05150358 + 0x488) != 0 &&
         (*(long *)(*(long *)(DAT_05150358 + 0x488) + 8) != 0)))) &&
       ((*(long *)(DAT_05150358 + 0x2b0) != 0 &&
        (*(long *)(*(long *)(DAT_05150358 + 0x2b0) + 8) != 0)))) {
      uVar3 = FUN_0277d6c4(param_2);
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
      if ((uVar3 < *(uint *)(lVar14 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
        FUN_0124c030(&local_58,param_2);
        iVar4 = FUN_0123db50(&local_50,local_48);
        if (iVar4 == 0x2d) {
          *(ushort *)(param_1 + 0x8a) = *(ushort *)(param_1 + 0x8a) | 0x10;
        }
      }
    }
    return;
  }
  lVar11 = *(long *)(lVar11 + 0x57e58);
  uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
  if ((*(uint *)(lVar11 + 0x1d8) <= uVar3) ||
     (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar3 * 8) == 0)) goto LAB_0260a2e0;
  if (*(int *)(param_1 + 8) != 0) {
    plVar12 = *(long **)(param_1 + 0x10);
    lVar14 = (long)*(int *)(param_1 + 8) << 3;
    do {
      uVar6 = FUN_0260b74c(*plVar12,param_2);
      if ((uVar6 & 1) != 0) {
        if (*plVar12 != 0) {
          FUN_0260b55c(*plVar12,param_2);
          return;
        }
        break;
      }
      plVar12 = plVar12 + 1;
      lVar14 = lVar14 + -8;
    } while (lVar14 != 0);
  }
  if (*(int *)(param_1 + 0xc) <= *(int *)(param_1 + 8)) {
    return;
  }
  puVar13 = *(undefined8 **)(param_1 + 0x18);
  if (puVar13 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0x18) = *puVar13;
  }
  *puVar13 = 0xfffe;
  FUN_0277d4ac(puVar13);
  *(undefined4 *)(puVar13 + 1) = 0;
  if (*(int *)(param_1 + 8) < *(int *)(param_1 + 0xc)) {
    *(undefined8 **)(*(long *)(param_1 + 0x10) + (long)*(int *)(param_1 + 8) * 8) = puVar13;
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  }
  *(undefined2 *)puVar13 = *(undefined2 *)param_2;
  *(undefined1 *)((long)puVar13 + 2) = *(undefined1 *)((long)param_2 + 2);
  *(undefined1 *)((long)puVar13 + 3) = *(undefined1 *)((long)param_2 + 3);
  *(undefined4 *)((long)puVar13 + 4) = param_2[1];
  uVar5 = FUN_0260b65c(puVar13,param_2);
  local_58 = PTR_DAT_04bc0510;
  *(undefined4 *)(puVar13 + 1) = uVar5;
  lVar14 = *(long *)puVar2;
  local_50 = *param_2;
  uStack_4c = param_2[1];
  local_48 = 0;
  local_58 = local_58 + 0x10;
  uVar3 = FUN_0277d6c4(&local_50);
  if (*(long *)puVar2 == 0) {
    return;
  }
  lVar14 = *(long *)(lVar14 + 0x57e58);
  uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
  if (*(uint *)(lVar14 + 0x1d8) <= uVar3) {
    return;
  }
  if (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar3 * 8) == 0) {
    return;
  }
  lVar14 = *(long *)PTR_DAT_04bc0428;
  uVar3 = FUN_0277d6c4(param_2);
  uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
  if (*(uint *)(lVar14 + 0x1d8) <= uVar3) {
    return;
  }
  puVar8 = *(uint **)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar3 * 8);
  if (puVar8 == (uint *)0x0) {
    return;
  }
  uVar3 = *puVar8;
  if ((uVar3 != 0) && (puVar8 != (uint *)(ulong)uVar3)) {
    puVar10 = (uint *)((long)puVar8 - (long)(ulong)uVar3);
    if ((*puVar10 != 0) && ((uVar3 = puVar10[1], uVar3 != 0 && ((ulong)(ushort)puVar10[2] != 0)))) {
      lVar14 = 0xc;
      if (*(char *)((long)puVar10 + 10) != '\0') {
        lVar14 = 0x1c;
      }
      lVar14 = (long)puVar10 + lVar14 + (ulong)(ushort)puVar10[2] * 8;
      if (lVar14 != 0) {
        uVar1 = 0;
        if ((ulong)uVar3 != 0) {
          uVar1 = (uint)((ulong)((long)puVar8 - lVar14) / (ulong)uVar3);
        }
        if (*puVar10 <= uVar1) {
          uVar1 = 0xffffffff;
        }
        if ((uVar1 < DAT_05326ec0) &&
           (uVar9 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2), uVar9 < 0xbd)) {
          switch(uVar9) {
          case 0:
            break;
          default:
            return;
          case 0x15:
            *(ushort *)(param_1 + 0x8a) = *(ushort *)(param_1 + 0x8a) | 1;
            return;
          case 0x16:
            *(ushort *)(param_1 + 0x8a) = *(ushort *)(param_1 + 0x8a) | 2;
            return;
          case 0x17:
            *(ushort *)(param_1 + 0x8a) = *(ushort *)(param_1 + 0x8a) | 4;
            return;
          }
        }
      }
    }
  }
  uVar9 = 0;
  uVar3 = *puVar8;
  if ((uVar3 != 0) && (puVar8 != (uint *)(ulong)uVar3)) {
    puVar10 = (uint *)((long)puVar8 - (long)(ulong)uVar3);
    uVar9 = 0;
    if (*puVar10 != 0) {
      uVar3 = puVar10[1];
      if ((uVar3 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
        lVar14 = 0xc;
        if (*(char *)((long)puVar10 + 10) != '\0') {
          lVar14 = 0x1c;
        }
        lVar14 = (long)puVar10 + lVar14 + (ulong)(ushort)puVar10[2] * 8;
        if (lVar14 != 0) {
          uVar1 = 0;
          if ((ulong)uVar3 != 0) {
            uVar1 = (uint)((ulong)((long)puVar8 - lVar14) / (ulong)uVar3);
          }
          if (*puVar10 <= uVar1) {
            uVar1 = 0xffffffff;
          }
          if ((uVar1 < DAT_05326f18) &&
             (uVar9 = *(ushort *)(DAT_05326f20 + (long)(int)uVar1 * 2), uVar9 < 0xf))
          goto LAB_0260a600;
        }
      }
      uVar9 = 0;
    }
  }
LAB_0260a600:
  if (uVar9 == 0xb) {
    *(ushort *)(param_1 + 0x8a) = *(ushort *)(param_1 + 0x8a) | 8;
  }
  uVar3 = *puVar8;
  uVar9 = 0;
  if ((uVar3 != 0) && (puVar8 != (uint *)(ulong)uVar3)) {
    puVar10 = (uint *)((long)puVar8 - (long)(ulong)uVar3);
    uVar9 = 0;
    if (*puVar10 != 0) {
      uVar3 = puVar10[1];
      if ((uVar3 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
        lVar14 = 0xc;
        if (*(char *)((long)puVar10 + 10) != '\0') {
          lVar14 = 0x1c;
        }
        lVar14 = (long)puVar10 + lVar14 + (ulong)(ushort)puVar10[2] * 8;
        if (lVar14 != 0) {
          uVar1 = 0;
          if ((ulong)uVar3 != 0) {
            uVar1 = (uint)((ulong)((long)puVar8 - lVar14) / (ulong)uVar3);
          }
          if (*puVar10 <= uVar1) {
            uVar1 = 0xffffffff;
          }
          if ((uVar1 < DAT_05326d48) &&
             (uVar9 = *(ushort *)(DAT_05326d50 + (long)(int)uVar1 * 2), uVar9 < 0x52))
          goto LAB_0260a6ac;
        }
      }
      uVar9 = 0;
    }
  }
LAB_0260a6ac:
  if ((uVar9 & 0xfffe) != 0x12) {
    return;
  }
  uVar3 = *puVar8;
  if ((uVar3 == 0) || (puVar8 == (uint *)(ulong)uVar3)) {
LAB_0260a758:
    uVar7 = *(ushort *)(param_1 + 0x8a);
  }
  else {
    puVar10 = (uint *)((long)puVar8 - (long)(ulong)uVar3);
    if ((*puVar10 == 0) || ((uVar3 = puVar10[1], uVar3 == 0 || ((ulong)(ushort)puVar10[2] == 0))))
    goto LAB_0260a758;
    lVar14 = 0xc;
    if (*(char *)((long)puVar10 + 10) != '\0') {
      lVar14 = 0x1c;
    }
    lVar14 = (long)puVar10 + lVar14 + (ulong)(ushort)puVar10[2] * 8;
    if (lVar14 == 0) goto LAB_0260a758;
    uVar1 = 0;
    if ((ulong)uVar3 != 0) {
      uVar1 = (uint)((ulong)((long)puVar8 - lVar14) / (ulong)uVar3);
    }
    if (*puVar10 <= uVar1) {
      uVar1 = 0xffffffff;
    }
    if ((DAT_05326e80 <= uVar1) ||
       (uVar9 = *(ushort *)(DAT_05326e88 + (long)(int)uVar1 * 2), 5 < uVar9)) goto LAB_0260a758;
    uVar7 = *(ushort *)(param_1 + 0x8a);
    if (uVar9 == 5) {
      uVar7 = uVar7 | 0x40;
      goto LAB_0260a760;
    }
  }
  uVar7 = uVar7 | 0x20;
LAB_0260a760:
  *(ushort *)(param_1 + 0x8a) = uVar7;
  return;
}


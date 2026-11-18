
uint FUN_03701400(long param_1,uint param_2,uint param_3)

{
  long lVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  int *piVar5;
  uint *puVar6;
  ulong uVar7;
  int iVar8;
  char cVar9;
  uint *puVar10;
  uint local_10 [4];
  
  puVar4 = PTR_DAT_04bc2470;
  puVar3 = PTR_DAT_04bc2468;
  if ((int)*(uint *)(param_1 + 0x948) < 1) {
    if (*(long *)(param_1 + 0x838) == 0) {
      return param_3;
    }
    puVar6 = *(uint **)(*(long *)(param_1 + 0x838) + 8);
    if (puVar6 == (uint *)0x0) {
      return param_3;
    }
    if ((param_2 < *(uint *)(param_1 + 0x850)) &&
       (*(char *)(*(long *)(param_1 + 0x858) + (long)(int)param_2) == '\0')) {
      return param_3;
    }
    if (*puVar6 <= param_2) {
      return param_3;
    }
    if (puVar6[1] == 0) {
      return param_3;
    }
    if ((ushort)puVar6[2] == 0) {
      return param_3;
    }
    iVar8 = 0xc;
    if (*(char *)((long)puVar6 + 10) != '\0') {
      iVar8 = 0x1c;
    }
    puVar6 = (uint *)((ulong)(puVar6[1] * param_2 + (uint)(ushort)puVar6[2] * 8 + iVar8) +
                     (long)puVar6);
  }
  else {
    if (*(uint *)(param_1 + 0x948) <= param_2) {
      return param_3;
    }
    if (*(uint *)(param_1 + 0x938) <= param_2) {
      param_2 = 0;
    }
    puVar6 = *(uint **)(*(long *)(param_1 + 0x940) + (ulong)param_2 * 8);
  }
  if (puVar6 != (uint *)0x0) {
    uVar2 = *puVar6;
    if (uVar2 != 0) {
      cVar9 = *PTR_DAT_04bc2468;
      do {
        puVar10 = (uint *)(ulong)uVar2;
        if (cVar9 != '\0') {
          uVar2 = *(uint *)puVar4;
          if ((int)uVar2 < 0) {
            if (uVar2 == 0xffffffff) {
              local_10[0] = 0;
              if (puVar10 != (uint *)0x0) goto LAB_037014a4;
            }
            else {
LAB_03701584:
              local_10[0] = 0;
            }
            goto LAB_03701588;
          }
          local_10[0] = 0;
          if (((uint *)((ulong)uVar2 + (long)puVar6) == (uint *)0x0) ||
             (local_10[0] = *(uint *)((ulong)uVar2 + (long)puVar6), local_10[0] < 0xc))
          goto LAB_03701588;
          local_10[0] = 0;
LAB_03701590:
          cVar9 = *puVar3;
          goto LAB_037015a8;
        }
        cVar9 = '\x01';
        *(undefined8 *)puVar4 = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
        *puVar3 = 1;
        *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
        puVar10 = (uint *)(ulong)*puVar6;
        local_10[0] = 0;
        if (puVar10 == (uint *)0x0) {
LAB_03701588:
          local_10[1] = 0;
          if (*puVar6 != 0) goto LAB_03701590;
          goto LAB_0370167c;
        }
LAB_037014a4:
        local_10[0] = 0;
        if (puVar6 == puVar10) goto LAB_03701588;
        lVar1 = 0xc;
        if (*(char *)((long)puVar6 + (10 - (long)puVar10)) != '\0') {
          lVar1 = 0x1c;
        }
        lVar1 = (long)puVar6 + (lVar1 - (long)puVar10);
        if (lVar1 == 0) goto LAB_03701584;
        uVar7 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar10));
        *(undefined4 *)puVar4 = 0xfffffffe;
        local_10[0] = 0;
        if (uVar7 == 0) goto LAB_03701588;
        piVar5 = (int *)(lVar1 + 4);
        while (piVar5[-1] != -0x2982d3af) {
          piVar5 = piVar5 + 2;
          uVar7 = uVar7 - 1;
          if (uVar7 == 0) {
            local_10[0] = 0;
            goto LAB_03701588;
          }
        }
        iVar8 = 0;
        if (*piVar5 != -1) {
          iVar8 = *piVar5;
        }
        *(int *)puVar4 = iVar8;
        uVar2 = *puVar6;
      } while (uVar2 != 0);
    }
    local_10[0] = 0;
LAB_0370150c:
    local_10[1] = 0;
LAB_0370167c:
    local_10[2] = 0;
    if (*puVar6 != 0) {
      cVar9 = *puVar3;
      do {
        if (cVar9 != '\0') {
          uVar2 = *(uint *)(puVar4 + 8);
          if ((int)uVar2 < 0) {
            if (uVar2 == 0xffffffff) goto LAB_037016c8;
          }
          else {
            local_10[2] = 0;
            if (((uint *)((ulong)uVar2 + (long)puVar6) == (uint *)0x0) ||
               (local_10[2] = *(uint *)((ulong)uVar2 + (long)puVar6), local_10[2] < 0xc))
            goto LAB_03701754;
          }
LAB_03701750:
          local_10[2] = 0;
          goto LAB_03701754;
        }
        cVar9 = '\x01';
        *(undefined8 *)puVar4 = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
        *puVar3 = 1;
        *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
LAB_037016c8:
        puVar10 = (uint *)(ulong)*puVar6;
        local_10[2] = 0;
        if ((*puVar6 == 0) || (puVar6 == puVar10)) goto LAB_03701754;
        lVar1 = 0xc;
        if (*(char *)((long)puVar6 + (10 - (long)puVar10)) != '\0') {
          lVar1 = 0x1c;
        }
        lVar1 = (long)puVar6 + (lVar1 - (long)puVar10);
        if (lVar1 == 0) goto LAB_03701750;
        uVar7 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar10));
        *(undefined4 *)(puVar4 + 8) = 0xfffffffe;
        local_10[2] = 0;
        if (uVar7 == 0) goto LAB_03701754;
        piVar5 = (int *)(lVar1 + 4);
        while (piVar5[-1] != -0x534280cf) {
          piVar5 = piVar5 + 2;
          uVar7 = uVar7 - 1;
          if (uVar7 == 0) {
            local_10[2] = 0;
            goto LAB_03701754;
          }
        }
        iVar8 = 0;
        if (*piVar5 != -1) {
          iVar8 = *piVar5;
        }
        *(int *)(puVar4 + 8) = iVar8;
      } while (*puVar6 != 0);
      local_10[2] = 0;
    }
LAB_03701754:
    if (*puVar6 == 0) {
LAB_0370182c:
      local_10[3] = 0;
    }
    else {
      cVar9 = *puVar3;
      do {
        if (cVar9 == '\0') {
          cVar9 = '\x01';
          *(undefined8 *)puVar4 = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
          *puVar3 = 1;
          *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
        }
        else {
          uVar2 = *(uint *)(puVar4 + 0xc);
          if (-1 < (int)uVar2) {
            if (((uint *)((ulong)uVar2 + (long)puVar6) == (uint *)0x0) ||
               (local_10[3] = *(uint *)((ulong)uVar2 + (long)puVar6), 0xb < local_10[3]))
            goto LAB_0370182c;
            goto LAB_03701830;
          }
          if (uVar2 != 0xffffffff) goto LAB_0370182c;
        }
        puVar10 = (uint *)(ulong)*puVar6;
        local_10[3] = 0;
        if ((*puVar6 == 0) || (puVar6 == puVar10)) goto LAB_03701830;
        lVar1 = 0xc;
        if (*(char *)((long)puVar6 + (10 - (long)puVar10)) != '\0') {
          lVar1 = 0x1c;
        }
        lVar1 = (long)puVar6 + (lVar1 - (long)puVar10);
        if (lVar1 == 0) goto LAB_0370182c;
        uVar7 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar10));
        *(undefined4 *)(puVar4 + 0xc) = 0xfffffffe;
        local_10[3] = 0;
        if (uVar7 == 0) goto LAB_03701830;
        piVar5 = (int *)(lVar1 + 4);
        while (piVar5[-1] != 0x1e9da321) {
          piVar5 = piVar5 + 2;
          uVar7 = uVar7 - 1;
          if (uVar7 == 0) {
            local_10[3] = 0;
            goto LAB_03701830;
          }
        }
        iVar8 = 0;
        if (*piVar5 != -1) {
          iVar8 = *piVar5;
        }
        *(int *)(puVar4 + 0xc) = iVar8;
      } while (*puVar6 != 0);
      local_10[3] = 0;
    }
LAB_03701830:
    uVar2 = param_3 - 3;
    if (param_3 + 1 < 4) {
      uVar2 = param_3 + 1;
    }
    uVar7 = (ulong)uVar2;
    if (3 < uVar2) {
      uVar7 = 0;
    }
    if (local_10[uVar7] == 0) {
      uVar2 = param_3 - 2;
      if (param_3 + 2 < 4) {
        uVar2 = param_3 + 2;
      }
      uVar7 = (ulong)uVar2;
      if (3 < uVar2) {
        uVar7 = 0;
      }
      if (local_10[uVar7] == 0) {
        uVar2 = param_3 - 1;
        if (param_3 + 3 < 4) {
          uVar2 = param_3 + 3;
        }
        uVar7 = (ulong)uVar2;
        if (3 < uVar2) {
          uVar7 = 0;
        }
        if (local_10[uVar7] != 0) {
          param_3 = uVar2;
        }
        uVar2 = param_3;
      }
    }
    param_3 = uVar2;
  }
  return param_3;
LAB_037015a8:
  if (cVar9 == '\0') {
    cVar9 = '\x01';
    *(undefined8 *)puVar4 = 0xffffffffffffffff;
    *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
    *puVar3 = 1;
    *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
    *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
    uVar2 = *puVar6;
  }
  else {
    uVar2 = *(uint *)(puVar4 + 4);
    if (-1 < (int)uVar2) {
      local_10[1] = 0;
      if (((uint *)((ulong)uVar2 + (long)puVar6) == (uint *)0x0) ||
         (local_10[1] = *(uint *)((ulong)uVar2 + (long)puVar6), local_10[1] < 0xc))
      goto LAB_0370167c;
      goto LAB_0370150c;
    }
    if (uVar2 != 0xffffffff) goto LAB_0370150c;
    uVar2 = *puVar6;
  }
  if ((uVar2 == 0) || (puVar10 = (uint *)(ulong)uVar2, puVar6 == puVar10)) goto LAB_0370150c;
  lVar1 = 0xc;
  if (*(char *)((long)puVar6 + (10 - (long)puVar10)) != '\0') {
    lVar1 = 0x1c;
  }
  lVar1 = (long)puVar6 + (lVar1 - (long)puVar10);
  if (lVar1 == 0) goto LAB_0370150c;
  uVar7 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar10));
  *(undefined4 *)(puVar4 + 4) = 0xfffffffe;
  if (uVar7 == 0) goto LAB_0370150c;
  piVar5 = (int *)(lVar1 + 4);
  while (piVar5[-1] != -0x6e22a97f) {
    piVar5 = piVar5 + 2;
    uVar7 = uVar7 - 1;
    if (uVar7 == 0) goto LAB_0370150c;
  }
  iVar8 = 0;
  if (*piVar5 != -1) {
    iVar8 = *piVar5;
  }
  *(int *)(puVar4 + 4) = iVar8;
  if (*puVar6 == 0) goto LAB_0370150c;
  goto LAB_037015a8;
}


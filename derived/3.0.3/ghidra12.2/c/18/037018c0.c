
uint FUN_037018c0(long param_1,uint param_2,uint param_3)

{
  long lVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  int *piVar5;
  ulong uVar6;
  uint *puVar7;
  int iVar8;
  char cVar9;
  uint *puVar10;
  uint local_10 [4];
  
  puVar4 = PTR_DAT_04bc2470;
  puVar3 = PTR_DAT_04bc2468;
  if ((int)*(uint *)(param_1 + 0x948) < 1) {
    if (*(long *)(param_1 + 0x838) == 0) {
      return 0;
    }
    puVar7 = *(uint **)(*(long *)(param_1 + 0x838) + 8);
    if (puVar7 == (uint *)0x0) {
      return 0;
    }
    if ((param_2 < *(uint *)(param_1 + 0x850)) &&
       (*(char *)(*(long *)(param_1 + 0x858) + (long)(int)param_2) == '\0')) {
      return 0;
    }
    if (*puVar7 <= param_2) {
      return 0;
    }
    if (puVar7[1] == 0) {
      return 0;
    }
    if ((ushort)puVar7[2] == 0) {
      return 0;
    }
    iVar8 = 0xc;
    if (*(char *)((long)puVar7 + 10) != '\0') {
      iVar8 = 0x1c;
    }
    puVar7 = (uint *)((ulong)(puVar7[1] * param_2 + (uint)(ushort)puVar7[2] * 8 + iVar8) +
                     (long)puVar7);
  }
  else {
    if (*(uint *)(param_1 + 0x948) <= param_2) {
      return 0;
    }
    if (*(uint *)(param_1 + 0x938) <= param_2) {
      param_2 = 0;
    }
    puVar7 = *(uint **)(*(long *)(param_1 + 0x940) + (ulong)param_2 * 8);
  }
  if (puVar7 == (uint *)0x0) {
    return 0;
  }
  uVar2 = *puVar7;
  if (uVar2 != 0) {
    cVar9 = *PTR_DAT_04bc2468;
    do {
      puVar10 = (uint *)(ulong)uVar2;
      if (cVar9 != '\0') {
        uVar2 = *(uint *)puVar4;
        if ((int)uVar2 < 0) {
          if (uVar2 == 0xffffffff) {
            local_10[0] = 0;
            if (puVar10 != (uint *)0x0) goto LAB_03701964;
          }
          else {
LAB_03701a48:
            local_10[0] = 0;
          }
          goto LAB_03701a4c;
        }
        local_10[0] = 0;
        if (((uint *)((ulong)uVar2 + (long)puVar7) == (uint *)0x0) ||
           (local_10[0] = *(uint *)((ulong)uVar2 + (long)puVar7), local_10[0] < 0xc))
        goto LAB_03701a4c;
        local_10[0] = 0;
LAB_03701a54:
        cVar9 = *puVar3;
        goto LAB_03701a6c;
      }
      cVar9 = '\x01';
      *(undefined8 *)puVar4 = 0xffffffffffffffff;
      *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
      *puVar3 = 1;
      *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
      *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
      *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
      puVar10 = (uint *)(ulong)*puVar7;
      local_10[0] = 0;
      if (puVar10 == (uint *)0x0) {
LAB_03701a4c:
        local_10[1] = 0;
        if (*puVar7 != 0) goto LAB_03701a54;
        goto LAB_03701b48;
      }
LAB_03701964:
      local_10[0] = 0;
      if (puVar7 == puVar10) goto LAB_03701a4c;
      lVar1 = 0xc;
      if (*(char *)((long)puVar7 + (10 - (long)puVar10)) != '\0') {
        lVar1 = 0x1c;
      }
      lVar1 = (long)puVar7 + (lVar1 - (long)puVar10);
      if (lVar1 == 0) goto LAB_03701a48;
      uVar6 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar10));
      *(undefined4 *)puVar4 = 0xfffffffe;
      local_10[0] = 0;
      if (uVar6 == 0) goto LAB_03701a4c;
      piVar5 = (int *)(lVar1 + 4);
      while (piVar5[-1] != -0x2982d3af) {
        piVar5 = piVar5 + 2;
        uVar6 = uVar6 - 1;
        if (uVar6 == 0) {
          local_10[0] = 0;
          goto LAB_03701a4c;
        }
      }
      iVar8 = 0;
      if (*piVar5 != -1) {
        iVar8 = *piVar5;
      }
      *(int *)puVar4 = iVar8;
      uVar2 = *puVar7;
    } while (uVar2 != 0);
  }
  local_10[0] = 0;
LAB_037019cc:
  local_10[1] = 0;
LAB_03701b48:
  local_10[2] = 0;
  if (*puVar7 != 0) {
    cVar9 = *puVar3;
    do {
      if (cVar9 != '\0') {
        uVar2 = *(uint *)(puVar4 + 8);
        if ((int)uVar2 < 0) {
          if (uVar2 == 0xffffffff) goto LAB_03701b94;
        }
        else {
          local_10[2] = 0;
          if (((uint *)((ulong)uVar2 + (long)puVar7) == (uint *)0x0) ||
             (local_10[2] = *(uint *)((ulong)uVar2 + (long)puVar7), local_10[2] < 0xc))
          goto LAB_03701c20;
        }
LAB_03701c1c:
        local_10[2] = 0;
        goto LAB_03701c20;
      }
      cVar9 = '\x01';
      *(undefined8 *)puVar4 = 0xffffffffffffffff;
      *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
      *puVar3 = 1;
      *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
      *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
      *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
LAB_03701b94:
      puVar10 = (uint *)(ulong)*puVar7;
      local_10[2] = 0;
      if ((*puVar7 == 0) || (puVar7 == puVar10)) goto LAB_03701c20;
      lVar1 = 0xc;
      if (*(char *)((long)puVar7 + (10 - (long)puVar10)) != '\0') {
        lVar1 = 0x1c;
      }
      lVar1 = (long)puVar7 + (lVar1 - (long)puVar10);
      if (lVar1 == 0) goto LAB_03701c1c;
      uVar6 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar10));
      *(undefined4 *)(puVar4 + 8) = 0xfffffffe;
      local_10[2] = 0;
      if (uVar6 == 0) goto LAB_03701c20;
      piVar5 = (int *)(lVar1 + 4);
      while (piVar5[-1] != -0x534280cf) {
        piVar5 = piVar5 + 2;
        uVar6 = uVar6 - 1;
        if (uVar6 == 0) {
          local_10[2] = 0;
          goto LAB_03701c20;
        }
      }
      iVar8 = 0;
      if (*piVar5 != -1) {
        iVar8 = *piVar5;
      }
      *(int *)(puVar4 + 8) = iVar8;
    } while (*puVar7 != 0);
    local_10[2] = 0;
  }
LAB_03701c20:
  if (*puVar7 == 0) {
LAB_03701cfc:
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
          if (((uint *)((ulong)uVar2 + (long)puVar7) == (uint *)0x0) ||
             (local_10[3] = *(uint *)((ulong)uVar2 + (long)puVar7), 0xb < local_10[3]))
          goto LAB_03701cfc;
          goto LAB_03701d00;
        }
        if (uVar2 != 0xffffffff) goto LAB_03701cfc;
      }
      puVar10 = (uint *)(ulong)*puVar7;
      local_10[3] = 0;
      if ((*puVar7 == 0) || (puVar7 == puVar10)) goto LAB_03701d00;
      lVar1 = 0xc;
      if (*(char *)((long)puVar7 + (10 - (long)puVar10)) != '\0') {
        lVar1 = 0x1c;
      }
      lVar1 = (long)puVar7 + (lVar1 - (long)puVar10);
      if (lVar1 == 0) goto LAB_03701cfc;
      uVar6 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar10));
      *(undefined4 *)(puVar4 + 0xc) = 0xfffffffe;
      local_10[3] = 0;
      if (uVar6 == 0) goto LAB_03701d00;
      piVar5 = (int *)(lVar1 + 4);
      while (piVar5[-1] != 0x1e9da321) {
        piVar5 = piVar5 + 2;
        uVar6 = uVar6 - 1;
        if (uVar6 == 0) {
          local_10[3] = 0;
          goto LAB_03701d00;
        }
      }
      iVar8 = 0;
      if (*piVar5 != -1) {
        iVar8 = *piVar5;
      }
      *(int *)(puVar4 + 0xc) = iVar8;
    } while (*puVar7 != 0);
    local_10[3] = 0;
  }
LAB_03701d00:
  if (param_3 < 4) {
    return local_10[param_3];
  }
  return 0;
LAB_03701a6c:
  if (cVar9 == '\0') {
    cVar9 = '\x01';
    *(undefined8 *)puVar4 = 0xffffffffffffffff;
    *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
    *puVar3 = 1;
    *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
    *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
    uVar2 = *puVar7;
  }
  else {
    uVar2 = *(uint *)(puVar4 + 4);
    if (-1 < (int)uVar2) {
      local_10[1] = 0;
      if (((uint *)((ulong)uVar2 + (long)puVar7) == (uint *)0x0) ||
         (local_10[1] = *(uint *)((ulong)uVar2 + (long)puVar7), local_10[1] < 0xc))
      goto LAB_03701b48;
      goto LAB_037019cc;
    }
    if (uVar2 != 0xffffffff) goto LAB_037019cc;
    uVar2 = *puVar7;
  }
  if ((uVar2 == 0) || (puVar10 = (uint *)(ulong)uVar2, puVar7 == puVar10)) goto LAB_037019cc;
  lVar1 = 0xc;
  if (*(char *)((long)puVar7 + (10 - (long)puVar10)) != '\0') {
    lVar1 = 0x1c;
  }
  lVar1 = (long)puVar7 + (lVar1 - (long)puVar10);
  if (lVar1 == 0) goto LAB_037019cc;
  uVar6 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar10));
  *(undefined4 *)(puVar4 + 4) = 0xfffffffe;
  if (uVar6 == 0) goto LAB_037019cc;
  piVar5 = (int *)(lVar1 + 4);
  while (piVar5[-1] != -0x6e22a97f) {
    piVar5 = piVar5 + 2;
    uVar6 = uVar6 - 1;
    if (uVar6 == 0) goto LAB_037019cc;
  }
  iVar8 = 0;
  if (*piVar5 != -1) {
    iVar8 = *piVar5;
  }
  *(int *)(puVar4 + 4) = iVar8;
  if (*puVar7 == 0) goto LAB_037019cc;
  goto LAB_03701a6c;
}


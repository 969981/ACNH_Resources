
undefined8 FUN_0303b310(long param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 local_70;
  long lStack_68;
  long *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_48;
  undefined4 local_3c;
  ulong local_38;
  ulong local_18;
  
  if (*(char *)(param_1 + 8) != '\0') {
    return 0;
  }
  uVar11 = *(ulong *)(param_1 + 0x48);
  if (uVar11 != 0) {
    lVar5 = *(long *)(uVar11 + 8);
    while (lVar5 != 0) {
      *(ulong *)(lVar5 + 0x18) = *(ulong *)(lVar5 + 0x18) & 1 | uVar11;
      uVar11 = *(ulong *)(uVar11 + 8);
      lVar5 = *(long *)(uVar11 + 8);
    }
    if (param_2 == 0) {
      do {
        while (lVar5 = *(long *)(uVar11 + 0x10), lVar5 != 0) {
          *(ulong *)(lVar5 + 0x18) = *(ulong *)(lVar5 + 0x18) & 1 | uVar11;
          uVar11 = *(ulong *)(uVar11 + 0x10);
          lVar5 = *(long *)(uVar11 + 8);
          while (lVar5 != 0) {
            *(ulong *)(lVar5 + 0x18) = *(ulong *)(lVar5 + 0x18) & 1 | uVar11;
            uVar11 = *(ulong *)(uVar11 + 8);
            lVar5 = *(long *)(uVar11 + 8);
          }
        }
        uVar6 = uVar11;
        do {
          uVar11 = *(ulong *)(uVar6 + 0x18) & 0xfffffffffffffffe;
          if (uVar11 == 0) goto LAB_0303b4a0;
          bVar3 = *(ulong *)(uVar11 + 8) != uVar6;
          uVar6 = uVar11;
        } while (bVar3);
      } while( true );
    }
    do {
      if (*(char *)(uVar11 + 0x20) == '\0' && *(char *)(param_1 + 8) == '\0') {
        if (*(long *)(uVar11 + 0x28) == *(long *)(param_1 + 0x10)) goto LAB_0303b3b0;
      }
      else if ((*(char *)(uVar11 + 0x20) != '\0') != (*(char *)(param_1 + 8) == '\0')) {
LAB_0303b3b0:
        iVar4 = FUN_01d6d300(uVar11 + 0x38,param_2);
        if (iVar4 == 0) {
          return 1;
        }
      }
      lVar5 = *(long *)(uVar11 + 0x10);
      if (lVar5 == 0) {
        uVar6 = uVar11;
        do {
          uVar11 = *(ulong *)(uVar6 + 0x18) & 0xfffffffffffffffe;
          if (uVar11 == 0) goto LAB_0303b4a0;
          bVar3 = *(ulong *)(uVar11 + 8) != uVar6;
          uVar6 = uVar11;
        } while (bVar3);
      }
      else {
        *(ulong *)(lVar5 + 0x18) = *(ulong *)(lVar5 + 0x18) & 1 | uVar11;
        uVar11 = *(ulong *)(uVar11 + 0x10);
        lVar5 = *(long *)(uVar11 + 8);
        while (lVar5 != 0) {
          *(ulong *)(lVar5 + 0x18) = *(ulong *)(lVar5 + 0x18) & 1 | uVar11;
          uVar11 = *(ulong *)(uVar11 + 8);
          lVar5 = *(long *)(uVar11 + 8);
        }
      }
    } while( true );
  }
LAB_0303b4a0:
  local_70 = *(undefined8 *)(param_1 + 0x10);
  if (*(char *)(param_1 + 8) != '\0') {
    local_70 = 0;
  }
  uVar11 = FUN_0344ea50(&local_70,param_1 + 0x20);
  local_3c = 0;
  if (*(int *)(param_1 + 0x18) == 0) {
LAB_0303b4d8:
    if (*(int *)(param_1 + 0x18) == 1) {
      return 0;
    }
    if ((uVar11 & 1) != 0) {
      lVar5 = *DAT_04cb54f0;
LAB_0303b650:
      local_3c = 1;
      if (lVar5 == 0) {
        return 0;
      }
      lVar5 = *(long *)(DAT_053807b0 + 0xd8);
      if (*(int *)(lVar5 + 0x9c) < 1) {
        return 0;
      }
      lStack_68 = 0;
      local_70 = 0xffffffff00000000;
      if (*DAT_04cb54f0 == 0) {
        local_48 = 0;
        local_60 = (long *)0x0;
        local_58 = 0;
        local_50 = 0;
      }
      else {
        local_48 = 0;
        local_60 = (long *)0x0;
        local_58 = 0;
        local_50 = 0;
        if (((*(int *)(lVar5 + 0x68) < 1) ||
            (plVar8 = (long *)**(long **)(lVar5 + 0x70), plVar8 == (long *)0x0)) || (*plVar8 == 0))
        {
          local_70 = 3;
        }
        else {
          local_60 = plVar8 + 1;
          plVar1 = &DAT_04178a58;
          if ((char)plVar8[0xd8] != '\0') {
            plVar1 = local_60;
          }
          lStack_68 = *plVar1;
          local_70 = 1;
          FUN_01d6cda0(&local_70);
        }
      }
      goto LAB_0303b82c;
    }
    cVar2 = *(char *)(param_1 + 8);
    uVar9 = *(ulong *)(param_1 + 0x10);
    lVar5 = *DAT_04cb54f0;
  }
  else {
    if ((uVar11 & 1) != 0) {
      lVar5 = *DAT_04cb54f0;
      if ((lVar5 != 0) && (lVar7 = *(long *)(DAT_053807b0 + 0xd8), 0 < *(int *)(lVar7 + 0x98))) {
        lStack_68 = 0;
        local_70 = 0xffffffff00000000;
        if (*DAT_04cb54f0 == 0) {
          local_48 = 0;
          local_60 = (long *)0x0;
          local_58 = 0;
          local_50 = 0;
        }
        else {
          local_48 = 0;
          local_60 = (long *)0x0;
          local_58 = 0;
          local_50 = 0;
          if (((*(int *)(lVar7 + 0x58) < 1) ||
              (plVar8 = (long *)**(long **)(lVar7 + 0x60), plVar8 == (long *)0x0)) || (*plVar8 == 0)
             ) {
            local_70 = 2;
          }
          else {
            local_60 = plVar8 + 1;
            plVar1 = &DAT_04178a58;
            if ((char)plVar8[0xd8] != '\0') {
              plVar1 = local_60;
            }
            lStack_68 = *plVar1;
            local_70 = 1;
            FUN_01d6cda0(&local_70);
          }
        }
LAB_0303b808:
        if ((param_2 != 0) && (iVar4 = FUN_01d6d300(&local_70,param_2), iVar4 == 0)) {
          return 1;
        }
        goto LAB_0303b4d8;
      }
      if (*(int *)(param_1 + 0x18) == 1) {
        return 0;
      }
      goto LAB_0303b650;
    }
    cVar2 = *(char *)(param_1 + 8);
    uVar9 = *(ulong *)(param_1 + 0x10);
    uVar6 = uVar9;
    if (cVar2 != '\0') {
      uVar6 = 0;
    }
    lVar5 = **(long **)PTR_DAT_04bb36f8;
    if (lVar5 != 0) {
      iVar4 = *(int *)(*(long *)(DAT_053807b0 + 0xe0) + 0x20);
      if (iVar4 != 0) {
        plVar8 = *(long **)(*(long *)(DAT_053807b0 + 0xe0) + 0x28);
        lVar7 = (long)iVar4 * 8;
        do {
          lVar7 = lVar7 + -8;
          uVar10 = *(ulong *)(*plVar8 + 0x20);
          if (uVar6 == uVar10) {
            if (0 < *(int *)(*plVar8 + 0x98)) {
              local_50 = 0;
              local_48 = 0;
              local_70 = 0xffffffff00000000;
              lStack_68 = 0;
              local_60 = (long *)0x0;
              local_58 = 0;
              local_18 = uVar6;
              FUN_01d6cc7c(&local_70,&local_18,0);
              goto LAB_0303b808;
            }
            break;
          }
          plVar8 = plVar8 + 1;
        } while (uVar6 <= uVar10 && lVar7 != 0);
      }
    }
    if (*(int *)(param_1 + 0x18) == 1) {
      return 0;
    }
  }
  local_3c = 1;
  if (cVar2 != '\0') {
    uVar9 = 0;
  }
  if (lVar5 == 0) {
    return 0;
  }
  iVar4 = *(int *)(*(long *)(DAT_053807b0 + 0xe0) + 0x20);
  if (iVar4 == 0) {
    return 0;
  }
  plVar8 = *(long **)(*(long *)(DAT_053807b0 + 0xe0) + 0x28);
  lVar5 = (long)iVar4 * 8;
  while( true ) {
    lVar5 = lVar5 + -8;
    uVar11 = *(ulong *)(*plVar8 + 0x20);
    if (uVar9 == uVar11) break;
    plVar8 = plVar8 + 1;
    if (uVar11 < uVar9 || lVar5 == 0) {
      return 0;
    }
  }
  if (*(int *)(*plVar8 + 0x9c) < 1) {
    return 0;
  }
  local_50 = 0;
  local_48 = 0;
  local_70 = 0xffffffff00000000;
  lStack_68 = 0;
  local_60 = (long *)0x0;
  local_58 = 0;
  local_38 = uVar9;
  FUN_01d6ccc4(&local_70,&local_38,0);
LAB_0303b82c:
  if ((param_2 == 0) || (iVar4 = FUN_01d6d300(&local_70,param_2), iVar4 != 0)) {
    return 0;
  }
  return 1;
}


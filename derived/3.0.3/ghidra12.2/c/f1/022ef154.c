
undefined8 FUN_022ef154(undefined8 param_1,long param_2,long param_3)

{
  undefined *puVar1;
  uint uVar2;
  undefined *puVar3;
  ulong uVar4;
  float *pfVar5;
  int iVar6;
  undefined *local_68;
  int local_60;
  int iStack_5c;
  uint local_54;
  undefined *local_50;
  int local_48;
  int iStack_44;
  
  puVar3 = PTR_DAT_04bb2018;
  if (param_2 == 0) {
    return 0;
  }
  pfVar5 = (float *)(param_3 + 4);
  puVar1 = PTR_DAT_04bb2018 + 0x10;
  iVar6 = *(int *)(param_3 + 0x10);
  local_48 = (int)((float)(int)*pfVar5 / 10.0) - (uint)(*pfVar5 < 0.0);
  iStack_44 = (int)((float)(int)*(float *)(param_3 + 0xc) / 10.0) -
              (uint)(*(float *)(param_3 + 0xc) < 0.0);
  local_50 = puVar1;
  uVar4 = FUN_022ef6b0(&local_50,pfVar5);
  if ((uVar4 & 1) == 0) {
    iVar6 = (int)(long)((float)(iVar6 + 0x10000000U >> 0x1d) * 45.0 * 11930465.0);
    local_54 = iVar6 + 0x10000000U >> 0x1d;
    uVar2 = local_54;
    if (7 < local_54) {
      uVar2 = 0;
    }
    local_60 = (&DAT_054850b0)[(long)(int)uVar2 * 4] + local_48;
    iStack_5c = (&DAT_054850b4)[(long)(int)uVar2 * 4] + iStack_44;
    local_68 = puVar1;
    uVar4 = FUN_022ef6b0(&local_68,pfVar5);
    if ((uVar4 & 1) == 0) {
      local_54 = iVar6 + 0xf0000000U >> 0x1d;
      uVar2 = local_54;
      if (7 < local_54) {
        uVar2 = 0;
      }
      local_60 = (&DAT_054850b0)[(long)(int)uVar2 * 4] + local_48;
      iStack_5c = (&DAT_054850b4)[(long)(int)uVar2 * 4] + iStack_44;
      local_68 = puVar3 + 0x10;
      uVar4 = FUN_022ef6b0(&local_68,pfVar5);
      if ((uVar4 & 1) == 0) {
        local_54 = iVar6 + 0x30000000U >> 0x1d;
        uVar2 = local_54;
        if (7 < local_54) {
          uVar2 = 0;
        }
        local_60 = (&DAT_054850b0)[(long)(int)uVar2 * 4] + local_48;
        iStack_5c = (&DAT_054850b4)[(long)(int)uVar2 * 4] + iStack_44;
        local_68 = puVar3 + 0x10;
        uVar4 = FUN_022ef6b0(&local_68,pfVar5);
        if ((uVar4 & 1) == 0) {
          local_54 = iVar6 + 0xd0000000U >> 0x1d;
          uVar2 = local_54;
          if (7 < local_54) {
            uVar2 = 0;
          }
          local_60 = (&DAT_054850b0)[(long)(int)uVar2 * 4] + local_48;
          iStack_5c = (&DAT_054850b4)[(long)(int)uVar2 * 4] + iStack_44;
          local_68 = puVar3 + 0x10;
          uVar4 = FUN_022ef6b0(&local_68,pfVar5);
          if ((uVar4 & 1) == 0) {
            local_54 = iVar6 + 0x50000000U >> 0x1d;
            uVar2 = local_54;
            if (7 < local_54) {
              uVar2 = 0;
            }
            local_60 = (&DAT_054850b0)[(long)(int)uVar2 * 4] + local_48;
            iStack_5c = (&DAT_054850b4)[(long)(int)uVar2 * 4] + iStack_44;
            local_68 = puVar3 + 0x10;
            uVar4 = FUN_022ef6b0(&local_68,pfVar5);
            if ((uVar4 & 1) == 0) {
              local_54 = iVar6 + 0xb0000000U >> 0x1d;
              uVar2 = local_54;
              if (7 < local_54) {
                uVar2 = 0;
              }
              local_60 = (&DAT_054850b0)[(long)(int)uVar2 * 4] + local_48;
              iStack_5c = (&DAT_054850b4)[(long)(int)uVar2 * 4] + iStack_44;
              local_68 = puVar3 + 0x10;
              uVar4 = FUN_022ef6b0(&local_68,pfVar5);
              if ((uVar4 & 1) == 0) {
                local_54 = iVar6 + 0x70000000U >> 0x1d;
                uVar2 = local_54;
                if (7 < local_54) {
                  uVar2 = 0;
                }
                local_60 = (&DAT_054850b0)[(long)(int)uVar2 * 4] + local_48;
                iStack_5c = (&DAT_054850b4)[(long)(int)uVar2 * 4] + iStack_44;
                local_68 = puVar3 + 0x10;
                uVar4 = FUN_022ef6b0(&local_68,pfVar5);
                if ((uVar4 & 1) == 0) {
                  local_54 = iVar6 + 0x90000000U >> 0x1d;
                  uVar2 = local_54;
                  if (7 < local_54) {
                    uVar2 = 0;
                  }
                  local_60 = (&DAT_054850b0)[(long)(int)uVar2 * 4] + local_48;
                  iStack_5c = (&DAT_054850b4)[(long)(int)uVar2 * 4] + iStack_44;
                  local_68 = puVar3 + 0x10;
                  uVar4 = FUN_022ef6b0(&local_68,pfVar5);
                  if ((uVar4 & 1) == 0) {
                    return 0;
                  }
                }
              }
            }
          }
        }
      }
    }
    local_48 = local_60;
    iStack_44 = iStack_5c;
  }
  *(int *)(param_2 + 8) = local_48;
  *(int *)(param_2 + 0xc) = iStack_44;
  return 1;
}


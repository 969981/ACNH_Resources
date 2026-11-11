
undefined1 ** FUN_00423a80(undefined1 **param_1)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  int iVar7;
  undefined1 *local_218;
  uint local_210;
  uint local_20c;
  undefined1 auStack_208 [128];
  undefined1 *local_188;
  int local_180;
  uint local_17c;
  undefined1 local_178 [128];
  undefined1 *local_f8;
  int local_f0;
  uint local_ec;
  undefined1 auStack_e8 [136];
  
  local_f8 = auStack_e8;
  local_f0 = 0;
  local_ec = 0x80000080;
  if (&local_f8 != param_1) {
    iVar7 = *(int *)(param_1 + 1);
    puVar6 = *param_1;
    if (0x80 < iVar7) {
      local_f8 = (undefined1 *)FUN_004267f0(PTR_DAT_048607c0,iVar7,1,local_f8,0,&local_ec);
    }
    FUN_0043aa30(local_f8,puVar6,(long)iVar7);
    local_f0 = iVar7;
    if (1 < iVar7) {
      lVar4 = 0;
      do {
        if (local_f8[lVar4] == '\\') {
          local_f8[lVar4] = 0x2f;
        }
        lVar4 = lVar4 + 1;
      } while (lVar4 < iVar7 + -1);
    }
  }
  puVar5 = (undefined8 *)&DAT_040f2148;
  uVar3 = FUN_0043a4f0(local_f8,&DAT_040f2148);
  if ((uVar3 & 1) == 0) {
    uVar3 = FUN_0043a4f0(local_f8,&DAT_04079e84);
    puVar5 = (undefined8 *)&DAT_04079e84;
    if ((uVar3 & 1) == 0) {
      puVar5 = &DAT_0407ebb1;
    }
  }
  local_188 = local_178;
  local_180 = 0;
  local_17c = 0x80000010;
  FUN_00422c80(&local_f8,0x2f,&local_188);
  local_218 = auStack_208;
  local_210 = 0;
  local_20c = 0x80000010;
  if (0x10 < local_180) {
    local_218 = (undefined1 *)FUN_00426720(PTR_DAT_048607c0,local_180,8,local_218,0,&local_20c);
  }
  puVar1 = PTR_DAT_048607c0;
  if (0 < local_180) {
    lVar4 = 0;
    iVar7 = 0;
    do {
      iVar2 = strcmp("..",*(char **)(local_188 + lVar4 * 8));
      puVar6 = local_188;
      if (iVar2 == 0) {
        if (iVar7 == 0) {
          if (local_210 == (local_20c & 0x3fffffff)) {
            FUN_00426990(puVar1,&local_218,8);
          }
          iVar7 = 0;
LAB_00423cd0:
          *(undefined8 *)(local_218 + (long)(int)local_210 * 8) =
               *(undefined8 *)(puVar6 + lVar4 * 8);
          local_210 = local_210 + 1;
        }
        else {
          local_210 = local_210 - 1;
          iVar7 = iVar7 + -1;
        }
      }
      else {
        iVar2 = strcmp(".",*(char **)(local_188 + lVar4 * 8));
        if (iVar2 != 0) {
          iVar2 = strcmp(*(char **)(local_188 + lVar4 * 8),"");
          puVar6 = local_188;
          if (iVar2 != 0) {
            iVar7 = iVar7 + 1;
            if (local_210 == (local_20c & 0x3fffffff)) {
              FUN_00426990(puVar1,&local_218,8);
            }
            goto LAB_00423cd0;
          }
        }
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < local_180);
  }
  FUN_004225f0(param_1,puVar5,0xffffffff);
  if (0 < (int)local_210) {
    lVar4 = 0;
    do {
      FUN_00423de0(param_1,*(undefined8 *)(local_218 + lVar4 * 8),0,0);
      lVar4 = lVar4 + 1;
    } while (lVar4 < (int)local_210);
  }
  puVar1 = PTR_DAT_048607c0;
  local_210 = 0;
  if ((-1 < (int)local_20c) && (local_218 != (undefined1 *)0x0)) {
    FUN_00421f90(PTR_DAT_048607c0,local_218,8,local_20c & 0x3fffffff);
  }
  local_180 = 0;
  if ((-1 < (int)local_17c) && (local_188 != (undefined1 *)0x0)) {
    FUN_00421f90(puVar1,local_188,8,local_17c & 0x3fffffff);
  }
  local_f0 = 0;
  if ((-1 < (int)local_ec) && (local_f8 != (undefined1 *)0x0)) {
    FUN_00421f90(puVar1,local_f8,1,local_ec & 0x3fffffff);
  }
  return param_1;
}


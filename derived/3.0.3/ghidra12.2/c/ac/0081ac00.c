
void FUN_0081ac00(undefined8 param_1,long *param_2,undefined8 param_3)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined *local_e0;
  undefined1 *puStack_d8;
  undefined1 *local_d0;
  uint local_c8;
  int local_c4;
  undefined1 local_c0 [128];
  
  local_c0[0] = 0;
  local_d0 = local_c0;
  local_c8 = 0;
  local_c4 = 0x80;
  puStack_d8 = local_d0;
  if (*(char *)param_2[1] != '\0') {
    (**(code **)(*param_2 + 0x18))(param_2);
    puVar5 = local_d0;
    puStack_d8 = (undefined1 *)param_2[1];
    if (local_d0 != puStack_d8) {
      lVar4 = 0;
      do {
        pcVar1 = puStack_d8 + lVar4;
        lVar4 = lVar4 + 1;
      } while (*pcVar1 != '\0');
      uVar3 = (int)lVar4 - 1;
      if (local_c4 <= (int)uVar3) {
        uVar3 = local_c4 - 1;
      }
      if ((int)uVar3 < 1) {
        uVar3 = 0;
        puVar5 = local_d0;
      }
      else {
        memcpy(local_d0,puStack_d8,(ulong)uVar3);
        puVar5 = puVar5 + uVar3;
      }
      *puVar5 = 0;
      puStack_d8 = local_d0;
      puVar5 = local_d0;
      local_c8 = uVar3;
    }
    local_d0 = puVar5;
    if (0 < (int)local_c8) {
      lVar4 = (ulong)(local_c8 - 1) + 1;
      do {
        if ((((puStack_d8[lVar4 + -1] == '.') && (puStack_d8[lVar4] == 's')) &&
            (puStack_d8[lVar4 + 1] == 'z')) && (puStack_d8[lVar4 + 2] == 's')) {
          if ((int)lVar4 != 0) {
            uVar3 = local_c8;
            if (2 < (int)local_c8) {
              uVar3 = 3;
            }
            uVar3 = local_c8 - uVar3;
            puStack_d8[(int)uVar3] = 0;
            uVar2 = 7;
            if (local_c4 <= (int)(uVar3 + 7)) {
              uVar2 = local_c4 + ~uVar3;
            }
            puStack_d8 = puVar5;
            local_c8 = uVar3;
            if (0 < (int)uVar2) {
              memcpy(puVar5 + (int)uVar3,"sarc.zs",(ulong)uVar2);
              local_c8 = uVar2 + uVar3;
              puVar5[(int)local_c8] = 0;
              puStack_d8 = local_d0;
            }
          }
          break;
        }
        lVar4 = lVar4 + -1;
      } while (0 < lVar4);
    }
  }
  local_e0 = PTR_DAT_04bb2020 + 0x10;
  FUN_0081a630(param_1,&local_e0,param_3,0);
  return;
}


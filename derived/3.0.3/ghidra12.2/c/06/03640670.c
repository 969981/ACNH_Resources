
bool FUN_03640670(long param_1,long *param_2,long param_3,ulong param_4)

{
  int iVar1;
  char cVar2;
  uint *puVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  uint local_68;
  undefined1 local_64 [4];
  uint local_48;
  uint local_44;
  
  uVar6 = *(ulong *)(param_1 + 0x60);
  if (uVar6 == param_4) {
    local_48 = 0;
    local_64[0] = 0;
    if ((int)param_2[1] == 0) {
      iVar1 = *(int *)(param_1 + 0x40);
      FUN_0363e9a4(param_1,param_3,param_4,*(undefined4 *)(param_1 + 0x68));
      memset(*(void **)(param_1 + 0x80),0,*(size_t *)(param_1 + 0x78));
      cVar2 = *(char *)((long)param_2 + 0xc);
      while( true ) {
        if (cVar2 != '\0') {
          local_44._1_3_ = (undefined3)(local_44 >> 8);
          local_44 = CONCAT31(local_44._1_3_,4);
          (**(code **)(*param_2 + 0x20))(param_2,&local_44,1);
        }
        if ((int)param_2[1] == 2) {
          (**(code **)(*param_2 + 0x20))(param_2,&local_48,4);
        }
        else if ((int)param_2[1] == 1) {
          uVar7 = (local_48 & 0xff00ff00) >> 8 | (local_48 & 0xff00ff) << 8;
          local_44 = uVar7 >> 0x10 | uVar7 << 0x10;
          if ((int)param_2[2] != 0xff00) {
            local_44 = local_48;
          }
          (**(code **)(*param_2 + 0x38))(param_2,&local_44);
        }
        else {
          local_44 = 0;
          (**(code **)(*param_2 + 0x20))(param_2,&local_44,4);
          uVar7 = (local_44 & 0xff00ff00) >> 8 | (local_44 & 0xff00ff) << 8;
          local_48 = uVar7 >> 0x10 | uVar7 << 0x10;
          if ((int)param_2[2] != 0xff00) {
            local_48 = local_44;
          }
        }
        if (local_48 == 0xffffffff) break;
        (**(code **)(*param_2 + 0x28))(param_2,local_64);
        *(undefined1 *)(*(long *)(param_1 + 0x58) + (ulong)local_48) = local_64[0];
        *(undefined1 *)(*(long *)(param_1 + 0x80) + (ulong)(local_48 >> 10)) = 1;
        cVar2 = *(char *)((long)param_2 + 0xc);
      }
      if (iVar1 != -1) {
        *(int *)(param_1 + 0x40) = iVar1;
        *(ulong *)(param_1 + 0x48) =
             *(long *)(param_1 + 0x58) + (ulong)(uint)(*(int *)(param_1 + 0x70) * iVar1);
      }
    }
    else {
      if (param_4 != 0) {
        uVar4 = 0;
        uVar7 = 0;
        do {
          if (*(char *)(*(long *)(param_1 + 0x80) + (uVar4 >> 10)) == '\x01') {
            if (*(char *)(*(long *)(param_1 + 0x58) + uVar4) != *(char *)(param_3 + uVar4)) {
              local_64[0] = *(undefined1 *)(*(long *)(param_1 + 0x58) + uVar4);
              local_48 = uVar7;
              if (*(char *)((long)param_2 + 0xc) != '\0') {
                local_44 = CONCAT31(local_44._1_3_,4);
                (**(code **)(*param_2 + 0x20))(param_2,&local_44,1);
              }
              if ((int)param_2[1] == 2) {
                (**(code **)(*param_2 + 0x20))(param_2,&local_48,4);
              }
              else if ((int)param_2[1] == 1) {
                uVar8 = (local_48 & 0xff00ff00) >> 8 | (local_48 & 0xff00ff) << 8;
                local_44 = uVar8 >> 0x10 | uVar8 << 0x10;
                if ((int)param_2[2] != 0xff00) {
                  local_44 = local_48;
                }
                (**(code **)(*param_2 + 0x38))(param_2,&local_44);
              }
              else {
                local_44 = 0;
                (**(code **)(*param_2 + 0x20))(param_2,&local_44,4);
                uVar8 = (local_44 & 0xff00ff00) >> 8 | (local_44 & 0xff00ff) << 8;
                local_48 = uVar8 >> 0x10 | uVar8 << 0x10;
                if ((int)param_2[2] != 0xff00) {
                  local_48 = local_44;
                }
              }
              (**(code **)(*param_2 + 0x28))(param_2,local_64);
            }
          }
          else {
            uVar8 = (int)param_4 - uVar7;
            if (0x3ff < uVar8) {
              uVar8 = 0x400;
            }
            uVar7 = (uVar7 + uVar8) - 1;
          }
          uVar7 = uVar7 + 1;
          uVar4 = (ulong)uVar7;
        } while (uVar4 < param_4);
      }
      local_68 = 0xffffffff;
      if (*(char *)((long)param_2 + 0xc) != '\0') {
        local_44 = CONCAT31(local_44._1_3_,4);
        (**(code **)(*param_2 + 0x20))(param_2,&local_44,1);
      }
      if ((int)param_2[1] == 2) {
        lVar5 = *param_2;
        puVar3 = &local_68;
      }
      else {
        if ((int)param_2[1] == 1) {
          local_44 = 0xffffffff;
          (**(code **)(*param_2 + 0x38))(param_2,&local_44);
          goto LAB_036409f0;
        }
        lVar5 = *param_2;
        local_44 = 0;
        puVar3 = &local_44;
      }
      (**(code **)(lVar5 + 0x20))(param_2,puVar3,4);
    }
  }
LAB_036409f0:
  return uVar6 == param_4;
}


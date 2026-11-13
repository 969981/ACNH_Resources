
ulong FUN_01178ea0(long param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  undefined8 *******pppppppuVar3;
  uint uVar4;
  ulong uVar5;
  undefined1 **ppuVar6;
  int iVar7;
  undefined1 *puVar8;
  undefined8 *******pppppppuVar9;
  uint uVar10;
  undefined8 *******local_170;
  undefined1 *local_168;
  int local_160;
  undefined8 *******local_158;
  undefined8 *******pppppppuStack_150;
  int local_148;
  undefined8 *******local_140 [3];
  undefined8 *******local_128 [3];
  undefined8 *******local_110 [3];
  undefined8 ******local_f8 [3];
  undefined8 *****local_e0 [3];
  undefined8 ****local_c8 [3];
  undefined8 ***local_b0 [3];
  undefined8 **local_98 [3];
  undefined8 *local_80 [3];
  undefined8 local_68 [3];
  uint local_50;
  uint uStack_4c;
  uint local_48;
  int iStack_44;
  
  if (*(int *)(param_1 + 0x58) < 1) {
    uVar10 = 0xffffffff;
  }
  else {
    iVar7 = 0;
    if (*(int *)(param_1 + 0x50) <= *(int *)(param_1 + 0x54)) {
      iVar7 = *(int *)(param_1 + 0x50);
    }
    uVar10 = *(uint *)(*(long *)(param_1 + 0x48) + (long)(*(int *)(param_1 + 0x54) - iVar7) * 4);
  }
  local_170 = (undefined8 *******)&PTR_LAB_049835a0;
  uVar5 = FUN_035a3f60(0x40000000,param_1,&local_170,param_2);
  if ((uint)uVar5 != uVar10) {
    return uVar5;
  }
  local_140[0] = local_128;
  local_128[0] = local_110;
  local_160 = 0;
  local_110[0] = local_f8;
  local_158 = local_140;
  local_f8[0] = local_e0;
  local_e0[0] = local_c8;
  local_c8[0] = local_b0;
  local_b0[0] = local_98;
  local_98[0] = local_80;
  local_80[0] = local_68;
  local_68[0] = 0;
  local_148 = 10;
  local_170 = &local_170;
  local_168 = (undefined1 *)&local_170;
  pppppppuStack_150 = local_158;
  if (0 < (int)param_2) {
    iVar7 = 0;
    uVar4 = 0;
    local_170 = &local_170;
    local_168 = (undefined1 *)&local_170;
    do {
      pppppppuVar3 = local_158;
      if ((uVar10 != uVar4) && (iVar7 < local_148)) {
        if (local_158 != (undefined8 *******)0x0) {
          local_158 = (undefined8 *******)*local_158;
        }
        *(uint *)pppppppuVar3 = uVar4;
        pppppppuVar9 = pppppppuVar3 + 1;
        *pppppppuVar9 = (undefined8 ******)0x0;
        pppppppuVar3[2] = &local_170;
        *pppppppuVar9 = local_170;
        if (local_170 != (undefined8 *******)0x0) {
          local_170[1] = pppppppuVar9;
        }
        iVar7 = local_160 + 1;
        local_170 = pppppppuVar9;
        local_160 = iVar7;
      }
      uVar4 = uVar4 + 1;
    } while (param_2 != uVar4);
  }
  uVar4 = nn::os::GetSystemTick();
  local_50 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 1;
  uStack_4c = (local_50 ^ local_50 >> 0x1e) * 0x6c078965 + 2;
  local_48 = (uStack_4c ^ uStack_4c >> 0x1e) * 0x6c078965 + 3;
  iStack_44 = (local_48 ^ local_48 >> 0x1e) * 0x6c078965 + 4;
  FUN_038aaa70(&local_170,&local_50);
  if (local_160 < 1) {
    local_168 = (undefined1 *)0x0;
  }
  if ((local_168 != (undefined1 *)0x0) && ((uint *)(local_168 + -8) != (uint *)0x0)) {
    uVar10 = *(uint *)(local_168 + -8);
  }
  iVar7 = *(int *)(param_1 + 0x58);
  if ((0 < iVar7) && (iVar7 == *(int *)(param_1 + 0x40))) {
    *(int *)(param_1 + 0x58) = iVar7 + -1;
    iVar7 = iVar7 + -1;
  }
  iVar2 = *(int *)(param_1 + 0x50);
  ppuVar6 = &local_168;
  if (iVar2 <= iVar7) {
    if (0 < iVar7) {
      *(int *)(param_1 + 0x58) = iVar7 + -1;
      iVar7 = iVar7 + -1;
    }
    if (iVar2 <= iVar7) goto LAB_011790e4;
  }
  iVar1 = iVar2;
  if (0 < *(int *)(param_1 + 0x54)) {
    iVar1 = *(int *)(param_1 + 0x54);
  }
  *(int *)(param_1 + 0x54) = iVar1 + -1;
  *(int *)(param_1 + 0x58) = iVar7 + 1;
  if (iVar1 <= iVar2) {
    iVar2 = 0;
  }
  *(uint *)(*(long *)(param_1 + 0x48) + (long)((iVar1 + -1) - iVar2) * 4) = uVar10;
LAB_011790e4:
  do {
    puVar8 = *ppuVar6;
    ppuVar6 = (undefined1 **)(puVar8 + 8);
  } while ((undefined8 ********)puVar8 != &local_170);
  return (ulong)uVar10;
}


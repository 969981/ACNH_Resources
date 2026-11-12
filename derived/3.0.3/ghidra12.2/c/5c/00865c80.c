
/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint FUN_00865c80(long param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  uint uVar5;
  long lVar6;
  long *plVar7;
  char *pcVar8;
  ulong uVar9;
  ulong uVar10;
  int iVar11;
  uint local_b0;
  uint local_ac [12];
  uint local_7c;
  uint uStack_78;
  uint local_74;
  uint uStack_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  
  uVar5 = nn::os::GetSystemTick();
  puVar4 = PTR_DAT_04bc3a80;
  local_7c = (uVar5 ^ uVar5 >> 0x1e) * 0x6c078965 + 1;
  uVar5 = 0;
  uStack_78 = (local_7c ^ local_7c >> 0x1e) * 0x6c078965 + 2;
  local_74 = (uStack_78 ^ uStack_78 >> 0x1e) * 0x6c078965 + 3;
  uStack_70 = (local_74 ^ local_74 >> 0x1e) * 0x6c078965 + 4;
  do {
    local_ac[(int)uVar5] = uVar5;
    uVar5 = uVar5 + 1;
  } while (uVar5 < 10);
  local_b0 = 10;
  iVar11 = 9;
  while( true ) {
    uVar5 = local_7c ^ local_7c << 0xb;
    local_7c = uStack_78;
    uStack_78 = local_74;
    uVar1 = uVar5 >> 8 ^ uStack_70 >> 0x13 ^ uVar5 ^ uStack_70;
    local_74 = uStack_70;
    uVar9 = (ulong)uVar1 * (ulong)local_b0;
    uVar10 = uVar9 >> 0x20;
    uVar5 = local_b0 - 1;
    if (9 < (uint)(uVar9 >> 0x20)) {
      uVar10 = 0;
    }
    if (9 < uVar5) {
      uVar5 = 0;
    }
    uVar3 = local_ac[uVar10];
    local_ac[uVar10] = local_ac[(int)uVar5];
    uVar5 = local_b0 - 1;
    if (9 < uVar5) {
      uVar5 = 0;
    }
    local_ac[(int)uVar5] = uVar3;
    local_b0 = local_b0 - 1;
    if (uVar3 == 0xffffffff) break;
    iVar2 = *(int *)(puVar4 + 0x38);
    uStack_70 = uVar1;
    local_6c = uVar3;
    lVar6 = FUN_0084d0f8(0xb6);
    if (iVar2 == -0x6efba09b) {
      local_64 = *(uint *)(param_1 + 0x178);
      local_68 = local_6c;
      switch(local_64) {
      case 0:
        plVar7 = (long *)(lVar6 + 0x820);
        break;
      case 1:
        plVar7 = (long *)(lVar6 + 0xed0);
        break;
      case 2:
        plVar7 = (long *)(lVar6 + 0x1600);
        break;
      case 3:
        plVar7 = (long *)(lVar6 + 0x1bf0);
        break;
      case 4:
        plVar7 = (long *)(lVar6 + 0x2220);
        break;
      case 5:
        plVar7 = (long *)(lVar6 + 0x2850);
        break;
      case 6:
        plVar7 = (long *)(lVar6 + 0x2f00);
        break;
      case 7:
        plVar7 = (long *)(lVar6 + 14000);
        break;
      case 8:
        plVar7 = (long *)(lVar6 + 0x3de0);
        break;
      default:
        goto switchD_00865e2c_default;
      }
      pcVar8 = (char *)(**(code **)(**(long **)(*plVar7 + (long)(int)local_6c * 8) + 0xf0))();
      if (*pcVar8 != '\0') goto LAB_00865ef0;
    }
    else {
      local_64 = local_64 & 0xffffff00;
      plVar7 = *(long **)(*(long *)(lVar6 + 0x4638) + (long)(int)local_6c * 8);
      uVar10 = (**(code **)(*plVar7 + 0x108))(plVar7,&local_64);
      if ((uVar10 & 1) != 0) goto switchD_00865e2c_default;
LAB_00865ef0:
      if (local_6c != *(uint *)(param_1 + 0x2a0)) {
        return local_6c;
      }
    }
switchD_00865e2c_default:
    if ((iVar11 == 0) || (iVar11 = iVar11 + -1, (int)local_b0 < 1)) break;
  }
  return *(uint *)(param_1 + 0x2a0);
}


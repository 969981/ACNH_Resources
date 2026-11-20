
undefined8 * FUN_03f20fd0(long *param_1,long param_2)

{
  int iVar1;
  byte bVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  int iVar6;
  long lVar7;
  undefined **ppuVar8;
  uint uVar9;
  bool bVar10;
  bool bVar11;
  undefined *local_40;
  long lStack_38;
  undefined4 local_14;
  
  lVar7 = 0;
  bVar11 = false;
  bVar10 = false;
  iVar6 = -1;
  while( true ) {
    while( true ) {
      for (; bVar2 = *(byte *)(param_2 + lVar7), bVar2 == 0x24; lVar7 = lVar7 + 1) {
        bVar10 = true;
      }
      if (bVar2 != 0x25) break;
      bVar11 = true;
      lVar7 = lVar7 + 1;
    }
    uVar9 = (uint)bVar2;
    if (uVar9 == 0) break;
    if ((9 < uVar9 - 0x30) && (1 < uVar9 - 0x2d)) {
      return (undefined8 *)0x0;
    }
    iVar1 = (int)lVar7;
    if (iVar6 != -1) {
      iVar1 = iVar6;
    }
    lVar7 = lVar7 + 1;
    iVar6 = iVar1;
  }
  if (iVar6 != -1) {
    lStack_38 = param_2 + iVar6;
    local_40 = PTR_DAT_04bb2020 + 0x10;
    if (bVar11 || bVar10) {
      local_14 = 0;
      uVar3 = FUN_038d30c0(&local_14,&local_40,0xffffffff);
      lVar7 = DAT_05ae7600;
      if ((uVar3 & 1) != 0) {
        if (bVar11) {
          if (DAT_05ae7600 == 0) {
            puVar5 = malloc(0x20);
          }
          else {
            if (param_1 == (long *)0x0) {
              lVar4 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
              param_1 = (long *)(lVar7 + 8);
              if (lVar4 != 0) {
                param_1 = (long *)(lVar4 + 0xa8);
              }
              param_1 = (long *)*param_1;
            }
            puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x30))(param_1,0x20,8);
          }
          ppuVar8 = &PTR_LAB_04ba81f0;
        }
        else {
          if (!bVar10) {
            return (undefined8 *)0x0;
          }
          if (DAT_05ae7600 == 0) {
            puVar5 = malloc(0x20);
          }
          else {
            if (param_1 == (long *)0x0) {
              lVar4 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
              param_1 = (long *)(lVar7 + 8);
              if (lVar4 != 0) {
                param_1 = (long *)(lVar4 + 0xa8);
              }
              param_1 = (long *)*param_1;
            }
            puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x30))(param_1,0x20,8);
          }
          ppuVar8 = &PTR_LAB_04ba8218;
        }
        *(undefined4 *)(puVar5 + 1) = 8;
        puVar5[2] = 0;
        puVar5[3] = 0;
        *puVar5 = ppuVar8;
        *(undefined4 *)(puVar5 + 2) = local_14;
        return puVar5;
      }
    }
    else {
      local_14 = 0;
      uVar3 = FUN_038d52a0(&local_14,&local_40);
      lVar7 = DAT_05ae7600;
      if ((uVar3 & 1) != 0) {
        if (DAT_05ae7600 == 0) {
          puVar5 = malloc(0x20);
        }
        else {
          if (param_1 == (long *)0x0) {
            lVar4 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
            param_1 = (long *)(lVar7 + 8);
            if (lVar4 != 0) {
              param_1 = (long *)(lVar4 + 0xa8);
            }
            param_1 = (long *)*param_1;
          }
          puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x30))(param_1,0x20,8);
        }
        puVar5[2] = 0;
        puVar5[3] = 0;
        *(undefined4 *)(puVar5 + 1) = 9;
        *(undefined4 *)(puVar5 + 2) = local_14;
        *puVar5 = &PTR_LAB_04ba81a0;
        return puVar5;
      }
    }
  }
  return (undefined8 *)0x0;
}


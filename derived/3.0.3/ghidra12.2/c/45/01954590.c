
void FUN_01954590(long param_1)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  byte *pbVar9;
  long lVar10;
  byte local_44 [3];
  byte bStack_41;
  byte local_40 [4];
  undefined2 local_3c;
  
  *(undefined1 *)(param_1 + 0x630) = 0xff;
  *(undefined2 *)(param_1 + 0x628) = 0;
  if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
    FUN_02507c6c(&local_3c,7,1,1,0);
    if ((byte)local_3c < 8) {
      local_40[0] = (byte)local_3c;
      uVar7 = FUN_01954938(param_1,local_40);
      while ((uVar7 & 1) == 0) {
        bVar5 = (byte)local_3c;
        uVar7 = (ulong)(byte)local_3c;
        if (6 < (byte)local_3c) break;
        pbVar9 = &DAT_0548e169 + uVar7;
        uVar8 = FUN_02507924(&local_3c,pbVar9);
        if ((uVar8 & 1) == 0) {
          if (uVar7 == 6) break;
          pbVar9 = &DAT_0548e16a + uVar7;
          uVar8 = FUN_02507924(&local_3c,pbVar9);
          if ((uVar8 & 1) == 0) {
            if (uVar7 == 5) break;
            pbVar9 = &DAT_0548e16b + uVar7;
            uVar8 = FUN_02507924(&local_3c,pbVar9);
            if ((uVar8 & 1) == 0) {
              if (uVar7 == 4) break;
              pbVar9 = &DAT_0548e16c + uVar7;
              uVar8 = FUN_02507924(&local_3c,pbVar9);
              if ((uVar8 & 1) == 0) {
                if (uVar7 == 3) break;
                pbVar9 = &DAT_0548e16d + uVar7;
                uVar8 = FUN_02507924(&local_3c,pbVar9);
                if ((uVar8 & 1) == 0) {
                  if (uVar7 == 2) break;
                  pbVar9 = &DAT_0548e16e + uVar7;
                  uVar8 = FUN_02507924(&local_3c,pbVar9);
                  if ((uVar8 & 1) == 0) {
                    if (uVar7 == 1) break;
                    pbVar9 = &DAT_0548e16f + uVar7;
                    uVar8 = FUN_02507924(&local_3c,pbVar9);
                    if ((uVar8 & 1) == 0) {
                      if (bVar5 == 0) break;
                      pbVar9 = &DAT_0548e170 + uVar7;
                      FUN_02507924(&local_3c,pbVar9);
                    }
                  }
                }
              }
            }
          }
        }
        bVar5 = *pbVar9;
        if (7 < bVar5) break;
        local_3c = CONCAT11(local_3c._1_1_,bVar5);
        local_40[0] = bVar5;
        uVar7 = FUN_01954938(param_1,local_40);
      }
    }
    goto LAB_01954870;
  }
  lVar10 = *DAT_0537d558;
  if (*(byte *)(lVar10 + 0x476) < 2) {
    if (2 < *(uint *)(DAT_0537d558 + 0x10)) goto LAB_01954870;
    pbVar9 = PTR_DAT_04bb32e0;
    if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
      pbVar9 = (byte *)(DAT_04cd19d8 + 0x158);
    }
    local_44[0] = *pbVar9;
    if ((local_44[0] < 8) ||
       (((*(int *)(DAT_04cd19d8 + 0x15c) != 0 && (DAT_054f5738 != 0)) &&
        (local_44[0] = *(byte *)(DAT_054f5738 + 0x11a5), local_44[0] < 8)))) {
LAB_01954854:
      if (7 < local_44[0]) {
        local_44[0] = 0xff;
      }
    }
    else {
      bVar5 = *(byte *)(lVar10 + 0x473);
      pbVar9 = PTR_DAT_04bb5038;
      if ((long)(char)bVar5 != 0xffffffffffffffff) {
        puVar2 = (uint *)(lVar10 + 0x48) + ((long)(char)bVar5 & 0xffffffffU) * 0x20;
        if (7 < bVar5) {
          puVar2 = (uint *)(lVar10 + 0x48);
        }
        if ((*puVar2 & 8) != 0) {
          pbVar9 = (byte *)(lVar10 + 0x471);
        }
      }
      local_44[0] = *pbVar9;
      if (7 < local_44[0]) {
        local_44[0] = *PTR_DAT_04bb5038;
        goto LAB_01954854;
      }
    }
    pbVar9 = local_44;
  }
  else {
    if (*(uint *)(DAT_0537d558 + 0x10) != 2) goto LAB_01954870;
    bVar5 = *(byte *)(lVar10 + 0x473);
    if ((long)(char)bVar5 != 0xffffffffffffffff) {
      pbVar9 = (byte *)(lVar10 + 0x48) + ((long)(char)bVar5 & 0xffffffffU) * 0x80;
      if (7 < bVar5) {
        pbVar9 = (byte *)(lVar10 + 0x48);
      }
      if (((*pbVar9 >> 3 & 1) != 0) && (*(byte *)(lVar10 + 0x472) != bVar5)) goto LAB_01954870;
    }
    FUN_0252d4c8(&bStack_41);
    pbVar9 = &bStack_41;
  }
  FUN_01954938(param_1,pbVar9);
LAB_01954870:
  if ((*(char *)(param_1 + 0x629) != '\0') &&
     ((*(char *)(param_1 + 0x604) != '\0' || (iVar6 = FUN_00a74b78(param_1 + 0x630), iVar6 == 9))))
  {
    *(undefined1 *)(param_1 + 0x604) = 0;
    *(undefined4 *)(param_1 + 0x610) = *(undefined4 *)(param_1 + 0x614);
  }
  iVar6 = (**(code **)(*(long *)(param_1 + 0x608) + (ulong)*(byte *)(param_1 + 0x61c) * 8))
                    (param_1 + 0x608);
  *(int *)(param_1 + 0x610) = iVar6;
  lVar10 = DAT_052c21a0;
  if (*(char *)(param_1 + 0x628) != '\0') {
    iVar3 = *(int *)(param_1 + 0x618);
    iVar4 = *(int *)(param_1 + 0x614);
    iVar1 = iVar4;
    if (iVar4 <= iVar3) {
      iVar1 = iVar3;
      iVar3 = iVar4;
    }
    bVar5 = 2;
    if (iVar1 <= iVar6 || iVar6 <= iVar3) {
      bVar5 = 0;
    }
    local_3c = CONCAT11((char)*(undefined4 *)(param_1 + 0x62c),bVar5 | *(byte *)(param_1 + 0x629));
    if (*(short *)(DAT_052c21a0 + 0x78) != local_3c) {
      *(short *)(DAT_052c21a0 + 0x78) = local_3c;
      *(undefined1 *)(lVar10 + 0x7a) = 1;
    }
  }
  return;
}


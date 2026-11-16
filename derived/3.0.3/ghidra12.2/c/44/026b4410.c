
void FUN_026b4410(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  uint local_78 [2];
  undefined1 local_70;
  byte local_6f [7];
  undefined4 local_68;
  undefined2 local_64;
  undefined1 local_62;
  
  lVar9 = *(long *)(param_2 + 8);
  if (lVar9 != param_2) {
    lVar1 = param_1 + 0x1094c;
    lVar8 = lVar9 + -8;
    lVar10 = param_3 + -0x20;
    lVar2 = param_1 + 0x10d6c;
    do {
      iVar11 = 0;
      do {
        uVar3 = FUN_0277d7b4(lVar1 + (long)iVar11 * 0x2c,lVar8);
        if ((uVar3 & 1) != 0) {
          lVar5 = *(long *)(param_3 + 8);
          lVar6 = lVar5 + -0x20;
          if (lVar6 != lVar10) {
            lVar7 = lVar1 + (long)iVar11 * 0x2c;
            do {
              if ((*(int *)(lVar7 + 8) == *(int *)(lVar5 + -0x20)) &&
                 ((*(long *)(lVar6 + 4) == *(long *)(lVar7 + 0xc) &&
                  *(long *)(lVar6 + 0xc) == *(long *)(lVar7 + 0x14)) &&
                  *(int *)(lVar6 + 0x14) == *(int *)(lVar7 + 0x1c))) {
                *(undefined1 *)(lVar1 + (long)iVar11 * 0x2c + 0x29) = 0;
                break;
              }
              lVar5 = *(long *)(lVar5 + 8);
              lVar6 = lVar5 + -0x20;
            } while (lVar6 != lVar10);
          }
        }
        iVar11 = iVar11 + 1;
      } while (iVar11 != 0x18);
      iVar11 = 0;
      do {
        uVar3 = FUN_0277d7b4(lVar2 + (long)iVar11 * 0x2c,lVar8);
        if ((uVar3 & 1) != 0) {
          lVar5 = *(long *)(param_3 + 8);
          lVar6 = lVar5 + -0x20;
          if (lVar6 != lVar10) {
            lVar7 = lVar2 + (long)iVar11 * 0x2c;
            do {
              if ((*(int *)(lVar7 + 8) == *(int *)(lVar5 + -0x20)) &&
                 ((*(long *)(lVar6 + 4) == *(long *)(lVar7 + 0xc) &&
                  *(long *)(lVar6 + 0xc) == *(long *)(lVar7 + 0x14)) &&
                  *(int *)(lVar6 + 0x14) == *(int *)(lVar7 + 0x1c))) {
                *(undefined1 *)(lVar2 + (long)iVar11 * 0x2c + 0x29) = 0;
                break;
              }
              lVar5 = *(long *)(lVar5 + 8);
              lVar6 = lVar5 + -0x20;
            } while (lVar6 != lVar10);
          }
        }
        iVar11 = iVar11 + 1;
      } while (iVar11 != 0x20);
      lVar9 = *(long *)(lVar9 + 8);
      lVar8 = lVar9 + -8;
    } while (lVar8 != param_2 + -8);
  }
  uVar4 = 0;
  local_78[0] = 0;
  local_78[1] = 0;
  iVar11 = 0;
  do {
    if (*(char *)(param_1 + (long)iVar11 * 0x2c + 0x10975) != '\0') {
      local_78[uVar4 >> 5] = local_78[uVar4 >> 5] | 1 << (ulong)(uVar4 & 0x1f);
    }
    uVar4 = uVar4 + 1;
    iVar11 = iVar11 + 1;
  } while (uVar4 != 0x18);
  iVar11 = 0;
  uVar4 = 0x18;
  do {
    if (*(char *)(param_1 + (long)iVar11 * 0x2c + 0x10d95) != '\0') {
      local_78[uVar4 >> 5] = local_78[uVar4 >> 5] | 1 << (ulong)(uVar4 & 0x1f);
    }
    uVar4 = uVar4 + 1;
    iVar11 = iVar11 + 1;
  } while (uVar4 != 0x38);
  local_70 = FUN_021d7d60(param_1);
  uVar4 = 0;
  local_6f[4] = 0;
  local_6f[5] = 0;
  local_6f[6] = 0;
  local_6f[0] = 0;
  local_6f[1] = 0;
  local_6f[2] = 0;
  local_6f[3] = 0;
  do {
    if ((local_78[uVar4 >> 5] >> (ulong)(uVar4 & 0x1f) & 1) != 0) {
      local_6f[uVar4 >> 3] = local_6f[uVar4 >> 3] | (byte)(1 << (ulong)(uVar4 & 7));
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 != 0x38);
  local_68 = 0;
  local_62 = 0;
  local_64 = 0xff00;
  if (-1 < DAT_053d0c50) {
    FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_053d0c50,&local_68,&local_70,8,0);
  }
  return;
}



void FUN_02f7a724(long param_1)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  byte bVar5;
  byte bVar6;
  long lVar7;
  uint uVar8;
  
  lVar7 = *(long *)PTR_DAT_04bb39b0;
  pbVar4 = &DAT_0548e140;
  if (lVar7 == 0) {
LAB_02f7a78c:
    if (7 < *pbVar4) {
LAB_02f7a798:
      if (DAT_0537d558 != (long *)0x0) {
        lVar7 = *DAT_0537d558;
        bVar5 = *(byte *)(lVar7 + 0x473);
        pbVar4 = PTR_DAT_04bb5038;
        if ((long)(char)bVar5 != 0xffffffffffffffff) {
          puVar1 = (uint *)(lVar7 + 0x48) + ((long)(char)bVar5 & 0xffffffffU) * 0x20;
          if (7 < bVar5) {
            puVar1 = (uint *)(lVar7 + 0x48);
          }
          if ((*puVar1 & 8) != 0) {
            pbVar4 = (byte *)(lVar7 + 0x471);
          }
        }
        bVar5 = *pbVar4;
        if (bVar5 < 8) goto LAB_02f7a808;
      }
      pbVar4 = &DAT_0548e168;
    }
  }
  else {
    pbVar4 = &DAT_0548e140;
    if (*(int *)(lVar7 + 0x15c) != 0) {
      pbVar4 = (byte *)(lVar7 + 0x158);
    }
    if (7 < *pbVar4) {
      if ((*(int *)(lVar7 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
        pbVar4 = (byte *)(DAT_054f5738 + 0x11a5);
        goto LAB_02f7a78c;
      }
      goto LAB_02f7a798;
    }
  }
  bVar5 = *pbVar4;
  if (7 < bVar5) {
    bVar5 = 0xff;
  }
LAB_02f7a808:
  lVar7 = *(long *)(*(long *)(param_1 + 0x210) + 0x580);
  if (lVar7 == 0) {
    uVar8 = 1;
  }
  else {
    uVar8 = *(uint *)(lVar7 + 0x2f8);
    if ((int)uVar8 < 1) {
      return;
    }
  }
  uVar3 = *(uint *)(param_1 + 0x1160);
  if (uVar3 != 0) {
    bVar2 = *(byte *)(param_1 + 0x2e0);
    bVar6 = bVar2;
    if (7 < bVar2) {
      bVar6 = 0xff;
    }
    if (7 < bVar5) {
      bVar5 = 0xff;
    }
    if (((bVar6 != bVar5) && (bVar2 < 8)) && (*(long *)(param_1 + 0x2e8) == 0)) {
      FUN_02f7aa88(param_1,0);
      uVar3 = *(uint *)(param_1 + 0x1160);
    }
    if ((1 < uVar8) && (1 < uVar3)) {
      bVar2 = *(byte *)(param_1 + 0x4b0);
      bVar6 = bVar2;
      if (7 < bVar2) {
        bVar6 = 0xff;
      }
      if (((bVar6 != bVar5) && (bVar2 < 8)) && (*(long *)(param_1 + 0x4b8) == 0)) {
        FUN_02f7aa88(param_1,1);
        uVar3 = *(uint *)(param_1 + 0x1160);
      }
      if ((2 < uVar8) && (2 < uVar3)) {
        bVar2 = *(byte *)(param_1 + 0x680);
        bVar6 = bVar2;
        if (7 < bVar2) {
          bVar6 = 0xff;
        }
        if (((bVar6 != bVar5) && (bVar2 < 8)) && (*(long *)(param_1 + 0x688) == 0)) {
          FUN_02f7aa88(param_1,2);
          uVar3 = *(uint *)(param_1 + 0x1160);
        }
        if ((3 < uVar8) && (3 < uVar3)) {
          bVar2 = *(byte *)(param_1 + 0x850);
          bVar6 = bVar2;
          if (7 < bVar2) {
            bVar6 = 0xff;
          }
          if (((bVar6 != bVar5) && (bVar2 < 8)) && (*(long *)(param_1 + 0x858) == 0)) {
            FUN_02f7aa88(param_1,3);
            uVar3 = *(uint *)(param_1 + 0x1160);
          }
          if ((4 < uVar8) && (4 < uVar3)) {
            bVar2 = *(byte *)(param_1 + 0xa20);
            bVar6 = bVar2;
            if (7 < bVar2) {
              bVar6 = 0xff;
            }
            if (((bVar6 != bVar5) && (bVar2 < 8)) && (*(long *)(param_1 + 0xa28) == 0)) {
              FUN_02f7aa88(param_1,4);
              uVar3 = *(uint *)(param_1 + 0x1160);
            }
            if ((5 < uVar8) && (5 < uVar3)) {
              bVar2 = *(byte *)(param_1 + 0xbf0);
              bVar6 = bVar2;
              if (7 < bVar2) {
                bVar6 = 0xff;
              }
              if (((bVar6 != bVar5) && (bVar2 < 8)) && (*(long *)(param_1 + 0xbf8) == 0)) {
                FUN_02f7aa88(param_1,5);
                uVar3 = *(uint *)(param_1 + 0x1160);
              }
              if ((6 < uVar8) && (6 < uVar3)) {
                bVar2 = *(byte *)(param_1 + 0xdc0);
                bVar6 = bVar2;
                if (7 < bVar2) {
                  bVar6 = 0xff;
                }
                if (((bVar6 != bVar5) && (bVar2 < 8)) && (*(long *)(param_1 + 0xdc8) == 0)) {
                  FUN_02f7aa88(param_1,6);
                  uVar3 = *(uint *)(param_1 + 0x1160);
                }
                if ((7 < uVar8) && (7 < uVar3)) {
                  bVar2 = *(byte *)(param_1 + 0xf90);
                  bVar6 = bVar2;
                  if (7 < bVar2) {
                    bVar6 = 0xff;
                  }
                  if (((bVar6 != bVar5) && (bVar2 < 8)) && (*(long *)(param_1 + 0xf98) == 0)) {
                    FUN_02f7aa88(param_1,7);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return;
}


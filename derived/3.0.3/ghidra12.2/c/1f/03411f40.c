
long FUN_03411f40(long param_1,int *param_2)

{
  int iVar1;
  undefined *puVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  long lVar6;
  
  iVar1 = *(int *)PTR_DAT_04bb4b48;
  if (*param_2 == iVar1) {
    return 0xffffffff;
  }
  piVar5 = (int *)(param_1 + 0x28);
  piVar4 = (int *)(param_1 + 8);
  if (((*(ushort *)(param_1 + 0xc) & 1) == 0) && (*piVar5 == iVar1)) {
    lVar6 = 0;
    piVar3 = piVar4;
  }
  else {
    piVar5 = (int *)(param_1 + 0x58);
    if (((*(ushort *)(param_1 + 0x3c) & 1) == 0) && (*piVar5 == iVar1)) {
      piVar3 = (int *)(param_1 + 0x38);
      lVar6 = 1;
    }
    else {
      piVar5 = (int *)(param_1 + 0x88);
      if (((*(ushort *)(param_1 + 0x6c) & 1) == 0) && (*piVar5 == iVar1)) {
        lVar6 = 2;
      }
      else {
        piVar5 = (int *)(param_1 + 0xb8);
        if (((*(ushort *)(param_1 + 0x9c) & 1) == 0) && (*piVar5 == iVar1)) {
          lVar6 = 3;
        }
        else {
          piVar5 = (int *)(param_1 + 0xe8);
          if (((*(ushort *)(param_1 + 0xcc) & 1) != 0) || (*piVar5 != iVar1)) {
            if (((*(ushort *)(param_1 + 0xfc) & 1) == 0) && (*(int *)(param_1 + 0x118) == iVar1)) {
              lVar6 = 5;
              piVar3 = (int *)(param_1 + 0xf8);
              piVar5 = (int *)(param_1 + 0x118);
            }
            else if (((*(ushort *)(param_1 + 300) & 1) == 0) && (*(int *)(param_1 + 0x148) == iVar1)
                    ) {
              lVar6 = 6;
              piVar3 = (int *)(param_1 + 0x128);
              piVar5 = (int *)(param_1 + 0x148);
            }
            else if (((*(ushort *)(param_1 + 0x15c) & 1) == 0) &&
                    (*(int *)(param_1 + 0x178) == iVar1)) {
              lVar6 = 7;
              piVar3 = (int *)(param_1 + 0x158);
              piVar5 = (int *)(param_1 + 0x178);
            }
            else if (((*(ushort *)(param_1 + 0x18c) & 1) == 0) &&
                    (*(int *)(param_1 + 0x1a8) == iVar1)) {
              lVar6 = 8;
              piVar3 = (int *)(param_1 + 0x188);
              piVar5 = (int *)(param_1 + 0x1a8);
            }
            else if (((*(ushort *)(param_1 + 0x1bc) & 1) == 0) &&
                    (*(int *)(param_1 + 0x1d8) == iVar1)) {
              lVar6 = 9;
              piVar3 = (int *)(param_1 + 0x1b8);
              piVar5 = (int *)(param_1 + 0x1d8);
            }
            else if (((*(ushort *)(param_1 + 0x1ec) & 1) == 0) &&
                    (*(int *)(param_1 + 0x208) == iVar1)) {
              lVar6 = 10;
              piVar3 = (int *)(param_1 + 0x1e8);
              piVar5 = (int *)(param_1 + 0x208);
            }
            else if (((*(ushort *)(param_1 + 0x21c) & 1) == 0) &&
                    (*(int *)(param_1 + 0x238) == iVar1)) {
              lVar6 = 0xb;
              piVar3 = (int *)(param_1 + 0x218);
              piVar5 = (int *)(param_1 + 0x238);
            }
            else if (((*(ushort *)(param_1 + 0x24c) & 1) == 0) &&
                    (*(int *)(param_1 + 0x268) == iVar1)) {
              lVar6 = 0xc;
              piVar3 = (int *)(param_1 + 0x248);
              piVar5 = (int *)(param_1 + 0x268);
            }
            else if (((*(ushort *)(param_1 + 0x27c) & 1) == 0) &&
                    (*(int *)(param_1 + 0x298) == iVar1)) {
              lVar6 = 0xd;
              piVar3 = (int *)(param_1 + 0x278);
              piVar5 = (int *)(param_1 + 0x298);
            }
            else if (((*(ushort *)(param_1 + 0x2ac) & 1) == 0) &&
                    (*(int *)(param_1 + 0x2c8) == iVar1)) {
              lVar6 = 0xe;
              piVar3 = (int *)(param_1 + 0x2a8);
              piVar5 = (int *)(param_1 + 0x2c8);
            }
            else {
              if ((*(ushort *)(param_1 + 0x2dc) & 1) != 0) {
                return 0xffffffff;
              }
              if (*(int *)(param_1 + 0x2f8) != iVar1) {
                return 0xffffffff;
              }
              lVar6 = 0xf;
              piVar3 = (int *)(param_1 + 0x2d8);
              piVar5 = (int *)(param_1 + 0x2f8);
            }
            goto LAB_03412028;
          }
          lVar6 = 4;
        }
      }
      piVar3 = piVar5 + -8;
    }
  }
LAB_03412028:
  *piVar5 = *param_2;
  *(undefined1 *)(piVar4 + lVar6 * 0xc + 9) = 1;
  puVar2 = PTR_DAT_04bb2200;
  piVar4[lVar6 * 0xc + 10] = 1;
  FUN_01585ce8(*(undefined8 *)(*(long *)puVar2 + 0x148),piVar3,param_2,0,0);
  return lVar6;
}


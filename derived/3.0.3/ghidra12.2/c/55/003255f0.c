
void FUN_003255f0(long param_1,long param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  
  if ((param_2 != 0) && (*(uint *)(param_2 + 0x10) != 0xffffffff)) {
    piVar4 = (int *)(param_2 + (ulong)*(uint *)(param_2 + 0x10));
    do {
      iVar2 = *piVar4;
      if (iVar2 < 0x4c504145) {
        if (iVar2 < 0x33305045) {
          if (iVar2 < 0x31414145) {
            if (iVar2 == 0x30414145) {
              *(ulong *)(param_1 + 0x2d0) = (long)piVar4 + (ulong)(uint)piVar4[5];
            }
            else {
              if (iVar2 != 0x30434145) {
                if (iVar2 == 0x31305045) {
                  uVar3 = piVar4[5];
                  *(undefined4 *)(param_1 + 0x340) = 1;
                  *(ulong *)(param_1 + 0x348) = (long)piVar4 + (ulong)uVar3;
                }
                goto LAB_00325704;
              }
              *(ulong *)(param_1 + 0x2b0) = (long)piVar4 + (ulong)(uint)piVar4[5];
            }
          }
          else {
            if (0x314e5245 < iVar2) {
              if (iVar2 == 0x314e5246) {
                uVar3 = piVar4[5];
                *(undefined1 *)(param_1 + 3) = 1;
                *(ulong *)(param_1 + 0x250) = (long)piVar4 + (ulong)uVar3;
              }
              else if (iVar2 == 0x32305045) {
                *(ulong *)(param_1 + 0x348) = (long)piVar4 + (ulong)(uint)piVar4[5];
                *(undefined4 *)(param_1 + 0x340) = 2;
              }
              goto LAB_00325704;
            }
            if (iVar2 == 0x31414145) {
              *(ulong *)(param_1 + 0x2d8) = (long)piVar4 + (ulong)(uint)piVar4[5];
            }
            else {
              if (iVar2 != 0x31434145) goto LAB_00325704;
              *(ulong *)(param_1 + 0x2b8) = (long)piVar4 + (ulong)(uint)piVar4[5];
            }
          }
LAB_00325700:
          *(undefined1 *)(param_1 + 1) = 1;
        }
        else if (iVar2 < 0x44574746) {
          if (iVar2 < 0x44415046) {
            if (iVar2 == 0x33305045) {
              *(ulong *)(param_1 + 0x348) = (long)piVar4 + (ulong)(uint)piVar4[5];
              *(undefined4 *)(param_1 + 0x340) = 3;
            }
            else if (iVar2 == 0x34305045) {
              *(ulong *)(param_1 + 0x348) = (long)piVar4 + (ulong)(uint)piVar4[5];
              *(undefined4 *)(param_1 + 0x340) = 4;
            }
          }
          else if (iVar2 == 0x44415046) {
            uVar3 = piVar4[5];
            *(undefined1 *)(param_1 + 3) = 1;
            *(ulong *)(param_1 + 0x278) = (long)piVar4 + (ulong)uVar3;
          }
          else if (iVar2 == 0x444e5246) {
            uVar3 = piVar4[5];
            *(undefined1 *)(param_1 + 3) = 1;
            *(ulong *)(param_1 + 0x248) = (long)piVar4 + (ulong)uVar3;
          }
        }
        else if (iVar2 < 0x47414d46) {
          if (iVar2 == 0x44574746) {
            uVar3 = piVar4[5];
            *(undefined1 *)(param_1 + 3) = 1;
            *(ulong *)(param_1 + 0x288) = (long)piVar4 + (ulong)uVar3;
          }
          else if (iVar2 == 0x46534346) {
            uVar3 = piVar4[5];
            *(undefined1 *)(param_1 + 3) = 1;
            *(ulong *)(param_1 + 0x290) = (long)piVar4 + (ulong)uVar3;
          }
        }
        else if (iVar2 == 0x47414d46) {
          uVar3 = piVar4[5];
          *(undefined1 *)(param_1 + 3) = 1;
          *(ulong *)(param_1 + 600) = (long)piVar4 + (ulong)uVar3;
        }
        else if (iVar2 == 0x4c4f4346) {
          uVar3 = piVar4[5];
          *(undefined1 *)(param_1 + 3) = 1;
          *(ulong *)(param_1 + 0x268) = (long)piVar4 + (ulong)uVar3;
        }
      }
      else if (iVar2 < 0x52544145) {
        if (iVar2 < 0x50444143) {
          if (iVar2 < 0x4e4c4346) {
            if (iVar2 == 0x4c504145) {
              *(ulong *)(param_1 + 0x2c8) = (long)piVar4 + (ulong)(uint)piVar4[5];
            }
            else {
              if (iVar2 != 0x4c534145) goto LAB_00325704;
              *(ulong *)(param_1 + 0x2f0) = (long)piVar4 + (ulong)(uint)piVar4[5];
            }
            goto LAB_00325700;
          }
          if (iVar2 == 0x4e4c4346) {
            uVar3 = piVar4[5];
            *(undefined1 *)(param_1 + 3) = 1;
            *(ulong *)(param_1 + 0x280) = (long)piVar4 + (ulong)uVar3;
          }
          else if (iVar2 == 0x4e505346) {
            uVar3 = piVar4[5];
            *(undefined1 *)(param_1 + 3) = 1;
            *(ulong *)(param_1 + 0x260) = (long)piVar4 + (ulong)uVar3;
          }
        }
        else if (iVar2 < 0x50445543) {
          if (iVar2 == 0x50444143) {
            *(ulong *)(param_1 + 0x318) = (long)piVar4 + (ulong)(uint)piVar4[5];
          }
          else if (iVar2 == 0x50445343) {
            *(ulong *)(param_1 + 0x308) = (long)piVar4 + (ulong)(uint)piVar4[5];
            *(ulong *)(param_1 + 0x310) = (ulong)(uint)piVar4[1] - 0x20;
          }
        }
        else if (iVar2 == 0x50445543) {
          *(ulong *)(param_1 + 800) = (long)piVar4 + (ulong)(uint)piVar4[5];
        }
        else if (iVar2 == 0x52454145) {
          uVar3 = piVar4[5];
          *(undefined2 *)(param_1 + 1) = 0x101;
          *(ulong *)(param_1 + 0x2a0) = (long)piVar4 + (ulong)uVar3;
        }
      }
      else {
        if (0x56444144 < iVar2) {
          if (iVar2 < 0x564f4145) {
            if (iVar2 == 0x56444145) {
              *(ulong *)(param_1 + 0x2e8) = (long)piVar4 + (ulong)(uint)piVar4[5];
            }
            else {
              if (iVar2 != 0x56474145) goto LAB_00325704;
              *(ulong *)(param_1 + 0x300) = (long)piVar4 + (ulong)(uint)piVar4[5];
            }
          }
          else {
            if (iVar2 != 0x564f4145) {
              if (iVar2 == 0x564f4346) {
                uVar3 = piVar4[5];
                *(undefined1 *)(param_1 + 3) = 1;
                *(ulong *)(param_1 + 0x270) = (long)piVar4 + (ulong)uVar3;
              }
              goto LAB_00325704;
            }
            *(ulong *)(param_1 + 0x2e0) = (long)piVar4 + (ulong)(uint)piVar4[5];
          }
          goto LAB_00325700;
        }
        if (iVar2 < 0x53534145) {
          if (iVar2 == 0x52544145) {
            *(ulong *)(param_1 + 0x2c0) = (long)piVar4 + (ulong)(uint)piVar4[5];
            goto LAB_00325700;
          }
          if (iVar2 == 0x53454145) {
            uVar3 = piVar4[5];
            *(undefined2 *)(param_1 + 1) = 0x101;
            *(ulong *)(param_1 + 0x298) = (long)piVar4 + (ulong)uVar3;
          }
        }
        else {
          if (iVar2 == 0x53534145) {
            *(ulong *)(param_1 + 0x2f8) = (long)piVar4 + (ulong)(uint)piVar4[5];
            goto LAB_00325700;
          }
          if (iVar2 == 0x54454145) {
            uVar3 = piVar4[5];
            *(undefined2 *)(param_1 + 1) = 0x101;
            *(ulong *)(param_1 + 0x2a8) = (long)piVar4 + (ulong)uVar3;
          }
        }
      }
LAB_00325704:
      puVar1 = (uint *)(piVar4 + 3);
      piVar4 = (int *)((long)piVar4 + (ulong)*puVar1);
    } while (*puVar1 != 0xffffffff);
  }
  return;
}


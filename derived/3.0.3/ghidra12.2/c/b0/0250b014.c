
ulong FUN_0250b014(long param_1,int param_2,uint param_3)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  
  uVar4 = FUN_0250a6b0(param_1,param_2,param_3,1);
  uVar7 = (ulong)uVar4;
  if (7 < uVar4) {
    return uVar7;
  }
  if (param_2 == 0) {
    if (((*(char *)(param_1 + 0xb35c) == '\0') || (*(int *)(param_1 + 0xb358) != 0)) ||
       ((uint)*(byte *)(param_1 + 0xb35d) != (param_3 & 0xff))) {
      if (((*(char *)(param_1 + 0xc74c) == '\0') || (*(int *)(param_1 + 0xc748) != 0)) ||
         ((uint)*(byte *)(param_1 + 0xc74d) != (param_3 & 0xff))) {
        if (((*(char *)(param_1 + 0xdb3c) == '\0') || (*(int *)(param_1 + 0xdb38) != 0)) ||
           ((uint)*(byte *)(param_1 + 0xdb3d) != (param_3 & 0xff))) {
          if (((*(char *)(param_1 + 0xef2c) == '\0') || (*(int *)(param_1 + 0xef28) != 0)) ||
             ((uint)*(byte *)(param_1 + 0xef2d) != (param_3 & 0xff))) {
            if (((*(char *)(param_1 + 0x1031c) == '\0') || (*(int *)(param_1 + 0x10318) != 0)) ||
               ((uint)*(byte *)(param_1 + 0x1031d) != (param_3 & 0xff))) {
              if (((*(char *)(param_1 + 0x1170c) == '\0') || (*(int *)(param_1 + 0x11708) != 0)) ||
                 ((uint)*(byte *)(param_1 + 0x1170d) != (param_3 & 0xff))) {
                if (((*(char *)(param_1 + 0x12afc) != '\0') && (*(int *)(param_1 + 0x12af8) == 0))
                   && ((uint)*(byte *)(param_1 + 0x12afd) == (param_3 & 0xff))) goto LAB_0250b288;
                if (*(char *)(param_1 + 0x13eec) == '\0') {
                  return uVar7;
                }
                if (*(int *)(param_1 + 0x13ee8) != 0) {
                  return uVar7;
                }
                goto LAB_0250b2a0;
              }
              goto LAB_0250b264;
            }
            goto LAB_0250b240;
          }
          goto LAB_0250b21c;
        }
        goto LAB_0250b1f8;
      }
      goto LAB_0250b1d4;
    }
  }
  else if (((*(char *)(param_1 + 0xb35c) == '\0') || (*(int *)(param_1 + 0xb358) != 1)) ||
          ((uint)*(byte *)(param_1 + 0xb35d) != (param_3 & 0xff))) {
    if (((*(char *)(param_1 + 0xc74c) == '\0') || (*(int *)(param_1 + 0xc748) != 1)) ||
       ((uint)*(byte *)(param_1 + 0xc74d) != (param_3 & 0xff))) {
      if (((*(char *)(param_1 + 0xdb3c) == '\0') || (*(int *)(param_1 + 0xdb38) != 1)) ||
         ((uint)*(byte *)(param_1 + 0xdb3d) != (param_3 & 0xff))) {
        if (((*(char *)(param_1 + 0xef2c) == '\0') || (*(int *)(param_1 + 0xef28) != 1)) ||
           ((uint)*(byte *)(param_1 + 0xef2d) != (param_3 & 0xff))) {
          if (((*(char *)(param_1 + 0x1031c) == '\0') || (*(int *)(param_1 + 0x10318) != 1)) ||
             ((uint)*(byte *)(param_1 + 0x1031d) != (param_3 & 0xff))) {
            if (((*(char *)(param_1 + 0x1170c) == '\0') || (*(int *)(param_1 + 0x11708) != 1)) ||
               ((uint)*(byte *)(param_1 + 0x1170d) != (param_3 & 0xff))) {
              if (((*(char *)(param_1 + 0x12afc) != '\0') && (*(int *)(param_1 + 0x12af8) == 1)) &&
                 ((uint)*(byte *)(param_1 + 0x12afd) == (param_3 & 0xff))) {
LAB_0250b288:
                lVar6 = 6;
                goto LAB_0250b2b0;
              }
              if (*(char *)(param_1 + 0x13eec) == '\0') {
                return uVar7;
              }
              if (*(int *)(param_1 + 0x13ee8) != 1) {
                return uVar7;
              }
LAB_0250b2a0:
              if ((uint)*(byte *)(param_1 + 0x13eed) != (param_3 & 0xff)) {
                return uVar7;
              }
              lVar6 = 7;
              goto LAB_0250b2b0;
            }
LAB_0250b264:
            lVar6 = 5;
            goto LAB_0250b2b0;
          }
LAB_0250b240:
          lVar6 = 4;
          goto LAB_0250b2b0;
        }
LAB_0250b21c:
        lVar6 = 3;
        goto LAB_0250b2b0;
      }
LAB_0250b1f8:
      lVar6 = 2;
      goto LAB_0250b2b0;
    }
LAB_0250b1d4:
    lVar6 = 1;
    goto LAB_0250b2b0;
  }
  lVar6 = 0;
LAB_0250b2b0:
  if (*(char *)(param_1 + uVar7 * 0x13f0 + 0x13d4) != '\0') {
    lVar6 = param_1 + 0x9f88 + lVar6 * 0x13f0;
    param_1 = param_1 + uVar7 * 0x13f0;
    uVar2 = *(undefined1 *)(lVar6 + 0xc);
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(lVar6 + 8);
    *(undefined1 *)(param_1 + 0xc) = uVar2;
    uVar1 = *(undefined4 *)(lVar6 + 0x14);
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(lVar6 + 0x10);
    *(undefined4 *)(param_1 + 0x14) = uVar1;
    FUN_0250b4c0(param_1 + 0x18,lVar6 + 0x18);
    uVar1 = *(undefined4 *)(lVar6 + 0x4e0);
    *(undefined8 *)(param_1 + 0x4c8) = *(undefined8 *)(lVar6 + 0x4c8);
    *(undefined8 *)(param_1 + 0x4d0) = *(undefined8 *)(lVar6 + 0x4d0);
    uVar3 = *(undefined2 *)(lVar6 + 0x4d8);
    *(undefined4 *)(param_1 + 0x4e0) = uVar1;
    uVar1 = *(undefined4 *)(lVar6 + 0x4f0);
    *(undefined2 *)(param_1 + 0x4d8) = uVar3;
    *(undefined4 *)(param_1 + 0x4dc) = *(undefined4 *)(lVar6 + 0x4dc);
    *(undefined4 *)(param_1 + 0x4e4) = *(undefined4 *)(lVar6 + 0x4e4);
    uVar5 = *(undefined8 *)(lVar6 + 0x4e8);
    *(undefined4 *)(param_1 + 0x4f0) = uVar1;
    *(undefined8 *)(param_1 + 0x4e8) = uVar5;
    FUN_0250b690(param_1 + 0x4f8,lVar6 + 0x4f8);
    *(undefined4 *)(param_1 + 0x13e4) = *(undefined4 *)(lVar6 + 0x13d8);
    *(undefined4 *)(param_1 + 0x13e8) = *(undefined4 *)(lVar6 + 0x13e0);
  }
  return uVar7;
}


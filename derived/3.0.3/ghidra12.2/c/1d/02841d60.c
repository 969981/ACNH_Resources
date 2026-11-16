
uint FUN_02841d60(long param_1,void *param_2,uint param_3,uint param_4)

{
  int iVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  
  if (param_2 == (void *)0x0) {
    return 0xffffffff;
  }
  if (0x23000 < param_3) {
    return 0xffffffff;
  }
  if (param_4 == 0xffffffff) {
    if (0xfffdcfff < *(int *)(param_1 + 0x120) - 0x23001U) {
      uVar2 = 0;
      uVar3 = 0;
      do {
        iVar1 = *(int *)(param_1 + 0x114 + uVar2);
        uVar2 = uVar2 + 4;
        uVar3 = (iVar1 * 0x16a88000 | (uint)(iVar1 * -0x3361d2af) >> 0x11) * 0x1b873593 ^ uVar3;
        uVar3 = (uVar3 >> 0x13 | uVar3 << 0xd) * 5 + 0xe6546b64;
      } while (uVar2 < 0x23019);
      uVar3 = (uVar3 ^ 0x2301c ^ (uVar3 ^ 0x2301c) >> 0x10) * -0x7a143595;
      uVar3 = (uVar3 ^ uVar3 >> 0xd) * -0x3d4d51cb;
      if (*(uint *)(param_1 + 0x110) == (uVar3 ^ uVar3 >> 0x10)) {
        if (0xfffdcfff < *(int *)(param_1 + 0x23140) - 0x23001U) {
          uVar2 = 0;
          uVar3 = 0;
          do {
            iVar1 = *(int *)(param_1 + 0x23134 + uVar2);
            uVar2 = uVar2 + 4;
            uVar3 = (iVar1 * 0x16a88000 | (uint)(iVar1 * -0x3361d2af) >> 0x11) * 0x1b873593 ^ uVar3;
            uVar3 = (uVar3 >> 0x13 | uVar3 << 0xd) * 5 + 0xe6546b64;
          } while (uVar2 < 0x23019);
          uVar3 = (uVar3 ^ 0x2301c ^ (uVar3 ^ 0x2301c) >> 0x10) * -0x7a143595;
          uVar3 = (uVar3 ^ uVar3 >> 0xd) * -0x3d4d51cb;
          if (*(uint *)(param_1 + 0x23130) == (uVar3 ^ uVar3 >> 0x10)) {
            if (0xfffdcfff < *(int *)(param_1 + 0x46160) - 0x23001U) {
              uVar2 = 0;
              uVar3 = 0;
              do {
                iVar1 = *(int *)(param_1 + 0x46154 + uVar2);
                uVar2 = uVar2 + 4;
                uVar3 = (iVar1 * 0x16a88000 | (uint)(iVar1 * -0x3361d2af) >> 0x11) * 0x1b873593 ^
                        uVar3;
                uVar3 = (uVar3 >> 0x13 | uVar3 << 0xd) * 5 + 0xe6546b64;
              } while (uVar2 < 0x23019);
              uVar3 = (uVar3 ^ 0x2301c ^ (uVar3 ^ 0x2301c) >> 0x10) * -0x7a143595;
              uVar3 = (uVar3 ^ uVar3 >> 0xd) * -0x3d4d51cb;
              if (*(uint *)(param_1 + 0x46150) == (uVar3 ^ uVar3 >> 0x10)) {
                return 0xffffffff;
              }
            }
            param_4 = 2;
            goto LAB_02841f94;
          }
        }
        param_4 = 1;
        goto LAB_02841f94;
      }
    }
    param_4 = 0;
  }
  else if (2 < param_4) {
    return 0xffffffff;
  }
LAB_02841f94:
  lVar4 = param_1 + (ulong)param_4 * 0x23020;
  memset((void *)(lVar4 + 0x120),0,0x23004);
  memcpy((void *)(lVar4 + 0x124),param_2,(ulong)param_3);
  uVar2 = 0;
  uVar3 = 0;
  *(uint *)(lVar4 + 0x120) = param_3;
  do {
    iVar1 = *(int *)(lVar4 + 0x114 + uVar2);
    uVar2 = uVar2 + 4;
    uVar3 = (iVar1 * 0x16a88000 | (uint)(iVar1 * -0x3361d2af) >> 0x11) * 0x1b873593 ^ uVar3;
    uVar3 = (uVar3 >> 0x13 | uVar3 << 0xd) * 5 + 0xe6546b64;
  } while (uVar2 < 0x23019);
  uVar3 = (uVar3 ^ 0x2301c ^ (uVar3 ^ 0x2301c) >> 0x10) * -0x7a143595;
  uVar3 = (uVar3 ^ uVar3 >> 0xd) * -0x3d4d51cb;
  *(uint *)(lVar4 + 0x110) = uVar3 ^ uVar3 >> 0x10;
  if (param_4 == *(byte *)(param_1 + 0x69170)) {
    FUN_02841980(param_1,param_4);
  }
  return param_4;
}


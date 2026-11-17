
void FUN_030c48d8(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x208) == 0) {
    return;
  }
  if (*(char *)(param_1 + 0x218) == '\0') {
    return;
  }
  if (((*(long *)(param_1 + 0x228) != 0) && (*(long *)(*(long *)(param_1 + 0x228) + 8) != 0)) &&
     (*(char *)(param_1 + 0x254) != '\0')) {
    if (*(uint *)(param_1 + 0x250) < 0x10e) {
      lVar1 = *(long *)(param_1 + 0x208) + (ulong)*(uint *)(param_1 + 0x250) * 0x1a8;
      if (*(int *)(lVar1 + 0x1a8) != 2) goto LAB_030c4950;
      FUN_03463a4c(lVar1 + 8,lVar1 + 0x150,param_1 + 0x230);
    }
    else {
      *(undefined4 *)(param_1 + 0x250) = 0xffffffff;
    }
    *(undefined1 *)(param_1 + 0x254) = 0;
  }
LAB_030c4950:
  if (((*(long *)(param_1 + 0x278) != 0) && (*(long *)(*(long *)(param_1 + 0x278) + 8) != 0)) &&
     (*(char *)(param_1 + 0x2a4) != '\0')) {
    if (*(uint *)(param_1 + 0x2a0) < 0x10e) {
      lVar1 = *(long *)(param_1 + 0x208) + (ulong)*(uint *)(param_1 + 0x2a0) * 0x1a8;
      if (*(int *)(lVar1 + 0x1a8) != 2) goto LAB_030c49ac;
      FUN_03463a4c(lVar1 + 8,lVar1 + 0x150,param_1 + 0x280);
    }
    else {
      *(undefined4 *)(param_1 + 0x2a0) = 0xffffffff;
    }
    *(undefined1 *)(param_1 + 0x2a4) = 0;
  }
LAB_030c49ac:
  if (((*(long *)(param_1 + 0x2c8) != 0) && (*(long *)(*(long *)(param_1 + 0x2c8) + 8) != 0)) &&
     (*(char *)(param_1 + 0x2f4) != '\0')) {
    if (*(uint *)(param_1 + 0x2f0) < 0x10e) {
      lVar1 = *(long *)(param_1 + 0x208) + (ulong)*(uint *)(param_1 + 0x2f0) * 0x1a8;
      if (*(int *)(lVar1 + 0x1a8) != 2) goto LAB_030c4a08;
      FUN_03463a4c(lVar1 + 8,lVar1 + 0x150,param_1 + 0x2d0);
    }
    else {
      *(undefined4 *)(param_1 + 0x2f0) = 0xffffffff;
    }
    *(undefined1 *)(param_1 + 0x2f4) = 0;
  }
LAB_030c4a08:
  if (((*(long *)(param_1 + 0x318) != 0) && (*(long *)(*(long *)(param_1 + 0x318) + 8) != 0)) &&
     (*(char *)(param_1 + 0x344) != '\0')) {
    if (*(uint *)(param_1 + 0x340) < 0x10e) {
      lVar1 = *(long *)(param_1 + 0x208) + (ulong)*(uint *)(param_1 + 0x340) * 0x1a8;
      if (*(int *)(lVar1 + 0x1a8) != 2) goto LAB_030c4a64;
      FUN_03463a4c(lVar1 + 8,lVar1 + 0x150,param_1 + 800);
    }
    else {
      *(undefined4 *)(param_1 + 0x340) = 0xffffffff;
    }
    *(undefined1 *)(param_1 + 0x344) = 0;
  }
LAB_030c4a64:
  if (((*(long *)(param_1 + 0x368) != 0) && (*(long *)(*(long *)(param_1 + 0x368) + 8) != 0)) &&
     (*(char *)(param_1 + 0x394) != '\0')) {
    if (*(uint *)(param_1 + 0x390) < 0x10e) {
      lVar1 = *(long *)(param_1 + 0x208) + (ulong)*(uint *)(param_1 + 0x390) * 0x1a8;
      if (*(int *)(lVar1 + 0x1a8) != 2) goto LAB_030c4ac0;
      FUN_03463a4c(lVar1 + 8,lVar1 + 0x150,param_1 + 0x370);
    }
    else {
      *(undefined4 *)(param_1 + 0x390) = 0xffffffff;
    }
    *(undefined1 *)(param_1 + 0x394) = 0;
  }
LAB_030c4ac0:
  if (((*(long *)(param_1 + 0x3b8) != 0) && (*(long *)(*(long *)(param_1 + 0x3b8) + 8) != 0)) &&
     (*(char *)(param_1 + 0x3e4) != '\0')) {
    if (*(uint *)(param_1 + 0x3e0) < 0x10e) {
      lVar1 = *(long *)(param_1 + 0x208) + (ulong)*(uint *)(param_1 + 0x3e0) * 0x1a8;
      if (*(int *)(lVar1 + 0x1a8) != 2) goto LAB_030c4b1c;
      FUN_03463a4c(lVar1 + 8,lVar1 + 0x150,param_1 + 0x3c0);
    }
    else {
      *(undefined4 *)(param_1 + 0x3e0) = 0xffffffff;
    }
    *(undefined1 *)(param_1 + 0x3e4) = 0;
  }
LAB_030c4b1c:
  if (((*(long *)(param_1 + 0x408) != 0) && (*(long *)(*(long *)(param_1 + 0x408) + 8) != 0)) &&
     (*(char *)(param_1 + 0x434) != '\0')) {
    if (*(uint *)(param_1 + 0x430) < 0x10e) {
      lVar1 = *(long *)(param_1 + 0x208) + (ulong)*(uint *)(param_1 + 0x430) * 0x1a8;
      if (*(int *)(lVar1 + 0x1a8) != 2) goto LAB_030c4b78;
      FUN_03463a4c(lVar1 + 8,lVar1 + 0x150,param_1 + 0x410);
    }
    else {
      *(undefined4 *)(param_1 + 0x430) = 0xffffffff;
    }
    *(undefined1 *)(param_1 + 0x434) = 0;
  }
LAB_030c4b78:
  if ((((((*(long *)(param_1 + 0x228) == 0) || (*(long *)(*(long *)(param_1 + 0x228) + 8) == 0)) ||
        (*(char *)(param_1 + 0x254) == '\0')) &&
       ((((*(long *)(param_1 + 0x278) == 0 || (*(long *)(*(long *)(param_1 + 0x278) + 8) == 0)) ||
         (*(char *)(param_1 + 0x2a4) == '\0')) &&
        ((((*(long *)(param_1 + 0x2c8) == 0 || (*(long *)(*(long *)(param_1 + 0x2c8) + 8) == 0)) ||
          (*(char *)(param_1 + 0x2f4) == '\0')) &&
         (((*(long *)(param_1 + 0x318) == 0 || (*(long *)(*(long *)(param_1 + 0x318) + 8) == 0)) ||
          (*(char *)(param_1 + 0x344) == '\0')))))))) &&
      (((*(long *)(param_1 + 0x368) == 0 || (*(long *)(*(long *)(param_1 + 0x368) + 8) == 0)) ||
       (*(char *)(param_1 + 0x394) == '\0')))) &&
     ((((*(long *)(param_1 + 0x3b8) == 0 || (*(long *)(*(long *)(param_1 + 0x3b8) + 8) == 0)) ||
       (*(char *)(param_1 + 0x3e4) == '\0')) &&
      (((*(long *)(param_1 + 0x408) == 0 || (*(long *)(*(long *)(param_1 + 0x408) + 8) == 0)) ||
       (*(char *)(param_1 + 0x434) == '\0')))))) {
    *(undefined1 *)(param_1 + 0x218) = 0;
  }
  return;
}


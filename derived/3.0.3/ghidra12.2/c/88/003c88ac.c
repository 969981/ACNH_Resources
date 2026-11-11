
void FUN_003c88ac(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 uVar5;
  undefined4 local_74;
  undefined4 auStack_70 [2];
  undefined8 local_68;
  undefined4 local_60 [2];
  undefined8 local_58;
  undefined4 local_50 [2];
  undefined8 local_48;
  undefined4 local_40 [2];
  undefined8 local_38;
  
  FUN_003d0404(*(undefined8 *)(param_1 + 0x108),*(undefined8 *)(param_1 + 0x48));
  if ((*(long *)(param_1 + 0x68) == 0) && (iVar1 = *(int *)(param_1 + 0x60), iVar1 != -1)) {
    uVar2 = FUN_003d0c2c(*(long *)(param_1 + 0x108) + 0x18,iVar1,*(undefined8 *)(param_1 + 0x100),1,
                         0);
    if ((uVar2 & 1) == 0) {
      *(undefined1 *)(*(long *)(param_1 + 0x100) + 0x28) = 2;
      *(undefined1 *)(param_1 + 0x110) = 0;
      return;
    }
    uVar3 = FUN_003d21f4(*(long *)(param_1 + 0x108) + 0x18,iVar1);
    *(undefined8 *)(param_1 + 0x68) = uVar3;
  }
  lVar4 = *(long *)(param_1 + 0x78);
  local_68 = 0;
  local_74 = 0;
  auStack_70[0] = 0xffffffff;
  local_60[0] = 0xffffffff;
  local_58 = 0;
  local_50[0] = 0xffffffff;
  local_48 = 0;
  local_40[0] = 0xffffffff;
  local_38 = 0;
  if (lVar4 == 0) {
    iVar1 = *(int *)(param_1 + 0x70);
    if (iVar1 == -1) goto LAB_003c89f8;
    uVar2 = FUN_003d0c2c(*(long *)(param_1 + 0x108) + 0x18,iVar1,*(undefined8 *)(param_1 + 0x100),4,
                         0);
    if ((uVar2 & 1) != 0) {
      lVar4 = FUN_003d21f4(*(long *)(param_1 + 0x108) + 0x18,iVar1);
      *(long *)(param_1 + 0x78) = lVar4;
      iVar1 = *(int *)(param_1 + 0x70);
      goto joined_r0x003c89f4;
    }
LAB_003c8cac:
    uVar5 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x70);
joined_r0x003c89f4:
    if (((iVar1 != -1) && (lVar4 != 0)) &&
       ((iVar1 = FUN_003b7fb0(auStack_70,&local_74,lVar4,*(undefined8 *)(param_1 + 0x48),
                              *(long *)(param_1 + 0x50) + 0x18), iVar1 == 2 || (iVar1 == -1)))) {
      uVar2 = FUN_003d2320(*(long *)(param_1 + 0x108) + 0x18,*(undefined8 *)(param_1 + 0x78),
                           *(undefined8 *)(param_1 + 0x100));
      if ((uVar2 & 1) == 0) goto LAB_003c8cac;
      FUN_003b7fb0(auStack_70,&local_74,*(undefined8 *)(param_1 + 0x78),
                   *(undefined8 *)(param_1 + 0x48),*(long *)(param_1 + 0x108) + 0x18);
    }
LAB_003c89f8:
    lVar4 = *(long *)(param_1 + 0x88);
    if (lVar4 == 0) {
      iVar1 = *(int *)(param_1 + 0x80);
      if (iVar1 != -1) {
        uVar2 = FUN_003d0c2c(*(long *)(param_1 + 0x108) + 0x18,iVar1,
                             *(undefined8 *)(param_1 + 0x100),4,0);
        if ((uVar2 & 1) == 0) goto LAB_003c8cac;
        lVar4 = FUN_003d21f4(*(long *)(param_1 + 0x108) + 0x18,iVar1);
        *(long *)(param_1 + 0x88) = lVar4;
        iVar1 = *(int *)(param_1 + 0x80);
        goto joined_r0x003c8ac0;
      }
    }
    else {
      iVar1 = *(int *)(param_1 + 0x80);
joined_r0x003c8ac0:
      if ((iVar1 != -1) && (lVar4 != 0)) {
        iVar1 = FUN_003b7fb0(local_60,(ulong)&local_74 | 1,lVar4,*(undefined8 *)(param_1 + 0x48),
                             *(long *)(param_1 + 0x50) + 0x18);
        if ((iVar1 == 2) || (iVar1 == -1)) {
          uVar2 = FUN_003d2320(*(long *)(param_1 + 0x108) + 0x18,*(undefined8 *)(param_1 + 0x88),
                               *(undefined8 *)(param_1 + 0x100));
          if ((uVar2 & 1) == 0) goto LAB_003c8cac;
          FUN_003b7fb0(local_60,(ulong)&local_74 | 1,*(undefined8 *)(param_1 + 0x88),
                       *(undefined8 *)(param_1 + 0x48),*(long *)(param_1 + 0x108) + 0x18);
        }
      }
    }
    lVar4 = *(long *)(param_1 + 0x98);
    if (lVar4 == 0) {
      iVar1 = *(int *)(param_1 + 0x90);
      if (iVar1 != -1) {
        uVar2 = FUN_003d0c2c(*(long *)(param_1 + 0x108) + 0x18,iVar1,
                             *(undefined8 *)(param_1 + 0x100),4,0);
        if ((uVar2 & 1) == 0) goto LAB_003c8cac;
        lVar4 = FUN_003d21f4(*(long *)(param_1 + 0x108) + 0x18,iVar1);
        *(long *)(param_1 + 0x98) = lVar4;
        iVar1 = *(int *)(param_1 + 0x90);
        goto joined_r0x003c8b88;
      }
    }
    else {
      iVar1 = *(int *)(param_1 + 0x90);
joined_r0x003c8b88:
      if ((iVar1 != -1) && (lVar4 != 0)) {
        iVar1 = FUN_003b7fb0(local_50,(ulong)&local_74 | 2,lVar4,*(undefined8 *)(param_1 + 0x48),
                             *(long *)(param_1 + 0x50) + 0x18);
        if ((iVar1 == 2) || (iVar1 == -1)) {
          uVar2 = FUN_003d2320(*(long *)(param_1 + 0x108) + 0x18,*(undefined8 *)(param_1 + 0x98),
                               *(undefined8 *)(param_1 + 0x100));
          if ((uVar2 & 1) == 0) goto LAB_003c8cac;
          FUN_003b7fb0(local_50,(ulong)&local_74 | 2,*(undefined8 *)(param_1 + 0x98),
                       *(undefined8 *)(param_1 + 0x48),*(long *)(param_1 + 0x108) + 0x18);
        }
      }
    }
    lVar4 = *(long *)(param_1 + 0xa8);
    if (lVar4 == 0) {
      iVar1 = *(int *)(param_1 + 0xa0);
      if (iVar1 != -1) {
        uVar2 = FUN_003d0c2c(*(long *)(param_1 + 0x108) + 0x18,iVar1,
                             *(undefined8 *)(param_1 + 0x100),4,0);
        if ((uVar2 & 1) == 0) goto LAB_003c8cac;
        lVar4 = FUN_003d21f4(*(long *)(param_1 + 0x108) + 0x18,iVar1);
        *(long *)(param_1 + 0xa8) = lVar4;
        iVar1 = *(int *)(param_1 + 0xa0);
        goto joined_r0x003c8c50;
      }
    }
    else {
      iVar1 = *(int *)(param_1 + 0xa0);
joined_r0x003c8c50:
      if ((iVar1 != -1) && (lVar4 != 0)) {
        iVar1 = FUN_003b7fb0(local_40,(ulong)&local_74 | 3,lVar4,*(undefined8 *)(param_1 + 0x48),
                             *(long *)(param_1 + 0x50) + 0x18);
        if ((iVar1 == 2) || (iVar1 == -1)) {
          uVar2 = FUN_003d2320(*(long *)(param_1 + 0x108) + 0x18,*(undefined8 *)(param_1 + 0xa8),
                               *(undefined8 *)(param_1 + 0x100));
          if ((uVar2 & 1) == 0) goto LAB_003c8cac;
          FUN_003b7fb0(local_40,(ulong)&local_74 | 3,*(undefined8 *)(param_1 + 0xa8),
                       *(undefined8 *)(param_1 + 0x48),*(long *)(param_1 + 0x108) + 0x18);
        }
      }
    }
    *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_1 + 0x68);
    *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_1 + 0x78);
    *(undefined2 *)(param_1 + 0xf8) = (undefined2)local_74;
    *(undefined8 *)(param_1 + 0xf0) = local_38;
    *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(param_1 + 0x88);
    *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_1 + 0x98);
    *(undefined8 *)(param_1 + 0xe0) = local_58;
    *(undefined8 *)(param_1 + 0xe8) = local_48;
    *(undefined1 *)(param_1 + 0xfa) = local_74._2_1_;
    *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_1 + 0xa8);
    *(undefined8 *)(param_1 + 0xd8) = local_68;
    *(undefined1 *)(param_1 + 0xfb) = local_74._3_1_;
    uVar5 = 1;
  }
  *(undefined1 *)(*(long *)(param_1 + 0x100) + 0x28) = 2;
  *(undefined1 *)(param_1 + 0x110) = uVar5;
  return;
}


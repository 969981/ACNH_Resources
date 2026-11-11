
void FUN_003c7c28(long param_1,undefined4 param_2)

{
  long *plVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined4 local_38;
  
  if (*(char *)(param_1 + 0x2c8) == '\x02') {
LAB_003c7dac:
    lVar4 = *(long *)(param_1 + 0x2f0);
    if (*(long *)(lVar4 + 0x100) == 0) {
      lVar5 = FUN_003ce690(*(undefined8 *)(lVar4 + 0x58));
      *(long *)(lVar4 + 0x100) = lVar5;
      if (lVar5 == 0) {
        return;
      }
    }
    if (1 < *(int *)(lVar4 + 0x40) - 3U) {
      if (*(int *)(lVar4 + 0x40) == 0) {
        uVar3 = FUN_003c98bc();
        FUN_003c9a08(uVar3,lVar4,1);
        return;
      }
      return;
    }
    lVar4 = *(long *)(param_1 + 0x2f0);
    if (*(char *)(lVar4 + 0x110) == '\0') {
      *(undefined1 *)(param_1 + 0x3b) = 1;
      FUN_003c62e8(param_1);
      return;
    }
    local_40 = *(undefined8 *)(param_1 + 0x2d8);
    local_38 = *(undefined4 *)(param_1 + 0x2e0);
    local_90 = *(undefined8 *)(lVar4 + 0xb0);
    uStack_88 = *(undefined8 *)(lVar4 + 0xb8);
    local_80 = *(undefined8 *)(lVar4 + 0xc0);
    uStack_78 = *(undefined8 *)(lVar4 + 200);
    local_58 = *(undefined8 *)(lVar4 + 0xe8);
    uStack_50 = *(undefined8 *)(lVar4 + 0xf0);
    local_68 = *(undefined8 *)(lVar4 + 0xd8);
    uStack_60 = *(undefined8 *)(lVar4 + 0xe0);
    local_70 = *(undefined8 *)(lVar4 + 0xd0);
    local_48 = *(undefined4 *)(lVar4 + 0xf8);
    uStack_44 = *(undefined4 *)(param_1 + 0x2cc);
    FUN_003c7f54(param_1,&local_90);
    if (*(char *)(param_1 + 0x38) != '\0') {
      if (*(int *)(param_1 + 0x2d0) == 1) {
        *(float *)(param_1 + 0x104) = *(float *)(param_1 + 0x104) + (float)*(int *)(param_1 + 0x2d4)
        ;
        iVar2 = *(int *)(param_1 + 0x108);
        goto joined_r0x003c7ecc;
      }
      if (*(int *)(param_1 + 0x2d0) == 0) {
        *(int *)(param_1 + 0x100) = *(int *)(param_1 + 0x100) + *(int *)(param_1 + 0x2d4);
      }
    }
  }
  else if (*(char *)(param_1 + 0x2c8) == '\x01') {
    lVar4 = *(long *)(param_1 + 0x2e8);
    if (lVar4 == 0) {
      return;
    }
    plVar8 = *(long **)(lVar4 + 0x30);
    if (plVar8 == (long *)(lVar4 + 0x28)) {
      return;
    }
    plVar1 = (long *)plVar8[1];
    lVar4 = *plVar1;
    *(long **)(*plVar8 + 8) = plVar1;
    *plVar1 = *plVar8;
    *(long **)(lVar4 + 8) = plVar8;
    *plVar8 = lVar4;
    *(long **)(param_1 + 0x2f0) = plVar8 + -0x94;
    *(undefined1 *)(param_1 + 0x2c8) = 2;
    nn::os::WaitEvent((EventType *)(plVar8 + -0x91));
    nn::os::WaitEvent((EventType *)(plVar8 + -0x6e));
    *(undefined4 *)(plVar8 + -0x8c) = 0;
    *(undefined1 *)(plVar8 + -0x72) = 0;
    plVar8[-0x7e] = 0;
    plVar8[-0x7d] = 0;
    plVar8[-0x76] = 0;
    *(undefined4 *)(plVar8 + -0x75) = 0;
    plVar8[-0x7c] = 0;
    plVar8[-0x7b] = 0;
    plVar8[-0x7a] = 0;
    plVar8[-0x79] = 0;
    plVar8[-0x78] = 0;
    plVar8[-0x77] = 0;
    plVar8[-0x8b] = *(long *)(param_1 + 0x2f8);
    lVar4 = *(long *)(param_1 + 0x300);
    lVar5 = *(long *)(param_1 + 0x308);
    lVar6 = *(long *)(param_1 + 0x318);
    plVar8[-0x88] = *(long *)(param_1 + 0x310);
    plVar8[-0x87] = lVar6;
    plVar8[-0x8a] = lVar4;
    plVar8[-0x89] = lVar5;
    lVar4 = *(long *)(param_1 + 800);
    lVar5 = *(long *)(param_1 + 0x328);
    lVar6 = *(long *)(param_1 + 0x338);
    plVar8[-0x84] = *(long *)(param_1 + 0x330);
    plVar8[-0x83] = lVar6;
    plVar8[-0x86] = lVar4;
    plVar8[-0x85] = lVar5;
    lVar4 = *(long *)(param_1 + 0x340);
    lVar5 = *(long *)(param_1 + 0x348);
    lVar6 = *(long *)(param_1 + 0x350);
    lVar7 = *(long *)(param_1 + 0x358);
    plVar8[-0x74] = 0;
    plVar8[-0x73] = (long)(plVar8 + -0x59);
    *(undefined4 *)(plVar8 + -0x69) = 0;
    plVar8[-0x80] = lVar6;
    plVar8[-0x7f] = lVar7;
    plVar8[-0x82] = lVar4;
    plVar8[-0x81] = lVar5;
    plVar8[-0x68] = *(long *)(param_1 + 0x2f8);
    lVar4 = *(long *)(param_1 + 0x300);
    lVar5 = *(long *)(param_1 + 0x308);
    lVar6 = *(long *)(param_1 + 0x318);
    plVar8[-0x65] = *(long *)(param_1 + 0x310);
    plVar8[-100] = lVar6;
    plVar8[-0x67] = lVar4;
    plVar8[-0x66] = lVar5;
    lVar4 = *(long *)(param_1 + 800);
    lVar5 = *(long *)(param_1 + 0x328);
    lVar6 = *(long *)(param_1 + 0x338);
    plVar8[-0x61] = *(long *)(param_1 + 0x330);
    plVar8[-0x60] = lVar6;
    plVar8[-99] = lVar4;
    plVar8[-0x62] = lVar5;
    lVar4 = *(long *)(param_1 + 0x340);
    lVar5 = *(long *)(param_1 + 0x348);
    lVar6 = *(long *)(param_1 + 0x350);
    lVar7 = *(long *)(param_1 + 0x358);
    plVar8[-0x5b] = 0;
    plVar8[-0x5f] = lVar4;
    plVar8[-0x5e] = lVar5;
    plVar8[-0x5d] = lVar6;
    plVar8[-0x5c] = lVar7;
    plVar8[-0x5a] = (long)(plVar8 + -0x59);
    goto LAB_003c7dac;
  }
  iVar2 = *(int *)(param_1 + 0x108);
joined_r0x003c7ecc:
  if (iVar2 < 1) {
    if ((*(char *)(param_1 + 0x38) != '\0') && (*(char *)(param_1 + 0x39) != '\0')) {
      if ((*(int *)(param_1 + 0x100) != 0) || (0.0 < *(float *)(param_1 + 0x104))) {
        FUN_003c80b0(param_1);
      }
      else if (*(char *)(param_1 + 0x3a) == '\0') {
        FUN_003c8410(param_1,param_2);
      }
      if (*(long *)(param_1 + 0x140) != 0) {
        FUN_003bdfb0();
      }
      if (*(long *)(param_1 + 0x148) != 0) {
        FUN_003bdfb0();
      }
      if (*(long *)(param_1 + 0x150) != 0) {
        FUN_003bdfb0();
      }
      if (*(long *)(param_1 + 0x158) != 0) {
        FUN_003bdfb0();
      }
      if (*(long *)(param_1 + 0x160) != 0) {
        FUN_003bdfb0();
      }
      if (*(long *)(param_1 + 0x168) != 0) {
        FUN_003bdfb0();
      }
      if (*(long *)(param_1 + 0x170) != 0) {
        FUN_003bdfb0();
      }
      if (*(long *)(param_1 + 0x178) != 0) {
        FUN_003bdfb0();
      }
      if (*(long *)(param_1 + 0x180) != 0) {
        FUN_003bdfb0();
      }
      if (*(long *)(param_1 + 0x188) != 0) {
        FUN_003bdfb0();
      }
      if (*(long *)(param_1 + 400) != 0) {
        FUN_003bdfb0();
      }
      if (*(long *)(param_1 + 0x198) != 0) {
        FUN_003bdfb0();
      }
      if (*(long *)(param_1 + 0x1a0) != 0) {
        FUN_003bdfb0();
      }
      if (*(long *)(param_1 + 0x1a8) != 0) {
        FUN_003bdfb0();
      }
      if (*(long *)(param_1 + 0x1b0) != 0) {
        FUN_003bdfb0();
      }
      if (*(long *)(param_1 + 0x1b8) == 0) {
        return;
      }
      FUN_003bdfb0();
      return;
    }
  }
  else {
    *(int *)(param_1 + 0x108) = iVar2 + -1;
  }
  return;
}


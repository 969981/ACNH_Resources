
void FUN_00818e80(undefined8 *param_1)

{
  byte bVar1;
  undefined *puVar2;
  long lVar3;
  
  *param_1 = &PTR_FUN_04917670;
  FUN_038e1a84(param_1 + 0x5b6c);
  puVar2 = PTR_DAT_04bb49b8;
  lVar3 = 0x2d000;
  do {
    bVar1 = *(byte *)((long)param_1 + lVar3 + 0xb10);
    *(undefined ***)((long)param_1 + lVar3 + 0x9e8) = &PTR_LAB_04917750;
    if ((bVar1 >> 1 & 1) != 0) {
      *(byte *)((long)param_1 + lVar3 + 0xb10) = bVar1 & 0xf8 | 4;
      if (*(long *)((long)param_1 + lVar3 + 0xb30) == 0) {
        if (*(long *)((long)param_1 + lVar3 + 0xb18) != 0) goto LAB_00818f24;
      }
      else {
        FUN_03f45838((long)param_1 + lVar3 + 0xb20);
        if (*(long *)((long)param_1 + lVar3 + 0xb18) == 0) {
          *(undefined4 *)((long)param_1 + lVar3 + 0xb14) = 0xe;
        }
        else {
LAB_00818f24:
          if (*(long *)puVar2 != 0) {
            FUN_03f350f4(*(long *)puVar2,(long)param_1 + lVar3 + 0xb08);
          }
        }
      }
    }
    FUN_03f457c4((long)param_1 + lVar3 + 0xb20);
    lVar3 = lVar3 + -0x168;
  } while (lVar3 != 0);
  FUN_038e1a84(param_1 + 0x162);
  FUN_038e1a84(param_1 + 0x157);
  FUN_038e1a84(param_1 + 0x14c);
  FUN_0082c640(param_1 + 0x13c);
  if ((*(byte *)(param_1 + 0x135) >> 1 & 1) != 0) {
    *(byte *)(param_1 + 0x135) = *(byte *)(param_1 + 0x135) & 0xf8 | 4;
    if (param_1[0x139] == 0) {
      if (param_1[0x136] != 0) goto LAB_00818f98;
    }
    else {
      FUN_03f45838(param_1 + 0x137);
      if (param_1[0x136] == 0) {
        *(undefined4 *)((long)param_1 + 0x9ac) = 0xe;
      }
      else {
LAB_00818f98:
        if (*(long *)puVar2 != 0) {
          FUN_03f350f4(*(long *)puVar2,param_1 + 0x134);
        }
      }
    }
  }
  FUN_03f457c4(param_1 + 0x137);
  if ((*(byte *)(param_1 + 299) >> 1 & 1) != 0) {
    *(byte *)(param_1 + 299) = *(byte *)(param_1 + 299) & 0xf8 | 4;
    if (param_1[0x12f] == 0) {
      if (param_1[300] != 0) goto LAB_00818ff0;
    }
    else {
      FUN_03f45838(param_1 + 0x12d);
      if (param_1[300] == 0) {
        *(undefined4 *)((long)param_1 + 0x95c) = 0xe;
      }
      else {
LAB_00818ff0:
        if (*(long *)puVar2 != 0) {
          FUN_03f350f4(*(long *)puVar2,param_1 + 0x12a);
        }
      }
    }
  }
  FUN_03f457c4(param_1 + 0x12d);
  if ((*(byte *)(param_1 + 0x121) >> 1 & 1) != 0) {
    *(byte *)(param_1 + 0x121) = *(byte *)(param_1 + 0x121) & 0xf8 | 4;
    if (param_1[0x125] == 0) {
      if (param_1[0x122] != 0) goto LAB_00819048;
    }
    else {
      FUN_03f45838(param_1 + 0x123);
      if (param_1[0x122] == 0) {
        *(undefined4 *)((long)param_1 + 0x90c) = 0xe;
      }
      else {
LAB_00819048:
        if (*(long *)puVar2 != 0) {
          FUN_03f350f4(*(long *)puVar2,param_1 + 0x120);
        }
      }
    }
  }
  FUN_03f457c4(param_1 + 0x123);
  if ((*(byte *)(param_1 + 0x117) >> 1 & 1) != 0) {
    *(byte *)(param_1 + 0x117) = *(byte *)(param_1 + 0x117) & 0xf8 | 4;
    if (param_1[0x11b] == 0) {
      if (param_1[0x118] != 0) goto LAB_008190a0;
    }
    else {
      FUN_03f45838(param_1 + 0x119);
      if (param_1[0x118] == 0) {
        *(undefined4 *)((long)param_1 + 0x8bc) = 0xe;
      }
      else {
LAB_008190a0:
        if (*(long *)puVar2 != 0) {
          FUN_03f350f4(*(long *)puVar2,param_1 + 0x116);
        }
      }
    }
  }
  FUN_03f457c4(param_1 + 0x119);
  if ((*(byte *)(param_1 + 0x10d) >> 1 & 1) != 0) {
    *(byte *)(param_1 + 0x10d) = *(byte *)(param_1 + 0x10d) & 0xf8 | 4;
    if (param_1[0x111] == 0) {
      if (param_1[0x10e] != 0) goto LAB_008190f8;
    }
    else {
      FUN_03f45838(param_1 + 0x10f);
      if (param_1[0x10e] == 0) {
        *(undefined4 *)((long)param_1 + 0x86c) = 0xe;
      }
      else {
LAB_008190f8:
        if (*(long *)puVar2 != 0) {
          FUN_03f350f4(*(long *)puVar2,param_1 + 0x10c);
        }
      }
    }
  }
  FUN_03f457c4(param_1 + 0x10f);
  if ((*(byte *)(param_1 + 0x103) >> 1 & 1) != 0) {
    *(byte *)(param_1 + 0x103) = *(byte *)(param_1 + 0x103) & 0xf8 | 4;
    if (param_1[0x107] == 0) {
      if (param_1[0x104] == 0) goto LAB_00819160;
    }
    else {
      FUN_03f45838(param_1 + 0x105);
      if (param_1[0x104] == 0) {
        *(undefined4 *)((long)param_1 + 0x81c) = 0xe;
        goto LAB_00819160;
      }
    }
    if (*(long *)puVar2 != 0) {
      FUN_03f350f4(*(long *)puVar2,param_1 + 0x102);
    }
  }
LAB_00819160:
  FUN_03f457c4(param_1 + 0x105);
  FUN_0081baf0(param_1 + 0xac);
  FUN_0081baf0(param_1 + 0x59);
  FUN_0081baf0(param_1 + 6);
  return;
}


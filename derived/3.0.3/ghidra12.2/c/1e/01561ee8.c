
void FUN_01561ee8(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  
  *param_1 = (long)&PTR_FUN_049a8fa0;
  if ((*(byte *)(param_1 + 0x362) >> 1 & 1) != 0) {
    *(byte *)(param_1 + 0x362) = *(byte *)(param_1 + 0x362) & 0xf8 | 4;
    if (param_1[0x366] == 0) {
      if (param_1[0x363] != 0) goto LAB_01561f50;
    }
    else {
      FUN_03f45838(param_1 + 0x364);
      if (param_1[0x363] == 0) {
        *(undefined4 *)((long)param_1 + 0x1b14) = 0xe;
      }
      else {
LAB_01561f50:
        if (*(long *)PTR_DAT_04bb49b8 != 0) {
          FUN_03f350f4(*(long *)PTR_DAT_04bb49b8,param_1 + 0x361);
        }
      }
    }
  }
  FUN_03f457c4(param_1 + 0x364);
  if ((*(byte *)(param_1 + 0x358) >> 1 & 1) != 0) {
    *(byte *)(param_1 + 0x358) = *(byte *)(param_1 + 0x358) & 0xf8 | 4;
    if (param_1[0x35c] == 0) {
      if (param_1[0x359] != 0) goto LAB_01561fbc;
    }
    else {
      FUN_03f45838(param_1 + 0x35a);
      if (param_1[0x359] == 0) {
        *(undefined4 *)((long)param_1 + 0x1ac4) = 0xe;
      }
      else {
LAB_01561fbc:
        if (*(long *)PTR_DAT_04bb49b8 != 0) {
          FUN_03f350f4(*(long *)PTR_DAT_04bb49b8,param_1 + 0x357);
        }
      }
    }
  }
  FUN_03f457c4(param_1 + 0x35a);
  bVar3 = *(byte *)(param_1 + 0x34e);
  if ((bVar3 >> 1 & 1) != 0) {
    *(byte *)(param_1 + 0x34e) = bVar3 & 0xf8 | 4;
    if (param_1[0x352] == 0) {
      if (param_1[0x34f] != 0) goto LAB_01562028;
    }
    else {
      FUN_03f45838(param_1 + 0x350);
      if (param_1[0x34f] == 0) {
        *(undefined4 *)((long)param_1 + 0x1a74) = 0xe;
      }
      else {
LAB_01562028:
        if (*(long *)PTR_DAT_04bb49b8 != 0) {
          FUN_03f350f4(*(long *)PTR_DAT_04bb49b8,param_1 + 0x34d);
        }
      }
    }
  }
  FUN_03f457c4(param_1 + 0x350);
  puVar1 = PTR_DAT_04bbd578;
  param_1[0x343] = (long)(PTR_DAT_04bbc5d8 + 0x10);
  puVar1 = puVar1 + 0x10;
  param_1[0x123] = (long)puVar1;
  param_1[0x11f] = (long)puVar1;
  param_1[0x11b] = (long)puVar1;
  param_1[0x117] = (long)puVar1;
  param_1[0x113] = (long)puVar1;
  param_1[0x10e] = (long)puVar1;
  param_1[0x109] = (long)puVar1;
  param_1[0x104] = (long)puVar1;
  puVar2 = PTR_DAT_04bd11e8 + 0xd8;
  param_1[0x100] = (long)puVar1;
  param_1[0xf5] = (long)puVar1;
  param_1[0xea] = (long)puVar1;
  param_1[0xe6] = (long)puVar1;
  param_1[0xe4] = (long)puVar2;
  param_1[0xde] = (long)(PTR_DAT_04bd1068 + 0x10);
  param_1[0xac] = (long)(PTR_DAT_04bd11b8 + 0x10);
  FUN_0390d560(param_1 + 0xac);
  if ((*(byte *)(param_1 + 0x98) >> 1 & 1) != 0) {
    *(byte *)(param_1 + 0x98) = *(byte *)(param_1 + 0x98) & 0xf8 | 4;
    if (param_1[0x9c] == 0) {
      if (param_1[0x99] != 0) goto LAB_01562114;
    }
    else {
      FUN_03f45838(param_1 + 0x9a);
      if (param_1[0x99] == 0) {
        *(undefined4 *)((long)param_1 + 0x4c4) = 0xe;
      }
      else {
LAB_01562114:
        if (*(long *)PTR_DAT_04bb49b8 != 0) {
          FUN_03f350f4(*(long *)PTR_DAT_04bb49b8,param_1 + 0x97);
        }
      }
    }
  }
  FUN_03f457c4(param_1 + 0x9a);
  if ((*(byte *)(param_1 + 0x8e) >> 1 & 1) != 0) {
    *(byte *)(param_1 + 0x8e) = *(byte *)(param_1 + 0x8e) & 0xf8 | 4;
    if (param_1[0x92] == 0) {
      if (param_1[0x8f] != 0) goto LAB_01562174;
    }
    else {
      FUN_03f45838(param_1 + 0x90);
      if (param_1[0x8f] == 0) {
        *(undefined4 *)((long)param_1 + 0x474) = 0xe;
      }
      else {
LAB_01562174:
        if (*(long *)PTR_DAT_04bb49b8 != 0) {
          FUN_03f350f4(*(long *)PTR_DAT_04bb49b8,param_1 + 0x8d);
        }
      }
    }
  }
  FUN_03f457c4(param_1 + 0x90);
  if ((*(byte *)(param_1 + 0x84) >> 1 & 1) != 0) {
    *(byte *)(param_1 + 0x84) = *(byte *)(param_1 + 0x84) & 0xf8 | 4;
    if (param_1[0x88] == 0) {
      if (param_1[0x85] != 0) goto LAB_015621d4;
    }
    else {
      FUN_03f45838(param_1 + 0x86);
      if (param_1[0x85] == 0) {
        *(undefined4 *)((long)param_1 + 0x424) = 0xe;
      }
      else {
LAB_015621d4:
        if (*(long *)PTR_DAT_04bb49b8 != 0) {
          FUN_03f350f4(*(long *)PTR_DAT_04bb49b8,param_1 + 0x83);
        }
      }
    }
  }
  FUN_03f457c4(param_1 + 0x86);
  if ((*(byte *)(param_1 + 0x7a) >> 1 & 1) != 0) {
    *(byte *)(param_1 + 0x7a) = *(byte *)(param_1 + 0x7a) & 0xf8 | 4;
    if (param_1[0x7e] == 0) {
      if (param_1[0x7b] != 0) goto LAB_01562234;
    }
    else {
      FUN_03f45838(param_1 + 0x7c);
      if (param_1[0x7b] == 0) {
        *(undefined4 *)((long)param_1 + 0x3d4) = 0xe;
      }
      else {
LAB_01562234:
        if (*(long *)PTR_DAT_04bb49b8 != 0) {
          FUN_03f350f4(*(long *)PTR_DAT_04bb49b8,param_1 + 0x79);
        }
      }
    }
  }
  FUN_03f457c4(param_1 + 0x7c);
  if ((*(byte *)(param_1 + 0x70) >> 1 & 1) != 0) {
    *(byte *)(param_1 + 0x70) = *(byte *)(param_1 + 0x70) & 0xf8 | 4;
    if (param_1[0x74] == 0) {
      if (param_1[0x71] != 0) goto LAB_01562294;
    }
    else {
      FUN_03f45838(param_1 + 0x72);
      if (param_1[0x71] == 0) {
        *(undefined4 *)((long)param_1 + 900) = 0xe;
      }
      else {
LAB_01562294:
        if (*(long *)PTR_DAT_04bb49b8 != 0) {
          FUN_03f350f4(*(long *)PTR_DAT_04bb49b8,param_1 + 0x6f);
        }
      }
    }
  }
  FUN_03f457c4(param_1 + 0x72);
  if ((*(byte *)(param_1 + 0x66) >> 1 & 1) != 0) {
    *(byte *)(param_1 + 0x66) = *(byte *)(param_1 + 0x66) & 0xf8 | 4;
    if (param_1[0x6a] == 0) {
      if (param_1[0x67] != 0) goto LAB_015622f4;
    }
    else {
      FUN_03f45838(param_1 + 0x68);
      if (param_1[0x67] == 0) {
        *(undefined4 *)((long)param_1 + 0x334) = 0xe;
      }
      else {
LAB_015622f4:
        if (*(long *)PTR_DAT_04bb49b8 != 0) {
          FUN_03f350f4(*(long *)PTR_DAT_04bb49b8,param_1 + 0x65);
        }
      }
    }
  }
  FUN_03f457c4(param_1 + 0x68);
  if ((*(byte *)(param_1 + 0x5c) >> 1 & 1) != 0) {
    *(byte *)(param_1 + 0x5c) = *(byte *)(param_1 + 0x5c) & 0xf8 | 4;
    if (param_1[0x60] == 0) {
      if (param_1[0x5d] != 0) goto LAB_01562354;
    }
    else {
      FUN_03f45838(param_1 + 0x5e);
      if (param_1[0x5d] == 0) {
        *(undefined4 *)((long)param_1 + 0x2e4) = 0xe;
      }
      else {
LAB_01562354:
        if (*(long *)PTR_DAT_04bb49b8 != 0) {
          FUN_03f350f4(*(long *)PTR_DAT_04bb49b8,param_1 + 0x5b);
        }
      }
    }
  }
  FUN_03f457c4(param_1 + 0x5e);
  if ((*(byte *)(param_1 + 0x52) >> 1 & 1) != 0) {
    *(byte *)(param_1 + 0x52) = *(byte *)(param_1 + 0x52) & 0xf8 | 4;
    if (param_1[0x56] == 0) {
      if (param_1[0x53] != 0) goto LAB_015623b4;
    }
    else {
      FUN_03f45838(param_1 + 0x54);
      if (param_1[0x53] == 0) {
        *(undefined4 *)((long)param_1 + 0x294) = 0xe;
      }
      else {
LAB_015623b4:
        if (*(long *)PTR_DAT_04bb49b8 != 0) {
          FUN_03f350f4(*(long *)PTR_DAT_04bb49b8,param_1 + 0x51);
        }
      }
    }
  }
  FUN_03f457c4(param_1 + 0x54);
  if ((*(byte *)(param_1 + 0x48) >> 1 & 1) != 0) {
    *(byte *)(param_1 + 0x48) = *(byte *)(param_1 + 0x48) & 0xf8 | 4;
    if (param_1[0x4c] == 0) {
      if (param_1[0x49] != 0) goto LAB_01562414;
    }
    else {
      FUN_03f45838(param_1 + 0x4a);
      if (param_1[0x49] == 0) {
        *(undefined4 *)((long)param_1 + 0x244) = 0xe;
      }
      else {
LAB_01562414:
        if (*(long *)PTR_DAT_04bb49b8 != 0) {
          FUN_03f350f4(*(long *)PTR_DAT_04bb49b8,param_1 + 0x47);
        }
      }
    }
  }
  FUN_03f457c4(param_1 + 0x4a);
  if ((*(byte *)(param_1 + 0x3e) >> 1 & 1) != 0) {
    *(byte *)(param_1 + 0x3e) = *(byte *)(param_1 + 0x3e) & 0xf8 | 4;
    if (param_1[0x42] == 0) {
      if (param_1[0x3f] != 0) goto LAB_01562474;
    }
    else {
      FUN_03f45838(param_1 + 0x40);
      if (param_1[0x3f] == 0) {
        *(undefined4 *)((long)param_1 + 500) = 0xe;
      }
      else {
LAB_01562474:
        if (*(long *)PTR_DAT_04bb49b8 != 0) {
          FUN_03f350f4(*(long *)PTR_DAT_04bb49b8,param_1 + 0x3d);
        }
      }
    }
  }
  FUN_03f457c4(param_1 + 0x40);
  if ((*(byte *)(param_1 + 0x34) >> 1 & 1) != 0) {
    *(byte *)(param_1 + 0x34) = *(byte *)(param_1 + 0x34) & 0xf8 | 4;
    if (param_1[0x38] == 0) {
      if (param_1[0x35] != 0) goto LAB_015624d4;
    }
    else {
      FUN_03f45838(param_1 + 0x36);
      if (param_1[0x35] == 0) {
        *(undefined4 *)((long)param_1 + 0x1a4) = 0xe;
      }
      else {
LAB_015624d4:
        if (*(long *)PTR_DAT_04bb49b8 != 0) {
          FUN_03f350f4(*(long *)PTR_DAT_04bb49b8,param_1 + 0x33);
        }
      }
    }
  }
  FUN_03f457c4(param_1 + 0x36);
  if ((*(byte *)(param_1 + 0x2a) >> 1 & 1) != 0) {
    *(byte *)(param_1 + 0x2a) = *(byte *)(param_1 + 0x2a) & 0xf8 | 4;
    if (param_1[0x2e] == 0) {
      if (param_1[0x2b] != 0) goto LAB_01562534;
    }
    else {
      FUN_03f45838(param_1 + 0x2c);
      if (param_1[0x2b] == 0) {
        *(undefined4 *)((long)param_1 + 0x154) = 0xe;
      }
      else {
LAB_01562534:
        if (*(long *)PTR_DAT_04bb49b8 != 0) {
          FUN_03f350f4(*(long *)PTR_DAT_04bb49b8,param_1 + 0x29);
        }
      }
    }
  }
  FUN_03f457c4(param_1 + 0x2c);
  if ((*(byte *)(param_1 + 0x20) >> 1 & 1) != 0) {
    *(byte *)(param_1 + 0x20) = *(byte *)(param_1 + 0x20) & 0xf8 | 4;
    if (param_1[0x24] == 0) {
      if (param_1[0x21] != 0) goto LAB_01562594;
    }
    else {
      FUN_03f45838(param_1 + 0x22);
      if (param_1[0x21] == 0) {
        *(undefined4 *)((long)param_1 + 0x104) = 0xe;
      }
      else {
LAB_01562594:
        if (*(long *)PTR_DAT_04bb49b8 != 0) {
          FUN_03f350f4(*(long *)PTR_DAT_04bb49b8,param_1 + 0x1f);
        }
      }
    }
  }
  FUN_03f457c4(param_1 + 0x22);
  if ((*(byte *)(param_1 + 0x16) >> 1 & 1) != 0) {
    *(byte *)(param_1 + 0x16) = *(byte *)(param_1 + 0x16) & 0xf8 | 4;
    if (param_1[0x1a] == 0) {
      if (param_1[0x17] != 0) goto LAB_015625f4;
    }
    else {
      FUN_03f45838(param_1 + 0x18);
      if (param_1[0x17] == 0) {
        *(undefined4 *)((long)param_1 + 0xb4) = 0xe;
      }
      else {
LAB_015625f4:
        if (*(long *)PTR_DAT_04bb49b8 != 0) {
          FUN_03f350f4(*(long *)PTR_DAT_04bb49b8,param_1 + 0x15);
        }
      }
    }
  }
  FUN_03f457c4(param_1 + 0x18);
  if ((*(byte *)(param_1 + 0xc) >> 1 & 1) != 0) {
    *(byte *)(param_1 + 0xc) = *(byte *)(param_1 + 0xc) & 0xf8 | 4;
    if (param_1[0x10] == 0) {
      if (param_1[0xd] == 0) goto LAB_0156266c;
    }
    else {
      FUN_03f45838(param_1 + 0xe);
      if (param_1[0xd] == 0) {
        *(undefined4 *)((long)param_1 + 100) = 0xe;
        goto LAB_0156266c;
      }
    }
    if (*(long *)PTR_DAT_04bb49b8 != 0) {
      FUN_03f350f4(*(long *)PTR_DAT_04bb49b8,param_1 + 0xb);
    }
  }
LAB_0156266c:
  FUN_03f457c4(param_1 + 0xe);
  param_1[7] = (long)(PTR_DAT_04bb3048 + 0x10);
  if ((long *)param_1[8] != (long *)0x0) {
    (**(code **)(*(long *)param_1[8] + 8))();
  }
  param_1[8] = 0;
  *param_1 = (long)(PTR_DAT_04bbdcd0 + 0x10);
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 0x18))();
  }
  param_1[1] = 0;
  return;
}


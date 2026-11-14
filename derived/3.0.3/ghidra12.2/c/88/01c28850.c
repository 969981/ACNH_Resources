
undefined8 FUN_01c28850(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (DAT_05aed670 == 0) {
    puVar3 = &DAT_055c04a0;
  }
  else {
    puVar3 = &DAT_055c04a0;
    if (*(long *)(DAT_05aed670 + 0x330) != 0) {
      puVar3 = (undefined8 *)
               (**(code **)(*DAT_05aed668 + 0x18))
                         (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
      iVar1 = FUN_006bd550(*puVar3,0);
      puVar3 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar1 != 0x758f7eaf) {
        puVar3 = &DAT_055c04a0;
      }
    }
  }
  iVar1 = *(int *)(puVar3 + 7);
  uVar2 = 0;
  if (iVar1 < -0x169521c) {
    if (iVar1 < -0x15fdefdb) {
      if (iVar1 == -0x477aafe0) {
        uVar2 = 5;
      }
      else if (iVar1 == -0x21a6781c) {
        uVar2 = 0xc;
      }
      else if (iVar1 == -0x2099c902) {
        uVar2 = 9;
      }
    }
    else if (iVar1 == -0x15fdefdb) {
      uVar2 = 7;
    }
    else if (iVar1 == -0xe632453) {
      uVar2 = 3;
    }
    else if (iVar1 == -0x83ceb3d) {
      uVar2 = 4;
    }
  }
  else if (iVar1 < 0x3fce6459) {
    if (iVar1 == -0x169521c) {
      uVar2 = 1;
    }
    else if (iVar1 == 0x17f77b87) {
      uVar2 = 8;
    }
    else if (iVar1 == 0x3b3bf38a) {
      uVar2 = 6;
    }
  }
  else if (iVar1 == 0x3fce6459) {
    uVar2 = 2;
  }
  else if (iVar1 == 0x593d97a5) {
    uVar2 = 0xb;
  }
  else if (iVar1 == 0x66eec322) {
    uVar2 = 10;
  }
  return uVar2;
}


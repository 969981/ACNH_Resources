
int FUN_00318f70(void)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  undefined **local_58 [5];
  
  (**(code **)(DAT_04c616c8 + 0x10))(&DAT_04c616c8);
  DAT_04c616c0 = DAT_04c616c0 + -1;
  if (DAT_04c616c0 == 0) {
    (**(code **)(DAT_04c616c8 + 0x10))(&DAT_04c616c8);
    plVar4 = (long *)DAT_04c61758[1];
    if (plVar4 != DAT_04c61758) {
      do {
        uVar3 = (**(code **)(*(long *)plVar4[2] + 0x18))(local_58);
        FUN_003192e0(uVar3,local_58);
        local_58[0] = &PTR_LAB_04a426b8;
        FUN_0018b1a0(local_58);
        plVar4 = (long *)DAT_04c61758[1];
      } while (plVar4 != DAT_04c61758);
    }
    (**(code **)(DAT_04c616c8 + 0x20))(&DAT_04c616c8);
    plVar4 = DAT_04c61758;
    DAT_04c616b0 = 0;
    if (DAT_04c61758 != (long *)0x0) {
      if (DAT_04c61758[2] != 0) {
        lVar1 = *DAT_04c61758;
        plVar6 = (long *)DAT_04c61758[1];
        lVar5 = *plVar6;
        *(undefined8 *)(lVar5 + 8) = *(undefined8 *)(lVar1 + 8);
        **(long **)(lVar1 + 8) = lVar5;
        plVar4[2] = 0;
        while (plVar6 != plVar4) {
          plVar6 = (long *)plVar6[1];
          FUN_00187e4c();
        }
      }
      FUN_00185ac4(plVar4);
    }
    DAT_04c61758 = (long *)0x0;
  }
  iVar2 = DAT_04c616c0;
  (**(code **)(DAT_04c616c8 + 0x20))(&DAT_04c616c8);
  return iVar2;
}



uint FUN_02b5fa90(long param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  long lVar5;
  long *plVar6;
  undefined1 auStack_5c [31];
  undefined1 local_3d;
  
  uVar2 = 0;
  if (param_1 != 0) {
    lVar5 = *(long *)PTR_DAT_04bb2720;
    if (lVar5 == 0) {
      plVar6 = &DAT_055c04a0;
    }
    else {
      plVar6 = &DAT_055c04a0;
      if (*(long *)(lVar5 + 0x330) != 0) {
        puVar3 = (undefined8 *)
                 (**(code **)(*DAT_05aed668 + 0x18))(DAT_05aed668,*(undefined4 *)(lVar5 + 0x338));
        iVar1 = FUN_006bd550(*puVar3,0);
        plVar6 = (long *)PTR_DAT_04bc3a80;
        if (iVar1 != 0x758f7eaf) {
          plVar6 = &DAT_055c04a0;
        }
      }
    }
    local_3d = 0;
    (**(code **)(*plVar6 + 0x18))(plVar6);
    if (auStack_5c != (undefined1 *)plVar6[1]) {
      (**(code **)(*plVar6 + 0x18))(plVar6);
    }
    if ((int)plVar6[7] == -0x24a26848) {
      uVar4 = 0x26;
    }
    else {
      if (7 < param_2) {
        param_2 = 0;
      }
      uVar4 = (&DAT_05636e10)[(int)param_2];
    }
    uVar2 = FUN_02b684a0(param_1,uVar4);
  }
  return uVar2 & 1;
}


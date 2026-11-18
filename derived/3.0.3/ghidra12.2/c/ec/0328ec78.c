
uint FUN_0328ec78(long param_1,long param_2,ulong param_3,uint param_4,uint param_5,uint param_6,
                 uint param_7)

{
  long lVar1;
  uint uVar2;
  long *plVar3;
  undefined8 uVar4;
  byte bVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  undefined4 local_48;
  uint uStack_44;
  
  lVar8 = *(long *)(param_1 + 0x18);
  if (lVar8 == param_2) {
    lVar8 = 0;
    bVar5 = *(byte *)(param_1 + 0x148);
    uVar6 = (uint)bVar5;
    if ((param_2 == 0) || ((bVar5 & 4) == 0)) goto LAB_0328ed88;
    if ((bVar5 >> 1 & 1) == 0) {
      plVar3 = *(long **)(param_1 + 0x60);
      uStack_44 = param_5 | param_4;
      local_48 = 0;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x20))(plVar3,&local_48);
        uVar6 = (uint)*(byte *)(param_1 + 0x148);
      }
    }
    lVar8 = 0;
    uVar6 = uVar6 | 2;
  }
  else {
    uVar6 = (uint)*(byte *)(param_1 + 0x148);
    if ((*(byte *)(param_1 + 0x148) >> 1 & 1) != 0) {
      plVar3 = *(long **)(param_1 + 0x60);
      uStack_44 = param_5 | param_4;
      local_48 = 1;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x20))(plVar3,&local_48);
        uVar6 = (uint)*(byte *)(param_1 + 0x148);
      }
    }
    uVar6 = uVar6 & 0xfffffffd;
  }
  *(char *)(param_1 + 0x148) = (char)uVar6;
LAB_0328ed88:
  if ((param_3 & 1) == 0) {
    local_48 = 0;
    if ((lVar8 != 0) && ((uVar6 & 1) != 0)) {
      FUN_03368bd0(lVar8);
      lVar7 = *(long *)PTR_DAT_04bb4fb0;
      uVar4 = FUN_03368ef0(DAT_05734ea0,1);
      lVar8 = *(long *)(lVar7 + 8);
      if (lVar8 != 0) {
        lVar1 = 0;
        if (*(char *)(lVar8 + 0x38) != '\0') {
          lVar1 = lVar8 + 8;
        }
        FUN_03366350(lVar7,lVar1,s_Unselect_04b20a0d,1,uVar4,0);
      }
      uVar6 = (uint)*(byte *)(param_1 + 0x148);
    }
  }
  else if ((uVar6 >> 1 & 1) != 0) {
    local_48 = 0;
    if (((uVar6 & 1) == 0) && ((param_5 != 0 || param_4 != 0) || param_6 != 0)) {
      FUN_03368bd0(param_2);
      lVar7 = *(long *)PTR_DAT_04bb4fb0;
      uVar4 = FUN_03368ef0(DAT_05734ea0,1);
      lVar8 = *(long *)(lVar7 + 8);
      if (lVar8 != 0) {
        lVar1 = 0;
        if (*(char *)(lVar8 + 0x38) != '\0') {
          lVar1 = lVar8 + 8;
        }
        FUN_03366350(lVar7,lVar1,s_Select_04b20a05,1,uVar4,0);
      }
    }
    bVar5 = *(byte *)(param_1 + 0x148);
    DAT_0572cc30 = bVar5 >> 3 & 1;
    if ((bVar5 >> 2 & 1) == 0) {
      return 0;
    }
    if (*(long *)(param_1 + 0x18) == 0) {
      return 0;
    }
    if ((bVar5 & 1) == 0) {
      plVar3 = *(long **)(param_1 + 0x30);
      uStack_44 = param_5 | param_4;
      local_48 = 0;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x20))(plVar3,&local_48);
        bVar5 = *(byte *)(param_1 + 0x148);
      }
    }
    *(byte *)(param_1 + 0x148) = bVar5 | 1;
    local_48 = 3;
    if ((bVar5 & 8) == 0) {
      return 0;
    }
    if ((param_7 & 1) != 0) {
      return param_4;
    }
    uVar6 = *(uint *)(param_1 + 0x24) & 0xfff0ffff;
    param_4 = uVar6 & param_4;
    if (param_4 == 0) {
      uVar2 = 0;
    }
    else {
      plVar3 = *(long **)(param_1 + 0x90);
      if (plVar3 == (long *)0x0) {
        uVar2 = 0xffffffff;
      }
      else {
        uVar2 = (**(code **)(*plVar3 + 0x20))(plVar3,param_4);
        uVar2 = ~uVar2;
      }
      uVar2 = uVar2 & param_4;
    }
    if (((uVar6 & param_5) != 0) && (plVar3 = *(long **)(param_1 + 0xc0), plVar3 != (long *)0x0)) {
      (**(code **)(*plVar3 + 0x20))(plVar3,uVar6 & param_5);
    }
    if ((uVar6 & param_6) == 0) {
      return uVar2;
    }
    plVar3 = *(long **)(param_1 + 0xf0);
    if (plVar3 == (long *)0x0) {
      return uVar2;
    }
    (**(code **)(*plVar3 + 0x20))(plVar3,uVar6 & param_6);
    return uVar2;
  }
  bVar5 = (byte)uVar6;
  if ((uVar6 & 1) != 0) {
    plVar3 = *(long **)(param_1 + 0x30);
    uStack_44 = param_5 | param_4;
    local_48 = 1;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x20))(plVar3,&local_48);
      bVar5 = *(byte *)(param_1 + 0x148);
    }
  }
  *(byte *)(param_1 + 0x148) = bVar5 & 0xfe;
  return 0;
}


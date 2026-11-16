
uint FUN_0283bffc(undefined4 *param_1,undefined1 *param_2,byte *param_3,byte *param_4,long *param_5,
                 long *param_6,long *param_7,long *param_8,undefined8 *param_9,int param_10)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int local_68;
  int local_64;
  
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0;
  }
  if (param_3 != (byte *)0x0) {
    *param_3 = 0;
  }
  if (param_4 != (byte *)0x0) {
    *param_4 = 0;
  }
  if (param_2 != (undefined1 *)0x0) {
    *param_2 = 0;
  }
  if ((((param_5 == (long *)0x0) || (param_6 == (long *)0x0)) || (param_7 == (long *)0x0)) ||
     ((param_8 == (long *)0x0 || (param_9 == (undefined8 *)0x0)))) {
LAB_0283c1b4:
    if (param_1 == (undefined4 *)0x0) {
      uVar3 = 0;
      goto LAB_0283c284;
    }
LAB_0283c27c:
    uVar7 = 7;
    uVar3 = 0;
  }
  else {
    local_64 = 0;
    local_68 = 0;
    uVar4 = (**(code **)(*param_5 + 0x10))(param_5,&local_68,&local_64);
    if ((uVar4 & 1) == 0) {
      iVar5 = 4;
      if (local_64 != 0) {
        iVar5 = 7;
      }
joined_r0x0283c0d0:
      bVar1 = false;
    }
    else if (local_68 == 1) {
      iVar5 = 1;
      bVar1 = local_64 != param_10;
    }
    else {
      if (local_68 == 5) {
        iVar5 = 4;
        goto joined_r0x0283c0d0;
      }
      bVar1 = false;
      iVar5 = 7;
    }
    if (param_3 != (byte *)0x0) {
      *param_3 = bVar1;
    }
    local_64 = 0;
    local_68 = 0;
    uVar4 = (**(code **)(*param_6 + 0x10))(param_6,&local_68,&local_64);
    if ((uVar4 & 1) == 0) {
      iVar6 = 4;
      if (local_64 != 0) {
        iVar6 = 7;
      }
joined_r0x0283c138:
      bVar2 = false;
    }
    else if (local_68 == 1) {
      bVar2 = local_64 != 0x300;
      iVar6 = 1;
    }
    else {
      if (local_68 == 5) {
        iVar6 = 4;
        goto joined_r0x0283c138;
      }
      bVar2 = false;
      iVar6 = 7;
    }
    if (param_4 != (byte *)0x0) {
      *param_4 = bVar2;
    }
    if ((iVar5 == 1) && (iVar6 == 1)) {
      local_64 = 0;
      uVar4 = (**(code **)(*param_7 + 0x10))(param_7,&local_64);
      if ((uVar4 & 1) != 0) {
        if (local_64 == 1) {
          if (param_2 != (undefined1 *)0x0) {
            *param_2 = 1;
          }
          (**(code **)*param_9)(param_9);
          if (!(bool)(bVar1 | bVar2)) {
            uVar3 = (**(code **)(*param_8 + 0x10))(param_8);
            uVar7 = 6;
            if ((uVar3 & 1) != 0) {
              uVar7 = 1;
            }
            if (param_1 == (undefined4 *)0x0) goto LAB_0283c284;
            goto LAB_0283c280;
          }
        }
        else if (local_64 == 5) goto LAB_0283c194;
      }
      uVar3 = 0;
      if (param_1 == (undefined4 *)0x0) goto LAB_0283c284;
      goto LAB_0283c27c;
    }
    if ((iVar5 == 4) && (iVar6 == 4)) {
LAB_0283c194:
      uVar3 = 0;
      if (param_1 == (undefined4 *)0x0) goto LAB_0283c284;
      uVar7 = 4;
      uVar3 = 0;
    }
    else {
      if ((iVar5 != 4) && (iVar6 != 4)) goto LAB_0283c1b4;
      uVar3 = 0;
      if (param_1 == (undefined4 *)0x0) goto LAB_0283c284;
      uVar7 = 6;
      uVar3 = 0;
    }
  }
LAB_0283c280:
  *param_1 = uVar7;
LAB_0283c284:
  return uVar3 & 1;
}


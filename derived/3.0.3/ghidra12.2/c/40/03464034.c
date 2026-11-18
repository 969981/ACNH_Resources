
void FUN_03464034(long param_1,undefined1 *param_2)

{
  int *piVar1;
  undefined1 uVar2;
  byte bVar3;
  bool bVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  int iVar8;
  undefined *local_40;
  undefined4 local_38;
  
  if (param_2[2] == '\0') {
    *(undefined4 *)(param_1 + 0x68) = 0;
    if (*(char *)(param_1 + 0x6d) == '\0') {
      if (param_2[3] != '\0') {
        *(undefined1 *)(param_1 + 0x48) = *param_2;
        *(undefined1 *)(param_1 + 0x49) = 0xff;
        uVar2 = param_2[1];
        *(undefined1 *)(param_1 + 0x61) = 0xff;
        *(undefined1 *)(param_1 + 0x60) = uVar2;
      }
    }
    else {
      *(undefined1 *)(param_1 + 0x48) = *param_2;
      uVar2 = param_2[1];
      *(undefined1 *)(param_1 + 0x6d) = 0;
      *(undefined1 *)(param_1 + 0x60) = uVar2;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x48) = *param_2;
    *(undefined1 *)(param_1 + 0x60) = param_2[1];
    *(undefined1 *)(param_1 + 0x6d) = 1;
    if (*(char *)(param_1 + 0x6c) == '\0') {
      *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
    }
    else {
      *(undefined4 *)(param_1 + 0x68) = 0;
      *(undefined1 *)(param_1 + 0x49) = 0xff;
      *(undefined1 *)(param_1 + 0x61) = 0xff;
    }
  }
  if (*(char *)(param_1 + 0x6c) == '\0') {
    bVar3 = *(byte *)(param_1 + 0x60);
    if ((((uint)bVar3 != (uint)*(byte *)(param_1 + 0x61)) && (*(char *)(param_1 + 0x48) == '\0')) &&
       ((int)(uint)bVar3 <= *(int *)(param_1 + 0x30))) {
      plVar7 = *(long **)(param_1 + 0x20);
      if (plVar7 != (long *)0x0) {
        piVar1 = (int *)(param_1 + 0x2c);
        if (bVar3 != 0) {
          piVar1 = (int *)(param_1 + 0x28);
        }
        iVar8 = *piVar1;
        local_40 = PTR_DAT_04bc4f00 + 0x10;
        local_38 = 0x14;
        (**(code **)(*plVar7 + 0x18))(plVar7,&local_40);
        (**(code **)(plVar7[3] + 0x158))((float)iVar8,plVar7[1]);
      }
      plVar7 = *(long **)(param_1 + 0x18);
      if (plVar7 != (long *)0x0) {
        local_38 = 0;
        local_40 = PTR_DAT_04bc4e68 + 0x10;
        (**(code **)(*plVar7 + 0x18))(plVar7,&local_40);
        (**(code **)(plVar7[3] + 0x188))(0x3f800000,plVar7[1],0);
      }
    }
  }
  uVar5 = FUN_0346428c(param_1 + 0x38);
  uVar6 = FUN_0346428c(param_1 + 0x50);
  if (((uVar5 & 1) == 0) && ((uVar6 & 1) == 0)) {
    if (0x11 < *(int *)(param_1 + 0x68)) {
      if (*(char *)(param_1 + 0x6c) == '\0' && *(char *)(param_1 + 0x48) == '\0') {
        bVar4 = *(char *)(param_1 + 0x60) == '\0';
        plVar7 = *(long **)(param_1 + 0x10);
      }
      else {
        bVar4 = false;
        plVar7 = *(long **)(param_1 + 0x10);
      }
      goto joined_r0x03464284;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x68) = 0;
  }
  bVar4 = true;
  plVar7 = *(long **)(param_1 + 0x10);
joined_r0x03464284:
  if (plVar7 != (long *)0x0) {
    local_40 = PTR_DAT_04bc0cb8 + 0x10;
    local_38 = 7;
    (**(code **)(*plVar7 + 0x18))(plVar7,&local_40);
    (**(code **)(plVar7[3] + 0x88))(plVar7[1],bVar4);
  }
  *(undefined1 *)(param_1 + 0x6c) = 0;
  return;
}


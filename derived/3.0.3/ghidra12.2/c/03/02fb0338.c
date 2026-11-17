
void FUN_02fb0338(long *param_1,uint *param_2)

{
  undefined *puVar1;
  uint uVar2;
  char cVar3;
  char cVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  int local_14;
  
  cVar3 = *(char *)((long)param_2 + 0xd);
  cVar4 = *(char *)(*(long *)PTR_DAT_04bb38d0 + 0xb4);
  if (cVar3 != '\0') {
    FUN_02f07ed0(*(char *)((long)param_2 + 5) * 0x3c);
    puVar5 = DAT_057526d0;
    if (*param_2 < 4) {
      uVar6 = *(undefined4 *)(&DAT_04130b54 + (long)(int)*param_2 * 4);
    }
    else {
      uVar6 = 3;
    }
    switch(uVar6) {
    case 0:
      if (DAT_04c487d4 == -1) {
LAB_02fb0418:
        if ((*(int *)(PTR_DAT_04bc3a80 + 0x38) == -0x3f5c743d) ||
           ((*(int *)(PTR_DAT_04bc3a80 + 0x38) == -0x2f1ac06c &&
            (*(int *)(DAT_05351250 + 0xb0) != 0)))) goto LAB_02fb0458;
        uVar6 = 7;
      }
      else {
        puVar1 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8;
        if (0xff < (uint)(int)DAT_04c487d4) {
          puVar1 = PTR_DAT_04bc39f8;
        }
        if ((*(uint *)(puVar1 + 4) & 1) == 0) goto LAB_02fb0418;
LAB_02fb0458:
        uVar6 = 3;
      }
      DAT_057526d0[1] = 0;
      puVar5[2] = 0;
      *puVar5 = 0;
      break;
    case 1:
    case 2:
      break;
    case 3:
      uVar6 = 0;
      break;
    default:
      uVar6 = 3;
    }
    FUN_02f08500(uVar6,1);
  }
  uVar2 = *param_2;
  if (uVar2 == 0) {
    if ('\0' < (char)*(byte *)((long)param_2 + 5)) {
      *(uint *)((long)param_1 + 0x23c) = (uint)*(byte *)((long)param_2 + 5) * 0x3c;
    }
    if (!(cVar3 == '\0' && cVar4 == '\0')) {
      uVar6 = *(undefined4 *)((long)param_1 + 0x23c);
      local_14 = 1;
      goto LAB_02fb0558;
    }
    uVar6 = 1;
  }
  else if (uVar2 == 1) {
    if ('\0' < (char)*(byte *)((long)param_2 + 5)) {
      *(uint *)((long)param_1 + 0x23c) = (uint)*(byte *)((long)param_2 + 5) * 0x3c;
    }
    if (!(cVar3 == '\0' && cVar4 == '\0')) {
      uVar6 = *(undefined4 *)((long)param_1 + 0x23c);
      local_14 = 2;
      goto LAB_02fb0558;
    }
    uVar6 = 2;
  }
  else {
    if (uVar2 == 3) {
      if ('\0' < (char)*(byte *)((long)param_2 + 5)) {
        *(uint *)((long)param_1 + 0x23c) = (uint)*(byte *)((long)param_2 + 5) * 0x3c;
      }
      if (!(cVar3 == '\0' && cVar4 == '\0')) {
        uVar6 = *(undefined4 *)((long)param_1 + 0x23c);
        local_14 = 0;
        goto LAB_02fb0558;
      }
      *(undefined4 *)((long)param_1 + 0x244) = 0;
      goto LAB_02fb0594;
    }
    if ('\0' < (char)*(byte *)((long)param_2 + 5)) {
      *(uint *)((long)param_1 + 0x23c) = (uint)*(byte *)((long)param_2 + 5) * 0x3c;
    }
    if (!(cVar3 == '\0' && cVar4 == '\0')) {
      uVar6 = *(undefined4 *)((long)param_1 + 0x23c);
      local_14 = 3;
LAB_02fb0558:
      FUN_02f07fe8(uVar6,1);
      if (local_14 != 3) {
        FUN_02f086a8();
      }
      return;
    }
    uVar6 = 3;
  }
  *(undefined4 *)((long)param_1 + 0x244) = uVar6;
LAB_02fb0594:
  *(undefined1 *)(param_1 + 0x47) = 0;
  if (*(uint *)(param_1 + 0x36) < 2) {
                    /* WARNING: Could not recover jumptable at 0x02fb05bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xa8))(param_1);
    return;
  }
  return;
}


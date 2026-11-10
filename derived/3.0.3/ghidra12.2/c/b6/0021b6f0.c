
void FUN_0021b6f0(long *param_1)

{
  int iVar1;
  ushort uVar2;
  code *pcVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong local_50;
  undefined4 local_48;
  int local_40;
  ErrorResultVariant aEStack_3c [12];
  undefined1 uStack_21;
  
  local_40 = 0;
  local_50 = local_50 & 0xffffffff00000000;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_3c,(Result *)&local_50);
  if (*(int *)((long)param_1 + 0x6c) == 3) {
    if ((short)param_1[0x10] != 0) {
      return;
    }
    if (*(char *)((long)param_1 + 0xa1) != '\0') {
      FUN_0021cf50(param_1,0);
      pcVar3 = DAT_04c5efa8;
      if ((*(int *)((long)param_1 + 0x7c) != 0) && (DAT_04c5efa8 != (code *)0x0)) {
        *(undefined4 *)((long)param_1 + 0x7c) = 0;
        (*pcVar3)();
      }
      *(undefined4 *)((long)param_1 + 0x7c) = 0;
      return;
    }
    uVar4 = FUN_002aed20(param_1[0xb]);
    if ((uVar4 & 1) == 0) {
      *(undefined1 *)((long)param_1 + 0xa1) = 1;
      return;
    }
    FUN_0021d60c(&local_50,param_1,4,&uStack_21,1,0,(short)param_1[0xf]);
    FUN_00229780(&local_40,&local_50);
    if (local_40 == 0) {
      *(undefined1 *)((long)param_1 + 0xa1) = 1;
      return;
    }
    return;
  }
  if (*(int *)((long)param_1 + 0x6c) != 1) {
    return;
  }
  if ((short)param_1[0x10] != 0) {
    return;
  }
  if ((char)param_1[0x14] == '\0') {
    uVar4 = FUN_002aed20(param_1[0xb]);
    if ((uVar4 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x14) = 1;
      return;
    }
    FUN_0021d60c(&local_50,param_1,1,&uStack_21,1,0,(short)param_1[0xf]);
    FUN_00229780(&local_40,&local_50);
    if (local_40 == 0) {
      *(undefined1 *)(param_1 + 0x14) = 1;
      return;
    }
    return;
  }
  if (*(int *)((long)param_1 + 0x7c) != 0) {
    return;
  }
  uVar2 = *(ushort *)(param_1 + 0xc);
  if (uVar2 == 0) {
    local_48 = 0;
    local_50 = 0x800000000000000;
    (**(code **)(*param_1 + 0x10))(param_1,&local_50);
    uVar2 = *(ushort *)(param_1 + 0xc);
  }
  if (1 < uVar2) {
    lVar6 = 0;
    do {
      uVar4 = (**(code **)(*param_1 + 0x68))(param_1,param_1[10] + lVar6 * 0x30);
      if ((uVar4 & 1) != 0) {
        lVar5 = param_1[10];
        if (lVar5 == 0) {
          local_50 = 0x800000000000000;
          local_48 = 0;
          (**(code **)(*param_1 + 0x10))(param_1,&local_50);
          lVar5 = param_1[10];
        }
        uVar4 = FUN_0021dde0(param_1,*(undefined8 *)(lVar5 + lVar6 * 0x30 + 0x10));
        if (((uVar4 & 1) != 0) && (*(int *)(param_1[10] + lVar6 * 0x30 + 0x1c) == 2)) {
          if (*(int *)(param_1[10] + lVar6 * 0x30 + 8) == -1) {
LAB_0021b8a8:
            FUN_0021d60c(&local_50,param_1,1,&uStack_21,1,0,(short)param_1[0xf]);
            return;
          }
          FUN_0021e530(&local_50,param_1);
          if ((int)local_50 != *(int *)(param_1[10] + lVar6 * 0x30 + 8)) goto LAB_0021b8a8;
        }
      }
      lVar6 = lVar6 + 1;
    } while ((int)((uint)lVar6 & 0xffff) < (int)(*(ushort *)(param_1 + 0xc) - 1));
  }
  uVar4 = FUN_002aed20(param_1[0xb]);
  if ((uVar4 & 1) != 0) {
    FUN_0021d60c(&local_50,param_1,2,&uStack_21,1,0,(short)param_1[0xf]);
    FUN_00229780(&local_40,&local_50);
    if (local_40 != 0) {
      return;
    }
  }
  if (*(ushort *)(param_1 + 0x10) < 2) {
    iVar1 = *(int *)((long)param_1 + 0x6c);
  }
  else {
    local_48 = 0;
    local_50 = 0x800000000000000;
    (**(code **)(*param_1 + 0x10))(param_1,&local_50);
    iVar1 = *(int *)((long)param_1 + 0x6c);
  }
  if (iVar1 == 1) {
    *(undefined4 *)((long)param_1 + 0x6c) = 2;
    uVar2 = *(ushort *)(param_1 + 0xc);
  }
  else {
    local_48 = 0;
    local_50 = 0x800000000000000;
    (**(code **)(*param_1 + 0x10))(param_1,&local_50);
    *(undefined4 *)((long)param_1 + 0x6c) = 2;
    uVar2 = *(ushort *)(param_1 + 0xc);
  }
  if (1 < uVar2) {
    lVar6 = 0;
    do {
      uVar4 = (**(code **)(*param_1 + 0x68))(param_1,param_1[10] + lVar6 * 0x30);
      if ((uVar4 & 1) != 0) {
        memset((void *)(param_1[10] + lVar6 * 0x30 + 8),0xff,4);
        *(undefined1 *)(param_1[10] + lVar6 * 0x30 + 2) = 0;
      }
      lVar6 = lVar6 + 1;
    } while ((int)((uint)lVar6 & 0xffff) < (int)(*(ushort *)(param_1 + 0xc) - 1));
  }
  return;
}


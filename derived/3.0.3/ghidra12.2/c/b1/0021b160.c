
void FUN_0021b160(long *param_1)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 local_4c;
  undefined4 local_44;
  undefined8 local_40;
  undefined4 local_38;
  uint local_24;
  
  local_24 = 0;
  if (param_1[0xb] == 0) {
    local_38 = 0;
    local_40 = 0x800000000000000;
    (**(code **)(*param_1 + 0x10))(param_1,&local_40);
    FUN_002afca0(&local_40,param_1[0xb],&local_24,(int)param_1[0xd]);
  }
  else {
    FUN_002afca0(&local_40,param_1[0xb],&local_24,(int)param_1[0xd]);
  }
  if ((int)local_40 != 0) {
    local_44 = 0;
    local_4c = 0x800000000000000;
    (**(code **)(*param_1 + 0x10))(param_1,&local_4c);
  }
  uVar3 = *(uint *)(param_1 + 0xd);
  if (uVar3 < local_24) {
    local_44 = 0;
    local_4c = 0x800000000000000;
    (**(code **)(*param_1 + 0x10))(param_1,&local_4c);
    uVar3 = *(uint *)(param_1 + 0xd);
  }
  *(uint *)(param_1 + 0xd) = uVar3 - local_24;
  if (((*(char *)((long)param_1 + 0x74) != '\0') && (*(int *)((long)param_1 + 0x7c) == 0)) &&
     (*(int *)((long)param_1 + 0x6c) != 0)) {
    uVar1 = FUN_002aed20(param_1[0xb]);
    if ((uVar1 & 1) != 0) {
      FUN_0021d60c(&local_40,param_1,7,&local_4c,1,0,(short)param_1[0xf]);
      if ((int)local_40 != 0) goto LAB_0021b248;
    }
    *(undefined1 *)((long)param_1 + 0x74) = 0;
  }
LAB_0021b248:
  if ((*(char *)((long)param_1 + 0x75) != '\0') && (*(int *)((long)param_1 + 0x6c) != 0)) {
    uVar1 = FUN_002aed20(param_1[0xb]);
    if ((uVar1 & 1) != 0) {
      FUN_0021d60c(&local_40,param_1,8,&local_4c,1,0,(short)param_1[0xf]);
      if ((int)local_40 != 0) goto LAB_0021b290;
    }
    *(undefined1 *)((long)param_1 + 0x75) = 0;
  }
LAB_0021b290:
  if ((*(char *)((long)param_1 + 0x76) != '\0') && (*(int *)((long)param_1 + 0x6c) != 0)) {
    uVar1 = FUN_002aed20(param_1[0xb]);
    if ((uVar1 & 1) != 0) {
      FUN_0021d60c(&local_40,param_1,2,&local_4c,1,0,(short)param_1[0xf]);
      if ((int)local_40 != 0) goto LAB_0021b2d8;
    }
    *(undefined1 *)((long)param_1 + 0x76) = 0;
  }
LAB_0021b2d8:
  if (1 < *(ushort *)(param_1 + 0xc)) {
    lVar6 = 0;
    do {
      uVar1 = (**(code **)(*param_1 + 0x68))(param_1,param_1[10] + lVar6 * 0x30);
      if ((uVar1 & 1) != 0) {
        lVar2 = param_1[10];
        if (lVar2 == 0) {
          local_40 = 0x800000000000000;
          local_38 = 0;
          (**(code **)(*param_1 + 0x10))(param_1,&local_40);
          lVar2 = param_1[10];
          lVar4 = lVar2 + lVar6 * 0x30;
          lVar5 = *(long *)(lVar4 + 0x10);
        }
        else {
          lVar4 = lVar2 + lVar6 * 0x30;
          lVar5 = *(long *)(lVar4 + 0x10);
        }
        if (lVar5 == 0) {
          *(char *)(lVar4 + 4) = '\0';
        }
        else if (*(char *)(lVar4 + 4) != '\0') {
          FUN_0021d60c(&local_40,param_1,3,&local_4c,1,*(undefined4 *)(lVar2 + lVar6 * 0x30 + 0x18),
                       (short)param_1[0xf]);
          if ((int)local_40 == 0) {
            *(undefined1 *)(param_1[10] + lVar6 * 0x30 + 4) = 0;
          }
        }
      }
      lVar6 = lVar6 + 1;
    } while ((int)((uint)lVar6 & 0xffff) < (int)(*(ushort *)(param_1 + 0xc) - 1));
  }
  if (*(ushort *)((long)param_1 + 0xa2) < *(ushort *)(param_1[0xb] + 0x32)) {
    *(ushort *)((long)param_1 + 0xa2) = *(ushort *)(param_1[0xb] + 0x32);
  }
  return;
}


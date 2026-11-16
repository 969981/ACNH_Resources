
bool FUN_029066e0(char *param_1,long param_2)

{
  short sVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  undefined8 local_80;
  undefined8 *local_78;
  undefined8 ****local_70;
  undefined8 ****ppppuStack_68;
  undefined8 ***local_60;
  undefined8 **local_58;
  undefined8 *local_50;
  undefined8 local_48;
  undefined8 local_40 [4];
  
  if ((((*param_1 == '\x01') && (DAT_05ab5ea8 != 0)) && (*(int *)(DAT_05ab5ea8 + 0x14) != 0)) &&
     ((DAT_05ab8198 == (ushort *)0x0 || ((*DAT_05ab8198 & 1) == 0)))) {
    local_60 = &local_58;
    local_80 = 0;
    local_78 = (undefined8 *)0x0;
    local_58 = &local_50;
    local_50 = &local_48;
    local_70 = &local_60;
    local_48 = 0;
    if (local_40 != (undefined8 *)0x0) {
      local_80 = 0x400000000;
      local_78 = local_40;
    }
    ppppuStack_68 = local_70;
    uVar3 = FUN_03770770((short *)(param_2 + 8),&local_80);
    if ((uVar3 & 1) != 0) {
      if ((int)local_80 != 0) {
        lVar4 = (long)(int)local_80 << 3;
        do {
          if (*(short *)*local_78 == *(short *)(param_1 + 0x48b4) ||
              *(short *)*local_78 == *(short *)(param_1 + 0x48b6)) goto LAB_029067d0;
          local_78 = local_78 + 1;
          lVar4 = lVar4 + -8;
        } while (lVar4 != 0);
      }
    }
    sVar1 = *(short *)(param_2 + 8);
    if (sVar1 == *(short *)(param_1 + 0x48b4)) {
LAB_029067d0:
      bVar2 = true;
    }
    else {
      bVar2 = sVar1 == *(short *)(param_1 + 0x48b6);
    }
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}


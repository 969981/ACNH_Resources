
undefined8 FUN_0049dd30(long *param_1,undefined8 param_2)

{
  char *pcVar1;
  uint uVar2;
  long lVar3;
  char *pcVar4;
  ulong uVar5;
  undefined1 *puVar6;
  size_t __n;
  undefined1 local_94 [4];
  char *local_90;
  char *pcStack_88;
  undefined1 auStack_80 [16];
  char *local_70;
  char *local_68;
  
  FUN_004228d0(param_2);
  local_70 = (char *)*param_1;
  local_68 = (char *)param_1[1];
  lVar3 = FUN_00429910(&local_70,0x26,0);
  if (lVar3 != 0) {
    do {
      pcVar1 = local_68;
      FUN_00423880(param_2,local_70,(int)lVar3 - (int)local_70);
      local_70 = (char *)(lVar3 + 1);
      local_68 = pcVar1;
      uVar5 = FUN_00429890(&local_70,&DAT_0409a4bd,&DAT_0409a4c1);
      if ((uVar5 & 1) == 0) {
        uVar5 = FUN_00429890(&local_70,&DAT_040c8714,&DAT_040c8717);
        if ((uVar5 & 1) != 0) {
          puVar6 = &DAT_0409a096;
          goto LAB_0049df4c;
        }
        uVar5 = FUN_00429890(&local_70,&DAT_040e7e99,&DAT_040e7e9c);
        if ((uVar5 & 1) != 0) {
          puVar6 = &DAT_0407f901;
          goto LAB_0049df4c;
        }
        uVar5 = FUN_00429890(&local_70,&DAT_0407abf1,&DAT_0407abf6);
        if ((uVar5 & 1) != 0) {
          puVar6 = &DAT_040c7c06;
          goto LAB_0049df4c;
        }
        uVar5 = FUN_00429890(&local_70,&DAT_040f7ee6,&DAT_040f7eeb);
        if ((uVar5 & 1) != 0) {
          puVar6 = &DAT_0407fa97;
          goto LAB_0049df4c;
        }
        if ((local_70 == local_68) || (*local_70 != '#')) {
          return 0x80040200;
        }
        local_70 = local_70 + 1;
        pcVar4 = (char *)FUN_00429910(&local_70,0x3b,0);
        pcVar1 = local_68;
        if (pcVar4 == (char *)0x0) {
          return 0x80040200;
        }
        local_90 = local_70;
        if (pcVar4 == local_70) {
          return 0x80040200;
        }
        if (0xf < (ulong)((long)pcVar4 - (long)local_70)) {
          return 0x80040200;
        }
        pcStack_88 = pcVar4;
        uVar5 = FUN_00429a60(&local_90,&DAT_04141634);
        if ((uVar5 & 1) != 0) {
          return 0x80040200;
        }
        __n = (long)pcStack_88 - (long)local_90;
        memcpy(auStack_80,local_90,__n);
        auStack_80[__n] = 0;
        uVar2 = FUN_0043a2f0(auStack_80,0);
        if (0xff < uVar2) {
          return 0x80040200;
        }
        local_94[0] = (undefined1)uVar2;
        FUN_00423880(param_2,local_94,1);
        local_70 = pcVar4 + 1;
        local_68 = pcVar1;
      }
      else {
        puVar6 = &DAT_0408a2b0;
LAB_0049df4c:
        FUN_00423880(param_2,puVar6,1);
      }
      lVar3 = FUN_00429910(&local_70,0x26,0);
    } while (lVar3 != 0);
  }
  FUN_00423880(param_2,local_70,(int)local_68 - (int)local_70);
  return 0;
}


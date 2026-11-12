
uint FUN_006f5290(long *param_1,long *param_2,uint param_3)

{
  int iVar1;
  undefined1 *__src;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  void *__dest;
  long lVar6;
  void *__src_00;
  long lVar7;
  undefined *local_2b0;
  undefined1 *local_2a8;
  undefined4 local_2a0;
  undefined1 local_29c [255];
  undefined1 local_19d;
  undefined *local_198;
  undefined2 *local_190;
  int local_188;
  undefined4 local_180;
  undefined1 local_17c;
  undefined *local_178;
  undefined1 *puStack_170;
  undefined4 local_168;
  undefined1 local_164 [255];
  undefined1 local_65;
  
  (**(code **)(*param_1 + 0x38))();
  local_190 = (undefined2 *)param_1[1];
  local_188 = (int)param_1[2];
  local_198 = PTR_DAT_04bb4ca0 + 0x10;
  local_190[local_188 - 1] = 0;
  local_17c = 0;
  *local_190 = 0;
  local_180 = 0;
  uVar2 = FUN_03d4d0b0(&local_198,param_2,param_3);
  __dest = (void *)param_1[7];
  (**(code **)(*param_2 + 0x18))(param_2);
  __src_00 = (void *)param_2[1];
  if (__dest != __src_00) {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar4 = 0;
    do {
      if (*(char *)(param_2[1] + lVar4) == '\0') goto LAB_006f538c;
      lVar6 = param_2[1] + lVar4;
      if (*(char *)(lVar6 + 1) == '\0') {
        lVar4 = lVar4 + 1;
        goto LAB_006f538c;
      }
      if (*(char *)(lVar6 + 2) == '\0') {
        lVar4 = lVar4 + 2;
        goto LAB_006f538c;
      }
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
    lVar4 = 0;
LAB_006f538c:
    iVar1 = (int)lVar4;
    if ((int)param_1[8] <= (int)lVar4) {
      iVar1 = (int)param_1[8] + -1;
    }
    memcpy(__dest,__src_00,(long)iVar1);
    *(undefined1 *)((long)__dest + (long)iVar1) = 0;
  }
  local_19d = 0;
  local_2a0 = 0x100;
  local_2a8 = local_29c;
  local_29c[0] = 0;
  local_2b0 = PTR_DAT_04bb21f8 + 0x10;
  lVar4 = *(long *)(*(long *)(DAT_05af83f0 + 0x408) + 8);
  local_65 = 0;
  local_168 = 0x100;
  local_164[0] = 0;
  puStack_170 = local_164;
  local_178 = local_2b0;
  (**(code **)(*param_2 + 0x18))(param_2);
  FUN_038d1270(&local_178,"%s.msbt",param_2[1]);
  if (*(long *)(lVar4 + 0x10) != lVar4 + 8) {
    lVar7 = (long)*(int *)(lVar4 + 0x1c);
    lVar6 = *(long *)(lVar4 + 0x10) - lVar7;
    do {
      if ((lVar6 != 0) && (lVar3 = FUN_03d54360(lVar6,&local_178), lVar3 != 0)) {
        if (param_3 < *(uint *)(lVar3 + 8)) {
          FUN_03d53010(&local_178,&local_2b0,param_2,param_3);
          puVar5 = (undefined1 *)param_1[0x12];
          (**(code **)(local_2b0 + 0x18))(&local_2b0);
          __src = local_2a8;
          if (puVar5 == local_2a8) goto LAB_006f5518;
          (**(code **)(local_2b0 + 0x18))(&local_2b0);
          lVar4 = 0;
          goto LAB_006f54e0;
        }
        break;
      }
      lVar6 = *(long *)(lVar6 + lVar7 + 8) - lVar7;
    } while (lVar6 != (lVar4 + 8) - lVar7);
  }
  puVar5 = (undefined1 *)param_1[0x12];
  goto LAB_006f5514;
  while( true ) {
    if (local_2a8[lVar4 + 1] == '\0') {
      lVar4 = lVar4 + 1;
      goto LAB_006f5548;
    }
    if (local_2a8[lVar4 + 2] == '\0') {
      lVar4 = lVar4 + 2;
      goto LAB_006f5548;
    }
    lVar4 = lVar4 + 3;
    if (lVar4 == 0x80001) break;
LAB_006f54e0:
    if (local_2a8[lVar4] == '\0') goto LAB_006f5548;
  }
  lVar4 = 0;
LAB_006f5548:
  iVar1 = (int)lVar4;
  if ((int)param_1[0x13] <= (int)lVar4) {
    iVar1 = (int)param_1[0x13] + -1;
  }
  memcpy(puVar5,__src,(long)iVar1);
  puVar5 = puVar5 + iVar1;
LAB_006f5514:
  *puVar5 = 0;
LAB_006f5518:
  return uVar2 & 1;
}


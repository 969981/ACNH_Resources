
undefined8 FUN_01dd03e8(long param_1,long *param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  void *pvVar5;
  undefined4 *puVar6;
  int iVar7;
  long lVar8;
  undefined1 auStack_11e8 [9];
  undefined8 local_11df;
  undefined8 local_11d7;
  undefined7 uStack_11cf;
  undefined1 local_11c8;
  undefined7 uStack_11c7;
  undefined8 local_11be;
  undefined8 local_11b6;
  undefined8 local_11ae;
  undefined8 local_11a6;
  undefined8 local_119e;
  undefined8 local_1196;
  undefined5 local_118e;
  undefined3 uStack_1189;
  undefined5 uStack_1186;
  undefined8 local_1168;
  undefined1 auStack_1158 [1088];
  undefined1 auStack_d18 [2104];
  undefined4 local_4e0;
  undefined4 local_4dc;
  undefined1 local_4d8;
  undefined8 local_4d7;
  undefined8 local_4cf;
  undefined6 uStack_4c7;
  undefined1 uStack_4c1;
  undefined1 local_4c0;
  undefined6 uStack_4bf;
  undefined1 uStack_4b9;
  undefined1 local_4b8;
  undefined1 local_4b7;
  undefined8 local_4b6;
  undefined8 local_4ae;
  undefined8 local_4a6;
  undefined8 local_49e;
  undefined8 local_496;
  undefined8 local_48e;
  undefined5 local_486;
  undefined3 uStack_481;
  undefined4 local_47e;
  undefined1 uStack_47a;
  undefined1 local_479;
  undefined8 local_478;
  undefined4 local_470;
  undefined1 local_46c;
  undefined8 local_468;
  undefined8 local_460;
  undefined8 local_458;
  undefined1 auStack_450 [1024];
  
  if (*(int *)(param_1 + 8) != 0) {
    return 0;
  }
  *(undefined1 *)(param_1 + 0x160) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  if (*(char *)(param_1 + 0x161) == '\0') {
    return 0;
  }
  if (*(char *)(param_1 + 0x162) == '\0') {
    return 0;
  }
  if (*(char *)(param_1 + 0x163) != '\0') {
    return 0;
  }
  if ((*(int *)(*(long *)PTR_DAT_04bb21d0 + 0x78) != 0) &&
     (*(int *)(*(long *)PTR_DAT_04bb21d0 + 0xc4) - 1U < 2)) {
    return 0;
  }
  lVar8 = *param_2;
  if (lVar8 == 0) {
    return 0;
  }
  uStack_4bf = 0;
  uStack_4b9 = 0;
  uStack_4c7 = 0;
  uStack_4c1 = 0;
  local_4c0 = 0;
  local_4cf = 0;
  local_4d7 = 0;
  local_4b6 = 0;
  local_4ae = 0;
  local_4a6 = 0;
  local_49e = 0;
  local_496 = 0;
  local_48e = 0;
  local_486 = 0;
  uStack_481 = 0;
  local_47e = 0;
  uStack_47a = 0;
  local_460 = 0;
  memset(auStack_450,0,0x400);
  uStack_11c7 = 0;
  uStack_11cf = 0;
  local_11c8 = 0;
  local_11d7 = 0;
  local_11df = 0;
  local_11be = 0;
  local_11b6 = 0;
  local_11ae = 0;
  local_11a6 = 0;
  local_119e = 0;
  local_1196 = 0;
  local_118e = 0;
  uStack_1189 = 0;
  uStack_1186 = 0;
  local_1168 = 0;
  memset(auStack_1158,0,0x400);
  memset(auStack_d18,0,0x820);
  uVar3 = FUN_01cf4ef0(&local_4e0,auStack_11e8,lVar8,(char)param_2[1],(long)param_2 + 0xc,
                       PTR_DAT_04bb32e0);
  puVar1 = PTR_DAT_04bc1048;
  if ((uVar3 & 1) != 0) {
    uVar4 = FUN_01dd0780(*(undefined8 *)PTR_DAT_04bc1048,&local_4e0);
    *(undefined8 *)(param_1 + 0xa8) = uVar4;
    lVar8 = FUN_01dd095c(*(undefined8 *)puVar1,auStack_11e8);
    *(long *)(param_1 + 0xb0) = lVar8;
    if ((lVar8 != 0) && (*(long *)(param_1 + 0xa8) != 0)) {
      puVar6 = *(undefined4 **)(param_1 + 0xa0);
      *puVar6 = local_4e0;
      *(undefined8 *)((long)puVar6 + 9) = 0;
      *(undefined8 *)((long)puVar6 + 0x11) = 0;
      *(undefined8 *)((long)puVar6 + 0x19) = 0;
      *(undefined8 *)(puVar6 + 8) = 0;
      *(undefined8 *)((long)puVar6 + 0x5f) = 0;
      *(undefined8 *)((long)puVar6 + 0x5a) = 0;
      *(undefined8 *)((long)puVar6 + 0x52) = 0;
      *(undefined8 *)((long)puVar6 + 0x4a) = 0;
      *(undefined8 *)((long)puVar6 + 0x42) = 0;
      *(undefined8 *)((long)puVar6 + 0x3a) = 0;
      *(undefined8 *)((long)puVar6 + 0x32) = 0;
      *(undefined8 *)((long)puVar6 + 0x2a) = 0;
      puVar6[1] = local_4dc;
      *(undefined1 *)(puVar6 + 2) = local_4d8;
      *(ulong *)((long)puVar6 + 0x1f) = CONCAT62(uStack_4bf,CONCAT11(local_4c0,uStack_4c1));
      *(ulong *)((long)puVar6 + 0x19) = CONCAT17(local_4c0,CONCAT16(uStack_4c1,uStack_4c7));
      *(undefined8 *)((long)puVar6 + 0x11) = local_4cf;
      *(undefined8 *)((long)puVar6 + 9) = local_4d7;
      *(undefined1 *)(puVar6 + 10) = local_4b8;
      *(undefined1 *)((long)puVar6 + 0x29) = local_4b7;
      *(undefined8 *)((long)puVar6 + 0x42) = local_49e;
      *(undefined8 *)((long)puVar6 + 0x3a) = local_4a6;
      *(undefined8 *)((long)puVar6 + 0x32) = local_4ae;
      *(undefined8 *)((long)puVar6 + 0x2a) = local_4b6;
      *(undefined4 *)((long)puVar6 + 0x62) = local_47e;
      *(ulong *)((long)puVar6 + 0x5a) = CONCAT35(uStack_481,local_486);
      *(undefined8 *)((long)puVar6 + 0x52) = local_48e;
      *(undefined8 *)((long)puVar6 + 0x4a) = local_496;
      *(undefined1 *)((long)puVar6 + 0x67) = local_479;
      puVar6[0x1c] = local_470;
      *(undefined8 *)(puVar6 + 0x1a) = local_478;
      *(undefined1 *)(puVar6 + 0x1d) = local_46c;
      *(undefined8 *)(puVar6 + 0x1e) = local_468;
      *(undefined8 *)(puVar6 + 0x20) = 0;
      uVar2 = (undefined4)local_460;
      *(undefined4 *)((long)puVar6 + 0x83) = local_460._3_4_;
      puVar6[0x20] = uVar2;
      *(undefined8 *)(puVar6 + 0x22) = local_458;
      memset(puVar6 + 0x24,0,0x400);
      memcpy(puVar6 + 0x24,auStack_450,0x3ff);
      if (param_2[4] == 0) {
        return 0;
      }
      if (param_2[6] == 0) {
        return 0;
      }
      iVar7 = (int)param_2[5];
      if (0 < iVar7) {
        uVar4 = *(undefined8 *)(*(long *)PTR_DAT_04bb36f8 + 8);
        pvVar5 = (void *)FUN_038aa690(param_2[5] & 0xffffffff,uVar4,8,PTR_nothrow_04bb2988);
        if (pvVar5 != (void *)0x0) {
          *(int *)(param_1 + 0x128) = iVar7;
          *(void **)(param_1 + 0x130) = pvVar5;
          memcpy(pvVar5,(void *)param_2[4],param_2[5]);
          if (param_2[6] == 0) {
LAB_01dd073c:
            FUN_03ebb160(param_1,2);
            return 1;
          }
          iVar7 = (int)param_2[7];
          if ((0 < iVar7) &&
             (pvVar5 = (void *)FUN_038aa690(param_2[7] & 0xffffffff,uVar4,8,PTR_nothrow_04bb2988),
             pvVar5 != (void *)0x0)) {
            *(int *)(param_1 + 0x138) = iVar7;
            *(void **)(param_1 + 0x140) = pvVar5;
            memcpy(pvVar5,(void *)param_2[6],param_2[7]);
            goto LAB_01dd073c;
          }
        }
      }
    }
    FUN_03ebb160(param_1,0);
  }
  return 0;
}


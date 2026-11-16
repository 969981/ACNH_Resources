
void FUN_02585080(long param_1,uint *param_2)

{
  int *piVar1;
  int *piVar2;
  byte bVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  byte bVar11;
  byte bVar12;
  byte local_64 [4];
  undefined4 local_60;
  undefined2 local_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  if (7 < *(byte *)(param_1 + 8)) {
    return;
  }
  FUN_02507c6c(&local_58,1,1,0,0);
  puVar4 = PTR_DAT_04bb5038;
  local_60 = local_58._4_4_;
  local_64[0] = (byte)local_58;
  if (7 < (byte)local_58) {
    local_64[0] = 0xff;
  }
  local_5c = (undefined2)local_50;
  if (7 < (byte)local_58) {
    return;
  }
  bVar11 = *(byte *)(param_1 + 8);
  bVar12 = bVar11;
  if (7 < bVar11) {
    bVar12 = 0xff;
  }
  bVar3 = (byte)local_58;
  if (bVar12 != (byte)local_58) {
    do {
      uVar9 = (ulong)bVar3;
      do {
        if (uVar9 == 7) {
          return;
        }
        uVar9 = uVar9 + 1;
        uVar6 = FUN_02507924(local_64,puVar4 + uVar9);
      } while ((uVar6 & 1) == 0);
      local_64[0] = puVar4[uVar9];
      if (7 < local_64[0]) {
        return;
      }
      bVar11 = *(byte *)(param_1 + 8);
      bVar12 = bVar11;
      if (7 < bVar11) {
        bVar12 = 0xff;
      }
      bVar3 = local_64[0];
    } while (bVar12 != local_64[0]);
  }
  if (bVar11 < 8) {
    local_58 = CONCAT71(local_58._1_7_,bVar11);
    lVar5 = FUN_02583354(*(undefined8 *)PTR_DAT_04bb4f78,&local_58,1);
  }
  else {
    if (*(int *)(param_1 + 0xc) == -1) {
      return;
    }
    if (DAT_05574040 == 0) {
      return;
    }
    lVar5 = FUN_026eec4c();
  }
  if (lVar5 == 0) {
    return;
  }
  lVar10 = lVar5 + 0x194b0;
  if (*(long *)(lVar5 + 0x194b8) == 0) {
    lVar10 = *(long *)(DAT_05574040 + 0x20);
  }
  lVar5 = *(long *)(lVar10 + 0x2a8b0);
  if (lVar5 == 0) {
    uVar9 = 0;
  }
  else {
    if (*(undefined8 **)(lVar5 + 0x10) == (undefined8 *)0x0) {
      uVar9 = 0;
    }
    else {
      uVar9 = (**(code **)**(undefined8 **)(lVar5 + 0x10))();
      lVar5 = *(long *)(lVar10 + 0x2a8b0);
      uVar9 = uVar9 & 0xffffffff;
      if (lVar5 == 0) goto LAB_02585234;
    }
    plVar7 = *(long **)(lVar5 + 0x20);
    if (plVar7 != (long *)0x0) {
      local_58 = *(long *)(lVar10 + 0x2a890);
      local_50 = *(undefined8 *)(lVar10 + 0x2a898);
      uStack_48 = 0x1e0;
      (**(code **)(*plVar7 + 0x20))(plVar7,&local_58);
    }
  }
LAB_02585234:
  piVar1 = (int *)(*(long *)(lVar10 + 0x2a898) + *(long *)(lVar10 + 0x2a890));
  piVar2 = piVar1 + *param_2;
  if (0x77 < *param_2) {
    piVar2 = piVar1;
  }
  *piVar2 = *piVar2 + 1;
  if ((((uVar9 & 1) != 0) && (*(long *)(lVar10 + 0x2a8b0) != 0)) &&
     (puVar8 = *(undefined8 **)(*(long *)(lVar10 + 0x2a8b0) + 0x18), puVar8 != (undefined8 *)0x0)) {
    (**(code **)*puVar8)();
  }
  FUN_02585350(param_1,0);
  if ((char)param_2[1] != '\0') {
    FUN_02585350(param_1,4);
  }
  if ((*(int *)(DAT_04cd19d8 + 0x15c) == 1) && (*(byte *)(DAT_04cd19d8 + 0x160) - 1 < 0xfe)) {
    FUN_02585350(param_1,2);
    FUN_02585350(param_1,1);
  }
  if ((1 < *(uint *)(DAT_0537d558 + 0x10)) && (1 < *(byte *)(*DAT_0537d558 + 0x476))) {
    FUN_02585350(param_1,1);
    lVar5 = *DAT_0537d558;
    if ((lVar5 != 0) && ((*(int *)(lVar5 + 0x508) != 0 && (*(char *)(lVar5 + 0x55d) != '\0')))) {
      FUN_02585350(param_1,3);
    }
  }
  return;
}


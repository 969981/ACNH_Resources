
void FUN_0316d244(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  char *pcVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 *local_40;
  undefined4 local_38;
  
  plVar6 = param_2 + 4;
  (**(code **)(*plVar6 + 0x18))(plVar6);
  (**(code **)(*plVar6 + 0x18))(plVar6);
  pcVar5 = (char *)param_2[5];
  if (pcVar5 != "") {
    if (*pcVar5 == '/') {
      if (pcVar5[1] != 'L') {
        return;
      }
      if (pcVar5[2] != '_') {
        return;
      }
      if (pcVar5[3] != 'P') {
        return;
      }
      if (pcVar5[4] != 'l') {
        return;
      }
      if (pcVar5[5] != 'a') {
        return;
      }
      if (pcVar5[6] != 'y') {
        return;
      }
      if (pcVar5[7] != 'e') {
        return;
      }
      if (pcVar5[8] != 'r') {
        return;
      }
      if (pcVar5[9] != 'M') {
        return;
      }
      if (pcVar5[10] != 'a') {
        return;
      }
      if (pcVar5[0xb] != 'r') {
        return;
      }
      if (pcVar5[0xc] != 'k') {
        return;
      }
      if (pcVar5[0xd] != 'e') {
        return;
      }
      if (pcVar5[0xe] != 'r') {
        return;
      }
      if (pcVar5[0xf] != '_') {
        return;
      }
      puVar7 = (undefined8 *)param_2[1];
      if (((*PTR_DAT_04bc4ff0 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4ff0), iVar1 != 0)) {
        *(undefined **)PTR_DAT_04bc4fe8 = PTR_DAT_04bc4e48 + 0x10;
        __cxa_guard_release(PTR_DAT_04bc4ff0);
      }
      if (puVar7 == (undefined8 *)0x0) {
        return;
      }
      uVar3 = (**(code **)*puVar7)(puVar7,PTR_DAT_04bc4fe8);
      if ((uVar3 & 1) == 0) {
        return;
      }
      if (((DAT_056fd330 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056fd330), iVar1 != 0)) {
        DAT_056fd2d0 = PTR_DAT_04bb2020 + 0x10;
        DAT_056fd2d8 = "Rotate";
        DAT_056fd2e8 = &DAT_0407ebb1;
        DAT_056fd308 = &DAT_0407ebb1;
        DAT_056fd2f8 = "Scale";
        DAT_056fd318 = &DAT_0407c03e;
        DAT_056fd328 = &DAT_0407ebb1;
        DAT_056fd2e0 = DAT_056fd2d0;
        DAT_056fd2f0 = DAT_056fd2d0;
        DAT_056fd300 = DAT_056fd2d0;
        DAT_056fd310 = DAT_056fd2d0;
        DAT_056fd320 = DAT_056fd2d0;
        __cxa_guard_release(&DAT_056fd330);
      }
      if (((DAT_056fd348 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056fd348), iVar1 != 0)) {
        DAT_056fd338 = 0x300000002;
        DAT_056fd340 = &DAT_056fd2d0;
        __cxa_guard_release(&DAT_056fd348);
      }
      uStack_58 = *param_2;
      local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
      local_40 = &DAT_056fd338;
      lVar4 = puVar7[2];
      lVar2 = lVar4 + 0x208;
      goto LAB_0316d2d4;
    }
    if (*pcVar5 != '\0') {
      return;
    }
  }
  if (param_2[1] == 0) {
    return;
  }
  local_40 = (undefined8 *)0x0;
  uStack_58 = *param_2;
  local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
  lVar4 = *(long *)(param_2[1] + 0x10);
  lVar2 = lVar4 + 0x200;
LAB_0316d2d4:
  local_38 = 0;
  uStack_48 = 0;
  local_50 = 0;
  FUN_0386e230(lVar2,lVar4,&local_60);
  return;
}


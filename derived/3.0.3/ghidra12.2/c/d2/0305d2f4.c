
void FUN_0305d2f4(undefined8 param_1,undefined8 *param_2)

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
  undefined *local_48;
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
      if (pcVar5[3] != 'M') {
        return;
      }
      if (pcVar5[4] != 'y') {
        return;
      }
      if (pcVar5[5] != 'D') {
        return;
      }
      if (pcVar5[6] != 'e') {
        return;
      }
      if (pcVar5[7] != 's') {
        return;
      }
      if (pcVar5[8] != 'i') {
        return;
      }
      if (pcVar5[9] != 'g') {
        return;
      }
      if (pcVar5[10] != 'n') {
        return;
      }
      if (pcVar5[0xb] != 'B') {
        return;
      }
      if (pcVar5[0xc] != 't') {
        return;
      }
      if (pcVar5[0xd] != 'n') {
        return;
      }
      if (pcVar5[0xe] != '_') {
        return;
      }
      puVar7 = (undefined8 *)param_2[1];
      if (((*PTR_DAT_04bc4e40 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4e40), iVar1 != 0)) {
        *(undefined **)PTR_DAT_04bc4e38 = PTR_DAT_04bc4e48 + 0x10;
        __cxa_guard_release(PTR_DAT_04bc4e40);
      }
      if (puVar7 == (undefined8 *)0x0) {
        return;
      }
      uVar3 = (**(code **)*puVar7)(puVar7,PTR_DAT_04bc4e38);
      if ((uVar3 & 1) == 0) {
        return;
      }
      if (((DAT_056dde60 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056dde60), iVar1 != 0)) {
        DAT_056dddc0 = PTR_DAT_04bb2020 + 0x10;
        DAT_056dddc8 = "Check";
        DAT_056dddd8 = &DAT_0407ebb1;
        DAT_056dddf8 = &DAT_0407ebb1;
        DAT_056ddde8 = &DAT_040d4018;
        DAT_056dde08 = &DAT_040fe5ab;
        DAT_056dde28 = "Shake";
        DAT_056dde18 = &DAT_0407ebb1;
        DAT_056dde38 = &DAT_0407ebb1;
        DAT_056dde48 = "UploadType";
        DAT_056dde58 = &DAT_0407ebb1;
        DAT_056dddd0 = DAT_056dddc0;
        DAT_056ddde0 = DAT_056dddc0;
        DAT_056dddf0 = DAT_056dddc0;
        DAT_056dde00 = DAT_056dddc0;
        DAT_056dde10 = DAT_056dddc0;
        DAT_056dde20 = DAT_056dddc0;
        DAT_056dde30 = DAT_056dddc0;
        DAT_056dde40 = DAT_056dddc0;
        DAT_056dde50 = DAT_056dddc0;
        __cxa_guard_release(&DAT_056dde60);
      }
      if (((DAT_056dde78 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056dde78), iVar1 != 0)) {
        DAT_056dde68 = 0x500000002;
        DAT_056dde70 = &DAT_056dddc0;
        __cxa_guard_release(&DAT_056dde78);
      }
      local_48 = (undefined *)0x0;
      uStack_58 = *param_2;
      local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
      local_40 = &DAT_056dde68;
      lVar4 = puVar7[2];
      lVar2 = lVar4 + 0x2c8;
      goto LAB_0305d39c;
    }
    if (*pcVar5 != '\0') {
      return;
    }
  }
  if (((DAT_056dddb8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056dddb8), iVar1 != 0)) {
    DAT_056ddda8 = PTR_DAT_04bb2020 + 0x10;
    DAT_056dddb0 = "@T_Header_00";
    __cxa_guard_release(&DAT_056dddb8);
  }
  if (param_2[1] == 0) {
    return;
  }
  local_48 = &DAT_04af7e70;
  local_40 = (undefined8 *)0x0;
  uStack_58 = *param_2;
  local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
  lVar4 = *(long *)(param_2[1] + 0x10);
  lVar2 = lVar4 + 0x200;
LAB_0305d39c:
  local_38 = 0;
  local_50 = 0;
  FUN_0386e230(lVar2,lVar4,&local_60);
  return;
}


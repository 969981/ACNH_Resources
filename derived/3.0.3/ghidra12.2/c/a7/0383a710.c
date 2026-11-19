
void FUN_0383a710(long param_1,undefined1 *param_2,undefined1 param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined1 *__src;
  long *plVar4;
  undefined8 local_250;
  undefined ***local_248;
  undefined8 uStack_240;
  undefined **local_238;
  undefined1 local_230;
  undefined1 local_22f;
  undefined1 local_22e;
  undefined8 local_228;
  undefined8 uStack_220;
  long local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined *puStack_1f8;
  char *local_1f0;
  undefined *puStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined1 local_1c8;
  undefined1 local_1c7;
  undefined8 local_1c0;
  undefined *puStack_1b8;
  undefined1 *local_1b0;
  undefined4 local_1a8;
  undefined1 local_1a4 [127];
  undefined1 local_125;
  undefined *local_120;
  undefined1 *puStack_118;
  int local_110;
  undefined1 local_10c [127];
  undefined1 local_8d;
  undefined *local_88;
  undefined1 *puStack_80;
  undefined4 local_78;
  undefined1 local_74 [31];
  undefined1 local_55;
  
  uStack_210 = 0;
  local_238 = &PTR_LAB_04b5d938;
  local_1b0 = local_1a4;
  local_125 = 0;
  local_1a8 = 0x80;
  local_1a4[0] = 0;
  puStack_1f8 = PTR_DAT_04bb2020 + 0x10;
  local_10c[0] = 0;
  puStack_1b8 = PTR_DAT_04bb2d88 + 0x10;
  local_110 = 0x80;
  local_1c0 = 0;
  puStack_1e8 = PTR_DAT_04bcb3b8 + 0x10;
  local_8d = 0;
  local_74[0] = 0;
  local_78 = 0x20;
  puStack_80 = local_74;
  local_88 = PTR_DAT_04bb2028 + 0x10;
  local_55 = 0;
  local_208 = 0;
  local_200 = 0;
  local_228 = *(undefined8 *)(param_1 + 0x50);
  uStack_220 = 0;
  local_218 = param_1 + 0x290;
  local_22e = 1;
  local_230 = 1;
  local_1f0 = "CreateELink";
  uStack_1d8 = *(undefined8 *)(param_2 + 0x10);
  local_1e0 = 0;
  local_1d0 = *(undefined8 *)(param_2 + 0x50);
  local_1c8 = *param_2;
  local_1c7 = param_2[1];
  plVar4 = (long *)(param_2 + 0x30);
  local_22f = param_3;
  local_120 = puStack_1b8;
  puStack_118 = local_10c;
  (**(code **)(*plVar4 + 0x18))(plVar4);
  __src = *(undefined1 **)(param_2 + 0x38);
  if (local_10c != __src) {
    (**(code **)(*(long *)(param_2 + 0x30) + 0x18))(plVar4);
    lVar3 = 0;
    do {
      if (*(char *)(*(long *)(param_2 + 0x38) + lVar3) == '\0') goto LAB_0383a89c;
      lVar1 = *(long *)(param_2 + 0x38) + lVar3;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar3 = lVar3 + 1;
        goto LAB_0383a89c;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar3 = lVar3 + 2;
        goto LAB_0383a89c;
      }
      lVar3 = lVar3 + 3;
    } while (lVar3 != 0x80001);
    lVar3 = 0;
LAB_0383a89c:
    iVar2 = (int)lVar3;
    if (local_110 <= (int)lVar3) {
      iVar2 = local_110 + -1;
    }
    memcpy(local_10c,__src,(long)iVar2);
    local_10c[iVar2] = 0;
  }
  uStack_240 = *(undefined8 *)(param_2 + 0x50);
  local_250 = 0;
  local_248 = &local_238;
  FUN_03f45184(param_1 + 0x58,&local_250);
  return;
}


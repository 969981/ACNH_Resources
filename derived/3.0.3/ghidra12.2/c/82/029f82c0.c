
undefined8 FUN_029f82c0(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  long lVar4;
  undefined8 *puVar3;
  undefined8 uVar5;
  char *pcVar6;
  ulong uVar7;
  
  pcVar6 = *(char **)(param_3 + 8);
  if (pcVar6 == "$Npc_Vocal") {
LAB_029f8330:
    lVar4 = param_1 + 0x30;
  }
  else {
    uVar7 = 0;
    bVar1 = true;
    do {
      if (pcVar6[uVar7] != "$Npc_Vocal"[uVar7]) break;
      if (pcVar6[uVar7] == '\0') {
        if (bVar1) goto LAB_029f8330;
        break;
      }
      bVar1 = uVar7 < 0x80000;
      uVar7 = uVar7 + 1;
    } while (uVar7 != 0x80001);
    if (pcVar6 != "$Npc_Whistle") {
      uVar7 = 0;
      bVar1 = true;
      while( true ) {
        if (pcVar6[uVar7] != "$Npc_Whistle"[uVar7]) {
          return 0;
        }
        if (pcVar6[uVar7] == '\0') break;
        bVar1 = uVar7 < 0x80000;
        uVar7 = uVar7 + 1;
        if (uVar7 == 0x80001) {
          return 0;
        }
      }
      if (!bVar1) {
        return 0;
      }
    }
    lVar4 = param_1 + 0x68;
  }
  puVar3 = (undefined8 *)FUN_03f2d7f0(lVar4);
  if (((*PTR_DAT_04bc4000 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_04bc4000), iVar2 != 0))
  {
    *(undefined **)PTR_DAT_04bc3ff8 = PTR_DAT_04bb4448 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4000);
  }
  if ((((puVar3 == (undefined8 *)0x0) ||
       (uVar7 = (**(code **)*puVar3)(puVar3,PTR_DAT_04bc3ff8), (uVar7 & 1) == 0)) ||
      (**(char **)(param_1 + 0xa8) == '\0')) ||
     ((puVar3 = (undefined8 *)puVar3[5], puVar3 == (undefined8 *)0x0 ||
      (uVar7 = (**(code **)*puVar3)(puVar3,param_2,param_1 + 0xa0), (uVar7 & 1) == 0)))) {
    uVar5 = 2;
  }
  else {
    uVar5 = 1;
  }
  return uVar5;
}


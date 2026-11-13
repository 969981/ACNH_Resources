
void FUN_01480b3c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined *local_40;
  char *pcStack_38;
  
  lVar1 = param_1 + 0x8f8;
  FUN_03ebac90(lVar1,7,0,0,0);
  *(undefined4 *)(param_1 + 0x908) = *(undefined4 *)(param_1 + 0x900);
  uVar4 = *(uint *)(param_1 + 0x910);
  *(undefined4 *)(param_1 + 0x90c) = *(undefined4 *)(param_1 + 0x904);
  *(undefined4 *)(param_1 + 0x904) = 0;
  *(undefined1 *)(param_1 + 0x919) = 1;
  *(uint *)(param_1 + 0x900) = uVar4;
  if (uVar4 != 0xffffffff) {
    if (*(uint *)(param_1 + 0x920) <= uVar4) {
      uVar4 = 0;
    }
    puVar5 = *(undefined8 **)(*(long *)(param_1 + 0x928) + (long)(int)uVar4 * 0x40);
    if (puVar5 != (undefined8 *)0x0) {
      (*(code *)*puVar5)();
    }
  }
  puVar2 = PTR_DAT_04bb2020 + 0x10;
  pcStack_38 = "EditState::cNone";
  local_40 = puVar2;
  FUN_03ebaf40(lVar1,0,&local_40);
  puVar5 = *(undefined8 **)(param_1 + 0x928);
  puVar5[2] = &LAB_01480e50;
  puVar5[3] = 0;
  puVar5[4] = &LAB_01480e54;
  puVar5[5] = 0;
  *puVar5 = &PTR_LAB_049a53d0;
  puVar5[1] = param_1;
  puVar5[6] = &LAB_01480e58;
  puVar5[7] = 0;
  pcStack_38 = "EditState::cTrans";
  local_40 = puVar2;
  FUN_03ebaf40(lVar1,1,&local_40);
  puVar5 = (undefined8 *)
           (*(long *)(param_1 + 0x928) + (ulong)(1 < *(uint *)(param_1 + 0x920)) * 0x40);
  puVar5[4] = &LAB_01480f54;
  puVar5[5] = 0;
  *puVar5 = &PTR_LAB_049a53d0;
  puVar5[1] = param_1;
  puVar5[2] = &LAB_01480e60;
  puVar5[3] = 0;
  puVar5[6] = &LAB_01480fe0;
  puVar5[7] = 0;
  pcStack_38 = "EditState::cTransDrop";
  local_40 = puVar2;
  FUN_03ebaf40(lVar1,2,&local_40);
  puVar5 = (undefined8 *)
           (*(long *)(param_1 + 0x928) + (ulong)(2 < *(uint *)(param_1 + 0x920)) * 0x80);
  puVar5[4] = &LAB_014813c4;
  puVar5[5] = 0;
  *puVar5 = &PTR_LAB_049a53d0;
  puVar5[1] = param_1;
  puVar5[2] = &LAB_014810e0;
  puVar5[3] = 0;
  puVar5[6] = &LAB_014813f0;
  puVar5[7] = 0;
  pcStack_38 = "EditState::cRotate90";
  local_40 = puVar2;
  FUN_03ebaf40(lVar1,3,&local_40);
  lVar3 = 0xc0;
  if (*(uint *)(param_1 + 0x920) < 4) {
    lVar3 = 0;
  }
  puVar5 = (undefined8 *)(*(long *)(param_1 + 0x928) + lVar3);
  puVar5[2] = &LAB_014813f4;
  puVar5[3] = 0;
  *puVar5 = &PTR_LAB_049a53d0;
  puVar5[1] = param_1;
  puVar5[4] = &LAB_014813f8;
  puVar5[5] = 0;
  puVar5[6] = &LAB_01481400;
  puVar5[7] = 0;
  pcStack_38 = "EditState::cRotate180";
  local_40 = puVar2;
  FUN_03ebaf40(lVar1,4,&local_40);
  puVar5 = (undefined8 *)
           (*(long *)(param_1 + 0x928) + (ulong)(4 < *(uint *)(param_1 + 0x920)) * 0x100);
  puVar5[4] = &LAB_01481680;
  puVar5[5] = 0;
  *puVar5 = &PTR_LAB_049a53d0;
  puVar5[1] = param_1;
  puVar5[2] = &LAB_0148167c;
  puVar5[3] = 0;
  puVar5[6] = &LAB_01481690;
  puVar5[7] = 0;
  pcStack_38 = "EditState::cCleanUp";
  local_40 = puVar2;
  FUN_03ebaf40(lVar1,5,&local_40);
  lVar3 = 0x140;
  if (*(uint *)(param_1 + 0x920) < 6) {
    lVar3 = 0;
  }
  puVar5 = (undefined8 *)(*(long *)(param_1 + 0x928) + lVar3);
  puVar5[2] = &LAB_0148190c;
  puVar5[3] = 0;
  *puVar5 = &PTR_LAB_049a53d0;
  puVar5[1] = param_1;
  puVar5[4] = &LAB_01481948;
  puVar5[5] = 0;
  puVar5[6] = &LAB_0148194c;
  puVar5[7] = 0;
  pcStack_38 = "EditState::cChild";
  local_40 = puVar2;
  FUN_03ebaf40(lVar1,6,&local_40);
  lVar1 = 0x180;
  if (*(uint *)(param_1 + 0x920) < 7) {
    lVar1 = 0;
  }
  puVar5 = (undefined8 *)(*(long *)(param_1 + 0x928) + lVar1);
  *puVar5 = &PTR_LAB_049a53d0;
  puVar5[1] = param_1;
  puVar5[2] = &LAB_01481950;
  puVar5[3] = 0;
  puVar5[4] = &LAB_01481a44;
  puVar5[5] = 0;
  puVar5[6] = &LAB_01481a50;
  puVar5[7] = 0;
  return;
}


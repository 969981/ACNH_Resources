
void FUN_03b21bf0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  
  pcVar2 = (char *)FUN_00364e30(param_2,&DAT_040ab352);
  pcVar3 = (char *)FUN_00364e30(param_2,"TouchOn");
  pcVar4 = (char *)FUN_00364e30(param_2,&DAT_040c4b6c);
  pcVar5 = (char *)FUN_00364e30(param_2,"TouchOff");
  pcVar6 = (char *)FUN_00364e30(param_2,"Decide");
  pcVar7 = (char *)FUN_00364e30(param_2,"TouchDecide");
  puVar8 = (undefined8 *)FUN_00367b30(0x50);
  if (puVar8 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar8 + 1) = 0;
    puVar8[2] = 0;
    puVar8[3] = 0;
    *puVar8 = &PTR_LAB_04b73a88;
    if (puVar8 + 4 != (undefined8 *)0x0) {
      puVar8[2] = puVar8 + 4;
      puVar8[4] = 0;
      *(undefined4 *)(puVar8 + 1) = 6;
      puVar8[5] = 0;
      *(undefined8 *)(puVar8[2] + 0x10) = 0;
      *(undefined8 *)(puVar8[2] + 0x18) = 0;
      *(undefined8 *)(puVar8[2] + 0x20) = 0;
      *(undefined8 *)(puVar8[2] + 0x28) = 0;
    }
    if ((pcVar2 != (char *)0x0) && (*pcVar2 != '\0')) {
      uVar9 = FUN_03b185ec(param_3,pcVar2,1);
      *(undefined8 *)puVar8[2] = uVar9;
      if (puVar8[3] == 0) {
        puVar8[3] = uVar9;
      }
    }
    if ((pcVar3 != (char *)0x0) && (*pcVar3 != '\0')) {
      uVar9 = FUN_03b185ec(param_3,pcVar3,0);
      *(undefined8 *)(puVar8[2] + (ulong)(1 < *(uint *)(puVar8 + 1)) * 8) = uVar9;
      if (puVar8[3] == 0) {
        puVar8[3] = uVar9;
      }
    }
    if ((pcVar4 != (char *)0x0) && (*pcVar4 != '\0')) {
      uVar9 = FUN_03b185ec(param_3,pcVar4,0);
      *(undefined8 *)(puVar8[2] + (ulong)(2 < *(uint *)(puVar8 + 1)) * 0x10) = uVar9;
      if (puVar8[3] == 0) {
        puVar8[3] = uVar9;
      }
    }
    if ((pcVar5 != (char *)0x0) && (*pcVar5 != '\0')) {
      uVar9 = FUN_03b185ec(param_3,pcVar5,0);
      lVar1 = 0x18;
      if (*(uint *)(puVar8 + 1) < 4) {
        lVar1 = 0;
      }
      *(undefined8 *)(puVar8[2] + lVar1) = uVar9;
      if (puVar8[3] == 0) {
        puVar8[3] = uVar9;
      }
    }
    if ((pcVar6 != (char *)0x0) && (*pcVar6 != '\0')) {
      uVar9 = FUN_03b185ec(param_3,pcVar6,0);
      *(undefined8 *)(puVar8[2] + (ulong)(4 < *(uint *)(puVar8 + 1)) * 0x20) = uVar9;
      if (puVar8[3] == 0) {
        puVar8[3] = uVar9;
      }
    }
    if ((pcVar7 != (char *)0x0) && (*pcVar7 != '\0')) {
      uVar9 = FUN_03b185ec(param_3,pcVar7,0);
      lVar1 = 0x28;
      if (*(uint *)(puVar8 + 1) < 6) {
        lVar1 = 0;
      }
      *(undefined8 *)(puVar8[2] + lVar1) = uVar9;
      if (puVar8[3] == 0) {
        puVar8[3] = uVar9;
      }
    }
  }
  *(undefined8 **)(param_1 + 0x48) = puVar8;
  return;
}


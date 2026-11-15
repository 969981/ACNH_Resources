
void FUN_02497414(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_54;
  float fStack_4c;
  float local_48;
  undefined4 local_44;
  undefined1 local_40;
  float local_3c;
  float fStack_38;
  float local_34;
  
  local_54 = 0;
  puVar2 = *(undefined8 **)(param_1 + 0x60);
  fStack_38 = (float)(int)*(short *)(param_1 + 0x190e) * 0.25;
  local_34 = (float)*(int *)(param_1 + 0x1910) * 0.001;
  local_3c = (float)*(int *)(param_1 + 0x190a) * 0.001;
  if (puVar2 == (undefined8 *)0x0) {
    if (((DAT_052461c0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_052461c0), iVar1 != 0)) {
      FUN_016fcf10(&DAT_05240280);
      FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_052461c0);
      puVar2 = &DAT_05240280;
    }
    else {
      puVar2 = &DAT_05240280;
    }
  }
  FUN_01706fac(puVar2,&local_3c,&local_54);
  local_54 = (ulong)CONCAT42(local_54._4_4_,*(undefined2 *)(param_1 + 0x1914)) << 0x10;
  FUN_0232ae10(param_1,&local_54);
  FUN_02497188(param_1,*(char *)(param_1 + 0x1922) != '\0');
  *(undefined8 *)(param_1 + 0x398) = 0;
  bVar3 = *(byte *)(param_1 + 0x1ee8);
  *(undefined2 *)(param_1 + 0x3a4) = 0x100;
  *(undefined4 *)(param_1 + 0x3a0) = 10;
  fStack_4c = (float)(int)*(short *)(param_1 + 0x191a) * 0.25;
  local_44 = 0x3e99999a;
  if (7 < bVar3) {
    bVar3 = 0xff;
  }
  local_54 = CONCAT71(local_54._1_7_,bVar3);
  local_40 = 1;
  local_48 = (float)*(int *)(param_1 + 0x191c) * 0.001;
  local_54 = CONCAT44((float)*(int *)(param_1 + 0x1916) * 0.001,(undefined4)local_54);
  FUN_016fa230(*(undefined4 *)(param_1 + 0x388),&local_54,*(undefined4 *)(param_1 + 0x230),1);
  return;
}


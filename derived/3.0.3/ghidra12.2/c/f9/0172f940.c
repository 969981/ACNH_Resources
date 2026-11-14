
void FUN_0172f940(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  char local_54 [31];
  undefined1 local_35;
  
  puVar1 = (undefined8 *)((long)param_1 + 0x2c);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  param_1[4] = puVar1;
  *(undefined4 *)(param_1 + 5) = 0x40;
  *(undefined1 *)((long)param_1 + 0x6b) = 0;
  if (puVar1 != &DAT_0407ebb1) {
    *(undefined1 *)puVar1 = 0;
  }
  *(undefined8 *)((long)param_1 + 0x74) = 0;
  puVar2 = PTR_DAT_04bb2bc0;
  *(undefined4 *)(param_1 + 0xe) = 0xffffffff;
  *(undefined8 *)((long)param_1 + 0x7c) = 0;
  *(undefined8 *)((long)param_1 + 0x84) = 0;
  lVar4 = 0;
  *(undefined1 *)((long)param_1 + 0x154) = 0;
  *(undefined8 *)((long)param_1 + 0x8c) = 0;
  puVar1 = param_1 + 0x1b;
  param_1[3] = puVar2 + 0x10;
  *(undefined8 *)((long)param_1 + 0x94) = 0;
  *(undefined4 *)((long)param_1 + 0x9c) = 0;
  param_1[0x29] = (undefined1 *)((long)param_1 + 0x154);
  *(undefined1 *)((long)param_1 + 0x163) = 0;
  param_1[0x16] = (undefined8 *)((long)param_1 + 0xc4);
  param_1[0x17] = 2;
  *(undefined4 *)(param_1 + 0x2a) = 0x10;
  *(undefined1 *)((long)param_1 + 0x16e) = 1;
  *(undefined4 *)(param_1 + 0x18) = 1;
  local_54[4] = 'u';
  local_54[5] = 'l';
  local_54[6] = 't';
  *(undefined4 *)((long)param_1 + 0xd4) = 0x20;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  *(undefined1 *)((long)param_1 + 0x16c) = 0;
  builtin_strncpy(local_54,"Defa",4);
  local_54[7] = 0;
  *(undefined8 **)((long)param_1 + 0xcc) = puVar1;
  *(undefined1 *)((long)param_1 + 0xf7) = 0;
  local_35 = 0;
  param_1[0x27] = 0;
  param_1[0x28] = &PTR_LAB_048fb098;
  do {
    if (local_54[lVar4] == '\0') {
LAB_0172fa78:
      iVar3 = (int)lVar4;
joined_r0x0172fa7c:
      if (0x1f < iVar3) {
        iVar3 = 0x1f;
      }
      goto LAB_0172fa84;
    }
    if (local_54[lVar4 + 1] == '\0') {
      lVar4 = lVar4 + 1;
      goto LAB_0172fa78;
    }
    if (local_54[lVar4 + 2] == '\0') {
      iVar3 = (int)lVar4 + 2;
      goto joined_r0x0172fa7c;
    }
    lVar4 = lVar4 + 3;
  } while (lVar4 != 0x80001);
  iVar3 = 0;
LAB_0172fa84:
  memcpy(puVar1,local_54,(long)iVar3);
  *(undefined1 *)((long)puVar1 + (long)iVar3) = 0;
  *(undefined8 *)((long)param_1 + 0xc4) = &PTR_LAB_048f9700;
  return;
}

